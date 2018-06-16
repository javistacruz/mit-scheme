/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:03-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 6
#define DEBUGGING_LABEL_1_2 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  Rvl = (current_block [OBJECT_1_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 6
#define DEBUGGING_LABEL_2_2 5
#define OBJECT_2_0 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  Rvl = (current_block [OBJECT_2_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
ystep_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stepper_stack_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stepper_stack_3)
DEFLABEL (stepper_stack_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
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
ystep_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stepper_runP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stepper_runP_3)
DEFLABEL (stepper_runP_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
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
ystep_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stepper_step_over_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stepper_step_over_3)
DEFLABEL (stepper_step_over_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
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
ystep_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stepper_step_untilP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stepper_step_untilP_3)
DEFLABEL (stepper_step_untilP_0)
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
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
ystep_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stepper_next_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stepper_next_3)
DEFLABEL (stepper_next_0)
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
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
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
ystep_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stepper_continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stepper_continuation_3)
DEFLABEL (stepper_continuation_0)
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
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
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
ystep_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stepper_last_event_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stepper_last_event_3)
DEFLABEL (stepper_last_event_0)
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
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [8]);
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
ystep_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stepper_finished_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stepper_finished_3)
DEFLABEL (stepper_finished_0)
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
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [9]);
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
ystep_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stepper_hooks_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stepper_hooks_3)
DEFLABEL (stepper_hooks_0)
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
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [10]);
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
ystep_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stepper_trace_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stepper_trace_3)
DEFLABEL (stepper_trace_0)
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
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [11]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 8
#define DEBUGGING_LABEL_13_2 7
#define OBJECT_13_2 6
#define OBJECT_13_1 5
#define OBJECT_13_0 4
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto set_stepper_stackB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_stepper_stackB_3)
DEFLABEL (set_stepper_stackB_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_13_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 8
#define DEBUGGING_LABEL_14_2 7
#define OBJECT_14_2 6
#define OBJECT_14_1 5
#define OBJECT_14_0 4
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto set_stepper_runPB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_stepper_runPB_3)
DEFLABEL (set_stepper_runPB_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_14_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define ENVIRONMENT_LABEL_15_3 8
#define DEBUGGING_LABEL_15_2 7
#define OBJECT_15_2 6
#define OBJECT_15_1 5
#define OBJECT_15_0 4
#define FREE_REFERENCES_LABEL_15_0 4
#define NUMBER_OF_LINKER_SECTIONS_15_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto set_stepper_step_overB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_stepper_step_overB_3)
DEFLABEL (set_stepper_step_overB_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_15_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_15_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 8
#define DEBUGGING_LABEL_16_2 7
#define OBJECT_16_2 6
#define OBJECT_16_1 5
#define OBJECT_16_0 4
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto set_stepper_step_untilPB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_stepper_step_untilPB_3)
DEFLABEL (set_stepper_step_untilPB_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_16_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 8
#define DEBUGGING_LABEL_17_2 7
#define OBJECT_17_2 6
#define OBJECT_17_1 5
#define OBJECT_17_0 4
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto set_stepper_nextB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_stepper_nextB_3)
DEFLABEL (set_stepper_nextB_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_17_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define ENVIRONMENT_LABEL_18_3 8
#define DEBUGGING_LABEL_18_2 7
#define OBJECT_18_2 6
#define OBJECT_18_1 5
#define OBJECT_18_0 4
#define FREE_REFERENCES_LABEL_18_0 4
#define NUMBER_OF_LINKER_SECTIONS_18_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto set_stepper_continuationB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_stepper_continuationB_3)
DEFLABEL (set_stepper_continuationB_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_18_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [7]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_18_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 8
#define DEBUGGING_LABEL_19_2 7
#define OBJECT_19_2 6
#define OBJECT_19_1 5
#define OBJECT_19_0 4
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto set_stepper_last_eventB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_stepper_last_eventB_3)
DEFLABEL (set_stepper_last_eventB_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_19_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [8]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_19_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 8
#define DEBUGGING_LABEL_20_2 7
#define OBJECT_20_2 6
#define OBJECT_20_1 5
#define OBJECT_20_0 4
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto set_stepper_finishedB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_stepper_finishedB_3)
DEFLABEL (set_stepper_finishedB_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_20_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [9]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_20_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define ENVIRONMENT_LABEL_21_3 8
#define DEBUGGING_LABEL_21_2 7
#define OBJECT_21_2 6
#define OBJECT_21_1 5
#define OBJECT_21_0 4
#define FREE_REFERENCES_LABEL_21_0 4
#define NUMBER_OF_LINKER_SECTIONS_21_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto set_stepper_hooksB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_stepper_hooksB_3)
DEFLABEL (set_stepper_hooksB_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_21_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [10]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_21_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 8
#define DEBUGGING_LABEL_22_2 7
#define OBJECT_22_2 6
#define OBJECT_22_1 5
#define OBJECT_22_0 4
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto set_stepper_traceB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_stepper_traceB_3)
DEFLABEL (set_stepper_traceB_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_22_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [11]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_22_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_6 7
#define LABEL_23_7 9
#define ENVIRONMENT_LABEL_23_3 17
#define DEBUGGING_LABEL_23_2 16
#define OBJECT_23_3 15
#define OBJECT_23_2 14
#define OBJECT_23_1 13
#define OBJECT_23_0 12
#define FREE_REFERENCE_23_0 11
#define FREE_REFERENCES_LABEL_23_0 10
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto stepperP_4;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_23_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_23_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stepperP_10)
DEFLABEL (stepperP_4)
  INTERRUPT_CHECK (26, LABEL_23_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
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
  Rvl = (current_block [OBJECT_23_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_23_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define ENVIRONMENT_LABEL_24_3 11
#define DEBUGGING_LABEL_24_2 10
#define OBJECT_24_3 9
#define OBJECT_24_2 8
#define OBJECT_24_1 7
#define OBJECT_24_0 6
#define FREE_REFERENCES_LABEL_24_0 6
#define NUMBER_OF_LINKER_SECTIONS_24_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_24_4);
      goto stack_pushB_2;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_pushB_6)
DEFLABEL (stack_pushB_2)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_10;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd14.Lng))))
    goto label_10;
  (Wrd6.Obj) = ((Wrd12.pObj) [2]);

DEFLABEL (label_9)
  (Wrd25.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Rsp [2]) = (Wrd22.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_24_0]);
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 62)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 3);

DEFLABEL (label_8)
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd37.Lng))))
    goto label_7;
  ((Wrd35.pObj) [2]) = (Wrd22.Obj);
  Rvl = (current_block [OBJECT_24_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_24_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_6 7
#define ENVIRONMENT_LABEL_25_3 14
#define DEBUGGING_LABEL_25_2 13
#define OBJECT_25_4 12
#define OBJECT_25_3 11
#define OBJECT_25_2 10
#define OBJECT_25_1 9
#define OBJECT_25_0 8
#define FREE_REFERENCES_LABEL_25_0 8
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_25_4);
      goto stack_popB_2;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_popB_7)
DEFLABEL (stack_popB_2)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (current_block [OBJECT_25_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_13;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_13;
  (Wrd7.Obj) = ((Wrd13.pObj) [2]);

DEFLABEL (label_12)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_11;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_10)
  (Rsp [2]) = (Wrd23.Obj);
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 62)
    goto label_9;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_4]), 3);

DEFLABEL (label_9)
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd40.Lng))))
    goto label_8;
  ((Wrd38.pObj) [2]) = (Wrd23.Obj);
  Rvl = (current_block [OBJECT_25_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 1);

DEFLABEL (label_5)
  (Wrd23.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (current_block [OBJECT_25_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_4)
  (Wrd7.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define ENVIRONMENT_LABEL_26_3 10
#define DEBUGGING_LABEL_26_2 9
#define OBJECT_26_2 8
#define OBJECT_26_1 7
#define OBJECT_26_0 6
#define FREE_REFERENCES_LABEL_26_0 6
#define NUMBER_OF_LINKER_SECTIONS_26_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_26_4);
      goto stack_top_1;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_top_5)
DEFLABEL (stack_top_1)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_6;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd23.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 1);

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_26_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_6 5
#define LABEL_27_5 7
#define ENVIRONMENT_LABEL_27_3 15
#define DEBUGGING_LABEL_27_2 14
#define OBJECT_27_2 13
#define OBJECT_27_1 12
#define OBJECT_27_0 11
#define EXECUTE_CACHE_27_7 9
#define FREE_REFERENCES_LABEL_27_0 8
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_27_4);
      goto stack_bottom_2;

    case 1:
      current_block = (Rpc - LABEL_27_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_bottom_6)
DEFLABEL (stack_bottom_2)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_9;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_9;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_8)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (Rsp [0]) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_7;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  Rvl = ((Wrd8.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 1);

DEFLABEL (label_9)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_27_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define ENVIRONMENT_LABEL_28_3 11
#define DEBUGGING_LABEL_28_2 10
#define OBJECT_28_3 9
#define OBJECT_28_2 8
#define OBJECT_28_1 7
#define OBJECT_28_0 6
#define FREE_REFERENCES_LABEL_28_0 6
#define NUMBER_OF_LINKER_SECTIONS_28_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_28_4);
      goto stack_emptyP_1;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_emptyP_5)
DEFLABEL (stack_emptyP_1)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_10;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_10;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_9)
  if ((Wrd5.Obj) == (current_block [OBJECT_28_2]))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_28_3]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_28_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define ENVIRONMENT_LABEL_29_3 14
#define DEBUGGING_LABEL_29_2 13
#define OBJECT_29_1 12
#define OBJECT_29_0 11
#define EXECUTE_CACHE_29_7 7
#define EXECUTE_CACHE_29_6 9
#define FREE_REFERENCES_LABEL_29_0 6
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_29_4);
      goto stepper_root_node_1;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stepper_root_node_4)
DEFLABEL (stepper_root_node_1)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

DEFLABEL (label_5)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29_0]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_7)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd18.Lng))))
    goto label_6;
  Rvl = ((Wrd16.pObj) [9]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_8 5
#define LABEL_30_5 7
#define TAG_30_6 2
#define LABEL_30_7 9
#define LABEL_30_11 11
#define LABEL_30_13 13
#define ENVIRONMENT_LABEL_30_3 31
#define DEBUGGING_LABEL_30_2 30
#define OBJECT_30_4 29
#define OBJECT_30_3 28
#define OBJECT_30_2 27
#define OBJECT_30_1 26
#define OBJECT_30_0 25
#define EXECUTE_CACHE_30_14 15
#define EXECUTE_CACHE_30_12 17
#define EXECUTE_CACHE_30_10 19
#define EXECUTE_CACHE_30_9 21
#define FREE_REFERENCE_30_0 24
#define FREE_REFERENCES_LABEL_30_0 14
#define NUMBER_OF_LINKER_SECTIONS_30_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_30_4);
      goto step_form_6;

    case 1:
      current_block = (Rpc - LABEL_30_8);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_30_5);
      goto lambda_11;

    case 3:
      current_block = (Rpc - LABEL_30_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_30_11);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_30_13);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (step_form_10)
DEFLABEL (step_form_6)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_5])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [3]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_19;
  Wrd14 = Wrd18;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd7.Obj) = (current_block [OBJECT_30_2]);
  goto label_12;

DEFLABEL (label_13)
  (Wrd7.Obj) = (current_block [OBJECT_30_1]);

DEFLABEL (label_12)
DEFLABEL (label_17)
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_30_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd7.Obj) = (current_block [OBJECT_30_4]);
  goto label_14;

DEFLABEL (label_15)
  (Wrd7.Obj) = (current_block [OBJECT_30_3]);

DEFLABEL (label_14)
DEFLABEL (label_16)
  (Rsp [3]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_14]));

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_8])), (Wrd15.pObj));

DEFLABEL (label_8)
  (Wrd14.Obj) = Rvl;
  goto label_18;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_30_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_7 7
#define LABEL_31_10 9
#define LABEL_31_8 11
#define LABEL_31_9 13
#define ENVIRONMENT_LABEL_31_3 31
#define DEBUGGING_LABEL_31_2 30
#define OBJECT_31_4 29
#define OBJECT_31_3 28
#define OBJECT_31_2 27
#define OBJECT_31_1 26
#define OBJECT_31_0 25
#define EXECUTE_CACHE_31_13 15
#define EXECUTE_CACHE_31_12 17
#define EXECUTE_CACHE_31_11 19
#define EXECUTE_CACHE_31_6 21
#define FREE_REFERENCE_31_0 24
#define FREE_REFERENCES_LABEL_31_0 14
#define NUMBER_OF_LINKER_SECTIONS_31_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd11;
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
      goto step_proceed_6;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_31_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_31_10);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_31_8);
      goto lambda_1;

    case 5:
      current_block = (Rpc - LABEL_31_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (step_proceed_10)
DEFLABEL (step_proceed_6)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_31_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd7.Obj) = (current_block [OBJECT_31_1]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_12;

DEFLABEL (label_13)
  (Wrd11.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_12)
DEFLABEL (label_19)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_31_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd7.Obj) = (current_block [OBJECT_31_3]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_14;

DEFLABEL (label_15)
  (Wrd21.Obj) = (current_block [OBJECT_31_2]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_14)
DEFLABEL (label_18)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_17;
  Wrd13 = Wrd17;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_31_4]);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_13]));

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_10])), (Wrd14.pObj));

DEFLABEL (label_8)
  (Wrd13.Obj) = Rvl;
  goto label_16;

DEFLABEL (lambda_11)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_31_8);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_12]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define ENVIRONMENT_LABEL_32_3 11
#define DEBUGGING_LABEL_32_2 10
#define OBJECT_32_0 9
#define EXECUTE_CACHE_32_6 7
#define FREE_REFERENCES_LABEL_32_0 6
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_32_4);
      goto stepper_compiledP_1;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stepper_compiledP_4)
DEFLABEL (stepper_compiledP_1)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (lambda_5)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_32_5);
  Rvl = (current_block [OBJECT_32_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_7 5
#define LABEL_33_5 7
#define LABEL_33_9 9
#define LABEL_33_11 11
#define LABEL_33_13 13
#define LABEL_33_16 15
#define LABEL_33_14 17
#define TAG_33_15 7
#define LABEL_33_17 19
#define LABEL_33_19 21
#define LABEL_33_20 23
#define ENVIRONMENT_LABEL_33_3 47
#define DEBUGGING_LABEL_33_2 46
#define OBJECT_33_4 45
#define OBJECT_33_3 44
#define OBJECT_33_2 43
#define OBJECT_33_1 42
#define OBJECT_33_0 41
#define EXECUTE_CACHE_33_23 25
#define EXECUTE_CACHE_33_22 27
#define EXECUTE_CACHE_33_21 29
#define EXECUTE_CACHE_33_18 31
#define EXECUTE_CACHE_33_12 33
#define EXECUTE_CACHE_33_10 35
#define EXECUTE_CACHE_33_8 37
#define EXECUTE_CACHE_33_6 39
#define FREE_REFERENCES_LABEL_33_0 24
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_33_4);
      goto step_start_12;

    case 1:
      current_block = (Rpc - LABEL_33_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_33_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_33_11);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_33_13);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_33_16);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_33_14);
      goto lambda_18;

    case 8:
      current_block = (Rpc - LABEL_33_17);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_33_19);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_33_20);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (step_start_17)
DEFLABEL (step_start_12)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;

DEFLABEL (label_23)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.Obj) = (current_block [OBJECT_33_1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_33_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_33_11);
  (Wrd5.Obj) = Rvl;
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 62))
    goto label_22;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd44.Lng))))
    goto label_22;
  ((Wrd42.pObj) [10]) = Rvl;

DEFLABEL (label_21)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_14])));
  Rhp += 4;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd15 = Wrd8;
  (Wrd16.Obj) = (Rsp [4]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Wrd6 = Wrd7;
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_20;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd28.Lng))))
    goto label_20;
  ((Wrd26.pObj) [6]) = (Wrd7.Obj);

DEFLABEL (label_19)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_17]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_18]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_33_17);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd5.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_22]));

DEFLABEL (label_20)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.Obj) = (current_block [OBJECT_33_4]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_16]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_3]), 3);

DEFLABEL (label_14)
  goto label_19;

DEFLABEL (label_22)
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.Obj) = (current_block [OBJECT_33_2]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_13]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_3]), 3);

DEFLABEL (label_15)
  goto label_21;

DEFLABEL (label_24)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_7);
  goto label_23;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_33_14);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd12.pObj) [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_21]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_33_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_23]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_33_19);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define ENVIRONMENT_LABEL_34_3 12
#define DEBUGGING_LABEL_34_2 11
#define OBJECT_34_1 10
#define OBJECT_34_0 9
#define EXECUTE_CACHE_34_6 7
#define FREE_REFERENCES_LABEL_34_0 6
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_34_4);
      goto step_1;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (step_5)
DEFLABEL (step_1)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  ((Wrd11.pObj) [3]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_6)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_34_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 3);

DEFLABEL (label_3)
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define ENVIRONMENT_LABEL_35_3 13
#define DEBUGGING_LABEL_35_2 12
#define OBJECT_35_2 11
#define OBJECT_35_1 10
#define OBJECT_35_0 9
#define EXECUTE_CACHE_35_6 7
#define FREE_REFERENCES_LABEL_35_0 6
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_35_4);
      goto step_run_1;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (step_run_5)
DEFLABEL (step_run_1)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd7.Obj) = (current_block [OBJECT_35_0]);
  ((Wrd11.pObj) [3]) = (Wrd7.Obj);

DEFLABEL (label_6)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_35_1]);
  (Wrd18.Obj) = (current_block [OBJECT_35_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_2]), 3);

DEFLABEL (label_3)
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_6 5
#define LABEL_36_5 7
#define LABEL_36_8 9
#define ENVIRONMENT_LABEL_36_3 18
#define DEBUGGING_LABEL_36_2 17
#define OBJECT_36_1 16
#define OBJECT_36_0 15
#define EXECUTE_CACHE_36_7 11
#define FREE_REFERENCE_36_0 14
#define FREE_REFERENCES_LABEL_36_0 10
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_36_4);
      goto step_quit_2;

    case 1:
      current_block = (Rpc - LABEL_36_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_36_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (step_quit_7)
DEFLABEL (step_quit_2)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd5.Obj) = ((Wrd11.pObj) [6]);

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_36_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_6])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_6 7
#define LABEL_37_7 9
#define LABEL_37_8 11
#define ENVIRONMENT_LABEL_37_3 17
#define DEBUGGING_LABEL_37_2 16
#define OBJECT_37_0 15
#define EXECUTE_CACHE_37_9 13
#define FREE_REFERENCES_LABEL_37_0 12
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd29;
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
      current_block = (Rpc - LABEL_37_4);
      goto step_n_6;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto do_loop_4;

    case 2:
      current_block = (Rpc - LABEL_37_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_37_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_37_8);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (step_n_11)
DEFLABEL (step_n_6)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd5.Obj) = (current_block [OBJECT_37_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto do_loop_4;

DEFLABEL (do_loop_12)
DEFLABEL (do_loop_4)
  INTERRUPT_CHECK (26, LABEL_37_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_17;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd29.Lng) > 0)
    goto label_14;

DEFLABEL (label_13)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_16;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd21.Lng) = ((Wrd23.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd21.Lng)))
    goto label_16;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd21.Lng));

DEFLABEL (label_15)
  (Rsp [0]) = (Wrd18.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_37_8);
  (Rsp [1]) = Rvl;
  goto do_loop_4;

DEFLABEL (label_16)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_9)
  (Wrd18.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_17)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  goto label_14;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define ENVIRONMENT_LABEL_38_3 12
#define DEBUGGING_LABEL_38_2 11
#define OBJECT_38_1 10
#define OBJECT_38_0 9
#define EXECUTE_CACHE_38_6 7
#define FREE_REFERENCES_LABEL_38_0 6
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_38_4);
      goto step_over_1;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (step_over_5)
DEFLABEL (step_over_1)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  ((Wrd11.pObj) [5]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_6)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_38_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 3);

DEFLABEL (label_3)
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define ENVIRONMENT_LABEL_39_3 13
#define DEBUGGING_LABEL_39_2 12
#define OBJECT_39_2 11
#define OBJECT_39_1 10
#define OBJECT_39_0 9
#define EXECUTE_CACHE_39_6 7
#define FREE_REFERENCES_LABEL_39_0 6
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_39_4);
      goto step_until_1;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (step_until_5)
DEFLABEL (step_until_1)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd7.Obj) = (current_block [OBJECT_39_0]);
  ((Wrd11.pObj) [5]) = (Wrd7.Obj);

DEFLABEL (label_6)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_39_1]);
  (Wrd18.Obj) = (current_block [OBJECT_39_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_2]), 3);

DEFLABEL (label_3)
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define ENVIRONMENT_LABEL_40_3 13
#define DEBUGGING_LABEL_40_2 12
#define OBJECT_40_2 11
#define OBJECT_40_1 10
#define OBJECT_40_0 9
#define EXECUTE_CACHE_40_6 7
#define FREE_REFERENCES_LABEL_40_0 6
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_40_4);
      goto step_until_visibly_1;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (step_until_visibly_5)
DEFLABEL (step_until_visibly_1)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd7.Obj) = (current_block [OBJECT_40_0]);
  ((Wrd11.pObj) [5]) = (Wrd7.Obj);

DEFLABEL (label_6)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_40_1]);
  (Wrd18.Obj) = (current_block [OBJECT_40_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_2]), 3);

DEFLABEL (label_3)
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_5 3
#define LABEL_41_4 5
#define LABEL_41_6 7
#define LABEL_41_7 9
#define LABEL_41_10 11
#define LABEL_41_8 13
#define LABEL_41_12 15
#define LABEL_41_14 17
#define LABEL_41_13 19
#define LABEL_41_15 21
#define ENVIRONMENT_LABEL_41_3 42
#define DEBUGGING_LABEL_41_2 41
#define OBJECT_41_9 40
#define OBJECT_41_8 39
#define OBJECT_41_7 38
#define OBJECT_41_6 37
#define OBJECT_41_5 36
#define OBJECT_41_4 35
#define OBJECT_41_3 34
#define OBJECT_41_2 33
#define OBJECT_41_1 32
#define OBJECT_41_0 31
#define EXECUTE_CACHE_41_17 23
#define EXECUTE_CACHE_41_16 25
#define EXECUTE_CACHE_41_11 27
#define EXECUTE_CACHE_41_9 29
#define FREE_REFERENCES_LABEL_41_0 22
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd8;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd34;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd31;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_41_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_41_4);
      goto step_over_1_11;

    case 2:
      current_block = (Rpc - LABEL_41_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_41_7);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_41_10);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_41_8);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_41_12);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_41_14);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_41_13);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_41_15);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (step_over_1_19)
DEFLABEL (step_over_1_11)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_34;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_34;
  (Wrd5.Obj) = ((Wrd11.pObj) [8]);

DEFLABEL (label_33)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_32;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_31)
  if (! ((Wrd21.Obj) == (current_block [OBJECT_41_3])))
    goto label_28;

DEFLABEL (label_27)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_41_8);
  (Wrd5.Obj) = Rvl;
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_26;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd40.Lng))))
    goto label_26;
  ((Wrd38.pObj) [4]) = Rvl;

DEFLABEL (label_25)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_24;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd24.Lng))))
    goto label_24;
  (Wrd11.Obj) = ((Wrd22.pObj) [5]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;

DEFLABEL (label_22)
  (Wrd18.Obj) = (current_block [OBJECT_41_9]);
  (* (--Rsp)) = (Wrd18.Obj);
  goto label_20;

DEFLABEL (label_21)
  (Wrd13.Obj) = (current_block [OBJECT_41_8]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_20)
DEFLABEL (label_23)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_15]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_41_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_17]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_41_13);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_16]));

DEFLABEL (label_24)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.Obj) = (current_block [OBJECT_41_7]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_14]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_16)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_22;

DEFLABEL (label_26)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.Obj) = (current_block [OBJECT_41_5]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_12]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_6]), 3);

DEFLABEL (label_17)
  goto label_25;

DEFLABEL (label_28)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_30;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd40.Lng))))
    goto label_30;
  (Wrd34.Obj) = ((Wrd38.pObj) [8]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_29)
  (Wrd48.Obj) = (current_block [OBJECT_41_4]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_41_5);
  goto label_27;

DEFLABEL (label_30)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (current_block [OBJECT_41_0]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_10]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_2]), 1);

DEFLABEL (label_14)
  (Wrd21.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_41_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_10 7
#define LABEL_42_11 9
#define LABEL_42_6 11
#define LABEL_42_13 13
#define LABEL_42_14 15
#define LABEL_42_7 17
#define TAG_42_8 7
#define LABEL_42_17 19
#define LABEL_42_18 21
#define ENVIRONMENT_LABEL_42_3 38
#define DEBUGGING_LABEL_42_2 37
#define OBJECT_42_5 36
#define OBJECT_42_4 35
#define OBJECT_42_3 34
#define OBJECT_42_2 33
#define OBJECT_42_1 32
#define OBJECT_42_0 31
#define EXECUTE_CACHE_42_16 23
#define EXECUTE_CACHE_42_15 25
#define EXECUTE_CACHE_42_12 27
#define EXECUTE_CACHE_42_9 29
#define FREE_REFERENCES_LABEL_42_0 22
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd10;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd8;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd5;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd33;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd17;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd7;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd52;
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
      goto raw_step_9;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_42_10);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_42_11);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_42_6);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_42_13);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_42_14);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_42_7);
      goto lambda_20;

    case 8:
      current_block = (Rpc - LABEL_42_17);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_42_18);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (raw_step_19)
DEFLABEL (raw_step_9)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 62))
    goto label_32;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd51.Lng))))
    goto label_32;
  (Wrd7.Obj) = ((Wrd49.pObj) [9]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_27;

DEFLABEL (label_26)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_7])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_42_6);
  (Wrd5.Obj) = Rvl;
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_25;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd33.Lng))))
    goto label_25;
  ((Wrd31.pObj) [6]) = Rvl;

DEFLABEL (label_24)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_23;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_23;
  (Wrd8.Obj) = ((Wrd15.pObj) [3]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_22;

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_16]));

DEFLABEL (label_22)
  (Wrd10.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_15]));

DEFLABEL (label_23)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_42_4]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_14]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_21;

DEFLABEL (label_25)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.Obj) = (current_block [OBJECT_42_2]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_13]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_3]), 3);

DEFLABEL (label_15)
  goto label_24;

DEFLABEL (label_27)
  (Wrd16.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd27.uLng) == 62))
    goto label_31;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd25.Lng))))
    goto label_31;
  (Wrd17.Obj) = ((Wrd23.pObj) [9]);

DEFLABEL (label_30)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_29;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd39.Lng))))
    goto label_29;
  (Wrd33.Obj) = ((Wrd37.pObj) [6]);

DEFLABEL (label_28)
  (Rsp [1]) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_12]));

DEFLABEL (label_29)
  (Wrd42.Obj) = (current_block [OBJECT_42_2]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_11]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_12)
  (Wrd33.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.Obj) = (current_block [OBJECT_42_0]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_10]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_11)
  (Wrd17.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.Obj) = (current_block [OBJECT_42_0]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto label_27;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_42_7);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [2]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 62))
    goto label_36;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd42.Lng))))
    goto label_36;
  (Wrd34.Obj) = (Rsp [1]);
  ((Wrd40.pObj) [7]) = (Wrd34.Obj);

DEFLABEL (label_35)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_34;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_34;
  (Wrd5.Obj) = ((Wrd15.pObj) [6]);

DEFLABEL (label_33)
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_34)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_42_2]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_18]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [2]);
  (Wrd50.Obj) = (current_block [OBJECT_42_5]);
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_17]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_3]), 3);

DEFLABEL (label_17)
  goto label_35;

INVOKE_INTERFACE_TARGET_0
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
ystep_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_43_4);
      goto step_output_initialize_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (step_output_initialize_3)
DEFLABEL (step_output_initialize_0)
  INTERRUPT_CHECK (26, LABEL_43_4);
  Rvl = (current_block [OBJECT_43_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
ystep_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_44_4);
      goto step_output_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (step_output_3)
DEFLABEL (step_output_0)
  INTERRUPT_CHECK (26, LABEL_44_4);
  Rvl = (current_block [OBJECT_44_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define ENVIRONMENT_LABEL_45_3 5
#define DEBUGGING_LABEL_45_2 4
#define FREE_REFERENCES_LABEL_45_0 4
#define NUMBER_OF_LINKER_SECTIONS_45_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_45_4);
      goto step_output_final_result_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (step_output_final_result_3)
DEFLABEL (step_output_final_result_0)
  INTERRUPT_CHECK (26, LABEL_45_4);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define LABEL_46_6 7
#define TAG_46_7 2
#define LABEL_46_8 9
#define TAG_46_9 3
#define LABEL_46_10 11
#define TAG_46_11 4
#define LABEL_46_12 13
#define LABEL_46_13 15
#define TAG_46_14 6
#define LABEL_46_16 17
#define LABEL_46_17 19
#define LABEL_46_19 21
#define LABEL_46_20 23
#define TAG_46_21 10
#define LABEL_46_22 25
#define LABEL_46_23 27
#define LABEL_46_24 29
#define TAG_46_25 13
#define LABEL_46_26 31
#define LABEL_46_28 33
#define TAG_46_29 15
#define LABEL_46_30 35
#define LABEL_46_31 37
#define LABEL_46_32 39
#define TAG_46_33 18
#define ENVIRONMENT_LABEL_46_3 57
#define DEBUGGING_LABEL_46_2 56
#define OBJECT_46_4 55
#define OBJECT_46_3 54
#define OBJECT_46_2 53
#define OBJECT_46_1 52
#define OBJECT_46_0 51
#define EXECUTE_CACHE_46_35 41
#define EXECUTE_CACHE_46_34 43
#define EXECUTE_CACHE_46_27 45
#define EXECUTE_CACHE_46_18 47
#define EXECUTE_CACHE_46_15 49
#define FREE_REFERENCES_LABEL_46_0 40
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_46_4);
      goto make_stepper_hooks_29;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_25;

    case 2:
      current_block = (Rpc - LABEL_46_6);
      goto lambda_33;

    case 3:
      current_block = (Rpc - LABEL_46_8);
      goto lambda_34;

    case 4:
      current_block = (Rpc - LABEL_46_10);
      goto lambda_35;

    case 5:
      current_block = (Rpc - LABEL_46_12);
      goto continuation_18;

    case 6:
      current_block = (Rpc - LABEL_46_13);
      goto lambda_36;

    case 7:
      current_block = (Rpc - LABEL_46_16);
      goto continuation_11;

    case 8:
      current_block = (Rpc - LABEL_46_17);
      goto lambda_10;

    case 9:
      current_block = (Rpc - LABEL_46_19);
      goto continuation_1;

    case 10:
      current_block = (Rpc - LABEL_46_20);
      goto lambda_37;

    case 11:
      current_block = (Rpc - LABEL_46_22);
      goto continuation_23;

    case 12:
      current_block = (Rpc - LABEL_46_23);
      goto continuation_22;

    case 13:
      current_block = (Rpc - LABEL_46_24);
      goto lambda_38;

    case 14:
      current_block = (Rpc - LABEL_46_26);
      goto continuation_15;

    case 15:
      current_block = (Rpc - LABEL_46_28);
      goto lambda_40;

    case 16:
      current_block = (Rpc - LABEL_46_30);
      goto continuation_7;

    case 17:
      current_block = (Rpc - LABEL_46_31);
      goto continuation_6;

    case 18:
      current_block = (Rpc - LABEL_46_32);
      goto lambda_41;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_stepper_hooks_32)
DEFLABEL (make_stepper_hooks_29)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_6])));
  Rhp += 2;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd18 = Wrd15;
  (Wrd19.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  ((Wrd18.pObj) [3]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x2fd, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_8])));
  Rhp += 2;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd24 = Wrd21;
  ((Wrd24.pObj) [2]) = (Wrd19.Obj);
  ((Wrd24.pObj) [3]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_10])));
  Rhp += 2;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  Wrd30 = Wrd27;
  ((Wrd30.pObj) [2]) = (Wrd19.Obj);
  ((Wrd30.pObj) [3]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  ((Wrd6.pObj) [0]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  Rvl = ((Wrd11.pObj) [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_46_6);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_13])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_15]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_46_12);
  (Wrd9.Obj) = (current_block [OBJECT_46_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_22]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_23]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_24])));
  Rhp += 1;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd18 = Wrd17;
  (Wrd19.Obj) = (Rsp [3]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_15]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_46_23);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_34]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_46_22);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 2);

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_46_8);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_18]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_46_16);
  (Wrd9.Obj) = (current_block [OBJECT_46_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_26]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_27]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_46_26);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd11.pObj) [0]);
  (Rsp [2]) = (Wrd7.Obj);
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_3]), 3);

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_46_10);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_20])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_46_19);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_46_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_30]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_31]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_33);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_32])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd22 = Wrd21;
  (Wrd23.Obj) = (Rsp [3]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_46_31);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_35]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_46_30);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd11.pObj) [0]);
  (Rsp [2]) = (Wrd7.Obj);
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 3);

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_46_13);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_39)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_46_17);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_28])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_15]));

DEFLABEL (lambda_37)
  CLOSURE_HEADER (LABEL_46_20);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_46_24);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_46_28);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_41)
  CLOSURE_HEADER (LABEL_46_32);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_6 7
#define TAG_47_7 2
#define LABEL_47_10 9
#define LABEL_47_11 11
#define LABEL_47_12 13
#define LABEL_47_13 15
#define LABEL_47_8 17
#define TAG_47_9 7
#define LABEL_47_14 19
#define LABEL_47_15 21
#define LABEL_47_16 23
#define LABEL_47_17 25
#define ENVIRONMENT_LABEL_47_3 33
#define DEBUGGING_LABEL_47_2 32
#define OBJECT_47_5 31
#define OBJECT_47_4 30
#define OBJECT_47_3 29
#define OBJECT_47_2 28
#define OBJECT_47_1 27
#define OBJECT_47_0 26
#define FREE_REFERENCES_LABEL_47_0 26
#define NUMBER_OF_LINKER_SECTIONS_47_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd98;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd87;
  machine_word Wrd89;
  machine_word Wrd108;
  machine_word Wrd114;
  machine_word Wrd92;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd68;
  machine_word Wrd61;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd69;
  machine_word Wrd76;
  machine_word Wrd82;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd35;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd103;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd109;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd38;
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
      goto make_starting_hooks_21;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_17;

    case 2:
      current_block = (Rpc - LABEL_47_6);
      goto lambda_33;

    case 3:
      current_block = (Rpc - LABEL_47_10);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_47_11);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_47_12);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_47_13);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_47_8);
      goto lambda_34;

    case 8:
      current_block = (Rpc - LABEL_47_14);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_47_15);
      goto label_28;

    case 10:
      current_block = (Rpc - LABEL_47_16);
      goto label_29;

    case 11:
      current_block = (Rpc - LABEL_47_17);
      goto label_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_starting_hooks_32)
DEFLABEL (make_starting_hooks_21)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd38.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd36.pObj) = (& (Rhp [-1]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd36.pObj)));
  (Rsp [1]) = (Wrd37.Obj);
  (Wrd42.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd40.pObj) = (& (Rhp [-1]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd40.pObj)));
  (Rsp [2]) = (Wrd41.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_6])));
  Rhp += 4;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd22 = Wrd15;
  ((Wrd22.pObj) [2]) = (Wrd41.Obj);
  ((Wrd22.pObj) [3]) = (Wrd37.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  ((Wrd22.pObj) [4]) = (Wrd19.Obj);
  ((Wrd22.pObj) [5]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_8])));
  Rhp += 4;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  Wrd33 = Wrd26;
  ((Wrd33.pObj) [2]) = (Wrd41.Obj);
  ((Wrd33.pObj) [3]) = (Wrd37.Obj);
  ((Wrd33.pObj) [4]) = (Wrd19.Obj);
  ((Wrd33.pObj) [5]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_0]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  ((Wrd6.pObj) [0]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  Rvl = ((Wrd11.pObj) [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_47_6);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_43;
  (Wrd109.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd109.Lng) > 0)
    goto label_38;

DEFLABEL (label_42)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_41;
  (Wrd103.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if ((Wrd103.Lng) > 0)
    goto label_38;

DEFLABEL (label_37)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [4]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 62))
    goto label_36;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd47.Lng))))
    goto label_36;
  (Wrd35.Obj) = ((Wrd45.pObj) [10]);

DEFLABEL (label_35)
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd59.Obj) = ((Wrd60.pObj) [2]);
  (Rsp [0]) = (Wrd59.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_36)
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd52.Obj) = ((Wrd54.pObj) [4]);
  (Wrd55.Obj) = (current_block [OBJECT_47_1]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_12]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_2]), 2);

DEFLABEL (label_25)
  (Wrd35.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd72.Obj) = ((Wrd71.pObj) [2]);
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 26))
    goto label_40;
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  (Wrd76.Lng) = ((Wrd82.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd76.Lng)))
    goto label_40;
  (Wrd69.Obj) = (LONG_TO_FIXNUM (Wrd76.Lng));

DEFLABEL (label_39)
  (Wrd83.Obj) = (Rsp [0]);
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd85.Obj) = ((Wrd84.pObj) [2]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  ((Wrd86.pObj) [0]) = (Wrd69.Obj);
  (Wrd90.Obj) = (Rsp [1]);
  (Wrd91.Obj) = (current_block [OBJECT_47_3]);
  (* (Rhp++)) = (Wrd90.Obj);
  (* (Rhp++)) = (Wrd91.Obj);
  (Wrd95.Obj) = ((Wrd84.pObj) [5]);
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd92.Obj) = ((Wrd96.pObj) [0]);
  (Rsp [0]) = (Wrd90.Obj);
  (Rsp [1]) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_4]), 2);

DEFLABEL (label_40)
  (Wrd62.Obj) = (Rsp [0]);
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [2]);
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd61.Obj) = ((Wrd65.pObj) [0]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_13]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_26)
  (Wrd69.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_11]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_38;

DEFLABEL (label_43)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  goto label_38;

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_47_8);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_52;
  (Wrd114.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd114.Lng) > 0)
    goto label_47;

DEFLABEL (label_51)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_50;
  (Wrd108.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if ((Wrd108.Lng) > 0)
    goto label_47;

DEFLABEL (label_46)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [4]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 62))
    goto label_45;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd47.Lng))))
    goto label_45;
  (Wrd35.Obj) = ((Wrd45.pObj) [10]);

DEFLABEL (label_44)
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd59.Obj) = ((Wrd60.pObj) [0]);
  (Rsp [0]) = (Wrd59.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_45)
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd52.Obj) = ((Wrd54.pObj) [4]);
  (Wrd55.Obj) = (current_block [OBJECT_47_1]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_16]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_2]), 2);

DEFLABEL (label_29)
  (Wrd35.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd72.Obj) = ((Wrd71.pObj) [3]);
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 26))
    goto label_49;
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  (Wrd76.Lng) = ((Wrd82.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd76.Lng)))
    goto label_49;
  (Wrd69.Obj) = (LONG_TO_FIXNUM (Wrd76.Lng));

DEFLABEL (label_48)
  (Wrd83.Obj) = (Rsp [0]);
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd85.Obj) = ((Wrd84.pObj) [3]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  ((Wrd86.pObj) [0]) = (Wrd69.Obj);
  (Wrd90.Obj) = (Rsp [2]);
  (Wrd91.Obj) = (current_block [OBJECT_47_3]);
  (* (Rhp++)) = (Wrd90.Obj);
  (* (Rhp++)) = (Wrd91.Obj);
  (Wrd89.pObj) = (& (Rhp [-2]));
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd89.pObj)));
  (Wrd95.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd95.Obj);
  (* (Rhp++)) = (Wrd87.Obj);
  (Rsp [1]) = (Wrd90.Obj);
  (Wrd101.Obj) = ((Wrd84.pObj) [5]);
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd101.Obj));
  (Wrd98.Obj) = ((Wrd102.pObj) [0]);
  (Rsp [2]) = (Wrd98.Obj);
  (Rsp [0]) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_5]), 3);

DEFLABEL (label_49)
  (Wrd62.Obj) = (Rsp [0]);
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [3]);
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd61.Obj) = ((Wrd65.pObj) [0]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_17]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_30)
  (Wrd69.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_50)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_15]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_28)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  goto label_47;

DEFLABEL (label_52)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_14]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  goto label_47;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_8 5
#define LABEL_48_5 7
#define LABEL_48_10 9
#define LABEL_48_11 11
#define LABEL_48_6 13
#define LABEL_48_16 15
#define LABEL_48_9 17
#define LABEL_48_13 19
#define LABEL_48_12 21
#define LABEL_48_18 23
#define LABEL_48_21 25
#define ENVIRONMENT_LABEL_48_3 51
#define DEBUGGING_LABEL_48_2 50
#define OBJECT_48_8 49
#define OBJECT_48_7 48
#define OBJECT_48_6 47
#define OBJECT_48_5 46
#define OBJECT_48_4 45
#define OBJECT_48_3 44
#define OBJECT_48_2 43
#define OBJECT_48_1 42
#define OBJECT_48_0 41
#define EXECUTE_CACHE_48_22 27
#define EXECUTE_CACHE_48_20 29
#define EXECUTE_CACHE_48_19 31
#define EXECUTE_CACHE_48_17 33
#define EXECUTE_CACHE_48_15 35
#define EXECUTE_CACHE_48_14 37
#define EXECUTE_CACHE_48_7 39
#define FREE_REFERENCES_LABEL_48_0 26
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd31;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd17;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_48_4);
      goto process_eval_15;

    case 1:
      current_block = (Rpc - LABEL_48_8);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_48_10);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_48_11);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_48_6);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_48_16);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_48_9);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_48_13);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_48_12);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_48_18);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_48_21);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_eval_22)
DEFLABEL (process_eval_15)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_6);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_36;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd12.Lng))))
    goto label_36;
  (Wrd7.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_35)
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_17]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_48_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_48_8);

DEFLABEL (label_34)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd52.Obj) = (Rsp [2]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 62))
    goto label_33;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd51.Lng))))
    goto label_33;
  (Wrd17.Obj) = ((Wrd49.pObj) [4]);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;

DEFLABEL (label_32)
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 62))
    goto label_31;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd37.Lng))))
    goto label_31;
  (Wrd29.Obj) = ((Wrd35.pObj) [5]);
  if ((Wrd29.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;

DEFLABEL (label_25)
  (Wrd19.Obj) = (current_block [OBJECT_48_4]);
  (* (--Rsp)) = (Wrd19.Obj);
  goto label_23;

DEFLABEL (label_24)
  (Wrd31.Obj) = (current_block [OBJECT_48_3]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_23)
DEFLABEL (label_30)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_12]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_48_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_48_12);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_48_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_19]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_48_18);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_48_5]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_48_6]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 62))
    goto label_27;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd23.Lng))))
    goto label_27;
  ((Wrd21.pObj) [8]) = (Wrd10.Obj);

DEFLABEL (label_26)
  (Wrd14.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_22]));

DEFLABEL (label_27)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (current_block [OBJECT_48_7]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_21]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_8]), 3);

DEFLABEL (label_20)
  goto label_26;

DEFLABEL (label_29)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_28;

DEFLABEL (label_31)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.Obj) = (current_block [OBJECT_48_2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_11]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 2);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_25;

DEFLABEL (label_33)
  (Wrd54.Obj) = (Rsp [2]);
  (Wrd55.Obj) = (current_block [OBJECT_48_0]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_10]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 2);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  goto label_32;

DEFLABEL (label_36)
  (Wrd15.Obj) = (current_block [OBJECT_48_0]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_16]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define ENVIRONMENT_LABEL_49_3 13
#define DEBUGGING_LABEL_49_2 12
#define OBJECT_49_0 11
#define EXECUTE_CACHE_49_7 7
#define EXECUTE_CACHE_49_6 9
#define FREE_REFERENCES_LABEL_49_0 6
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_49_4);
      goto process_apply_1;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_apply_4)
DEFLABEL (process_apply_1)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_7]));

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_49_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_5 3
#define LABEL_50_4 5
#define LABEL_50_6 7
#define LABEL_50_11 9
#define LABEL_50_7 11
#define LABEL_50_8 13
#define LABEL_50_14 15
#define LABEL_50_12 17
#define LABEL_50_17 19
#define LABEL_50_19 21
#define LABEL_50_20 23
#define ENVIRONMENT_LABEL_50_3 49
#define DEBUGGING_LABEL_50_2 48
#define OBJECT_50_8 47
#define OBJECT_50_7 46
#define OBJECT_50_6 45
#define OBJECT_50_5 44
#define OBJECT_50_4 43
#define OBJECT_50_3 42
#define OBJECT_50_2 41
#define OBJECT_50_1 40
#define OBJECT_50_0 39
#define EXECUTE_CACHE_50_21 25
#define EXECUTE_CACHE_50_18 27
#define EXECUTE_CACHE_50_16 29
#define EXECUTE_CACHE_50_15 31
#define EXECUTE_CACHE_50_13 33
#define EXECUTE_CACHE_50_10 35
#define EXECUTE_CACHE_50_9 37
#define FREE_REFERENCES_LABEL_50_0 24
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd10;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd7;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_50_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_50_4);
      goto process_return_15;

    case 2:
      current_block = (Rpc - LABEL_50_6);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_50_11);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_50_7);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_50_8);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_50_14);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_50_12);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_50_17);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_50_19);
      goto label_20;

    case 10:
      current_block = (Rpc - LABEL_50_20);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_return_22)
DEFLABEL (process_return_15)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 62))
    goto label_33;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd25.Lng))))
    goto label_33;
  (Wrd7.Obj) = ((Wrd23.pObj) [4]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_31;

DEFLABEL (label_32)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_50_5);

DEFLABEL (label_31)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_50_8);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 62))
    goto label_30;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_30;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_29)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_50_3])))
    goto label_23;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_15]));

DEFLABEL (label_23)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_11]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_50_11);
  (Wrd11.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_28)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_13]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_50_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_18]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_50_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 62))
    goto label_27;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd42.Lng))))
    goto label_27;
  (Wrd36.Obj) = (Rsp [0]);
  ((Wrd40.pObj) [9]) = (Wrd36.Obj);

DEFLABEL (label_26)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.Obj) = (current_block [OBJECT_50_6]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd15.Obj) = (current_block [OBJECT_50_7]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 62))
    goto label_25;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd25.Lng))))
    goto label_25;
  ((Wrd23.pObj) [8]) = (Wrd12.Obj);

DEFLABEL (label_24)
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd16.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_21]));

DEFLABEL (label_25)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.Obj) = (current_block [OBJECT_50_8]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_20]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_5]), 3);

DEFLABEL (label_19)
  goto label_24;

DEFLABEL (label_27)
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.Obj) = (current_block [OBJECT_50_4]);
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_19]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_5]), 3);

DEFLABEL (label_20)
  goto label_26;

DEFLABEL (label_30)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_50_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_33)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.Obj) = (current_block [OBJECT_50_0]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_6]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  goto label_32;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_50_7);
  (* (--Rsp)) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define LABEL_51_9 7
#define LABEL_51_6 9
#define TAG_51_7 3
#define LABEL_51_11 11
#define LABEL_51_12 13
#define TAG_51_13 5
#define ENVIRONMENT_LABEL_51_3 27
#define DEBUGGING_LABEL_51_2 26
#define OBJECT_51_6 25
#define OBJECT_51_5 24
#define OBJECT_51_4 23
#define OBJECT_51_3 22
#define OBJECT_51_2 21
#define OBJECT_51_1 20
#define OBJECT_51_0 19
#define EXECUTE_CACHE_51_10 15
#define EXECUTE_CACHE_51_8 17
#define FREE_REFERENCES_LABEL_51_0 14
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd7;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
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
      current_block = (Rpc - LABEL_51_4);
      goto maybe_redisplay_6;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_51_9);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_51_6);
      goto lambda_13;

    case 4:
      current_block = (Rpc - LABEL_51_11);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_51_12);
      goto lambda_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (maybe_redisplay_12)
DEFLABEL (maybe_redisplay_6)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_20;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd40.Lng))))
    goto label_20;
  (Wrd7.Obj) = ((Wrd38.pObj) [4]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_16;

DEFLABEL (label_15)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_51_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_51_6])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd12 = Wrd11;
  (Wrd13.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Rsp [0]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_8]));

DEFLABEL (label_16)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_19;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd22.Lng))))
    goto label_19;
  (Wrd14.Obj) = ((Wrd20.pObj) [5]);

DEFLABEL (label_18)
  if ((Wrd14.Obj) == (current_block [OBJECT_51_3]))
    goto label_17;
  Rvl = (current_block [OBJECT_51_5]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd33.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_51_4]);
  (Rsp [1]) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_10]));

DEFLABEL (label_19)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.Obj) = (current_block [OBJECT_51_2]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_9]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_8)
  (Wrd14.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_20)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.Obj) = (current_block [OBJECT_51_0]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  goto label_16;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_51_6);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_22;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_22;
  (Wrd5.Obj) = ((Wrd15.pObj) [7]);

DEFLABEL (label_21)
  (Rsp [0]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd31.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_51_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_51_12])));
  Rhp += 1;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd31.pObj)));
  Wrd32 = Wrd31;
  (Wrd33.Obj) = (Rsp [1]);
  ((Wrd32.pObj) [2]) = (Wrd33.Obj);
  (Rsp [1]) = (Wrd30.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_22)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_51_6]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_11]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_21;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_51_12);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_51_5]);
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_6 5
#define LABEL_52_5 7
#define LABEL_52_9 9
#define LABEL_52_7 11
#define ENVIRONMENT_LABEL_52_3 23
#define DEBUGGING_LABEL_52_2 22
#define OBJECT_52_4 21
#define OBJECT_52_3 20
#define OBJECT_52_2 19
#define OBJECT_52_1 18
#define OBJECT_52_0 17
#define EXECUTE_CACHE_52_10 13
#define EXECUTE_CACHE_52_8 15
#define FREE_REFERENCES_LABEL_52_0 12
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd8;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_52_4);
      goto maybe_end_step_over_4;

    case 1:
      current_block = (Rpc - LABEL_52_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_52_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_52_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_52_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (maybe_end_step_over_9)
DEFLABEL (maybe_end_step_over_4)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_16;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_16;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_15)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_52_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_52_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  Rvl = (current_block [OBJECT_52_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_14;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd31.Lng))))
    goto label_14;
  ((Wrd29.pObj) [4]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_13)
  (Wrd7.Obj) = (current_block [OBJECT_52_4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd22.uLng) == 62)
    goto label_12;

DEFLABEL (label_11)
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_3]), 3);

DEFLABEL (label_12)
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd20.Lng))))
    goto label_11;
  ((Wrd18.pObj) [5]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_52_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Obj) = (current_block [OBJECT_52_0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_9]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_3]), 3);

DEFLABEL (label_7)
  goto label_13;

DEFLABEL (label_16)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_52_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_6 5
#define LABEL_53_5 7
#define LABEL_53_7 9
#define ENVIRONMENT_LABEL_53_3 20
#define DEBUGGING_LABEL_53_2 19
#define EXECUTE_CACHE_53_10 11
#define EXECUTE_CACHE_53_9 13
#define EXECUTE_CACHE_53_8 15
#define FREE_REFERENCE_53_0 18
#define FREE_REFERENCES_LABEL_53_0 10
#define NUMBER_OF_LINKER_SECTIONS_53_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_53_4);
      goto process_reduction_2;

    case 1:
      current_block = (Rpc - LABEL_53_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_53_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_53_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_reduction_6)
DEFLABEL (process_reduction_2)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_53_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_8;
  Wrd8 = Wrd12;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_53_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_53_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53_6])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define LABEL_54_9 7
#define LABEL_54_7 9
#define LABEL_54_11 11
#define LABEL_54_13 13
#define LABEL_54_16 15
#define LABEL_54_14 17
#define ENVIRONMENT_LABEL_54_3 34
#define DEBUGGING_LABEL_54_2 33
#define OBJECT_54_1 32
#define OBJECT_54_0 31
#define EXECUTE_CACHE_54_17 19
#define EXECUTE_CACHE_54_15 21
#define EXECUTE_CACHE_54_12 23
#define EXECUTE_CACHE_54_10 25
#define EXECUTE_CACHE_54_8 27
#define EXECUTE_CACHE_54_6 29
#define FREE_REFERENCES_LABEL_54_0 18
#define NUMBER_OF_LINKER_SECTIONS_54_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_54_4);
      goto reductionP_8;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_54_9);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_54_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_54_11);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_54_13);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_54_16);
      goto label_10;

    case 7:
      current_block = (Rpc - LABEL_54_14);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reductionP_12)
DEFLABEL (reductionP_8)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_54_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_54_9);
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd6.Obj) == Rvl))
    goto label_13;
  Rvl = (current_block [OBJECT_54_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_54_11);
  (Wrd7.Obj) = (Rsp [0]);
  if ((Wrd7.Obj) == Rvl)
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_14;

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_54_0]);

DEFLABEL (label_14)
DEFLABEL (label_16)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_54_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_14]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_54_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_54_13);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_23;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_22)
  (Wrd14.Obj) = (Rsp [0]);
  if ((Wrd14.Obj) == (Wrd6.Obj))
    goto label_20;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_19;

DEFLABEL (label_20)
  Rvl = (current_block [OBJECT_54_0]);

DEFLABEL (label_19)
DEFLABEL (label_21)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_16]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 1);

DEFLABEL (label_10)
  (Wrd6.Obj) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define ENVIRONMENT_LABEL_55_3 6
#define DEBUGGING_LABEL_55_2 5
#define OBJECT_55_0 4
#define FREE_REFERENCES_LABEL_55_0 4
#define NUMBER_OF_LINKER_SECTIONS_55_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_55_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_55_4);
  Rvl = (current_block [OBJECT_55_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define ENVIRONMENT_LABEL_56_3 7
#define DEBUGGING_LABEL_56_2 6
#define OBJECT_56_1 5
#define OBJECT_56_0 4
#define FREE_REFERENCES_LABEL_56_0 4
#define NUMBER_OF_LINKER_SECTIONS_56_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_56_4);
      goto ynode_parent_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ynode_parent_3)
DEFLABEL (ynode_parent_0)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_56_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_1]), 2);

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

#define LABEL_57_4 3
#define ENVIRONMENT_LABEL_57_3 7
#define DEBUGGING_LABEL_57_2 6
#define OBJECT_57_1 5
#define OBJECT_57_0 4
#define FREE_REFERENCES_LABEL_57_0 4
#define NUMBER_OF_LINKER_SECTIONS_57_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_57_4);
      goto ynode_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ynode_type_3)
DEFLABEL (ynode_type_0)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_57_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

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

#define LABEL_58_4 3
#define ENVIRONMENT_LABEL_58_3 7
#define DEBUGGING_LABEL_58_2 6
#define OBJECT_58_1 5
#define OBJECT_58_0 4
#define FREE_REFERENCES_LABEL_58_0 4
#define NUMBER_OF_LINKER_SECTIONS_58_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_58_4);
      goto ynode_exp_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ynode_exp_3)
DEFLABEL (ynode_exp_0)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_58_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

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

#define LABEL_59_4 3
#define ENVIRONMENT_LABEL_59_3 7
#define DEBUGGING_LABEL_59_2 6
#define OBJECT_59_1 5
#define OBJECT_59_0 4
#define FREE_REFERENCES_LABEL_59_0 4
#define NUMBER_OF_LINKER_SECTIONS_59_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_59_4);
      goto ynode_children_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ynode_children_3)
DEFLABEL (ynode_children_0)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_59_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

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

#define LABEL_60_4 3
#define ENVIRONMENT_LABEL_60_3 7
#define DEBUGGING_LABEL_60_2 6
#define OBJECT_60_1 5
#define OBJECT_60_0 4
#define FREE_REFERENCES_LABEL_60_0 4
#define NUMBER_OF_LINKER_SECTIONS_60_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_60_4);
      goto ynode_result_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ynode_result_3)
DEFLABEL (ynode_result_0)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_60_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 2);

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

#define LABEL_61_4 3
#define ENVIRONMENT_LABEL_61_3 7
#define DEBUGGING_LABEL_61_2 6
#define OBJECT_61_1 5
#define OBJECT_61_0 4
#define FREE_REFERENCES_LABEL_61_0 4
#define NUMBER_OF_LINKER_SECTIONS_61_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_61_4);
      goto ynode_redisplay_flags_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ynode_redisplay_flags_3)
DEFLABEL (ynode_redisplay_flags_0)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_61_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 2);

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

#define LABEL_62_4 3
#define ENVIRONMENT_LABEL_62_3 8
#define DEBUGGING_LABEL_62_2 7
#define OBJECT_62_2 6
#define OBJECT_62_1 5
#define OBJECT_62_0 4
#define FREE_REFERENCES_LABEL_62_0 4
#define NUMBER_OF_LINKER_SECTIONS_62_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_62_4);
      goto set_ynode_parentB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_ynode_parentB_3)
DEFLABEL (set_ynode_parentB_0)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_62_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_62_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define ENVIRONMENT_LABEL_63_3 8
#define DEBUGGING_LABEL_63_2 7
#define OBJECT_63_2 6
#define OBJECT_63_1 5
#define OBJECT_63_0 4
#define FREE_REFERENCES_LABEL_63_0 4
#define NUMBER_OF_LINKER_SECTIONS_63_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_63_4);
      goto set_ynode_typeB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_ynode_typeB_3)
DEFLABEL (set_ynode_typeB_0)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_63_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_63_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define ENVIRONMENT_LABEL_64_3 8
#define DEBUGGING_LABEL_64_2 7
#define OBJECT_64_2 6
#define OBJECT_64_1 5
#define OBJECT_64_0 4
#define FREE_REFERENCES_LABEL_64_0 4
#define NUMBER_OF_LINKER_SECTIONS_64_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_64_4);
      goto set_ynode_childrenB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_ynode_childrenB_3)
DEFLABEL (set_ynode_childrenB_0)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_64_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_64_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define ENVIRONMENT_LABEL_65_3 8
#define DEBUGGING_LABEL_65_2 7
#define OBJECT_65_2 6
#define OBJECT_65_1 5
#define OBJECT_65_0 4
#define FREE_REFERENCES_LABEL_65_0 4
#define NUMBER_OF_LINKER_SECTIONS_65_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_65_4);
      goto set_ynode_resultB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_ynode_resultB_3)
DEFLABEL (set_ynode_resultB_0)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_65_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_65_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_5 5
#define LABEL_66_6 7
#define LABEL_66_7 9
#define ENVIRONMENT_LABEL_66_3 17
#define DEBUGGING_LABEL_66_2 16
#define OBJECT_66_3 15
#define OBJECT_66_2 14
#define OBJECT_66_1 13
#define OBJECT_66_0 12
#define FREE_REFERENCE_66_0 11
#define FREE_REFERENCES_LABEL_66_0 10
#define NUMBER_OF_LINKER_SECTIONS_66_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_66_4);
      goto ynodeP_4;

    case 1:
      current_block = (Rpc - LABEL_66_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_66_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_66_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ynodeP_10)
DEFLABEL (ynodeP_4)
  INTERRUPT_CHECK (26, LABEL_66_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_0]));
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
  Rvl = (current_block [OBJECT_66_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_66_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define LABEL_67_6 7
#define LABEL_67_7 9
#define ENVIRONMENT_LABEL_67_3 17
#define DEBUGGING_LABEL_67_2 16
#define OBJECT_67_2 15
#define OBJECT_67_1 14
#define OBJECT_67_0 13
#define FREE_REFERENCE_67_1 11
#define FREE_REFERENCE_67_0 12
#define FREE_REFERENCES_LABEL_67_0 10
#define NUMBER_OF_LINKER_SECTIONS_67_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_67_4);
      goto ynode_exp_special_4;

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

DEFLABEL (ynode_exp_special_10)
DEFLABEL (ynode_exp_special_4)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_19;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_18)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_17;
  Wrd22 = Wrd26;

DEFLABEL (label_16)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd22.Obj) == (Wrd28.Obj))
    goto label_12;
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67_1]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_15;
  Wrd30 = Wrd34;

DEFLABEL (label_14)
  (Wrd36.Obj) = (Rsp [0]);
  if ((Wrd30.Obj) == (Wrd36.Obj))
    goto label_12;
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 1)
    goto label_13;
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_2]), 1);

DEFLABEL (label_13)
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  Rvl = ((Wrd41.pObj) [0]);
  goto label_11;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67_7])), (Wrd31.pObj));

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67_6])), (Wrd23.pObj));

DEFLABEL (label_7)
  (Wrd22.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_67_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 2);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_5 5
#define LABEL_68_6 7
#define LABEL_68_7 9
#define LABEL_68_8 11
#define ENVIRONMENT_LABEL_68_3 20
#define DEBUGGING_LABEL_68_2 19
#define OBJECT_68_2 18
#define OBJECT_68_1 17
#define OBJECT_68_0 16
#define FREE_REFERENCE_68_2 13
#define FREE_REFERENCE_68_1 14
#define FREE_REFERENCE_68_0 15
#define FREE_REFERENCES_LABEL_68_0 12
#define NUMBER_OF_LINKER_SECTIONS_68_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd49;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_68_4);
      goto ynode_result_special_5;

    case 1:
      current_block = (Rpc - LABEL_68_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_68_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_68_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_68_8);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ynode_result_special_12)
DEFLABEL (ynode_result_special_5)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_23;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_23;
  (Wrd5.Obj) = ((Wrd11.pObj) [6]);

DEFLABEL (label_22)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_68_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_21;
  Wrd22 = Wrd26;

DEFLABEL (label_20)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd22.Obj) == (Wrd28.Obj))
    goto label_14;
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_68_1]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_19;
  Wrd30 = Wrd34;

DEFLABEL (label_18)
  (Wrd36.Obj) = (Rsp [0]);
  if ((Wrd30.Obj) == (Wrd36.Obj))
    goto label_14;
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_68_2]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_17;
  Wrd38 = Wrd42;

DEFLABEL (label_16)
  (Wrd44.Obj) = (Rsp [0]);
  if ((Wrd38.Obj) == (Wrd44.Obj))
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_13)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 1)
    goto label_15;
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_2]), 1);

DEFLABEL (label_15)
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  Rvl = ((Wrd49.pObj) [0]);
  goto label_13;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68_8])), (Wrd39.pObj));

DEFLABEL (label_10)
  (Wrd38.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68_7])), (Wrd31.pObj));

DEFLABEL (label_9)
  (Wrd30.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68_6])), (Wrd23.pObj));

DEFLABEL (label_8)
  (Wrd22.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_68_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 2);

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_5 5
#define LABEL_69_6 7
#define ENVIRONMENT_LABEL_69_3 14
#define DEBUGGING_LABEL_69_2 13
#define OBJECT_69_2 12
#define OBJECT_69_1 11
#define OBJECT_69_0 10
#define FREE_REFERENCE_69_0 9
#define FREE_REFERENCES_LABEL_69_0 8
#define NUMBER_OF_LINKER_SECTIONS_69_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_69_4);
      goto ynode_reducedP_1;

    case 1:
      current_block = (Rpc - LABEL_69_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_69_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ynode_reducedP_6)
DEFLABEL (ynode_reducedP_1)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_69_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;
  Wrd5 = Wrd9;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_11;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd19.Lng))))
    goto label_11;
  (Wrd11.Obj) = ((Wrd17.pObj) [6]);

DEFLABEL (label_10)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_69_2]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_69_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_69_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_5 3
#define LABEL_70_4 5
#define LABEL_70_7 7
#define LABEL_70_6 9
#define LABEL_70_9 11
#define LABEL_70_10 13
#define LABEL_70_11 15
#define LABEL_70_12 17
#define LABEL_70_13 19
#define ENVIRONMENT_LABEL_70_3 35
#define DEBUGGING_LABEL_70_2 34
#define OBJECT_70_6 33
#define OBJECT_70_5 32
#define OBJECT_70_4 31
#define OBJECT_70_3 30
#define OBJECT_70_2 29
#define OBJECT_70_1 28
#define OBJECT_70_0 27
#define EXECUTE_CACHE_70_14 21
#define EXECUTE_CACHE_70_8 23
#define FREE_REFERENCE_70_0 26
#define FREE_REFERENCES_LABEL_70_0 20
#define NUMBER_OF_LINKER_SECTIONS_70_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd30;
  machine_word Wrd12;
  machine_word Wrd69;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_70_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_70_4);
      goto make_ynode_9;

    case 2:
      current_block = (Rpc - LABEL_70_7);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_70_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_70_9);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_70_10);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_70_11);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_70_12);
      goto label_14;

    case 8:
      current_block = (Rpc - LABEL_70_13);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_ynode_17)
DEFLABEL (make_ynode_9)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_30;
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_29;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd22.Lng))))
    goto label_29;
  (Wrd14.Obj) = ((Wrd20.pObj) [7]);

DEFLABEL (label_28)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_27)
  (Wrd33.Obj) = (current_block [OBJECT_70_3]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_70_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_70_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_26;
  Wrd6 = Wrd10;

DEFLABEL (label_25)
  Wrd5 = Wrd6;
  (Wrd62.Obj) = (Rsp [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 62))
    goto label_24;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd61.Lng))))
    goto label_24;
  ((Wrd59.pObj) [6]) = (Wrd6.Obj);

DEFLABEL (label_23)
  (Wrd12.Obj) = (Rsp [1]);
  if (! ((Wrd12.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_19;

DEFLABEL (label_18)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_13]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_70_13);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_22;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd22.Lng))))
    goto label_22;
  (Wrd14.Obj) = ((Wrd20.pObj) [5]);

DEFLABEL (label_21)
  (Wrd33.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_20;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd45.Lng))))
    goto label_20;
  ((Wrd43.pObj) [5]) = (Wrd30.Obj);
  goto label_18;

DEFLABEL (label_20)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.Obj) = (current_block [OBJECT_70_6]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_12]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_5]), 3);

DEFLABEL (label_14)
  goto label_18;

DEFLABEL (label_22)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_70_6]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_11]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_2]), 2);

DEFLABEL (label_13)
  (Wrd14.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd64.Obj) = (Rsp [0]);
  (Wrd65.Obj) = (current_block [OBJECT_70_4]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_10]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_5]), 3);

DEFLABEL (label_15)
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70_9])), (Wrd7.pObj));

DEFLABEL (label_12)
  (Wrd6.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_29)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (current_block [OBJECT_70_1]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_2]), 2);

DEFLABEL (label_11)
  (Wrd14.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_30)
  (Wrd14.Obj) = (current_block [OBJECT_70_0]);
  goto label_28;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_70_5);
  (Wrd14.Obj) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_5 5
#define LABEL_71_6 7
#define LABEL_71_7 9
#define LABEL_71_8 11
#define LABEL_71_9 13
#define LABEL_71_10 15
#define LABEL_71_11 17
#define ENVIRONMENT_LABEL_71_3 24
#define DEBUGGING_LABEL_71_2 23
#define OBJECT_71_4 22
#define OBJECT_71_3 21
#define OBJECT_71_2 20
#define OBJECT_71_1 19
#define OBJECT_71_0 18
#define FREE_REFERENCES_LABEL_71_0 18
#define NUMBER_OF_LINKER_SECTIONS_71_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd49;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_71_4);
      goto ynode_previous_12;

    case 1:
      current_block = (Rpc - LABEL_71_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_71_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_71_7);
      goto loop_10;

    case 4:
      current_block = (Rpc - LABEL_71_8);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_71_9);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_71_10);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_71_11);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ynode_previous_21)
DEFLABEL (ynode_previous_12)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_26;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_26;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_25)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_24;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd27.Lng))))
    goto label_24;
  (Wrd22.Obj) = ((Wrd25.pObj) [5]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_23)
  goto loop_10;

DEFLABEL (label_24)
  (Wrd30.Obj) = (current_block [OBJECT_71_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_71_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_1]), 2);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_25;

DEFLABEL (loop_22)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_71_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_28;

DEFLABEL (label_27)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_28)
  if (! ((Wrd6.uLng) == 1))
    goto label_38;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_37)
  (Wrd18.Obj) = (Rsp [1]);
  if ((Wrd9.Obj) == (Wrd18.Obj))
    goto label_31;
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_30;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_29)
  (Rsp [0]) = (Wrd19.Obj);
  goto loop_10;

DEFLABEL (label_30)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_11]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_4]), 1);

DEFLABEL (label_17)
  (Wrd19.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_31)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_36;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_35)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_27;
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_34;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_33)
  (Rsp [1]) = (Wrd38.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_32;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  Rvl = ((Wrd49.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_32)
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_3]), 1);

DEFLABEL (label_34)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_10]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_4]), 1);

DEFLABEL (label_19)
  (Wrd38.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_4]), 1);

DEFLABEL (label_18)
  (Wrd28.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_3]), 1);

DEFLABEL (label_16)
  (Wrd9.Obj) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define LABEL_72_5 5
#define LABEL_72_6 7
#define LABEL_72_7 9
#define LABEL_72_8 11
#define LABEL_72_9 13
#define LABEL_72_10 15
#define LABEL_72_11 17
#define ENVIRONMENT_LABEL_72_3 24
#define DEBUGGING_LABEL_72_2 23
#define OBJECT_72_4 22
#define OBJECT_72_3 21
#define OBJECT_72_2 20
#define OBJECT_72_1 19
#define OBJECT_72_0 18
#define FREE_REFERENCES_LABEL_72_0 18
#define NUMBER_OF_LINKER_SECTIONS_72_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd48;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd45;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_72_4);
      goto ynode_next_12;

    case 1:
      current_block = (Rpc - LABEL_72_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_72_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_72_7);
      goto loop_10;

    case 4:
      current_block = (Rpc - LABEL_72_8);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_72_9);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_72_10);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_72_11);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ynode_next_21)
DEFLABEL (ynode_next_12)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_26;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_26;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_25)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_24;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd27.Lng))))
    goto label_24;
  (Wrd22.Obj) = ((Wrd25.pObj) [5]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_23)
  goto loop_10;

DEFLABEL (label_24)
  (Wrd30.Obj) = (current_block [OBJECT_72_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_72_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_1]), 2);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_25;

DEFLABEL (loop_22)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_72_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_28;

DEFLABEL (label_27)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_28)
  if (! ((Wrd6.uLng) == 1))
    goto label_38;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_37)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_27;
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_36;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_35)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_34;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_33)
  (Wrd35.Obj) = (Rsp [1]);
  if ((Wrd28.Obj) == (Wrd35.Obj))
    goto label_31;
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_30;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_29)
  (Rsp [0]) = (Wrd36.Obj);
  goto loop_10;

DEFLABEL (label_30)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_11]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_3]), 1);

DEFLABEL (label_19)
  (Wrd36.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_31)
  (Wrd45.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd45.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_32;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  Rvl = ((Wrd48.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_32)
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_4]), 1);

DEFLABEL (label_34)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_10]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_4]), 1);

DEFLABEL (label_18)
  (Wrd28.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_3]), 1);

DEFLABEL (label_17)
  (Wrd19.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_3]), 1);

DEFLABEL (label_16)
  (Wrd9.Obj) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define LABEL_73_5 5
#define LABEL_73_7 7
#define ENVIRONMENT_LABEL_73_3 16
#define DEBUGGING_LABEL_73_2 15
#define EXECUTE_CACHE_73_9 9
#define EXECUTE_CACHE_73_8 11
#define EXECUTE_CACHE_73_6 13
#define FREE_REFERENCES_LABEL_73_0 8
#define NUMBER_OF_LINKER_SECTIONS_73_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_73_4);
      goto ynode_value_node_3;

    case 1:
      current_block = (Rpc - LABEL_73_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_73_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ynode_value_node_6)
DEFLABEL (ynode_value_node_3)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_73_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_73_7);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_9]));

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define LABEL_74_5 5
#define LABEL_74_7 7
#define ENVIRONMENT_LABEL_74_3 17
#define DEBUGGING_LABEL_74_2 16
#define OBJECT_74_0 15
#define EXECUTE_CACHE_74_9 9
#define EXECUTE_CACHE_74_8 11
#define EXECUTE_CACHE_74_6 13
#define FREE_REFERENCES_LABEL_74_0 8
#define NUMBER_OF_LINKER_SECTIONS_74_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_74_4);
      goto ynode_reduces_toP_4;

    case 1:
      current_block = (Rpc - LABEL_74_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_74_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ynode_reduces_toP_7)
DEFLABEL (ynode_reduces_toP_4)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (Wrd8.Obj))
    goto label_10;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_74_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_74_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_9]));

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_74_0]);

DEFLABEL (label_11)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define LABEL_75_5 5
#define LABEL_75_6 7
#define LABEL_75_8 9
#define LABEL_75_7 11
#define LABEL_75_10 13
#define LABEL_75_11 15
#define LABEL_75_12 17
#define TAG_75_13 7
#define LABEL_75_15 19
#define LABEL_75_16 21
#define LABEL_75_17 23
#define LABEL_75_19 25
#define ENVIRONMENT_LABEL_75_3 43
#define DEBUGGING_LABEL_75_2 42
#define OBJECT_75_6 41
#define OBJECT_75_5 40
#define OBJECT_75_4 39
#define OBJECT_75_3 38
#define OBJECT_75_2 37
#define OBJECT_75_1 36
#define OBJECT_75_0 35
#define EXECUTE_CACHE_75_18 27
#define EXECUTE_CACHE_75_14 29
#define EXECUTE_CACHE_75_9 31
#define FREE_REFERENCE_75_0 34
#define FREE_REFERENCES_LABEL_75_0 26
#define NUMBER_OF_LINKER_SECTIONS_75_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd34;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
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
      current_block = (Rpc - LABEL_75_4);
      goto ynode_splice_under_14;

    case 1:
      current_block = (Rpc - LABEL_75_5);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_75_6);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_75_8);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_75_7);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_75_10);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_75_11);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_75_12);
      goto lambda_23;

    case 8:
      current_block = (Rpc - LABEL_75_15);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_75_16);
      goto loop_10;

    case 10:
      current_block = (Rpc - LABEL_75_17);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_75_19);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ynode_splice_under_22)
DEFLABEL (ynode_splice_under_14)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_32;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_32;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_31)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_30;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd40.Lng))))
    goto label_30;
  (Wrd34.Obj) = (current_block [OBJECT_75_2]);
  ((Wrd38.pObj) [5]) = (Wrd34.Obj);

DEFLABEL (label_29)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_75_0]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_28;
  Wrd24 = Wrd28;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_75_4]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_75_7);
  (* (--Rsp)) = Rvl;
  (Wrd23.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd23.uLng) == 62))
    goto label_26;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd21.Lng))))
    goto label_26;
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd19.pObj) [5]) = (Wrd15.Obj);

DEFLABEL (label_25)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_75_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_75_12])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_75_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto loop_10;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_75_15);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.Obj) = (current_block [OBJECT_75_0]);
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_3]), 3);

DEFLABEL (label_19)
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75_8])), (Wrd25.pObj));

DEFLABEL (label_17)
  (Wrd24.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (current_block [OBJECT_75_0]);
  (Wrd45.Obj) = (current_block [OBJECT_75_2]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_6]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_3]), 3);

DEFLABEL (label_18)
  goto label_29;

DEFLABEL (label_32)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_75_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_75_12);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_75_5]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd22.uLng) == 62)
    goto label_34;

DEFLABEL (label_33)
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_3]), 3);

DEFLABEL (label_34)
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_33;
  ((Wrd18.pObj) [2]) = (Wrd6.Obj);
  Rvl = (current_block [OBJECT_75_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (loop_24)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_75_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_75_17);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_16]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_36;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd15.Lng))))
    goto label_36;
  (Wrd7.Obj) = ((Wrd13.pObj) [5]);

DEFLABEL (label_35)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_14]));

DEFLABEL (label_36)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_75_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_19]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_20)
  (Wrd7.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define LABEL_76_5 5
#define LABEL_76_7 7
#define LABEL_76_9 9
#define ENVIRONMENT_LABEL_76_3 19
#define DEBUGGING_LABEL_76_2 18
#define OBJECT_76_0 17
#define EXECUTE_CACHE_76_10 11
#define EXECUTE_CACHE_76_8 13
#define EXECUTE_CACHE_76_6 15
#define FREE_REFERENCES_LABEL_76_0 10
#define NUMBER_OF_LINKER_SECTIONS_76_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_76_4);
      goto ynode_reductions_4;

    case 1:
      current_block = (Rpc - LABEL_76_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_76_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_76_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ynode_reductions_7)
DEFLABEL (ynode_reductions_4)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_76_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  Rvl = (current_block [OBJECT_76_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_76_7);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_76_9);
  (Wrd10.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define LABEL_77_5 5
#define LABEL_77_7 7
#define LABEL_77_9 9
#define ENVIRONMENT_LABEL_77_3 18
#define DEBUGGING_LABEL_77_2 17
#define EXECUTE_CACHE_77_10 11
#define EXECUTE_CACHE_77_8 13
#define EXECUTE_CACHE_77_6 15
#define FREE_REFERENCES_LABEL_77_0 10
#define NUMBER_OF_LINKER_SECTIONS_77_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_77_4);
      goto ynode_dependents_3;

    case 1:
      current_block = (Rpc - LABEL_77_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_77_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_77_9);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ynode_dependents_6)
DEFLABEL (ynode_dependents_3)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_77_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_7)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_77_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_77_9);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define LABEL_78_5 5
#define LABEL_78_6 7
#define LABEL_78_7 9
#define LABEL_78_8 11
#define LABEL_78_9 13
#define LABEL_78_10 15
#define LABEL_78_11 17
#define LABEL_78_12 19
#define ENVIRONMENT_LABEL_78_3 29
#define DEBUGGING_LABEL_78_2 28
#define OBJECT_78_4 27
#define OBJECT_78_3 26
#define OBJECT_78_2 25
#define OBJECT_78_1 24
#define OBJECT_78_0 23
#define EXECUTE_CACHE_78_13 21
#define FREE_REFERENCES_LABEL_78_0 20
#define NUMBER_OF_LINKER_SECTIONS_78_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd57;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd45;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_78_4);
      goto ynode_direct_children_13;

    case 1:
      current_block = (Rpc - LABEL_78_5);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_78_6);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_78_7);
      goto loop_11;

    case 4:
      current_block = (Rpc - LABEL_78_8);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_78_9);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_78_10);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_78_11);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_78_12);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ynode_direct_children_22)
DEFLABEL (ynode_direct_children_13)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_25;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_25;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_24)
  (Wrd21.Obj) = (current_block [OBJECT_78_2]);
  (Rsp [1]) = (Wrd21.Obj);
  goto loop_11;

DEFLABEL (label_25)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_78_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (loop_23)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_78_7);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_78_2])))
    goto label_26;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_38;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_37)
  if ((Wrd7.Obj) == (current_block [OBJECT_78_2]))
    goto label_30;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_36;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_35)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_34;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_33)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_13]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_78_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  (Wrd45.Obj) = (Rsp [1]);

DEFLABEL (label_29)
  (Rsp [1]) = (Wrd45.Obj);
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_28;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd49.Obj) = ((Wrd51.pObj) [1]);

DEFLABEL (label_27)
  (Rsp [0]) = (Wrd49.Obj);
  goto loop_11;

DEFLABEL (label_28)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_10]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_3]), 1);

DEFLABEL (label_20)
  (Wrd49.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_32;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [0]);

DEFLABEL (label_31)
  (Wrd48.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  goto label_29;

DEFLABEL (label_32)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_9]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_4]), 1);

DEFLABEL (label_19)
  (Wrd36.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_12]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_4]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_11]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_3]), 1);

DEFLABEL (label_17)
  (Wrd20.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_3]), 1);

DEFLABEL (label_16)
  (Wrd7.Obj) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define LABEL_79_5 5
#define LABEL_79_6 7
#define ENVIRONMENT_LABEL_79_3 15
#define DEBUGGING_LABEL_79_2 14
#define OBJECT_79_5 13
#define OBJECT_79_4 12
#define OBJECT_79_3 11
#define OBJECT_79_2 10
#define OBJECT_79_1 9
#define OBJECT_79_0 8
#define FREE_REFERENCES_LABEL_79_0 8
#define NUMBER_OF_LINKER_SECTIONS_79_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_79_4);
      goto ynode_hidden_childrenP_4;

    case 1:
      current_block = (Rpc - LABEL_79_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_79_6);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ynode_hidden_childrenP_9)
DEFLABEL (ynode_hidden_childrenP_4)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_16;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_16;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_15)
  if ((Wrd5.Obj) == (current_block [OBJECT_79_2]))
    goto label_12;

DEFLABEL (label_11)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_14;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd32.Lng))))
    goto label_14;
  (Wrd24.Obj) = ((Wrd30.pObj) [5]);

DEFLABEL (label_13)
  if ((Wrd24.Obj) == (current_block [OBJECT_79_4]))
    goto label_11;
  Rvl = (current_block [OBJECT_79_5]);
  goto label_10;

DEFLABEL (label_14)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_79_3]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_6]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 2);

DEFLABEL (label_7)
  (Wrd24.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_79_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 2);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define LABEL_80_5 5
#define LABEL_80_6 7
#define LABEL_80_7 9
#define LABEL_80_8 11
#define LABEL_80_9 13
#define LABEL_80_10 15
#define ENVIRONMENT_LABEL_80_3 27
#define DEBUGGING_LABEL_80_2 26
#define OBJECT_80_6 25
#define OBJECT_80_5 24
#define OBJECT_80_4 23
#define OBJECT_80_3 22
#define OBJECT_80_2 21
#define OBJECT_80_1 20
#define OBJECT_80_0 19
#define EXECUTE_CACHE_80_11 17
#define FREE_REFERENCES_LABEL_80_0 16
#define NUMBER_OF_LINKER_SECTIONS_80_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd46;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd42;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd78;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd88;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd84;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_80_4);
      goto ynode_needs_redisplayB_6;

    case 1:
      current_block = (Rpc - LABEL_80_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_80_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_80_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_80_8);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_80_9);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_80_10);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ynode_needs_redisplayB_15)
DEFLABEL (ynode_needs_redisplayB_6)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_28;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_28;
  (Wrd5.Obj) = ((Wrd11.pObj) [7]);

DEFLABEL (label_27)
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd84.uLng) == 1))
    goto label_26;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  if ((Wrd22.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_80_6]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_25;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd32.Lng))))
    goto label_25;
  (Wrd24.Obj) = ((Wrd30.pObj) [7]);

DEFLABEL (label_24)
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd78.uLng) == 1))
    goto label_23;
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd77.Obj) = (current_block [OBJECT_80_3]);
  ((Wrd76.pObj) [0]) = (Wrd77.Obj);

DEFLABEL (label_22)
  (Wrd68.Obj) = (Rsp [0]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 62))
    goto label_21;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [0]);
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd67.Lng))))
    goto label_21;
  (Wrd42.Obj) = ((Wrd65.pObj) [2]);
  if ((Wrd42.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;

DEFLABEL (label_20)
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_19;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd54.Lng))))
    goto label_19;
  (Wrd46.Obj) = ((Wrd52.pObj) [2]);

DEFLABEL (label_18)
  (Rsp [0]) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_11]));

DEFLABEL (label_19)
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.Obj) = (current_block [OBJECT_80_5]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_10]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 2);

DEFLABEL (label_10)
  (Wrd46.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd71.Obj) = (current_block [OBJECT_80_5]);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_9]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 2);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_20;

DEFLABEL (label_23)
  (Wrd80.Obj) = (current_block [OBJECT_80_3]);
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_8]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_4]), 2);

DEFLABEL (label_12)
  goto label_22;

DEFLABEL (label_25)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_80_0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 2);

DEFLABEL (label_9)
  (Wrd24.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_26)
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_6]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_2]), 1);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_16;

DEFLABEL (label_28)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_80_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 2);

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define LABEL_81_5 5
#define ENVIRONMENT_LABEL_81_3 10
#define DEBUGGING_LABEL_81_2 9
#define OBJECT_81_2 8
#define OBJECT_81_1 7
#define OBJECT_81_0 6
#define FREE_REFERENCES_LABEL_81_0 6
#define NUMBER_OF_LINKER_SECTIONS_81_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_81_4);
      goto ynode_needs_redisplayP_1;

    case 1:
      current_block = (Rpc - LABEL_81_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ynode_needs_redisplayP_5)
DEFLABEL (ynode_needs_redisplayP_1)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd5.Obj) = ((Wrd11.pObj) [7]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_6;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd23.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_2]), 1);

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_81_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define LABEL_82_5 5
#define ENVIRONMENT_LABEL_82_3 11
#define DEBUGGING_LABEL_82_2 10
#define OBJECT_82_3 9
#define OBJECT_82_2 8
#define OBJECT_82_1 7
#define OBJECT_82_0 6
#define FREE_REFERENCES_LABEL_82_0 6
#define NUMBER_OF_LINKER_SECTIONS_82_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_82_4);
      goto ynode_doesnt_need_redisplayB_1;

    case 1:
      current_block = (Rpc - LABEL_82_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ynode_doesnt_need_redisplayB_5)
DEFLABEL (ynode_doesnt_need_redisplayB_1)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd7.Obj) = ((Wrd11.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_7)
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_6;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  ((Wrd24.pObj) [0]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_82_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_3]), 2);

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_82_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define LABEL_83_5 5
#define ENVIRONMENT_LABEL_83_3 12
#define DEBUGGING_LABEL_83_2 11
#define OBJECT_83_1 10
#define OBJECT_83_0 9
#define EXECUTE_CACHE_83_6 7
#define FREE_REFERENCES_LABEL_83_0 6
#define NUMBER_OF_LINKER_SECTIONS_83_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_83_4);
      goto new_ynode_typeB_1;

    case 1:
      current_block = (Rpc - LABEL_83_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (new_ynode_typeB_5)
DEFLABEL (new_ynode_typeB_1)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_7;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd9.Obj);

DEFLABEL (label_6)
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_6]));

DEFLABEL (label_7)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_83_0]);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_5]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 3);

DEFLABEL (label_3)
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define LABEL_84_5 5
#define ENVIRONMENT_LABEL_84_3 12
#define DEBUGGING_LABEL_84_2 11
#define OBJECT_84_1 10
#define OBJECT_84_0 9
#define EXECUTE_CACHE_84_6 7
#define FREE_REFERENCES_LABEL_84_0 6
#define NUMBER_OF_LINKER_SECTIONS_84_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      goto new_ynode_resultB_1;

    case 1:
      current_block = (Rpc - LABEL_84_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (new_ynode_resultB_5)
DEFLABEL (new_ynode_resultB_1)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_7;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd15.Lng))))
    goto label_7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [6]) = (Wrd9.Obj);

DEFLABEL (label_6)
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_6]));

DEFLABEL (label_7)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_84_0]);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_5]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_1]), 3);

DEFLABEL (label_3)
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define LABEL_85_5 5
#define LABEL_85_7 7
#define LABEL_85_10 9
#define LABEL_85_8 11
#define ENVIRONMENT_LABEL_85_3 26
#define DEBUGGING_LABEL_85_2 25
#define OBJECT_85_5 24
#define OBJECT_85_4 23
#define OBJECT_85_3 22
#define OBJECT_85_2 21
#define OBJECT_85_1 20
#define OBJECT_85_0 19
#define EXECUTE_CACHE_85_11 13
#define EXECUTE_CACHE_85_9 15
#define EXECUTE_CACHE_85_6 17
#define FREE_REFERENCES_LABEL_85_0 12
#define NUMBER_OF_LINKER_SECTIONS_85_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_85_4);
      goto ynode_expandB_5;

    case 1:
      current_block = (Rpc - LABEL_85_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_85_7);
      goto lambda_3;

    case 3:
      current_block = (Rpc - LABEL_85_10);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_85_8);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ynode_expandB_9)
DEFLABEL (ynode_expandB_5)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_85_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_85_5);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_7]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_85_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_11]));

DEFLABEL (lambda_10)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_85_7);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_13;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_13;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_12)
  if ((Wrd5.Obj) == (current_block [OBJECT_85_3]))
    goto label_11;
  Rvl = (current_block [OBJECT_85_5]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd24.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_85_4]);
  (Rsp [1]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_6]));

DEFLABEL (label_13)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_85_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_2]), 2);

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define LABEL_86_5 5
#define LABEL_86_7 7
#define LABEL_86_8 9
#define ENVIRONMENT_LABEL_86_3 20
#define DEBUGGING_LABEL_86_2 19
#define OBJECT_86_1 18
#define OBJECT_86_0 17
#define EXECUTE_CACHE_86_10 11
#define EXECUTE_CACHE_86_9 13
#define EXECUTE_CACHE_86_6 15
#define FREE_REFERENCES_LABEL_86_0 10
#define NUMBER_OF_LINKER_SECTIONS_86_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_86_4);
      goto ynode_contractB_3;

    case 1:
      current_block = (Rpc - LABEL_86_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_86_7);
      goto lambda_1;

    case 3:
      current_block = (Rpc - LABEL_86_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ynode_contractB_6)
DEFLABEL (ynode_contractB_3)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_86_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_86_5);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_7]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_86_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_10]));

DEFLABEL (lambda_7)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_86_7);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_86_1]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_6]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define ENVIRONMENT_LABEL_87_3 6
#define DEBUGGING_LABEL_87_2 5
#define OBJECT_87_0 4
#define FREE_REFERENCES_LABEL_87_0 4
#define NUMBER_OF_LINKER_SECTIONS_87_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_87_4);
      goto dummy_eval_step_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dummy_eval_step_3)
DEFLABEL (dummy_eval_step_0)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_0]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define LABEL_88_5 5
#define LABEL_88_6 7
#define LABEL_88_7 9
#define TAG_88_8 3
#define LABEL_88_10 11
#define ENVIRONMENT_LABEL_88_3 21
#define DEBUGGING_LABEL_88_2 20
#define OBJECT_88_2 19
#define OBJECT_88_1 18
#define OBJECT_88_0 17
#define EXECUTE_CACHE_88_9 13
#define FREE_REFERENCE_88_0 16
#define FREE_REFERENCES_LABEL_88_0 12
#define NUMBER_OF_LINKER_SECTIONS_88_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_88_4);
      goto step_hooks_presentP_4;

    case 1:
      current_block = (Rpc - LABEL_88_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_88_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_88_7);
      goto lambda_9;

    case 4:
      current_block = (Rpc - LABEL_88_10);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (step_hooks_presentP_8)
DEFLABEL (step_hooks_presentP_4)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_88_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_88_7])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  ((Wrd16.pObj) [2]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_0]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_88_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_88_5);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_88_7);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = (current_block [OBJECT_88_1]);
  ((Wrd8.pObj) [0]) = (Wrd9.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_88_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_11;
  Wrd11 = Wrd15;

DEFLABEL (label_10)
  (Wrd17.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd17.Obj);
  (Rsp [1]) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_2]), 2);

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_88_10])), (Wrd12.pObj));

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define ENVIRONMENT_LABEL_89_3 6
#define DEBUGGING_LABEL_89_2 5
#define OBJECT_89_0 4
#define FREE_REFERENCES_LABEL_89_0 4
#define NUMBER_OF_LINKER_SECTIONS_89_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_89_4);
      goto hook_record_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hook_record_3)
DEFLABEL (hook_record_0)
  INTERRUPT_CHECK (26, LABEL_89_4);
  Rvl = (current_block [OBJECT_89_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_4 3
#define LABEL_90_6 5
#define LABEL_90_5 7
#define LABEL_90_8 9
#define LABEL_90_11 11
#define LABEL_90_9 13
#define LABEL_90_12 15
#define ENVIRONMENT_LABEL_90_3 33
#define DEBUGGING_LABEL_90_2 32
#define OBJECT_90_6 31
#define OBJECT_90_5 30
#define OBJECT_90_4 29
#define OBJECT_90_3 28
#define OBJECT_90_2 27
#define OBJECT_90_1 26
#define OBJECT_90_0 25
#define EXECUTE_CACHE_90_14 17
#define EXECUTE_CACHE_90_13 19
#define EXECUTE_CACHE_90_10 21
#define EXECUTE_CACHE_90_7 23
#define FREE_REFERENCES_LABEL_90_0 16
#define NUMBER_OF_LINKER_SECTIONS_90_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ystep_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd40;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_90_4);
      goto print_hook_trace_9;

    case 1:
      current_block = (Rpc - LABEL_90_6);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_90_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_90_8);
      goto loop_7;

    case 4:
      current_block = (Rpc - LABEL_90_11);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_90_9);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_90_12);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_hook_trace_14)
DEFLABEL (print_hook_trace_9)
  INTERRUPT_CHECK (26, LABEL_90_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_17;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_17;
  (Wrd10.Obj) = ((Wrd14.pObj) [11]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_16)
  goto loop_7;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_90_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_7]));

DEFLABEL (label_17)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_90_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (loop_15)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_90_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_90_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_14]));

DEFLABEL (label_18)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_90_2]);
  (Wrd35.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd35.Lng))))
    goto label_27;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd32.Obj));
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd14.Obj) == (Wrd16.Obj))
    goto label_26;

DEFLABEL (label_25)
  (Wrd17.Obj) = (current_block [OBJECT_90_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd27.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd27.Lng)))
    goto label_19;
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_3]), 2);

DEFLABEL (label_19)
  (Wrd21.uLng) = (OBJECT_DATUM (Wrd17.Obj));
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd21.Obj) == (Wrd23.Obj))
    goto label_21;
  (Wrd19.Obj) = (current_block [OBJECT_90_6]);
  goto label_20;

DEFLABEL (label_21)
  (Wrd19.Obj) = (current_block [OBJECT_90_5]);

DEFLABEL (label_20)
DEFLABEL (label_24)
  Rsp = (& (Rsp [3]));
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_23;

DEFLABEL (label_22)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_23)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_13]));

DEFLABEL (label_26)
  Rsp = (& (Rsp [2]));
  goto label_22;

DEFLABEL (label_27)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_12]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_3]), 2);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  goto label_26;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_90_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_22;

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
#define LABEL_19 19
#define LABEL_15 21
#define LABEL_16 23
#define LABEL_18 25
#define LABEL_21 27
#define LABEL_22 29
#define LABEL_26 31
#define LABEL_23 33
#define LABEL_24 35
#define LABEL_25 37
#define LABEL_27 39
#define LABEL_28 41
#define LABEL_33 43
#define LABEL_29 45
#define TAG_30 21
#define LABEL_35 47
#define LABEL_31 49
#define LABEL_32 51
#define LABEL_34 53
#define LABEL_36 55
#define LABEL_37 57
#define LABEL_38 59
#define LABEL_39 61
#define ENVIRONMENT_LABEL_3 109
#define DEBUGGING_LABEL_2 108
#define PURIFICATION_ROOT 107
#define OBJECT_32 106
#define OBJECT_31 105
#define OBJECT_30 104
#define OBJECT_29 103
#define OBJECT_28 102
#define OBJECT_27 101
#define OBJECT_26 100
#define OBJECT_25 99
#define OBJECT_24 98
#define OBJECT_23 97
#define OBJECT_22 96
#define OBJECT_21 95
#define OBJECT_20 94
#define OBJECT_19 93
#define OBJECT_18 92
#define OBJECT_17 91
#define OBJECT_16 90
#define OBJECT_15 89
#define OBJECT_14 88
#define OBJECT_13 87
#define OBJECT_12 86
#define OBJECT_11 85
#define OBJECT_10 84
#define OBJECT_9 83
#define OBJECT_8 82
#define OBJECT_7 81
#define OBJECT_6 80
#define OBJECT_5 79
#define OBJECT_4 78
#define OBJECT_3 77
#define OBJECT_2 76
#define OBJECT_1 75
#define OBJECT_0 74
#define FREE_REFERENCE_1 63
#define FREE_REFERENCE_0 64
#define GLOBAL_EXECUTE_CACHE_20 66
#define GLOBAL_EXECUTE_CACHE_12 68
#define GLOBAL_EXECUTE_CACHE_10 70
#define GLOBAL_EXECUTE_CACHE_6 72
#define FREE_REFERENCES_LABEL_0 62
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
ystep_so_8e4542242452bf4f (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd53;
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
  machine_word Wrd16;
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
      goto continuation_11;

    case 1:
      current_block = (Rpc - LABEL_9);
      goto label_50;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_10;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_17;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_12;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto continuation_18;

    case 6:
      current_block = (Rpc - LABEL_17);
      goto label_51;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto make_stepper_57;

    case 8:
      current_block = (Rpc - LABEL_19);
      goto label_52;

    case 9:
      current_block = (Rpc - LABEL_15);
      goto continuation_20;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto continuation_19;

    case 11:
      current_block = (Rpc - LABEL_18);
      goto continuation_14;

    case 12:
      current_block = (Rpc - LABEL_21);
      goto continuation_21;

    case 13:
      current_block = (Rpc - LABEL_22);
      goto continuation_31;

    case 14:
      current_block = (Rpc - LABEL_26);
      goto label_53;

    case 15:
      current_block = (Rpc - LABEL_23);
      goto continuation_29;

    case 16:
      current_block = (Rpc - LABEL_24);
      goto continuation_37;

    case 17:
      current_block = (Rpc - LABEL_25);
      goto continuation_32;

    case 18:
      current_block = (Rpc - LABEL_27);
      goto continuation_22;

    case 19:
      current_block = (Rpc - LABEL_28);
      goto continuation_38;

    case 20:
      current_block = (Rpc - LABEL_33);
      goto label_54;

    case 21:
      current_block = (Rpc - LABEL_29);
      goto make_ynode_1_58;

    case 22:
      current_block = (Rpc - LABEL_35);
      goto label_55;

    case 23:
      current_block = (Rpc - LABEL_31);
      goto continuation_40;

    case 24:
      current_block = (Rpc - LABEL_32);
      goto continuation_39;

    case 25:
      current_block = (Rpc - LABEL_34);
      goto continuation_34;

    case 26:
      current_block = (Rpc - LABEL_36);
      goto continuation_47;

    case 27:
      current_block = (Rpc - LABEL_37);
      goto label_60;

    case 28:
      current_block = (Rpc - LABEL_38);
      goto label_61;

    case 29:
      current_block = (Rpc - LABEL_39);
      goto expression_49;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_49)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_38])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_61)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_60)
  {
    static const short sections [] =
      {
	0,
	1,
	0,
	2,
	0,
	1,
	1,
	1,
	1,
	0,
	0,
	1,
	0,
	1,
	1,
	1,
	2,
	1,
	1,
	0,
	0,
	2,
	1,
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
	1,
	2,
	1,
	1,
	1,
	1,
	1,
	0,
	1,
	0,
	0,
	0,
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
	1,
	2,
	2,
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
    if (counter > 90)
      goto label_59;
    blocks = (current_block [OBJECT_32]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_37])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_59)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_0]);
  (Wrd17.Obj) = (current_block [OBJECT_1]);
  (* (Rhp++)) = (Wrd16.Obj);
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
  (Wrd53.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd54.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_69;
  Wrd11 = Wrd15;

DEFLABEL (label_68)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_67;
  Wrd11 = Wrd15;

DEFLABEL (label_66)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_1]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_14]);
  (* (Rhp++)) = (Wrd24.Obj);
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
  (Wrd37.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd12.Obj) = (MAKE_OBJECT (0, 2));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-3]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_65;
  Wrd11 = Wrd15;

DEFLABEL (label_64)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_25);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_63;
  Wrd11 = Wrd15;

DEFLABEL (label_62)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_32);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_23]);
  (Wrd12.Obj) = (current_block [OBJECT_1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_24]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_25]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_26]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd31.Obj) = (current_block [OBJECT_27]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd38.Obj) = (MAKE_OBJECT (0, 5));
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd34.pObj) = (& (Rhp [-6]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd34.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd5.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_31]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33])), (Wrd12.pObj));

DEFLABEL (label_54)
  (Wrd11.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26])), (Wrd12.pObj));

DEFLABEL (label_53)
  (Wrd11.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd12.pObj));

DEFLABEL (label_51)
  (Wrd11.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd12.pObj));

DEFLABEL (label_50)
  (Wrd11.Obj) = Rvl;
  goto label_68;

DEFLABEL (make_stepper_57)
  CLOSURE_HEADER (LABEL_13);

DEFLABEL (make_stepper_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_71;
  Wrd9 = Wrd13;

DEFLABEL (label_70)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_20]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd19.Obj) = (MAKE_OBJECT (0, 11));
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (Wrd23.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-12]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd10.pObj));

DEFLABEL (label_52)
  (Wrd9.Obj) = Rvl;
  goto label_70;

DEFLABEL (make_ynode_1_58)
  CLOSURE_HEADER (LABEL_29);

DEFLABEL (make_ynode_1_35)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_73;
  Wrd9 = Wrd13;

DEFLABEL (label_72)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_20]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_34);
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
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd12.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd8.pObj) = (& (Rhp [-8]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd8.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35])), (Wrd10.pObj));

DEFLABEL (label_55)
  (Wrd9.Obj) = Rvl;
  goto label_72;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_ystep_so_8e4542242452bf4f [90] =
  {
    { "ystep_so_code_1", 1, ystep_so_code_1 },
    { "ystep_so_code_2", 1, ystep_so_code_2 },
    { "ystep_so_code_3", 1, ystep_so_code_3 },
    { "ystep_so_code_4", 1, ystep_so_code_4 },
    { "ystep_so_code_5", 1, ystep_so_code_5 },
    { "ystep_so_code_6", 1, ystep_so_code_6 },
    { "ystep_so_code_7", 1, ystep_so_code_7 },
    { "ystep_so_code_8", 1, ystep_so_code_8 },
    { "ystep_so_code_9", 1, ystep_so_code_9 },
    { "ystep_so_code_10", 1, ystep_so_code_10 },
    { "ystep_so_code_11", 1, ystep_so_code_11 },
    { "ystep_so_code_12", 1, ystep_so_code_12 },
    { "ystep_so_code_13", 1, ystep_so_code_13 },
    { "ystep_so_code_14", 1, ystep_so_code_14 },
    { "ystep_so_code_15", 1, ystep_so_code_15 },
    { "ystep_so_code_16", 1, ystep_so_code_16 },
    { "ystep_so_code_17", 1, ystep_so_code_17 },
    { "ystep_so_code_18", 1, ystep_so_code_18 },
    { "ystep_so_code_19", 1, ystep_so_code_19 },
    { "ystep_so_code_20", 1, ystep_so_code_20 },
    { "ystep_so_code_21", 1, ystep_so_code_21 },
    { "ystep_so_code_22", 1, ystep_so_code_22 },
    { "ystep_so_code_23", 4, ystep_so_code_23 },
    { "ystep_so_code_24", 2, ystep_so_code_24 },
    { "ystep_so_code_25", 3, ystep_so_code_25 },
    { "ystep_so_code_26", 2, ystep_so_code_26 },
    { "ystep_so_code_27", 3, ystep_so_code_27 },
    { "ystep_so_code_28", 2, ystep_so_code_28 },
    { "ystep_so_code_29", 2, ystep_so_code_29 },
    { "ystep_so_code_30", 6, ystep_so_code_30 },
    { "ystep_so_code_31", 6, ystep_so_code_31 },
    { "ystep_so_code_32", 2, ystep_so_code_32 },
    { "ystep_so_code_33", 11, ystep_so_code_33 },
    { "ystep_so_code_34", 2, ystep_so_code_34 },
    { "ystep_so_code_35", 2, ystep_so_code_35 },
    { "ystep_so_code_36", 4, ystep_so_code_36 },
    { "ystep_so_code_37", 5, ystep_so_code_37 },
    { "ystep_so_code_38", 2, ystep_so_code_38 },
    { "ystep_so_code_39", 2, ystep_so_code_39 },
    { "ystep_so_code_40", 2, ystep_so_code_40 },
    { "ystep_so_code_41", 10, ystep_so_code_41 },
    { "ystep_so_code_42", 10, ystep_so_code_42 },
    { "ystep_so_code_43", 1, ystep_so_code_43 },
    { "ystep_so_code_44", 1, ystep_so_code_44 },
    { "ystep_so_code_45", 1, ystep_so_code_45 },
    { "ystep_so_code_46", 19, ystep_so_code_46 },
    { "ystep_so_code_47", 12, ystep_so_code_47 },
    { "ystep_so_code_48", 12, ystep_so_code_48 },
    { "ystep_so_code_49", 2, ystep_so_code_49 },
    { "ystep_so_code_50", 11, ystep_so_code_50 },
    { "ystep_so_code_51", 6, ystep_so_code_51 },
    { "ystep_so_code_52", 5, ystep_so_code_52 },
    { "ystep_so_code_53", 4, ystep_so_code_53 },
    { "ystep_so_code_54", 8, ystep_so_code_54 },
    { "ystep_so_code_55", 1, ystep_so_code_55 },
    { "ystep_so_code_56", 1, ystep_so_code_56 },
    { "ystep_so_code_57", 1, ystep_so_code_57 },
    { "ystep_so_code_58", 1, ystep_so_code_58 },
    { "ystep_so_code_59", 1, ystep_so_code_59 },
    { "ystep_so_code_60", 1, ystep_so_code_60 },
    { "ystep_so_code_61", 1, ystep_so_code_61 },
    { "ystep_so_code_62", 1, ystep_so_code_62 },
    { "ystep_so_code_63", 1, ystep_so_code_63 },
    { "ystep_so_code_64", 1, ystep_so_code_64 },
    { "ystep_so_code_65", 1, ystep_so_code_65 },
    { "ystep_so_code_66", 4, ystep_so_code_66 },
    { "ystep_so_code_67", 4, ystep_so_code_67 },
    { "ystep_so_code_68", 5, ystep_so_code_68 },
    { "ystep_so_code_69", 3, ystep_so_code_69 },
    { "ystep_so_code_70", 9, ystep_so_code_70 },
    { "ystep_so_code_71", 8, ystep_so_code_71 },
    { "ystep_so_code_72", 8, ystep_so_code_72 },
    { "ystep_so_code_73", 3, ystep_so_code_73 },
    { "ystep_so_code_74", 3, ystep_so_code_74 },
    { "ystep_so_code_75", 12, ystep_so_code_75 },
    { "ystep_so_code_76", 4, ystep_so_code_76 },
    { "ystep_so_code_77", 4, ystep_so_code_77 },
    { "ystep_so_code_78", 9, ystep_so_code_78 },
    { "ystep_so_code_79", 3, ystep_so_code_79 },
    { "ystep_so_code_80", 7, ystep_so_code_80 },
    { "ystep_so_code_81", 2, ystep_so_code_81 },
    { "ystep_so_code_82", 2, ystep_so_code_82 },
    { "ystep_so_code_83", 2, ystep_so_code_83 },
    { "ystep_so_code_84", 2, ystep_so_code_84 },
    { "ystep_so_code_85", 5, ystep_so_code_85 },
    { "ystep_so_code_86", 4, ystep_so_code_86 },
    { "ystep_so_code_87", 1, ystep_so_code_87 },
    { "ystep_so_code_88", 5, ystep_so_code_88 },
    { "ystep_so_code_89", 1, ystep_so_code_89 },
    { "ystep_so_code_90", 7, ystep_so_code_90 }
  };

int
decl_ystep_so_8e4542242452bf4f (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_ystep_so_8e4542242452bf4f);
  return (0);
}

DECLARE_COMPILED_CODE ("ystep.so", 30, decl_ystep_so_8e4542242452bf4f, ystep_so_8e4542242452bf4f)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_ystep_so_data_8e4542242452bf4f [7854] =
  "\x7e\x91\x01\xca\x12\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x08\x22\x29"
  "\x21\x9d\x2b\xb9\x1d\xb0\x82\x88\x08\x22\x29\x21\x9d\x2b\xba\x1d"
  "\xb0\x83\x88\xc2\xbb\x81\x22\x29\x21\x9e\x2b\xbc\x1d\xb0\x84\x88"
  "\xb3\x82\x22\x29\x21\x9e\x2b\xbd\x1d\xb0\x85\x88\xb3\x83\x22\x29"
  "\x21\x9e\x2b\xbe\x1d\xb0\x86\x88\xb3\x84\x22\x29\x21\x9e\x2b\xbf"
  "\x1d\xb0\x02\x88\xb3\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\xb3\x86\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x02\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x02\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\xb3\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\xb3\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x1d\x81"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x82\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x83\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1d\x84\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1d\x85\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d"
  "\x86\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\xb3\x80\xc1\x1c\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\xb3\x81\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\xc1\x1c\xb3\x81\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\xb3\x81\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb3\x81\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\x08\xb3\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb3\x02\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x81\x85\x80\x86\x0d\x0d\x1c\x24\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c"
  "\x80\x84\x85\x02\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x85\x1b\x02\x08\x0c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x82\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x82\x07\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb3\x85\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x84\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x84\x07\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c\x84\x1b\x83\x0c"
  "\x0d\x1c\x1b\xb3\x02\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x86\x82\x1b\x85"
  "\xb3\x02\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x22\x29\x21\x9d\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88"
  "\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\xc3\x1c\xc2\x1c"
  "\x08\xc3\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1b\x08\xb3\x02\x1b\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x1b\x08\x1b\x0d\x1c\x84\xb3\x83"
  "\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x02\x0d\x08\x1b\x02\x1b\x82\xb3\x83\x28\x1b"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x86"
  "\x1d\x07\x1b\x84\xb3\x83\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x84"
  "\x1b\x1d\xb3\x83\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x07\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x22\x29"
  "\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xb3\x81\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\xb3\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\xb3\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x84\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x85\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\xb3\x86\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1d\x81\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x82"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x84\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x85\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\xb3\x80\x1b\x0e\x1c\x24\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb3\x83\x1b\x1b"
  "\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\xb3\x85\x0d\x1c\x1b\x0d\x1c\x24\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb3\x85\x1b"
  "\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x84"
  "\x1b\x85\x07\xb3\x86\x08\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x84\xb3\x81\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x84\xb3\x81\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x81\x1b\x1b\x08\xb3\x84\x1b\x24\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x08\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d"
  "\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1b\x08\xb3\x84\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x08\x84\x1b\xb3\x82\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x81\xc2\x1c\x07\x1b"
  "\xb3\x86\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb3\x86\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\xb3\x86\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x85\x28\x1b\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x1b\xb3"
  "\x82\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x07\x1b\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x22\x29\x21\x9d\x2b"
  "\x1c\x1d\xb0\x02\x88\x06\x07\x85\xc2\x02\xb3\x02\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x17\xbb\x88\xb3\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0d\x0d"
  "\x1b\x1b\x0d\x0d\x1b\x1b\x0d\x0d\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x17\x1b\x1b\x1b\x1b\x1b\x1b\x9c\x0d"
  "\x0d\x0d\x0d\x0d\x84\x0d\x1c\x1b\x99\x1b\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x0c\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x08\x8d\x1b\x2a\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d"
  "\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x1b\x0d\x0d\x0d\x1b\x1b"
  "\x1b\x0d\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x0d\x17\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x1b\x1b\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x02"
  "\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb6\x2a\xb5\x2a\xb4\x2a\x17\xc3"
  "\x0d\x1c\x0c\x0d\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x08\x14\xb1"
  "\x2a\x08\xb2\x2a\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x1b\x24"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x54"
  "\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77"
  "\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72"
  "\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f"
  "\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x79\x73\x74\x65\x70\x2e"
  "\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x1f\x04\x82\x02\x03\x02\x20"
  "\x04\x82\x02\x03\x02\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65"
  "\x66\x21\x04\x83\x04\x03\x02\x22\x04\x83\x04\x03\x02\x23\x04\x83"
  "\x04\x03\x02\x24\x04\x83\x04\x03\x02\x08\x25\x04\x83\x04\x03\x09"
  "\x02\x09\x26\x04\x83\x04\x03\x0a\x02\x0a\x08\x27\x04\x83\x04\x03"
  "\x0b\x02\x0b\x09\x28\x04\x83\x04\x03\x0c\x02\x0c\x0a\x29\x04\x83"
  "\x04\x03\x0d\x02\x0d\x0b\x2a\x04\x83\x04\x03\x0e\x02\x0e\x0d\x25"
  "\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x0f\x02\x2b\x04\x84"
  "\x06\x03\x10\x02\x0f\x0f\x02\x2c\x04\x84\x06\x03\x11\x02\x10\x0f"
  "\x02\x2d\x04\x84\x06\x03\x12\x02\x11\x0f\x02\x2e\x04\x84\x06\x03"
  "\x13\x02\x12\x0f\x02\x2f\x04\x84\x06\x03\x14\x02\x13\x0f\x02\x30"
  "\x04\x84\x06\x03\x15\x02\x14\x0f\x02\x08\x31\x04\x84\x06\x03\x16"
  "\x02\x15\x0f\x02\x09\x32\x04\x84\x06\x03\x17\x02\x16\x0f\x02\x0a"
  "\x33\x04\x84\x06\x03\x18\x02\x17\x0f\x02\x0b\x34\x04\x84\x06\x03"
  "\x19\x02\x18\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65\x6e\x67"
  "\x74\x68\x1a\x07\x2e\x74\x61\x67\x2e\x31\x1b\x02\x38\x0a\x81\x85"
  "\x02\x37\x08\x81\x83\x02\x36\x06\x81\x83\x02\x35\x04\x83\x04\x09"
  "\x12\x1c\x02\x19\x0f\x02\x3a\x06\x81\x87\x02\x39\x04\x84\x06\x05"
  "\x0c\x1d\x02\x1a\x0f\x02\x04\x63\x64\x72\x1e\x3d\x08\x81\x87\x02"
  "\x3c\x06\x81\x87\x02\x3b\x04\x83\x04\x07\x0f\x1f\x02\x1b\x04\x63"
  "\x61\x72\x20\x3f\x06\x81\x83\x02\x3e\x04\x83\x04\x05\x0b\x21\x02"
  "\x1c\x20\x03\x0a\x6c\x61\x73\x74\x2d\x70\x61\x69\x72\x22\x02\x42"
  "\x08\x81\x83\x02\x41\x06\x81\x85\x02\x40\x04\x83\x04\x07\x10\x23"
  "\x02\x1d\x44\x06\x81\x83\x02\x43\x04\x83\x04\x05\x0c\x24\x02\x1e"
  "\x09\x03\x0d\x73\x74\x61\x63\x6b\x2d\x65\x6d\x70\x74\x79\x3f\x25"
  "\x03\x0d\x73\x74\x61\x63\x6b\x2d\x62\x6f\x74\x74\x6f\x6d\x26\x03"
  "\x46\x06\x81\x83\x02\x45\x04\x83\x04\x05\x0f\x27\x02\x1f\x04\x74"
  "\x6f\x70\x14\x79\x6e\x6f\x64\x65\x2d\x65\x78\x70\x3a\x74\x6f\x70"
  "\x2d\x6c\x65\x76\x65\x6c\x28\x02\x05\x0b\x6d\x61\x6b\x65\x2d\x79"
  "\x6e\x6f\x64\x65\x29\x04\x05\x65\x76\x61\x6c\x2a\x02\x12\x73\x74"
  "\x65\x70\x70\x65\x72\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x3f\x2b"
  "\x06\x0b\x73\x74\x65\x70\x2d\x73\x74\x61\x72\x74\x2c\x05\x4c\x0e"
  "\x81\x89\x02\x4b\x0c\x81\x89\x02\x4a\x0a\x81\x87\x02\x49\x08\x81"
  "\x83\x02\x48\x06\x81\x89\x02\x47\x04\x84\x06\x0d\x20\x2d\x02\x20"
  "\x08\x70\x72\x6f\x63\x65\x65\x64\x2e\x08\x12\x79\x6e\x6f\x64\x65"
  "\x2d\x65\x78\x70\x3a\x70\x72\x6f\x63\x65\x65\x64\x2f\x02\x02\x2b"
  "\x05\x29\x02\x09\x63\x6f\x6e\x74\x69\x6e\x75\x65\x06\x2c\x05\x52"
  "\x0e\x81\x87\x02\x51\x0c\x82\x02\x50\x0a\x81\x89\x02\x4f\x08\x81"
  "\x83\x02\x4e\x06\x81\x81\x02\x4d\x04\x82\x02\x0d\x20\x30\x02\x21"
  "\x02\x03\x14\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x3f\x02\x54\x06\x82\x02\x53\x04\x82\x02\x05"
  "\x0c\x31\x02\x22\x0f\x0a\x36\x53\x6f\x72\x72\x79\x2c\x20\x74\x68"
  "\x69\x73\x20\x63\x6f\x70\x79\x20\x6f\x66\x20\x53\x63\x68\x65\x6d"
  "\x65\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x73\x75\x70\x70\x6f"
  "\x72\x74\x20\x73\x74\x65\x70\x70\x69\x6e\x67\x2e\x02\x14\x73\x74"
  "\x65\x70\x2d\x68\x6f\x6f\x6b\x73\x2d\x70\x72\x65\x73\x65\x6e\x74"
  "\x3f\x32\x03\x06\x65\x72\x72\x6f\x72\x33\x03\x0d\x6d\x61\x6b\x65"
  "\x2d\x73\x74\x65\x70\x70\x65\x72\x34\x03\x13\x6d\x61\x6b\x65\x2d"
  "\x73\x74\x65\x70\x70\x65\x72\x2d\x68\x6f\x6f\x6b\x73\x35\x03\x17"
  "\x73\x74\x65\x70\x2d\x6f\x75\x74\x70\x75\x74\x2d\x69\x6e\x69\x74"
  "\x69\x61\x6c\x69\x7a\x65\x36\x05\x14\x6d\x61\x6b\x65\x2d\x73\x74"
  "\x61\x72\x74\x69\x6e\x67\x2d\x68\x6f\x6f\x6b\x73\x37\x03\x05\x73"
  "\x74\x65\x70\x38\x03\x10\x64\x75\x6d\x6d\x79\x2d\x65\x76\x61\x6c"
  "\x2d\x73\x74\x65\x70\x39\x09\x5f\x18\x81\x85\x02\x5e\x16\x81\x83"
  "\x02\x5d\x14\x81\x8b\x02\x5c\x12\x81\x83\x02\x5b\x10\x81\x8b\x02"
  "\x5a\x0e\x81\x8b\x02\x59\x0c\x81\x8b\x02\x58\x0a\x81\x89\x02\x57"
  "\x08\x81\x89\x02\x56\x06\x81\x89\x02\x55\x04\x86\x0a\x17\x30\x3a"
  "\x02\x23\x0f\x03\x09\x72\x61\x77\x2d\x73\x74\x65\x70\x3b\x02\x61"
  "\x06\x81\x83\x02\x60\x04\x83\x04\x05\x0d\x3c\x02\x24\x0f\x03\x3b"
  "\x02\x63\x06\x81\x83\x02\x62\x04\x83\x04\x05\x0e\x3d\x02\x25\x0e"
  "\x6e\x6f\x2d\x73\x74\x65\x70\x2d\x68\x6f\x6f\x6b\x73\x3e\x02\x03"
  "\x39\x02\x67\x0a\x81\x83\x02\x66\x08\x81\x83\x02\x65\x06\x81\x85"
  "\x02\x64\x04\x83\x04\x09\x13\x3f\x02\x26\x02\x03\x38\x02\x6c\x0c"
  "\x81\x89\x02\x6b\x0a\x81\x89\x02\x6a\x08\x81\x89\x02\x69\x06\x81"
  "\x89\x02\x68\x04\x84\x06\x0b\x12\x40\x02\x27\x0f\x03\x0c\x73\x74"
  "\x65\x70\x2d\x6f\x76\x65\x72\x2d\x31\x41\x02\x6e\x06\x81\x83\x02"
  "\x6d\x04\x83\x04\x05\x0d\x42\x02\x28\x0f\x03\x41\x02\x70\x06\x81"
  "\x83\x02\x6f\x04\x83\x04\x05\x0e\x43\x02\x29\x0f\x08\x61\x6e\x69"
  "\x6d\x61\x74\x65\x44\x03\x41\x02\x72\x06\x81\x83\x02\x71\x04\x83"
  "\x04\x05\x0e\x45\x02\x2a\x2a\x0a\x73\x74\x65\x70\x2d\x6f\x76\x65"
  "\x72\x46\x0f\x1b\x4c\x61\x73\x74\x20\x65\x76\x65\x6e\x74\x20\x77"
  "\x61\x73\x20\x6e\x6f\x74\x20\x61\x20\x63\x61\x6c\x6c\x3a\x05\x63"
  "\x61\x6c\x6c\x47\x20\x08\x03\x0a\x73\x74\x61\x63\x6b\x2d\x74\x6f"
  "\x70\x48\x04\x33\x03\x3b\x04\x10\x6e\x65\x77\x2d\x79\x6e\x6f\x64"
  "\x65\x2d\x74\x79\x70\x65\x21\x33\x05\x7c\x16\x81\x87\x02\x7b\x14"
  "\x81\x83\x02\x7a\x12\x81\x85\x02\x79\x10\x81\x83\x02\x78\x0e\x81"
  "\x83\x02\x77\x0c\x81\x85\x02\x76\x0a\x81\x83\x02\x75\x08\x81\x83"
  "\x02\x74\x06\x83\x04\x73\x04\x81\x83\x02\x15\x2b\x49\x02\x2b\x0f"
  "\x09\x03\x1f\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x63\x75\x72"
  "\x72\x65\x6e\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f"
  "\x6e\x4a\x04\x19\x73\x74\x65\x70\x2d\x6f\x75\x74\x70\x75\x74\x2d"
  "\x66\x69\x6e\x61\x6c\x2d\x72\x65\x73\x75\x6c\x74\x4b\x04\x0c\x73"
  "\x74\x65\x70\x2d\x6f\x75\x74\x70\x75\x74\x4c\x03\x3b\x05\x86\x01"
  "\x16\x81\x85\x02\x85\x01\x14\x81\x85\x02\x84\x01\x12\x81\x85\x02"
  "\x83\x01\x10\x81\x83\x02\x82\x01\x0e\x81\x83\x02\x81\x01\x0c\x81"
  "\x83\x02\x80\x01\x0a\x81\x85\x02\x7f\x08\x81\x85\x02\x7e\x06\x81"
  "\x83\x02\x7d\x04\x83\x04\x15\x27\x4d\x02\x2c\x02\x87\x01\x04\x83"
  "\x04\x03\x4e\x02\x2d\x02\x88\x01\x04\x84\x06\x03\x4f\x02\x2e\x89"
  "\x01\x04\x84\x06\x03\x50\x02\x2f\x14\x70\x72\x69\x6d\x69\x74\x69"
  "\x76\x65\x2d\x65\x76\x61\x6c\x2d\x73\x74\x65\x70\x51\x15\x70\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x2d\x61\x70\x70\x6c\x79\x2d\x73\x74"
  "\x65\x70\x52\x16\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x72\x65"
  "\x74\x75\x72\x6e\x2d\x73\x74\x65\x70\x53\x0b\x68\x75\x6e\x6b\x33"
  "\x2d\x63\x6f\x6e\x73\x54\x03\x13\x6d\x61\x70\x2d\x72\x65\x66\x65"
  "\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x04\x04\x6d\x61\x70\x55"
  "\x04\x0e\x70\x72\x6f\x63\x65\x73\x73\x2d\x61\x70\x70\x6c\x79\x56"
  "\x04\x0f\x70\x72\x6f\x63\x65\x73\x73\x2d\x72\x65\x74\x75\x72\x6e"
  "\x57\x04\x0d\x70\x72\x6f\x63\x65\x73\x73\x2d\x65\x76\x61\x6c\x58"
  "\x06\x9c\x01\x28\x81\x83\x02\x9b\x01\x26\x81\x89\x02\x9a\x01\x24"
  "\x81\x87\x02\x99\x01\x22\x81\x83\x02\x98\x01\x20\x81\x87\x02\x97"
  "\x01\x1e\x81\x83\x02\x96\x01\x1c\x81\x87\x02\x95\x01\x1a\x81\x85"
  "\x02\x94\x01\x18\x81\x83\x02\x93\x01\x16\x81\x87\x02\x92\x01\x14"
  "\x83\x04\x91\x01\x12\x81\x87\x02\x90\x01\x10\x81\x83\x02\x8f\x01"
  "\x0e\x81\x85\x02\x8e\x01\x0c\x81\x87\x02\x8d\x01\x0a\x81\x87\x02"
  "\x8c\x01\x08\x81\x85\x02\x8b\x01\x06\x81\x85\x02\x8a\x01\x04\x83"
  "\x04\x27\x3a\x59\x02\x30\x51\x53\x0a\x54\xa8\x01\x1a\x81\x87\x02"
  "\xa7\x01\x18\x81\x87\x02\xa6\x01\x16\x81\x87\x02\xa5\x01\x14\x81"
  "\x87\x02\xa4\x01\x12\x81\x87\x02\xa3\x01\x10\x81\x85\x02\xa2\x01"
  "\x0e\x81\x85\x02\xa1\x01\x0c\x81\x85\x02\xa0\x01\x0a\x81\x85\x02"
  "\x9f\x01\x08\x81\x85\x02\x9e\x01\x06\x81\x89\x02\x9d\x01\x04\x85"
  "\x08\x19\x22\x5a\x02\x31\x0f\x08\x47\x2a\x0d\x73\x74\x65\x70\x70"
  "\x65\x64\x2d\x6f\x76\x65\x72\x47\x03\x48\x03\x25\x03\x12\x70\x72"
  "\x6f\x63\x65\x73\x73\x2d\x72\x65\x64\x75\x63\x74\x69\x6f\x6e\x5b"
  "\x04\x0b\x72\x65\x64\x75\x63\x74\x69\x6f\x6e\x3f\x5c\x04\x0c\x73"
  "\x74\x61\x63\x6b\x2d\x70\x75\x73\x68\x21\x5d\x05\x29\x03\x10\x6d"
  "\x61\x79\x62\x65\x2d\x72\x65\x64\x69\x73\x70\x6c\x61\x79\x5e\x08"
  "\xb4\x01\x1a\x81\x87\x02\xb3\x01\x18\x81\x87\x02\xb2\x01\x16\x81"
  "\x8b\x02\xb1\x01\x14\x81\x8d\x02\xb0\x01\x12\x81\x85\x02\xaf\x01"
  "\x10\x81\x87\x02\xae\x01\x0e\x81\x87\x02\xad\x01\x0c\x81\x89\x02"
  "\xac\x01\x0a\x81\x89\x02\xab\x01\x08\x81\x85\x02\xaa\x01\x06\x81"
  "\x85\x02\xa9\x01\x04\x84\x06\x19\x34\x5f\x02\x32\x02\x03\x14\x63"
  "\x6f\x6d\x70\x6f\x75\x6e\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x3f\x03\x5b\x03\xb6\x01\x06\x81\x85\x02\xb5\x01\x04\x84\x06"
  "\x05\x0e\x60\x02\x33\x08\x07\x72\x65\x74\x75\x72\x6e\x0f\x09\x2e"
  "\x03\x48\x03\x14\x6d\x61\x79\x62\x65\x2d\x65\x6e\x64\x2d\x73\x74"
  "\x65\x70\x2d\x6f\x76\x65\x72\x2e\x04\x12\x6e\x65\x77\x2d\x79\x6e"
  "\x6f\x64\x65\x2d\x72\x65\x73\x75\x6c\x74\x21\x61\x03\x13\x79\x6e"
  "\x6f\x64\x65\x2d\x73\x70\x6c\x69\x63\x65\x2d\x75\x6e\x64\x65\x72"
  "\x62\x03\x0b\x73\x74\x61\x63\x6b\x2d\x70\x6f\x70\x21\x63\x03\x25"
  "\x03\x5e\x08\xc1\x01\x18\x81\x87\x02\xc0\x01\x16\x81\x87\x02\xbf"
  "\x01\x14\x81\x87\x02\xbe\x01\x12\x81\x87\x02\xbd\x01\x10\x81\x83"
  "\x02\xbc\x01\x0e\x81\x87\x02\xbb\x01\x0c\x81\x85\x02\xba\x01\x0a"
  "\x81\x83\x02\xb9\x01\x08\x81\x85\x02\xb8\x01\x06\x84\x06\xb7\x01"
  "\x04\x81\x85\x02\x17\x32\x64\x02\x34\x02\x44\x03\x4a\x04\x4c\x03"
  "\xc7\x01\x0e\x81\x83\x02\xc6\x01\x0c\x81\x85\x02\xc5\x01\x0a\x81"
  "\x85\x02\xc4\x01\x08\x81\x83\x02\xc3\x01\x06\x81\x83\x02\xc2\x01"
  "\x04\x83\x04\x0d\x1c\x4a\x02\x35\x0f\x02\x03\x48\x04\x12\x79\x6e"
  "\x6f\x64\x65\x2d\x72\x65\x64\x75\x63\x65\x73\x2d\x74\x6f\x3f\x44"
  "\x03\xcc\x01\x0c\x81\x87\x02\xcb\x01\x0a\x81\x83\x02\xca\x01\x08"
  "\x81\x83\x02\xc9\x01\x06\x81\x85\x02\xc8\x01\x04\x83\x04\x0b\x18"
  "\x65\x02\x36\x15\x79\x6e\x6f\x64\x65\x2d\x72\x65\x73\x75\x6c\x74"
  "\x3a\x72\x65\x64\x75\x63\x65\x64\x66\x02\x03\x48\x03\x63\x04\x61"
  "\x04\xd0\x01\x0a\x81\x87\x02\xcf\x01\x08\x81\x83\x02\xce\x01\x06"
  "\x81\x85\x02\xcd\x01\x04\x83\x04\x09\x15\x67\x02\x37\x20\x03\x0d"
  "\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x61\x6c\x3f\x03\x0a\x73\x65"
  "\x71\x75\x65\x6e\x63\x65\x3f\x03\x17\x63\x6f\x6e\x64\x69\x74\x69"
  "\x6f\x6e\x61\x6c\x2d\x63\x6f\x6e\x73\x65\x71\x75\x65\x6e\x74\x03"
  "\x18\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x61\x6c\x2d\x61\x6c\x74"
  "\x65\x72\x6e\x61\x74\x69\x76\x65\x03\x11\x73\x65\x71\x75\x65\x6e"
  "\x63\x65\x2d\x61\x63\x74\x69\x6f\x6e\x73\x03\x22\x07\xd8\x01\x12"
  "\x81\x87\x02\xd7\x01\x10\x81\x85\x02\xd6\x01\x0e\x81\x85\x02\xd5"
  "\x01\x0c\x81\x85\x02\xd4\x01\x0a\x81\x85\x02\xd3\x01\x08\x81\x85"
  "\x02\xd2\x01\x06\x81\x85\x02\xd1\x01\x04\x84\x06\x11\x23\x22\x02"
  "\x38\xd9\x01\x04\x82\x02\x03\x68\x02\x39\xda\x01\x04\x83\x04\x03"
  "\x69\x02\x3a\xdb\x01\x04\x83\x04\x03\x6a\x02\x3b\xdc\x01\x04\x83"
  "\x04\x03\x6b\x02\x3c\xdd\x01\x04\x83\x04\x03\x6c\x02\x3d\xde\x01"
  "\x04\x83\x04\x03\x6d\x02\x3e\xdf\x01\x04\x83\x04\x03\x6e\x02\x3f"
  "\x0f\x02\xe0\x01\x04\x84\x06\x03\x6f\x02\x40\x0f\x02\xe1\x01\x04"
  "\x84\x06\x03\x70\x02\x41\x0f\x02\xe2\x01\x04\x84\x06\x03\x71\x02"
  "\x42\x0f\x02\xe3\x01\x04\x84\x06\x03\x72\x02\x43\x1a\x07\x2e\x74"
  "\x61\x67\x2e\x32\x1a\x02\xe7\x01\x0a\x81\x85\x02\xe6\x01\x08\x81"
  "\x83\x02\xe5\x01\x06\x81\x83\x02\xe4\x01\x04\x83\x04\x09\x12\x73"
  "\x02\x44\x20\x28\x2f\x03\xeb\x01\x0a\x81\x83\x02\xea\x01\x08\x81"
  "\x83\x02\xe9\x01\x06\x81\x83\x02\xe8\x01\x04\x83\x04\x09\x12\x74"
  "\x02\x45\x20\x15\x79\x6e\x6f\x64\x65\x2d\x72\x65\x73\x75\x6c\x74"
  "\x3a\x77\x61\x69\x74\x69\x6e\x67\x75\x66\x15\x79\x6e\x6f\x64\x65"
  "\x2d\x72\x65\x73\x75\x6c\x74\x3a\x75\x6e\x6b\x6e\x6f\x77\x6e\x76"
  "\x04\xf0\x01\x0c\x81\x83\x02\xef\x01\x0a\x81\x83\x02\xee\x01\x08"
  "\x81\x83\x02\xed\x01\x06\x81\x83\x02\xec\x01\x04\x83\x04\x0b\x15"
  "\x77\x02\x46\x66\x02\xf3\x01\x08\x81\x85\x02\xf2\x01\x06\x81\x83"
  "\x02\xf1\x01\x04\x83\x04\x07\x0f\x78\x02\x47\x0f\x75\x02\x06\x0d"
  "\x6d\x61\x6b\x65\x2d\x79\x6e\x6f\x64\x65\x2d\x31\x79\x03\x17\x79"
  "\x6e\x6f\x64\x65\x2d\x6e\x65\x65\x64\x73\x2d\x72\x65\x64\x69\x73"
  "\x70\x6c\x61\x79\x21\x7a\x03\xfc\x01\x14\x81\x89\x02\xfb\x01\x12"
  "\x81\x89\x02\xfa\x01\x10\x81\x89\x02\xf9\x01\x0e\x81\x89\x02\xf8"
  "\x01\x0c\x81\x89\x02\xf7\x01\x0a\x81\x87\x02\xf6\x01\x08\x81\x8b"
  "\x02\xf5\x01\x06\x85\x08\xf4\x01\x04\x81\x89\x02\x13\x24\x7b\x02"
  "\x48\x1e\x20\x84\x02\x12\x81\x85\x02\x83\x02\x10\x81\x85\x02\x82"
  "\x02\x0e\x81\x85\x02\x81\x02\x0c\x81\x85\x02\x80\x02\x0a\x81\x85"
  "\x02\xff\x01\x08\x81\x83\x02\xfe\x01\x06\x81\x83\x02\xfd\x01\x04"
  "\x83\x04\x11\x19\x7c\x02\x49\x20\x1e\x8c\x02\x12\x81\x85\x02\x8b"
  "\x02\x10\x81\x85\x02\x8a\x02\x0e\x81\x85\x02\x89\x02\x0c\x81\x85"
  "\x02\x88\x02\x0a\x81\x85\x02\x87\x02\x08\x81\x83\x02\x86\x02\x06"
  "\x81\x83\x02\x85\x02\x04\x83\x04\x11\x19\x7d\x02\x4a\x03\x0f\x79"
  "\x6e\x6f\x64\x65\x2d\x72\x65\x64\x75\x63\x65\x64\x3f\x7e\x03\x0b"
  "\x79\x6e\x6f\x64\x65\x2d\x6e\x65\x78\x74\x7f\x03\x11\x79\x6e\x6f"
  "\x64\x65\x2d\x76\x61\x6c\x75\x65\x2d\x6e\x6f\x64\x65\x80\x01\x04"
  "\x8f\x02\x08\x81\x83\x02\x8e\x02\x06\x81\x83\x02\x8d\x02\x04\x83"
  "\x04\x07\x11\x81\x01\x02\x4b\x03\x0f\x79\x6e\x6f\x64\x65\x2d\x70"
  "\x72\x65\x76\x69\x6f\x75\x73\x82\x01\x03\x7e\x04\x44\x04\x92\x02"
  "\x08\x81\x87\x02\x91\x02\x06\x81\x85\x02\x90\x02\x04\x84\x06\x07"
  "\x12\x83\x01\x02\x4c\x02\x2a\x0f\x76\x02\x05\x29\x04\x09\x66\x6f"
  "\x72\x2d\x65\x61\x63\x68\x84\x01\x03\x7a\x04\x9e\x02\x1a\x81\x85"
  "\x02\x9d\x02\x18\x81\x83\x02\x9c\x02\x16\x83\x04\x9b\x02\x14\x81"
  "\x87\x02\x9a\x02\x12\x81\x85\x02\x99\x02\x10\x81\x87\x02\x98\x02"
  "\x0e\x81\x87\x02\x97\x02\x0c\x81\x85\x02\x96\x02\x0a\x81\x87\x02"
  "\x95\x02\x08\x81\x85\x02\x94\x02\x06\x81\x83\x02\x93\x02\x04\x83"
  "\x04\x19\x2c\x85\x01\x02\x4d\x03\x7e\x03\x7f\x03\x11\x79\x6e\x6f"
  "\x64\x65\x2d\x72\x65\x64\x75\x63\x74\x69\x6f\x6e\x73\x86\x01\x04"
  "\xa2\x02\x0a\x81\x83\x02\xa1\x02\x08\x81\x83\x02\xa0\x02\x06\x81"
  "\x83\x02\x9f\x02\x04\x83\x04\x09\x14\x87\x01\x02\x4e\x03\x7e\x03"
  "\x16\x79\x6e\x6f\x64\x65\x2d\x64\x69\x72\x65\x63\x74\x2d\x63\x68"
  "\x69\x6c\x64\x72\x65\x6e\x88\x01\x03\x7f\x04\xa6\x02\x0a\x81\x85"
  "\x02\xa5\x02\x08\x81\x83\x02\xa4\x02\x06\x81\x83\x02\xa3\x02\x04"
  "\x83\x04\x09\x13\x89\x01\x02\x4f\x20\x1e\x03\x7e\x02\xaf\x02\x14"
  "\x81\x87\x02\xae\x02\x12\x81\x87\x02\xad\x02\x10\x81\x85\x02\xac"
  "\x02\x0e\x81\x85\x02\xab\x02\x0c\x81\x85\x02\xaa\x02\x0a\x81\x85"
  "\x02\xa9\x02\x08\x81\x85\x02\xa8\x02\x06\x81\x83\x02\xa7\x02\x04"
  "\x83\x04\x13\x1e\x1e\x02\x50\x46\xb2\x02\x08\x81\x83\x02\xb1\x02"
  "\x06\x81\x83\x02\xb0\x02\x04\x83\x04\x07\x10\x8a\x01\x02\x51\x02"
  "\x09\x73\x65\x74\x2d\x63\x61\x72\x21\x8b\x01\x20\x03\x7a\x02\xb9"
  "\x02\x10\x81\x83\x02\xb8\x02\x0e\x81\x83\x02\xb7\x02\x0c\x81\x83"
  "\x02\xb6\x02\x0a\x81\x83\x02\xb5\x02\x08\x81\x83\x02\xb4\x02\x06"
  "\x81\x83\x02\xb3\x02\x04\x83\x04\x0f\x1c\x8c\x01\x02\x52\x20\xbb"
  "\x02\x06\x81\x83\x02\xba\x02\x04\x83\x04\x05\x0b\x20\x02\x53\x8b"
  "\x01\x02\xbd\x02\x06\x81\x83\x02\xbc\x02\x04\x83\x04\x05\x0c\x8b"
  "\x01\x02\x54\x0f\x03\x7a\x02\xbf\x02\x06\x81\x85\x02\xbe\x02\x04"
  "\x84\x06\x05\x0d\x8d\x01\x02\x55\x0f\x03\x7a\x02\xc1\x02\x06\x81"
  "\x85\x02\xc0\x02\x04\x84\x06\x05\x0d\x0f\x02\x56\x02\x46\x47\x2a"
  "\x04\x33\x03\x11\x79\x6e\x6f\x64\x65\x2d\x64\x65\x70\x65\x6e\x64"
  "\x65\x6e\x74\x73\x2a\x04\x84\x01\x04\xc6\x02\x0c\x81\x85\x02\xc5"
  "\x02\x0a\x81\x83\x02\xc4\x02\x08\x83\x04\xc3\x02\x06\x81\x83\x02"
  "\xc2\x02\x04\x83\x04\x0b\x1b\x8e\x01\x02\x57\x47\x46\x04\x33\x03"
  "\x86\x01\x04\x84\x01\x04\xca\x02\x0a\x81\x85\x02\xc9\x02\x08\x83"
  "\x04\xc8\x02\x06\x81\x83\x02\xc7\x02\x04\x83\x04\x09\x15\x84\x01"
  "\x02\x58\x51\xcb\x02\x04\x83\x04\x03\x47\x02\x59\x53\x54\x3e\x02"
  "\x03\x39\x02\xd0\x02\x0c\x81\x85\x02\xcf\x02\x0a\x81\x85\x02\xce"
  "\x02\x08\x81\x85\x02\xcd\x02\x06\x81\x83\x02\xcc\x02\x04\x82\x02"
  "\x0b\x16\x8f\x01\x02\x5a\x02\xd1\x02\x04\x84\x06\x03\x90\x01\x02"
  "\x5b\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x1e\x0b"
  "\x03\x03\x70\x70\x03\x06\x6c\x69\x73\x74\x3f\x03\x09\x75\x6e\x73"
  "\x79\x6e\x74\x61\x78\x04\x55\x05\xd8\x02\x10\x81\x83\x02\xd7\x02"
  "\x0e\x81\x83\x02\xd6\x02\x0c\x81\x83\x02\xd5\x02\x0a\x83\x04\xd4"
  "\x02\x08\x81\x83\x02\xd3\x02\x06\x81\x85\x02\xd2\x02\x04\x83\x04"
  "\x0f\x22\x55\x5b\x55\x04\x90\x01\x04\x8f\x01\x04\x47\x04\x84\x01"
  "\x04\x8e\x01\x04\x0f\x04\x8d\x01\x04\x8b\x01\x04\x20\x04\x8c\x01"
  "\x04\x8a\x01\x04\x1e\x04\x89\x01\x04\x87\x01\x04\x85\x01\x04\x83"
  "\x01\x04\x81\x01\x04\x7d\x04\x7c\x04\x7b\x06\x78\x04\x77\x04\x74"
  "\x04\x73\x04\x1a\x11\x70\x72\x69\x6e\x74\x2d\x68\x6f\x6f\x6b\x2d"
  "\x74\x72\x61\x63\x65\x0c\x68\x6f\x6f\x6b\x2d\x72\x65\x63\x6f\x72"
  "\x64\x32\x39\x10\x79\x6e\x6f\x64\x65\x2d\x63\x6f\x6e\x74\x72\x61"
  "\x63\x74\x21\x0e\x79\x6e\x6f\x64\x65\x2d\x65\x78\x70\x61\x6e\x64"
  "\x21\x61\x33\x1d\x79\x6e\x6f\x64\x65\x2d\x64\x6f\x65\x73\x6e\x74"
  "\x2d\x6e\x65\x65\x64\x2d\x72\x65\x64\x69\x73\x70\x6c\x61\x79\x21"
  "\x17\x79\x6e\x6f\x64\x65\x2d\x6e\x65\x65\x64\x73\x2d\x72\x65\x64"
  "\x69\x73\x70\x6c\x61\x79\x3f\x7a\x17\x79\x6e\x6f\x64\x65\x2d\x68"
  "\x69\x64\x64\x65\x6e\x2d\x63\x68\x69\x6c\x64\x72\x65\x6e\x3f\x88"
  "\x01\x2a\x86\x01\x62\x44\x80\x01\x7f\x82\x01\x29\x7e\x15\x79\x6e"
  "\x6f\x64\x65\x2d\x72\x65\x73\x75\x6c\x74\x2d\x73\x70\x65\x63\x69"
  "\x61\x6c\x12\x79\x6e\x6f\x64\x65\x2d\x65\x78\x70\x2d\x73\x70\x65"
  "\x63\x69\x61\x6c\x07\x79\x6e\x6f\x64\x65\x3f\x1a\x1a\x76\x66\x75"
  "\x2f\x28\x08\x75\x6e\x6b\x6e\x6f\x77\x6e\x08\x72\x65\x64\x75\x63"
  "\x65\x64\x08\x77\x61\x69\x74\x69\x6e\x67\x10\x73\x74\x65\x70\x70"
  "\x65\x72\x2d\x70\x72\x6f\x63\x65\x65\x64\x12\x73\x74\x65\x70\x70"
  "\x65\x72\x2d\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x0a\x72\x74\x64"
  "\x3a\x79\x6e\x6f\x64\x65\x90\x01\x3e\x79\x12\x73\x65\x74\x2d\x79"
  "\x6e\x6f\x64\x65\x2d\x72\x65\x73\x75\x6c\x74\x21\x14\x73\x65\x74"
  "\x2d\x79\x6e\x6f\x64\x65\x2d\x63\x68\x69\x6c\x64\x72\x65\x6e\x21"
  "\x10\x73\x65\x74\x2d\x79\x6e\x6f\x64\x65\x2d\x74\x79\x70\x65\x21"
  "\x12\x73\x65\x74\x2d\x79\x6e\x6f\x64\x65\x2d\x70\x61\x72\x65\x6e"
  "\x74\x21\x16\x79\x6e\x6f\x64\x65\x2d\x72\x65\x64\x69\x73\x70\x6c"
  "\x61\x79\x2d\x66\x6c\x61\x67\x73\x0d\x79\x6e\x6f\x64\x65\x2d\x72"
  "\x65\x73\x75\x6c\x74\x0f\x79\x6e\x6f\x64\x65\x2d\x63\x68\x69\x6c"
  "\x64\x72\x65\x6e\x0a\x79\x6e\x6f\x64\x65\x2d\x65\x78\x70\x0b\x79"
  "\x6e\x6f\x64\x65\x2d\x74\x79\x70\x65\x0d\x79\x6e\x6f\x64\x65\x2d"
  "\x70\x61\x72\x65\x6e\x74\x0b\x72\x04\x71\x04\x70\x04\x6f\x04\x6e"
  "\x04\x6d\x04\x6c\x04\x6b\x04\x6a\x04\x69\x04\x0b\x54\x06\x79\x6e"
  "\x6f\x64\x65\x07\x70\x61\x72\x65\x6e\x74\x05\x74\x79\x70\x65\x04"
  "\x65\x78\x70\x09\x63\x68\x69\x6c\x64\x72\x65\x6e\x07\x72\x65\x73"
  "\x75\x6c\x74\x10\x72\x65\x64\x69\x73\x70\x6c\x61\x79\x2d\x66\x6c"
  "\x61\x67\x73\x68\x04\x1b\x5c\x5b\x2e\x5e\x57\x56\x58\x16\x70\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x2d\x72\x65\x74\x75\x72\x6e\x2d\x73"
  "\x74\x65\x70\x15\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x61\x70"
  "\x70\x6c\x79\x2d\x73\x74\x65\x70\x14\x70\x72\x69\x6d\x69\x74\x69"
  "\x76\x65\x2d\x65\x76\x61\x6c\x2d\x73\x74\x65\x70\x37\x35\x4b\x4c"
  "\x36\x3b\x41\x13\x73\x74\x65\x70\x2d\x75\x6e\x74\x69\x6c\x2d\x76"
  "\x69\x73\x69\x62\x6c\x79\x0b\x73\x74\x65\x70\x2d\x75\x6e\x74\x69"
  "\x6c\x46\x07\x73\x74\x65\x70\x2d\x6e\x0a\x73\x74\x65\x70\x2d\x71"
  "\x75\x69\x74\x09\x73\x74\x65\x70\x2d\x72\x75\x6e\x38\x2c\x2b\x0d"
  "\x73\x74\x65\x70\x2d\x70\x72\x6f\x63\x65\x65\x64\x0a\x73\x74\x65"
  "\x70\x2d\x66\x6f\x72\x6d\x12\x73\x74\x65\x70\x70\x65\x72\x2d\x72"
  "\x6f\x6f\x74\x2d\x6e\x6f\x64\x65\x25\x26\x48\x63\x5d\x09\x73\x74"
  "\x65\x70\x70\x65\x72\x3f\x24\x22\x04\x67\x04\x65\x04\x4a\x04\x64"
  "\x06\x60\x04\x5f\x04\x53\x52\x51\x5a\x04\x59\x04\x50\x04\x4f\x04"
  "\x4e\x04\x4d\x04\x49\x06\x45\x04\x43\x04\x42\x04\x40\x04\x3f\x04"
  "\x3d\x04\x3c\x04\x3a\x04\x31\x04\x30\x04\x2d\x04\x27\x04\x24\x04"
  "\x23\x04\x21\x04\x1f\x04\x1d\x04\x1c\x04\x24\x0b\x34\x13\x73\x65"
  "\x74\x2d\x73\x74\x65\x70\x70\x65\x72\x2d\x74\x72\x61\x63\x65\x21"
  "\x13\x73\x65\x74\x2d\x73\x74\x65\x70\x70\x65\x72\x2d\x68\x6f\x6f"
  "\x6b\x73\x21\x16\x73\x65\x74\x2d\x73\x74\x65\x70\x70\x65\x72\x2d"
  "\x66\x69\x6e\x69\x73\x68\x65\x64\x21\x18\x73\x65\x74\x2d\x73\x74"
  "\x65\x70\x70\x65\x72\x2d\x6c\x61\x73\x74\x2d\x65\x76\x65\x6e\x74"
  "\x21\x1a\x73\x65\x74\x2d\x73\x74\x65\x70\x70\x65\x72\x2d\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x21\x12\x73\x65\x74\x2d"
  "\x73\x74\x65\x70\x70\x65\x72\x2d\x6e\x65\x78\x74\x21\x19\x73\x65"
  "\x74\x2d\x73\x74\x65\x70\x70\x65\x72\x2d\x73\x74\x65\x70\x2d\x75"
  "\x6e\x74\x69\x6c\x3f\x21\x17\x73\x65\x74\x2d\x73\x74\x65\x70\x70"
  "\x65\x72\x2d\x73\x74\x65\x70\x2d\x6f\x76\x65\x72\x21\x12\x73\x65"
  "\x74\x2d\x73\x74\x65\x70\x70\x65\x72\x2d\x72\x75\x6e\x3f\x21\x13"
  "\x73\x65\x74\x2d\x73\x74\x65\x70\x70\x65\x72\x2d\x73\x74\x61\x63"
  "\x6b\x21\x0e\x73\x74\x65\x70\x70\x65\x72\x2d\x74\x72\x61\x63\x65"
  "\x0e\x73\x74\x65\x70\x70\x65\x72\x2d\x68\x6f\x6f\x6b\x73\x11\x73"
  "\x74\x65\x70\x70\x65\x72\x2d\x66\x69\x6e\x69\x73\x68\x65\x64\x13"
  "\x73\x74\x65\x70\x70\x65\x72\x2d\x6c\x61\x73\x74\x2d\x65\x76\x65"
  "\x6e\x74\x15\x73\x74\x65\x70\x70\x65\x72\x2d\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x0d\x73\x74\x65\x70\x70\x65\x72\x2d"
  "\x6e\x65\x78\x74\x14\x73\x74\x65\x70\x70\x65\x72\x2d\x73\x74\x65"
  "\x70\x2d\x75\x6e\x74\x69\x6c\x3f\x12\x73\x74\x65\x70\x70\x65\x72"
  "\x2d\x73\x74\x65\x70\x2d\x6f\x76\x65\x72\x0d\x73\x74\x65\x70\x70"
  "\x65\x72\x2d\x72\x75\x6e\x3f\x0e\x73\x74\x65\x70\x70\x65\x72\x2d"
  "\x73\x74\x61\x63\x6b\x15\x19\x04\x18\x04\x17\x04\x16\x04\x15\x04"
  "\x14\x04\x13\x04\x12\x04\x11\x04\x10\x04\x0e\x04\x0d\x04\x0c\x04"
  "\x0b\x04\x0a\x04\x09\x04\x04\x04\x04\x04\x15\x11\x6c\x6f\x63\x61"
  "\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x0c\x72\x74\x64"
  "\x3a\x73\x74\x65\x70\x70\x65\x72\x8f\x01\x08\x73\x74\x65\x70\x70"
  "\x65\x72\x06\x73\x74\x61\x63\x6b\x05\x72\x75\x6e\x3f\x46\x0c\x73"
  "\x74\x65\x70\x2d\x75\x6e\x74\x69\x6c\x3f\x05\x6e\x65\x78\x74\x0d"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x0b\x6c\x61\x73"
  "\x74\x2d\x65\x76\x65\x6e\x74\x09\x66\x69\x6e\x69\x73\x68\x65\x64"
  "\x06\x68\x6f\x6f\x6b\x73\x06\x74\x72\x61\x63\x65\x0a\x04\x04\x06"
  "\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70"
  "\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64"
  "\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x05\x10\x64\x65\x66"
  "\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x04\x23\x72\x65"
  "\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x65\x66\x61\x75\x6c"
  "\x74\x2d\x76\x61\x6c\x75\x65\x2d\x62\x79\x2d\x69\x6e\x64\x65\x78"
  "\x05\x8f\x01\x90\x01\x03\x1e\x3e\x80\x80\x04\x1d\x3c\x81\x81\x02"
  "\x1c\x3a\x81\x81\x02\x1b\x38\x81\x83\x02\x1a\x36\x81\x8b\x02\x19"
  "\x34\x81\x85\x02\x18\x32\x81\x83\x02\x17\x30\x81\x8f\x02\x16\x2e"
  "\x81\x8b\x02\x15\x2c\x81\x87\x02\x14\x2a\x81\x83\x02\x13\x28\x81"
  "\x87\x02\x12\x26\x81\x85\x02\x11\x24\x81\x83\x02\x10\x22\x81\x85"
  "\x02\x0f\x20\x81\x87\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x83\x02"
  "\x0c\x1a\x81\x85\x02\x0b\x18\x81\x85\x02\x0a\x16\x81\x83\x02\x09"
  "\x14\x81\x89\x02\x08\x12\x81\x85\x02\x07\x10\x81\x87\x02\x06\x0e"
  "\x81\x83\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x83\x02\x03\x08\x81"
  "\x85\x02\x02\x06\x81\x87\x02\x01\x04\x81\x83\x02\x3d\x6e";

SCHEME_OBJECT *
ystep_so_data_8e4542242452bf4f (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_ystep_so_data_8e4542242452bf4f [0]))), (sizeof (prog_ystep_so_data_8e4542242452bf4f)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_39]));
}

DECLARE_COMPILED_DATA_NS ("ystep.so", ystep_so_data_8e4542242452bf4f)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("ystep.so", "c6bf6980d8c78ea5")
