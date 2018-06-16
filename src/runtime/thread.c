/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:57-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 6
#define DEBUGGING_LABEL_1_2 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
#define ENVIRONMENT_LABEL_2_3 8
#define DEBUGGING_LABEL_2_2 7
#define EXECUTE_CACHE_2_5 5
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_5]));

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
thread_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  Rvl = (current_block [OBJECT_3_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
thread_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  Rvl = (current_block [OBJECT_4_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define ENVIRONMENT_LABEL_5_3 9
#define DEBUGGING_LABEL_5_2 8
#define FREE_REFERENCE_5_0 7
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto lambda_0;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
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
thread_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  Rvl = (current_block [OBJECT_6_0]);
  goto pop_return;

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
thread_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_5]));

INVOKE_INTERFACE_TARGET_1
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
thread_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto thread_execution_state_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_execution_state_3)
DEFLABEL (thread_execution_state_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
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
thread_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto thread_next_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_next_3)
DEFLABEL (thread_next_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
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
thread_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto thread_continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_continuation_3)
DEFLABEL (thread_continuation_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
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
thread_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto thread_block_eventsP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_block_eventsP_3)
DEFLABEL (thread_block_eventsP_0)
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
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
thread_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto thread_pending_events_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_pending_events_3)
DEFLABEL (thread_pending_events_0)
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
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
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
thread_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto thread_joined_threads_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_joined_threads_3)
DEFLABEL (thread_joined_threads_0)
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
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
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
thread_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto thread_joined_to_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_joined_to_3)
DEFLABEL (thread_joined_to_0)
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
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [8]);
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
thread_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto thread_exit_value_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_exit_value_3)
DEFLABEL (thread_exit_value_0)
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
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [9]);
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
thread_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto thread_root_state_point_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_root_state_point_3)
DEFLABEL (thread_root_state_point_0)
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
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [10]);
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
thread_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto thread_floating_point_environment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_floating_point_environment_3)
DEFLABEL (thread_floating_point_environment_0)
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
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [11]);
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
thread_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto thread_mutexes_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_mutexes_3)
DEFLABEL (thread_mutexes_0)
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
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [12]);
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
thread_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto thread_properties_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_properties_3)
DEFLABEL (thread_properties_0)
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
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [13]);
  Rsp = (& (Rsp [2]));
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
thread_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_thread_execution_stateB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_thread_execution_stateB_3)
DEFLABEL (set_thread_execution_stateB_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
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
thread_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_thread_nextB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_thread_nextB_3)
DEFLABEL (set_thread_nextB_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
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
thread_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_thread_continuationB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_thread_continuationB_3)
DEFLABEL (set_thread_continuationB_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_22_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 8
#define DEBUGGING_LABEL_23_2 7
#define OBJECT_23_2 6
#define OBJECT_23_1 5
#define OBJECT_23_0 4
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto set_thread_block_eventsPB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_thread_block_eventsPB_3)
DEFLABEL (set_thread_block_eventsPB_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_23_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_23_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define ENVIRONMENT_LABEL_24_3 8
#define DEBUGGING_LABEL_24_2 7
#define OBJECT_24_2 6
#define OBJECT_24_1 5
#define OBJECT_24_0 4
#define FREE_REFERENCES_LABEL_24_0 4
#define NUMBER_OF_LINKER_SECTIONS_24_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_24_4);
      goto set_thread_joined_threadsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_thread_joined_threadsB_3)
DEFLABEL (set_thread_joined_threadsB_0)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_24_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [7]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_24_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define ENVIRONMENT_LABEL_25_3 8
#define DEBUGGING_LABEL_25_2 7
#define OBJECT_25_2 6
#define OBJECT_25_1 5
#define OBJECT_25_0 4
#define FREE_REFERENCES_LABEL_25_0 4
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_25_4);
      goto set_thread_joined_toB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_thread_joined_toB_3)
DEFLABEL (set_thread_joined_toB_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [8]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_25_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define ENVIRONMENT_LABEL_26_3 8
#define DEBUGGING_LABEL_26_2 7
#define OBJECT_26_2 6
#define OBJECT_26_1 5
#define OBJECT_26_0 4
#define FREE_REFERENCES_LABEL_26_0 4
#define NUMBER_OF_LINKER_SECTIONS_26_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_26_4);
      goto set_thread_exit_valueB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_thread_exit_valueB_3)
DEFLABEL (set_thread_exit_valueB_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_26_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [9]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_26_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define ENVIRONMENT_LABEL_27_3 8
#define DEBUGGING_LABEL_27_2 7
#define OBJECT_27_2 6
#define OBJECT_27_1 5
#define OBJECT_27_0 4
#define FREE_REFERENCES_LABEL_27_0 4
#define NUMBER_OF_LINKER_SECTIONS_27_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto set_thread_root_state_pointB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_thread_root_state_pointB_3)
DEFLABEL (set_thread_root_state_pointB_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_27_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [10]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_27_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define ENVIRONMENT_LABEL_28_3 8
#define DEBUGGING_LABEL_28_2 7
#define OBJECT_28_2 6
#define OBJECT_28_1 5
#define OBJECT_28_0 4
#define FREE_REFERENCES_LABEL_28_0 4
#define NUMBER_OF_LINKER_SECTIONS_28_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto set_thread_floating_point_environmentB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_thread_floating_point_environmentB_3)
DEFLABEL (set_thread_floating_point_environmentB_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_28_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [11]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_28_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define ENVIRONMENT_LABEL_29_3 8
#define DEBUGGING_LABEL_29_2 7
#define OBJECT_29_2 6
#define OBJECT_29_1 5
#define OBJECT_29_0 4
#define FREE_REFERENCES_LABEL_29_0 4
#define NUMBER_OF_LINKER_SECTIONS_29_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_29_4);
      goto set_thread_mutexesB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_thread_mutexesB_3)
DEFLABEL (set_thread_mutexesB_0)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_29_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [12]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_29_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_6 7
#define LABEL_30_7 9
#define ENVIRONMENT_LABEL_30_3 17
#define DEBUGGING_LABEL_30_2 16
#define OBJECT_30_3 15
#define OBJECT_30_2 14
#define OBJECT_30_1 13
#define OBJECT_30_0 12
#define FREE_REFERENCE_30_0 11
#define FREE_REFERENCES_LABEL_30_0 10
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_30_4);
      goto threadP_4;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_30_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_30_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (threadP_10)
DEFLABEL (threadP_4)
  INTERRUPT_CHECK (26, LABEL_30_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
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
  Rvl = (current_block [OBJECT_30_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_30_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define ENVIRONMENT_LABEL_31_3 14
#define DEBUGGING_LABEL_31_2 13
#define OBJECT_31_1 12
#define OBJECT_31_0 11
#define EXECUTE_CACHE_31_7 7
#define EXECUTE_CACHE_31_6 9
#define FREE_REFERENCES_LABEL_31_0 6
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_31_4);
      goto guarantee_thread_1;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_thread_4)
DEFLABEL (guarantee_thread_1)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_31_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  (Wrd9.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_31_0]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define ENVIRONMENT_LABEL_32_3 11
#define DEBUGGING_LABEL_32_2 10
#define OBJECT_32_3 9
#define OBJECT_32_2 8
#define OBJECT_32_1 7
#define OBJECT_32_0 6
#define FREE_REFERENCES_LABEL_32_0 6
#define NUMBER_OF_LINKER_SECTIONS_32_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_32_4);
      goto thread_deadP_1;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_deadP_5)
DEFLABEL (thread_deadP_1)
  INTERRUPT_CHECK (26, LABEL_32_4);
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
  if ((Wrd5.Obj) == (current_block [OBJECT_32_2]))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_32_3]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_32_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_7 7
#define LABEL_33_9 9
#define LABEL_33_10 11
#define LABEL_33_11 13
#define LABEL_33_12 15
#define LABEL_33_13 17
#define LABEL_33_14 19
#define LABEL_33_15 21
#define LABEL_33_18 23
#define LABEL_33_19 25
#define LABEL_33_17 27
#define LABEL_33_21 29
#define LABEL_33_24 31
#define LABEL_33_25 33
#define LABEL_33_22 35
#define ENVIRONMENT_LABEL_33_3 64
#define DEBUGGING_LABEL_33_2 63
#define OBJECT_33_1 62
#define OBJECT_33_0 61
#define EXECUTE_CACHE_33_26 37
#define EXECUTE_CACHE_33_23 39
#define EXECUTE_CACHE_33_20 41
#define EXECUTE_CACHE_33_16 43
#define EXECUTE_CACHE_33_8 45
#define EXECUTE_CACHE_33_6 47
#define FREE_REFERENCE_33_3 50
#define FREE_REFERENCE_33_2 51
#define FREE_REFERENCE_33_1 52
#define FREE_REFERENCE_33_0 53
#define FREE_ASSIGNMENT_33_5 55
#define FREE_ASSIGNMENT_33_4 56
#define FREE_ASSIGNMENT_33_3 57
#define FREE_ASSIGNMENT_33_2 58
#define FREE_ASSIGNMENT_33_1 59
#define FREE_ASSIGNMENT_33_0 60
#define FREE_REFERENCES_LABEL_33_0 36
#define NUMBER_OF_LINKER_SECTIONS_33_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd80;
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
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_33_4);
      goto initialize_packageB_6;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_33_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_33_9);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_33_10);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_33_11);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_33_12);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_33_13);
      goto label_12;

    case 8:
      current_block = (Rpc - LABEL_33_14);
      goto label_13;

    case 9:
      current_block = (Rpc - LABEL_33_15);
      goto continuation_2;

    case 10:
      current_block = (Rpc - LABEL_33_18);
      goto label_14;

    case 11:
      current_block = (Rpc - LABEL_33_19);
      goto label_15;

    case 12:
      current_block = (Rpc - LABEL_33_17);
      goto continuation_3;

    case 13:
      current_block = (Rpc - LABEL_33_21);
      goto continuation_5;

    case 14:
      current_block = (Rpc - LABEL_33_24);
      goto label_16;

    case 15:
      current_block = (Rpc - LABEL_33_25);
      goto label_17;

    case 16:
      current_block = (Rpc - LABEL_33_22);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_19)
DEFLABEL (initialize_packageB_6)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_7);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_33_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_45;

DEFLABEL (label_44)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_43)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_33_1]));
  (Wrd19.Obj) = (current_block [OBJECT_33_0]);
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_42;

DEFLABEL (label_41)
  ((Wrd18.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_40)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_33_2]));
  (Wrd31.Obj) = (current_block [OBJECT_33_0]);
  (Wrd38.Obj) = ((Wrd30.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_39;

DEFLABEL (label_38)
  ((Wrd30.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_37)
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_33_3]));
  (Wrd43.Obj) = (current_block [OBJECT_33_0]);
  (Wrd50.Obj) = ((Wrd42.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_36;

DEFLABEL (label_35)
  ((Wrd42.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_34)
  (Wrd54.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_33_4]));
  (Wrd55.Obj) = (current_block [OBJECT_33_0]);
  (Wrd62.Obj) = ((Wrd54.pObj) [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd63.uLng) == 50)
    goto label_33;

DEFLABEL (label_32)
  ((Wrd54.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_31)
  (Wrd66.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_33_5]));
  (Wrd67.Obj) = (current_block [OBJECT_33_1]);
  (Wrd74.Obj) = ((Wrd66.pObj) [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd75.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  ((Wrd66.pObj) [0]) = (Wrd67.Obj);

DEFLABEL (label_28)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_15]))));
  (* (--Rsp)) = (Wrd80.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_33_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_27;
  Wrd8 = Wrd12;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_25;
  Wrd14 = Wrd18;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_20]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_33_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_23]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_33_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_26]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_33_21);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_23;
  Wrd5 = Wrd9;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_21;
  Wrd11 = Wrd15;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_20]));

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_25])), (Wrd12.pObj));

DEFLABEL (label_17)
  (Wrd11.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_24])), (Wrd6.pObj));

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_19])), (Wrd15.pObj));

DEFLABEL (label_15)
  (Wrd14.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_18])), (Wrd9.pObj));

DEFLABEL (label_14)
  (Wrd8.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_30)
  if ((Wrd74.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_29;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_33_14])), (Wrd66.pObj), (Wrd67.Obj));

DEFLABEL (label_13)
  goto label_28;

DEFLABEL (label_33)
  if ((Wrd62.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_32;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_33_13])), (Wrd54.pObj), (Wrd55.Obj));

DEFLABEL (label_12)
  goto label_31;

DEFLABEL (label_36)
  if ((Wrd50.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_35;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_33_12])), (Wrd42.pObj), (Wrd43.Obj));

DEFLABEL (label_11)
  goto label_34;

DEFLABEL (label_39)
  if ((Wrd38.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_38;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_33_11])), (Wrd30.pObj), (Wrd31.Obj));

DEFLABEL (label_10)
  goto label_37;

DEFLABEL (label_42)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_41;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_33_10])), (Wrd18.pObj), (Wrd19.Obj));

DEFLABEL (label_9)
  goto label_40;

DEFLABEL (label_45)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_44;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_33_9])), (Wrd6.pObj), Rvl);

DEFLABEL (label_8)
  goto label_43;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_7 7
#define LABEL_34_9 9
#define LABEL_34_8 11
#define LABEL_34_11 13
#define LABEL_34_13 15
#define LABEL_34_12 17
#define LABEL_34_15 19
#define ENVIRONMENT_LABEL_34_3 36
#define DEBUGGING_LABEL_34_2 35
#define OBJECT_34_2 34
#define OBJECT_34_1 33
#define OBJECT_34_0 32
#define EXECUTE_CACHE_34_16 21
#define EXECUTE_CACHE_34_14 23
#define EXECUTE_CACHE_34_10 25
#define EXECUTE_CACHE_34_6 27
#define FREE_REFERENCE_34_1 30
#define FREE_REFERENCE_34_0 31
#define FREE_REFERENCES_LABEL_34_0 20
#define NUMBER_OF_LINKER_SECTIONS_34_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_34_4);
      goto make_thread_7;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_34_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_34_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_34_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_34_11);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_34_13);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_34_12);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_34_15);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_thread_14)
DEFLABEL (make_thread_7)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (* (--Rsp)) = Rvl;
  (Wrd24.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd24.uLng) == 62))
    goto label_22;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd22.Lng))))
    goto label_22;
  (Wrd16.Obj) = (Rsp [1]);
  ((Wrd20.pObj) [4]) = (Wrd16.Obj);

DEFLABEL (label_21)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_20;
  Wrd8 = Wrd12;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_34_8);
  (Wrd5.Obj) = Rvl;
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 62))
    goto label_18;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd23.Lng))))
    goto label_18;
  ((Wrd21.pObj) [10]) = Rvl;

DEFLABEL (label_17)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_16;
  Wrd10 = Wrd14;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_34_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_34_15);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_13])), (Wrd11.pObj));

DEFLABEL (label_11)
  (Wrd10.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.Obj) = (current_block [OBJECT_34_2]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_11]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 3);

DEFLABEL (label_12)
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_9])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.Obj) = (current_block [OBJECT_34_0]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 3);

DEFLABEL (label_10)
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_6 5
#define LABEL_35_5 7
#define LABEL_35_7 9
#define LABEL_35_8 11
#define ENVIRONMENT_LABEL_35_3 16
#define DEBUGGING_LABEL_35_2 15
#define OBJECT_35_0 14
#define FREE_REFERENCE_35_0 13
#define FREE_REFERENCES_LABEL_35_0 12
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_35_4);
      goto without_interrupts_5;

    case 1:
      current_block = (Rpc - LABEL_35_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_35_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_35_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (without_interrupts_9)
DEFLABEL (without_interrupts_5)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_35_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_0]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_35_8);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_6])), (Wrd9.pObj));

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_6 5
#define LABEL_36_5 7
#define ENVIRONMENT_LABEL_36_3 14
#define DEBUGGING_LABEL_36_2 13
#define EXECUTE_CACHE_36_7 9
#define FREE_REFERENCE_36_0 12
#define FREE_REFERENCES_LABEL_36_0 8
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
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
      goto threads_list_1;

    case 1:
      current_block = (Rpc - LABEL_36_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_36_5);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (threads_list_5)
DEFLABEL (threads_list_1)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_8;
  Wrd7 = Wrd11;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_7]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_6])), (Wrd8.pObj));

DEFLABEL (label_3)
  (Wrd7.Obj) = Rvl;
  goto label_7;

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_36_5);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_7 5
#define LABEL_37_5 7
#define ENVIRONMENT_LABEL_37_3 18
#define DEBUGGING_LABEL_37_2 17
#define OBJECT_37_3 16
#define OBJECT_37_2 15
#define OBJECT_37_1 14
#define OBJECT_37_0 13
#define EXECUTE_CACHE_37_8 9
#define EXECUTE_CACHE_37_6 11
#define FREE_REFERENCES_LABEL_37_0 8
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_37_4);
      goto thread_execution_state_2;

    case 1:
      current_block = (Rpc - LABEL_37_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_execution_state_5)
DEFLABEL (thread_execution_state_2)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_37_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_37_1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_37_7);

DEFLABEL (label_8)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37_2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_3]), 2);

DEFLABEL (label_7)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_6;
  Rvl = ((Wrd16.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_5 3
#define LABEL_38_6 5
#define LABEL_38_7 7
#define LABEL_38_4 9
#define LABEL_38_9 11
#define TAG_38_10 4
#define LABEL_38_13 13
#define LABEL_38_14 15
#define TAG_38_15 6
#define LABEL_38_17 17
#define LABEL_38_21 19
#define TAG_38_22 8
#define LABEL_38_19 21
#define TAG_38_20 9
#define LABEL_38_27 23
#define LABEL_38_28 25
#define LABEL_38_29 27
#define LABEL_38_24 29
#define LABEL_38_31 31
#define LABEL_38_25 33
#define TAG_38_26 15
#define LABEL_38_30 35
#define LABEL_38_32 37
#define LABEL_38_34 39
#define LABEL_38_35 41
#define TAG_38_36 19
#define ENVIRONMENT_LABEL_38_3 71
#define DEBUGGING_LABEL_38_2 70
#define OBJECT_38_3 69
#define OBJECT_38_2 68
#define OBJECT_38_1 67
#define OBJECT_38_0 66
#define EXECUTE_CACHE_38_37 43
#define EXECUTE_CACHE_38_33 45
#define EXECUTE_CACHE_38_23 47
#define EXECUTE_CACHE_38_18 49
#define EXECUTE_CACHE_38_16 51
#define EXECUTE_CACHE_38_12 53
#define EXECUTE_CACHE_38_11 55
#define EXECUTE_CACHE_38_8 57
#define FREE_REFERENCE_38_3 60
#define FREE_REFERENCE_38_2 61
#define FREE_REFERENCE_38_1 62
#define FREE_REFERENCE_38_0 63
#define FREE_ASSIGNMENT_38_0 65
#define FREE_REFERENCES_LABEL_38_0 42
#define NUMBER_OF_LINKER_SECTIONS_38_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd27;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd23;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_38_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_38_7);
      goto label_27;

    case 3:
      current_block = (Rpc - LABEL_38_4);
      goto create_thread_25;

    case 4:
      current_block = (Rpc - LABEL_38_9);
      goto lambda_35;

    case 5:
      current_block = (Rpc - LABEL_38_13);
      goto label_28;

    case 6:
      current_block = (Rpc - LABEL_38_14);
      goto lambda_36;

    case 7:
      current_block = (Rpc - LABEL_38_17);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_38_21);
      goto lambda_38;

    case 9:
      current_block = (Rpc - LABEL_38_19);
      goto swapB_37;

    case 10:
      current_block = (Rpc - LABEL_38_27);
      goto label_29;

    case 11:
      current_block = (Rpc - LABEL_38_28);
      goto label_30;

    case 12:
      current_block = (Rpc - LABEL_38_29);
      goto label_31;

    case 13:
      current_block = (Rpc - LABEL_38_24);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_38_31);
      goto label_32;

    case 15:
      current_block = (Rpc - LABEL_38_25);
      goto lambda_39;

    case 16:
      current_block = (Rpc - LABEL_38_30);
      goto continuation_12;

    case 17:
      current_block = (Rpc - LABEL_38_32);
      goto continuation_5;

    case 18:
      current_block = (Rpc - LABEL_38_34);
      goto continuation_13;

    case 19:
      current_block = (Rpc - LABEL_38_35);
      goto lambda_40;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (create_thread_34)
DEFLABEL (create_thread_25)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_42;

DEFLABEL (label_41)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_9])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  (Wrd17.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_11]));

DEFLABEL (label_42)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_41;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_44;
  Wrd24 = Wrd28;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_38_5);
  goto label_41;

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_7])), (Wrd25.pObj));

DEFLABEL (label_27)
  (Wrd24.Obj) = Rvl;
  goto label_43;

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_38_9);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd33.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd31.pObj) = (& (Rhp [-1]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd31.pObj)));
  (Rsp [1]) = (Wrd32.Obj);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_46;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_45)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_14])));
  Rhp += 2;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd17 = Wrd14;
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  ((Wrd17.pObj) [2]) = (Wrd20.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_38_1]);
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_16]));

DEFLABEL (label_46)
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_48;
  Wrd24 = Wrd28;

DEFLABEL (label_47)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd24.Obj);
  goto label_45;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_13])), (Wrd25.pObj));

DEFLABEL (label_28)
  (Wrd24.Obj) = Rvl;
  goto label_47;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_38_14);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_38_17);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_19])));
  Rhp += 1;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd21.pObj) = (& (Rhp [-1]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd21.pObj)));
  (Rsp [1]) = (Wrd22.Obj);
  ((Wrd24.pObj) [2]) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_21])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Wrd12.Obj) = ((Wrd15.pObj) [3]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  (Rsp [2]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_23]));

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_38_21);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_25])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_11]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_38_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_50;
  Wrd8 = Wrd12;

DEFLABEL (label_49)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_3]), 1);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_38_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_38_34);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_37]));

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_31])), (Wrd9.pObj));

DEFLABEL (label_32)
  (Wrd8.Obj) = Rvl;
  goto label_49;

DEFLABEL (swapB_37)
  CLOSURE_HEADER (LABEL_38_19);

DEFLABEL (swapB_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_59;

DEFLABEL (label_58)
  Wrd5 = Wrd9;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_38_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_56;

DEFLABEL (label_55)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_54)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_38_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_53;

DEFLABEL (label_52)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_51)
  Rvl = (current_block [OBJECT_38_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_53)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_52;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_38_29])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_31)
  goto label_51;

DEFLABEL (label_56)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_55;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_38_28])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_30)
  goto label_54;

DEFLABEL (label_59)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_58;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_38_27])), (Wrd6.pObj));

DEFLABEL (label_29)
  (Wrd5.Obj) = Rvl;
  goto label_57;

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_38_25);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_33]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_38_32);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_36);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_35])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);
  ((Wrd13.pObj) [0]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  (Rsp [0]) = (Wrd14.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_38_1]);
  (Rsp [1]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_16]));

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_38_35);

DEFLABEL (lambda_8)
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

#define LABEL_39_4 3
#define LABEL_39_5 5
#define ENVIRONMENT_LABEL_39_3 9
#define DEBUGGING_LABEL_39_2 8
#define FREE_REFERENCE_39_0 7
#define FREE_REFERENCES_LABEL_39_0 6
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_39_4);
      goto create_thread_continuation_0;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (create_thread_continuation_4)
DEFLABEL (create_thread_continuation_0)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_7 5
#define LABEL_40_5 7
#define LABEL_40_8 9
#define LABEL_40_12 11
#define TAG_40_13 4
#define LABEL_40_10 13
#define TAG_40_11 5
#define LABEL_40_15 15
#define LABEL_40_16 17
#define LABEL_40_17 19
#define ENVIRONMENT_LABEL_40_3 35
#define DEBUGGING_LABEL_40_2 34
#define OBJECT_40_1 33
#define OBJECT_40_0 32
#define EXECUTE_CACHE_40_14 21
#define EXECUTE_CACHE_40_9 23
#define EXECUTE_CACHE_40_6 25
#define FREE_REFERENCE_40_1 28
#define FREE_REFERENCE_40_0 29
#define FREE_ASSIGNMENT_40_0 31
#define FREE_REFERENCES_LABEL_40_0 20
#define NUMBER_OF_LINKER_SECTIONS_40_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd26;
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
      goto with_create_thread_continuation_11;

    case 1:
      current_block = (Rpc - LABEL_40_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_40_8);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_40_12);
      goto lambda_20;

    case 5:
      current_block = (Rpc - LABEL_40_10);
      goto swapB_19;

    case 6:
      current_block = (Rpc - LABEL_40_15);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_40_16);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_40_17);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_create_thread_continuation_18)
DEFLABEL (with_create_thread_continuation_11)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;

DEFLABEL (label_21)
  (Wrd10.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-1]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_10])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  ((Wrd22.pObj) [2]) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_12])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Rsp [2]) = (Wrd12.Obj);
  (Rsp [3]) = (Wrd23.Obj);
  (Rsp [1]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_14]));

DEFLABEL (label_22)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_0]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_24;
  Wrd27 = Wrd31;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_40_0]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_7);
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_8])), (Wrd28.pObj));

DEFLABEL (label_13)
  (Wrd27.Obj) = Rvl;
  goto label_23;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_40_12);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (swapB_19)
  CLOSURE_HEADER (LABEL_40_10);

DEFLABEL (swapB_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_33;

DEFLABEL (label_32)
  Wrd5 = Wrd9;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_40_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_28)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_40_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_25)
  Rvl = (current_block [OBJECT_40_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_27)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_26;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_40_17])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_16)
  goto label_25;

DEFLABEL (label_30)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_29;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_40_16])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_15)
  goto label_28;

DEFLABEL (label_33)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_32;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_40_15])), (Wrd6.pObj));

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_8 7
#define LABEL_41_6 9
#define LABEL_41_10 11
#define TAG_41_11 4
#define LABEL_41_14 13
#define LABEL_41_13 15
#define LABEL_41_16 17
#define TAG_41_17 7
#define ENVIRONMENT_LABEL_41_3 37
#define DEBUGGING_LABEL_41_2 36
#define OBJECT_41_1 35
#define OBJECT_41_0 34
#define EXECUTE_CACHE_41_19 19
#define EXECUTE_CACHE_41_18 21
#define EXECUTE_CACHE_41_15 23
#define EXECUTE_CACHE_41_12 25
#define EXECUTE_CACHE_41_9 27
#define EXECUTE_CACHE_41_7 29
#define FREE_REFERENCE_41_1 32
#define FREE_REFERENCE_41_0 33
#define FREE_REFERENCES_LABEL_41_0 18
#define NUMBER_OF_LINKER_SECTIONS_41_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_41_4);
      goto current_thread_8;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_41_8);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_41_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_41_10);
      goto lambda_14;

    case 5:
      current_block = (Rpc - LABEL_41_14);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_41_13);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_41_16);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (current_thread_13)
DEFLABEL (current_thread_8)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_20;
  Wrd5 = Wrd9;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_6);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;

DEFLABEL (label_17)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (label_18)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_10])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  ((Wrd12.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_41_8);
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41_5])), (Wrd6.pObj));

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_19;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_41_10);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_41_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_22;
  Wrd11 = Wrd15;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_41_13);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_16])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [2]);
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_18]));

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41_14])), (Wrd12.pObj));

DEFLABEL (label_11)
  (Wrd11.Obj) = Rvl;
  goto label_21;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_41_16);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_19]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define ENVIRONMENT_LABEL_42_3 13
#define DEBUGGING_LABEL_42_2 12
#define OBJECT_42_0 11
#define EXECUTE_CACHE_42_6 7
#define FREE_REFERENCE_42_0 10
#define FREE_REFERENCES_LABEL_42_0 6
#define NUMBER_OF_LINKER_SECTIONS_42_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_42_4);
      goto call_with_current_thread_1;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_with_current_thread_5)
DEFLABEL (call_with_current_thread_1)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_6;
  (Wrd13.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_6)
  (Wrd16.Obj) = (Rsp [1]);
  if ((Wrd16.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = (current_block [OBJECT_42_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_7)
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_6 5
#define LABEL_43_5 7
#define ENVIRONMENT_LABEL_43_3 16
#define DEBUGGING_LABEL_43_2 15
#define EXECUTE_CACHE_43_8 9
#define EXECUTE_CACHE_43_7 11
#define FREE_REFERENCE_43_0 14
#define FREE_REFERENCES_LABEL_43_0 8
#define NUMBER_OF_LINKER_SECTIONS_43_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_43_4);
      goto console_thread_1;

    case 1:
      current_block = (Rpc - LABEL_43_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (console_thread_5)
DEFLABEL (console_thread_1)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_43_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_7;
  Wrd8 = Wrd12;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_5);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_43_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define ENVIRONMENT_LABEL_44_3 12
#define DEBUGGING_LABEL_44_2 11
#define OBJECT_44_1 10
#define OBJECT_44_0 9
#define EXECUTE_CACHE_44_6 7
#define FREE_REFERENCES_LABEL_44_0 6
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_44_4);
      goto other_running_threadsP_1;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (other_running_threadsP_4)
DEFLABEL (other_running_threadsP_1)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd5.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (* (--Rsp)) = Rvl;
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd16.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_6)
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd14.Lng))))
    goto label_5;
  Rvl = ((Wrd12.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_7 5
#define LABEL_45_5 7
#define LABEL_45_10 9
#define LABEL_45_11 11
#define LABEL_45_9 13
#define LABEL_45_12 15
#define LABEL_45_13 17
#define LABEL_45_14 19
#define ENVIRONMENT_LABEL_45_3 35
#define DEBUGGING_LABEL_45_2 34
#define OBJECT_45_6 33
#define OBJECT_45_5 32
#define OBJECT_45_4 31
#define OBJECT_45_3 30
#define OBJECT_45_2 29
#define OBJECT_45_1 28
#define OBJECT_45_0 27
#define EXECUTE_CACHE_45_8 21
#define EXECUTE_CACHE_45_6 23
#define FREE_REFERENCE_45_0 26
#define FREE_REFERENCES_LABEL_45_0 20
#define NUMBER_OF_LINKER_SECTIONS_45_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd32;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_45_4);
      goto thread_continuation_9;

    case 1:
      current_block = (Rpc - LABEL_45_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_45_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_45_10);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_45_11);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_45_9);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_45_12);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_45_13);
      goto label_13;

    case 8:
      current_block = (Rpc - LABEL_45_14);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_continuation_15)
DEFLABEL (thread_continuation_9)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_45_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_24;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_45_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_45_1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_45_7);

DEFLABEL (label_24)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_23;
  Wrd10 = Wrd14;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_45_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_21;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_21;
  (Wrd8.Obj) = ((Wrd14.pObj) [2]);

DEFLABEL (label_20)
  if ((Wrd8.Obj) == (current_block [OBJECT_45_5]))
    goto label_17;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_16)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_14]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 1);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_45_14);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_19;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd40.Lng))))
    goto label_19;
  (Wrd32.Obj) = ((Wrd38.pObj) [4]);

DEFLABEL (label_18)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  goto label_16;

DEFLABEL (label_19)
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.Obj) = (current_block [OBJECT_45_6]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_13]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_4]), 2);

DEFLABEL (label_13)
  (Wrd32.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_45_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_4]), 2);

DEFLABEL (label_12)
  (Wrd8.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45_10])), (Wrd11.pObj));

DEFLABEL (label_11)
  (Wrd10.Obj) = Rvl;
  goto label_22;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_45_11);
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define ENVIRONMENT_LABEL_46_3 12
#define DEBUGGING_LABEL_46_2 11
#define EXECUTE_CACHE_46_7 7
#define EXECUTE_CACHE_46_6 9
#define FREE_REFERENCES_LABEL_46_0 6
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_46_4);
      goto thread_running_1;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_running_4)
DEFLABEL (thread_running_1)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_5);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_5 3
#define LABEL_47_4 5
#define LABEL_47_6 7
#define LABEL_47_7 9
#define LABEL_47_8 11
#define LABEL_47_9 13
#define ENVIRONMENT_LABEL_47_3 25
#define DEBUGGING_LABEL_47_2 24
#define OBJECT_47_4 23
#define OBJECT_47_3 22
#define OBJECT_47_2 21
#define OBJECT_47_1 20
#define OBJECT_47_0 19
#define FREE_REFERENCE_47_0 15
#define FREE_ASSIGNMENT_47_1 17
#define FREE_ASSIGNMENT_47_0 18
#define FREE_REFERENCES_LABEL_47_0 14
#define NUMBER_OF_LINKER_SECTIONS_47_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd60;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd68;
  machine_word Wrd67;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_47_4);
      goto Z__thread_running_3;

    case 2:
      current_block = (Rpc - LABEL_47_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_47_7);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_47_8);
      goto label_7;

    case 5:
      current_block = (Rpc - LABEL_47_9);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__thread_running_10)
DEFLABEL (Z__thread_running_3)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd67.Obj) = (Rsp [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 62))
    goto label_24;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd66.Lng))))
    goto label_24;
  (Wrd60.Obj) = (current_block [OBJECT_47_0]);
  ((Wrd64.pObj) [2]) = (Wrd60.Obj);

DEFLABEL (label_23)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_22;
  Wrd8 = Wrd12;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd8.Obj);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd16.Obj) = (current_block [OBJECT_47_3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd18.Obj);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd44.uLng) == 62)
    goto label_12;

DEFLABEL (label_11)
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_2]), 3);

DEFLABEL (label_12)
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd42.Lng))))
    goto label_11;
  ((Wrd40.pObj) [3]) = (Wrd18.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_16)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_47_1]));
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd28.Obj) = ((Wrd20.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  ((Wrd20.pObj) [0]) = (Wrd21.Obj);

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_47_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  if ((Wrd28.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_47_9])), (Wrd20.pObj), (Wrd21.Obj));

DEFLABEL (label_6)
  goto label_13;

DEFLABEL (label_17)
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_47_0]));
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_20;

DEFLABEL (label_19)
  ((Wrd45.pObj) [0]) = (Wrd46.Obj);

DEFLABEL (label_18)
  Rsp = (& (Rsp [2]));
  goto label_16;

DEFLABEL (label_20)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_19;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_47_8])), (Wrd45.pObj), (Wrd46.Obj));

DEFLABEL (label_7)
  goto label_18;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47_7])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd69.Obj) = (Rsp [0]);
  (Wrd70.Obj) = (current_block [OBJECT_47_1]);
  (Wrd71.Obj) = (current_block [OBJECT_47_0]);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_6]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_2]), 3);

DEFLABEL (label_8)
  goto label_23;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_47_5);
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_6 7
#define LABEL_48_7 9
#define LABEL_48_8 11
#define ENVIRONMENT_LABEL_48_3 22
#define DEBUGGING_LABEL_48_2 21
#define OBJECT_48_3 20
#define OBJECT_48_2 19
#define OBJECT_48_1 18
#define OBJECT_48_0 17
#define EXECUTE_CACHE_48_9 13
#define FREE_ASSIGNMENT_48_0 16
#define FREE_REFERENCES_LABEL_48_0 12
#define NUMBER_OF_LINKER_SECTIONS_48_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd54;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd62;
  machine_word Wrd61;
  INVOKE_INTERFACE_DECLS
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
      goto thread_not_running_5;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_48_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_48_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_48_8);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_not_running_12)
DEFLABEL (thread_not_running_5)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 62))
    goto label_21;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd60.Lng))))
    goto label_21;
  (Wrd54.Obj) = (Rsp [1]);
  ((Wrd58.pObj) [2]) = (Wrd54.Obj);

DEFLABEL (label_20)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_19;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_18)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 62))
    goto label_17;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd43.Lng))))
    goto label_17;
  ((Wrd41.pObj) [3]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_16)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_48_0]));
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd29.Obj) = ((Wrd21.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  ((Wrd21.pObj) [0]) = (Wrd22.Obj);

DEFLABEL (label_13)
  Rsp = (& (Rsp [1]));
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_9]));

DEFLABEL (label_15)
  if ((Wrd29.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_48_8])), (Wrd21.pObj), (Wrd22.Obj));

DEFLABEL (label_8)
  goto label_13;

DEFLABEL (label_17)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.Obj) = (current_block [OBJECT_48_2]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 3);

DEFLABEL (label_9)
  goto label_16;

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_48_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_3]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd63.Obj) = (Rsp [0]);
  (Wrd64.Obj) = (current_block [OBJECT_48_0]);
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 3);

DEFLABEL (label_10)
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_6 7
#define LABEL_49_8 9
#define ENVIRONMENT_LABEL_49_3 21
#define DEBUGGING_LABEL_49_2 20
#define OBJECT_49_0 19
#define EXECUTE_CACHE_49_9 11
#define EXECUTE_CACHE_49_7 13
#define FREE_REFERENCE_49_0 16
#define FREE_ASSIGNMENT_49_0 18
#define FREE_REFERENCES_LABEL_49_0 10
#define NUMBER_OF_LINKER_SECTIONS_49_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_49_4);
      goto run_first_thread_0;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_49_6);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_49_8);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (run_first_thread_6)
DEFLABEL (run_first_thread_0)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_14;
  Wrd5 = Wrd9;

DEFLABEL (label_13)
  (Wrd11.Obj) = (current_block [OBJECT_49_0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_8;
  Wrd12 = Wrd16;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49_8])), (Wrd13.pObj));

DEFLABEL (label_3)
  (Wrd12.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_9)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_49_0]));
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_12;

DEFLABEL (label_11)
  ((Wrd18.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_10)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_7]));

DEFLABEL (label_12)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_11;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_49_6])), (Wrd18.pObj), (Wrd11.Obj));

DEFLABEL (label_4)
  goto label_10;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_6 7
#define LABEL_50_7 9
#define LABEL_50_8 11
#define TAG_50_9 4
#define LABEL_50_11 13
#define ENVIRONMENT_LABEL_50_3 27
#define DEBUGGING_LABEL_50_2 26
#define OBJECT_50_4 25
#define OBJECT_50_3 24
#define OBJECT_50_2 23
#define OBJECT_50_1 22
#define OBJECT_50_0 21
#define EXECUTE_CACHE_50_13 15
#define EXECUTE_CACHE_50_12 17
#define EXECUTE_CACHE_50_10 19
#define FREE_REFERENCES_LABEL_50_0 14
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_50_4);
      goto run_thread_6;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_50_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_50_7);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_50_8);
      goto lambda_13;

    case 5:
      current_block = (Rpc - LABEL_50_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (run_thread_12)
DEFLABEL (run_thread_6)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd13.Lng))))
    goto label_19;
  (Wrd7.Obj) = ((Wrd11.pObj) [11]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_18)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_17;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_17;
  (Wrd23.Obj) = ((Wrd27.pObj) [4]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_16)
  (Wrd54.Obj) = (Rsp [2]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 62))
    goto label_15;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd53.Lng))))
    goto label_15;
  ((Wrd51.pObj) [4]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_14)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd39.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_50_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_50_8])));
  Rhp += 2;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd39.pObj)));
  Wrd42 = Wrd39;
  (Wrd43.Obj) = (Rsp [2]);
  ((Wrd42.pObj) [2]) = (Wrd43.Obj);
  (Wrd41.Obj) = (Rsp [1]);
  ((Wrd42.pObj) [3]) = (Wrd41.Obj);
  (Rsp [2]) = (Wrd38.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_50_4]);
  (Rsp [1]) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_10]));

DEFLABEL (label_15)
  (Wrd56.Obj) = (Rsp [2]);
  (Wrd57.Obj) = (current_block [OBJECT_50_2]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_3]), 3);

DEFLABEL (label_10)
  goto label_14;

DEFLABEL (label_17)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_50_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_50_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_50_8);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_50_11);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_13]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_5 3
#define LABEL_51_6 5
#define LABEL_51_4 7
#define LABEL_51_7 9
#define ENVIRONMENT_LABEL_51_3 19
#define DEBUGGING_LABEL_51_2 18
#define OBJECT_51_2 17
#define OBJECT_51_1 16
#define OBJECT_51_0 15
#define EXECUTE_CACHE_51_9 11
#define EXECUTE_CACHE_51_8 13
#define FREE_REFERENCES_LABEL_51_0 10
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd7;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_51_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_51_4);
      goto Z__resume_current_thread_3;

    case 3:
      current_block = (Rpc - LABEL_51_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__resume_current_thread_8)
DEFLABEL (Z__resume_current_thread_3)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_12;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd19.Lng))))
    goto label_12;
  (Wrd7.Obj) = ((Wrd17.pObj) [5]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_9]));

DEFLABEL (label_10)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_51_5);
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_11;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd36.Lng))))
    goto label_11;
  ((Wrd34.pObj) [5]) = ((SCHEME_OBJECT) 0);
  goto label_9;

DEFLABEL (label_11)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.Obj) = (current_block [OBJECT_51_0]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_6]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 3);

DEFLABEL (label_6)
  goto label_9;

DEFLABEL (label_12)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_51_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_6 5
#define LABEL_52_5 7
#define LABEL_52_7 9
#define LABEL_52_9 11
#define ENVIRONMENT_LABEL_52_3 19
#define DEBUGGING_LABEL_52_2 18
#define OBJECT_52_0 17
#define EXECUTE_CACHE_52_8 13
#define FREE_REFERENCE_52_0 16
#define FREE_REFERENCES_LABEL_52_0 12
#define NUMBER_OF_LINKER_SECTIONS_52_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_52_4);
      goto suspend_current_thread_5;

    case 1:
      current_block = (Rpc - LABEL_52_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_52_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_52_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_52_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (suspend_current_thread_9)
DEFLABEL (suspend_current_thread_5)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_52_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_52_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_0]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_52_9);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_6])), (Wrd9.pObj));

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define LABEL_53_7 7
#define LABEL_53_8 9
#define LABEL_53_9 11
#define LABEL_53_11 13
#define LABEL_53_13 15
#define LABEL_53_14 17
#define TAG_53_15 7
#define LABEL_53_18 19
#define LABEL_53_19 21
#define LABEL_53_21 23
#define ENVIRONMENT_LABEL_53_3 45
#define DEBUGGING_LABEL_53_2 44
#define OBJECT_53_4 43
#define OBJECT_53_3 42
#define OBJECT_53_2 41
#define OBJECT_53_1 40
#define OBJECT_53_0 39
#define EXECUTE_CACHE_53_22 25
#define EXECUTE_CACHE_53_20 27
#define EXECUTE_CACHE_53_17 29
#define EXECUTE_CACHE_53_16 31
#define EXECUTE_CACHE_53_12 33
#define EXECUTE_CACHE_53_10 35
#define EXECUTE_CACHE_53_6 37
#define FREE_REFERENCES_LABEL_53_0 24
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd8;
  machine_word Wrd23;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_53_4);
      goto Z__suspend_current_thread_12;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto lambda_11;

    case 2:
      current_block = (Rpc - LABEL_53_7);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_53_8);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_53_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_53_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_53_13);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_53_14);
      goto lambda_22;

    case 8:
      current_block = (Rpc - LABEL_53_18);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_53_19);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_53_21);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__suspend_current_thread_20)
DEFLABEL (Z__suspend_current_thread_12)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_6]));

DEFLABEL (lambda_21)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_53_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_29;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_29;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_28)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_27;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd32.Lng))))
    goto label_27;
  ((Wrd30.pObj) [5]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_26)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_53_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_53_11);
  (* (--Rsp)) = Rvl;
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_25;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd22.Lng))))
    goto label_25;
  (Wrd16.Obj) = (Rsp [1]);
  ((Wrd20.pObj) [5]) = (Wrd16.Obj);

DEFLABEL (label_24)
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_23;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_17]));

DEFLABEL (label_23)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_53_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_53_14])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_16]));

DEFLABEL (label_25)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (current_block [OBJECT_53_0]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_13]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_2]), 3);

DEFLABEL (label_16)
  goto label_24;

DEFLABEL (label_27)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (current_block [OBJECT_53_0]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_8]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_2]), 3);

DEFLABEL (label_15)
  goto label_26;

DEFLABEL (label_29)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_53_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_53_14);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 62))
    goto label_33;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd23.Lng))))
    goto label_33;
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd21.pObj) [4]) = (Wrd15.Obj);

DEFLABEL (label_32)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_20]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_53_19);
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 62))
    goto label_31;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd21.Lng))))
    goto label_31;
  ((Wrd19.pObj) [5]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_30)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53_4]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_22]));

DEFLABEL (label_31)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [2]);
  (Wrd29.Obj) = (current_block [OBJECT_53_0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_21]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_2]), 3);

DEFLABEL (label_18)
  goto label_30;

DEFLABEL (label_33)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [2]);
  (Wrd31.Obj) = (current_block [OBJECT_53_3]);
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_18]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_2]), 3);

DEFLABEL (label_17)
  goto label_32;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_6 5
#define LABEL_54_5 7
#define LABEL_54_7 9
#define LABEL_54_8 11
#define LABEL_54_10 13
#define LABEL_54_11 15
#define TAG_54_12 6
#define LABEL_54_14 17
#define LABEL_54_15 19
#define ENVIRONMENT_LABEL_54_3 36
#define DEBUGGING_LABEL_54_2 35
#define OBJECT_54_3 34
#define OBJECT_54_2 33
#define OBJECT_54_1 32
#define OBJECT_54_0 31
#define EXECUTE_CACHE_54_17 21
#define EXECUTE_CACHE_54_16 23
#define EXECUTE_CACHE_54_13 25
#define EXECUTE_CACHE_54_9 27
#define FREE_REFERENCE_54_0 30
#define FREE_REFERENCES_LABEL_54_0 20
#define NUMBER_OF_LINKER_SECTIONS_54_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd15;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_54_4);
      goto stop_current_thread_9;

    case 1:
      current_block = (Rpc - LABEL_54_6);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_54_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_54_7);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_54_8);
      goto lambda_4;

    case 5:
      current_block = (Rpc - LABEL_54_10);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_54_11);
      goto lambda_16;

    case 7:
      current_block = (Rpc - LABEL_54_14);
      goto label_12;

    case 8:
      current_block = (Rpc - LABEL_54_15);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stop_current_thread_14)
DEFLABEL (stop_current_thread_9)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_18;
  Wrd8 = Wrd12;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_54_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_54_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_0]), 1);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_54_10);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_6])), (Wrd9.pObj));

DEFLABEL (label_11)
  (Wrd8.Obj) = Rvl;
  goto label_17;

DEFLABEL (lambda_15)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_54_8);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_11])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_13]));

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_54_11);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 62))
    goto label_20;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd23.Lng))))
    goto label_20;
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd21.pObj) [4]) = (Wrd15.Obj);

DEFLABEL (label_19)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_54_15);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_3]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_17]));

DEFLABEL (label_20)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [2]);
  (Wrd31.Obj) = (current_block [OBJECT_54_1]);
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_14]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_2]), 3);

DEFLABEL (label_12)
  goto label_19;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_7 5
#define LABEL_55_8 7
#define LABEL_55_5 9
#define LABEL_55_12 11
#define LABEL_55_13 13
#define LABEL_55_14 15
#define LABEL_55_15 17
#define LABEL_55_11 19
#define LABEL_55_16 21
#define LABEL_55_20 23
#define LABEL_55_22 25
#define LABEL_55_17 27
#define LABEL_55_24 29
#define ENVIRONMENT_LABEL_55_3 58
#define DEBUGGING_LABEL_55_2 57
#define OBJECT_55_8 56
#define OBJECT_55_7 55
#define OBJECT_55_6 54
#define OBJECT_55_5 53
#define OBJECT_55_4 52
#define OBJECT_55_3 51
#define OBJECT_55_2 50
#define OBJECT_55_1 49
#define OBJECT_55_0 48
#define EXECUTE_CACHE_55_23 31
#define EXECUTE_CACHE_55_21 33
#define EXECUTE_CACHE_55_19 35
#define EXECUTE_CACHE_55_18 37
#define EXECUTE_CACHE_55_10 39
#define EXECUTE_CACHE_55_9 41
#define EXECUTE_CACHE_55_6 43
#define FREE_REFERENCE_55_1 46
#define FREE_REFERENCE_55_0 47
#define FREE_REFERENCES_LABEL_55_0 30
#define NUMBER_OF_LINKER_SECTIONS_55_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd36;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd53;
  machine_word Wrd32;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd23;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
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
      goto restart_thread_16;

    case 1:
      current_block = (Rpc - LABEL_55_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_55_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_55_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_55_12);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_55_13);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_55_14);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_55_15);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_55_11);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_55_16);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_55_20);
      goto label_21;

    case 11:
      current_block = (Rpc - LABEL_55_22);
      goto label_20;

    case 12:
      current_block = (Rpc - LABEL_55_17);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_55_24);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (restart_thread_23)
DEFLABEL (restart_thread_16)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_55_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_37;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_55_0]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_55_1]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_55_7);

DEFLABEL (label_37)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  if (! ((Wrd10.Obj) == (current_block [OBJECT_55_2])))
    goto label_36;
  (Wrd23.Obj) = (current_block [OBJECT_55_3]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_55_8);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_35)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_34;
  Wrd17 = Wrd21;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_4]), 1);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_55_11);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_32;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_32;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_31)
  if ((Wrd5.Obj) == (current_block [OBJECT_55_7]))
    goto label_28;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_15]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_1]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_30;
  Wrd25 = Wrd29;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd31.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_23]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_55_15);

DEFLABEL (label_28)
  (Wrd32.Obj) = (Rsp [1]);
  if ((Wrd32.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_14]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd46.Obj) = (Rsp [3]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_27;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd45.Lng))))
    goto label_27;
  (Wrd39.Obj) = ((Wrd43.pObj) [6]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_55_14);

DEFLABEL (label_25)
  (Wrd53.Obj) = (Rsp [4]);
  if ((Wrd53.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_13]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd59.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd59.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_19]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_55_13);

DEFLABEL (label_24)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_17]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd63.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd63.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_18]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_55_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_4]), 1);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_55_24);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd48.Obj) = (Rsp [3]);
  (Wrd49.Obj) = (current_block [OBJECT_55_8]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_20]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_6]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55_22])), (Wrd26.pObj));

DEFLABEL (label_20)
  (Wrd25.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_55_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_6]), 2);

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55_12])), (Wrd18.pObj));

DEFLABEL (label_18)
  (Wrd17.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd10.Obj);
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_5 5
#define ENVIRONMENT_LABEL_56_3 14
#define DEBUGGING_LABEL_56_2 13
#define OBJECT_56_3 12
#define OBJECT_56_2 11
#define OBJECT_56_1 10
#define OBJECT_56_0 9
#define EXECUTE_CACHE_56_6 7
#define FREE_REFERENCES_LABEL_56_0 6
#define NUMBER_OF_LINKER_SECTIONS_56_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd9;
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
      goto disallow_preempt_current_thread_1;

    case 1:
      current_block = (Rpc - LABEL_56_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (disallow_preempt_current_thread_4)
DEFLABEL (disallow_preempt_current_thread_1)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd5.Obj) = (current_block [OBJECT_56_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_56_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_56_5);
  (* (--Rsp)) = Rvl;
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_3]), 3);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  (Wrd8.Obj) = (current_block [OBJECT_56_0]);
  ((Wrd13.pObj) [2]) = (Wrd8.Obj);
  Rvl = (current_block [OBJECT_56_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define ENVIRONMENT_LABEL_57_3 14
#define DEBUGGING_LABEL_57_2 13
#define OBJECT_57_3 12
#define OBJECT_57_2 11
#define OBJECT_57_1 10
#define OBJECT_57_0 9
#define EXECUTE_CACHE_57_6 7
#define FREE_REFERENCES_LABEL_57_0 6
#define NUMBER_OF_LINKER_SECTIONS_57_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd9;
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
      goto allow_preempt_current_thread_1;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (allow_preempt_current_thread_4)
DEFLABEL (allow_preempt_current_thread_1)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd5.Obj) = (current_block [OBJECT_57_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_57_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_57_5);
  (* (--Rsp)) = Rvl;
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_3]), 3);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  (Wrd8.Obj) = (current_block [OBJECT_57_0]);
  ((Wrd13.pObj) [2]) = (Wrd8.Obj);
  Rvl = (current_block [OBJECT_57_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_6 5
#define LABEL_58_5 7
#define LABEL_58_8 9
#define LABEL_58_10 11
#define LABEL_58_9 13
#define LABEL_58_11 15
#define LABEL_58_13 17
#define LABEL_58_15 19
#define LABEL_58_17 21
#define LABEL_58_18 23
#define LABEL_58_19 25
#define ENVIRONMENT_LABEL_58_3 55
#define DEBUGGING_LABEL_58_2 54
#define OBJECT_58_5 53
#define OBJECT_58_4 52
#define OBJECT_58_3 51
#define OBJECT_58_2 50
#define OBJECT_58_1 49
#define OBJECT_58_0 48
#define EXECUTE_CACHE_58_23 27
#define EXECUTE_CACHE_58_22 29
#define EXECUTE_CACHE_58_21 31
#define EXECUTE_CACHE_58_20 33
#define EXECUTE_CACHE_58_16 35
#define EXECUTE_CACHE_58_14 37
#define EXECUTE_CACHE_58_12 39
#define EXECUTE_CACHE_58_7 41
#define FREE_REFERENCE_58_1 44
#define FREE_REFERENCE_58_0 45
#define FREE_ASSIGNMENT_58_0 47
#define FREE_REFERENCES_LABEL_58_0 26
#define NUMBER_OF_LINKER_SECTIONS_58_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd15;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd10;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_58_4);
      goto thread_timer_interrupt_handler_10;

    case 1:
      current_block = (Rpc - LABEL_58_6);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_58_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_58_8);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_58_10);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_58_9);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_58_11);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_58_13);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_58_15);
      goto label_15;

    case 9:
      current_block = (Rpc - LABEL_58_17);
      goto label_17;

    case 10:
      current_block = (Rpc - LABEL_58_18);
      goto label_16;

    case 11:
      current_block = (Rpc - LABEL_58_19);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_timer_interrupt_handler_19)
DEFLABEL (thread_timer_interrupt_handler_10)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_35;
  Wrd8 = Wrd12;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_58_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_58_0]));
  (Wrd6.Obj) = (current_block [OBJECT_58_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_33;

DEFLABEL (label_32)
  ((Wrd5.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_31)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_1]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_30;
  Wrd20 = Wrd24;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_58_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_58_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_58_13);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_28;
  Wrd5 = Wrd9;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd5.Obj);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_20;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_16]));

DEFLABEL (label_20)
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_26;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd45.Lng))))
    goto label_26;
  (Wrd15.Obj) = ((Wrd43.pObj) [4]);
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_22;

DEFLABEL (label_21)
  (Wrd38.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd38.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_22]));

DEFLABEL (label_22)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 62))
    goto label_25;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd25.Lng))))
    goto label_25;
  (Wrd17.Obj) = ((Wrd23.pObj) [2]);

DEFLABEL (label_24)
  if ((Wrd17.Obj) == (current_block [OBJECT_58_5]))
    goto label_23;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_21]));

DEFLABEL (label_23)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_19]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_58_19);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_23]));

DEFLABEL (label_25)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.Obj) = (current_block [OBJECT_58_4]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_18]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_3]), 2);

DEFLABEL (label_16)
  (Wrd17.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_26)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.Obj) = (current_block [OBJECT_58_2]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_17]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_3]), 2);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_21;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_15])), (Wrd6.pObj));

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_10])), (Wrd21.pObj));

DEFLABEL (label_14)
  (Wrd20.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_33)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_32;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_58_8])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_13)
  goto label_31;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_6])), (Wrd9.pObj));

DEFLABEL (label_12)
  (Wrd8.Obj) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_6 5
#define LABEL_59_5 7
#define LABEL_59_7 9
#define LABEL_59_8 11
#define LABEL_59_11 13
#define LABEL_59_10 15
#define ENVIRONMENT_LABEL_59_3 29
#define DEBUGGING_LABEL_59_2 28
#define OBJECT_59_4 27
#define OBJECT_59_3 26
#define OBJECT_59_2 25
#define OBJECT_59_1 24
#define OBJECT_59_0 23
#define EXECUTE_CACHE_59_12 17
#define EXECUTE_CACHE_59_9 19
#define FREE_REFERENCE_59_0 22
#define FREE_REFERENCES_LABEL_59_0 16
#define NUMBER_OF_LINKER_SECTIONS_59_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_59_4);
      goto yield_current_thread_7;

    case 1:
      current_block = (Rpc - LABEL_59_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_59_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_59_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_59_8);
      goto lambda_2;

    case 5:
      current_block = (Rpc - LABEL_59_11);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_59_10);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (yield_current_thread_12)
DEFLABEL (yield_current_thread_7)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_15;
  Wrd8 = Wrd12;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_59_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_59_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_59_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_0]), 1);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_59_10);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_6])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_14;

DEFLABEL (lambda_13)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_59_8);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_17;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_17;
  (Wrd7.Obj) = (current_block [OBJECT_59_2]);
  ((Wrd11.pObj) [2]) = (Wrd7.Obj);

DEFLABEL (label_16)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_12]));

DEFLABEL (label_17)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_59_3]);
  (Wrd18.Obj) = (current_block [OBJECT_59_2]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_11]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_4]), 3);

DEFLABEL (label_10)
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_5 3
#define LABEL_60_4 5
#define LABEL_60_6 7
#define LABEL_60_9 9
#define TAG_60_10 3
#define LABEL_60_12 11
#define LABEL_60_13 13
#define LABEL_60_15 15
#define LABEL_60_16 17
#define LABEL_60_17 19
#define LABEL_60_18 21
#define LABEL_60_19 23
#define ENVIRONMENT_LABEL_60_3 46
#define DEBUGGING_LABEL_60_2 45
#define OBJECT_60_4 44
#define OBJECT_60_3 43
#define OBJECT_60_2 42
#define OBJECT_60_1 41
#define OBJECT_60_0 40
#define EXECUTE_CACHE_60_20 25
#define EXECUTE_CACHE_60_14 27
#define EXECUTE_CACHE_60_11 29
#define EXECUTE_CACHE_60_8 31
#define EXECUTE_CACHE_60_7 33
#define FREE_REFERENCE_60_0 36
#define FREE_ASSIGNMENT_60_1 38
#define FREE_ASSIGNMENT_60_0 39
#define FREE_REFERENCES_LABEL_60_0 24
#define NUMBER_OF_LINKER_SECTIONS_60_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd53;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd86;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd18;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd33;
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
      current_block = (Rpc - LABEL_60_5);
      goto continuation_7;

    case 1:
      current_block = (Rpc - LABEL_60_4);
      goto yield_thread_9;

    case 2:
      current_block = (Rpc - LABEL_60_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_60_9);
      goto lambda_20;

    case 4:
      current_block = (Rpc - LABEL_60_12);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_60_13);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_60_15);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_60_16);
      goto label_13;

    case 8:
      current_block = (Rpc - LABEL_60_17);
      goto label_16;

    case 9:
      current_block = (Rpc - LABEL_60_18);
      goto label_14;

    case 10:
      current_block = (Rpc - LABEL_60_19);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (yield_thread_19)
DEFLABEL (yield_thread_9)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_25;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_25;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_24)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_60_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_60_9])));
  Rhp += 3;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd30 = Wrd25;
  (Wrd31.Obj) = (Rsp [2]);
  ((Wrd30.pObj) [2]) = (Wrd31.Obj);
  (Wrd29.Obj) = (Rsp [1]);
  ((Wrd30.pObj) [3]) = (Wrd29.Obj);
  ((Wrd30.pObj) [4]) = (Wrd21.Obj);
  (Rsp [2]) = (Wrd24.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_11]));

DEFLABEL (label_21)
  (Wrd33.Obj) = (Rsp [2]);
  if (! ((Wrd33.Obj) == (current_block [OBJECT_60_2])))
    goto label_23;

DEFLABEL (label_22)
  (Wrd39.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd39.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_7]));

DEFLABEL (label_23)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_8]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_60_5);
  goto label_22;

DEFLABEL (label_25)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_60_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_60_9);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [3]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_39;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd26.Lng))))
    goto label_39;
  (Wrd18.Obj) = (Rsp [1]);
  ((Wrd24.pObj) [4]) = (Wrd18.Obj);

DEFLABEL (label_38)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_60_13);
  (Wrd75.Obj) = (Rsp [0]);
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd77.Obj) = ((Wrd76.pObj) [3]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd78.uLng) == 62))
    goto label_37;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd74.Lng))))
    goto label_37;
  ((Wrd72.pObj) [3]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_36)
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_35;
  Wrd6 = Wrd10;

DEFLABEL (label_34)
  Wrd5 = Wrd6;
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd53.uLng) == 62))
    goto label_33;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd52.Lng))))
    goto label_33;
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [3]);
  ((Wrd50.pObj) [3]) = (Wrd47.Obj);

DEFLABEL (label_32)
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_60_0]));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [3]);
  (Wrd22.Obj) = ((Wrd12.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_31;

DEFLABEL (label_30)
  ((Wrd12.pObj) [0]) = (Wrd13.Obj);

DEFLABEL (label_29)
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_60_1]));
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [4]);
  (Wrd36.Obj) = ((Wrd26.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_28;

DEFLABEL (label_27)
  ((Wrd26.pObj) [0]) = (Wrd27.Obj);

DEFLABEL (label_26)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [4]);
  (Rsp [1]) = (Wrd40.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_20]));

DEFLABEL (label_28)
  if ((Wrd36.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_27;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_60_19])), (Wrd26.pObj), (Wrd27.Obj));

DEFLABEL (label_15)
  goto label_26;

DEFLABEL (label_31)
  if ((Wrd22.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_30;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_60_18])), (Wrd12.pObj), (Wrd13.Obj));

DEFLABEL (label_14)
  goto label_29;

DEFLABEL (label_33)
  (Wrd55.Obj) = (current_block [OBJECT_60_0]);
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [3]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_17]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_4]), 3);

DEFLABEL (label_16)
  goto label_32;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_16])), (Wrd7.pObj));

DEFLABEL (label_13)
  (Wrd6.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd80.Obj) = (Rsp [0]);
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd79.Obj) = ((Wrd81.pObj) [3]);
  (Wrd82.Obj) = (current_block [OBJECT_60_0]);
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_15]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_4]), 3);

DEFLABEL (label_17)
  goto label_36;

DEFLABEL (label_39)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [3]);
  (Wrd34.Obj) = (current_block [OBJECT_60_3]);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_12]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_4]), 3);

DEFLABEL (label_12)
  goto label_38;

INVOKE_INTERFACE_TARGET_0
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
thread_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto thread_float_environment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_float_environment_3)
DEFLABEL (thread_float_environment_0)
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
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [11]);
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
thread_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_thread_float_environmentB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_thread_float_environmentB_3)
DEFLABEL (set_thread_float_environmentB_0)
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
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [11]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_62_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define LABEL_63_8 7
#define LABEL_63_7 9
#define LABEL_63_9 11
#define LABEL_63_11 13
#define LABEL_63_10 15
#define LABEL_63_14 17
#define LABEL_63_13 19
#define LABEL_63_16 21
#define LABEL_63_18 23
#define LABEL_63_20 25
#define LABEL_63_24 27
#define LABEL_63_22 29
#define LABEL_63_25 31
#define LABEL_63_26 33
#define ENVIRONMENT_LABEL_63_3 66
#define DEBUGGING_LABEL_63_2 65
#define OBJECT_63_8 64
#define OBJECT_63_7 63
#define OBJECT_63_6 62
#define OBJECT_63_5 61
#define OBJECT_63_4 60
#define OBJECT_63_3 59
#define OBJECT_63_2 58
#define OBJECT_63_1 57
#define OBJECT_63_0 56
#define EXECUTE_CACHE_63_28 35
#define EXECUTE_CACHE_63_27 37
#define EXECUTE_CACHE_63_23 39
#define EXECUTE_CACHE_63_21 41
#define EXECUTE_CACHE_63_19 43
#define EXECUTE_CACHE_63_17 45
#define EXECUTE_CACHE_63_15 47
#define EXECUTE_CACHE_63_12 49
#define EXECUTE_CACHE_63_6 51
#define FREE_REFERENCE_63_1 54
#define FREE_REFERENCE_63_0 55
#define FREE_REFERENCES_LABEL_63_0 34
#define NUMBER_OF_LINKER_SECTIONS_63_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
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
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
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
      current_block = (Rpc - LABEL_63_4);
      goto exit_current_thread_15;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_63_8);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_63_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_63_9);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_63_11);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_63_10);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_63_14);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_63_13);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_63_16);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_63_18);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_63_20);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_63_24);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_63_22);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_63_25);
      goto label_21;

    case 15:
      current_block = (Rpc - LABEL_63_26);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (exit_current_thread_24)
DEFLABEL (exit_current_thread_15)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_63_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_38;
  Wrd8 = Wrd12;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_0]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_63_7);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_36;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd32.Lng))))
    goto label_36;
  (Wrd26.Obj) = (current_block [OBJECT_63_1]);
  ((Wrd30.pObj) [5]) = (Wrd26.Obj);

DEFLABEL (label_35)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_34;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_34;
  (Wrd10.Obj) = ((Wrd14.pObj) [6]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_33)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_63_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_32;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_32;
  (Wrd10.Obj) = ((Wrd14.pObj) [10]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_63_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_63_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_63_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_19]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_63_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_63_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_23]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_63_22);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_30;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd13.Lng))))
    goto label_30;
  (Wrd7.Obj) = ((Wrd11.pObj) [9]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_29)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_1]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_28;
  Wrd22 = Wrd26;

DEFLABEL (label_27)
  (Wrd28.Obj) = (* (Rsp++));
  if ((Wrd22.Obj) == (Wrd28.Obj))
    goto label_26;

DEFLABEL (label_25)
  (Wrd29.Obj) = (current_block [OBJECT_63_8]);
  (Rsp [1]) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_28]));

DEFLABEL (label_26)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_24]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_27]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_63_24);
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_26])), (Wrd23.pObj));

DEFLABEL (label_22)
  (Wrd22.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_63_7]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_25]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_5]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_63_6]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_5]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_63_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_5]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_63_2]);
  (Wrd37.Obj) = (current_block [OBJECT_63_1]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_9]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_3]), 3);

DEFLABEL (label_19)
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_8])), (Wrd9.pObj));

DEFLABEL (label_17)
  (Wrd8.Obj) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_7 5
#define LABEL_64_5 7
#define LABEL_64_9 9
#define LABEL_64_11 11
#define LABEL_64_14 13
#define LABEL_64_15 15
#define LABEL_64_13 17
#define LABEL_64_16 19
#define LABEL_64_17 21
#define LABEL_64_18 23
#define LABEL_64_19 25
#define LABEL_64_20 27
#define LABEL_64_22 29
#define LABEL_64_24 31
#define LABEL_64_21 33
#define ENVIRONMENT_LABEL_64_3 63
#define DEBUGGING_LABEL_64_2 62
#define OBJECT_64_9 61
#define OBJECT_64_8 60
#define OBJECT_64_7 59
#define OBJECT_64_6 58
#define OBJECT_64_5 57
#define OBJECT_64_4 56
#define OBJECT_64_3 55
#define OBJECT_64_2 54
#define OBJECT_64_1 53
#define OBJECT_64_0 52
#define EXECUTE_CACHE_64_25 35
#define EXECUTE_CACHE_64_23 37
#define EXECUTE_CACHE_64_12 39
#define EXECUTE_CACHE_64_10 41
#define EXECUTE_CACHE_64_8 43
#define EXECUTE_CACHE_64_6 45
#define FREE_REFERENCE_64_3 48
#define FREE_REFERENCE_64_2 49
#define FREE_REFERENCE_64_1 50
#define FREE_REFERENCE_64_0 51
#define FREE_REFERENCES_LABEL_64_0 34
#define NUMBER_OF_LINKER_SECTIONS_64_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd95;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd90;
  machine_word Wrd92;
  machine_word Wrd93;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd74;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd84;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd126;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd69;
  machine_word Wrd71;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd48;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_64_4);
      goto join_thread_21;

    case 1:
      current_block = (Rpc - LABEL_64_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_64_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_64_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_64_11);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_64_14);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_64_15);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_64_13);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_64_16);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_64_17);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_64_18);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_64_19);
      goto label_30;

    case 12:
      current_block = (Rpc - LABEL_64_20);
      goto label_29;

    case 13:
      current_block = (Rpc - LABEL_64_22);
      goto label_27;

    case 14:
      current_block = (Rpc - LABEL_64_24);
      goto continuation_9;

    case 15:
      current_block = (Rpc - LABEL_64_21);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (join_thread_32)
DEFLABEL (join_thread_21)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_64_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;

DEFLABEL (label_55)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_64_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == Rvl)
    goto label_52;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_51;
  Wrd10 = Wrd14;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_3]), 1);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_64_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_49;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_49;
  (Wrd10.Obj) = ((Wrd14.pObj) [9]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_48)
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_2]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_47;
  Wrd25 = Wrd29;

DEFLABEL (label_46)
  (Wrd31.Obj) = (Rsp [0]);
  if ((Wrd31.Obj) == (Wrd25.Obj))
    goto label_36;
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_3]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_35;
  Wrd33 = Wrd37;

DEFLABEL (label_34)
  (Wrd39.Obj) = (Rsp [0]);
  if (! ((Wrd39.Obj) == (Wrd33.Obj)))
    goto label_33;
  (Wrd47.Obj) = (Rsp [4]);
  (Rsp [0]) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_23]));

DEFLABEL (label_33)
  (Wrd40.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_24]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd45.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd46.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_64_24);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_25]));

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_22])), (Wrd34.pObj));

DEFLABEL (label_27)
  (Wrd33.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_36)
  (Wrd57.Obj) = (Rsp [4]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 62))
    goto label_45;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd56.Lng))))
    goto label_45;
  (Wrd48.Obj) = ((Wrd54.pObj) [7]);

DEFLABEL (label_44)
  (Wrd67.Obj) = (Rsp [3]);
  (Wrd68.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd67.Obj);
  (* (Rhp++)) = (Wrd68.Obj);
  (Wrd66.pObj) = (& (Rhp [-2]));
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd66.pObj)));
  (* (Rhp++)) = (Wrd64.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd71.pObj) = (& (Rhp [-2]));
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd71.pObj)));
  (Wrd119.Obj) = (Rsp [4]);
  (Wrd120.uLng) = (OBJECT_TYPE (Wrd119.Obj));
  if (! ((Wrd120.uLng) == 62))
    goto label_43;
  (Wrd116.pObj) = (OBJECT_ADDRESS (Wrd119.Obj));
  (Wrd117.Obj) = ((Wrd116.pObj) [0]);
  (Wrd118.Lng) = (FIXNUM_TO_LONG (Wrd117.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd118.Lng))))
    goto label_43;
  ((Wrd116.pObj) [7]) = (Wrd69.Obj);

DEFLABEL (label_42)
  (Wrd72.Obj) = (current_block [OBJECT_64_8]);
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd73.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd84.uLng) == 62))
    goto label_41;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd82.Lng))))
    goto label_41;
  (Wrd74.Obj) = ((Wrd80.pObj) [8]);

DEFLABEL (label_40)
  (Wrd93.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd93.Obj);
  (* (Rhp++)) = (Wrd74.Obj);
  (Wrd92.pObj) = (& (Rhp [-2]));
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd92.pObj)));
  (Rsp [2]) = (Wrd90.Obj);
  (Wrd105.Obj) = (Rsp [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 62)
    goto label_38;

DEFLABEL (label_37)
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_7]), 3);

DEFLABEL (label_38)
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd103.Obj) = ((Wrd102.pObj) [0]);
  (Wrd104.Lng) = (FIXNUM_TO_LONG (Wrd103.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd104.Lng))))
    goto label_37;
  ((Wrd102.pObj) [8]) = (Wrd90.Obj);
  (Wrd95.Obj) = (current_block [OBJECT_64_9]);
  Rsp = (& (Rsp [4]));
  (* (--Rsp)) = (Wrd95.Obj);

DEFLABEL (label_39)
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_21]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd110.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd110.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_3]), 1);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_64_21);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd85.Obj) = (Rsp [5]);
  (Wrd86.Obj) = (current_block [OBJECT_64_8]);
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_20]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_5]), 2);

DEFLABEL (label_29)
  (Wrd74.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd121.Obj) = (Rsp [4]);
  (Wrd122.Obj) = (current_block [OBJECT_64_6]);
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_19]))));
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_7]), 3);

DEFLABEL (label_30)
  goto label_42;

DEFLABEL (label_45)
  (Wrd59.Obj) = (Rsp [4]);
  (Wrd60.Obj) = (current_block [OBJECT_64_6]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_18]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_5]), 2);

DEFLABEL (label_28)
  (Wrd48.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_17])), (Wrd26.pObj));

DEFLABEL (label_26)
  (Wrd25.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_64_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_16]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_5]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_14])), (Wrd11.pObj));

DEFLABEL (label_23)
  (Wrd10.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  (Wrd17.Obj) = (current_block [OBJECT_64_2]);
  (Rsp [1]) = (Wrd17.Obj);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_0]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_54;
  Wrd20 = Wrd24;

DEFLABEL (label_53)
  (Rsp [2]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_12]));

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_11])), (Wrd21.pObj));

DEFLABEL (label_24)
  (Wrd20.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_64_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_64_1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_64_7);
  goto label_55;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_64_15);
  (* (--Rsp)) = Rvl;
  goto label_39;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_7 5
#define LABEL_65_5 7
#define LABEL_65_10 9
#define LABEL_65_11 11
#define LABEL_65_9 13
#define LABEL_65_12 15
#define LABEL_65_13 17
#define LABEL_65_16 19
#define LABEL_65_15 21
#define LABEL_65_18 23
#define ENVIRONMENT_LABEL_65_3 42
#define DEBUGGING_LABEL_65_2 41
#define OBJECT_65_4 40
#define OBJECT_65_3 39
#define OBJECT_65_2 38
#define OBJECT_65_1 37
#define OBJECT_65_0 36
#define EXECUTE_CACHE_65_17 25
#define EXECUTE_CACHE_65_14 27
#define EXECUTE_CACHE_65_8 29
#define EXECUTE_CACHE_65_6 31
#define FREE_REFERENCE_65_1 34
#define FREE_REFERENCE_65_0 35
#define FREE_REFERENCES_LABEL_65_0 24
#define NUMBER_OF_LINKER_SECTIONS_65_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
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
      goto detach_thread_10;

    case 1:
      current_block = (Rpc - LABEL_65_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_65_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_65_10);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_65_11);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_65_9);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_65_12);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_65_13);
      goto label_14;

    case 8:
      current_block = (Rpc - LABEL_65_16);
      goto label_15;

    case 9:
      current_block = (Rpc - LABEL_65_15);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_65_18);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (detach_thread_17)
DEFLABEL (detach_thread_10)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_65_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_27;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_65_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_65_1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_65_7);

DEFLABEL (label_27)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_26;
  Wrd10 = Wrd14;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_2]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_65_9);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_24;
  Wrd5 = Wrd9;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_22;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd19.Lng))))
    goto label_22;
  (Wrd11.Obj) = ((Wrd17.pObj) [9]);

DEFLABEL (label_21)
  (Wrd27.Obj) = (* (Rsp++));
  if (! ((Wrd11.Obj) == (Wrd27.Obj)))
    goto label_20;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_11]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_65_11);

DEFLABEL (label_20)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_15]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65_1]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_19;
  Wrd31 = Wrd35;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd37.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_65_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_2]), 1);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_65_18);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65_16])), (Wrd32.pObj));

DEFLABEL (label_15)
  (Wrd31.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_22)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_65_3]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_13]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_4]), 2);

DEFLABEL (label_14)
  (Wrd11.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65_12])), (Wrd6.pObj));

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65_10])), (Wrd11.pObj));

DEFLABEL (label_12)
  (Wrd10.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_5 5
#define LABEL_66_6 7
#define LABEL_66_7 9
#define LABEL_66_10 11
#define LABEL_66_11 13
#define LABEL_66_8 15
#define LABEL_66_13 17
#define LABEL_66_9 19
#define LABEL_66_14 21
#define LABEL_66_15 23
#define LABEL_66_17 25
#define LABEL_66_16 27
#define LABEL_66_19 29
#define ENVIRONMENT_LABEL_66_3 46
#define DEBUGGING_LABEL_66_2 45
#define OBJECT_66_7 44
#define OBJECT_66_6 43
#define OBJECT_66_5 42
#define OBJECT_66_4 41
#define OBJECT_66_3 40
#define OBJECT_66_2 39
#define OBJECT_66_1 38
#define OBJECT_66_0 37
#define EXECUTE_CACHE_66_20 31
#define EXECUTE_CACHE_66_18 33
#define EXECUTE_CACHE_66_12 35
#define FREE_REFERENCES_LABEL_66_0 30
#define NUMBER_OF_LINKER_SECTIONS_66_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd9;
  machine_word Wrd35;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  INVOKE_INTERFACE_DECLS
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
      goto release_joined_threads_20;

    case 1:
      current_block = (Rpc - LABEL_66_5);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_66_6);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_66_7);
      goto do_loop_18;

    case 4:
      current_block = (Rpc - LABEL_66_10);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_66_11);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_66_8);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_66_13);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_66_9);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_66_14);
      goto label_27;

    case 10:
      current_block = (Rpc - LABEL_66_15);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_66_17);
      goto label_29;

    case 12:
      current_block = (Rpc - LABEL_66_16);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_66_19);
      goto label_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (release_joined_threads_32)
DEFLABEL (release_joined_threads_20)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_37;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd29.Lng))))
    goto label_37;
  (Wrd23.Obj) = (Rsp [1]);
  ((Wrd27.pObj) [9]) = (Wrd23.Obj);

DEFLABEL (label_36)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_35;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_35;
  (Wrd7.Obj) = ((Wrd11.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_34)
  goto do_loop_18;

DEFLABEL (label_35)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_66_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_3]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_66_0]);
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_5]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 3);

DEFLABEL (label_23)
  goto label_36;

DEFLABEL (do_loop_33)
DEFLABEL (do_loop_18)
  INTERRUPT_CHECK (26, LABEL_66_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_39;
  (Wrd7.Obj) = (current_block [OBJECT_66_4]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_38;

DEFLABEL (label_39)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_38)
DEFLABEL (label_53)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_40;
  Rsp = (& (Rsp [2]));
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_12]));

DEFLABEL (label_40)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [5]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_52;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_51)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_50;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_49)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_66_9);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_48;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_47)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_46;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_45)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_16]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_44;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd32.Lng))))
    goto label_44;
  (Wrd26.Obj) = ((Wrd30.pObj) [8]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_43)
  (Wrd40.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_18]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_66_16);
  (Wrd5.Obj) = Rvl;
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_42;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_42;
  ((Wrd11.pObj) [8]) = Rvl;

DEFLABEL (label_41)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_20]));

DEFLABEL (label_42)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_66_7]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_19]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 3);

DEFLABEL (label_30)
  goto label_41;

DEFLABEL (label_44)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (current_block [OBJECT_66_7]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_17]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_3]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_5]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_5]), 1);

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_11]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_6]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_5]), 1);

DEFLABEL (label_24)
  (Wrd20.Obj) = Rvl;
  goto label_51;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_66_8);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_55;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_54)
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_18;

DEFLABEL (label_55)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_6]), 1);

DEFLABEL (label_26)
  (Wrd5.Obj) = Rvl;
  goto label_54;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define LABEL_67_6 7
#define LABEL_67_8 9
#define LABEL_67_9 11
#define LABEL_67_7 13
#define LABEL_67_11 15
#define LABEL_67_12 17
#define LABEL_67_13 19
#define ENVIRONMENT_LABEL_67_3 33
#define DEBUGGING_LABEL_67_2 32
#define OBJECT_67_8 31
#define OBJECT_67_7 30
#define OBJECT_67_6 29
#define OBJECT_67_5 28
#define OBJECT_67_4 27
#define OBJECT_67_3 26
#define OBJECT_67_2 25
#define OBJECT_67_1 24
#define OBJECT_67_0 23
#define EXECUTE_CACHE_67_10 21
#define FREE_REFERENCES_LABEL_67_0 20
#define NUMBER_OF_LINKER_SECTIONS_67_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_67_4);
      goto Z__disassociate_joined_threads_14;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_67_6);
      goto do_loop_12;

    case 3:
      current_block = (Rpc - LABEL_67_8);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_67_9);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_67_7);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_67_11);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_67_12);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_67_13);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__disassociate_joined_threads_23)
DEFLABEL (Z__disassociate_joined_threads_14)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_26;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_26;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_25)
  goto do_loop_12;

DEFLABEL (label_26)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_67_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (do_loop_24)
DEFLABEL (do_loop_12)
  INTERRUPT_CHECK (26, LABEL_67_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_28;
  (Wrd7.Obj) = (current_block [OBJECT_67_2]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_27;

DEFLABEL (label_28)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_27)
DEFLABEL (label_42)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_31;
  Rsp = (& (Rsp [2]));
  (Wrd11.Obj) = (current_block [OBJECT_67_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_67_5]);
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd26.uLng) == 62)
    goto label_30;

DEFLABEL (label_29)
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_7]), 3);

DEFLABEL (label_30)
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd24.Lng))))
    goto label_29;
  ((Wrd22.pObj) [8]) = (Wrd13.Obj);
  Rvl = (current_block [OBJECT_67_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_41;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [0]);

DEFLABEL (label_40)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd46.uLng) == 62))
    goto label_39;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd45.Lng))))
    goto label_39;
  (Wrd40.Obj) = ((Wrd43.pObj) [7]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_38)
  (Wrd52.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_10]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_67_7);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_37;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_36)
  (Wrd14.Obj) = (* (Rsp++));
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_35;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd30.Lng))))
    goto label_35;
  ((Wrd28.pObj) [7]) = (Wrd14.Obj);

DEFLABEL (label_34)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_33;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_32)
  (Rsp [1]) = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_12;

DEFLABEL (label_33)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_8]), 1);

DEFLABEL (label_20)
  (Wrd15.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd33.Obj) = (current_block [OBJECT_67_4]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_12]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_7]), 3);

DEFLABEL (label_21)
  goto label_34;

DEFLABEL (label_37)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_3]), 1);

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd48.Obj) = (current_block [OBJECT_67_4]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_9]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_8]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_3]), 1);

DEFLABEL (label_17)
  (Wrd30.Obj) = Rvl;
  goto label_40;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define ENVIRONMENT_LABEL_68_3 7
#define DEBUGGING_LABEL_68_2 6
#define OBJECT_68_1 5
#define OBJECT_68_0 4
#define FREE_REFERENCES_LABEL_68_0 4
#define NUMBER_OF_LINKER_SECTIONS_68_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_68_4);
      goto dentry_descriptor_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dentry_descriptor_3)
DEFLABEL (dentry_descriptor_0)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_68_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 2);

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

#define LABEL_69_4 3
#define ENVIRONMENT_LABEL_69_3 7
#define DEBUGGING_LABEL_69_2 6
#define OBJECT_69_1 5
#define OBJECT_69_0 4
#define FREE_REFERENCES_LABEL_69_0 4
#define NUMBER_OF_LINKER_SECTIONS_69_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dentry_mode_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dentry_mode_3)
DEFLABEL (dentry_mode_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
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
thread_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dentry_first_tentry_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dentry_first_tentry_3)
DEFLABEL (dentry_first_tentry_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
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
thread_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dentry_last_tentry_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dentry_last_tentry_3)
DEFLABEL (dentry_last_tentry_0)
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
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
thread_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dentry_prev_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dentry_prev_3)
DEFLABEL (dentry_prev_0)
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
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
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
thread_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dentry_next_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dentry_next_3)
DEFLABEL (dentry_next_0)
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
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define ENVIRONMENT_LABEL_74_3 8
#define DEBUGGING_LABEL_74_2 7
#define OBJECT_74_2 6
#define OBJECT_74_1 5
#define OBJECT_74_0 4
#define FREE_REFERENCES_LABEL_74_0 4
#define NUMBER_OF_LINKER_SECTIONS_74_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_74_4);
      goto set_dentry_first_tentryB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_dentry_first_tentryB_3)
DEFLABEL (set_dentry_first_tentryB_0)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_74_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_74_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define ENVIRONMENT_LABEL_75_3 8
#define DEBUGGING_LABEL_75_2 7
#define OBJECT_75_2 6
#define OBJECT_75_1 5
#define OBJECT_75_0 4
#define FREE_REFERENCES_LABEL_75_0 4
#define NUMBER_OF_LINKER_SECTIONS_75_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_75_4);
      goto set_dentry_last_tentryB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_dentry_last_tentryB_3)
DEFLABEL (set_dentry_last_tentryB_0)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_75_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_75_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define ENVIRONMENT_LABEL_76_3 8
#define DEBUGGING_LABEL_76_2 7
#define OBJECT_76_2 6
#define OBJECT_76_1 5
#define OBJECT_76_0 4
#define FREE_REFERENCES_LABEL_76_0 4
#define NUMBER_OF_LINKER_SECTIONS_76_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_76_4);
      goto set_dentry_prevB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_dentry_prevB_3)
DEFLABEL (set_dentry_prevB_0)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_76_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_76_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define ENVIRONMENT_LABEL_77_3 8
#define DEBUGGING_LABEL_77_2 7
#define OBJECT_77_2 6
#define OBJECT_77_1 5
#define OBJECT_77_0 4
#define FREE_REFERENCES_LABEL_77_0 4
#define NUMBER_OF_LINKER_SECTIONS_77_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_77_4);
      goto set_dentry_nextB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_dentry_nextB_3)
DEFLABEL (set_dentry_nextB_0)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_77_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [7]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_77_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define LABEL_78_5 5
#define LABEL_78_6 7
#define LABEL_78_7 9
#define ENVIRONMENT_LABEL_78_3 17
#define DEBUGGING_LABEL_78_2 16
#define OBJECT_78_3 15
#define OBJECT_78_2 14
#define OBJECT_78_1 13
#define OBJECT_78_0 12
#define FREE_REFERENCE_78_0 11
#define FREE_REFERENCES_LABEL_78_0 10
#define NUMBER_OF_LINKER_SECTIONS_78_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_78_4);
      goto dentryP_4;

    case 1:
      current_block = (Rpc - LABEL_78_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_78_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_78_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dentryP_10)
DEFLABEL (dentryP_4)
  INTERRUPT_CHECK (26, LABEL_78_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_78_0]));
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
  Rvl = (current_block [OBJECT_78_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_78_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define ENVIRONMENT_LABEL_79_3 7
#define DEBUGGING_LABEL_79_2 6
#define OBJECT_79_1 5
#define OBJECT_79_0 4
#define FREE_REFERENCES_LABEL_79_0 4
#define NUMBER_OF_LINKER_SECTIONS_79_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_79_4);
      goto tentry_dentry_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tentry_dentry_3)
DEFLABEL (tentry_dentry_0)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_79_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 2);

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

#define LABEL_80_4 3
#define ENVIRONMENT_LABEL_80_3 7
#define DEBUGGING_LABEL_80_2 6
#define OBJECT_80_1 5
#define OBJECT_80_0 4
#define FREE_REFERENCES_LABEL_80_0 4
#define NUMBER_OF_LINKER_SECTIONS_80_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_80_4);
      goto tentry_thread_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tentry_thread_3)
DEFLABEL (tentry_thread_0)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_80_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 2);

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

#define LABEL_81_4 3
#define ENVIRONMENT_LABEL_81_3 7
#define DEBUGGING_LABEL_81_2 6
#define OBJECT_81_1 5
#define OBJECT_81_0 4
#define FREE_REFERENCES_LABEL_81_0 4
#define NUMBER_OF_LINKER_SECTIONS_81_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_81_4);
      goto tentry_event_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tentry_event_3)
DEFLABEL (tentry_event_0)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_81_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_1]), 2);

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

#define LABEL_82_4 3
#define ENVIRONMENT_LABEL_82_3 7
#define DEBUGGING_LABEL_82_2 6
#define OBJECT_82_1 5
#define OBJECT_82_0 4
#define FREE_REFERENCES_LABEL_82_0 4
#define NUMBER_OF_LINKER_SECTIONS_82_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_82_4);
      goto tentry_permanentP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tentry_permanentP_3)
DEFLABEL (tentry_permanentP_0)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_82_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_1]), 2);

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

#define LABEL_83_4 3
#define ENVIRONMENT_LABEL_83_3 7
#define DEBUGGING_LABEL_83_2 6
#define OBJECT_83_1 5
#define OBJECT_83_0 4
#define FREE_REFERENCES_LABEL_83_0 4
#define NUMBER_OF_LINKER_SECTIONS_83_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_83_4);
      goto tentry_prev_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tentry_prev_3)
DEFLABEL (tentry_prev_0)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_83_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 2);

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

#define LABEL_84_4 3
#define ENVIRONMENT_LABEL_84_3 7
#define DEBUGGING_LABEL_84_2 6
#define OBJECT_84_1 5
#define OBJECT_84_0 4
#define FREE_REFERENCES_LABEL_84_0 4
#define NUMBER_OF_LINKER_SECTIONS_84_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto tentry_next_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tentry_next_3)
DEFLABEL (tentry_next_0)
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
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define ENVIRONMENT_LABEL_85_3 8
#define DEBUGGING_LABEL_85_2 7
#define OBJECT_85_2 6
#define OBJECT_85_1 5
#define OBJECT_85_0 4
#define FREE_REFERENCES_LABEL_85_0 4
#define NUMBER_OF_LINKER_SECTIONS_85_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_85_4);
      goto set_tentry_dentryB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_tentry_dentryB_3)
DEFLABEL (set_tentry_dentryB_0)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_85_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_85_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define ENVIRONMENT_LABEL_86_3 8
#define DEBUGGING_LABEL_86_2 7
#define OBJECT_86_2 6
#define OBJECT_86_1 5
#define OBJECT_86_0 4
#define FREE_REFERENCES_LABEL_86_0 4
#define NUMBER_OF_LINKER_SECTIONS_86_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_86_4);
      goto set_tentry_threadB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_tentry_threadB_3)
DEFLABEL (set_tentry_threadB_0)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_86_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_86_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define ENVIRONMENT_LABEL_87_3 8
#define DEBUGGING_LABEL_87_2 7
#define OBJECT_87_2 6
#define OBJECT_87_1 5
#define OBJECT_87_0 4
#define FREE_REFERENCES_LABEL_87_0 4
#define NUMBER_OF_LINKER_SECTIONS_87_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_87_4);
      goto set_tentry_eventB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_tentry_eventB_3)
DEFLABEL (set_tentry_eventB_0)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_87_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_87_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define ENVIRONMENT_LABEL_88_3 8
#define DEBUGGING_LABEL_88_2 7
#define OBJECT_88_2 6
#define OBJECT_88_1 5
#define OBJECT_88_0 4
#define FREE_REFERENCES_LABEL_88_0 4
#define NUMBER_OF_LINKER_SECTIONS_88_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_88_4);
      goto set_tentry_prevB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_tentry_prevB_3)
DEFLABEL (set_tentry_prevB_0)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_88_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_88_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define ENVIRONMENT_LABEL_89_3 8
#define DEBUGGING_LABEL_89_2 7
#define OBJECT_89_2 6
#define OBJECT_89_1 5
#define OBJECT_89_0 4
#define FREE_REFERENCES_LABEL_89_0 4
#define NUMBER_OF_LINKER_SECTIONS_89_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_89_4);
      goto set_tentry_nextB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_tentry_nextB_3)
DEFLABEL (set_tentry_nextB_0)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_89_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [7]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_89_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_4 3
#define LABEL_90_5 5
#define LABEL_90_6 7
#define LABEL_90_7 9
#define ENVIRONMENT_LABEL_90_3 17
#define DEBUGGING_LABEL_90_2 16
#define OBJECT_90_3 15
#define OBJECT_90_2 14
#define OBJECT_90_1 13
#define OBJECT_90_0 12
#define FREE_REFERENCE_90_0 11
#define FREE_REFERENCES_LABEL_90_0 10
#define NUMBER_OF_LINKER_SECTIONS_90_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_90_4);
      goto tentryP_4;

    case 1:
      current_block = (Rpc - LABEL_90_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_90_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_90_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tentryP_10)
DEFLABEL (tentryP_4)
  INTERRUPT_CHECK (26, LABEL_90_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_90_0]));
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
  Rvl = (current_block [OBJECT_90_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_90_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_91_5 3
#define LABEL_91_4 5
#define LABEL_91_6 7
#define LABEL_91_7 9
#define LABEL_91_8 11
#define ENVIRONMENT_LABEL_91_3 23
#define DEBUGGING_LABEL_91_2 22
#define OBJECT_91_1 21
#define OBJECT_91_0 20
#define EXECUTE_CACHE_91_9 13
#define FREE_REFERENCE_91_0 16
#define FREE_ASSIGNMENT_91_1 18
#define FREE_ASSIGNMENT_91_0 19
#define FREE_REFERENCES_LABEL_91_0 12
#define NUMBER_OF_LINKER_SECTIONS_91_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd16;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_91_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_91_4);
      goto initialize_io_blocking_1;

    case 2:
      current_block = (Rpc - LABEL_91_6);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_91_7);
      goto label_4;

    case 4:
      current_block = (Rpc - LABEL_91_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_io_blocking_7)
DEFLABEL (initialize_io_blocking_1)
  INTERRUPT_CHECK (26, LABEL_91_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_91_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_17;
  Wrd8 = Wrd12;

DEFLABEL (label_16)
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_91_5);
  (Wrd16.Obj) = Rvl;

DEFLABEL (label_14)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_91_0]));
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  ((Wrd17.pObj) [0]) = (Wrd16.Obj);

DEFLABEL (label_11)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_91_1]));
  (Wrd30.Obj) = (current_block [OBJECT_91_0]);
  (Wrd37.Obj) = ((Wrd29.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_10;

DEFLABEL (label_9)
  ((Wrd29.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_91_1]);
  goto pop_return;

DEFLABEL (label_10)
  if ((Wrd37.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_9;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_91_8])), (Wrd29.pObj), (Wrd30.Obj));

DEFLABEL (label_5)
  goto label_8;

DEFLABEL (label_13)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_12;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_91_7])), (Wrd17.pObj), (Wrd16.Obj));

DEFLABEL (label_4)
  goto label_11;

DEFLABEL (label_15)
  (Wrd16.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_91_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_92_4 3
#define LABEL_92_5 5
#define LABEL_92_7 7
#define LABEL_92_11 9
#define LABEL_92_8 11
#define LABEL_92_10 13
#define LABEL_92_14 15
#define TAG_92_15 6
#define LABEL_92_16 17
#define LABEL_92_22 19
#define LABEL_92_12 21
#define LABEL_92_18 23
#define LABEL_92_25 25
#define LABEL_92_27 27
#define LABEL_92_21 29
#define LABEL_92_30 31
#define LABEL_92_23 33
#define TAG_92_24 15
#define ENVIRONMENT_LABEL_92_3 68
#define DEBUGGING_LABEL_92_2 67
#define OBJECT_92_4 66
#define OBJECT_92_3 65
#define OBJECT_92_2 64
#define OBJECT_92_1 63
#define OBJECT_92_0 62
#define EXECUTE_CACHE_92_32 35
#define EXECUTE_CACHE_92_31 37
#define EXECUTE_CACHE_92_29 39
#define EXECUTE_CACHE_92_26 41
#define EXECUTE_CACHE_92_20 43
#define EXECUTE_CACHE_92_19 45
#define EXECUTE_CACHE_92_17 47
#define EXECUTE_CACHE_92_13 49
#define EXECUTE_CACHE_92_9 51
#define EXECUTE_CACHE_92_28 53
#define EXECUTE_CACHE_92_6 55
#define FREE_REFERENCE_92_3 58
#define FREE_REFERENCE_92_2 59
#define FREE_REFERENCE_92_1 60
#define FREE_REFERENCE_92_0 61
#define FREE_REFERENCES_LABEL_92_0 34
#define NUMBER_OF_LINKER_SECTIONS_92_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd16;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_92_4);
      goto wait_for_io_16;

    case 1:
      current_block = (Rpc - LABEL_92_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_92_7);
      goto continuation_9;

    case 3:
      current_block = (Rpc - LABEL_92_11);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_92_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_92_10);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_92_14);
      goto lambda_25;

    case 7:
      current_block = (Rpc - LABEL_92_16);
      goto lambda_8;

    case 8:
      current_block = (Rpc - LABEL_92_22);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_92_12);
      goto lambda_3;

    case 10:
      current_block = (Rpc - LABEL_92_18);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_92_25);
      goto label_20;

    case 12:
      current_block = (Rpc - LABEL_92_27);
      goto label_21;

    case 13:
      current_block = (Rpc - LABEL_92_21);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_92_30);
      goto label_22;

    case 15:
      current_block = (Rpc - LABEL_92_23);
      goto lambda_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wait_for_io_24)
DEFLABEL (wait_for_io_16)
  INTERRUPT_CHECK (26, LABEL_92_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_92_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_92_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_92_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_92_14])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_92_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_16]))));
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_17]));

DEFLABEL (label_29)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_12]))));
  (Rsp [0]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_13]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_92_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_92_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_37;
  Wrd8 = Wrd12;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_0]), 1);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_92_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_19]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_92_18);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_92_2]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_35;
  Wrd6 = Wrd10;

DEFLABEL (label_34)
  (Rsp [0]) = (Wrd6.Obj);
  if (! ((Wrd6.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_30;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_26]));

DEFLABEL (label_30)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_33;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd24.Lng))))
    goto label_33;
  (Wrd16.Obj) = ((Wrd22.pObj) [4]);
  if ((Wrd16.Obj) == ((SCHEME_OBJECT) 0))
    goto label_32;

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_29]));

DEFLABEL (label_32)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_28]));

DEFLABEL (label_33)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (current_block [OBJECT_92_2]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_27]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_3]), 2);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  goto label_31;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_92_25])), (Wrd7.pObj));

DEFLABEL (label_20)
  (Wrd6.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_92_11])), (Wrd9.pObj));

DEFLABEL (label_18)
  (Wrd8.Obj) = Rvl;
  goto label_36;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_92_14);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_20]));

DEFLABEL (lambda_26)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_92_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_92_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_41;
  Wrd8 = Wrd12;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_0]), 1);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_92_21);
  (Wrd5.Obj) = (current_block [OBJECT_92_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_92_3]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_39;
  Wrd6 = Wrd10;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_31]));

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_92_30])), (Wrd7.pObj));

DEFLABEL (label_22)
  (Wrd6.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_92_22])), (Wrd9.pObj));

DEFLABEL (label_19)
  (Wrd8.Obj) = Rvl;
  goto label_40;

DEFLABEL (lambda_27)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_92_12);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_92_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_92_23])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_92_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_16]))));
  (Rsp [2]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_17]));

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_92_23);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_16]))));
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_32]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_93_4 3
#define LABEL_93_5 5
#define LABEL_93_6 7
#define LABEL_93_7 9
#define ENVIRONMENT_LABEL_93_3 22
#define DEBUGGING_LABEL_93_2 21
#define OBJECT_93_7 20
#define OBJECT_93_6 19
#define OBJECT_93_5 18
#define OBJECT_93_4 17
#define OBJECT_93_3 16
#define OBJECT_93_2 15
#define OBJECT_93_1 14
#define OBJECT_93_0 13
#define EXECUTE_CACHE_93_8 11
#define FREE_REFERENCES_LABEL_93_0 10
#define NUMBER_OF_LINKER_SECTIONS_93_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_93 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd46;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_93_4);
      goto signal_select_result_5;

    case 1:
      current_block = (Rpc - LABEL_93_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_93_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_93_7);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (signal_select_result_11)
DEFLABEL (signal_select_result_5)
  INTERRUPT_CHECK (26, LABEL_93_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_13;
  if ((Wrd5.Obj) == (current_block [OBJECT_93_4]))
    goto label_12;
  Rvl = (current_block [OBJECT_93_7]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd11.Obj) = (current_block [OBJECT_93_5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_93_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_93_6]);
  (Rsp [2]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_8]));

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 10))
    goto label_19;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_19;
  (Wrd16.Obj) = ((Wrd20.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_18)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_17;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd38.Lng))))
    goto label_17;
  (Wrd32.Obj) = ((Wrd36.pObj) [1]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_16)
  (Wrd55.Obj) = (Rsp [2]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 10))
    goto label_15;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd54.Lng))))
    goto label_15;
  (Wrd46.Obj) = ((Wrd52.pObj) [3]);

DEFLABEL (label_14)
  (Rsp [2]) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_8]));

DEFLABEL (label_15)
  (Wrd57.Obj) = (Rsp [2]);
  (Wrd58.Obj) = (current_block [OBJECT_93_3]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_7]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 2);

DEFLABEL (label_9)
  (Wrd46.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_93_2]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_6]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.Obj) = (current_block [OBJECT_93_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_5]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_94_4 3
#define LABEL_94_5 5
#define LABEL_94_7 7
#define LABEL_94_6 9
#define ENVIRONMENT_LABEL_94_3 20
#define DEBUGGING_LABEL_94_2 19
#define OBJECT_94_0 18
#define EXECUTE_CACHE_94_9 11
#define EXECUTE_CACHE_94_8 13
#define FREE_REFERENCE_94_1 16
#define FREE_REFERENCE_94_0 17
#define FREE_REFERENCES_LABEL_94_0 10
#define NUMBER_OF_LINKER_SECTIONS_94_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_94 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_94_4);
      goto maybe_signal_io_thread_events_1;

    case 1:
      current_block = (Rpc - LABEL_94_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_94_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_94_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (maybe_signal_io_thread_events_6)
DEFLABEL (maybe_signal_io_thread_events_1)
  INTERRUPT_CHECK (26, LABEL_94_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_94_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_11;
  Wrd5 = Wrd9;

DEFLABEL (label_10)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_7;
  Rvl = (current_block [OBJECT_94_0]);
  goto pop_return;

DEFLABEL (label_7)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_94_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_9;
  Wrd16 = Wrd20;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_94_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_9]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94_7])), (Wrd17.pObj));

DEFLABEL (label_4)
  (Wrd16.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_95_4 3
#define LABEL_95_6 5
#define LABEL_95_5 7
#define LABEL_95_7 9
#define LABEL_95_8 11
#define TAG_95_9 4
#define LABEL_95_10 13
#define TAG_95_11 5
#define LABEL_95_12 15
#define TAG_95_13 6
#define LABEL_95_15 17
#define LABEL_95_16 19
#define LABEL_95_18 21
#define LABEL_95_20 23
#define LABEL_95_22 25
#define LABEL_95_23 27
#define TAG_95_24 12
#define LABEL_95_26 29
#define LABEL_95_27 31
#define LABEL_95_28 33
#define TAG_95_29 15
#define ENVIRONMENT_LABEL_95_3 56
#define DEBUGGING_LABEL_95_2 55
#define OBJECT_95_5 54
#define OBJECT_95_4 53
#define OBJECT_95_3 52
#define OBJECT_95_2 51
#define OBJECT_95_1 50
#define OBJECT_95_0 49
#define EXECUTE_CACHE_95_30 35
#define EXECUTE_CACHE_95_25 37
#define EXECUTE_CACHE_95_21 39
#define EXECUTE_CACHE_95_19 41
#define EXECUTE_CACHE_95_17 43
#define EXECUTE_CACHE_95_14 45
#define FREE_REFERENCE_95_0 48
#define FREE_REFERENCES_LABEL_95_0 34
#define NUMBER_OF_LINKER_SECTIONS_95_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_95 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd45;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_95_4);
      goto block_on_io_descriptor_19;

    case 1:
      current_block = (Rpc - LABEL_95_6);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_95_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_95_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_95_8);
      goto lambda_24;

    case 5:
      current_block = (Rpc - LABEL_95_10);
      goto lambda_25;

    case 6:
      current_block = (Rpc - LABEL_95_12);
      goto lambda_26;

    case 7:
      current_block = (Rpc - LABEL_95_15);
      goto continuation_16;

    case 8:
      current_block = (Rpc - LABEL_95_16);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_95_18);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_95_20);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_95_22);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_95_23);
      goto lambda_27;

    case 13:
      current_block = (Rpc - LABEL_95_26);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_95_27);
      goto continuation_7;

    case 15:
      current_block = (Rpc - LABEL_95_28);
      goto lambda_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_on_io_descriptor_23)
DEFLABEL (block_on_io_descriptor_19)
  INTERRUPT_CHECK (26, LABEL_95_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_95_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_30;
  Wrd8 = Wrd12;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_95_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd9.pObj) = (& (Rhp [-1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd15.pObj) = (& (Rhp [-1]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_95_1]);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd21.pObj) = (& (Rhp [-1]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_95_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_95_8])));
  Rhp += 5;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  Wrd35 = Wrd26;
  (Wrd36.Obj) = (Rsp [6]);
  ((Wrd35.pObj) [2]) = (Wrd36.Obj);
  (Wrd34.Obj) = (Rsp [5]);
  ((Wrd35.pObj) [3]) = (Wrd34.Obj);
  ((Wrd35.pObj) [4]) = (Wrd10.Obj);
  ((Wrd35.pObj) [5]) = (Wrd16.Obj);
  ((Wrd35.pObj) [6]) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd39.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_95_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_95_10])));
  Rhp += 2;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd39.pObj)));
  Wrd42 = Wrd39;
  ((Wrd42.pObj) [2]) = (Wrd10.Obj);
  ((Wrd42.pObj) [3]) = (Wrd16.Obj);
  (Rsp [2]) = (Wrd38.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd46.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_95_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_95_12])));
  Rhp += 1;
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd46.pObj)));
  ((Wrd46.pObj) [2]) = (Wrd22.Obj);
  (Rsp [1]) = (Wrd45.Obj);
  (Rsp [0]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_14]));

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_95_6])), (Wrd9.pObj));

DEFLABEL (label_21)
  (Wrd8.Obj) = Rvl;
  goto label_29;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_95_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_0]), 1);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_95_15);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_95_8);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_17]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_95_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_95_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_95_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_95_23])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd12 = Wrd11;
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [6]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd19.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_25]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_95_22);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [5]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  ((Wrd9.pObj) [0]) = Rvl;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_27]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_95_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_95_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_95_28])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd17 = Wrd16;
  (Wrd20.Obj) = ((Wrd7.pObj) [6]);
  ((Wrd17.pObj) [2]) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_95_3]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_95_4]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_25]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_95_27);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [4]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  ((Wrd9.pObj) [0]) = Rvl;
  Rsp = (& (Rsp [1]));
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_30]));

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_95_10);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_19]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_95_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_19]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_95_26);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_30]));

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_95_12);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_21]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_95_20);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  Rvl = ((Wrd9.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_95_23);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [0]) = (Wrd9.Obj);
  Rvl = (current_block [OBJECT_95_5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_95_28);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = (current_block [OBJECT_95_4]);
  ((Wrd8.pObj) [0]) = (Wrd9.Obj);
  Rvl = (current_block [OBJECT_95_5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_96_4 3
#define LABEL_96_5 5
#define LABEL_96_6 7
#define ENVIRONMENT_LABEL_96_3 17
#define DEBUGGING_LABEL_96_2 16
#define OBJECT_96_2 15
#define OBJECT_96_1 14
#define OBJECT_96_0 13
#define EXECUTE_CACHE_96_8 9
#define EXECUTE_CACHE_96_7 11
#define FREE_REFERENCES_LABEL_96_0 8
#define NUMBER_OF_LINKER_SECTIONS_96_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_96 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_96_4);
      goto Z__maybe_deregister_io_thread_event_3;

    case 1:
      current_block = (Rpc - LABEL_96_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_96_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__maybe_deregister_io_thread_event_7)
DEFLABEL (Z__maybe_deregister_io_thread_event_3)
  INTERRUPT_CHECK (26, LABEL_96_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_10;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_10;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_9)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_96_6);
  (Wrd5.Obj) = (* (Rsp++));
  if (Rvl == (Wrd5.Obj))
    goto label_8;
  Rvl = (current_block [OBJECT_96_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_8]));

DEFLABEL (label_10)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_96_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_97_4 3
#define ENVIRONMENT_LABEL_97_3 10
#define DEBUGGING_LABEL_97_2 9
#define OBJECT_97_1 8
#define OBJECT_97_0 7
#define EXECUTE_CACHE_97_5 5
#define FREE_REFERENCES_LABEL_97_0 4
#define NUMBER_OF_LINKER_SECTIONS_97_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_97 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_97_4);
      goto permanently_register_io_thread_event_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (permanently_register_io_thread_event_3)
DEFLABEL (permanently_register_io_thread_event_0)
  INTERRUPT_CHECK (26, LABEL_97_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_97_0]);
  (Rsp [4]) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_97_1]);
  (Rsp [5]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_98_4 3
#define ENVIRONMENT_LABEL_98_3 9
#define DEBUGGING_LABEL_98_2 8
#define OBJECT_98_0 7
#define EXECUTE_CACHE_98_5 5
#define FREE_REFERENCES_LABEL_98_0 4
#define NUMBER_OF_LINKER_SECTIONS_98_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_98 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_98_4);
      goto register_io_thread_event_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_io_thread_event_3)
DEFLABEL (register_io_thread_event_0)
  INTERRUPT_CHECK (26, LABEL_98_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd8.Obj);
  (Rsp [4]) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_98_0]);
  (Rsp [5]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_99_4 3
#define LABEL_99_5 5
#define LABEL_99_9 7
#define LABEL_99_7 9
#define LABEL_99_12 11
#define LABEL_99_11 13
#define LABEL_99_13 15
#define LABEL_99_15 17
#define LABEL_99_17 19
#define ENVIRONMENT_LABEL_99_3 36
#define DEBUGGING_LABEL_99_2 35
#define OBJECT_99_1 34
#define OBJECT_99_0 33
#define EXECUTE_CACHE_99_16 21
#define EXECUTE_CACHE_99_14 23
#define EXECUTE_CACHE_99_10 25
#define EXECUTE_CACHE_99_8 27
#define EXECUTE_CACHE_99_6 29
#define FREE_REFERENCE_99_0 32
#define FREE_REFERENCES_LABEL_99_0 20
#define NUMBER_OF_LINKER_SECTIONS_99_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_99 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_99_4);
      goto register_io_thread_event_1_11;

    case 1:
      current_block = (Rpc - LABEL_99_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_99_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_99_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_99_12);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_99_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_99_13);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_99_15);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_99_17);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_io_thread_event_1_15)
DEFLABEL (register_io_thread_event_1_11)
  INTERRUPT_CHECK (26, LABEL_99_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_99_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_99_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_99_0]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_99_9);

DEFLABEL (label_18)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_99_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_17;
  Wrd10 = Wrd14;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_1]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_99_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_99_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_99_15);
  (Wrd6.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_1]), 1);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_99_17);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_99_12])), (Wrd11.pObj));

DEFLABEL (label_13)
  (Wrd10.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_100_4 3
#define LABEL_100_7 5
#define LABEL_100_5 7
#define LABEL_100_10 9
#define LABEL_100_9 11
#define LABEL_100_11 13
#define LABEL_100_13 15
#define LABEL_100_15 17
#define ENVIRONMENT_LABEL_100_3 33
#define DEBUGGING_LABEL_100_2 32
#define OBJECT_100_2 31
#define OBJECT_100_1 30
#define OBJECT_100_0 29
#define EXECUTE_CACHE_100_14 19
#define EXECUTE_CACHE_100_12 21
#define EXECUTE_CACHE_100_8 23
#define EXECUTE_CACHE_100_6 25
#define FREE_REFERENCE_100_0 28
#define FREE_REFERENCES_LABEL_100_0 18
#define NUMBER_OF_LINKER_SECTIONS_100_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_100 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_100_4);
      goto deregister_io_thread_event_8;

    case 1:
      current_block = (Rpc - LABEL_100_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_100_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_100_10);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_100_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_100_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_100_13);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_100_15);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (deregister_io_thread_event_12)
DEFLABEL (deregister_io_thread_event_8)
  INTERRUPT_CHECK (26, LABEL_100_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_100_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_100_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_100_1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_100_7);

DEFLABEL (label_15)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_100_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_14;
  Wrd10 = Wrd14;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_2]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_100_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_100_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_100_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_2]), 1);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_100_15);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_100_10])), (Wrd11.pObj));

DEFLABEL (label_10)
  (Wrd10.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_101_4 3
#define LABEL_101_5 5
#define LABEL_101_8 7
#define LABEL_101_7 9
#define LABEL_101_10 11
#define LABEL_101_11 13
#define LABEL_101_12 15
#define LABEL_101_13 17
#define LABEL_101_14 19
#define LABEL_101_15 21
#define LABEL_101_16 23
#define LABEL_101_17 25
#define LABEL_101_18 27
#define LABEL_101_20 29
#define LABEL_101_21 31
#define LABEL_101_22 33
#define LABEL_101_9 35
#define LABEL_101_24 37
#define LABEL_101_26 39
#define ENVIRONMENT_LABEL_101_3 65
#define DEBUGGING_LABEL_101_2 64
#define OBJECT_101_8 63
#define OBJECT_101_7 62
#define OBJECT_101_6 61
#define OBJECT_101_5 60
#define OBJECT_101_4 59
#define OBJECT_101_3 58
#define OBJECT_101_2 57
#define OBJECT_101_1 56
#define OBJECT_101_0 55
#define EXECUTE_CACHE_101_25 41
#define EXECUTE_CACHE_101_23 43
#define EXECUTE_CACHE_101_19 45
#define EXECUTE_CACHE_101_6 47
#define FREE_REFERENCE_101_2 50
#define FREE_REFERENCE_101_1 51
#define FREE_REFERENCE_101_0 52
#define FREE_ASSIGNMENT_101_0 54
#define FREE_REFERENCES_LABEL_101_0 40
#define NUMBER_OF_LINKER_SECTIONS_101_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_101 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd50;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd73;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd70;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd129;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd113;
  machine_word Wrd147;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd141;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd148;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd95;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd81;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd67;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd33;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
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
      current_block = (Rpc - LABEL_101_4);
      goto deregister_io_descriptor_events_21;

    case 1:
      current_block = (Rpc - LABEL_101_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_101_8);
      goto label_23;

    case 3:
      current_block = (Rpc - LABEL_101_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_101_10);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_101_11);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_101_12);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_101_13);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_101_14);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_101_15);
      goto label_30;

    case 10:
      current_block = (Rpc - LABEL_101_16);
      goto label_32;

    case 11:
      current_block = (Rpc - LABEL_101_17);
      goto label_31;

    case 12:
      current_block = (Rpc - LABEL_101_18);
      goto label_28;

    case 13:
      current_block = (Rpc - LABEL_101_20);
      goto label_27;

    case 14:
      current_block = (Rpc - LABEL_101_21);
      goto loop_15;

    case 15:
      current_block = (Rpc - LABEL_101_22);
      goto label_25;

    case 16:
      current_block = (Rpc - LABEL_101_9);
      goto continuation_2;

    case 17:
      current_block = (Rpc - LABEL_101_24);
      goto continuation_17;

    case 18:
      current_block = (Rpc - LABEL_101_26);
      goto continuation_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (deregister_io_descriptor_events_34)
DEFLABEL (deregister_io_descriptor_events_21)
  INTERRUPT_CHECK (26, LABEL_101_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_101_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_101_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_101_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_40;
  Wrd8 = Wrd12;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_1]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_101_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_101_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_38;
  Wrd8 = Wrd12;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd8.Obj);
  goto loop_15;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_101_9);

DEFLABEL (label_36)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_25]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_101_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_1]), 1);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_101_26);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_101_10])), (Wrd9.pObj));

DEFLABEL (label_24)
  (Wrd8.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_101_8])), (Wrd9.pObj));

DEFLABEL (label_23)
  (Wrd8.Obj) = Rvl;
  goto label_39;

DEFLABEL (loop_35)
DEFLABEL (loop_15)
  INTERRUPT_CHECK (26, LABEL_101_21);
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_64;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_12]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_63;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd21.Lng))))
    goto label_63;
  (Wrd15.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_62)
  (Wrd29.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_23]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_101_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 62))
    goto label_61;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd41.Lng))))
    goto label_61;
  (Wrd33.Obj) = ((Wrd39.pObj) [3]);

DEFLABEL (label_60)
  (Wrd49.Obj) = (Rsp [4]);
  if ((Wrd49.Obj) == (Wrd33.Obj))
    goto label_44;

DEFLABEL (label_43)
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 62))
    goto label_42;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd58.Lng))))
    goto label_42;
  (Wrd50.Obj) = ((Wrd56.pObj) [7]);

DEFLABEL (label_41)
  (Rsp [0]) = (Wrd50.Obj);
  goto loop_15;

DEFLABEL (label_42)
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.Obj) = (current_block [OBJECT_101_6]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_20]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_3]), 2);

DEFLABEL (label_27)
  (Wrd50.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd67.Obj) = (Rsp [3]);
  if ((Wrd67.Obj) == (current_block [OBJECT_101_4]))
    goto label_57;
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_11]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd74.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_101_2]));
  (Wrd77.Obj) = ((Wrd74.pObj) [0]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if ((Wrd78.uLng) == 50)
    goto label_59;
  Wrd73 = Wrd77;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd73.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_19]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_101_11);

DEFLABEL (label_57)
  (Wrd88.Obj) = (Rsp [0]);
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if (! ((Wrd89.uLng) == 62))
    goto label_56;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd87.Lng))))
    goto label_56;
  (Wrd81.Obj) = ((Wrd85.pObj) [6]);
  (* (--Rsp)) = (Wrd81.Obj);

DEFLABEL (label_55)
  (Wrd104.Obj) = (Rsp [1]);
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if (! ((Wrd105.uLng) == 62))
    goto label_54;
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd104.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (Wrd103.Lng) = (FIXNUM_TO_LONG (Wrd102.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd103.Lng))))
    goto label_54;
  (Wrd95.Obj) = ((Wrd101.pObj) [7]);

DEFLABEL (label_53)
  (Rsp [1]) = (Wrd95.Obj);
  (Wrd111.Obj) = (Rsp [0]);
  if ((Wrd111.Obj) == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd141.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd141.uLng) == 62))
    goto label_49;
  (Wrd137.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd138.Obj) = ((Wrd137.pObj) [0]);
  (Wrd139.Lng) = (FIXNUM_TO_LONG (Wrd138.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd139.Lng))))
    goto label_49;
  ((Wrd137.pObj) [7]) = (Wrd95.Obj);

DEFLABEL (label_48)
  (Wrd113.Obj) = (Rsp [1]);
  if ((Wrd113.Obj) == ((SCHEME_OBJECT) 0))
    goto label_47;
  (* (--Rsp)) = (Wrd113.Obj);
  (Wrd116.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd116.Obj);
  (Wrd117.Obj) = (current_block [OBJECT_101_5]);
  (Rsp [1]) = (Wrd117.Obj);
  (Wrd129.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd129.uLng) == 62)
    goto label_46;

DEFLABEL (label_45)
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_7]), 3);

DEFLABEL (label_46)
  (Wrd125.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd126.Obj) = ((Wrd125.pObj) [0]);
  (Wrd127.Lng) = (FIXNUM_TO_LONG (Wrd126.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd127.Lng))))
    goto label_45;
  ((Wrd125.pObj) [6]) = (Wrd116.Obj);
  Rsp = (& (Rsp [4]));
  goto label_36;

DEFLABEL (label_47)
  Rsp = (& (Rsp [3]));
  goto label_36;

DEFLABEL (label_49)
  (Wrd142.Obj) = (Rsp [0]);
  (Wrd143.Obj) = (current_block [OBJECT_101_6]);
  (Wrd144.Obj) = (Rsp [1]);
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_17]))));
  (* (--Rsp)) = (Wrd147.Obj);
  (* (--Rsp)) = (Wrd144.Obj);
  (* (--Rsp)) = (Wrd143.Obj);
  (* (--Rsp)) = (Wrd142.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_7]), 3);

DEFLABEL (label_31)
  goto label_48;

DEFLABEL (label_50)
  (Wrd148.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_101_0]));
  (Wrd156.Obj) = ((Wrd148.pObj) [0]);
  (Wrd157.uLng) = (OBJECT_TYPE (Wrd156.Obj));
  if ((Wrd157.uLng) == 50)
    goto label_52;

DEFLABEL (label_51)
  ((Wrd148.pObj) [0]) = (Wrd95.Obj);
  goto label_48;

DEFLABEL (label_52)
  if ((Wrd156.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_51;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_101_16])), (Wrd148.pObj), (Wrd95.Obj));

DEFLABEL (label_32)
  goto label_48;

DEFLABEL (label_54)
  (Wrd106.Obj) = (Rsp [1]);
  (Wrd107.Obj) = (current_block [OBJECT_101_6]);
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_15]))));
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_3]), 2);

DEFLABEL (label_30)
  (Wrd95.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd90.Obj) = (Rsp [0]);
  (Wrd91.Obj) = (current_block [OBJECT_101_5]);
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_14]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_3]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_101_18])), (Wrd74.pObj));

DEFLABEL (label_28)
  (Wrd73.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd45.Obj) = (current_block [OBJECT_101_2]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_13]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_3]), 2);

DEFLABEL (label_26)
  (Wrd33.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (current_block [OBJECT_101_8]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_22]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_3]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_64)
  Rsp = (& (Rsp [2]));
  goto label_36;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_102_4 3
#define LABEL_102_5 5
#define LABEL_102_6 7
#define LABEL_102_9 9
#define LABEL_102_8 11
#define LABEL_102_11 13
#define LABEL_102_12 15
#define LABEL_102_13 17
#define LABEL_102_15 19
#define LABEL_102_16 21
#define LABEL_102_17 23
#define LABEL_102_19 25
#define LABEL_102_20 27
#define LABEL_102_21 29
#define LABEL_102_25 31
#define LABEL_102_22 33
#define TAG_102_23 15
#define LABEL_102_26 35
#define LABEL_102_14 37
#define LABEL_102_27 39
#define LABEL_102_28 41
#define LABEL_102_29 43
#define LABEL_102_30 45
#define LABEL_102_31 47
#define ENVIRONMENT_LABEL_102_3 70
#define DEBUGGING_LABEL_102_2 69
#define OBJECT_102_6 68
#define OBJECT_102_5 67
#define OBJECT_102_4 66
#define OBJECT_102_3 65
#define OBJECT_102_2 64
#define OBJECT_102_1 63
#define OBJECT_102_0 62
#define EXECUTE_CACHE_102_24 49
#define EXECUTE_CACHE_102_18 51
#define EXECUTE_CACHE_102_10 53
#define EXECUTE_CACHE_102_7 55
#define FREE_REFERENCE_102_1 58
#define FREE_REFERENCE_102_0 59
#define FREE_ASSIGNMENT_102_0 61
#define FREE_REFERENCES_LABEL_102_0 48
#define NUMBER_OF_LINKER_SECTIONS_102_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_102 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd74;
  machine_word Wrd46;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd86;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd72;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd56;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd53;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_102_4);
      goto Z__deregister_io_descriptor_28;

    case 1:
      current_block = (Rpc - LABEL_102_5);
      goto label_30;

    case 2:
      current_block = (Rpc - LABEL_102_6);
      goto dloop_26;

    case 3:
      current_block = (Rpc - LABEL_102_9);
      goto label_31;

    case 4:
      current_block = (Rpc - LABEL_102_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_102_11);
      goto label_33;

    case 6:
      current_block = (Rpc - LABEL_102_12);
      goto label_32;

    case 7:
      current_block = (Rpc - LABEL_102_13);
      goto tloop_15;

    case 8:
      current_block = (Rpc - LABEL_102_15);
      goto label_36;

    case 9:
      current_block = (Rpc - LABEL_102_16);
      goto label_37;

    case 10:
      current_block = (Rpc - LABEL_102_17);
      goto label_38;

    case 11:
      current_block = (Rpc - LABEL_102_19);
      goto label_34;

    case 12:
      current_block = (Rpc - LABEL_102_20);
      goto label_35;

    case 13:
      current_block = (Rpc - LABEL_102_21);
      goto continuation_12;

    case 14:
      current_block = (Rpc - LABEL_102_25);
      goto label_39;

    case 15:
      current_block = (Rpc - LABEL_102_22);
      goto lambda_49;

    case 16:
      current_block = (Rpc - LABEL_102_26);
      goto continuation_22;

    case 17:
      current_block = (Rpc - LABEL_102_14);
      goto continuation_19;

    case 18:
      current_block = (Rpc - LABEL_102_27);
      goto label_40;

    case 19:
      current_block = (Rpc - LABEL_102_28);
      goto label_41;

    case 20:
      current_block = (Rpc - LABEL_102_29);
      goto label_44;

    case 21:
      current_block = (Rpc - LABEL_102_30);
      goto label_43;

    case 22:
      current_block = (Rpc - LABEL_102_31);
      goto label_42;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__deregister_io_descriptor_46)
DEFLABEL (Z__deregister_io_descriptor_28)
  INTERRUPT_CHECK (26, LABEL_102_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_102_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_51;
  Wrd5 = Wrd9;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd5.Obj);
  goto dloop_26;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_102_5])), (Wrd6.pObj));

DEFLABEL (label_30)
  (Wrd5.Obj) = Rvl;
  goto label_50;

DEFLABEL (dloop_47)
DEFLABEL (dloop_26)
  INTERRUPT_CHECK (26, LABEL_102_6);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_52;
  Rsp = (& (Rsp [1]));
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_7]));

DEFLABEL (label_52)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_59;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_59;
  (Wrd12.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_58)
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_102_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_54;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_54;
  (Wrd9.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_53)
  goto tloop_15;

DEFLABEL (label_54)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_102_3]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_12]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_1]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_55)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_57;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd31.Lng))))
    goto label_57;
  (Wrd23.Obj) = ((Wrd29.pObj) [7]);

DEFLABEL (label_56)
  (Rsp [0]) = (Wrd23.Obj);
  goto dloop_26;

DEFLABEL (label_57)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Obj) = (current_block [OBJECT_102_2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_11]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_1]), 2);

DEFLABEL (label_33)
  (Wrd23.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_102_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (tloop_48)
DEFLABEL (tloop_15)
  INTERRUPT_CHECK (26, LABEL_102_13);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_69;
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_68;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_68;
  (Wrd9.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_67)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_66;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd31.Lng))))
    goto label_66;
  (Wrd25.Obj) = ((Wrd29.pObj) [3]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_65)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_21]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [2]);
  if ((Wrd42.Obj) == ((SCHEME_OBJECT) 0))
    goto label_61;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd45.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_102_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_102_22])));
  Rhp += 1;
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd45.pObj)));
  ((Wrd45.pObj) [2]) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  goto label_60;

DEFLABEL (label_61)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_60)
DEFLABEL (label_64)
  (Wrd48.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_24]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_102_21);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_63;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_63;
  (Wrd5.Obj) = ((Wrd11.pObj) [7]);

DEFLABEL (label_62)
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  goto tloop_15;

DEFLABEL (label_63)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_102_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_25]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_1]), 2);

DEFLABEL (label_39)
  (Wrd5.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_66)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_102_4]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_20]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_1]), 2);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_102_3]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_19]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_1]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_69)
  Rsp = (& (Rsp [1]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_14]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 62))
    goto label_90;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd62.Lng))))
    goto label_90;
  (Wrd56.Obj) = ((Wrd60.pObj) [3]);
  (* (--Rsp)) = (Wrd56.Obj);

DEFLABEL (label_89)
  (Wrd79.Obj) = (Rsp [2]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd80.uLng) == 62))
    goto label_88;
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd77.Obj) = ((Wrd76.pObj) [0]);
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd77.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd78.Lng))))
    goto label_88;
  (Wrd72.Obj) = ((Wrd76.pObj) [2]);
  (* (--Rsp)) = (Wrd72.Obj);

DEFLABEL (label_87)
  (Wrd87.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_102_1]));
  (Wrd90.Obj) = ((Wrd87.pObj) [0]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if ((Wrd91.uLng) == 50)
    goto label_86;
  Wrd86 = Wrd90;

DEFLABEL (label_85)
  (* (--Rsp)) = (Wrd86.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_18]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_102_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_84;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_84;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_83)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_82;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd32.Lng))))
    goto label_82;
  (Wrd26.Obj) = ((Wrd30.pObj) [6]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_81)
  (Wrd40.Obj) = (Rsp [0]);
  if ((Wrd40.Obj) == ((SCHEME_OBJECT) 0))
    goto label_78;
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd86.uLng) == 62))
    goto label_77;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [0]);
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd83.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd84.Lng))))
    goto label_77;
  (Wrd78.Obj) = (Rsp [1]);
  ((Wrd82.pObj) [7]) = (Wrd78.Obj);

DEFLABEL (label_76)
  (Wrd42.Obj) = (Rsp [1]);
  if ((Wrd42.Obj) == ((SCHEME_OBJECT) 0))
    goto label_75;
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd45.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd45.Obj);
  (Wrd46.Obj) = (current_block [OBJECT_102_5]);
  (Rsp [1]) = (Wrd46.Obj);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd74.uLng) == 62)
    goto label_71;

DEFLABEL (label_70)
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_6]), 3);

DEFLABEL (label_71)
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [0]);
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd72.Lng))))
    goto label_70;
  ((Wrd70.pObj) [6]) = (Wrd45.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_74)
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 62))
    goto label_73;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd56.Lng))))
    goto label_73;
  (Wrd48.Obj) = ((Wrd54.pObj) [7]);

DEFLABEL (label_72)
  (Rsp [0]) = (Wrd48.Obj);
  goto dloop_26;

DEFLABEL (label_73)
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.Obj) = (current_block [OBJECT_102_2]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_31]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_1]), 2);

DEFLABEL (label_42)
  (Wrd48.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  Rsp = (& (Rsp [3]));
  goto label_74;

DEFLABEL (label_77)
  (Wrd87.Obj) = (Rsp [0]);
  (Wrd88.Obj) = (current_block [OBJECT_102_2]);
  (Wrd89.Obj) = (Rsp [1]);
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_30]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_6]), 3);

DEFLABEL (label_43)
  goto label_76;

DEFLABEL (label_78)
  (Wrd93.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_102_0]));
  (Wrd94.Obj) = (Rsp [1]);
  (Wrd101.Obj) = ((Wrd93.pObj) [0]);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if ((Wrd102.uLng) == 50)
    goto label_80;

DEFLABEL (label_79)
  ((Wrd93.pObj) [0]) = (Wrd94.Obj);
  goto label_76;

DEFLABEL (label_80)
  if ((Wrd101.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_79;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_102_29])), (Wrd93.pObj), (Wrd94.Obj));

DEFLABEL (label_44)
  goto label_76;

DEFLABEL (label_82)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_102_5]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_28]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_1]), 2);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_102_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_27]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_1]), 2);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_102_17])), (Wrd87.pObj));

DEFLABEL (label_38)
  (Wrd86.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd81.Obj) = (Rsp [2]);
  (Wrd82.Obj) = (current_block [OBJECT_102_0]);
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_16]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_1]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.Obj) = (current_block [OBJECT_102_4]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_15]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_1]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_89;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_102_26);
  goto label_74;

DEFLABEL (lambda_49)
  CLOSURE_HEADER (LABEL_102_22);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_103_4 3
#define LABEL_103_5 5
#define LABEL_103_8 7
#define LABEL_103_9 9
#define LABEL_103_10 11
#define LABEL_103_11 13
#define LABEL_103_12 15
#define LABEL_103_13 17
#define LABEL_103_14 19
#define LABEL_103_15 21
#define LABEL_103_16 23
#define LABEL_103_17 25
#define LABEL_103_19 27
#define LABEL_103_20 29
#define LABEL_103_21 31
#define LABEL_103_22 33
#define LABEL_103_23 35
#define LABEL_103_24 37
#define LABEL_103_25 39
#define LABEL_103_26 41
#define LABEL_103_27 43
#define LABEL_103_28 45
#define LABEL_103_29 47
#define LABEL_103_30 49
#define LABEL_103_7 51
#define LABEL_103_31 53
#define LABEL_103_32 55
#define LABEL_103_34 57
#define ENVIRONMENT_LABEL_103_3 82
#define DEBUGGING_LABEL_103_2 81
#define OBJECT_103_8 80
#define OBJECT_103_7 79
#define OBJECT_103_6 78
#define OBJECT_103_5 77
#define OBJECT_103_4 76
#define OBJECT_103_3 75
#define OBJECT_103_2 74
#define OBJECT_103_1 73
#define OBJECT_103_0 72
#define EXECUTE_CACHE_103_35 59
#define EXECUTE_CACHE_103_33 61
#define EXECUTE_CACHE_103_18 63
#define EXECUTE_CACHE_103_6 65
#define FREE_REFERENCE_103_1 68
#define FREE_REFERENCE_103_0 69
#define FREE_ASSIGNMENT_103_0 71
#define FREE_REFERENCES_LABEL_103_0 58
#define NUMBER_OF_LINKER_SECTIONS_103_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_103 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd5;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd74;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd77;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd94;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd125;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd46;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd156;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd173;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd159;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd190;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd180;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd207;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd202;
  machine_word Wrd193;
  machine_word Wrd199;
  machine_word Wrd198;
  machine_word Wrd197;
  machine_word Wrd201;
  machine_word Wrd200;
  machine_word Wrd141;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd128;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd42;
  machine_word Wrd224;
  machine_word Wrd221;
  machine_word Wrd220;
  machine_word Wrd219;
  machine_word Wrd210;
  machine_word Wrd216;
  machine_word Wrd215;
  machine_word Wrd214;
  machine_word Wrd218;
  machine_word Wrd217;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd261;
  machine_word Wrd255;
  machine_word Wrd260;
  machine_word Wrd259;
  machine_word Wrd256;
  machine_word Wrd253;
  machine_word Wrd249;
  machine_word Wrd248;
  machine_word Wrd241;
  machine_word Wrd240;
  machine_word Wrd276;
  machine_word Wrd273;
  machine_word Wrd272;
  machine_word Wrd264;
  machine_word Wrd269;
  machine_word Wrd268;
  machine_word Wrd267;
  machine_word Wrd270;
  machine_word Wrd233;
  machine_word Wrd234;
  machine_word Wrd239;
  machine_word Wrd238;
  machine_word Wrd235;
  machine_word Wrd226;
  machine_word Wrd231;
  machine_word Wrd230;
  machine_word Wrd227;
  machine_word Wrd293;
  machine_word Wrd289;
  machine_word Wrd288;
  machine_word Wrd285;
  machine_word Wrd284;
  machine_word Wrd283;
  machine_word Wrd287;
  machine_word Wrd286;
  machine_word Wrd310;
  machine_word Wrd306;
  machine_word Wrd305;
  machine_word Wrd302;
  machine_word Wrd301;
  machine_word Wrd300;
  machine_word Wrd304;
  machine_word Wrd303;
  machine_word Wrd327;
  machine_word Wrd324;
  machine_word Wrd323;
  machine_word Wrd322;
  machine_word Wrd319;
  machine_word Wrd318;
  machine_word Wrd317;
  machine_word Wrd321;
  machine_word Wrd320;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_103_4);
      goto Z__register_io_thread_event_29;

    case 1:
      current_block = (Rpc - LABEL_103_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_103_8);
      goto label_31;

    case 3:
      current_block = (Rpc - LABEL_103_9);
      goto continuation_19;

    case 4:
      current_block = (Rpc - LABEL_103_10);
      goto label_52;

    case 5:
      current_block = (Rpc - LABEL_103_11);
      goto label_51;

    case 6:
      current_block = (Rpc - LABEL_103_12);
      goto label_50;

    case 7:
      current_block = (Rpc - LABEL_103_13);
      goto label_45;

    case 8:
      current_block = (Rpc - LABEL_103_14);
      goto label_46;

    case 9:
      current_block = (Rpc - LABEL_103_15);
      goto label_49;

    case 10:
      current_block = (Rpc - LABEL_103_16);
      goto label_47;

    case 11:
      current_block = (Rpc - LABEL_103_17);
      goto label_48;

    case 12:
      current_block = (Rpc - LABEL_103_19);
      goto continuation_4;

    case 13:
      current_block = (Rpc - LABEL_103_20);
      goto label_34;

    case 14:
      current_block = (Rpc - LABEL_103_21);
      goto label_44;

    case 15:
      current_block = (Rpc - LABEL_103_22);
      goto label_40;

    case 16:
      current_block = (Rpc - LABEL_103_23);
      goto label_43;

    case 17:
      current_block = (Rpc - LABEL_103_24);
      goto label_42;

    case 18:
      current_block = (Rpc - LABEL_103_25);
      goto label_41;

    case 19:
      current_block = (Rpc - LABEL_103_26);
      goto label_36;

    case 20:
      current_block = (Rpc - LABEL_103_27);
      goto label_39;

    case 21:
      current_block = (Rpc - LABEL_103_28);
      goto label_38;

    case 22:
      current_block = (Rpc - LABEL_103_29);
      goto label_37;

    case 23:
      current_block = (Rpc - LABEL_103_30);
      goto label_35;

    case 24:
      current_block = (Rpc - LABEL_103_7);
      goto continuation_1;

    case 25:
      current_block = (Rpc - LABEL_103_31);
      goto loop_26;

    case 26:
      current_block = (Rpc - LABEL_103_32);
      goto label_33;

    case 27:
      current_block = (Rpc - LABEL_103_34);
      goto label_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__register_io_thread_event_54)
DEFLABEL (Z__register_io_thread_event_29)
  INTERRUPT_CHECK (26, LABEL_103_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_103_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_103_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_103_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_58;
  Wrd8 = Wrd12;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd8.Obj);
  goto loop_26;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_103_7);

DEFLABEL (label_56)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_103_8])), (Wrd9.pObj));

DEFLABEL (label_31)
  (Wrd8.Obj) = Rvl;
  goto label_57;

DEFLABEL (loop_55)
DEFLABEL (loop_26)
  INTERRUPT_CHECK (26, LABEL_103_31);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_89;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_88;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_88;
  (Wrd12.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_87)
  (Wrd26.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_103_35]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_103_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_86;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_86;
  (Wrd9.Obj) = ((Wrd15.pObj) [3]);

DEFLABEL (label_85)
  (Wrd25.Obj) = (Rsp [4]);
  if ((Wrd25.Obj) == (Wrd9.Obj))
    goto label_62;

DEFLABEL (label_61)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_60;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd34.Lng))))
    goto label_60;
  (Wrd26.Obj) = ((Wrd32.pObj) [7]);

DEFLABEL (label_59)
  (Rsp [0]) = (Wrd26.Obj);
  goto loop_26;

DEFLABEL (label_60)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_103_3]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_30]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_6]), 2);

DEFLABEL (label_35)
  (Wrd26.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd217.Obj) = (Rsp [2]);
  (Wrd218.uLng) = (OBJECT_TYPE (Wrd217.Obj));
  if (! ((Wrd218.uLng) == 62))
    goto label_84;
  (Wrd214.pObj) = (OBJECT_ADDRESS (Wrd217.Obj));
  (Wrd215.Obj) = ((Wrd214.pObj) [0]);
  (Wrd216.Lng) = (FIXNUM_TO_LONG (Wrd215.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd216.Lng))))
    goto label_84;
  (Wrd210.Obj) = (Rsp [0]);
  ((Wrd214.pObj) [2]) = (Wrd210.Obj);

DEFLABEL (label_83)
  (Wrd42.Obj) = (Rsp [8]);
  if ((Wrd42.Obj) == ((SCHEME_OBJECT) 0))
    goto label_74;
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 62))
    goto label_73;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd52.Lng))))
    goto label_73;
  (Wrd46.Obj) = ((Wrd50.pObj) [4]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_72)
  (Wrd118.Obj) = (Rsp [3]);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if (! ((Wrd119.uLng) == 62))
    goto label_71;
  (Wrd115.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd116.Obj) = ((Wrd115.pObj) [0]);
  (Wrd117.Lng) = (FIXNUM_TO_LONG (Wrd116.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd117.Lng))))
    goto label_71;
  ((Wrd115.pObj) [6]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_70)
  (Wrd101.Obj) = (Rsp [3]);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if (! ((Wrd102.uLng) == 62))
    goto label_69;
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd101.Obj));
  (Wrd99.Obj) = ((Wrd98.pObj) [0]);
  (Wrd100.Lng) = (FIXNUM_TO_LONG (Wrd99.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd100.Lng))))
    goto label_69;
  (Wrd94.Obj) = (Rsp [0]);
  ((Wrd98.pObj) [7]) = (Wrd94.Obj);

DEFLABEL (label_68)
  (Wrd84.Obj) = (Rsp [1]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 62))
    goto label_67;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd82.Obj) = ((Wrd81.pObj) [0]);
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd82.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd83.Lng))))
    goto label_67;
  (Wrd77.Obj) = (Rsp [3]);
  ((Wrd81.pObj) [4]) = (Wrd77.Obj);

DEFLABEL (label_66)
  (Wrd60.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (current_block [OBJECT_103_2]);
  (Rsp [1]) = (Wrd61.Obj);
  (Wrd62.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd62.Obj);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd74.uLng) == 62)
    goto label_64;

DEFLABEL (label_63)
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_1]), 3);

DEFLABEL (label_64)
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [0]);
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd72.Lng))))
    goto label_63;
  ((Wrd70.pObj) [6]) = (Wrd62.Obj);

DEFLABEL (label_65)
  Rsp = (& (Rsp [4]));
  goto label_56;

DEFLABEL (label_67)
  (Wrd86.Obj) = (Rsp [1]);
  (Wrd87.Obj) = (current_block [OBJECT_103_8]);
  (Wrd88.Obj) = (Rsp [3]);
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_29]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_1]), 3);

DEFLABEL (label_37)
  goto label_66;

DEFLABEL (label_69)
  (Wrd103.Obj) = (Rsp [3]);
  (Wrd104.Obj) = (current_block [OBJECT_103_3]);
  (Wrd105.Obj) = (Rsp [0]);
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_28]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_1]), 3);

DEFLABEL (label_38)
  goto label_68;

DEFLABEL (label_71)
  (Wrd120.Obj) = (Rsp [3]);
  (Wrd121.Obj) = (current_block [OBJECT_103_2]);
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_27]))));
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd120.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_1]), 3);

DEFLABEL (label_39)
  goto label_70;

DEFLABEL (label_73)
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.Obj) = (current_block [OBJECT_103_8]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_26]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_6]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (label_74)
  (Wrd135.Obj) = (Rsp [0]);
  (Wrd136.uLng) = (OBJECT_TYPE (Wrd135.Obj));
  if (! ((Wrd136.uLng) == 62))
    goto label_82;
  (Wrd132.pObj) = (OBJECT_ADDRESS (Wrd135.Obj));
  (Wrd133.Obj) = ((Wrd132.pObj) [0]);
  (Wrd134.Lng) = (FIXNUM_TO_LONG (Wrd133.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd134.Lng))))
    goto label_82;
  (Wrd128.Obj) = ((Wrd132.pObj) [5]);
  (* (--Rsp)) = (Wrd128.Obj);

DEFLABEL (label_81)
  (Wrd200.Obj) = (Rsp [3]);
  (Wrd201.uLng) = (OBJECT_TYPE (Wrd200.Obj));
  if (! ((Wrd201.uLng) == 62))
    goto label_80;
  (Wrd197.pObj) = (OBJECT_ADDRESS (Wrd200.Obj));
  (Wrd198.Obj) = ((Wrd197.pObj) [0]);
  (Wrd199.Lng) = (FIXNUM_TO_LONG (Wrd198.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd199.Lng))))
    goto label_80;
  (Wrd193.Obj) = (Rsp [0]);
  ((Wrd197.pObj) [6]) = (Wrd193.Obj);

DEFLABEL (label_79)
  (Wrd183.Obj) = (Rsp [3]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if (! ((Wrd184.uLng) == 62))
    goto label_78;
  (Wrd180.pObj) = (OBJECT_ADDRESS (Wrd183.Obj));
  (Wrd181.Obj) = ((Wrd180.pObj) [0]);
  (Wrd182.Lng) = (FIXNUM_TO_LONG (Wrd181.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd182.Lng))))
    goto label_78;
  ((Wrd180.pObj) [7]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_77)
  (Wrd166.Obj) = (Rsp [1]);
  (Wrd167.uLng) = (OBJECT_TYPE (Wrd166.Obj));
  if (! ((Wrd167.uLng) == 62))
    goto label_76;
  (Wrd163.pObj) = (OBJECT_ADDRESS (Wrd166.Obj));
  (Wrd164.Obj) = ((Wrd163.pObj) [0]);
  (Wrd165.Lng) = (FIXNUM_TO_LONG (Wrd164.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd165.Lng))))
    goto label_76;
  (Wrd159.Obj) = (Rsp [3]);
  ((Wrd163.pObj) [5]) = (Wrd159.Obj);

DEFLABEL (label_75)
  (Wrd142.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd142.Obj);
  (Wrd143.Obj) = (current_block [OBJECT_103_3]);
  (Rsp [1]) = (Wrd143.Obj);
  (Wrd144.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd144.Obj);
  (Wrd156.uLng) = (OBJECT_TYPE (Wrd142.Obj));
  if (! ((Wrd156.uLng) == 62))
    goto label_63;
  (Wrd152.pObj) = (OBJECT_ADDRESS (Wrd142.Obj));
  (Wrd153.Obj) = ((Wrd152.pObj) [0]);
  (Wrd154.Lng) = (FIXNUM_TO_LONG (Wrd153.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd154.Lng))))
    goto label_63;
  ((Wrd152.pObj) [7]) = (Wrd144.Obj);
  goto label_65;

DEFLABEL (label_76)
  (Wrd168.Obj) = (Rsp [1]);
  (Wrd169.Obj) = (current_block [OBJECT_103_7]);
  (Wrd170.Obj) = (Rsp [3]);
  (Wrd173.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_25]))));
  (* (--Rsp)) = (Wrd173.Obj);
  (* (--Rsp)) = (Wrd170.Obj);
  (* (--Rsp)) = (Wrd169.Obj);
  (* (--Rsp)) = (Wrd168.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_1]), 3);

DEFLABEL (label_41)
  goto label_75;

DEFLABEL (label_78)
  (Wrd185.Obj) = (Rsp [3]);
  (Wrd186.Obj) = (current_block [OBJECT_103_3]);
  (Wrd190.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_24]))));
  (* (--Rsp)) = (Wrd190.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd186.Obj);
  (* (--Rsp)) = (Wrd185.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_1]), 3);

DEFLABEL (label_42)
  goto label_77;

DEFLABEL (label_80)
  (Wrd202.Obj) = (Rsp [3]);
  (Wrd203.Obj) = (current_block [OBJECT_103_2]);
  (Wrd204.Obj) = (Rsp [0]);
  (Wrd207.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_23]))));
  (* (--Rsp)) = (Wrd207.Obj);
  (* (--Rsp)) = (Wrd204.Obj);
  (* (--Rsp)) = (Wrd203.Obj);
  (* (--Rsp)) = (Wrd202.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_1]), 3);

DEFLABEL (label_43)
  goto label_79;

DEFLABEL (label_82)
  (Wrd137.Obj) = (Rsp [0]);
  (Wrd138.Obj) = (current_block [OBJECT_103_7]);
  (Wrd141.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_22]))));
  (* (--Rsp)) = (Wrd141.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd137.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_6]), 2);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd219.Obj) = (Rsp [2]);
  (Wrd220.Obj) = (current_block [OBJECT_103_0]);
  (Wrd221.Obj) = (Rsp [0]);
  (Wrd224.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_21]))));
  (* (--Rsp)) = (Wrd224.Obj);
  (* (--Rsp)) = (Wrd221.Obj);
  (* (--Rsp)) = (Wrd220.Obj);
  (* (--Rsp)) = (Wrd219.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_1]), 3);

DEFLABEL (label_44)
  goto label_83;

DEFLABEL (label_86)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_103_5]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_20]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_6]), 2);

DEFLABEL (label_34)
  (Wrd9.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_103_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_34]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_6]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_87;

DEFLABEL (label_89)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_9]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_103_0]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_109;
  Wrd30 = Wrd34;

DEFLABEL (label_108)
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd37.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd39.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_103_33]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_103_9);
  (Rsp [0]) = Rvl;
  (Wrd320.Obj) = (Rsp [2]);
  (Wrd321.uLng) = (OBJECT_TYPE (Wrd320.Obj));
  if (! ((Wrd321.uLng) == 62))
    goto label_107;
  (Wrd317.pObj) = (OBJECT_ADDRESS (Wrd320.Obj));
  (Wrd318.Obj) = ((Wrd317.pObj) [0]);
  (Wrd319.Lng) = (FIXNUM_TO_LONG (Wrd318.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd319.Lng))))
    goto label_107;
  ((Wrd317.pObj) [2]) = Rvl;

DEFLABEL (label_106)
  (Wrd303.Obj) = (Rsp [2]);
  (Wrd304.uLng) = (OBJECT_TYPE (Wrd303.Obj));
  if (! ((Wrd304.uLng) == 62))
    goto label_105;
  (Wrd300.pObj) = (OBJECT_ADDRESS (Wrd303.Obj));
  (Wrd301.Obj) = ((Wrd300.pObj) [0]);
  (Wrd302.Lng) = (FIXNUM_TO_LONG (Wrd301.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd302.Lng))))
    goto label_105;
  ((Wrd300.pObj) [6]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_104)
  (Wrd286.Obj) = (Rsp [2]);
  (Wrd287.uLng) = (OBJECT_TYPE (Wrd286.Obj));
  if (! ((Wrd287.uLng) == 62))
    goto label_103;
  (Wrd283.pObj) = (OBJECT_ADDRESS (Wrd286.Obj));
  (Wrd284.Obj) = ((Wrd283.pObj) [0]);
  (Wrd285.Lng) = (FIXNUM_TO_LONG (Wrd284.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd285.Lng))))
    goto label_103;
  ((Wrd283.pObj) [7]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_102)
  (Wrd227.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_103_0]));
  (Wrd230.Obj) = ((Wrd227.pObj) [0]);
  (Wrd231.uLng) = (OBJECT_TYPE (Wrd230.Obj));
  if ((Wrd231.uLng) == 50)
    goto label_101;
  Wrd226 = Wrd230;

DEFLABEL (label_100)
  if ((Wrd226.Obj) == ((SCHEME_OBJECT) 0))
    goto label_96;
  (Wrd235.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_103_0]));
  (Wrd238.Obj) = ((Wrd235.pObj) [0]);
  (Wrd239.uLng) = (OBJECT_TYPE (Wrd238.Obj));
  if ((Wrd239.uLng) == 50)
    goto label_99;
  Wrd234 = Wrd238;

DEFLABEL (label_98)
  Wrd233 = Wrd234;
  (Wrd270.uLng) = (OBJECT_TYPE (Wrd234.Obj));
  if (! ((Wrd270.uLng) == 62))
    goto label_97;
  (Wrd267.pObj) = (OBJECT_ADDRESS (Wrd234.Obj));
  (Wrd268.Obj) = ((Wrd267.pObj) [0]);
  (Wrd269.Lng) = (FIXNUM_TO_LONG (Wrd268.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd269.Lng))))
    goto label_97;
  (Wrd264.Obj) = (Rsp [0]);
  ((Wrd267.pObj) [6]) = (Wrd264.Obj);

DEFLABEL (label_96)
  (Wrd240.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_103_0]));
  (Wrd241.Obj) = (Rsp [0]);
  (Wrd248.Obj) = ((Wrd240.pObj) [0]);
  (Wrd249.uLng) = (OBJECT_TYPE (Wrd248.Obj));
  if ((Wrd249.uLng) == 50)
    goto label_95;

DEFLABEL (label_94)
  ((Wrd240.pObj) [0]) = (Wrd241.Obj);

DEFLABEL (label_93)
  (Wrd253.Obj) = (Rsp [3]);
  if ((Wrd253.Obj) == (current_block [OBJECT_103_4]))
    goto label_92;
  (* (--Rsp)) = (Wrd253.Obj);
  (Wrd256.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_103_1]));
  (Wrd259.Obj) = ((Wrd256.pObj) [0]);
  (Wrd260.uLng) = (OBJECT_TYPE (Wrd259.Obj));
  if ((Wrd260.uLng) == 50)
    goto label_91;
  Wrd255 = Wrd259;

DEFLABEL (label_90)
  (* (--Rsp)) = (Wrd255.Obj);
  (Wrd261.Obj) = (Rsp [6]);
  (Rsp [2]) = (Wrd261.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_103_18]));

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_103_17])), (Wrd256.pObj));

DEFLABEL (label_48)
  (Wrd255.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_92)
  Rsp = (& (Rsp [2]));
  goto label_56;

DEFLABEL (label_95)
  if ((Wrd248.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_94;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_103_16])), (Wrd240.pObj), (Wrd241.Obj));

DEFLABEL (label_47)
  goto label_93;

DEFLABEL (label_97)
  (Wrd272.Obj) = (current_block [OBJECT_103_2]);
  (Wrd273.Obj) = (Rsp [0]);
  (Wrd276.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_15]))));
  (* (--Rsp)) = (Wrd276.Obj);
  (* (--Rsp)) = (Wrd273.Obj);
  (* (--Rsp)) = (Wrd272.Obj);
  (* (--Rsp)) = (Wrd233.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_1]), 3);

DEFLABEL (label_49)
  goto label_96;

DEFLABEL (label_99)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_103_14])), (Wrd235.pObj));

DEFLABEL (label_46)
  (Wrd234.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_103_13])), (Wrd227.pObj));

DEFLABEL (label_45)
  (Wrd226.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  (Wrd288.Obj) = (Rsp [2]);
  (Wrd289.Obj) = (current_block [OBJECT_103_3]);
  (Wrd293.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_12]))));
  (* (--Rsp)) = (Wrd293.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd289.Obj);
  (* (--Rsp)) = (Wrd288.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_1]), 3);

DEFLABEL (label_50)
  goto label_102;

DEFLABEL (label_105)
  (Wrd305.Obj) = (Rsp [2]);
  (Wrd306.Obj) = (current_block [OBJECT_103_2]);
  (Wrd310.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_11]))));
  (* (--Rsp)) = (Wrd310.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd306.Obj);
  (* (--Rsp)) = (Wrd305.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_1]), 3);

DEFLABEL (label_51)
  goto label_104;

DEFLABEL (label_107)
  (Wrd322.Obj) = (Rsp [2]);
  (Wrd323.Obj) = (current_block [OBJECT_103_0]);
  (Wrd324.Obj) = (Rsp [0]);
  (Wrd327.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_10]))));
  (* (--Rsp)) = (Wrd327.Obj);
  (* (--Rsp)) = (Wrd324.Obj);
  (* (--Rsp)) = (Wrd323.Obj);
  (* (--Rsp)) = (Wrd322.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_1]), 3);

DEFLABEL (label_52)
  goto label_106;

DEFLABEL (label_109)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_103_32])), (Wrd31.pObj));

DEFLABEL (label_33)
  (Wrd30.Obj) = Rvl;
  goto label_108;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_104_4 3
#define LABEL_104_5 5
#define ENVIRONMENT_LABEL_104_3 13
#define DEBUGGING_LABEL_104_2 12
#define OBJECT_104_2 11
#define OBJECT_104_1 10
#define OBJECT_104_0 9
#define EXECUTE_CACHE_104_6 7
#define FREE_REFERENCES_LABEL_104_0 6
#define NUMBER_OF_LINKER_SECTIONS_104_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_104 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_104_4);
      goto Z__deregister_io_thread_event_1;

    case 1:
      current_block = (Rpc - LABEL_104_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__deregister_io_thread_event_5)
DEFLABEL (Z__deregister_io_thread_event_1)
  INTERRUPT_CHECK (26, LABEL_104_4);
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_8;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_8;
  (Wrd7.Obj) = ((Wrd14.pObj) [2]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;

DEFLABEL (label_6)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_6]));

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_104_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (current_block [OBJECT_104_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_5]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_1]), 2);

DEFLABEL (label_3)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_105_4 3
#define LABEL_105_5 5
#define LABEL_105_6 7
#define LABEL_105_7 9
#define LABEL_105_8 11
#define LABEL_105_9 13
#define LABEL_105_10 15
#define LABEL_105_11 17
#define LABEL_105_12 19
#define LABEL_105_13 21
#define LABEL_105_15 23
#define LABEL_105_14 25
#define LABEL_105_17 27
#define ENVIRONMENT_LABEL_105_3 43
#define DEBUGGING_LABEL_105_2 42
#define OBJECT_105_8 41
#define OBJECT_105_7 40
#define OBJECT_105_6 39
#define OBJECT_105_5 38
#define OBJECT_105_4 37
#define OBJECT_105_3 36
#define OBJECT_105_2 35
#define OBJECT_105_1 34
#define OBJECT_105_0 33
#define EXECUTE_CACHE_105_16 29
#define FREE_REFERENCE_105_0 32
#define FREE_REFERENCES_LABEL_105_0 28
#define NUMBER_OF_LINKER_SECTIONS_105_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_105 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd25;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd49;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd41;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd67;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd66;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_105_4);
      goto Z__deregister_io_thread_events_23;

    case 1:
      current_block = (Rpc - LABEL_105_5);
      goto label_25;

    case 2:
      current_block = (Rpc - LABEL_105_6);
      goto loop_21;

    case 3:
      current_block = (Rpc - LABEL_105_7);
      goto label_26;

    case 4:
      current_block = (Rpc - LABEL_105_8);
      goto loop_10;

    case 5:
      current_block = (Rpc - LABEL_105_9);
      goto label_30;

    case 6:
      current_block = (Rpc - LABEL_105_10);
      goto label_27;

    case 7:
      current_block = (Rpc - LABEL_105_11);
      goto label_29;

    case 8:
      current_block = (Rpc - LABEL_105_12);
      goto label_28;

    case 9:
      current_block = (Rpc - LABEL_105_13);
      goto do_loop_19;

    case 10:
      current_block = (Rpc - LABEL_105_15);
      goto label_31;

    case 11:
      current_block = (Rpc - LABEL_105_14);
      goto continuation_16;

    case 12:
      current_block = (Rpc - LABEL_105_17);
      goto label_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__deregister_io_thread_events_34)
DEFLABEL (Z__deregister_io_thread_events_23)
  INTERRUPT_CHECK (26, LABEL_105_4);
  (Wrd5.Obj) = (current_block [OBJECT_105_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_105_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_39;
  Wrd6 = Wrd10;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_21;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_105_5])), (Wrd7.pObj));

DEFLABEL (label_25)
  (Wrd6.Obj) = Rvl;
  goto label_38;

DEFLABEL (loop_35)
DEFLABEL (loop_21)
  INTERRUPT_CHECK (26, LABEL_105_6);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_40;
  (Wrd24.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd24.Obj);
  Rsp = (& (Rsp [3]));
  goto do_loop_19;

DEFLABEL (label_40)
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_42;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_42;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_41)
  goto loop_10;

DEFLABEL (label_42)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_105_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_2]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (loop_36)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_105_8);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_53;
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_52;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_52;
  (Wrd7.Obj) = ((Wrd13.pObj) [3]);

DEFLABEL (label_51)
  (Wrd23.Obj) = (Rsp [4]);
  if ((Wrd23.Obj) == (Wrd7.Obj))
    goto label_47;

DEFLABEL (label_46)
  (Wrd24.Obj) = (Rsp [1]);

DEFLABEL (label_45)
  (Rsp [1]) = (Wrd24.Obj);
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_44;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd33.Lng))))
    goto label_44;
  (Wrd25.Obj) = ((Wrd31.pObj) [7]);

DEFLABEL (label_43)
  (Rsp [0]) = (Wrd25.Obj);
  goto loop_10;

DEFLABEL (label_44)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.Obj) = (current_block [OBJECT_105_3]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_12]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_2]), 2);

DEFLABEL (label_28)
  (Wrd25.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_47)
  (Wrd41.Obj) = (Rsp [5]);
  if ((Wrd41.Obj) == ((SCHEME_OBJECT) 0))
    goto label_49;

DEFLABEL (label_48)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  goto label_45;

DEFLABEL (label_49)
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 62))
    goto label_50;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd56.Lng))))
    goto label_50;
  (Wrd49.Obj) = ((Wrd54.pObj) [5]);
  if ((Wrd49.Obj) == ((SCHEME_OBJECT) 0))
    goto label_48;
  goto label_46;

DEFLABEL (label_50)
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.Obj) = (current_block [OBJECT_105_5]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_11]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_2]), 2);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  goto label_46;

DEFLABEL (label_52)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_105_4]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_2]), 2);

DEFLABEL (label_27)
  (Wrd7.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_53)
  (Wrd66.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  (Rsp [1]) = (Wrd66.Obj);
  (Wrd76.Obj) = (Rsp [0]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd77.uLng) == 62))
    goto label_55;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd75.Lng))))
    goto label_55;
  (Wrd67.Obj) = ((Wrd73.pObj) [7]);

DEFLABEL (label_54)
  (Rsp [0]) = (Wrd67.Obj);
  goto loop_21;

DEFLABEL (label_55)
  (Wrd78.Obj) = (Rsp [0]);
  (Wrd79.Obj) = (current_block [OBJECT_105_3]);
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_9]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_2]), 2);

DEFLABEL (label_30)
  (Wrd67.Obj) = Rvl;
  goto label_54;

DEFLABEL (do_loop_37)
DEFLABEL (do_loop_19)
  INTERRUPT_CHECK (26, LABEL_105_13);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_57;
  (Wrd7.Obj) = (current_block [OBJECT_105_6]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_56;

DEFLABEL (label_57)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_56)
DEFLABEL (label_63)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_58;
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_58)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_14]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_62;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_61)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_16]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_105_14);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_60;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_59)
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_19;

DEFLABEL (label_60)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_8]), 1);

DEFLABEL (label_32)
  (Wrd5.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_15]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_7]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_61;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_106_4 3
#define LABEL_106_5 5
#define ENVIRONMENT_LABEL_106_3 15
#define DEBUGGING_LABEL_106_2 14
#define OBJECT_106_2 13
#define OBJECT_106_1 12
#define OBJECT_106_0 11
#define EXECUTE_CACHE_106_7 7
#define EXECUTE_CACHE_106_6 9
#define FREE_REFERENCES_LABEL_106_0 6
#define NUMBER_OF_LINKER_SECTIONS_106_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_106 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_106_4);
      goto guarantee_select_mode_1;

    case 1:
      current_block = (Rpc - LABEL_106_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_select_mode_4)
DEFLABEL (guarantee_select_mode_1)
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
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_106_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  (Wrd9.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_106_1]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_107_4 3
#define LABEL_107_5 5
#define LABEL_107_6 7
#define LABEL_107_7 9
#define LABEL_107_8 11
#define LABEL_107_13 13
#define LABEL_107_15 15
#define LABEL_107_17 17
#define LABEL_107_18 19
#define LABEL_107_19 21
#define LABEL_107_20 23
#define LABEL_107_22 25
#define LABEL_107_23 27
#define LABEL_107_24 29
#define LABEL_107_11 31
#define LABEL_107_25 33
#define LABEL_107_26 35
#define LABEL_107_27 37
#define LABEL_107_12 39
#define LABEL_107_29 41
#define LABEL_107_30 43
#define LABEL_107_33 45
#define LABEL_107_34 47
#define LABEL_107_10 49
#define LABEL_107_9 51
#define LABEL_107_16 53
#define LABEL_107_39 55
#define LABEL_107_31 57
#define TAG_107_32 27
#define LABEL_107_35 59
#define ENVIRONMENT_LABEL_107_3 96
#define DEBUGGING_LABEL_107_2 95
#define OBJECT_107_19 94
#define OBJECT_107_18 93
#define OBJECT_107_17 92
#define OBJECT_107_16 91
#define OBJECT_107_15 90
#define OBJECT_107_14 89
#define OBJECT_107_13 88
#define OBJECT_107_12 87
#define OBJECT_107_11 86
#define OBJECT_107_10 85
#define OBJECT_107_9 84
#define OBJECT_107_8 83
#define OBJECT_107_7 82
#define OBJECT_107_6 81
#define OBJECT_107_5 80
#define OBJECT_107_4 79
#define OBJECT_107_3 78
#define OBJECT_107_2 77
#define OBJECT_107_1 76
#define OBJECT_107_0 75
#define EXECUTE_CACHE_107_38 61
#define EXECUTE_CACHE_107_37 63
#define EXECUTE_CACHE_107_36 65
#define EXECUTE_CACHE_107_28 67
#define EXECUTE_CACHE_107_21 69
#define EXECUTE_CACHE_107_14 71
#define FREE_REFERENCE_107_0 74
#define FREE_REFERENCES_LABEL_107_0 60
#define NUMBER_OF_LINKER_SECTIONS_107_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_107 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd87;
  machine_word Wrd82;
  machine_word Wrd100;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd75;
  machine_word Wrd69;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd20;
  machine_word Wrd104;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd116;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd124;
  machine_word Wrd113;
  machine_word Wrd109;
  machine_word Wrd151;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd136;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd134;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd159;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd156;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd67;
  machine_word Wrd73;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd80;
  machine_word Wrd83;
  machine_word Wrd86;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd26;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_107_4);
      goto signal_io_thread_events_56;

    case 1:
      current_block = (Rpc - LABEL_107_5);
      goto continuation_25;

    case 2:
      current_block = (Rpc - LABEL_107_6);
      goto loop_53;

    case 3:
      current_block = (Rpc - LABEL_107_7);
      goto label_58;

    case 4:
      current_block = (Rpc - LABEL_107_8);
      goto label_59;

    case 5:
      current_block = (Rpc - LABEL_107_13);
      goto label_60;

    case 6:
      current_block = (Rpc - LABEL_107_15);
      goto do_loop_21;

    case 7:
      current_block = (Rpc - LABEL_107_17);
      goto label_61;

    case 8:
      current_block = (Rpc - LABEL_107_18);
      goto label_62;

    case 9:
      current_block = (Rpc - LABEL_107_19);
      goto label_63;

    case 10:
      current_block = (Rpc - LABEL_107_20);
      goto label_64;

    case 11:
      current_block = (Rpc - LABEL_107_22);
      goto continuation_4;

    case 12:
      current_block = (Rpc - LABEL_107_23);
      goto continuation_2;

    case 13:
      current_block = (Rpc - LABEL_107_24);
      goto label_72;

    case 14:
      current_block = (Rpc - LABEL_107_11);
      goto lambda_32;

    case 15:
      current_block = (Rpc - LABEL_107_25);
      goto label_70;

    case 16:
      current_block = (Rpc - LABEL_107_26);
      goto scan_dentries_6;

    case 17:
      current_block = (Rpc - LABEL_107_27);
      goto label_69;

    case 18:
      current_block = (Rpc - LABEL_107_12);
      goto lambda_31;

    case 19:
      current_block = (Rpc - LABEL_107_29);
      goto label_65;

    case 20:
      current_block = (Rpc - LABEL_107_30);
      goto label_66;

    case 21:
      current_block = (Rpc - LABEL_107_33);
      goto label_67;

    case 22:
      current_block = (Rpc - LABEL_107_34);
      goto label_68;

    case 23:
      current_block = (Rpc - LABEL_107_10);
      goto lambda_33;

    case 24:
      current_block = (Rpc - LABEL_107_9);
      goto lambda_34;

    case 25:
      current_block = (Rpc - LABEL_107_16);
      goto continuation_18;

    case 26:
      current_block = (Rpc - LABEL_107_39);
      goto label_71;

    case 27:
      current_block = (Rpc - LABEL_107_31);
      goto lambda_80;

    case 28:
      current_block = (Rpc - LABEL_107_35);
      goto continuation_46;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (signal_io_thread_events_74)
DEFLABEL (signal_io_thread_events_56)
  INTERRUPT_CHECK (26, LABEL_107_4);
  (Wrd5.Obj) = (current_block [OBJECT_107_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_107_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_53;

DEFLABEL (loop_75)
DEFLABEL (loop_53)
  INTERRUPT_CHECK (26, LABEL_107_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_83;
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd9.Obj);
  Rsp = (& (Rsp [4]));
  goto do_loop_21;

DEFLABEL (label_83)
  (Wrd25.Obj) = (Rsp [4]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_94;
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_94;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd24.Lng))))
    goto label_94;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd15.pObj) = (& ((Wrd22.pObj) [(Wrd12.Lng)]));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_93)
  (Wrd46.Obj) = (Rsp [4]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_92;
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_92;
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) (Wrd41.Lng)) < ((unsigned long) (Wrd45.Lng))))
    goto label_92;
  (Wrd33.uLng) = (OBJECT_DATUM (Wrd38.Obj));
  (Wrd36.pObj) = (& ((Wrd43.pObj) [(Wrd33.Lng)]));
  (Wrd37.Obj) = ((Wrd36.pObj) [1]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_91)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_5]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd56.Obj);
  if ((Wrd56.Obj) == (current_block [OBJECT_107_3]))
    goto label_90;
  if ((Wrd56.Obj) == (current_block [OBJECT_107_4]))
    goto label_89;
  if ((Wrd56.Obj) == (current_block [OBJECT_107_5]))
    goto label_88;
  if ((Wrd56.Obj) == (current_block [OBJECT_107_6]))
    goto label_84;
  if ((Wrd56.Obj) == (current_block [OBJECT_107_7]))
    goto label_84;
  (Wrd67.Obj) = (current_block [OBJECT_107_8]);
  (* (--Rsp)) = (Wrd67.Obj);
  (Rsp [1]) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_14]));

DEFLABEL (label_84)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_12]))));
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd70.Obj);

DEFLABEL (label_87)
  (Wrd72.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd74.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_107_0]));
  (Wrd77.Obj) = ((Wrd74.pObj) [0]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if ((Wrd78.uLng) == 50)
    goto label_86;
  Wrd73 = Wrd77;

DEFLABEL (label_85)
  (* (--Rsp)) = (Wrd73.Obj);
  goto scan_dentries_6;

DEFLABEL (label_86)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_107_13])), (Wrd74.pObj));

DEFLABEL (label_60)
  (Wrd73.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_11]))));
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd80.Obj);
  goto label_87;

DEFLABEL (label_89)
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_10]))));
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd83.Obj);
  goto label_87;

DEFLABEL (label_90)
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_9]))));
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd86.Obj);
  goto label_87;

DEFLABEL (label_92)
  (Wrd48.Obj) = (Rsp [4]);
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_8]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_2]), 2);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd27.Obj) = (Rsp [4]);
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_7]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_2]), 2);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_93;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_107_5);
  (* (--Rsp)) = Rvl;
  goto label_87;

DEFLABEL (do_loop_76)
DEFLABEL (do_loop_21)
  INTERRUPT_CHECK (26, LABEL_107_15);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_96;
  (Wrd7.Obj) = (current_block [OBJECT_107_9]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_95;

DEFLABEL (label_96)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_95)
DEFLABEL (label_108)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_97;
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_97)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_16]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_107;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_106)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_105;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_104)
  (Wrd34.Obj) = (Rsp [3]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_103;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [0]);

DEFLABEL (label_102)
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_101;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_100)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_21]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_107_16);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_99;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_98)
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_21;

DEFLABEL (label_99)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_39]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_11]), 1);

DEFLABEL (label_71)
  (Wrd5.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_20]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_10]), 1);

DEFLABEL (label_64)
  (* (--Rsp)) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_19]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_10]), 1);

DEFLABEL (label_63)
  (Wrd31.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_18]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_11]), 1);

DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_17]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_10]), 1);

DEFLABEL (label_61)
  (Wrd15.Obj) = Rvl;
  goto label_106;

DEFLABEL (lambda_79)
DEFLABEL (lambda_31)
  INTERRUPT_CHECK (26, LABEL_107_12);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_123)
  (Wrd7.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_122)
  (Wrd8.Obj) = (Rsp [0]);
  if (! ((Wrd8.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_109;
  (Wrd105.Obj) = (Rsp [3]);
  (Wrd106.Lng) = (FIXNUM_TO_LONG (Wrd105.Obj));
  (Wrd107.Lng) = ((Wrd106.Lng) + 1L);
  (Wrd104.Obj) = (LONG_TO_FIXNUM (Wrd107.Lng));
  (Rsp [3]) = (Wrd104.Obj);
  Rsp = (& (Rsp [3]));
  goto loop_53;

DEFLABEL (label_109)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_121;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_121;
  (Wrd10.Obj) = ((Wrd16.pObj) [4]);

DEFLABEL (label_120)
  (Rsp [0]) = (Wrd10.Obj);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_119;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd34.Lng))))
    goto label_119;
  (Wrd28.Obj) = ((Wrd32.pObj) [4]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_118)
  (Wrd42.Obj) = (Rsp [0]);
  if ((Wrd42.Obj) == ((SCHEME_OBJECT) 0))
    goto label_111;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd47.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_107_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_107_31])));
  Rhp += 2;
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd47.pObj)));
  Wrd50 = Wrd47;
  (Wrd51.Obj) = (Rsp [3]);
  ((Wrd50.pObj) [2]) = (Wrd51.Obj);
  ((Wrd50.pObj) [3]) = (Wrd42.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd46.Obj);
  goto label_110;

DEFLABEL (label_111)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_110)
DEFLABEL (label_117)
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 62))
    goto label_116;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd60.Lng))))
    goto label_116;
  (Wrd52.Obj) = ((Wrd58.pObj) [3]);

DEFLABEL (label_115)
  (Wrd68.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd52.Obj);
  (* (Rhp++)) = (Wrd68.Obj);
  (Wrd71.pObj) = (& (Rhp [-2]));
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd71.pObj)));
  (Wrd75.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd69.Obj);
  (* (Rhp++)) = (Wrd75.Obj);
  (Wrd73.pObj) = (& (Rhp [-2]));
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd73.pObj)));
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd94.Obj) = (Rsp [1]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if (! ((Wrd95.uLng) == 62))
    goto label_114;
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd94.Obj));
  (Wrd92.Obj) = ((Wrd91.pObj) [0]);
  (Wrd93.Lng) = (FIXNUM_TO_LONG (Wrd92.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd93.Lng))))
    goto label_114;
  (Wrd78.Obj) = ((Wrd91.pObj) [5]);
  if ((Wrd78.Obj) == ((SCHEME_OBJECT) 0))
    goto label_113;

DEFLABEL (label_112)
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_35]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd87.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_37]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_107_35);
  (Wrd6.Obj) = (Rsp [4]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd9.Obj);
  Rsp = (& (Rsp [4]));
  goto loop_53;

DEFLABEL (label_113)
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_35]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (Wrd83.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd83.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_36]));

DEFLABEL (label_114)
  (Wrd96.Obj) = (Rsp [1]);
  (Wrd97.Obj) = (current_block [OBJECT_107_17]);
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_34]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_13]), 2);

DEFLABEL (label_68)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_113;
  goto label_112;

DEFLABEL (label_116)
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd64.Obj) = (current_block [OBJECT_107_12]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_33]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_13]), 2);

DEFLABEL (label_67)
  (Wrd52.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_119)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_107_16]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_30]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_13]), 2);

DEFLABEL (label_66)
  (* (--Rsp)) = Rvl;
  goto label_118;

DEFLABEL (label_121)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (current_block [OBJECT_107_16]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_29]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_13]), 2);

DEFLABEL (label_65)
  (Wrd10.Obj) = Rvl;
  goto label_120;

DEFLABEL (scan_dentries_78)
DEFLABEL (scan_dentries_6)
  INTERRUPT_CHECK (26, LABEL_107_26);
  (Wrd109.Obj) = (Rsp [0]);
  if ((Wrd109.Obj) == ((SCHEME_OBJECT) 0))
    goto label_131;
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_23]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if (! ((Wrd124.uLng) == 62))
    goto label_130;
  (Wrd120.pObj) = (OBJECT_ADDRESS (Wrd109.Obj));
  (Wrd121.Obj) = ((Wrd120.pObj) [0]);
  (Wrd122.Lng) = (FIXNUM_TO_LONG (Wrd121.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd122.Lng))))
    goto label_130;
  (Wrd116.Obj) = ((Wrd120.pObj) [2]);
  (* (--Rsp)) = (Wrd116.Obj);

DEFLABEL (label_129)
  (Wrd130.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd130.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_28]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_107_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_126;
  (Wrd156.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_22]))));
  (* (--Rsp)) = (Wrd156.Obj);
  (Wrd166.Obj) = (Rsp [1]);
  (Wrd167.uLng) = (OBJECT_TYPE (Wrd166.Obj));
  if (! ((Wrd167.uLng) == 62))
    goto label_128;
  (Wrd163.pObj) = (OBJECT_ADDRESS (Wrd166.Obj));
  (Wrd164.Obj) = ((Wrd163.pObj) [0]);
  (Wrd165.Lng) = (FIXNUM_TO_LONG (Wrd164.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd165.Lng))))
    goto label_128;
  (Wrd159.Obj) = ((Wrd163.pObj) [3]);
  (* (--Rsp)) = (Wrd159.Obj);

DEFLABEL (label_127)
  (Wrd173.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd173.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_107_22);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_123;

DEFLABEL (label_126)
  (Wrd145.Obj) = (Rsp [0]);
  (Wrd146.uLng) = (OBJECT_TYPE (Wrd145.Obj));
  if (! ((Wrd146.uLng) == 62))
    goto label_125;
  (Wrd142.pObj) = (OBJECT_ADDRESS (Wrd145.Obj));
  (Wrd143.Obj) = ((Wrd142.pObj) [0]);
  (Wrd144.Lng) = (FIXNUM_TO_LONG (Wrd143.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd144.Lng))))
    goto label_125;
  (Wrd136.Obj) = ((Wrd142.pObj) [7]);

DEFLABEL (label_124)
  (Rsp [0]) = (Wrd136.Obj);
  goto scan_dentries_6;

DEFLABEL (label_125)
  (Wrd147.Obj) = (Rsp [0]);
  (Wrd148.Obj) = (current_block [OBJECT_107_14]);
  (Wrd151.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_25]))));
  (* (--Rsp)) = (Wrd151.Obj);
  (* (--Rsp)) = (Wrd148.Obj);
  (* (--Rsp)) = (Wrd147.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_13]), 2);

DEFLABEL (label_70)
  (Wrd136.Obj) = Rvl;
  goto label_124;

DEFLABEL (label_128)
  (Wrd168.Obj) = (Rsp [1]);
  (Wrd169.Obj) = (current_block [OBJECT_107_12]);
  (Wrd172.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_24]))));
  (* (--Rsp)) = (Wrd172.Obj);
  (* (--Rsp)) = (Wrd169.Obj);
  (* (--Rsp)) = (Wrd168.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_13]), 2);

DEFLABEL (label_72)
  (* (--Rsp)) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  (Wrd125.Obj) = (Rsp [1]);
  (Wrd126.Obj) = (current_block [OBJECT_107_15]);
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_27]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_13]), 2);

DEFLABEL (label_69)
  (* (--Rsp)) = Rvl;
  goto label_129;

DEFLABEL (label_131)
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_122;

DEFLABEL (lambda_77)
DEFLABEL (lambda_32)
  INTERRUPT_CHECK (26, LABEL_107_11);
  (Wrd134.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  if ((Wrd134.Obj) == ((SCHEME_OBJECT) 0))
    goto label_126;
  goto label_123;

DEFLABEL (lambda_81)
DEFLABEL (lambda_33)
  INTERRUPT_CHECK (26, LABEL_107_10);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_107_18]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_38]));

DEFLABEL (lambda_82)
DEFLABEL (lambda_34)
  INTERRUPT_CHECK (26, LABEL_107_9);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_107_19]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_38]));

DEFLABEL (lambda_80)
  CLOSURE_HEADER (LABEL_107_31);

DEFLABEL (lambda_41)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_108_4 3
#define LABEL_108_5 5
#define LABEL_108_6 7
#define LABEL_108_7 9
#define LABEL_108_8 11
#define LABEL_108_9 13
#define LABEL_108_10 15
#define LABEL_108_11 17
#define LABEL_108_12 19
#define ENVIRONMENT_LABEL_108_3 29
#define DEBUGGING_LABEL_108_2 28
#define OBJECT_108_7 27
#define OBJECT_108_6 26
#define OBJECT_108_5 25
#define OBJECT_108_4 24
#define OBJECT_108_3 23
#define OBJECT_108_2 22
#define OBJECT_108_1 21
#define OBJECT_108_0 20
#define FREE_REFERENCES_LABEL_108_0 20
#define NUMBER_OF_LINKER_SECTIONS_108_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_108 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd81;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd71;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd94;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd111;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd142;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd158;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd55;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd41;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
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
      current_block = (Rpc - LABEL_108_4);
      goto move_tentry_to_backB_10;

    case 1:
      current_block = (Rpc - LABEL_108_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_108_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_108_7);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_108_8);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_108_9);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_108_10);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_108_11);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_108_12);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (move_tentry_to_backB_21)
DEFLABEL (move_tentry_to_backB_10)
  INTERRUPT_CHECK (26, LABEL_108_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_41;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_41;
  (Wrd7.Obj) = ((Wrd11.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_40)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_22;
  Rvl = (current_block [OBJECT_108_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_39;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd31.Lng))))
    goto label_39;
  (Wrd25.Obj) = ((Wrd29.pObj) [6]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_38)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 62))
    goto label_37;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd47.Lng))))
    goto label_37;
  (Wrd41.Obj) = ((Wrd45.pObj) [2]);
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_36)
  (Wrd64.Obj) = (Rsp [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 62))
    goto label_35;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd63.Lng))))
    goto label_35;
  (Wrd55.Obj) = ((Wrd61.pObj) [5]);

DEFLABEL (label_34)
  (Wrd151.Obj) = (Rsp [3]);
  (Wrd152.uLng) = (OBJECT_TYPE (Wrd151.Obj));
  if (! ((Wrd152.uLng) == 62))
    goto label_33;
  (Wrd148.pObj) = (OBJECT_ADDRESS (Wrd151.Obj));
  (Wrd149.Obj) = ((Wrd148.pObj) [0]);
  (Wrd150.Lng) = (FIXNUM_TO_LONG (Wrd149.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd150.Lng))))
    goto label_33;
  ((Wrd148.pObj) [6]) = (Wrd55.Obj);

DEFLABEL (label_32)
  (Wrd135.Obj) = (Rsp [3]);
  (Wrd136.uLng) = (OBJECT_TYPE (Wrd135.Obj));
  if (! ((Wrd136.uLng) == 62))
    goto label_31;
  (Wrd132.pObj) = (OBJECT_ADDRESS (Wrd135.Obj));
  (Wrd133.Obj) = ((Wrd132.pObj) [0]);
  (Wrd134.Lng) = (FIXNUM_TO_LONG (Wrd133.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd134.Lng))))
    goto label_31;
  ((Wrd132.pObj) [7]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_30)
  (Wrd118.Obj) = (Rsp [0]);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if (! ((Wrd119.uLng) == 62))
    goto label_29;
  (Wrd115.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd116.Obj) = ((Wrd115.pObj) [0]);
  (Wrd117.Lng) = (FIXNUM_TO_LONG (Wrd116.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd117.Lng))))
    goto label_29;
  (Wrd111.Obj) = (Rsp [3]);
  ((Wrd115.pObj) [5]) = (Wrd111.Obj);

DEFLABEL (label_28)
  (Wrd101.Obj) = (Rsp [2]);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if (! ((Wrd102.uLng) == 62))
    goto label_27;
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd101.Obj));
  (Wrd99.Obj) = ((Wrd98.pObj) [0]);
  (Wrd100.Lng) = (FIXNUM_TO_LONG (Wrd99.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd100.Lng))))
    goto label_27;
  (Wrd94.Obj) = (Rsp [1]);
  ((Wrd98.pObj) [6]) = (Wrd94.Obj);

DEFLABEL (label_26)
  (Wrd71.Obj) = (Rsp [1]);
  if ((Wrd71.Obj) == ((SCHEME_OBJECT) 0))
    goto label_23;
  Rvl = (current_block [OBJECT_108_2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd75.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd75.Obj);
  (Wrd76.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd76.Obj);
  (Wrd77.Obj) = (current_block [OBJECT_108_7]);
  (Rsp [2]) = (Wrd77.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd89.Obj) = (Rsp [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if ((Wrd90.uLng) == 62)
    goto label_25;

DEFLABEL (label_24)
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_6]), 3);

DEFLABEL (label_25)
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [0]);
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd87.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd88.Lng))))
    goto label_24;
  (Wrd81.Obj) = (Rsp [2]);
  ((Wrd86.pObj) [4]) = (Wrd81.Obj);
  Rvl = (current_block [OBJECT_108_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd103.Obj) = (Rsp [2]);
  (Wrd104.Obj) = (current_block [OBJECT_108_3]);
  (Wrd105.Obj) = (Rsp [1]);
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_12]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_6]), 3);

DEFLABEL (label_16)
  goto label_26;

DEFLABEL (label_29)
  (Wrd120.Obj) = (Rsp [0]);
  (Wrd121.Obj) = (current_block [OBJECT_108_5]);
  (Wrd122.Obj) = (Rsp [3]);
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_11]))));
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd120.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_6]), 3);

DEFLABEL (label_17)
  goto label_28;

DEFLABEL (label_31)
  (Wrd137.Obj) = (Rsp [3]);
  (Wrd138.Obj) = (current_block [OBJECT_108_0]);
  (Wrd142.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_10]))));
  (* (--Rsp)) = (Wrd142.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd137.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_6]), 3);

DEFLABEL (label_18)
  goto label_30;

DEFLABEL (label_33)
  (Wrd153.Obj) = (Rsp [3]);
  (Wrd154.Obj) = (current_block [OBJECT_108_3]);
  (Wrd158.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_9]))));
  (* (--Rsp)) = (Wrd158.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd154.Obj);
  (* (--Rsp)) = (Wrd153.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_6]), 3);

DEFLABEL (label_19)
  goto label_32;

DEFLABEL (label_35)
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd67.Obj) = (current_block [OBJECT_108_5]);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_8]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_1]), 2);

DEFLABEL (label_15)
  (Wrd55.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.Obj) = (current_block [OBJECT_108_4]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_7]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_108_3]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_6]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_108_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_40;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_109_5 3
#define LABEL_109_4 5
#define LABEL_109_6 7
#define LABEL_109_7 9
#define LABEL_109_8 11
#define LABEL_109_9 13
#define LABEL_109_10 15
#define LABEL_109_11 17
#define LABEL_109_12 19
#define LABEL_109_13 21
#define LABEL_109_14 23
#define LABEL_109_15 25
#define LABEL_109_16 27
#define LABEL_109_17 29
#define LABEL_109_18 31
#define LABEL_109_19 33
#define LABEL_109_20 35
#define LABEL_109_21 37
#define LABEL_109_22 39
#define LABEL_109_23 41
#define LABEL_109_24 43
#define ENVIRONMENT_LABEL_109_3 62
#define DEBUGGING_LABEL_109_2 61
#define OBJECT_109_9 60
#define OBJECT_109_8 59
#define OBJECT_109_7 58
#define OBJECT_109_6 57
#define OBJECT_109_5 56
#define OBJECT_109_4 55
#define OBJECT_109_3 54
#define OBJECT_109_2 53
#define OBJECT_109_1 52
#define OBJECT_109_0 51
#define EXECUTE_CACHE_109_25 45
#define FREE_REFERENCE_109_0 48
#define FREE_ASSIGNMENT_109_0 50
#define FREE_REFERENCES_LABEL_109_0 44
#define NUMBER_OF_LINKER_SECTIONS_109_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_109 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd91;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd85;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd159;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd142;
  machine_word Wrd178;
  machine_word Wrd175;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd164;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd172;
  machine_word Wrd188;
  machine_word Wrd187;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd124;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd123;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd108;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd83;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd68;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd65;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd208;
  machine_word Wrd205;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd194;
  machine_word Wrd200;
  machine_word Wrd199;
  machine_word Wrd198;
  machine_word Wrd202;
  machine_word Wrd225;
  machine_word Wrd222;
  machine_word Wrd221;
  machine_word Wrd220;
  machine_word Wrd211;
  machine_word Wrd217;
  machine_word Wrd216;
  machine_word Wrd215;
  machine_word Wrd219;
  machine_word Wrd218;
  machine_word Wrd55;
  machine_word Wrd242;
  machine_word Wrd239;
  machine_word Wrd238;
  machine_word Wrd237;
  machine_word Wrd228;
  machine_word Wrd234;
  machine_word Wrd233;
  machine_word Wrd232;
  machine_word Wrd236;
  machine_word Wrd259;
  machine_word Wrd256;
  machine_word Wrd255;
  machine_word Wrd254;
  machine_word Wrd245;
  machine_word Wrd251;
  machine_word Wrd250;
  machine_word Wrd249;
  machine_word Wrd253;
  machine_word Wrd252;
  machine_word Wrd53;
  machine_word Wrd276;
  machine_word Wrd272;
  machine_word Wrd271;
  machine_word Wrd268;
  machine_word Wrd267;
  machine_word Wrd266;
  machine_word Wrd270;
  machine_word Wrd269;
  machine_word Wrd293;
  machine_word Wrd289;
  machine_word Wrd288;
  machine_word Wrd285;
  machine_word Wrd284;
  machine_word Wrd283;
  machine_word Wrd287;
  machine_word Wrd286;
  machine_word Wrd310;
  machine_word Wrd306;
  machine_word Wrd305;
  machine_word Wrd302;
  machine_word Wrd301;
  machine_word Wrd300;
  machine_word Wrd304;
  machine_word Wrd303;
  machine_word Wrd327;
  machine_word Wrd323;
  machine_word Wrd322;
  machine_word Wrd319;
  machine_word Wrd318;
  machine_word Wrd317;
  machine_word Wrd321;
  machine_word Wrd320;
  machine_word Wrd344;
  machine_word Wrd340;
  machine_word Wrd339;
  machine_word Wrd336;
  machine_word Wrd335;
  machine_word Wrd334;
  machine_word Wrd338;
  machine_word Wrd337;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_109_5);
      goto continuation_11;

    case 1:
      current_block = (Rpc - LABEL_109_4);
      goto delete_tentryB_20;

    case 2:
      current_block = (Rpc - LABEL_109_6);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_109_7);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_109_8);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_109_9);
      goto label_40;

    case 6:
      current_block = (Rpc - LABEL_109_10);
      goto label_39;

    case 7:
      current_block = (Rpc - LABEL_109_11);
      goto label_38;

    case 8:
      current_block = (Rpc - LABEL_109_12);
      goto label_37;

    case 9:
      current_block = (Rpc - LABEL_109_13);
      goto label_36;

    case 10:
      current_block = (Rpc - LABEL_109_14);
      goto label_35;

    case 11:
      current_block = (Rpc - LABEL_109_15);
      goto label_34;

    case 12:
      current_block = (Rpc - LABEL_109_16);
      goto label_33;

    case 13:
      current_block = (Rpc - LABEL_109_17);
      goto label_32;

    case 14:
      current_block = (Rpc - LABEL_109_18);
      goto label_25;

    case 15:
      current_block = (Rpc - LABEL_109_19);
      goto label_28;

    case 16:
      current_block = (Rpc - LABEL_109_20);
      goto label_29;

    case 17:
      current_block = (Rpc - LABEL_109_21);
      goto label_31;

    case 18:
      current_block = (Rpc - LABEL_109_22);
      goto label_30;

    case 19:
      current_block = (Rpc - LABEL_109_23);
      goto label_26;

    case 20:
      current_block = (Rpc - LABEL_109_24);
      goto label_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delete_tentryB_42)
DEFLABEL (delete_tentryB_20)
  INTERRUPT_CHECK (26, LABEL_109_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_88;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_88;
  (Wrd7.Obj) = ((Wrd11.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_87)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_86;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_86;
  (Wrd23.Obj) = ((Wrd27.pObj) [6]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_85)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_84;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd45.Lng))))
    goto label_84;
  (Wrd39.Obj) = ((Wrd43.pObj) [2]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_83)
  (Wrd337.Obj) = (Rsp [3]);
  (Wrd338.uLng) = (OBJECT_TYPE (Wrd337.Obj));
  if (! ((Wrd338.uLng) == 62))
    goto label_82;
  (Wrd334.pObj) = (OBJECT_ADDRESS (Wrd337.Obj));
  (Wrd335.Obj) = ((Wrd334.pObj) [0]);
  (Wrd336.Lng) = (FIXNUM_TO_LONG (Wrd335.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd336.Lng))))
    goto label_82;
  ((Wrd334.pObj) [2]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_81)
  (Wrd320.Obj) = (Rsp [3]);
  (Wrd321.uLng) = (OBJECT_TYPE (Wrd320.Obj));
  if (! ((Wrd321.uLng) == 62))
    goto label_80;
  (Wrd317.pObj) = (OBJECT_ADDRESS (Wrd320.Obj));
  (Wrd318.Obj) = ((Wrd317.pObj) [0]);
  (Wrd319.Lng) = (FIXNUM_TO_LONG (Wrd318.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd319.Lng))))
    goto label_80;
  ((Wrd317.pObj) [3]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_79)
  (Wrd303.Obj) = (Rsp [3]);
  (Wrd304.uLng) = (OBJECT_TYPE (Wrd303.Obj));
  if (! ((Wrd304.uLng) == 62))
    goto label_78;
  (Wrd300.pObj) = (OBJECT_ADDRESS (Wrd303.Obj));
  (Wrd301.Obj) = ((Wrd300.pObj) [0]);
  (Wrd302.Lng) = (FIXNUM_TO_LONG (Wrd301.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd302.Lng))))
    goto label_78;
  ((Wrd300.pObj) [4]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_77)
  (Wrd286.Obj) = (Rsp [3]);
  (Wrd287.uLng) = (OBJECT_TYPE (Wrd286.Obj));
  if (! ((Wrd287.uLng) == 62))
    goto label_76;
  (Wrd283.pObj) = (OBJECT_ADDRESS (Wrd286.Obj));
  (Wrd284.Obj) = ((Wrd283.pObj) [0]);
  (Wrd285.Lng) = (FIXNUM_TO_LONG (Wrd284.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd285.Lng))))
    goto label_76;
  ((Wrd283.pObj) [6]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_75)
  (Wrd269.Obj) = (Rsp [3]);
  (Wrd270.uLng) = (OBJECT_TYPE (Wrd269.Obj));
  if (! ((Wrd270.uLng) == 62))
    goto label_74;
  (Wrd266.pObj) = (OBJECT_ADDRESS (Wrd269.Obj));
  (Wrd267.Obj) = ((Wrd266.pObj) [0]);
  (Wrd268.Lng) = (FIXNUM_TO_LONG (Wrd267.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd268.Lng))))
    goto label_74;
  ((Wrd266.pObj) [7]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_73)
  (Wrd53.Obj) = (Rsp [1]);
  if ((Wrd53.Obj) == ((SCHEME_OBJECT) 0))
    goto label_71;
  (Wrd236.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd236.uLng) == 62))
    goto label_70;
  (Wrd232.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd233.Obj) = ((Wrd232.pObj) [0]);
  (Wrd234.Lng) = (FIXNUM_TO_LONG (Wrd233.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd234.Lng))))
    goto label_70;
  (Wrd228.Obj) = (Rsp [2]);
  ((Wrd232.pObj) [7]) = (Wrd228.Obj);

DEFLABEL (label_69)
  (Wrd55.Obj) = (Rsp [2]);
  if ((Wrd55.Obj) == ((SCHEME_OBJECT) 0))
    goto label_67;
  (Wrd202.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd202.uLng) == 62))
    goto label_66;
  (Wrd198.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd199.Obj) = ((Wrd198.pObj) [0]);
  (Wrd200.Lng) = (FIXNUM_TO_LONG (Wrd199.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd200.Lng))))
    goto label_66;
  (Wrd194.Obj) = (Rsp [1]);
  ((Wrd198.pObj) [6]) = (Wrd194.Obj);

DEFLABEL (label_65)
  (Wrd57.Obj) = (Rsp [1]);
  if ((Wrd57.Obj) == ((SCHEME_OBJECT) 0))
    goto label_44;

DEFLABEL (label_43)
  Rvl = (current_block [OBJECT_109_9]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd61.Obj) = (Rsp [2]);
  if (! ((Wrd61.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_43;
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_5]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd75.Obj) = (Rsp [1]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 62))
    goto label_64;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd74.Lng))))
    goto label_64;
  (Wrd68.Obj) = ((Wrd72.pObj) [2]);
  (* (--Rsp)) = (Wrd68.Obj);

DEFLABEL (label_63)
  (Wrd83.Obj) = (Rsp [0]);
  if ((Wrd83.Obj) == (current_block [OBJECT_109_8]))
    goto label_49;
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd86.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_109_0]));
  (Wrd89.Obj) = ((Wrd86.pObj) [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if ((Wrd90.uLng) == 50)
    goto label_48;
  Wrd85 = Wrd89;

DEFLABEL (label_47)
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd100.Obj) = (Rsp [4]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd101.uLng) == 62))
    goto label_46;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd98.Obj) = ((Wrd97.pObj) [0]);
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd99.Lng))))
    goto label_46;
  (Wrd91.Obj) = ((Wrd97.pObj) [3]);

DEFLABEL (label_45)
  (Rsp [2]) = (Wrd91.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_109_25]));

DEFLABEL (label_46)
  (Wrd102.Obj) = (Rsp [4]);
  (Wrd103.Obj) = (current_block [OBJECT_109_5]);
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_24]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_1]), 2);

DEFLABEL (label_27)
  (Wrd91.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_109_23])), (Wrd86.pObj));

DEFLABEL (label_26)
  (Wrd85.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_49)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_62)
  (Wrd117.Obj) = (Rsp [0]);
  (Wrd118.uLng) = (OBJECT_TYPE (Wrd117.Obj));
  if (! ((Wrd118.uLng) == 62))
    goto label_61;
  (Wrd114.pObj) = (OBJECT_ADDRESS (Wrd117.Obj));
  (Wrd115.Obj) = ((Wrd114.pObj) [0]);
  (Wrd116.Lng) = (FIXNUM_TO_LONG (Wrd115.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd116.Lng))))
    goto label_61;
  (Wrd108.Obj) = ((Wrd114.pObj) [6]);

DEFLABEL (label_60)
  (Rsp [2]) = (Wrd108.Obj);
  (Wrd133.Obj) = (Rsp [0]);
  (Wrd134.uLng) = (OBJECT_TYPE (Wrd133.Obj));
  if (! ((Wrd134.uLng) == 62))
    goto label_59;
  (Wrd130.pObj) = (OBJECT_ADDRESS (Wrd133.Obj));
  (Wrd131.Obj) = ((Wrd130.pObj) [0]);
  (Wrd132.Lng) = (FIXNUM_TO_LONG (Wrd131.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd132.Lng))))
    goto label_59;
  (Wrd124.Obj) = ((Wrd130.pObj) [7]);

DEFLABEL (label_58)
  (Rsp [3]) = (Wrd124.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd140.Obj) = (Rsp [0]);
  if ((Wrd140.Obj) == ((SCHEME_OBJECT) 0))
    goto label_55;
  (Wrd172.uLng) = (OBJECT_TYPE (Wrd140.Obj));
  if (! ((Wrd172.uLng) == 62))
    goto label_54;
  (Wrd168.pObj) = (OBJECT_ADDRESS (Wrd140.Obj));
  (Wrd169.Obj) = ((Wrd168.pObj) [0]);
  (Wrd170.Lng) = (FIXNUM_TO_LONG (Wrd169.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd170.Lng))))
    goto label_54;
  (Wrd164.Obj) = (Rsp [1]);
  ((Wrd168.pObj) [7]) = (Wrd164.Obj);

DEFLABEL (label_53)
  (Wrd142.Obj) = (Rsp [1]);
  if (! ((Wrd142.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_50;
  Rvl = (current_block [OBJECT_109_9]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd142.Obj);
  (Wrd145.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd145.Obj);
  (Wrd146.Obj) = (current_block [OBJECT_109_2]);
  (Rsp [1]) = (Wrd146.Obj);
  (Wrd159.uLng) = (OBJECT_TYPE (Wrd142.Obj));
  if ((Wrd159.uLng) == 62)
    goto label_52;

DEFLABEL (label_51)
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_4]), 3);

DEFLABEL (label_52)
  (Wrd155.pObj) = (OBJECT_ADDRESS (Wrd142.Obj));
  (Wrd156.Obj) = ((Wrd155.pObj) [0]);
  (Wrd157.Lng) = (FIXNUM_TO_LONG (Wrd156.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd157.Lng))))
    goto label_51;
  ((Wrd155.pObj) [6]) = (Wrd145.Obj);
  Rvl = (current_block [OBJECT_109_9]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd173.Obj) = (Rsp [0]);
  (Wrd174.Obj) = (current_block [OBJECT_109_0]);
  (Wrd175.Obj) = (Rsp [1]);
  (Wrd178.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_22]))));
  (* (--Rsp)) = (Wrd178.Obj);
  (* (--Rsp)) = (Wrd175.Obj);
  (* (--Rsp)) = (Wrd174.Obj);
  (* (--Rsp)) = (Wrd173.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_4]), 3);

DEFLABEL (label_30)
  goto label_53;

DEFLABEL (label_55)
  (Wrd179.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_109_0]));
  (Wrd180.Obj) = (Rsp [1]);
  (Wrd187.Obj) = ((Wrd179.pObj) [0]);
  (Wrd188.uLng) = (OBJECT_TYPE (Wrd187.Obj));
  if ((Wrd188.uLng) == 50)
    goto label_57;

DEFLABEL (label_56)
  ((Wrd179.pObj) [0]) = (Wrd180.Obj);
  goto label_53;

DEFLABEL (label_57)
  if ((Wrd187.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_56;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_109_21])), (Wrd179.pObj), (Wrd180.Obj));

DEFLABEL (label_31)
  goto label_53;

DEFLABEL (label_59)
  (Wrd135.Obj) = (Rsp [0]);
  (Wrd136.Obj) = (current_block [OBJECT_109_0]);
  (Wrd139.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_20]))));
  (* (--Rsp)) = (Wrd139.Obj);
  (* (--Rsp)) = (Wrd136.Obj);
  (* (--Rsp)) = (Wrd135.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_1]), 2);

DEFLABEL (label_29)
  (Wrd124.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd119.Obj) = (Rsp [0]);
  (Wrd120.Obj) = (current_block [OBJECT_109_2]);
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_19]))));
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd119.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_1]), 2);

DEFLABEL (label_28)
  (Wrd108.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_64)
  (Wrd77.Obj) = (Rsp [1]);
  (Wrd78.Obj) = (current_block [OBJECT_109_3]);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_18]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd203.Obj) = (Rsp [2]);
  (Wrd204.Obj) = (current_block [OBJECT_109_2]);
  (Wrd205.Obj) = (Rsp [1]);
  (Wrd208.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_17]))));
  (* (--Rsp)) = (Wrd208.Obj);
  (* (--Rsp)) = (Wrd205.Obj);
  (* (--Rsp)) = (Wrd204.Obj);
  (* (--Rsp)) = (Wrd203.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_4]), 3);

DEFLABEL (label_32)
  goto label_65;

DEFLABEL (label_67)
  (Wrd218.Obj) = (Rsp [0]);
  (Wrd219.uLng) = (OBJECT_TYPE (Wrd218.Obj));
  if (! ((Wrd219.uLng) == 62))
    goto label_68;
  (Wrd215.pObj) = (OBJECT_ADDRESS (Wrd218.Obj));
  (Wrd216.Obj) = ((Wrd215.pObj) [0]);
  (Wrd217.Lng) = (FIXNUM_TO_LONG (Wrd216.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd217.Lng))))
    goto label_68;
  (Wrd211.Obj) = (Rsp [1]);
  ((Wrd215.pObj) [5]) = (Wrd211.Obj);
  goto label_65;

DEFLABEL (label_68)
  (Wrd220.Obj) = (Rsp [0]);
  (Wrd221.Obj) = (current_block [OBJECT_109_7]);
  (Wrd222.Obj) = (Rsp [1]);
  (Wrd225.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_16]))));
  (* (--Rsp)) = (Wrd225.Obj);
  (* (--Rsp)) = (Wrd222.Obj);
  (* (--Rsp)) = (Wrd221.Obj);
  (* (--Rsp)) = (Wrd220.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_4]), 3);

DEFLABEL (label_33)
  goto label_65;

DEFLABEL (label_70)
  (Wrd237.Obj) = (Rsp [1]);
  (Wrd238.Obj) = (current_block [OBJECT_109_0]);
  (Wrd239.Obj) = (Rsp [2]);
  (Wrd242.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_15]))));
  (* (--Rsp)) = (Wrd242.Obj);
  (* (--Rsp)) = (Wrd239.Obj);
  (* (--Rsp)) = (Wrd238.Obj);
  (* (--Rsp)) = (Wrd237.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_4]), 3);

DEFLABEL (label_34)
  goto label_69;

DEFLABEL (label_71)
  (Wrd252.Obj) = (Rsp [0]);
  (Wrd253.uLng) = (OBJECT_TYPE (Wrd252.Obj));
  if (! ((Wrd253.uLng) == 62))
    goto label_72;
  (Wrd249.pObj) = (OBJECT_ADDRESS (Wrd252.Obj));
  (Wrd250.Obj) = ((Wrd249.pObj) [0]);
  (Wrd251.Lng) = (FIXNUM_TO_LONG (Wrd250.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd251.Lng))))
    goto label_72;
  (Wrd245.Obj) = (Rsp [2]);
  ((Wrd249.pObj) [4]) = (Wrd245.Obj);
  goto label_69;

DEFLABEL (label_72)
  (Wrd254.Obj) = (Rsp [0]);
  (Wrd255.Obj) = (current_block [OBJECT_109_6]);
  (Wrd256.Obj) = (Rsp [2]);
  (Wrd259.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_14]))));
  (* (--Rsp)) = (Wrd259.Obj);
  (* (--Rsp)) = (Wrd256.Obj);
  (* (--Rsp)) = (Wrd255.Obj);
  (* (--Rsp)) = (Wrd254.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_4]), 3);

DEFLABEL (label_35)
  goto label_69;

DEFLABEL (label_74)
  (Wrd271.Obj) = (Rsp [3]);
  (Wrd272.Obj) = (current_block [OBJECT_109_0]);
  (Wrd276.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_13]))));
  (* (--Rsp)) = (Wrd276.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd272.Obj);
  (* (--Rsp)) = (Wrd271.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_4]), 3);

DEFLABEL (label_36)
  goto label_73;

DEFLABEL (label_76)
  (Wrd288.Obj) = (Rsp [3]);
  (Wrd289.Obj) = (current_block [OBJECT_109_2]);
  (Wrd293.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_12]))));
  (* (--Rsp)) = (Wrd293.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd289.Obj);
  (* (--Rsp)) = (Wrd288.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_4]), 3);

DEFLABEL (label_37)
  goto label_75;

DEFLABEL (label_78)
  (Wrd305.Obj) = (Rsp [3]);
  (Wrd306.Obj) = (current_block [OBJECT_109_6]);
  (Wrd310.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_11]))));
  (* (--Rsp)) = (Wrd310.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd306.Obj);
  (* (--Rsp)) = (Wrd305.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_4]), 3);

DEFLABEL (label_38)
  goto label_77;

DEFLABEL (label_80)
  (Wrd322.Obj) = (Rsp [3]);
  (Wrd323.Obj) = (current_block [OBJECT_109_5]);
  (Wrd327.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_10]))));
  (* (--Rsp)) = (Wrd327.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd323.Obj);
  (* (--Rsp)) = (Wrd322.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_4]), 3);

DEFLABEL (label_39)
  goto label_79;

DEFLABEL (label_82)
  (Wrd339.Obj) = (Rsp [3]);
  (Wrd340.Obj) = (current_block [OBJECT_109_3]);
  (Wrd344.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_9]))));
  (* (--Rsp)) = (Wrd344.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd340.Obj);
  (* (--Rsp)) = (Wrd339.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_4]), 3);

DEFLABEL (label_40)
  goto label_81;

DEFLABEL (label_84)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_109_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_8]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_109_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_109_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_87;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_109_5);
  goto label_62;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_110_4 3
#define LABEL_110_6 5
#define LABEL_110_5 7
#define LABEL_110_7 9
#define LABEL_110_8 11
#define LABEL_110_9 13
#define LABEL_110_10 15
#define ENVIRONMENT_LABEL_110_3 25
#define DEBUGGING_LABEL_110_2 24
#define OBJECT_110_4 23
#define OBJECT_110_3 22
#define OBJECT_110_2 21
#define OBJECT_110_1 20
#define OBJECT_110_0 19
#define FREE_REFERENCE_110_1 17
#define FREE_REFERENCE_110_0 18
#define FREE_REFERENCES_LABEL_110_0 16
#define NUMBER_OF_LINKER_SECTIONS_110_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_110 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd37;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_110_4);
      goto block_thread_events_9;

    case 1:
      current_block = (Rpc - LABEL_110_6);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_110_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_110_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_110_8);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_110_9);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_110_10);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_thread_events_16)
DEFLABEL (block_thread_events_9)
  INTERRUPT_CHECK (26, LABEL_110_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_110_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_26;
  Wrd8 = Wrd12;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_110_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_110_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_24;
  Wrd5 = Wrd9;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_21;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd21.Lng))))
    goto label_21;
  (Wrd15.Obj) = ((Wrd19.pObj) [5]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_20)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 62))
    goto label_19;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd43.Lng))))
    goto label_19;
  (Wrd37.Obj) = (current_block [OBJECT_110_3]);
  ((Wrd41.pObj) [5]) = (Wrd37.Obj);

DEFLABEL (label_18)
  (Wrd30.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_17)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_10]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_0]), 1);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_110_10);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.Obj) = (current_block [OBJECT_110_1]);
  (Wrd48.Obj) = (current_block [OBJECT_110_3]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_9]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_4]), 3);

DEFLABEL (label_14)
  goto label_18;

DEFLABEL (label_21)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.Obj) = (current_block [OBJECT_110_1]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_2]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_17;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_110_7])), (Wrd6.pObj));

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_110_6])), (Wrd9.pObj));

DEFLABEL (label_11)
  (Wrd8.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_111_4 3
#define LABEL_111_6 5
#define LABEL_111_5 7
#define LABEL_111_7 9
#define LABEL_111_8 11
#define LABEL_111_10 13
#define LABEL_111_11 15
#define ENVIRONMENT_LABEL_111_3 29
#define DEBUGGING_LABEL_111_2 28
#define OBJECT_111_4 27
#define OBJECT_111_3 26
#define OBJECT_111_2 25
#define OBJECT_111_1 24
#define OBJECT_111_0 23
#define EXECUTE_CACHE_111_12 17
#define EXECUTE_CACHE_111_9 19
#define FREE_REFERENCE_111_0 22
#define FREE_REFERENCES_LABEL_111_0 16
#define NUMBER_OF_LINKER_SECTIONS_111_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_111 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_111_4);
      goto unblock_thread_events_7;

    case 1:
      current_block = (Rpc - LABEL_111_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_111_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_111_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_111_8);
      goto lambda_2;

    case 5:
      current_block = (Rpc - LABEL_111_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_111_11);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unblock_thread_events_11)
DEFLABEL (unblock_thread_events_7)
  INTERRUPT_CHECK (26, LABEL_111_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_111_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_14;
  Wrd8 = Wrd12;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_111_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_111_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_111_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_111_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_111_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_111_0]), 1);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_111_10);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_111_6])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_13;

DEFLABEL (lambda_12)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_111_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_111_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_111_11);
  (Wrd5.Obj) = (current_block [OBJECT_111_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_16;

DEFLABEL (label_15)
  INVOKE_PRIMITIVE ((current_block [OBJECT_111_4]), 3);

DEFLABEL (label_16)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_15;
  ((Wrd16.pObj) [5]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_111_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_112_4 3
#define LABEL_112_6 5
#define LABEL_112_5 7
#define LABEL_112_7 9
#define LABEL_112_9 11
#define LABEL_112_10 13
#define LABEL_112_12 15
#define LABEL_112_15 17
#define LABEL_112_11 19
#define LABEL_112_16 21
#define LABEL_112_13 23
#define TAG_112_14 10
#define LABEL_112_8 25
#define LABEL_112_17 27
#define LABEL_112_18 29
#define LABEL_112_19 31
#define LABEL_112_21 33
#define LABEL_112_20 35
#define ENVIRONMENT_LABEL_112_3 47
#define DEBUGGING_LABEL_112_2 46
#define OBJECT_112_5 45
#define OBJECT_112_4 44
#define OBJECT_112_3 43
#define OBJECT_112_2 42
#define OBJECT_112_1 41
#define OBJECT_112_0 40
#define FREE_REFERENCE_112_2 37
#define FREE_REFERENCE_112_1 38
#define FREE_REFERENCE_112_0 39
#define FREE_REFERENCES_LABEL_112_0 36
#define NUMBER_OF_LINKER_SECTIONS_112_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_112 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd30;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd47;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_112_4);
      goto with_thread_events_blocked_17;

    case 1:
      current_block = (Rpc - LABEL_112_6);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_112_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_112_7);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_112_9);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_112_10);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_112_12);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_112_15);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_112_11);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_112_16);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_112_13);
      goto lambda_28;

    case 11:
      current_block = (Rpc - LABEL_112_8);
      goto continuation_1;

    case 12:
      current_block = (Rpc - LABEL_112_17);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_112_18);
      goto continuation_4;

    case 14:
      current_block = (Rpc - LABEL_112_19);
      goto continuation_5;

    case 15:
      current_block = (Rpc - LABEL_112_21);
      goto label_25;

    case 16:
      current_block = (Rpc - LABEL_112_20);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_thread_events_blocked_27)
DEFLABEL (with_thread_events_blocked_17)
  INTERRUPT_CHECK (26, LABEL_112_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_112_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_45;
  Wrd8 = Wrd12;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_112_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_112_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_112_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_43;
  Wrd5 = Wrd9;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd5.Obj);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_29;
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112_8]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd65.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_112_0]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_112_8);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_29)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_41;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd21.Lng))))
    goto label_41;
  (Wrd15.Obj) = ((Wrd19.pObj) [5]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_40)
  (Wrd54.Obj) = (Rsp [1]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 62))
    goto label_39;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd53.Lng))))
    goto label_39;
  (Wrd47.Obj) = (current_block [OBJECT_112_3]);
  ((Wrd51.pObj) [5]) = (Wrd47.Obj);

DEFLABEL (label_38)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112_11]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_112_2]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_37;
  Wrd33 = Wrd37;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd33.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd40.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_112_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_112_13])));
  Rhp += 2;
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd40.pObj)));
  Wrd43 = Wrd40;
  (Wrd44.Obj) = (Rsp [6]);
  ((Wrd43.pObj) [2]) = (Wrd44.Obj);
  (Wrd42.Obj) = (Rsp [5]);
  ((Wrd43.pObj) [3]) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_112_5]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_112_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_112_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_35;
  Wrd8 = Wrd12;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd8.Obj);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd16.Obj) = (current_block [OBJECT_112_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (Rsp [2]) = (Wrd18.Obj);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd34.uLng) == 62)
    goto label_31;

DEFLABEL (label_30)
  INVOKE_PRIMITIVE ((current_block [OBJECT_112_4]), 3);

DEFLABEL (label_31)
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd32.Lng))))
    goto label_30;
  ((Wrd30.pObj) [5]) = (Wrd18.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_32)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112_17]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_112_0]), 1);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_112_17);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_33)
  Rsp = (& (Rsp [2]));
  goto label_32;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_112_16])), (Wrd9.pObj));

DEFLABEL (label_24)
  (Wrd8.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_112_12])), (Wrd34.pObj));

DEFLABEL (label_22)
  (Wrd33.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd57.Obj) = (current_block [OBJECT_112_1]);
  (Wrd58.Obj) = (current_block [OBJECT_112_3]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112_10]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_112_4]), 3);

DEFLABEL (label_23)
  goto label_38;

DEFLABEL (label_41)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.Obj) = (current_block [OBJECT_112_1]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112_9]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_112_2]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_112_7])), (Wrd6.pObj));

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_112_6])), (Wrd9.pObj));

DEFLABEL (label_19)
  (Wrd8.Obj) = Rvl;
  goto label_44;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_112_15);
  goto label_32;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_112_13);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_112_0]), 1);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_112_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_112_19);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112_20]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_112_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_47;
  Wrd9 = Wrd13;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_112_0]), 1);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_112_20);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_112_21])), (Wrd10.pObj));

DEFLABEL (label_25)
  (Wrd9.Obj) = Rvl;
  goto label_46;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_113_4 3
#define LABEL_113_6 5
#define LABEL_113_7 7
#define LABEL_113_5 9
#define LABEL_113_8 11
#define LABEL_113_9 13
#define ENVIRONMENT_LABEL_113_3 21
#define DEBUGGING_LABEL_113_2 20
#define OBJECT_113_2 19
#define OBJECT_113_1 18
#define OBJECT_113_0 17
#define FREE_REFERENCE_113_1 15
#define FREE_REFERENCE_113_0 16
#define FREE_REFERENCES_LABEL_113_0 14
#define NUMBER_OF_LINKER_SECTIONS_113_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_113 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd19;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_113_4);
      goto get_thread_event_block_6;

    case 1:
      current_block = (Rpc - LABEL_113_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_113_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_113_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_113_8);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_113_9);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_thread_event_block_11)
DEFLABEL (get_thread_event_block_6)
  INTERRUPT_CHECK (26, LABEL_113_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_113_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_19;
  Wrd8 = Wrd12;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_113_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_113_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_113_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_17;
  Wrd8 = Wrd12;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd8.Obj);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_113_1]);
  (Rsp [1]) = (Wrd17.Obj);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd29.uLng) == 62)
    goto label_13;

DEFLABEL (label_12)
  INVOKE_PRIMITIVE ((current_block [OBJECT_113_2]), 2);

DEFLABEL (label_13)
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd27.Lng))))
    goto label_12;
  (Wrd19.Obj) = ((Wrd25.pObj) [5]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_14)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113_9]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_113_0]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_113_9);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_113_8])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_113_6])), (Wrd9.pObj));

DEFLABEL (label_8)
  (Wrd8.Obj) = Rvl;
  goto label_18;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_113_7);
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_114_4 3
#define LABEL_114_6 5
#define LABEL_114_7 7
#define LABEL_114_5 9
#define LABEL_114_8 11
#define LABEL_114_9 13
#define ENVIRONMENT_LABEL_114_3 22
#define DEBUGGING_LABEL_114_2 21
#define OBJECT_114_3 20
#define OBJECT_114_2 19
#define OBJECT_114_1 18
#define OBJECT_114_0 17
#define FREE_REFERENCE_114_1 15
#define FREE_REFERENCE_114_0 16
#define FREE_REFERENCES_LABEL_114_0 14
#define NUMBER_OF_LINKER_SECTIONS_114_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_114 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_114_4);
      goto set_thread_event_blockB_6;

    case 1:
      current_block = (Rpc - LABEL_114_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_114_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_114_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_114_8);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_114_9);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_thread_event_blockB_11)
DEFLABEL (set_thread_event_blockB_6)
  INTERRUPT_CHECK (26, LABEL_114_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_114_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_19;
  Wrd8 = Wrd12;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_114_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_114_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_114_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_17;
  Wrd8 = Wrd12;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd8.Obj);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd16.Obj) = (current_block [OBJECT_114_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (Rsp [2]) = (Wrd18.Obj);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd34.uLng) == 62)
    goto label_13;

DEFLABEL (label_12)
  INVOKE_PRIMITIVE ((current_block [OBJECT_114_2]), 3);

DEFLABEL (label_13)
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd32.Lng))))
    goto label_12;
  ((Wrd30.pObj) [5]) = (Wrd18.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_14)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_114_0]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_114_9);
  Rvl = (current_block [OBJECT_114_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  Rsp = (& (Rsp [2]));
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_114_8])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_114_6])), (Wrd9.pObj));

DEFLABEL (label_8)
  (Wrd8.Obj) = Rvl;
  goto label_18;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_114_7);
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_115_4 3
#define LABEL_115_7 5
#define LABEL_115_5 7
#define LABEL_115_9 9
#define LABEL_115_13 11
#define LABEL_115_14 13
#define LABEL_115_12 15
#define LABEL_115_15 17
#define LABEL_115_16 19
#define LABEL_115_10 21
#define LABEL_115_18 23
#define LABEL_115_23 25
#define LABEL_115_24 27
#define LABEL_115_20 29
#define LABEL_115_22 31
#define LABEL_115_28 33
#define ENVIRONMENT_LABEL_115_3 66
#define DEBUGGING_LABEL_115_2 65
#define OBJECT_115_7 64
#define OBJECT_115_6 63
#define OBJECT_115_5 62
#define OBJECT_115_4 61
#define OBJECT_115_3 60
#define OBJECT_115_2 59
#define OBJECT_115_1 58
#define OBJECT_115_0 57
#define EXECUTE_CACHE_115_27 35
#define EXECUTE_CACHE_115_26 37
#define EXECUTE_CACHE_115_25 39
#define EXECUTE_CACHE_115_21 41
#define EXECUTE_CACHE_115_19 43
#define EXECUTE_CACHE_115_17 45
#define EXECUTE_CACHE_115_11 47
#define EXECUTE_CACHE_115_8 49
#define EXECUTE_CACHE_115_6 51
#define FREE_REFERENCE_115_2 54
#define FREE_REFERENCE_115_1 55
#define FREE_REFERENCE_115_0 56
#define FREE_REFERENCES_LABEL_115_0 34
#define NUMBER_OF_LINKER_SECTIONS_115_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_115 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd26;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
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
      current_block = (Rpc - LABEL_115_4);
      goto signal_thread_event_16;

    case 1:
      current_block = (Rpc - LABEL_115_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_115_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_115_9);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_115_13);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_115_14);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_115_12);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_115_15);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_115_16);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_115_10);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_115_18);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_115_23);
      goto label_22;

    case 12:
      current_block = (Rpc - LABEL_115_24);
      goto label_23;

    case 13:
      current_block = (Rpc - LABEL_115_20);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_115_22);
      goto continuation_8;

    case 15:
      current_block = (Rpc - LABEL_115_28);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (signal_thread_event_25)
DEFLABEL (signal_thread_event_16)
  INTERRUPT_CHECK (26, LABEL_115_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_115_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_115_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_44;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_115_0]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_115_1]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_115_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_115_7);

DEFLABEL (label_44)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_115_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_43;
  Wrd7 = Wrd11;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  if (! ((Wrd13.Obj) == (Wrd7.Obj)))
    goto label_27;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115_10]))));
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_115_11]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_115_10);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115_20]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_115_21]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_115_20);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_26;
  Rvl = (current_block [OBJECT_115_7]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_26)
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_115_27]));

DEFLABEL (label_27)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115_12]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_115_1]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_41;
  Wrd18 = Wrd22;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_115_2]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_115_12);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_39;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_39;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_38)
  if ((Wrd5.Obj) == (current_block [OBJECT_115_5]))
    goto label_35;

DEFLABEL (label_34)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115_18]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_115_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_115_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_29;

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_115_26]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_115_22);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_115_2]), 1);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_115_28);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_115_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_33;
  Wrd10 = Wrd14;

DEFLABEL (label_32)
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_115_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_31;
  Wrd17 = Wrd21;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_115_25]));

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_115_24])), (Wrd18.pObj));

DEFLABEL (label_23)
  (Wrd17.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_115_23])), (Wrd11.pObj));

DEFLABEL (label_22)
  (Wrd10.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115_14]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_115_2]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_37;
  Wrd32 = Wrd36;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_115_6]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_115_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_115_14);
  goto label_34;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_115_16])), (Wrd33.pObj));

DEFLABEL (label_21)
  (Wrd32.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_115_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_115_4]), 2);

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_115_13])), (Wrd19.pObj));

DEFLABEL (label_19)
  (Wrd18.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_115_9])), (Wrd8.pObj));

DEFLABEL (label_18)
  (Wrd7.Obj) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_116_4 3
#define LABEL_116_5 5
#define LABEL_116_7 7
#define LABEL_116_8 9
#define ENVIRONMENT_LABEL_116_3 21
#define DEBUGGING_LABEL_116_2 20
#define OBJECT_116_4 19
#define OBJECT_116_3 18
#define OBJECT_116_2 17
#define OBJECT_116_1 16
#define OBJECT_116_0 15
#define EXECUTE_CACHE_116_9 11
#define EXECUTE_CACHE_116_6 13
#define FREE_REFERENCES_LABEL_116_0 10
#define NUMBER_OF_LINKER_SECTIONS_116_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_116 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_116_4);
      goto Z__signal_thread_event_4;

    case 1:
      current_block = (Rpc - LABEL_116_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_116_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_116_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__signal_thread_event_9)
DEFLABEL (Z__signal_thread_event_4)
  INTERRUPT_CHECK (26, LABEL_116_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_116_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_116_5);
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_14;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd35.Lng))))
    goto label_14;
  (Wrd7.Obj) = ((Wrd33.pObj) [5]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_116_4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_13;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_13;
  (Wrd9.Obj) = ((Wrd15.pObj) [2]);

DEFLABEL (label_12)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_116_3])))
    goto label_10;
  (Wrd28.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd28.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_116_9]));

DEFLABEL (label_13)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_116_2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_116_1]), 2);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_14)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.Obj) = (current_block [OBJECT_116_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116_7]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_116_1]), 2);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_117_4 3
#define LABEL_117_5 5
#define LABEL_117_8 7
#define LABEL_117_6 9
#define ENVIRONMENT_LABEL_117_3 25
#define DEBUGGING_LABEL_117_2 24
#define OBJECT_117_4 23
#define OBJECT_117_3 22
#define OBJECT_117_2 21
#define OBJECT_117_1 20
#define OBJECT_117_0 19
#define EXECUTE_CACHE_117_11 11
#define EXECUTE_CACHE_117_10 13
#define EXECUTE_CACHE_117_9 15
#define EXECUTE_CACHE_117_7 17
#define FREE_REFERENCES_LABEL_117_0 10
#define NUMBER_OF_LINKER_SECTIONS_117_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_117 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_117_4);
      goto Z__add_pending_event_7;

    case 1:
      current_block = (Rpc - LABEL_117_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_117_8);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_117_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__add_pending_event_11)
DEFLABEL (Z__add_pending_event_7)
  INTERRUPT_CHECK (26, LABEL_117_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_16;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_16;
  (Wrd7.Obj) = ((Wrd11.pObj) [6]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_15)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_117_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;
  if (Rvl == (current_block [OBJECT_117_4]))
    goto label_13;

DEFLABEL (label_12)
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117_11]));

DEFLABEL (label_13)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_117_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  (Wrd23.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd23.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117_9]));

DEFLABEL (label_14)
  if (Rvl == (current_block [OBJECT_117_2]))
    goto label_12;
  Rvl = (current_block [OBJECT_117_3]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_117_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_117_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_118_4 3
#define LABEL_118_5 5
#define LABEL_118_7 7
#define LABEL_118_9 9
#define LABEL_118_10 11
#define LABEL_118_6 13
#define LABEL_118_11 15
#define LABEL_118_12 17
#define LABEL_118_13 19
#define LABEL_118_14 21
#define ENVIRONMENT_LABEL_118_3 34
#define DEBUGGING_LABEL_118_2 33
#define OBJECT_118_5 32
#define OBJECT_118_4 31
#define OBJECT_118_3 30
#define OBJECT_118_2 29
#define OBJECT_118_1 28
#define OBJECT_118_0 27
#define EXECUTE_CACHE_118_8 23
#define FREE_REFERENCE_118_0 26
#define FREE_REFERENCES_LABEL_118_0 22
#define NUMBER_OF_LINKER_SECTIONS_118_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_118 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd31;
  machine_word Wrd30;
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
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd49;
  machine_word Wrd58;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_118_4);
      goto handle_thread_events_13;

    case 1:
      current_block = (Rpc - LABEL_118_5);
      goto loop_11;

    case 2:
      current_block = (Rpc - LABEL_118_7);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_118_9);
      goto continuation_8;

    case 4:
      current_block = (Rpc - LABEL_118_10);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_118_6);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_118_11);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_118_12);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_118_13);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_118_14);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handle_thread_events_20)
DEFLABEL (handle_thread_events_13)
  INTERRUPT_CHECK (26, LABEL_118_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto loop_11;

DEFLABEL (loop_21)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_118_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_118_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_34;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_34;
  (Wrd11.Obj) = ((Wrd15.pObj) [6]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_33)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_118_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_118_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_118_0])))
    goto label_22;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_22)
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_24;

DEFLABEL (label_23)
  (Wrd49.Obj) = (current_block [OBJECT_118_0]);
  (Rsp [1]) = (Wrd49.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_11;

DEFLABEL (label_24)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_32;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd20.Lng))))
    goto label_32;
  (Wrd14.Obj) = ((Wrd18.pObj) [5]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_31)
  (Wrd41.Obj) = (Rsp [4]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_30;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd40.Lng))))
    goto label_30;
  (Wrd34.Obj) = (current_block [OBJECT_118_0]);
  ((Wrd38.pObj) [5]) = (Wrd34.Obj);

DEFLABEL (label_29)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118_13]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_118_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_118_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_28;
  Wrd8 = Wrd12;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_118_5]), 1);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_118_9);
  (Wrd53.Obj) = (current_block [OBJECT_118_3]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd66.uLng) == 62)
    goto label_26;

DEFLABEL (label_25)
  INVOKE_PRIMITIVE ((current_block [OBJECT_118_4]), 3);

DEFLABEL (label_26)
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd64.Lng))))
    goto label_25;
  (Wrd58.Obj) = (Rsp [2]);
  ((Wrd62.pObj) [5]) = (Wrd58.Obj);
  Rsp = (& (Rsp [4]));
  goto label_23;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_118_14])), (Wrd9.pObj));

DEFLABEL (label_18)
  (Wrd8.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd43.Obj) = (Rsp [4]);
  (Wrd44.Obj) = (current_block [OBJECT_118_3]);
  (Wrd45.Obj) = (current_block [OBJECT_118_0]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118_12]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_118_4]), 3);

DEFLABEL (label_17)
  goto label_29;

DEFLABEL (label_32)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Obj) = (current_block [OBJECT_118_3]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118_11]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_118_2]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (current_block [OBJECT_118_1]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_118_2]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_118_10);
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_119_4 3
#define LABEL_119_6 5
#define LABEL_119_5 7
#define LABEL_119_8 9
#define LABEL_119_11 11
#define LABEL_119_12 13
#define LABEL_119_14 15
#define LABEL_119_7 17
#define LABEL_119_13 19
#define LABEL_119_9 21
#define LABEL_119_15 23
#define LABEL_119_17 25
#define LABEL_119_19 27
#define ENVIRONMENT_LABEL_119_3 45
#define DEBUGGING_LABEL_119_2 44
#define OBJECT_119_3 43
#define OBJECT_119_2 42
#define OBJECT_119_1 41
#define OBJECT_119_0 40
#define EXECUTE_CACHE_119_20 29
#define EXECUTE_CACHE_119_18 31
#define EXECUTE_CACHE_119_16 33
#define EXECUTE_CACHE_119_10 35
#define FREE_REFERENCE_119_1 38
#define FREE_REFERENCE_119_0 39
#define FREE_REFERENCES_LABEL_119_0 28
#define NUMBER_OF_LINKER_SECTIONS_119_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_119 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd34;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd54;
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
      current_block = (Rpc - LABEL_119_4);
      goto allow_thread_event_delivery_14;

    case 1:
      current_block = (Rpc - LABEL_119_6);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_119_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_119_8);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_119_11);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_119_12);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_119_14);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_119_7);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_119_13);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_119_9);
      goto continuation_2;

    case 10:
      current_block = (Rpc - LABEL_119_15);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_119_17);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_119_19);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (allow_thread_event_delivery_21)
DEFLABEL (allow_thread_event_delivery_14)
  INTERRUPT_CHECK (26, LABEL_119_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_119_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_33;
  Wrd8 = Wrd12;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_119_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_119_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_119_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_31;
  Wrd8 = Wrd12;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd8.Obj);
  if (! ((Wrd8.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_22;
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119_9]))));
  (* (--Rsp)) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_119_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_119_9);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_119_18]));

DEFLABEL (label_22)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_29;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd24.Lng))))
    goto label_29;
  (Wrd18.Obj) = ((Wrd22.pObj) [5]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_28)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 62))
    goto label_27;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd43.Lng))))
    goto label_27;
  ((Wrd41.pObj) [5]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_26)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119_13]))));
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_119_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_119_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_119_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_119_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_119_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_119_14);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_119_1]);
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd22.uLng) == 62)
    goto label_24;

DEFLABEL (label_23)
  INVOKE_PRIMITIVE ((current_block [OBJECT_119_3]), 3);

DEFLABEL (label_24)
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd20.Lng))))
    goto label_23;
  ((Wrd18.pObj) [5]) = (Wrd9.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_25)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_119_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_119_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_119_0]), 1);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_119_19);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.Obj) = (current_block [OBJECT_119_1]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119_12]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_119_3]), 3);

DEFLABEL (label_19)
  goto label_26;

DEFLABEL (label_29)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (current_block [OBJECT_119_1]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119_11]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_119_2]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_119_8])), (Wrd9.pObj));

DEFLABEL (label_17)
  (Wrd8.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_119_6])), (Wrd9.pObj));

DEFLABEL (label_16)
  (Wrd8.Obj) = Rvl;
  goto label_32;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_119_7);
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_120_4 3
#define ENVIRONMENT_LABEL_120_3 7
#define DEBUGGING_LABEL_120_2 6
#define OBJECT_120_1 5
#define OBJECT_120_0 4
#define FREE_REFERENCES_LABEL_120_0 4
#define NUMBER_OF_LINKER_SECTIONS_120_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_120 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_120_4);
      goto timer_record_time_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (timer_record_time_3)
DEFLABEL (timer_record_time_0)
  INTERRUPT_CHECK (26, LABEL_120_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_120_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_120_1]), 2);

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

#define LABEL_121_4 3
#define ENVIRONMENT_LABEL_121_3 7
#define DEBUGGING_LABEL_121_2 6
#define OBJECT_121_1 5
#define OBJECT_121_0 4
#define FREE_REFERENCES_LABEL_121_0 4
#define NUMBER_OF_LINKER_SECTIONS_121_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_121 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_121_4);
      goto timer_record_thread_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (timer_record_thread_3)
DEFLABEL (timer_record_thread_0)
  INTERRUPT_CHECK (26, LABEL_121_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_121_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_121_1]), 2);

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

#define LABEL_122_4 3
#define ENVIRONMENT_LABEL_122_3 7
#define DEBUGGING_LABEL_122_2 6
#define OBJECT_122_1 5
#define OBJECT_122_0 4
#define FREE_REFERENCES_LABEL_122_0 4
#define NUMBER_OF_LINKER_SECTIONS_122_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_122 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_122_4);
      goto timer_record_event_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (timer_record_event_3)
DEFLABEL (timer_record_event_0)
  INTERRUPT_CHECK (26, LABEL_122_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_122_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_122_1]), 2);

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

#define LABEL_123_4 3
#define ENVIRONMENT_LABEL_123_3 7
#define DEBUGGING_LABEL_123_2 6
#define OBJECT_123_1 5
#define OBJECT_123_0 4
#define FREE_REFERENCES_LABEL_123_0 4
#define NUMBER_OF_LINKER_SECTIONS_123_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_123 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_123_4);
      goto timer_record_next_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (timer_record_next_3)
DEFLABEL (timer_record_next_0)
  INTERRUPT_CHECK (26, LABEL_123_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_123_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_123_1]), 2);

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

#define LABEL_124_4 3
#define ENVIRONMENT_LABEL_124_3 8
#define DEBUGGING_LABEL_124_2 7
#define OBJECT_124_2 6
#define OBJECT_124_1 5
#define OBJECT_124_0 4
#define FREE_REFERENCES_LABEL_124_0 4
#define NUMBER_OF_LINKER_SECTIONS_124_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_124 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_124_4);
      goto set_timer_record_threadB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_timer_record_threadB_3)
DEFLABEL (set_timer_record_threadB_0)
  INTERRUPT_CHECK (26, LABEL_124_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_124_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_124_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_124_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_125_4 3
#define ENVIRONMENT_LABEL_125_3 8
#define DEBUGGING_LABEL_125_2 7
#define OBJECT_125_2 6
#define OBJECT_125_1 5
#define OBJECT_125_0 4
#define FREE_REFERENCES_LABEL_125_0 4
#define NUMBER_OF_LINKER_SECTIONS_125_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_125 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_125_4);
      goto set_timer_record_eventB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_timer_record_eventB_3)
DEFLABEL (set_timer_record_eventB_0)
  INTERRUPT_CHECK (26, LABEL_125_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_125_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_125_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_125_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_126_4 3
#define ENVIRONMENT_LABEL_126_3 8
#define DEBUGGING_LABEL_126_2 7
#define OBJECT_126_2 6
#define OBJECT_126_1 5
#define OBJECT_126_0 4
#define FREE_REFERENCES_LABEL_126_0 4
#define NUMBER_OF_LINKER_SECTIONS_126_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_126 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_126_4);
      goto set_timer_record_nextB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_timer_record_nextB_3)
DEFLABEL (set_timer_record_nextB_0)
  INTERRUPT_CHECK (26, LABEL_126_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_126_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_126_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_126_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_127_4 3
#define LABEL_127_5 5
#define LABEL_127_6 7
#define LABEL_127_7 9
#define ENVIRONMENT_LABEL_127_3 17
#define DEBUGGING_LABEL_127_2 16
#define OBJECT_127_3 15
#define OBJECT_127_2 14
#define OBJECT_127_1 13
#define OBJECT_127_0 12
#define FREE_REFERENCE_127_0 11
#define FREE_REFERENCES_LABEL_127_0 10
#define NUMBER_OF_LINKER_SECTIONS_127_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_127 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_127_4);
      goto timer_recordP_4;

    case 1:
      current_block = (Rpc - LABEL_127_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_127_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_127_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (timer_recordP_10)
DEFLABEL (timer_recordP_4)
  INTERRUPT_CHECK (26, LABEL_127_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_127_0]));
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
  Rvl = (current_block [OBJECT_127_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_127_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_127_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_127_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_127_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_127_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_127_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_128_4 3
#define LABEL_128_5 5
#define LABEL_128_7 7
#define LABEL_128_8 9
#define LABEL_128_12 11
#define LABEL_128_9 13
#define LABEL_128_11 15
#define LABEL_128_15 17
#define LABEL_128_16 19
#define LABEL_128_17 21
#define LABEL_128_18 23
#define LABEL_128_19 25
#define LABEL_128_20 27
#define LABEL_128_21 29
#define LABEL_128_22 31
#define LABEL_128_14 33
#define LABEL_128_23 35
#define LABEL_128_25 37
#define ENVIRONMENT_LABEL_128_3 58
#define DEBUGGING_LABEL_128_2 57
#define OBJECT_128_4 56
#define OBJECT_128_3 55
#define OBJECT_128_2 54
#define OBJECT_128_1 53
#define OBJECT_128_0 52
#define EXECUTE_CACHE_128_24 39
#define EXECUTE_CACHE_128_13 41
#define EXECUTE_CACHE_128_10 43
#define EXECUTE_CACHE_128_6 45
#define FREE_REFERENCE_128_1 48
#define FREE_REFERENCE_128_0 49
#define FREE_ASSIGNMENT_128_0 51
#define FREE_REFERENCES_LABEL_128_0 38
#define NUMBER_OF_LINKER_SECTIONS_128_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_128 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd68;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd70;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd69;
  machine_word Wrd52;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd98;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd36;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_128_4);
      goto register_timer_event_22;

    case 1:
      current_block = (Rpc - LABEL_128_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_128_7);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_128_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_128_12);
      goto label_25;

    case 5:
      current_block = (Rpc - LABEL_128_9);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_128_11);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_128_15);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_128_16);
      goto loop_14;

    case 9:
      current_block = (Rpc - LABEL_128_17);
      goto label_27;

    case 10:
      current_block = (Rpc - LABEL_128_18);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_128_19);
      goto label_29;

    case 12:
      current_block = (Rpc - LABEL_128_20);
      goto label_32;

    case 13:
      current_block = (Rpc - LABEL_128_21);
      goto label_30;

    case 14:
      current_block = (Rpc - LABEL_128_22);
      goto label_31;

    case 15:
      current_block = (Rpc - LABEL_128_14);
      goto continuation_6;

    case 16:
      current_block = (Rpc - LABEL_128_23);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_128_25);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_timer_event_34)
DEFLABEL (register_timer_event_22)
  INTERRUPT_CHECK (26, LABEL_128_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_128_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_128_5);
  (Wrd5.Obj) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_42;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_42;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd15.Lng) + (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_42;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_41)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd23.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_128_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_128_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_128_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_128_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_128_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_40;
  Wrd8 = Wrd12;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_128_0]), 1);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_128_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_128_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_38;
  Wrd9 = Wrd13;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd9.Obj);
  goto loop_14;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_128_14);

DEFLABEL (label_36)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_128_24]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_128_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_128_0]), 1);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_128_25);
  Rsp = (& (Rsp [2]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_128_15])), (Wrd10.pObj));

DEFLABEL (label_26)
  (Wrd9.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_128_12])), (Wrd9.pObj));

DEFLABEL (label_25)
  (Wrd8.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (loop_35)
DEFLABEL (loop_14)
  INTERRUPT_CHECK (26, LABEL_128_16);
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_46;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_60;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_60;
  (Wrd10.Obj) = ((Wrd16.pObj) [2]);

DEFLABEL (label_59)
  (Wrd26.Obj) = (Rsp [5]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_58;
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_58;
  (Wrd114.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd115.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  if ((Wrd114.Lng) < (Wrd115.Lng))
    goto label_46;

DEFLABEL (label_45)
  (Wrd35.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd35.Obj);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd46.uLng) == 62))
    goto label_44;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd44.Lng))))
    goto label_44;
  (Wrd36.Obj) = ((Wrd42.pObj) [5]);

DEFLABEL (label_43)
  (Rsp [0]) = (Wrd36.Obj);
  goto loop_14;

DEFLABEL (label_44)
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.Obj) = (current_block [OBJECT_128_3]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128_19]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_128_2]), 2);

DEFLABEL (label_29)
  (Wrd36.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd105.Obj) = (Rsp [4]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if (! ((Wrd106.uLng) == 62))
    goto label_57;
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd103.Obj) = ((Wrd102.pObj) [0]);
  (Wrd104.Lng) = (FIXNUM_TO_LONG (Wrd103.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd104.Lng))))
    goto label_57;
  (Wrd98.Obj) = (Rsp [0]);
  ((Wrd102.pObj) [5]) = (Wrd98.Obj);

DEFLABEL (label_56)
  (Wrd52.Obj) = (Rsp [1]);
  if ((Wrd52.Obj) == ((SCHEME_OBJECT) 0))
    goto label_49;
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd55.Obj) = (current_block [OBJECT_128_3]);
  (Rsp [1]) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [5]);
  (Rsp [2]) = (Wrd56.Obj);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd68.uLng) == 62)
    goto label_48;

DEFLABEL (label_47)
  INVOKE_PRIMITIVE ((current_block [OBJECT_128_4]), 3);

DEFLABEL (label_48)
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd66.Lng))))
    goto label_47;
  ((Wrd64.pObj) [5]) = (Wrd56.Obj);
  Rsp = (& (Rsp [4]));
  goto label_36;

DEFLABEL (label_49)
  (Wrd69.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd69.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd71.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_128_1]));
  (Wrd74.Obj) = ((Wrd71.pObj) [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd75.uLng) == 50)
    goto label_55;

DEFLABEL (label_54)
  Wrd70 = Wrd74;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd82.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_128_0]));
  (Wrd83.Obj) = (Rsp [1]);
  (Wrd90.Obj) = ((Wrd82.pObj) [0]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if ((Wrd91.uLng) == 50)
    goto label_52;

DEFLABEL (label_51)
  ((Wrd82.pObj) [0]) = (Wrd83.Obj);

DEFLABEL (label_50)
  Rsp = (& (Rsp [3]));
  goto label_36;

DEFLABEL (label_52)
  if ((Wrd90.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_51;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_128_22])), (Wrd82.pObj), (Wrd83.Obj));

DEFLABEL (label_31)
  goto label_50;

DEFLABEL (label_55)
  if ((Wrd74.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_54;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_128_21])), (Wrd71.pObj));

DEFLABEL (label_30)
  (Wrd70.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_57)
  (Wrd107.Obj) = (Rsp [4]);
  (Wrd108.Obj) = (current_block [OBJECT_128_3]);
  (Wrd109.Obj) = (Rsp [0]);
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128_20]))));
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_128_4]), 3);

DEFLABEL (label_32)
  goto label_56;

DEFLABEL (label_58)
  (Wrd29.Obj) = (Rsp [5]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128_18]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_28)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  goto label_46;

DEFLABEL (label_60)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (current_block [OBJECT_128_1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128_17]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_128_2]), 2);

DEFLABEL (label_27)
  (Wrd10.Obj) = Rvl;
  goto label_59;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_129_4 3
#define LABEL_129_5 5
#define LABEL_129_7 7
#define LABEL_129_8 9
#define TAG_129_9 3
#define LABEL_129_11 11
#define LABEL_129_12 13
#define ENVIRONMENT_LABEL_129_3 26
#define DEBUGGING_LABEL_129_2 25
#define OBJECT_129_1 24
#define OBJECT_129_0 23
#define EXECUTE_CACHE_129_14 15
#define EXECUTE_CACHE_129_13 17
#define EXECUTE_CACHE_129_10 19
#define EXECUTE_CACHE_129_6 21
#define FREE_REFERENCES_LABEL_129_0 14
#define NUMBER_OF_LINKER_SECTIONS_129_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_129 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_129_4);
      goto sleep_current_thread_11;

    case 1:
      current_block = (Rpc - LABEL_129_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_129_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_129_8);
      goto lambda_15;

    case 4:
      current_block = (Rpc - LABEL_129_11);
      goto do_loop_7;

    case 5:
      current_block = (Rpc - LABEL_129_12);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sleep_current_thread_14)
DEFLABEL (sleep_current_thread_11)
  INTERRUPT_CHECK (26, LABEL_129_4);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_129_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_129_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_129_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_129_8])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_129_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_129_7);
  goto do_loop_7;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_129_8);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = (current_block [OBJECT_129_0]);
  ((Wrd8.pObj) [0]) = (Wrd9.Obj);
  Rvl = (current_block [OBJECT_129_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (do_loop_16)
DEFLABEL (do_loop_7)
  INTERRUPT_CHECK (26, LABEL_129_11);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_17;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_129_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_129_12);
  Rsp = (& (Rsp [1]));
  goto do_loop_7;

DEFLABEL (label_17)
  Rsp = (& (Rsp [1]));
  (Wrd11.Obj) = (Rsp [0]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;
  Rvl = (current_block [OBJECT_129_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_18)
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_129_14]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_130_4 3
#define LABEL_130_5 5
#define LABEL_130_7 7
#define LABEL_130_8 9
#define LABEL_130_9 11
#define LABEL_130_10 13
#define LABEL_130_12 15
#define LABEL_130_13 17
#define LABEL_130_14 19
#define LABEL_130_15 21
#define LABEL_130_17 23
#define LABEL_130_11 25
#define LABEL_130_18 27
#define ENVIRONMENT_LABEL_130_3 45
#define DEBUGGING_LABEL_130_2 44
#define OBJECT_130_6 43
#define OBJECT_130_5 42
#define OBJECT_130_4 41
#define OBJECT_130_3 40
#define OBJECT_130_2 39
#define OBJECT_130_1 38
#define OBJECT_130_0 37
#define EXECUTE_CACHE_130_16 29
#define EXECUTE_CACHE_130_6 31
#define FREE_REFERENCE_130_0 34
#define FREE_ASSIGNMENT_130_0 36
#define FREE_REFERENCES_LABEL_130_0 28
#define NUMBER_OF_LINKER_SECTIONS_130_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_130 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd100;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd53;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd37;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_130_4);
      goto deliver_timer_events_14;

    case 1:
      current_block = (Rpc - LABEL_130_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_130_7);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_130_8);
      goto do_loop_11;

    case 4:
      current_block = (Rpc - LABEL_130_9);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_130_10);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_130_12);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_130_13);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_130_14);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_130_15);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_130_17);
      goto label_23;

    case 11:
      current_block = (Rpc - LABEL_130_11);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_130_18);
      goto label_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (deliver_timer_events_26)
DEFLABEL (deliver_timer_events_14)
  INTERRUPT_CHECK (26, LABEL_130_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_130_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_130_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_130_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_29;
  Wrd5 = Wrd9;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_11;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_130_7])), (Wrd6.pObj));

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_28;

DEFLABEL (do_loop_27)
DEFLABEL (do_loop_11)
  INTERRUPT_CHECK (26, LABEL_130_8);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_45;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_45;
  (Wrd7.Obj) = ((Wrd13.pObj) [2]);

DEFLABEL (label_44)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_43;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_43;
  (Wrd116.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd117.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd116.Lng) < (Wrd117.Lng))
    goto label_39;

DEFLABEL (label_38)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130_11]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 62))
    goto label_37;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd43.Lng))))
    goto label_37;
  (Wrd37.Obj) = ((Wrd41.pObj) [4]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_36)
  (Wrd60.Obj) = (Rsp [2]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 62))
    goto label_35;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd59.Lng))))
    goto label_35;
  (Wrd53.Obj) = ((Wrd57.pObj) [3]);
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_34)
  (Wrd93.Obj) = (Rsp [3]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd94.uLng) == 62))
    goto label_33;
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd91.Obj) = ((Wrd90.pObj) [0]);
  (Wrd92.Lng) = (FIXNUM_TO_LONG (Wrd91.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd92.Lng))))
    goto label_33;
  ((Wrd90.pObj) [3]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_32)
  (Wrd76.Obj) = (Rsp [3]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd77.uLng) == 62))
    goto label_31;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd75.Lng))))
    goto label_31;
  ((Wrd73.pObj) [4]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_30)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_130_16]));

DEFLABEL (label_31)
  (Wrd78.Obj) = (Rsp [3]);
  (Wrd79.Obj) = (current_block [OBJECT_130_2]);
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130_15]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_130_4]), 3);

DEFLABEL (label_21)
  goto label_30;

DEFLABEL (label_33)
  (Wrd95.Obj) = (Rsp [3]);
  (Wrd96.Obj) = (current_block [OBJECT_130_3]);
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130_14]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_130_4]), 3);

DEFLABEL (label_22)
  goto label_32;

DEFLABEL (label_35)
  (Wrd62.Obj) = (Rsp [2]);
  (Wrd63.Obj) = (current_block [OBJECT_130_3]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130_13]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_130_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.Obj) = (current_block [OBJECT_130_2]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130_12]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_130_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd101.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_130_0]));
  (Wrd102.Obj) = (Rsp [0]);
  (Wrd109.Obj) = ((Wrd101.pObj) [0]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if ((Wrd110.uLng) == 50)
    goto label_42;

DEFLABEL (label_41)
  ((Wrd101.pObj) [0]) = (Wrd102.Obj);

DEFLABEL (label_40)
  Rvl = (current_block [OBJECT_130_5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_42)
  if ((Wrd109.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_41;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_130_17])), (Wrd101.pObj), (Wrd102.Obj));

DEFLABEL (label_23)
  goto label_40;

DEFLABEL (label_43)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130_10]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  goto label_39;

DEFLABEL (label_45)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_130_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_130_1]), 2);

DEFLABEL (label_17)
  (Wrd7.Obj) = Rvl;
  goto label_44;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_130_11);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_47;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_47;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_46)
  (Rsp [0]) = (Wrd5.Obj);
  goto do_loop_11;

DEFLABEL (label_47)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_130_6]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130_18]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_130_1]), 2);

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_46;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_131_4 3
#define LABEL_131_7 5
#define LABEL_131_5 7
#define LABEL_131_10 9
#define LABEL_131_9 11
#define LABEL_131_12 13
#define LABEL_131_13 15
#define LABEL_131_14 17
#define LABEL_131_15 19
#define LABEL_131_16 21
#define LABEL_131_11 23
#define LABEL_131_17 25
#define LABEL_131_19 27
#define ENVIRONMENT_LABEL_131_3 47
#define DEBUGGING_LABEL_131_2 46
#define OBJECT_131_5 45
#define OBJECT_131_4 44
#define OBJECT_131_3 43
#define OBJECT_131_2 42
#define OBJECT_131_1 41
#define OBJECT_131_0 40
#define EXECUTE_CACHE_131_18 29
#define EXECUTE_CACHE_131_8 31
#define EXECUTE_CACHE_131_6 33
#define FREE_REFERENCE_131_1 36
#define FREE_REFERENCE_131_0 37
#define FREE_ASSIGNMENT_131_0 39
#define FREE_REFERENCES_LABEL_131_0 28
#define NUMBER_OF_LINKER_SECTIONS_131_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_131 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd49;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_131_4);
      goto deregister_timer_event_16;

    case 1:
      current_block = (Rpc - LABEL_131_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_131_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_131_10);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_131_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_131_12);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_131_13);
      goto loop_10;

    case 7:
      current_block = (Rpc - LABEL_131_14);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_131_15);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_131_16);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_131_11);
      goto continuation_3;

    case 11:
      current_block = (Rpc - LABEL_131_17);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_131_19);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (deregister_timer_event_24)
DEFLABEL (deregister_timer_event_16)
  INTERRUPT_CHECK (26, LABEL_131_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_131_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_131_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_31;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_131_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_131_1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_131_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_131_7);

DEFLABEL (label_31)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_131_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_30;
  Wrd10 = Wrd14;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_131_2]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_131_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_131_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_28;
  Wrd9 = Wrd13;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd9.Obj);
  goto loop_10;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_131_11);

DEFLABEL (label_26)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_131_18]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_131_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_131_2]), 1);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_131_19);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_131_12])), (Wrd10.pObj));

DEFLABEL (label_19)
  (Wrd9.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_131_10])), (Wrd11.pObj));

DEFLABEL (label_18)
  (Wrd10.Obj) = Rvl;
  goto label_29;

DEFLABEL (loop_25)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_131_13);
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_36;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_43;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_43;
  (Wrd12.Obj) = ((Wrd16.pObj) [5]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_42)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (Rsp [5]);
  if ((Wrd26.Obj) == (Wrd27.Obj))
    goto label_32;
  (Rsp [2]) = (Wrd26.Obj);
  (Wrd29.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd29.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_10;

DEFLABEL (label_32)
  (Wrd31.Obj) = (Rsp [2]);
  if ((Wrd31.Obj) == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd33.Obj) = (current_block [OBJECT_131_3]);
  (Rsp [1]) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [0]);
  (Rsp [0]) = (Wrd31.Obj);
  (Rsp [2]) = (Wrd34.Obj);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd47.uLng) == 62)
    goto label_34;

DEFLABEL (label_33)
  INVOKE_PRIMITIVE ((current_block [OBJECT_131_5]), 3);

DEFLABEL (label_34)
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd45.Lng))))
    goto label_33;
  ((Wrd43.pObj) [5]) = (Wrd34.Obj);
  Rsp = (& (Rsp [4]));
  goto label_26;

DEFLABEL (label_35)
  (Wrd48.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd48.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd50.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_131_1]));
  (Wrd53.Obj) = ((Wrd50.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_41;

DEFLABEL (label_40)
  Wrd49 = Wrd53;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd61.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_131_0]));
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd69.Obj) = ((Wrd61.pObj) [0]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if ((Wrd70.uLng) == 50)
    goto label_38;

DEFLABEL (label_37)
  ((Wrd61.pObj) [0]) = (Wrd62.Obj);

DEFLABEL (label_36)
  Rsp = (& (Rsp [3]));
  goto label_26;

DEFLABEL (label_38)
  if ((Wrd69.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_37;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_131_16])), (Wrd61.pObj), (Wrd62.Obj));

DEFLABEL (label_22)
  goto label_36;

DEFLABEL (label_41)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_40;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_131_15])), (Wrd50.pObj));

DEFLABEL (label_21)
  (Wrd49.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_43)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (current_block [OBJECT_131_3]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131_14]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_131_4]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_132_4 3
#define LABEL_132_5 5
#define ENVIRONMENT_LABEL_132_3 9
#define DEBUGGING_LABEL_132_2 8
#define FREE_REFERENCE_132_0 7
#define FREE_REFERENCES_LABEL_132_0 6
#define NUMBER_OF_LINKER_SECTIONS_132_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_132 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_132_4);
      goto threads_pending_timer_eventsP_0;

    case 1:
      current_block = (Rpc - LABEL_132_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (threads_pending_timer_eventsP_4)
DEFLABEL (threads_pending_timer_eventsP_0)
  INTERRUPT_CHECK (26, LABEL_132_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_132_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_132_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_133_4 3
#define LABEL_133_5 5
#define LABEL_133_8 7
#define LABEL_133_7 9
#define LABEL_133_10 11
#define LABEL_133_11 13
#define LABEL_133_13 15
#define LABEL_133_15 17
#define LABEL_133_9 19
#define LABEL_133_12 21
#define LABEL_133_16 23
#define LABEL_133_20 25
#define LABEL_133_18 27
#define ENVIRONMENT_LABEL_133_3 49
#define DEBUGGING_LABEL_133_2 48
#define OBJECT_133_5 47
#define OBJECT_133_4 46
#define OBJECT_133_3 45
#define OBJECT_133_2 44
#define OBJECT_133_1 43
#define OBJECT_133_0 42
#define EXECUTE_CACHE_133_21 29
#define EXECUTE_CACHE_133_19 31
#define EXECUTE_CACHE_133_17 33
#define EXECUTE_CACHE_133_14 35
#define EXECUTE_CACHE_133_6 37
#define FREE_REFERENCE_133_1 40
#define FREE_REFERENCE_133_0 41
#define FREE_REFERENCES_LABEL_133_0 28
#define NUMBER_OF_LINKER_SECTIONS_133_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_133 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd45;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_133_4);
      goto deregister_all_events_12;

    case 1:
      current_block = (Rpc - LABEL_133_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_133_8);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_133_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_133_10);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_133_11);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_133_13);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_133_15);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_133_9);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_133_12);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_133_16);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_133_20);
      goto label_18;

    case 12:
      current_block = (Rpc - LABEL_133_18);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (deregister_all_events_20)
DEFLABEL (deregister_all_events_12)
  INTERRUPT_CHECK (26, LABEL_133_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_133_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_133_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_133_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_33;
  Wrd8 = Wrd12;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_133_0]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_133_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_31;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_31;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_30)
  (Wrd52.Obj) = (Rsp [2]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 62))
    goto label_29;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd51.Lng))))
    goto label_29;
  (Wrd45.Obj) = (current_block [OBJECT_133_3]);
  ((Wrd49.pObj) [5]) = (Wrd45.Obj);

DEFLABEL (label_28)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133_12]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_27;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd35.Lng))))
    goto label_27;
  (Wrd29.Obj) = ((Wrd33.pObj) [6]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_133_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_133_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_133_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_133_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_133_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_133_15);
  (Wrd8.Obj) = (current_block [OBJECT_133_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd21.uLng) == 62)
    goto label_22;

DEFLABEL (label_21)
  INVOKE_PRIMITIVE ((current_block [OBJECT_133_4]), 3);

DEFLABEL (label_22)
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd19.Lng))))
    goto label_21;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [5]) = (Wrd13.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_25)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_133_17]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_133_16);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_133_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_24;
  Wrd6 = Wrd10;

DEFLABEL (label_23)
  (Rsp [0]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_133_0]), 1);

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_133_20])), (Wrd7.pObj));

DEFLABEL (label_18)
  (Wrd6.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_27)
  (Wrd38.Obj) = (Rsp [3]);
  (Wrd39.Obj) = (current_block [OBJECT_133_5]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133_13]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_133_2]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd54.Obj) = (Rsp [2]);
  (Wrd55.Obj) = (current_block [OBJECT_133_1]);
  (Wrd56.Obj) = (current_block [OBJECT_133_3]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133_11]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_133_4]), 3);

DEFLABEL (label_17)
  goto label_28;

DEFLABEL (label_31)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_133_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_133_2]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_133_8])), (Wrd9.pObj));

DEFLABEL (label_14)
  (Wrd8.Obj) = Rvl;
  goto label_32;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_133_9);
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_134_4 3
#define LABEL_134_5 5
#define LABEL_134_6 7
#define LABEL_134_7 9
#define LABEL_134_8 11
#define LABEL_134_9 13
#define LABEL_134_10 15
#define ENVIRONMENT_LABEL_134_3 26
#define DEBUGGING_LABEL_134_2 25
#define OBJECT_134_4 24
#define OBJECT_134_3 23
#define OBJECT_134_2 22
#define OBJECT_134_1 21
#define OBJECT_134_0 20
#define FREE_REFERENCE_134_0 17
#define FREE_ASSIGNMENT_134_0 19
#define FREE_REFERENCES_LABEL_134_0 16
#define NUMBER_OF_LINKER_SECTIONS_134_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_134 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd49;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd57;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_134_4);
      goto Z__discard_thread_timer_records_8;

    case 1:
      current_block = (Rpc - LABEL_134_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_134_6);
      goto loop_6;

    case 3:
      current_block = (Rpc - LABEL_134_7);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_134_8);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_134_9);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_134_10);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__discard_thread_timer_records_16)
DEFLABEL (Z__discard_thread_timer_records_8)
  INTERRUPT_CHECK (26, LABEL_134_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_134_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_19;
  Wrd6 = Wrd10;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_6;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_134_5])), (Wrd7.pObj));

DEFLABEL (label_10)
  (Wrd6.Obj) = Rvl;
  goto label_18;

DEFLABEL (loop_17)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_134_6);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_20;
  Rvl = (current_block [OBJECT_134_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_30;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd15.Lng))))
    goto label_30;
  (Wrd9.Obj) = ((Wrd13.pObj) [5]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_29)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_28;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd31.Lng))))
    goto label_28;
  (Wrd23.Obj) = ((Wrd29.pObj) [3]);

DEFLABEL (label_27)
  (Wrd39.Obj) = (Rsp [3]);
  if ((Wrd39.Obj) == (Wrd23.Obj))
    goto label_22;
  (Wrd40.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd40.Obj);

DEFLABEL (label_21)
  (Wrd45.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd45.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_6;

DEFLABEL (label_22)
  (Wrd43.Obj) = (Rsp [2]);
  if ((Wrd43.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd57.uLng) == 62))
    goto label_23;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd55.Lng))))
    goto label_23;
  (Wrd49.Obj) = (Rsp [0]);
  ((Wrd53.pObj) [5]) = (Wrd49.Obj);
  goto label_21;

DEFLABEL (label_23)
  (Wrd58.Obj) = (Rsp [2]);
  (Wrd59.Obj) = (current_block [OBJECT_134_1]);
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_134_10]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_134_4]), 3);

DEFLABEL (label_13)
  goto label_21;

DEFLABEL (label_24)
  (Wrd64.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_134_0]));
  (Wrd65.Obj) = (Rsp [0]);
  (Wrd72.Obj) = ((Wrd64.pObj) [0]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if ((Wrd73.uLng) == 50)
    goto label_26;

DEFLABEL (label_25)
  ((Wrd64.pObj) [0]) = (Wrd65.Obj);
  goto label_21;

DEFLABEL (label_26)
  if ((Wrd72.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_25;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_134_9])), (Wrd64.pObj), (Wrd65.Obj));

DEFLABEL (label_14)
  goto label_21;

DEFLABEL (label_28)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_134_3]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_134_8]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_134_2]), 2);

DEFLABEL (label_12)
  (Wrd23.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_134_1]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_134_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_134_2]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_135_4 3
#define LABEL_135_5 5
#define ENVIRONMENT_LABEL_135_3 9
#define DEBUGGING_LABEL_135_2 8
#define FREE_REFERENCE_135_0 7
#define FREE_REFERENCES_LABEL_135_0 6
#define NUMBER_OF_LINKER_SECTIONS_135_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_135 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_135_4);
      goto thread_timer_interval_0;

    case 1:
      current_block = (Rpc - LABEL_135_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_timer_interval_4)
DEFLABEL (thread_timer_interval_0)
  INTERRUPT_CHECK (26, LABEL_135_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_135_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_135_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_136_5 3
#define LABEL_136_4 5
#define LABEL_136_7 7
#define LABEL_136_6 9
#define LABEL_136_9 11
#define LABEL_136_10 13
#define LABEL_136_12 15
#define ENVIRONMENT_LABEL_136_3 28
#define DEBUGGING_LABEL_136_2 27
#define OBJECT_136_1 26
#define OBJECT_136_0 25
#define EXECUTE_CACHE_136_11 17
#define EXECUTE_CACHE_136_8 19
#define FREE_REFERENCE_136_0 22
#define FREE_ASSIGNMENT_136_0 24
#define FREE_REFERENCES_LABEL_136_0 16
#define NUMBER_OF_LINKER_SECTIONS_136_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_136 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_136_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_136_4);
      goto set_thread_timer_intervalB_6;

    case 2:
      current_block = (Rpc - LABEL_136_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_136_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_136_9);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_136_10);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_136_12);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_thread_timer_intervalB_11)
DEFLABEL (set_thread_timer_intervalB_6)
  INTERRUPT_CHECK (26, LABEL_136_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_136_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_136_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_136_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_136_5);

DEFLABEL (label_17)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_136_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_136_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_16;
  Wrd15 = Wrd19;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_136_0]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_136_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_136_0]));
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_14;

DEFLABEL (label_13)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_12)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_136_10]))));
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_136_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_136_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_136_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_136_0]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_136_12);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_13;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_136_9])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_9)
  goto label_12;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_136_7])), (Wrd16.pObj));

DEFLABEL (label_8)
  (Wrd15.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_137_4 3
#define LABEL_137_6 5
#define LABEL_137_5 7
#define LABEL_137_7 9
#define LABEL_137_9 11
#define ENVIRONMENT_LABEL_137_3 19
#define DEBUGGING_LABEL_137_2 18
#define OBJECT_137_0 17
#define EXECUTE_CACHE_137_8 13
#define FREE_REFERENCE_137_0 16
#define FREE_REFERENCES_LABEL_137_0 12
#define NUMBER_OF_LINKER_SECTIONS_137_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_137 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_137_4);
      goto start_thread_timer_5;

    case 1:
      current_block = (Rpc - LABEL_137_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_137_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_137_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_137_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (start_thread_timer_9)
DEFLABEL (start_thread_timer_5)
  INTERRUPT_CHECK (26, LABEL_137_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_137_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_137_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_137_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_137_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_137_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_137_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_137_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_137_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_137_0]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_137_9);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_137_6])), (Wrd9.pObj));

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_138_4 3
#define LABEL_138_6 5
#define LABEL_138_5 7
#define LABEL_138_7 9
#define LABEL_138_9 11
#define ENVIRONMENT_LABEL_138_3 19
#define DEBUGGING_LABEL_138_2 18
#define OBJECT_138_0 17
#define EXECUTE_CACHE_138_8 13
#define FREE_REFERENCE_138_0 16
#define FREE_REFERENCES_LABEL_138_0 12
#define NUMBER_OF_LINKER_SECTIONS_138_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_138 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_138_4);
      goto stop_thread_timer_5;

    case 1:
      current_block = (Rpc - LABEL_138_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_138_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_138_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_138_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stop_thread_timer_9)
DEFLABEL (stop_thread_timer_5)
  INTERRUPT_CHECK (26, LABEL_138_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_138_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_138_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_138_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_138_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_138_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_138_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_138_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_138_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_138_0]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_138_9);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_138_6])), (Wrd9.pObj));

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_139_4 3
#define LABEL_139_5 5
#define LABEL_139_6 7
#define ENVIRONMENT_LABEL_139_3 15
#define DEBUGGING_LABEL_139_2 14
#define EXECUTE_CACHE_139_7 9
#define FREE_REFERENCE_139_1 12
#define FREE_REFERENCE_139_0 13
#define FREE_REFERENCES_LABEL_139_0 8
#define NUMBER_OF_LINKER_SECTIONS_139_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_139 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_139_4);
      goto with_thread_timer_stopped_0;

    case 1:
      current_block = (Rpc - LABEL_139_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_139_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_thread_timer_stopped_5)
DEFLABEL (with_thread_timer_stopped_0)
  INTERRUPT_CHECK (26, LABEL_139_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_139_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_9;
  Wrd6 = Wrd10;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_139_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_7;
  Wrd13 = Wrd17;

DEFLABEL (label_6)
  (Rsp [2]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_139_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_139_6])), (Wrd14.pObj));

DEFLABEL (label_3)
  (Wrd13.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_139_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_140_4 3
#define LABEL_140_7 5
#define LABEL_140_8 7
#define LABEL_140_5 9
#define LABEL_140_9 11
#define LABEL_140_10 13
#define LABEL_140_11 15
#define LABEL_140_12 17
#define LABEL_140_14 19
#define LABEL_140_15 21
#define LABEL_140_16 23
#define LABEL_140_17 25
#define LABEL_140_18 27
#define LABEL_140_19 29
#define LABEL_140_20 31
#define LABEL_140_21 33
#define LABEL_140_22 35
#define LABEL_140_24 37
#define LABEL_140_25 39
#define LABEL_140_26 41
#define ENVIRONMENT_LABEL_140_3 64
#define DEBUGGING_LABEL_140_2 63
#define OBJECT_140_5 62
#define OBJECT_140_4 61
#define OBJECT_140_3 60
#define OBJECT_140_2 59
#define OBJECT_140_1 58
#define OBJECT_140_0 57
#define EXECUTE_CACHE_140_23 43
#define EXECUTE_CACHE_140_13 45
#define EXECUTE_CACHE_140_6 47
#define FREE_REFERENCE_140_4 50
#define FREE_REFERENCE_140_3 51
#define FREE_REFERENCE_140_2 52
#define FREE_REFERENCE_140_1 53
#define FREE_REFERENCE_140_0 54
#define FREE_ASSIGNMENT_140_0 56
#define FREE_REFERENCES_LABEL_140_0 42
#define NUMBER_OF_LINKER_SECTIONS_140_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_140 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd82;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd81;
  machine_word Wrd77;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd62;
  machine_word Wrd63;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd55;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd88;
  machine_word Wrd86;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd116;
  machine_word Wrd112;
  machine_word Wrd124;
  machine_word Wrd120;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd105;
  machine_word Wrd106;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd107;
  machine_word Wrd139;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd149;
  machine_word Wrd137;
  machine_word Wrd128;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd129;
  machine_word Wrd127;
  machine_word Wrd98;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd91;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd84;
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
      current_block = (Rpc - LABEL_140_4);
      goto Z__maybe_toggle_thread_timer_13;

    case 1:
      current_block = (Rpc - LABEL_140_7);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_140_8);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_140_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_140_9);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_140_10);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_140_11);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_140_12);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_140_14);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_140_15);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_140_16);
      goto label_16;

    case 11:
      current_block = (Rpc - LABEL_140_17);
      goto label_17;

    case 12:
      current_block = (Rpc - LABEL_140_18);
      goto label_18;

    case 13:
      current_block = (Rpc - LABEL_140_19);
      goto label_19;

    case 14:
      current_block = (Rpc - LABEL_140_20);
      goto label_20;

    case 15:
      current_block = (Rpc - LABEL_140_21);
      goto label_21;

    case 16:
      current_block = (Rpc - LABEL_140_22);
      goto label_22;

    case 17:
      current_block = (Rpc - LABEL_140_24);
      goto lambda_2;

    case 18:
      current_block = (Rpc - LABEL_140_25);
      goto label_28;

    case 19:
      current_block = (Rpc - LABEL_140_26);
      goto label_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__maybe_toggle_thread_timer_31)
DEFLABEL (Z__maybe_toggle_thread_timer_13)
  INTERRUPT_CHECK (26, LABEL_140_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_140_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_140_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_140_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_140_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_69;
  Wrd5 = Wrd9;

DEFLABEL (label_68)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_51;
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_140_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_50;
  Wrd13 = Wrd17;

DEFLABEL (label_49)
  Wrd12 = Wrd13;
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_48;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd25.Lng))))
    goto label_48;
  (Wrd20.Obj) = ((Wrd23.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_47)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_46;
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_46;
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if ((Wrd86.Lng) > (Wrd88.Lng))
    goto label_36;

DEFLABEL (label_35)
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_140_4]));
  (Wrd47.Obj) = ((Wrd44.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_34;
  Wrd43 = Wrd47;

DEFLABEL (label_33)
  (Rsp [2]) = (Wrd43.Obj);
  Rsp = (& (Rsp [2]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_140_3]), 1);

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_140_19])), (Wrd44.pObj));

DEFLABEL (label_19)
  (Wrd43.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_140_8]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [3]);
  if ((Wrd53.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd56.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_140_1]));
  (Wrd59.Obj) = ((Wrd56.pObj) [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if ((Wrd60.uLng) == 50)
    goto label_45;
  Wrd55 = Wrd59;

DEFLABEL (label_44)
  if ((Wrd55.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd64.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_140_1]));
  (Wrd67.Obj) = ((Wrd64.pObj) [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if ((Wrd68.uLng) == 50)
    goto label_42;
  Wrd63 = Wrd67;

DEFLABEL (label_41)
  Wrd62 = Wrd63;
  (Wrd74.Obj) = (Rsp [2]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 26))
    goto label_40;
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd76.uLng) == 26))
    goto label_40;
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  (Wrd77.Lng) = ((Wrd79.Lng) + (Wrd80.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd77.Lng)))
    goto label_40;
  (Wrd81.Obj) = (LONG_TO_FIXNUM (Wrd77.Lng));
  (* (--Rsp)) = (Wrd81.Obj);

DEFLABEL (label_39)
  (Wrd82.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_140_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_140_8);
  (Wrd84.Obj) = Rvl;

DEFLABEL (label_38)
  (Rsp [0]) = (Wrd84.Obj);

DEFLABEL (label_37)
  goto lambda_2;

DEFLABEL (label_40)
  (Wrd69.Obj) = (Rsp [2]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_140_22]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_140_21])), (Wrd64.pObj));

DEFLABEL (label_21)
  (Wrd63.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_43)
  (Wrd84.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [1]));
  goto label_38;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_140_20])), (Wrd56.pObj));

DEFLABEL (label_20)
  (Wrd55.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_46)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_140_18]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  goto label_36;

DEFLABEL (label_48)
  (Wrd28.Obj) = (current_block [OBJECT_140_2]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_140_17]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_140_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_140_16])), (Wrd14.pObj));

DEFLABEL (label_16)
  (Wrd13.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_51)
  (Wrd89.Obj) = (Rsp [1]);
  if (! ((Wrd89.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_53;

DEFLABEL (label_52)
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_140_13]));

DEFLABEL (label_53)
  (Wrd92.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_140_1]));
  (Wrd95.Obj) = ((Wrd92.pObj) [0]);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if ((Wrd96.uLng) == 50)
    goto label_67;
  Wrd91 = Wrd95;

DEFLABEL (label_66)
  if ((Wrd91.Obj) == ((SCHEME_OBJECT) 0))
    goto label_52;
  (Wrd99.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_140_2]));
  (Wrd102.Obj) = ((Wrd99.pObj) [0]);
  (Wrd103.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if ((Wrd103.uLng) == 50)
    goto label_65;
  Wrd98 = Wrd102;

DEFLABEL (label_64)
  if ((Wrd98.Obj) == ((SCHEME_OBJECT) 0))
    goto label_58;

DEFLABEL (label_57)
  (Wrd107.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_140_1]));
  (Wrd110.Obj) = ((Wrd107.pObj) [0]);
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if ((Wrd111.uLng) == 50)
    goto label_56;
  Wrd106 = Wrd110;

DEFLABEL (label_55)
  Wrd105 = Wrd106;
  (Wrd117.Obj) = (Rsp [0]);
  (Wrd118.uLng) = (OBJECT_TYPE (Wrd117.Obj));
  if (! ((Wrd118.uLng) == 26))
    goto label_54;
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if (! ((Wrd119.uLng) == 26))
    goto label_54;
  (Wrd122.Lng) = (FIXNUM_TO_LONG (Wrd117.Obj));
  (Wrd123.Lng) = (FIXNUM_TO_LONG (Wrd106.Obj));
  (Wrd120.Lng) = ((Wrd122.Lng) + (Wrd123.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd120.Lng)))
    goto label_54;
  (Wrd124.Obj) = (LONG_TO_FIXNUM (Wrd120.Lng));
  (* (--Rsp)) = (Wrd124.Obj);
  goto label_37;

DEFLABEL (label_54)
  (Wrd112.Obj) = (Rsp [0]);
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_140_15]))));
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_140_14])), (Wrd107.pObj));

DEFLABEL (label_25)
  (Wrd106.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd127.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_140_7]))));
  (* (--Rsp)) = (Wrd127.Obj);
  (Wrd129.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_140_3]));
  (Wrd132.Obj) = ((Wrd129.pObj) [0]);
  (Wrd133.uLng) = (OBJECT_TYPE (Wrd132.Obj));
  if ((Wrd133.uLng) == 50)
    goto label_63;
  Wrd128 = Wrd132;

DEFLABEL (label_62)
  (* (--Rsp)) = (Wrd128.Obj);
  if ((Wrd128.Obj) == ((SCHEME_OBJECT) 0))
    goto label_61;
  (* (--Rsp)) = (Wrd128.Obj);
  (Wrd137.Obj) = (current_block [OBJECT_140_0]);
  (Rsp [1]) = (Wrd137.Obj);
  (Wrd149.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if ((Wrd149.uLng) == 62)
    goto label_60;

DEFLABEL (label_59)
  INVOKE_PRIMITIVE ((current_block [OBJECT_140_1]), 2);

DEFLABEL (label_60)
  (Wrd145.pObj) = (OBJECT_ADDRESS (Wrd128.Obj));
  (Wrd146.Obj) = ((Wrd145.pObj) [0]);
  (Wrd147.Lng) = (FIXNUM_TO_LONG (Wrd146.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd147.Lng))))
    goto label_59;
  (Wrd139.Obj) = ((Wrd145.pObj) [3]);
  Rsp = (& (Rsp [3]));
  if ((Wrd139.Obj) == ((SCHEME_OBJECT) 0))
    goto label_52;
  goto label_57;

DEFLABEL (label_61)
  Rsp = (& (Rsp [2]));
  goto label_52;

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_140_12])), (Wrd129.pObj));

DEFLABEL (label_27)
  (Wrd128.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_140_11])), (Wrd99.pObj));

DEFLABEL (label_24)
  (Wrd98.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_140_10])), (Wrd92.pObj));

DEFLABEL (label_23)
  (Wrd91.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_140_9])), (Wrd6.pObj));

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_68;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_140_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  goto label_57;

DEFLABEL (lambda_32)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_140_24);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_140_0]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_74;

DEFLABEL (label_73)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_72)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_71;
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_71;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd27.Lng) = ((Wrd29.Lng) - (Wrd31.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd27.Lng)))
    goto label_71;
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));

DEFLABEL (label_70)
  (Rsp [1]) = (Wrd22.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_140_4]);
  (Rsp [2]) = (Wrd32.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_140_5]), 2);

DEFLABEL (label_71)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_140_26]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_29)
  (Wrd22.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_74)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_73;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_140_25])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_28)
  goto label_72;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_141_4 3
#define LABEL_141_5 5
#define LABEL_141_6 7
#define LABEL_141_7 9
#define LABEL_141_8 11
#define ENVIRONMENT_LABEL_141_3 22
#define DEBUGGING_LABEL_141_2 21
#define OBJECT_141_3 20
#define OBJECT_141_2 19
#define OBJECT_141_1 18
#define OBJECT_141_0 17
#define FREE_REFERENCE_141_1 13
#define FREE_REFERENCE_141_0 14
#define FREE_ASSIGNMENT_141_0 16
#define FREE_REFERENCES_LABEL_141_0 12
#define NUMBER_OF_LINKER_SECTIONS_141_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_141 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_141_4);
      goto Z__stop_thread_timer_1;

    case 1:
      current_block = (Rpc - LABEL_141_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_141_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_141_7);
      goto label_4;

    case 4:
      current_block = (Rpc - LABEL_141_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__stop_thread_timer_7)
DEFLABEL (Z__stop_thread_timer_1)
  INTERRUPT_CHECK (26, LABEL_141_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_141_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_15;
  Wrd5 = Wrd9;

DEFLABEL (label_14)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_8;
  Rvl = (current_block [OBJECT_141_0]);
  goto pop_return;

DEFLABEL (label_8)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_141_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_141_1]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_141_6);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_141_0]));
  (Wrd6.Obj) = (current_block [OBJECT_141_2]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  ((Wrd5.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_141_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_10;
  Wrd17 = Wrd21;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_141_3]), 1);

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_141_8])), (Wrd18.pObj));

DEFLABEL (label_5)
  (Wrd17.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_13)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_12;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_141_7])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_4)
  goto label_11;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_141_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_142_4 3
#define ENVIRONMENT_LABEL_142_3 8
#define DEBUGGING_LABEL_142_2 7
#define EXECUTE_CACHE_142_5 5
#define FREE_REFERENCES_LABEL_142_0 4
#define NUMBER_OF_LINKER_SECTIONS_142_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_142 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_142_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_142_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_142_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_143_4 3
#define ENVIRONMENT_LABEL_143_3 7
#define DEBUGGING_LABEL_143_2 6
#define OBJECT_143_1 5
#define OBJECT_143_0 4
#define FREE_REFERENCES_LABEL_143_0 4
#define NUMBER_OF_LINKER_SECTIONS_143_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_143 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_143_4);
      goto thread_mutex_waiting_threads_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_mutex_waiting_threads_3)
DEFLABEL (thread_mutex_waiting_threads_0)
  INTERRUPT_CHECK (26, LABEL_143_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_143_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_143_1]), 2);

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

#define LABEL_144_4 3
#define ENVIRONMENT_LABEL_144_3 7
#define DEBUGGING_LABEL_144_2 6
#define OBJECT_144_1 5
#define OBJECT_144_0 4
#define FREE_REFERENCES_LABEL_144_0 4
#define NUMBER_OF_LINKER_SECTIONS_144_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_144 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_144_4);
      goto thread_mutex_owner_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_mutex_owner_3)
DEFLABEL (thread_mutex_owner_0)
  INTERRUPT_CHECK (26, LABEL_144_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_144_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_144_1]), 2);

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

#define LABEL_145_4 3
#define ENVIRONMENT_LABEL_145_3 8
#define DEBUGGING_LABEL_145_2 7
#define OBJECT_145_2 6
#define OBJECT_145_1 5
#define OBJECT_145_0 4
#define FREE_REFERENCES_LABEL_145_0 4
#define NUMBER_OF_LINKER_SECTIONS_145_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_145 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_145_4);
      goto set_thread_mutex_ownerB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_thread_mutex_ownerB_3)
DEFLABEL (set_thread_mutex_ownerB_0)
  INTERRUPT_CHECK (26, LABEL_145_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_145_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_145_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_145_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_146_4 3
#define LABEL_146_5 5
#define LABEL_146_6 7
#define LABEL_146_7 9
#define ENVIRONMENT_LABEL_146_3 17
#define DEBUGGING_LABEL_146_2 16
#define OBJECT_146_3 15
#define OBJECT_146_2 14
#define OBJECT_146_1 13
#define OBJECT_146_0 12
#define FREE_REFERENCE_146_0 11
#define FREE_REFERENCES_LABEL_146_0 10
#define NUMBER_OF_LINKER_SECTIONS_146_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_146 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_146_4);
      goto thread_mutexP_4;

    case 1:
      current_block = (Rpc - LABEL_146_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_146_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_146_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_mutexP_10)
DEFLABEL (thread_mutexP_4)
  INTERRUPT_CHECK (26, LABEL_146_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_146_0]));
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
  Rvl = (current_block [OBJECT_146_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_146_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_146_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_146_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_146_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_146_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_146_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_147_4 3
#define LABEL_147_5 5
#define ENVIRONMENT_LABEL_147_3 14
#define DEBUGGING_LABEL_147_2 13
#define OBJECT_147_1 12
#define OBJECT_147_0 11
#define EXECUTE_CACHE_147_7 7
#define EXECUTE_CACHE_147_6 9
#define FREE_REFERENCES_LABEL_147_0 6
#define NUMBER_OF_LINKER_SECTIONS_147_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_147 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_147_4);
      goto guarantee_thread_mutex_1;

    case 1:
      current_block = (Rpc - LABEL_147_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_thread_mutex_4)
DEFLABEL (guarantee_thread_mutex_1)
  INTERRUPT_CHECK (26, LABEL_147_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_147_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_147_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_147_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_147_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  (Wrd9.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_147_0]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_147_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_148_4 3
#define LABEL_148_7 5
#define LABEL_148_5 7
#define ENVIRONMENT_LABEL_148_3 18
#define DEBUGGING_LABEL_148_2 17
#define OBJECT_148_3 16
#define OBJECT_148_2 15
#define OBJECT_148_1 14
#define OBJECT_148_0 13
#define EXECUTE_CACHE_148_8 9
#define EXECUTE_CACHE_148_6 11
#define FREE_REFERENCES_LABEL_148_0 8
#define NUMBER_OF_LINKER_SECTIONS_148_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_148 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_148_4);
      goto thread_mutex_owner_2;

    case 1:
      current_block = (Rpc - LABEL_148_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_148_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_mutex_owner_5)
DEFLABEL (thread_mutex_owner_2)
  INTERRUPT_CHECK (26, LABEL_148_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_148_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_148_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_148_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_148_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_148_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_148_1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_148_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_148_7);

DEFLABEL (label_8)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_148_2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_148_3]), 2);

DEFLABEL (label_7)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_6;
  Rvl = ((Wrd16.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_149_4 3
#define LABEL_149_7 5
#define LABEL_149_5 7
#define LABEL_149_10 9
#define LABEL_149_9 11
#define LABEL_149_12 13
#define LABEL_149_11 15
#define LABEL_149_16 17
#define LABEL_149_13 19
#define LABEL_149_17 21
#define LABEL_149_15 23
#define ENVIRONMENT_LABEL_149_3 45
#define DEBUGGING_LABEL_149_2 44
#define OBJECT_149_5 43
#define OBJECT_149_4 42
#define OBJECT_149_3 41
#define OBJECT_149_2 40
#define OBJECT_149_1 39
#define OBJECT_149_0 38
#define EXECUTE_CACHE_149_19 25
#define EXECUTE_CACHE_149_18 27
#define EXECUTE_CACHE_149_14 29
#define EXECUTE_CACHE_149_8 31
#define EXECUTE_CACHE_149_6 33
#define FREE_REFERENCE_149_1 36
#define FREE_REFERENCE_149_0 37
#define FREE_REFERENCES_LABEL_149_0 24
#define NUMBER_OF_LINKER_SECTIONS_149_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_149 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_149_4);
      goto lock_thread_mutex_12;

    case 1:
      current_block = (Rpc - LABEL_149_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_149_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_149_10);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_149_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_149_12);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_149_11);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_149_16);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_149_13);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_149_17);
      goto label_16;

    case 10:
      current_block = (Rpc - LABEL_149_15);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lock_thread_mutex_18)
DEFLABEL (lock_thread_mutex_12)
  INTERRUPT_CHECK (26, LABEL_149_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_149_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_149_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_149_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_27;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_149_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_149_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_149_1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_149_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_149_7);

DEFLABEL (label_27)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_149_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_149_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_26;
  Wrd10 = Wrd14;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_149_2]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_149_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_149_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_24;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_24;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_23)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_149_13]))));
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_149_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_149_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == Rvl)
    goto label_20;

DEFLABEL (label_19)
  (Wrd7.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_149_19]));

DEFLABEL (label_20)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_149_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_149_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_22;
  Wrd12 = Wrd16;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_149_5]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_149_18]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_149_16);
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_149_17])), (Wrd13.pObj));

DEFLABEL (label_16)
  (Wrd12.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_149_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_149_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_149_4]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_149_10])), (Wrd11.pObj));

DEFLABEL (label_14)
  (Wrd10.Obj) = Rvl;
  goto label_25;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_149_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_149_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_149_2]), 1);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_149_15);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_150_4 3
#define LABEL_150_5 5
#define LABEL_150_6 7
#define LABEL_150_8 9
#define LABEL_150_7 11
#define LABEL_150_10 13
#define LABEL_150_11 15
#define LABEL_150_12 17
#define ENVIRONMENT_LABEL_150_3 31
#define DEBUGGING_LABEL_150_2 30
#define OBJECT_150_6 29
#define OBJECT_150_5 28
#define OBJECT_150_4 27
#define OBJECT_150_3 26
#define OBJECT_150_2 25
#define OBJECT_150_1 24
#define OBJECT_150_0 23
#define EXECUTE_CACHE_150_13 19
#define EXECUTE_CACHE_150_9 21
#define FREE_REFERENCES_LABEL_150_0 18
#define NUMBER_OF_LINKER_SECTIONS_150_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_150 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd33;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd25;
  machine_word Wrd77;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd21;
  machine_word Wrd23;
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
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_150_4);
      goto Z__lock_thread_mutex_11;

    case 1:
      current_block = (Rpc - LABEL_150_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_150_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_150_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_150_7);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_150_10);
      goto do_loop_9;

    case 6:
      current_block = (Rpc - LABEL_150_11);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_150_12);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__lock_thread_mutex_18)
DEFLABEL (Z__lock_thread_mutex_11)
  INTERRUPT_CHECK (26, LABEL_150_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_28;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd13.Lng))))
    goto label_28;
  (Wrd5.Obj) = ((Wrd11.pObj) [12]);

DEFLABEL (label_27)
  (Wrd24.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd70.Obj) = (Rsp [1]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 62))
    goto label_26;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd69.Lng))))
    goto label_26;
  ((Wrd67.pObj) [12]) = (Wrd21.Obj);

DEFLABEL (label_25)
  (Wrd25.Obj) = (Rsp [2]);
  if ((Wrd25.Obj) == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_150_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 62))
    goto label_21;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd39.Lng))))
    goto label_21;
  (Wrd33.Obj) = ((Wrd37.pObj) [2]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_20)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_150_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_150_7);
  goto do_loop_9;

DEFLABEL (label_21)
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.Obj) = (current_block [OBJECT_150_5]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_150_8]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_150_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_22)
  (Wrd47.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd47.Obj);
  (Wrd48.Obj) = (current_block [OBJECT_150_3]);
  (Rsp [1]) = (Wrd48.Obj);
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd61.uLng) == 62)
    goto label_24;

DEFLABEL (label_23)
  INVOKE_PRIMITIVE ((current_block [OBJECT_150_2]), 3);

DEFLABEL (label_24)
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd59.Lng))))
    goto label_23;
  ((Wrd57.pObj) [3]) = (Wrd47.Obj);
  Rvl = (current_block [OBJECT_150_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd73.Obj) = (current_block [OBJECT_150_0]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_150_6]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_150_2]), 3);

DEFLABEL (label_15)
  goto label_25;

DEFLABEL (label_28)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_150_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_150_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_150_1]), 2);

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_27;

DEFLABEL (do_loop_19)
DEFLABEL (do_loop_9)
  INTERRUPT_CHECK (26, LABEL_150_10);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_31;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_31;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_30)
  (Wrd21.Obj) = (Rsp [1]);
  if (! ((Wrd21.Obj) == (Wrd5.Obj)))
    goto label_29;
  Rvl = (current_block [OBJECT_150_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_150_12]))));
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_150_13]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_150_12);
  goto do_loop_9;

DEFLABEL (label_31)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_150_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_150_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_150_1]), 2);

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_151_4 3
#define LABEL_151_7 5
#define LABEL_151_5 7
#define LABEL_151_10 9
#define LABEL_151_11 11
#define LABEL_151_12 13
#define LABEL_151_9 15
#define LABEL_151_15 17
#define LABEL_151_14 19
#define LABEL_151_18 21
#define ENVIRONMENT_LABEL_151_3 42
#define DEBUGGING_LABEL_151_2 41
#define OBJECT_151_5 40
#define OBJECT_151_4 39
#define OBJECT_151_3 38
#define OBJECT_151_2 37
#define OBJECT_151_1 36
#define OBJECT_151_0 35
#define EXECUTE_CACHE_151_17 23
#define EXECUTE_CACHE_151_16 25
#define EXECUTE_CACHE_151_13 27
#define EXECUTE_CACHE_151_8 29
#define EXECUTE_CACHE_151_6 31
#define FREE_REFERENCE_151_0 34
#define FREE_REFERENCES_LABEL_151_0 22
#define NUMBER_OF_LINKER_SECTIONS_151_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_151 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_151_4);
      goto unlock_thread_mutex_12;

    case 1:
      current_block = (Rpc - LABEL_151_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_151_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_151_10);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_151_11);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_151_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_151_9);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_151_15);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_151_14);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_151_18);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unlock_thread_mutex_17)
DEFLABEL (unlock_thread_mutex_12)
  INTERRUPT_CHECK (26, LABEL_151_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_151_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_151_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_151_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_24;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_151_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_151_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_151_1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_151_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_151_7);

DEFLABEL (label_24)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_151_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_151_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_23;
  Wrd10 = Wrd14;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_151_2]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_151_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_151_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_21;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_21;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_20)
  (Wrd24.Obj) = (Rsp [0]);
  if (! ((Wrd24.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_19;

DEFLABEL (label_18)
  (Wrd29.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_151_16]));

DEFLABEL (label_19)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_151_12]))));
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_151_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_151_12);
  (Wrd31.Obj) = (Rsp [0]);
  if ((Wrd31.Obj) == Rvl)
    goto label_18;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_151_11]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_151_3]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_151_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_151_11);
  goto label_18;

DEFLABEL (label_21)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_151_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_151_15]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_151_5]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_151_10])), (Wrd11.pObj));

DEFLABEL (label_14)
  (Wrd10.Obj) = Rvl;
  goto label_22;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_151_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_151_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_151_2]), 1);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_151_18);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_152_4 3
#define LABEL_152_6 5
#define LABEL_152_5 7
#define LABEL_152_8 9
#define LABEL_152_9 11
#define ENVIRONMENT_LABEL_152_3 24
#define DEBUGGING_LABEL_152_2 23
#define OBJECT_152_3 22
#define OBJECT_152_2 21
#define OBJECT_152_1 20
#define OBJECT_152_0 19
#define EXECUTE_CACHE_152_11 13
#define EXECUTE_CACHE_152_10 15
#define EXECUTE_CACHE_152_7 17
#define FREE_REFERENCES_LABEL_152_0 12
#define NUMBER_OF_LINKER_SECTIONS_152_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_152 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_152_4);
      goto Z__unlock_thread_mutex_4;

    case 1:
      current_block = (Rpc - LABEL_152_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_152_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_152_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_152_9);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__unlock_thread_mutex_9)
DEFLABEL (Z__unlock_thread_mutex_4)
  INTERRUPT_CHECK (26, LABEL_152_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_152_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_14;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd16.Lng))))
    goto label_14;
  (Wrd10.Obj) = ((Wrd14.pObj) [12]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_13)
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_152_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_152_5);
  (Wrd5.Obj) = Rvl;
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_12;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd17.Lng))))
    goto label_12;
  ((Wrd15.pObj) [12]) = Rvl;

DEFLABEL (label_11)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_152_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_152_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_152_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_152_11]));

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_152_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_152_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_152_8]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_152_2]), 3);

DEFLABEL (label_7)
  goto label_11;

DEFLABEL (label_14)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_152_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_152_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_152_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_153_4 3
#define LABEL_153_6 5
#define LABEL_153_8 7
#define LABEL_153_5 9
#define LABEL_153_9 11
#define ENVIRONMENT_LABEL_153_3 22
#define DEBUGGING_LABEL_153_2 21
#define OBJECT_153_3 20
#define OBJECT_153_2 19
#define OBJECT_153_1 18
#define OBJECT_153_0 17
#define EXECUTE_CACHE_153_10 13
#define EXECUTE_CACHE_153_7 15
#define FREE_REFERENCES_LABEL_153_0 12
#define NUMBER_OF_LINKER_SECTIONS_153_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_153 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_153_4);
      goto Z___unlock_thread_mutex_5;

    case 1:
      current_block = (Rpc - LABEL_153_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_153_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_153_5);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_153_9);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___unlock_thread_mutex_10)
DEFLABEL (Z___unlock_thread_mutex_5)
  INTERRUPT_CHECK (26, LABEL_153_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_153_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_16;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_16;
  (Wrd11.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_15)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_153_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_153_5);
  (* (--Rsp)) = Rvl;
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_14;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd22.Lng))))
    goto label_14;
  ((Wrd20.pObj) [3]) = Rvl;

DEFLABEL (label_13)
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_12;

DEFLABEL (label_11)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_153_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_153_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_153_8);
  goto label_11;

DEFLABEL (label_14)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_153_2]);
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_153_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_153_3]), 3);

DEFLABEL (label_8)
  goto label_13;

DEFLABEL (label_16)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_153_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_153_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_153_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_154_4 3
#define LABEL_154_7 5
#define LABEL_154_5 7
#define LABEL_154_10 9
#define LABEL_154_11 11
#define LABEL_154_12 13
#define LABEL_154_13 15
#define LABEL_154_14 17
#define LABEL_154_9 19
#define LABEL_154_15 21
#define LABEL_154_17 23
#define ENVIRONMENT_LABEL_154_3 42
#define DEBUGGING_LABEL_154_2 41
#define OBJECT_154_7 40
#define OBJECT_154_6 39
#define OBJECT_154_5 38
#define OBJECT_154_4 37
#define OBJECT_154_3 36
#define OBJECT_154_2 35
#define OBJECT_154_1 34
#define OBJECT_154_0 33
#define EXECUTE_CACHE_154_16 25
#define EXECUTE_CACHE_154_8 27
#define EXECUTE_CACHE_154_6 29
#define FREE_REFERENCE_154_0 32
#define FREE_REFERENCES_LABEL_154_0 24
#define NUMBER_OF_LINKER_SECTIONS_154_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_154 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd52;
  machine_word Wrd68;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_154_4);
      goto try_lock_thread_mutex_14;

    case 1:
      current_block = (Rpc - LABEL_154_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_154_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_154_10);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_154_11);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_154_12);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_154_13);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_154_14);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_154_9);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_154_15);
      goto label_17;

    case 10:
      current_block = (Rpc - LABEL_154_17);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (try_lock_thread_mutex_22)
DEFLABEL (try_lock_thread_mutex_14)
  INTERRUPT_CHECK (26, LABEL_154_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_154_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_154_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_154_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_35;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_154_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_154_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_154_1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_154_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_154_7);

DEFLABEL (label_35)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_154_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_154_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_34;
  Wrd10 = Wrd14;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_154_2]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_154_9);
  (* (--Rsp)) = Rvl;
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_32;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd22.Lng))))
    goto label_32;
  (Wrd7.Obj) = ((Wrd20.pObj) [3]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_31;

DEFLABEL (label_30)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_154_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_154_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_154_11);
  (* (--Rsp)) = Rvl;
  (Wrd78.Obj) = (Rsp [2]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 62))
    goto label_29;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [0]);
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd77.Lng))))
    goto label_29;
  ((Wrd75.pObj) [3]) = Rvl;

DEFLABEL (label_28)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 62))
    goto label_27;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd39.Lng))))
    goto label_27;
  (Wrd31.Obj) = ((Wrd37.pObj) [12]);

DEFLABEL (label_26)
  (Wrd50.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd50.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 62))
    goto label_25;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd60.Lng))))
    goto label_25;
  ((Wrd58.pObj) [12]) = (Wrd47.Obj);

DEFLABEL (label_24)
  (Wrd52.Obj) = (current_block [OBJECT_154_7]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd52.Obj);

DEFLABEL (label_23)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_154_17]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_154_2]), 1);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_154_17);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd63.Obj) = (Rsp [0]);
  (Wrd64.Obj) = (current_block [OBJECT_154_5]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_154_14]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_154_4]), 3);

DEFLABEL (label_19)
  goto label_24;

DEFLABEL (label_27)
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.Obj) = (current_block [OBJECT_154_5]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_154_13]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_154_6]), 2);

DEFLABEL (label_18)
  (Wrd31.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd80.Obj) = (Rsp [2]);
  (Wrd81.Obj) = (current_block [OBJECT_154_3]);
  (Wrd82.Obj) = (Rsp [0]);
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_154_12]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_154_4]), 3);

DEFLABEL (label_20)
  goto label_28;

DEFLABEL (label_31)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_23;

DEFLABEL (label_32)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_154_3]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_154_15]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_154_6]), 2);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_154_10])), (Wrd11.pObj));

DEFLABEL (label_16)
  (Wrd10.Obj) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_155_4 3
#define LABEL_155_7 5
#define LABEL_155_5 7
#define LABEL_155_9 9
#define LABEL_155_11 11
#define TAG_155_12 4
#define LABEL_155_16 13
#define LABEL_155_13 15
#define TAG_155_14 6
#define LABEL_155_18 17
#define ENVIRONMENT_LABEL_155_3 38
#define DEBUGGING_LABEL_155_2 37
#define OBJECT_155_5 36
#define OBJECT_155_4 35
#define OBJECT_155_3 34
#define OBJECT_155_2 33
#define OBJECT_155_1 32
#define OBJECT_155_0 31
#define EXECUTE_CACHE_155_19 19
#define EXECUTE_CACHE_155_17 21
#define EXECUTE_CACHE_155_15 23
#define EXECUTE_CACHE_155_10 25
#define EXECUTE_CACHE_155_8 27
#define EXECUTE_CACHE_155_6 29
#define FREE_REFERENCES_LABEL_155_0 18
#define NUMBER_OF_LINKER_SECTIONS_155_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_155 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd5;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_155_4);
      goto with_thread_mutex_locked_11;

    case 1:
      current_block = (Rpc - LABEL_155_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_155_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_155_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_155_11);
      goto lambda_17;

    case 5:
      current_block = (Rpc - LABEL_155_16);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_155_13);
      goto lambda_18;

    case 7:
      current_block = (Rpc - LABEL_155_18);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_thread_mutex_locked_16)
DEFLABEL (with_thread_mutex_locked_11)
  INTERRUPT_CHECK (26, LABEL_155_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_155_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_155_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_155_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;

DEFLABEL (label_19)
  (Wrd12.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd8.pObj) = (& (Rhp [-1]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_155_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_155_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_155_9);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_155_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_155_11])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  ((Wrd12.pObj) [4]) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_155_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_155_13])));
  Rhp += 3;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd22 = Wrd17;
  ((Wrd22.pObj) [2]) = (Wrd13.Obj);
  ((Wrd22.pObj) [3]) = (Wrd11.Obj);
  ((Wrd22.pObj) [4]) = Rvl;
  (Rsp [3]) = (Wrd16.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_155_15]));

DEFLABEL (label_20)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_155_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_155_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_155_1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_155_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_155_7);
  goto label_19;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_155_11);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_23;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_23;
  (Wrd9.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_22)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [4]);
  if ((Wrd29.Obj) == (Wrd32.Obj))
    goto label_21;
  (Wrd35.Obj) = ((Wrd31.pObj) [3]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = (current_block [OBJECT_155_5]);
  ((Wrd36.pObj) [0]) = (Wrd37.Obj);
  (Wrd40.Obj) = ((Wrd31.pObj) [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Rsp [1]) = (Wrd32.Obj);
  (Rsp [2]) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_155_17]));

DEFLABEL (label_21)
  (Wrd47.Obj) = ((Wrd31.pObj) [3]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  ((Wrd48.pObj) [0]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_155_4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_155_2]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_155_16]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_155_3]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_155_13);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  if (! ((Wrd9.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_25;

DEFLABEL (label_24)
  Rvl = (current_block [OBJECT_155_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd26.Obj) = ((Wrd6.pObj) [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 62))
    goto label_27;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd23.Lng))))
    goto label_27;
  (Wrd11.Obj) = ((Wrd21.pObj) [3]);

DEFLABEL (label_26)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [4]);
  if (! ((Wrd11.Obj) == (Wrd37.Obj)))
    goto label_24;
  (Wrd42.Obj) = ((Wrd36.pObj) [2]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Rsp [1]) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_155_19]));

DEFLABEL (label_27)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [2]);
  (Wrd31.Obj) = (current_block [OBJECT_155_2]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_155_18]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_155_3]), 2);

DEFLABEL (label_14)
  (Wrd11.Obj) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_156_4 3
#define LABEL_156_5 5
#define LABEL_156_6 7
#define LABEL_156_8 9
#define LABEL_156_9 11
#define LABEL_156_11 13
#define LABEL_156_7 15
#define LABEL_156_13 17
#define ENVIRONMENT_LABEL_156_3 34
#define DEBUGGING_LABEL_156_2 33
#define OBJECT_156_9 32
#define OBJECT_156_8 31
#define OBJECT_156_7 30
#define OBJECT_156_6 29
#define OBJECT_156_5 28
#define OBJECT_156_4 27
#define OBJECT_156_3 26
#define OBJECT_156_2 25
#define OBJECT_156_1 24
#define OBJECT_156_0 23
#define EXECUTE_CACHE_156_12 19
#define EXECUTE_CACHE_156_10 21
#define FREE_REFERENCES_LABEL_156_0 18
#define NUMBER_OF_LINKER_SECTIONS_156_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_156 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd58;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd39;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_156_4);
      goto Z__disassociate_thread_mutexes_15;

    case 1:
      current_block = (Rpc - LABEL_156_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_156_6);
      goto do_loop_13;

    case 3:
      current_block = (Rpc - LABEL_156_8);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_156_9);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_156_11);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_156_7);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_156_13);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__disassociate_thread_mutexes_23)
DEFLABEL (Z__disassociate_thread_mutexes_15)
  INTERRUPT_CHECK (26, LABEL_156_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_26;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd13.Lng))))
    goto label_26;
  (Wrd7.Obj) = ((Wrd11.pObj) [12]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_25)
  goto do_loop_13;

DEFLABEL (label_26)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_156_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_156_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_156_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (do_loop_24)
DEFLABEL (do_loop_13)
  INTERRUPT_CHECK (26, LABEL_156_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_28;
  (Wrd7.Obj) = (current_block [OBJECT_156_2]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_27;

DEFLABEL (label_28)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_27)
DEFLABEL (label_39)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_31;
  Rsp = (& (Rsp [2]));
  (Wrd11.Obj) = (current_block [OBJECT_156_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_156_6]);
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd26.uLng) == 62)
    goto label_30;

DEFLABEL (label_29)
  INVOKE_PRIMITIVE ((current_block [OBJECT_156_8]), 3);

DEFLABEL (label_30)
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd24.Lng))))
    goto label_29;
  ((Wrd22.pObj) [12]) = (Wrd13.Obj);
  Rvl = (current_block [OBJECT_156_7]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_156_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_38;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_37)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 62))
    goto label_36;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd47.Lng))))
    goto label_36;
  (Wrd39.Obj) = ((Wrd45.pObj) [3]);

DEFLABEL (label_35)
  (Wrd55.Obj) = (Rsp [4]);
  if (! ((Wrd39.Obj) == (Wrd55.Obj)))
    goto label_32;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_156_10]));

DEFLABEL (label_32)
  (Wrd65.Obj) = (Rsp [0]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 62))
    goto label_34;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd64.Lng))))
    goto label_34;
  (Wrd58.Obj) = ((Wrd62.pObj) [2]);
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_33)
  (Wrd72.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd72.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_156_12]));

DEFLABEL (label_34)
  (Wrd67.Obj) = (Rsp [0]);
  (Wrd68.Obj) = (current_block [OBJECT_156_5]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_156_11]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_156_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.Obj) = (current_block [OBJECT_156_4]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_156_9]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_156_1]), 2);

DEFLABEL (label_19)
  (Wrd39.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_156_8]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_156_3]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_156_7);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_41;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_40)
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_13;

DEFLABEL (label_41)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_156_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_156_9]), 1);

DEFLABEL (label_21)
  (Wrd5.Obj) = Rvl;
  goto label_40;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_157_4 3
#define LABEL_157_5 5
#define ENVIRONMENT_LABEL_157_3 11
#define DEBUGGING_LABEL_157_2 10
#define OBJECT_157_3 9
#define OBJECT_157_2 8
#define OBJECT_157_1 7
#define OBJECT_157_0 6
#define FREE_REFERENCES_LABEL_157_0 6
#define NUMBER_OF_LINKER_SECTIONS_157_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_157 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_157_4);
      goto add_thread_mutexB_2;

    case 1:
      current_block = (Rpc - LABEL_157_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_thread_mutexB_6)
DEFLABEL (add_thread_mutexB_2)
  INTERRUPT_CHECK (26, LABEL_157_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_10;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd14.Lng))))
    goto label_10;
  (Wrd6.Obj) = ((Wrd12.pObj) [12]);

DEFLABEL (label_9)
  (Wrd25.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Rsp [2]) = (Wrd22.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_157_0]);
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 62)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_157_3]), 3);

DEFLABEL (label_8)
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd37.Lng))))
    goto label_7;
  ((Wrd35.pObj) [12]) = (Wrd22.Obj);
  Rvl = (current_block [OBJECT_157_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_157_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_157_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_157_1]), 2);

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_158_4 3
#define LABEL_158_6 5
#define LABEL_158_5 7
#define ENVIRONMENT_LABEL_158_3 16
#define DEBUGGING_LABEL_158_2 15
#define OBJECT_158_3 14
#define OBJECT_158_2 13
#define OBJECT_158_1 12
#define OBJECT_158_0 11
#define EXECUTE_CACHE_158_7 9
#define FREE_REFERENCES_LABEL_158_0 8
#define NUMBER_OF_LINKER_SECTIONS_158_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_158 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_158_4);
      goto remove_thread_mutexB_2;

    case 1:
      current_block = (Rpc - LABEL_158_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_158_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (remove_thread_mutexB_6)
DEFLABEL (remove_thread_mutexB_2)
  INTERRUPT_CHECK (26, LABEL_158_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_158_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_10;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd17.Lng))))
    goto label_10;
  (Wrd11.Obj) = ((Wrd15.pObj) [12]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_9)
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_158_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_158_5);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_158_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_158_3]), 3);

DEFLABEL (label_8)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd17.Lng))))
    goto label_7;
  ((Wrd15.pObj) [12]) = Rvl;
  Rvl = (current_block [OBJECT_158_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_158_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_158_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_158_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_159_4 3
#define ENVIRONMENT_LABEL_159_3 7
#define DEBUGGING_LABEL_159_2 6
#define OBJECT_159_1 5
#define OBJECT_159_0 4
#define FREE_REFERENCES_LABEL_159_0 4
#define NUMBER_OF_LINKER_SECTIONS_159_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_159 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_159_4);
      goto link_prev_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (link_prev_3)
DEFLABEL (link_prev_0)
  INTERRUPT_CHECK (26, LABEL_159_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_159_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_159_1]), 2);

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

#define LABEL_160_4 3
#define ENVIRONMENT_LABEL_160_3 7
#define DEBUGGING_LABEL_160_2 6
#define OBJECT_160_1 5
#define OBJECT_160_0 4
#define FREE_REFERENCES_LABEL_160_0 4
#define NUMBER_OF_LINKER_SECTIONS_160_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_160 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_160_4);
      goto link_next_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (link_next_3)
DEFLABEL (link_next_0)
  INTERRUPT_CHECK (26, LABEL_160_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_160_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_160_1]), 2);

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

#define LABEL_161_4 3
#define ENVIRONMENT_LABEL_161_3 7
#define DEBUGGING_LABEL_161_2 6
#define OBJECT_161_1 5
#define OBJECT_161_0 4
#define FREE_REFERENCES_LABEL_161_0 4
#define NUMBER_OF_LINKER_SECTIONS_161_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_161 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_161_4);
      goto link_item_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (link_item_3)
DEFLABEL (link_item_0)
  INTERRUPT_CHECK (26, LABEL_161_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_161_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_161_1]), 2);

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

#define LABEL_162_4 3
#define ENVIRONMENT_LABEL_162_3 8
#define DEBUGGING_LABEL_162_2 7
#define OBJECT_162_2 6
#define OBJECT_162_1 5
#define OBJECT_162_0 4
#define FREE_REFERENCES_LABEL_162_0 4
#define NUMBER_OF_LINKER_SECTIONS_162_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_162 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_162_4);
      goto set_link_prevB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_link_prevB_3)
DEFLABEL (set_link_prevB_0)
  INTERRUPT_CHECK (26, LABEL_162_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_162_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_162_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_162_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_163_4 3
#define ENVIRONMENT_LABEL_163_3 8
#define DEBUGGING_LABEL_163_2 7
#define OBJECT_163_2 6
#define OBJECT_163_1 5
#define OBJECT_163_0 4
#define FREE_REFERENCES_LABEL_163_0 4
#define NUMBER_OF_LINKER_SECTIONS_163_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_163 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_163_4);
      goto set_link_nextB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_link_nextB_3)
DEFLABEL (set_link_nextB_0)
  INTERRUPT_CHECK (26, LABEL_163_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_163_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_163_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_163_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_164_4 3
#define ENVIRONMENT_LABEL_164_3 8
#define DEBUGGING_LABEL_164_2 7
#define OBJECT_164_2 6
#define OBJECT_164_1 5
#define OBJECT_164_0 4
#define FREE_REFERENCES_LABEL_164_0 4
#define NUMBER_OF_LINKER_SECTIONS_164_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_164 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_164_4);
      goto set_link_itemB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_link_itemB_3)
DEFLABEL (set_link_itemB_0)
  INTERRUPT_CHECK (26, LABEL_164_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_164_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_164_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_164_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_165_4 3
#define LABEL_165_5 5
#define LABEL_165_6 7
#define LABEL_165_7 9
#define ENVIRONMENT_LABEL_165_3 17
#define DEBUGGING_LABEL_165_2 16
#define OBJECT_165_3 15
#define OBJECT_165_2 14
#define OBJECT_165_1 13
#define OBJECT_165_0 12
#define FREE_REFERENCE_165_0 11
#define FREE_REFERENCES_LABEL_165_0 10
#define NUMBER_OF_LINKER_SECTIONS_165_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_165 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_165_4);
      goto linkP_4;

    case 1:
      current_block = (Rpc - LABEL_165_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_165_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_165_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (linkP_10)
DEFLABEL (linkP_4)
  INTERRUPT_CHECK (26, LABEL_165_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_165_0]));
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
  Rvl = (current_block [OBJECT_165_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_165_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_165_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_165_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_165_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_165_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_165_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_166_4 3
#define LABEL_166_5 5
#define LABEL_166_7 7
#define LABEL_166_8 9
#define ENVIRONMENT_LABEL_166_3 17
#define DEBUGGING_LABEL_166_2 16
#define OBJECT_166_2 15
#define OBJECT_166_1 14
#define OBJECT_166_0 13
#define EXECUTE_CACHE_166_6 11
#define FREE_REFERENCES_LABEL_166_0 10
#define NUMBER_OF_LINKER_SECTIONS_166_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_166 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
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
      current_block = (Rpc - LABEL_166_4);
      goto make_ring_4;

    case 1:
      current_block = (Rpc - LABEL_166_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_166_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_166_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_ring_9)
DEFLABEL (make_ring_4)
  INTERRUPT_CHECK (26, LABEL_166_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_166_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_166_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_166_5);
  (* (--Rsp)) = Rvl;
  (Wrd34.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd34.uLng) == 62))
    goto label_13;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_13;
  ((Wrd30.pObj) [2]) = Rvl;

DEFLABEL (label_12)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_11;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_11;
  ((Wrd13.pObj) [3]) = (Wrd16.Obj);

DEFLABEL (label_10)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_166_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_166_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_166_1]), 3);

DEFLABEL (label_6)
  goto label_10;

DEFLABEL (label_13)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_166_0]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_166_7]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_166_1]), 3);

DEFLABEL (label_7)
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_167_4 3
#define LABEL_167_5 5
#define ENVIRONMENT_LABEL_167_3 10
#define DEBUGGING_LABEL_167_2 9
#define OBJECT_167_2 8
#define OBJECT_167_1 7
#define OBJECT_167_0 6
#define FREE_REFERENCES_LABEL_167_0 6
#define NUMBER_OF_LINKER_SECTIONS_167_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_167 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_167_4);
      goto ring_emptyP_1;

    case 1:
      current_block = (Rpc - LABEL_167_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ring_emptyP_5)
DEFLABEL (ring_emptyP_1)
  INTERRUPT_CHECK (26, LABEL_167_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_10;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_10;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_9)
  (Wrd22.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (Wrd22.Obj))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_167_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_167_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_167_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_167_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_168_4 3
#define LABEL_168_5 5
#define LABEL_168_6 7
#define LABEL_168_8 9
#define ENVIRONMENT_LABEL_168_3 19
#define DEBUGGING_LABEL_168_2 18
#define OBJECT_168_4 17
#define OBJECT_168_3 16
#define OBJECT_168_2 15
#define OBJECT_168_1 14
#define OBJECT_168_0 13
#define EXECUTE_CACHE_168_7 11
#define FREE_REFERENCES_LABEL_168_0 10
#define NUMBER_OF_LINKER_SECTIONS_168_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_168 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_168_4);
      goto ring_enqueue_5;

    case 1:
      current_block = (Rpc - LABEL_168_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_168_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_168_8);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ring_enqueue_10)
DEFLABEL (ring_enqueue_5)
  INTERRUPT_CHECK (26, LABEL_168_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_16;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_16;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_15)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_168_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_168_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_168_6);
  (* (--Rsp)) = Rvl;
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_14;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd30.Lng))))
    goto label_14;
  ((Wrd28.pObj) [3]) = Rvl;

DEFLABEL (label_13)
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_168_0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_12;

DEFLABEL (label_11)
  INVOKE_PRIMITIVE ((current_block [OBJECT_168_3]), 3);

DEFLABEL (label_12)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_11;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [2]) = (Wrd11.Obj);
  Rvl = (current_block [OBJECT_168_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.Obj) = (current_block [OBJECT_168_2]);
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_168_8]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_168_3]), 3);

DEFLABEL (label_8)
  goto label_13;

DEFLABEL (label_16)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_168_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_168_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_168_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_169_5 3
#define LABEL_169_4 5
#define LABEL_169_6 7
#define LABEL_169_7 9
#define LABEL_169_8 11
#define ENVIRONMENT_LABEL_169_3 18
#define DEBUGGING_LABEL_169_2 17
#define OBJECT_169_4 16
#define OBJECT_169_3 15
#define OBJECT_169_2 14
#define OBJECT_169_1 13
#define OBJECT_169_0 12
#define FREE_REFERENCES_LABEL_169_0 12
#define NUMBER_OF_LINKER_SECTIONS_169_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_169 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd74;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd25;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_169_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_169_4);
      goto ring_dequeue_7;

    case 2:
      current_block = (Rpc - LABEL_169_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_169_7);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_169_8);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ring_dequeue_13)
DEFLABEL (ring_dequeue_7)
  INTERRUPT_CHECK (26, LABEL_169_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_25;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_25;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_24)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (Rsp [1]);
  if (! ((Wrd21.Obj) == (Wrd22.Obj)))
    goto label_14;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_169_5]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_23;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd34.Lng))))
    goto label_23;
  (Wrd28.Obj) = ((Wrd32.pObj) [3]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_22)
  (Wrd81.Obj) = (Rsp [3]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd82.uLng) == 62))
    goto label_21;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd79.Obj) = ((Wrd78.pObj) [0]);
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd80.Lng))))
    goto label_21;
  (Wrd74.Obj) = (Rsp [0]);
  ((Wrd78.pObj) [3]) = (Wrd74.Obj);

DEFLABEL (label_20)
  (Wrd42.Obj) = (current_block [OBJECT_169_3]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [5]);
  (Rsp [2]) = (Wrd44.Obj);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd71.uLng) == 62)
    goto label_16;

DEFLABEL (label_15)
  INVOKE_PRIMITIVE ((current_block [OBJECT_169_2]), 3);

DEFLABEL (label_16)
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd69.Lng))))
    goto label_15;
  ((Wrd67.pObj) [2]) = (Wrd44.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_19)
  (Wrd46.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd46.Obj);
  (Wrd47.Obj) = (current_block [OBJECT_169_4]);
  (Rsp [2]) = (Wrd47.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd58.Obj) = (Rsp [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd59.uLng) == 62)
    goto label_18;

DEFLABEL (label_17)
  INVOKE_PRIMITIVE ((current_block [OBJECT_169_1]), 2);

DEFLABEL (label_18)
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd57.Lng))))
    goto label_17;
  Rvl = ((Wrd55.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd83.Obj) = (Rsp [3]);
  (Wrd84.Obj) = (current_block [OBJECT_169_0]);
  (Wrd85.Obj) = (Rsp [0]);
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_169_8]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_169_2]), 3);

DEFLABEL (label_11)
  goto label_20;

DEFLABEL (label_23)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.Obj) = (current_block [OBJECT_169_0]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_169_7]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_169_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_169_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_169_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_169_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_169_5);
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_170_4 3
#define LABEL_170_5 5
#define ENVIRONMENT_LABEL_170_3 11
#define DEBUGGING_LABEL_170_2 10
#define OBJECT_170_3 9
#define OBJECT_170_2 8
#define OBJECT_170_1 7
#define OBJECT_170_0 6
#define FREE_REFERENCES_LABEL_170_0 6
#define NUMBER_OF_LINKER_SECTIONS_170_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_170 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_170_4);
      goto ring_discard_all_1;

    case 1:
      current_block = (Rpc - LABEL_170_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ring_discard_all_5)
DEFLABEL (ring_discard_all_1)
  INTERRUPT_CHECK (26, LABEL_170_4);
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_9;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd28.Lng))))
    goto label_9;
  ((Wrd26.pObj) [2]) = (Wrd29.Obj);

DEFLABEL (label_8)
  (Wrd5.Obj) = (current_block [OBJECT_170_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_170_1]), 3);

DEFLABEL (label_7)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_6;
  ((Wrd15.pObj) [3]) = (Wrd6.Obj);
  Rvl = (current_block [OBJECT_170_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.Obj) = (current_block [OBJECT_170_0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_170_5]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_170_1]), 3);

DEFLABEL (label_3)
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_171_4 3
#define LABEL_171_5 5
#define LABEL_171_6 7
#define LABEL_171_7 9
#define LABEL_171_8 11
#define LABEL_171_9 13
#define LABEL_171_10 15
#define LABEL_171_11 17
#define ENVIRONMENT_LABEL_171_3 25
#define DEBUGGING_LABEL_171_2 24
#define OBJECT_171_5 23
#define OBJECT_171_4 22
#define OBJECT_171_3 21
#define OBJECT_171_2 20
#define OBJECT_171_1 19
#define OBJECT_171_0 18
#define FREE_REFERENCES_LABEL_171_0 18
#define NUMBER_OF_LINKER_SECTIONS_171_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_171 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd87;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd90;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd98;
  machine_word Wrd97;
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
  machine_word Wrd40;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_171_4);
      goto ring_remove_item_12;

    case 1:
      current_block = (Rpc - LABEL_171_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_171_6);
      goto loop_10;

    case 3:
      current_block = (Rpc - LABEL_171_7);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_171_8);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_171_9);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_171_10);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_171_11);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ring_remove_item_21)
DEFLABEL (ring_remove_item_12)
  INTERRUPT_CHECK (26, LABEL_171_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_24;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_24;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_23)
  goto loop_10;

DEFLABEL (label_24)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_171_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_171_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_171_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (loop_22)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_171_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_26;

DEFLABEL (label_25)
  Rvl = (current_block [OBJECT_171_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_39;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_39;
  (Wrd7.Obj) = ((Wrd13.pObj) [4]);

DEFLABEL (label_38)
  (Wrd23.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (Wrd23.Obj))
    goto label_29;
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_28;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_28;
  (Wrd24.Obj) = ((Wrd30.pObj) [3]);

DEFLABEL (label_27)
  (Rsp [0]) = (Wrd24.Obj);
  goto loop_10;

DEFLABEL (label_28)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_171_0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_171_11]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_171_1]), 2);

DEFLABEL (label_16)
  (Wrd24.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_29)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 62))
    goto label_37;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd48.Lng))))
    goto label_37;
  (Wrd40.Obj) = ((Wrd46.pObj) [2]);

DEFLABEL (label_36)
  (Rsp [1]) = (Wrd40.Obj);
  (Wrd65.Obj) = (Rsp [0]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 62))
    goto label_35;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd64.Lng))))
    goto label_35;
  (Wrd56.Obj) = ((Wrd62.pObj) [3]);

DEFLABEL (label_34)
  (Rsp [2]) = (Wrd56.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd97.Obj) = (Rsp [0]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd98.uLng) == 62))
    goto label_33;
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd95.Obj) = ((Wrd94.pObj) [0]);
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd95.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd96.Lng))))
    goto label_33;
  (Wrd90.Obj) = (Rsp [1]);
  ((Wrd94.pObj) [3]) = (Wrd90.Obj);

DEFLABEL (label_32)
  (Wrd72.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd73.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd73.Obj);
  (Wrd74.Obj) = (current_block [OBJECT_171_3]);
  (Rsp [1]) = (Wrd74.Obj);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if ((Wrd87.uLng) == 62)
    goto label_31;

DEFLABEL (label_30)
  INVOKE_PRIMITIVE ((current_block [OBJECT_171_4]), 3);

DEFLABEL (label_31)
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [0]);
  (Wrd85.Lng) = (FIXNUM_TO_LONG (Wrd84.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd85.Lng))))
    goto label_30;
  ((Wrd83.pObj) [2]) = (Wrd73.Obj);
  goto label_25;

DEFLABEL (label_33)
  (Wrd99.Obj) = (Rsp [0]);
  (Wrd100.Obj) = (current_block [OBJECT_171_0]);
  (Wrd101.Obj) = (Rsp [1]);
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_171_10]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_171_4]), 3);

DEFLABEL (label_19)
  goto label_32;

DEFLABEL (label_35)
  (Wrd67.Obj) = (Rsp [0]);
  (Wrd68.Obj) = (current_block [OBJECT_171_0]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_171_9]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_171_1]), 2);

DEFLABEL (label_18)
  (Wrd56.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.Obj) = (current_block [OBJECT_171_3]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_171_8]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_171_1]), 2);

DEFLABEL (label_17)
  (Wrd40.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_171_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_171_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_171_1]), 2);

DEFLABEL (label_15)
  (Wrd7.Obj) = Rvl;
  goto label_38;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_172_4 3
#define LABEL_172_5 5
#define LABEL_172_6 7
#define ENVIRONMENT_LABEL_172_3 13
#define DEBUGGING_LABEL_172_2 12
#define OBJECT_172_3 11
#define OBJECT_172_2 10
#define OBJECT_172_1 9
#define OBJECT_172_0 8
#define FREE_REFERENCES_LABEL_172_0 8
#define NUMBER_OF_LINKER_SECTIONS_172_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_172 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_172_4);
      goto ring_count_max_2_5;

    case 1:
      current_block = (Rpc - LABEL_172_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_172_6);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ring_count_max_2_10)
DEFLABEL (ring_count_max_2_5)
  INTERRUPT_CHECK (26, LABEL_172_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_18;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_18;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_17)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (Rsp [1]);
  if ((Wrd21.Obj) == (Wrd22.Obj))
    goto label_16;
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_15;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd31.Lng))))
    goto label_15;
  (Wrd23.Obj) = ((Wrd29.pObj) [3]);

DEFLABEL (label_14)
  (Wrd39.Obj) = (Rsp [1]);
  if ((Wrd23.Obj) == (Wrd39.Obj))
    goto label_12;
  Rvl = (current_block [OBJECT_172_0]);
  goto label_11;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_172_3]);

DEFLABEL (label_11)
DEFLABEL (label_13)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Obj) = (current_block [OBJECT_172_0]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_172_6]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_172_1]), 2);

DEFLABEL (label_8)
  (Wrd23.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_172_2]);
  goto label_13;

DEFLABEL (label_18)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_172_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_172_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_172_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_173_4 3
#define LABEL_173_5 5
#define ENVIRONMENT_LABEL_173_3 10
#define DEBUGGING_LABEL_173_2 9
#define OBJECT_173_2 8
#define OBJECT_173_1 7
#define OBJECT_173_0 6
#define FREE_REFERENCES_LABEL_173_0 6
#define NUMBER_OF_LINKER_SECTIONS_173_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_173 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
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
      current_block = (Rpc - LABEL_173_4);
      goto ring_first_item_1;

    case 1:
      current_block = (Rpc - LABEL_173_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ring_first_item_5)
DEFLABEL (ring_first_item_1)
  INTERRUPT_CHECK (26, LABEL_173_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_8)
  (Wrd21.Obj) = (current_block [OBJECT_173_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_173_1]), 2);

DEFLABEL (label_7)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd31.Lng))))
    goto label_6;
  Rvl = ((Wrd29.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_173_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_173_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_173_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_174_4 3
#define LABEL_174_5 5
#define ENVIRONMENT_LABEL_174_3 12
#define DEBUGGING_LABEL_174_2 11
#define OBJECT_174_4 10
#define OBJECT_174_3 9
#define OBJECT_174_2 8
#define OBJECT_174_1 7
#define OBJECT_174_0 6
#define FREE_REFERENCES_LABEL_174_0 6
#define NUMBER_OF_LINKER_SECTIONS_174_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_174 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
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
      current_block = (Rpc - LABEL_174_4);
      goto ring_set_first_itemB_1;

    case 1:
      current_block = (Rpc - LABEL_174_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ring_set_first_itemB_5)
DEFLABEL (ring_set_first_itemB_1)
  INTERRUPT_CHECK (26, LABEL_174_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_8)
  (Wrd21.Obj) = (current_block [OBJECT_174_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_174_4]), 3);

DEFLABEL (label_7)
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd32.Lng))))
    goto label_6;
  (Wrd25.Obj) = (Rsp [2]);
  ((Wrd30.pObj) [4]) = (Wrd25.Obj);
  Rvl = (current_block [OBJECT_174_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_174_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_174_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_174_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_175_4 3
#define LABEL_175_7 5
#define LABEL_175_5 7
#define LABEL_175_9 9
#define LABEL_175_11 11
#define LABEL_175_6 13
#define LABEL_175_10 15
#define LABEL_175_15 17
#define LABEL_175_18 19
#define LABEL_175_13 21
#define LABEL_175_16 23
#define LABEL_175_22 25
#define LABEL_175_24 27
#define LABEL_175_25 29
#define LABEL_175_17 31
#define LABEL_175_19 33
#define LABEL_175_20 35
#define LABEL_175_23 37
#define LABEL_175_29 39
#define LABEL_175_31 41
#define LABEL_175_27 43
#define LABEL_175_30 45
#define LABEL_175_35 47
#define LABEL_175_37 49
#define LABEL_175_32 51
#define LABEL_175_33 53
#define LABEL_175_36 55
#define LABEL_175_39 57
#define LABEL_175_41 59
#define LABEL_175_38 61
#define LABEL_175_40 63
#define LABEL_175_45 65
#define LABEL_175_48 67
#define LABEL_175_42 69
#define LABEL_175_43 71
#define LABEL_175_46 73
#define LABEL_175_49 75
#define LABEL_175_51 77
#define LABEL_175_52 79
#define LABEL_175_47 81
#define LABEL_175_50 83
#define LABEL_175_54 85
#define LABEL_175_57 87
#define LABEL_175_53 89
#define LABEL_175_55 91
#define LABEL_175_60 93
#define LABEL_175_62 95
#define LABEL_175_63 97
#define LABEL_175_56 99
#define LABEL_175_58 101
#define LABEL_175_59 103
#define LABEL_175_61 105
#define LABEL_175_67 107
#define LABEL_175_69 109
#define LABEL_175_64 111
#define LABEL_175_65 113
#define TAG_175_66 55
#define LABEL_175_68 115
#define LABEL_175_73 117
#define LABEL_175_76 119
#define LABEL_175_70 121
#define LABEL_175_71 123
#define LABEL_175_74 125
#define LABEL_175_78 127
#define LABEL_175_75 129
#define LABEL_175_77 131
#define LABEL_175_79 133
#define LABEL_175_80 135
#define ENVIRONMENT_LABEL_175_3 203
#define DEBUGGING_LABEL_175_2 202
#define OBJECT_175_25 201
#define OBJECT_175_24 200
#define OBJECT_175_23 199
#define OBJECT_175_22 198
#define OBJECT_175_21 197
#define OBJECT_175_20 196
#define OBJECT_175_19 195
#define OBJECT_175_18 194
#define OBJECT_175_17 193
#define OBJECT_175_16 192
#define OBJECT_175_15 191
#define OBJECT_175_14 190
#define OBJECT_175_13 189
#define OBJECT_175_12 188
#define OBJECT_175_11 187
#define OBJECT_175_10 186
#define OBJECT_175_9 185
#define OBJECT_175_8 184
#define OBJECT_175_7 183
#define OBJECT_175_6 182
#define OBJECT_175_5 181
#define OBJECT_175_4 180
#define OBJECT_175_3 179
#define OBJECT_175_2 178
#define OBJECT_175_1 177
#define OBJECT_175_0 176
#define EXECUTE_CACHE_175_72 137
#define EXECUTE_CACHE_175_44 139
#define EXECUTE_CACHE_175_34 141
#define EXECUTE_CACHE_175_28 143
#define EXECUTE_CACHE_175_26 145
#define EXECUTE_CACHE_175_21 147
#define EXECUTE_CACHE_175_14 149
#define EXECUTE_CACHE_175_12 151
#define EXECUTE_CACHE_175_8 153
#define FREE_REFERENCE_175_5 156
#define FREE_REFERENCE_175_4 157
#define FREE_REFERENCE_175_3 158
#define FREE_REFERENCE_175_2 159
#define FREE_REFERENCE_175_1 160
#define FREE_REFERENCE_175_0 161
#define FREE_ASSIGNMENT_175_12 163
#define FREE_ASSIGNMENT_175_11 164
#define FREE_ASSIGNMENT_175_10 165
#define FREE_ASSIGNMENT_175_9 166
#define FREE_ASSIGNMENT_175_8 167
#define FREE_ASSIGNMENT_175_7 168
#define FREE_ASSIGNMENT_175_6 169
#define FREE_ASSIGNMENT_175_5 170
#define FREE_ASSIGNMENT_175_4 171
#define FREE_ASSIGNMENT_175_3 172
#define FREE_ASSIGNMENT_175_2 173
#define FREE_ASSIGNMENT_175_1 174
#define FREE_ASSIGNMENT_175_0 175
#define FREE_REFERENCES_LABEL_175_0 136
#define NUMBER_OF_LINKER_SECTIONS_175_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_so_code_175 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd8;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_175_4);
      goto initialize_error_conditionsB_39;

    case 1:
      current_block = (Rpc - LABEL_175_7);
      goto label_41;

    case 2:
      current_block = (Rpc - LABEL_175_5);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_175_9);
      goto label_42;

    case 4:
      current_block = (Rpc - LABEL_175_11);
      goto label_43;

    case 5:
      current_block = (Rpc - LABEL_175_6);
      goto lambda_3;

    case 6:
      current_block = (Rpc - LABEL_175_10);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_175_15);
      goto label_44;

    case 8:
      current_block = (Rpc - LABEL_175_18);
      goto label_45;

    case 9:
      current_block = (Rpc - LABEL_175_13);
      goto continuation_0;

    case 10:
      current_block = (Rpc - LABEL_175_16);
      goto continuation_13;

    case 11:
      current_block = (Rpc - LABEL_175_22);
      goto label_46;

    case 12:
      current_block = (Rpc - LABEL_175_24);
      goto label_47;

    case 13:
      current_block = (Rpc - LABEL_175_25);
      goto label_48;

    case 14:
      current_block = (Rpc - LABEL_175_17);
      goto lambda_12;

    case 15:
      current_block = (Rpc - LABEL_175_19);
      goto continuation_2;

    case 16:
      current_block = (Rpc - LABEL_175_20);
      goto continuation_1;

    case 17:
      current_block = (Rpc - LABEL_175_23);
      goto continuation_14;

    case 18:
      current_block = (Rpc - LABEL_175_29);
      goto label_49;

    case 19:
      current_block = (Rpc - LABEL_175_31);
      goto label_50;

    case 20:
      current_block = (Rpc - LABEL_175_27);
      goto continuation_6;

    case 21:
      current_block = (Rpc - LABEL_175_30);
      goto continuation_15;

    case 22:
      current_block = (Rpc - LABEL_175_35);
      goto label_51;

    case 23:
      current_block = (Rpc - LABEL_175_37);
      goto label_52;

    case 24:
      current_block = (Rpc - LABEL_175_32);
      goto continuation_8;

    case 25:
      current_block = (Rpc - LABEL_175_33);
      goto continuation_7;

    case 26:
      current_block = (Rpc - LABEL_175_36);
      goto continuation_16;

    case 27:
      current_block = (Rpc - LABEL_175_39);
      goto label_53;

    case 28:
      current_block = (Rpc - LABEL_175_41);
      goto label_54;

    case 29:
      current_block = (Rpc - LABEL_175_38);
      goto continuation_9;

    case 30:
      current_block = (Rpc - LABEL_175_40);
      goto continuation_17;

    case 31:
      current_block = (Rpc - LABEL_175_45);
      goto label_55;

    case 32:
      current_block = (Rpc - LABEL_175_48);
      goto label_56;

    case 33:
      current_block = (Rpc - LABEL_175_42);
      goto continuation_11;

    case 34:
      current_block = (Rpc - LABEL_175_43);
      goto continuation_10;

    case 35:
      current_block = (Rpc - LABEL_175_46);
      goto continuation_22;

    case 36:
      current_block = (Rpc - LABEL_175_49);
      goto label_57;

    case 37:
      current_block = (Rpc - LABEL_175_51);
      goto label_58;

    case 38:
      current_block = (Rpc - LABEL_175_52);
      goto label_59;

    case 39:
      current_block = (Rpc - LABEL_175_47);
      goto lambda_21;

    case 40:
      current_block = (Rpc - LABEL_175_50);
      goto continuation_23;

    case 41:
      current_block = (Rpc - LABEL_175_54);
      goto label_60;

    case 42:
      current_block = (Rpc - LABEL_175_57);
      goto label_61;

    case 43:
      current_block = (Rpc - LABEL_175_53);
      goto continuation_18;

    case 44:
      current_block = (Rpc - LABEL_175_55);
      goto continuation_31;

    case 45:
      current_block = (Rpc - LABEL_175_60);
      goto label_62;

    case 46:
      current_block = (Rpc - LABEL_175_62);
      goto label_63;

    case 47:
      current_block = (Rpc - LABEL_175_63);
      goto label_64;

    case 48:
      current_block = (Rpc - LABEL_175_56);
      goto lambda_30;

    case 49:
      current_block = (Rpc - LABEL_175_58);
      goto continuation_20;

    case 50:
      current_block = (Rpc - LABEL_175_59);
      goto continuation_19;

    case 51:
      current_block = (Rpc - LABEL_175_61);
      goto continuation_32;

    case 52:
      current_block = (Rpc - LABEL_175_67);
      goto label_65;

    case 53:
      current_block = (Rpc - LABEL_175_69);
      goto label_66;

    case 54:
      current_block = (Rpc - LABEL_175_64);
      goto continuation_24;

    case 55:
      current_block = (Rpc - LABEL_175_65);
      goto lambda_76;

    case 56:
      current_block = (Rpc - LABEL_175_68);
      goto continuation_36;

    case 57:
      current_block = (Rpc - LABEL_175_73);
      goto label_67;

    case 58:
      current_block = (Rpc - LABEL_175_76);
      goto label_68;

    case 59:
      current_block = (Rpc - LABEL_175_70);
      goto continuation_26;

    case 60:
      current_block = (Rpc - LABEL_175_71);
      goto continuation_25;

    case 61:
      current_block = (Rpc - LABEL_175_74);
      goto continuation_38;

    case 62:
      current_block = (Rpc - LABEL_175_78);
      goto label_69;

    case 63:
      current_block = (Rpc - LABEL_175_75);
      goto lambda_37;

    case 64:
      current_block = (Rpc - LABEL_175_77);
      goto continuation_27;

    case 65:
      current_block = (Rpc - LABEL_175_79);
      goto continuation_29;

    case 66:
      current_block = (Rpc - LABEL_175_80);
      goto continuation_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_error_conditionsB_71)
DEFLABEL (initialize_error_conditionsB_39)
  INTERRUPT_CHECK (26, LABEL_175_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_175_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_175_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_148;
  Wrd11 = Wrd15;

DEFLABEL (label_147)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_175_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_175_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_175_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_146;

DEFLABEL (label_145)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_144)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_175_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_175_1]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_143;
  Wrd22 = Wrd26;

DEFLABEL (label_142)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_175_10);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_175_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_141;

DEFLABEL (label_140)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_139)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_17]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_175_4]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_175_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_138;
  Wrd24 = Wrd28;

DEFLABEL (label_137)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_175_5]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_8]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_175_16);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_175_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_136;

DEFLABEL (label_135)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_134)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_23]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_175_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_133;
  Wrd21 = Wrd25;

DEFLABEL (label_132)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_175_6]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_175_3]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_131;
  Wrd28 = Wrd32;

DEFLABEL (label_130)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_26]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_175_23);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_175_3]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_129;

DEFLABEL (label_128)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_127)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_30]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_175_9]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_175_3]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_126;
  Wrd22 = Wrd26;

DEFLABEL (label_125)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_12]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_175_30);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_175_4]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_124;

DEFLABEL (label_123)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_122)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_36]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_175_10]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_175_3]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_121;
  Wrd22 = Wrd26;

DEFLABEL (label_120)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_12]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_175_36);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_175_5]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_119;

DEFLABEL (label_118)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_117)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_40]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_175_12]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_175_3]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_116;
  Wrd22 = Wrd26;

DEFLABEL (label_115)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_12]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_175_40);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_175_6]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_114;

DEFLABEL (label_113)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_112)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_46]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_47]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_175_13]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_175_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_111;
  Wrd24 = Wrd28;

DEFLABEL (label_110)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_175_14]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_8]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_175_46);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_175_7]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_109;

DEFLABEL (label_108)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_107)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_50]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_175_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_106;
  Wrd21 = Wrd25;

DEFLABEL (label_105)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_175_0]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_175_4]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_104;
  Wrd28 = Wrd32;

DEFLABEL (label_103)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_26]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_175_50);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_175_8]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_102;

DEFLABEL (label_101)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_100)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_55]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_56]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_175_16]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_175_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_99;
  Wrd24 = Wrd28;

DEFLABEL (label_98)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_175_17]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_8]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_175_55);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_175_9]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_97;

DEFLABEL (label_96)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_95)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_61]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_175_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_94;
  Wrd21 = Wrd25;

DEFLABEL (label_93)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_175_18]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_175_5]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_92;
  Wrd28 = Wrd32;

DEFLABEL (label_91)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_26]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_175_61);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x4fb, 2);
  (* (Rhp++)) = (dispatch_base + TAG_175_66);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_175_65])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_175_10]));
  (Wrd19.Obj) = ((Wrd11.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_90;

DEFLABEL (label_89)
  ((Wrd11.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_88)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_68]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_175_20]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_175_5]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_87;
  Wrd27 = Wrd31;

DEFLABEL (label_86)
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_12]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_175_68);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_175_11]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_85;

DEFLABEL (label_84)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_83)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_74]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_75]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_175_13]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_175_0]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_82;
  Wrd24 = Wrd28;

DEFLABEL (label_81)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_175_21]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_8]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_175_74);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_175_12]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_80;

DEFLABEL (label_79)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_78)
  Rvl = (current_block [OBJECT_175_23]);
  goto pop_return;

DEFLABEL (label_80)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_79;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_175_78])), (Wrd6.pObj), Rvl);

DEFLABEL (label_69)
  goto label_78;

DEFLABEL (label_82)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_175_76])), (Wrd25.pObj));

DEFLABEL (label_68)
  (Wrd24.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_85)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_84;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_175_73])), (Wrd6.pObj), Rvl);

DEFLABEL (label_67)
  goto label_83;

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_175_69])), (Wrd28.pObj));

DEFLABEL (label_66)
  (Wrd27.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_90)
  if ((Wrd19.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_89;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_175_67])), (Wrd11.pObj), (Wrd6.Obj));

DEFLABEL (label_65)
  goto label_88;

DEFLABEL (label_92)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_175_63])), (Wrd29.pObj));

DEFLABEL (label_64)
  (Wrd28.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_175_62])), (Wrd22.pObj));

DEFLABEL (label_63)
  (Wrd21.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_97)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_96;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_175_60])), (Wrd6.pObj), Rvl);

DEFLABEL (label_62)
  goto label_95;

DEFLABEL (label_99)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_175_57])), (Wrd25.pObj));

DEFLABEL (label_61)
  (Wrd24.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_102)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_101;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_175_54])), (Wrd6.pObj), Rvl);

DEFLABEL (label_60)
  goto label_100;

DEFLABEL (label_104)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_175_52])), (Wrd29.pObj));

DEFLABEL (label_59)
  (Wrd28.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_175_51])), (Wrd22.pObj));

DEFLABEL (label_58)
  (Wrd21.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_109)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_108;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_175_49])), (Wrd6.pObj), Rvl);

DEFLABEL (label_57)
  goto label_107;

DEFLABEL (label_111)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_175_48])), (Wrd25.pObj));

DEFLABEL (label_56)
  (Wrd24.Obj) = Rvl;
  goto label_110;

DEFLABEL (label_114)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_113;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_175_45])), (Wrd6.pObj), Rvl);

DEFLABEL (label_55)
  goto label_112;

DEFLABEL (label_116)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_175_41])), (Wrd23.pObj));

DEFLABEL (label_54)
  (Wrd22.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_119)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_118;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_175_39])), (Wrd6.pObj), Rvl);

DEFLABEL (label_53)
  goto label_117;

DEFLABEL (label_121)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_175_37])), (Wrd23.pObj));

DEFLABEL (label_52)
  (Wrd22.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_124)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_123;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_175_35])), (Wrd6.pObj), Rvl);

DEFLABEL (label_51)
  goto label_122;

DEFLABEL (label_126)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_175_31])), (Wrd23.pObj));

DEFLABEL (label_50)
  (Wrd22.Obj) = Rvl;
  goto label_125;

DEFLABEL (label_129)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_128;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_175_29])), (Wrd6.pObj), Rvl);

DEFLABEL (label_49)
  goto label_127;

DEFLABEL (label_131)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_175_25])), (Wrd29.pObj));

DEFLABEL (label_48)
  (Wrd28.Obj) = Rvl;
  goto label_130;

DEFLABEL (label_133)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_175_24])), (Wrd22.pObj));

DEFLABEL (label_47)
  (Wrd21.Obj) = Rvl;
  goto label_132;

DEFLABEL (label_136)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_135;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_175_22])), (Wrd6.pObj), Rvl);

DEFLABEL (label_46)
  goto label_134;

DEFLABEL (label_138)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_175_18])), (Wrd25.pObj));

DEFLABEL (label_45)
  (Wrd24.Obj) = Rvl;
  goto label_137;

DEFLABEL (label_141)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_140;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_175_15])), (Wrd6.pObj), Rvl);

DEFLABEL (label_44)
  goto label_139;

DEFLABEL (label_143)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_175_11])), (Wrd23.pObj));

DEFLABEL (label_43)
  (Wrd22.Obj) = Rvl;
  goto label_142;

DEFLABEL (label_146)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_145;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_175_9])), (Wrd6.pObj), Rvl);

DEFLABEL (label_42)
  goto label_144;

DEFLABEL (label_148)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_175_7])), (Wrd12.pObj));

DEFLABEL (label_41)
  (Wrd11.Obj) = Rvl;
  goto label_147;

DEFLABEL (lambda_72)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_175_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_175_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_14]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_175_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_21]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_175_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_28]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_175_19);
  (Wrd5.Obj) = (current_block [OBJECT_175_8]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_14]));

DEFLABEL (lambda_73)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_175_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_175_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_175_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_33]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_34]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_175_33);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_175_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_175_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_14]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_175_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_43]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_44]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_175_43);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_28]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_175_42);
  (Wrd5.Obj) = (current_block [OBJECT_175_8]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_14]));

DEFLABEL (lambda_74)
DEFLABEL (lambda_21)
  INTERRUPT_CHECK (26, LABEL_175_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_175_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_14]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_175_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_59]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_21]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_175_59);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_28]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_175_58);
  (Wrd5.Obj) = (current_block [OBJECT_175_8]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_14]));

DEFLABEL (lambda_75)
DEFLABEL (lambda_30)
  INTERRUPT_CHECK (26, LABEL_175_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_175_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_14]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_175_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_71]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_72]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_175_71);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_14]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_175_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_175_22]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_14]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_175_77);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175_80]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_21]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_175_80);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_28]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_175_79);
  (Wrd5.Obj) = (current_block [OBJECT_175_25]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_14]));

DEFLABEL (lambda_76)
  CLOSURE_HEADER (LABEL_175_65);

DEFLABEL (lambda_34)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (lambda_77)
DEFLABEL (lambda_37)
  INTERRUPT_CHECK (26, LABEL_175_75);
  (Wrd5.Obj) = (current_block [OBJECT_175_24]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_175_14]));

INVOKE_INTERFACE_TARGET_0
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
#define LABEL_23 27
#define LABEL_21 29
#define LABEL_22 31
#define LABEL_27 33
#define LABEL_24 35
#define LABEL_30 37
#define LABEL_25 39
#define LABEL_26 41
#define LABEL_31 43
#define LABEL_33 45
#define LABEL_28 47
#define LABEL_29 49
#define LABEL_32 51
#define LABEL_38 53
#define LABEL_34 55
#define LABEL_41 57
#define LABEL_35 59
#define TAG_36 28
#define LABEL_37 61
#define LABEL_43 63
#define LABEL_39 65
#define LABEL_40 67
#define LABEL_42 69
#define LABEL_44 71
#define LABEL_48 73
#define LABEL_45 75
#define LABEL_46 77
#define LABEL_47 79
#define LABEL_49 81
#define LABEL_54 83
#define LABEL_50 85
#define TAG_51 41
#define LABEL_52 87
#define LABEL_53 89
#define LABEL_55 91
#define LABEL_56 93
#define LABEL_60 95
#define LABEL_57 97
#define LABEL_58 99
#define LABEL_59 101
#define LABEL_61 103
#define LABEL_66 105
#define LABEL_62 107
#define TAG_63 52
#define LABEL_64 109
#define LABEL_65 111
#define LABEL_67 113
#define LABEL_68 115
#define LABEL_72 117
#define LABEL_69 119
#define LABEL_70 121
#define LABEL_71 123
#define LABEL_73 125
#define LABEL_78 127
#define LABEL_74 129
#define TAG_75 63
#define LABEL_80 131
#define LABEL_76 133
#define LABEL_77 135
#define LABEL_79 137
#define LABEL_81 139
#define LABEL_82 141
#define LABEL_86 143
#define LABEL_83 145
#define LABEL_84 147
#define LABEL_85 149
#define LABEL_87 151
#define LABEL_92 153
#define LABEL_88 155
#define TAG_89 76
#define LABEL_90 157
#define LABEL_91 159
#define LABEL_93 161
#define LABEL_94 163
#define LABEL_95 165
#define ENVIRONMENT_LABEL_3 257
#define DEBUGGING_LABEL_2 256
#define PURIFICATION_ROOT 255
#define OBJECT_71 254
#define OBJECT_70 253
#define OBJECT_69 252
#define OBJECT_68 251
#define OBJECT_67 250
#define OBJECT_66 249
#define OBJECT_65 248
#define OBJECT_64 247
#define OBJECT_63 246
#define OBJECT_62 245
#define OBJECT_61 244
#define OBJECT_60 243
#define OBJECT_59 242
#define OBJECT_58 241
#define OBJECT_57 240
#define OBJECT_56 239
#define OBJECT_55 238
#define OBJECT_54 237
#define OBJECT_53 236
#define OBJECT_52 235
#define OBJECT_51 234
#define OBJECT_50 233
#define OBJECT_49 232
#define OBJECT_48 231
#define OBJECT_47 230
#define OBJECT_46 229
#define OBJECT_45 228
#define OBJECT_44 227
#define OBJECT_43 226
#define OBJECT_42 225
#define OBJECT_41 224
#define OBJECT_40 223
#define OBJECT_39 222
#define OBJECT_38 221
#define OBJECT_37 220
#define OBJECT_36 219
#define OBJECT_35 218
#define OBJECT_34 217
#define OBJECT_33 216
#define OBJECT_32 215
#define OBJECT_31 214
#define OBJECT_30 213
#define OBJECT_29 212
#define OBJECT_28 211
#define OBJECT_27 210
#define OBJECT_26 209
#define OBJECT_25 208
#define OBJECT_24 207
#define OBJECT_23 206
#define OBJECT_22 205
#define OBJECT_21 204
#define OBJECT_20 203
#define OBJECT_19 202
#define OBJECT_18 201
#define OBJECT_17 200
#define OBJECT_16 199
#define OBJECT_15 198
#define OBJECT_14 197
#define OBJECT_13 196
#define OBJECT_12 195
#define OBJECT_11 194
#define OBJECT_10 193
#define OBJECT_9 192
#define OBJECT_8 191
#define OBJECT_7 190
#define OBJECT_6 189
#define OBJECT_5 188
#define OBJECT_4 187
#define OBJECT_3 186
#define OBJECT_2 185
#define OBJECT_1 184
#define OBJECT_0 183
#define FREE_REFERENCE_6 167
#define FREE_REFERENCE_5 168
#define FREE_REFERENCE_4 169
#define FREE_REFERENCE_3 170
#define FREE_REFERENCE_2 171
#define FREE_REFERENCE_1 172
#define FREE_REFERENCE_0 173
#define GLOBAL_EXECUTE_CACHE_20 175
#define GLOBAL_EXECUTE_CACHE_12 177
#define GLOBAL_EXECUTE_CACHE_10 179
#define GLOBAL_EXECUTE_CACHE_6 181
#define FREE_REFERENCES_LABEL_0 166
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
thread_so_8763fd0d6a6d4da7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
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
      goto continuation_13;

    case 1:
      current_block = (Rpc - LABEL_9);
      goto label_110;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_12;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_24;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_14;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto continuation_25;

    case 6:
      current_block = (Rpc - LABEL_17);
      goto label_111;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto Z__make_thread_131;

    case 8:
      current_block = (Rpc - LABEL_19);
      goto label_112;

    case 9:
      current_block = (Rpc - LABEL_15);
      goto continuation_27;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto continuation_26;

    case 11:
      current_block = (Rpc - LABEL_18);
      goto continuation_17;

    case 12:
      current_block = (Rpc - LABEL_23);
      goto label_113;

    case 13:
      current_block = (Rpc - LABEL_21);
      goto continuation_28;

    case 14:
      current_block = (Rpc - LABEL_22);
      goto continuation_18;

    case 15:
      current_block = (Rpc - LABEL_27);
      goto label_114;

    case 16:
      current_block = (Rpc - LABEL_24);
      goto continuation_39;

    case 17:
      current_block = (Rpc - LABEL_30);
      goto label_115;

    case 18:
      current_block = (Rpc - LABEL_25);
      goto continuation_37;

    case 19:
      current_block = (Rpc - LABEL_26);
      goto continuation_19;

    case 20:
      current_block = (Rpc - LABEL_31);
      goto label_116;

    case 21:
      current_block = (Rpc - LABEL_33);
      goto label_117;

    case 22:
      current_block = (Rpc - LABEL_28);
      goto continuation_44;

    case 23:
      current_block = (Rpc - LABEL_29);
      goto continuation_40;

    case 24:
      current_block = (Rpc - LABEL_32);
      goto continuation_20;

    case 25:
      current_block = (Rpc - LABEL_38);
      goto label_118;

    case 26:
      current_block = (Rpc - LABEL_34);
      goto continuation_45;

    case 27:
      current_block = (Rpc - LABEL_41);
      goto label_119;

    case 28:
      current_block = (Rpc - LABEL_35);
      goto make_dentry_132;

    case 29:
      current_block = (Rpc - LABEL_37);
      goto continuation_21;

    case 30:
      current_block = (Rpc - LABEL_43);
      goto label_120;

    case 31:
      current_block = (Rpc - LABEL_39);
      goto continuation_47;

    case 32:
      current_block = (Rpc - LABEL_40);
      goto continuation_46;

    case 33:
      current_block = (Rpc - LABEL_42);
      goto continuation_16;

    case 34:
      current_block = (Rpc - LABEL_44);
      goto continuation_56;

    case 35:
      current_block = (Rpc - LABEL_48);
      goto label_121;

    case 36:
      current_block = (Rpc - LABEL_45);
      goto continuation_54;

    case 37:
      current_block = (Rpc - LABEL_46);
      goto continuation_61;

    case 38:
      current_block = (Rpc - LABEL_47);
      goto continuation_57;

    case 39:
      current_block = (Rpc - LABEL_49);
      goto continuation_62;

    case 40:
      current_block = (Rpc - LABEL_54);
      goto label_122;

    case 41:
      current_block = (Rpc - LABEL_50);
      goto make_tentry_133;

    case 42:
      current_block = (Rpc - LABEL_52);
      goto continuation_64;

    case 43:
      current_block = (Rpc - LABEL_53);
      goto continuation_63;

    case 44:
      current_block = (Rpc - LABEL_55);
      goto continuation_65;

    case 45:
      current_block = (Rpc - LABEL_56);
      goto continuation_71;

    case 46:
      current_block = (Rpc - LABEL_60);
      goto label_123;

    case 47:
      current_block = (Rpc - LABEL_57);
      goto continuation_70;

    case 48:
      current_block = (Rpc - LABEL_58);
      goto continuation_76;

    case 49:
      current_block = (Rpc - LABEL_59);
      goto continuation_72;

    case 50:
      current_block = (Rpc - LABEL_61);
      goto continuation_77;

    case 51:
      current_block = (Rpc - LABEL_66);
      goto label_124;

    case 52:
      current_block = (Rpc - LABEL_62);
      goto make_timer_record_134;

    case 53:
      current_block = (Rpc - LABEL_64);
      goto continuation_79;

    case 54:
      current_block = (Rpc - LABEL_65);
      goto continuation_78;

    case 55:
      current_block = (Rpc - LABEL_67);
      goto continuation_80;

    case 56:
      current_block = (Rpc - LABEL_68);
      goto continuation_84;

    case 57:
      current_block = (Rpc - LABEL_72);
      goto label_125;

    case 58:
      current_block = (Rpc - LABEL_69);
      goto continuation_83;

    case 59:
      current_block = (Rpc - LABEL_70);
      goto continuation_90;

    case 60:
      current_block = (Rpc - LABEL_71);
      goto continuation_85;

    case 61:
      current_block = (Rpc - LABEL_73);
      goto continuation_91;

    case 62:
      current_block = (Rpc - LABEL_78);
      goto label_126;

    case 63:
      current_block = (Rpc - LABEL_74);
      goto make_thread_mutex_135;

    case 64:
      current_block = (Rpc - LABEL_80);
      goto label_127;

    case 65:
      current_block = (Rpc - LABEL_76);
      goto continuation_93;

    case 66:
      current_block = (Rpc - LABEL_77);
      goto continuation_92;

    case 67:
      current_block = (Rpc - LABEL_79);
      goto continuation_87;

    case 68:
      current_block = (Rpc - LABEL_81);
      goto continuation_94;

    case 69:
      current_block = (Rpc - LABEL_82);
      goto continuation_99;

    case 70:
      current_block = (Rpc - LABEL_86);
      goto label_128;

    case 71:
      current_block = (Rpc - LABEL_83);
      goto continuation_98;

    case 72:
      current_block = (Rpc - LABEL_84);
      goto continuation_104;

    case 73:
      current_block = (Rpc - LABEL_85);
      goto continuation_100;

    case 74:
      current_block = (Rpc - LABEL_87);
      goto continuation_105;

    case 75:
      current_block = (Rpc - LABEL_92);
      goto label_129;

    case 76:
      current_block = (Rpc - LABEL_88);
      goto make_link_136;

    case 77:
      current_block = (Rpc - LABEL_90);
      goto continuation_107;

    case 78:
      current_block = (Rpc - LABEL_91);
      goto continuation_106;

    case 79:
      current_block = (Rpc - LABEL_93);
      goto label_138;

    case 80:
      current_block = (Rpc - LABEL_94);
      goto label_139;

    case 81:
      current_block = (Rpc - LABEL_95);
      goto expression_109;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_109)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_94])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_139)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_138)
  {
    static const short sections [] =
      {
	0,
	3,
	0,
	0,
	0,
	0,
	0,
	0,
	1,
	0,
	1,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	1,
	0,
	1,
	1,
	2,
	1,
	1,
	2,
	1,
	2,
	1,
	1,
	1,
	0,
	0,
	0,
	1,
	2,
	3,
	2,
	2,
	2,
	3,
	1,
	2,
	2,
	1,
	3,
	3,
	1,
	3,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	2,
	2,
	1,
	1,
	2,
	1,
	1,
	1,
	2,
	1,
	3,
	0,
	2,
	1,
	2,
	1,
	3,
	3,
	3,
	2,
	2,
	1,
	1,
	1,
	2,
	2,
	1,
	2,
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
	1,
	1,
	2,
	2,
	2,
	0,
	0,
	3,
	2,
	3,
	1,
	1,
	2,
	2,
	1,
	2,
	1,
	1,
	3,
	2,
	2,
	1,
	2,
	1,
	2,
	2,
	2,
	3,
	1,
	3,
	1,
	2,
	1,
	2,
	3,
	0,
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
	0,
	0,
	0,
	0,
	1,
	0,
	1,
	0,
	0,
	1,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 175)
      goto label_137;
    blocks = (current_block [OBJECT_71]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_93])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_137)
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
  (Wrd21.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd21.Obj);
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
  (Wrd33.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd37.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd41.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Wrd45.Obj) = (current_block [OBJECT_6]);
  (* (Rhp++)) = (Wrd45.Obj);
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
  (Wrd61.Obj) = (current_block [OBJECT_7]);
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd59.pObj) = (& (Rhp [-2]));
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd59.pObj)));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd62.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd63.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd63.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_163;
  Wrd11 = Wrd15;

DEFLABEL (label_162)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_161;
  Wrd11 = Wrd15;

DEFLABEL (label_160)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
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
  (Wrd37.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd8.Obj) = (current_block [OBJECT_23]);
  (Wrd9.Obj) = (current_block [OBJECT_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_24]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd21.Obj) = (MAKE_OBJECT (0, 3));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd17.pObj) = (& (Rhp [-4]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_159;
  Wrd11 = Wrd15;

DEFLABEL (label_158)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_29);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x707, 2);
  (* (Rhp++)) = (dispatch_base + TAG_36);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_157;
  Wrd11 = Wrd15;

DEFLABEL (label_156)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_40);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
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
  (Wrd37.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd12.Obj) = (current_block [OBJECT_35]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-3]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_155;
  Wrd11 = Wrd15;

DEFLABEL (label_154)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_47);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_51);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_50])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_153;
  Wrd11 = Wrd15;

DEFLABEL (label_152)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_53);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
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
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_57);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_151;
  Wrd11 = Wrd15;

DEFLABEL (label_150)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_59);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_63);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_62])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_149;
  Wrd11 = Wrd15;

DEFLABEL (label_148)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_65);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_1]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_52]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_69);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_147;
  Wrd11 = Wrd15;

DEFLABEL (label_146)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_71);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_75);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_74])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_73);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_145;
  Wrd11 = Wrd15;

DEFLABEL (label_144)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_77);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_93)
  INTERRUPT_CHECK (27, LABEL_76);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_81);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
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
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_83);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_82);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_143;
  Wrd11 = Wrd15;

DEFLABEL (label_142)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_85);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_89);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_88])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_84);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_87);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_141;
  Wrd11 = Wrd15;

DEFLABEL (label_140)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_106)
  INTERRUPT_CHECK (27, LABEL_91);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_107)
  INTERRUPT_CHECK (27, LABEL_90);
  (Wrd5.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_69]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (label_141)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_92])), (Wrd12.pObj));

DEFLABEL (label_129)
  (Wrd11.Obj) = Rvl;
  goto label_140;

DEFLABEL (label_143)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86])), (Wrd12.pObj));

DEFLABEL (label_128)
  (Wrd11.Obj) = Rvl;
  goto label_142;

DEFLABEL (label_145)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_78])), (Wrd12.pObj));

DEFLABEL (label_126)
  (Wrd11.Obj) = Rvl;
  goto label_144;

DEFLABEL (label_147)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_72])), (Wrd12.pObj));

DEFLABEL (label_125)
  (Wrd11.Obj) = Rvl;
  goto label_146;

DEFLABEL (label_149)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66])), (Wrd12.pObj));

DEFLABEL (label_124)
  (Wrd11.Obj) = Rvl;
  goto label_148;

DEFLABEL (label_151)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60])), (Wrd12.pObj));

DEFLABEL (label_123)
  (Wrd11.Obj) = Rvl;
  goto label_150;

DEFLABEL (label_153)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54])), (Wrd12.pObj));

DEFLABEL (label_122)
  (Wrd11.Obj) = Rvl;
  goto label_152;

DEFLABEL (label_155)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48])), (Wrd12.pObj));

DEFLABEL (label_121)
  (Wrd11.Obj) = Rvl;
  goto label_154;

DEFLABEL (label_157)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41])), (Wrd12.pObj));

DEFLABEL (label_119)
  (Wrd11.Obj) = Rvl;
  goto label_156;

DEFLABEL (label_159)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30])), (Wrd12.pObj));

DEFLABEL (label_115)
  (Wrd11.Obj) = Rvl;
  goto label_158;

DEFLABEL (label_161)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd12.pObj));

DEFLABEL (label_111)
  (Wrd11.Obj) = Rvl;
  goto label_160;

DEFLABEL (label_163)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd12.pObj));

DEFLABEL (label_110)
  (Wrd11.Obj) = Rvl;
  goto label_162;

DEFLABEL (Z__make_thread_131)
  CLOSURE_HEADER (LABEL_13);

DEFLABEL (Z__make_thread_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_177;
  Wrd9 = Wrd13;

DEFLABEL (label_176)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_20]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_175;
  Wrd9 = Wrd13;

DEFLABEL (label_174)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_20]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_22);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_173;
  Wrd9 = Wrd13;

DEFLABEL (label_172)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_20]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_26);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_171;
  Wrd5 = Wrd9;

DEFLABEL (label_170)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_169;
  Wrd15 = Wrd19;

DEFLABEL (label_168)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_20]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_32);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_167;
  Wrd9 = Wrd13;

DEFLABEL (label_166)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_20]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_37);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_165;
  Wrd9 = Wrd13;

DEFLABEL (label_164)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_20]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd6.Obj) = (* (Rsp++));
  (Wrd7.Obj) = (* (Rsp++));
  (Wrd8.Obj) = (* (Rsp++));
  (Wrd9.Obj) = (* (Rsp++));
  (Wrd10.Obj) = (* (Rsp++));
  (Wrd22.Obj) = (MAKE_OBJECT (0, 13));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd14.pObj) = (& (Rhp [-14]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd14.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_165)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_43])), (Wrd10.pObj));

DEFLABEL (label_120)
  (Wrd9.Obj) = Rvl;
  goto label_164;

DEFLABEL (label_167)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38])), (Wrd10.pObj));

DEFLABEL (label_118)
  (Wrd9.Obj) = Rvl;
  goto label_166;

DEFLABEL (label_169)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33])), (Wrd16.pObj));

DEFLABEL (label_117)
  (Wrd15.Obj) = Rvl;
  goto label_168;

DEFLABEL (label_171)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31])), (Wrd6.pObj));

DEFLABEL (label_116)
  (Wrd5.Obj) = Rvl;
  goto label_170;

DEFLABEL (label_173)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27])), (Wrd10.pObj));

DEFLABEL (label_114)
  (Wrd9.Obj) = Rvl;
  goto label_172;

DEFLABEL (label_175)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd10.pObj));

DEFLABEL (label_113)
  (Wrd9.Obj) = Rvl;
  goto label_174;

DEFLABEL (label_177)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd10.pObj));

DEFLABEL (label_112)
  (Wrd9.Obj) = Rvl;
  goto label_176;

DEFLABEL (make_dentry_132)
  CLOSURE_HEADER (LABEL_35);

DEFLABEL (make_dentry_42)
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

DEFLABEL (make_tentry_133)
  CLOSURE_HEADER (LABEL_50);

DEFLABEL (make_tentry_59)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd15.Obj) = (MAKE_OBJECT (0, 7));
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (Wrd20.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd7.pObj) = (& (Rhp [-8]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (make_timer_record_134)
  CLOSURE_HEADER (LABEL_62);

DEFLABEL (make_timer_record_74)
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

DEFLABEL (make_thread_mutex_135)
  CLOSURE_HEADER (LABEL_74);

DEFLABEL (make_thread_mutex_88)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_179;
  Wrd9 = Wrd13;

DEFLABEL (label_178)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_20]));

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_79);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd8.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_179)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80])), (Wrd10.pObj));

DEFLABEL (label_127)
  (Wrd9.Obj) = Rvl;
  goto label_178;

DEFLABEL (make_link_136)
  CLOSURE_HEADER (LABEL_88);

DEFLABEL (make_link_102)
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

static const struct liarc_code_S arr_decl_thread_so_8763fd0d6a6d4da7 [175] =
  {
    { "thread_so_code_1", 1, thread_so_code_1 },
    { "thread_so_code_2", 1, thread_so_code_2 },
    { "thread_so_code_3", 1, thread_so_code_3 },
    { "thread_so_code_4", 1, thread_so_code_4 },
    { "thread_so_code_5", 2, thread_so_code_5 },
    { "thread_so_code_6", 1, thread_so_code_6 },
    { "thread_so_code_7", 1, thread_so_code_7 },
    { "thread_so_code_8", 1, thread_so_code_8 },
    { "thread_so_code_9", 1, thread_so_code_9 },
    { "thread_so_code_10", 1, thread_so_code_10 },
    { "thread_so_code_11", 1, thread_so_code_11 },
    { "thread_so_code_12", 1, thread_so_code_12 },
    { "thread_so_code_13", 1, thread_so_code_13 },
    { "thread_so_code_14", 1, thread_so_code_14 },
    { "thread_so_code_15", 1, thread_so_code_15 },
    { "thread_so_code_16", 1, thread_so_code_16 },
    { "thread_so_code_17", 1, thread_so_code_17 },
    { "thread_so_code_18", 1, thread_so_code_18 },
    { "thread_so_code_19", 1, thread_so_code_19 },
    { "thread_so_code_20", 1, thread_so_code_20 },
    { "thread_so_code_21", 1, thread_so_code_21 },
    { "thread_so_code_22", 1, thread_so_code_22 },
    { "thread_so_code_23", 1, thread_so_code_23 },
    { "thread_so_code_24", 1, thread_so_code_24 },
    { "thread_so_code_25", 1, thread_so_code_25 },
    { "thread_so_code_26", 1, thread_so_code_26 },
    { "thread_so_code_27", 1, thread_so_code_27 },
    { "thread_so_code_28", 1, thread_so_code_28 },
    { "thread_so_code_29", 1, thread_so_code_29 },
    { "thread_so_code_30", 4, thread_so_code_30 },
    { "thread_so_code_31", 2, thread_so_code_31 },
    { "thread_so_code_32", 2, thread_so_code_32 },
    { "thread_so_code_33", 17, thread_so_code_33 },
    { "thread_so_code_34", 9, thread_so_code_34 },
    { "thread_so_code_35", 5, thread_so_code_35 },
    { "thread_so_code_36", 3, thread_so_code_36 },
    { "thread_so_code_37", 3, thread_so_code_37 },
    { "thread_so_code_38", 20, thread_so_code_38 },
    { "thread_so_code_39", 2, thread_so_code_39 },
    { "thread_so_code_40", 9, thread_so_code_40 },
    { "thread_so_code_41", 8, thread_so_code_41 },
    { "thread_so_code_42", 2, thread_so_code_42 },
    { "thread_so_code_43", 3, thread_so_code_43 },
    { "thread_so_code_44", 2, thread_so_code_44 },
    { "thread_so_code_45", 9, thread_so_code_45 },
    { "thread_so_code_46", 2, thread_so_code_46 },
    { "thread_so_code_47", 6, thread_so_code_47 },
    { "thread_so_code_48", 5, thread_so_code_48 },
    { "thread_so_code_49", 4, thread_so_code_49 },
    { "thread_so_code_50", 6, thread_so_code_50 },
    { "thread_so_code_51", 4, thread_so_code_51 },
    { "thread_so_code_52", 5, thread_so_code_52 },
    { "thread_so_code_53", 11, thread_so_code_53 },
    { "thread_so_code_54", 9, thread_so_code_54 },
    { "thread_so_code_55", 14, thread_so_code_55 },
    { "thread_so_code_56", 2, thread_so_code_56 },
    { "thread_so_code_57", 2, thread_so_code_57 },
    { "thread_so_code_58", 12, thread_so_code_58 },
    { "thread_so_code_59", 7, thread_so_code_59 },
    { "thread_so_code_60", 11, thread_so_code_60 },
    { "thread_so_code_61", 1, thread_so_code_61 },
    { "thread_so_code_62", 1, thread_so_code_62 },
    { "thread_so_code_63", 16, thread_so_code_63 },
    { "thread_so_code_64", 16, thread_so_code_64 },
    { "thread_so_code_65", 11, thread_so_code_65 },
    { "thread_so_code_66", 14, thread_so_code_66 },
    { "thread_so_code_67", 9, thread_so_code_67 },
    { "thread_so_code_68", 1, thread_so_code_68 },
    { "thread_so_code_69", 1, thread_so_code_69 },
    { "thread_so_code_70", 1, thread_so_code_70 },
    { "thread_so_code_71", 1, thread_so_code_71 },
    { "thread_so_code_72", 1, thread_so_code_72 },
    { "thread_so_code_73", 1, thread_so_code_73 },
    { "thread_so_code_74", 1, thread_so_code_74 },
    { "thread_so_code_75", 1, thread_so_code_75 },
    { "thread_so_code_76", 1, thread_so_code_76 },
    { "thread_so_code_77", 1, thread_so_code_77 },
    { "thread_so_code_78", 4, thread_so_code_78 },
    { "thread_so_code_79", 1, thread_so_code_79 },
    { "thread_so_code_80", 1, thread_so_code_80 },
    { "thread_so_code_81", 1, thread_so_code_81 },
    { "thread_so_code_82", 1, thread_so_code_82 },
    { "thread_so_code_83", 1, thread_so_code_83 },
    { "thread_so_code_84", 1, thread_so_code_84 },
    { "thread_so_code_85", 1, thread_so_code_85 },
    { "thread_so_code_86", 1, thread_so_code_86 },
    { "thread_so_code_87", 1, thread_so_code_87 },
    { "thread_so_code_88", 1, thread_so_code_88 },
    { "thread_so_code_89", 1, thread_so_code_89 },
    { "thread_so_code_90", 4, thread_so_code_90 },
    { "thread_so_code_91", 5, thread_so_code_91 },
    { "thread_so_code_92", 16, thread_so_code_92 },
    { "thread_so_code_93", 4, thread_so_code_93 },
    { "thread_so_code_94", 4, thread_so_code_94 },
    { "thread_so_code_95", 16, thread_so_code_95 },
    { "thread_so_code_96", 3, thread_so_code_96 },
    { "thread_so_code_97", 1, thread_so_code_97 },
    { "thread_so_code_98", 1, thread_so_code_98 },
    { "thread_so_code_99", 9, thread_so_code_99 },
    { "thread_so_code_100", 8, thread_so_code_100 },
    { "thread_so_code_101", 19, thread_so_code_101 },
    { "thread_so_code_102", 23, thread_so_code_102 },
    { "thread_so_code_103", 28, thread_so_code_103 },
    { "thread_so_code_104", 2, thread_so_code_104 },
    { "thread_so_code_105", 13, thread_so_code_105 },
    { "thread_so_code_106", 2, thread_so_code_106 },
    { "thread_so_code_107", 29, thread_so_code_107 },
    { "thread_so_code_108", 9, thread_so_code_108 },
    { "thread_so_code_109", 21, thread_so_code_109 },
    { "thread_so_code_110", 7, thread_so_code_110 },
    { "thread_so_code_111", 7, thread_so_code_111 },
    { "thread_so_code_112", 17, thread_so_code_112 },
    { "thread_so_code_113", 6, thread_so_code_113 },
    { "thread_so_code_114", 6, thread_so_code_114 },
    { "thread_so_code_115", 16, thread_so_code_115 },
    { "thread_so_code_116", 4, thread_so_code_116 },
    { "thread_so_code_117", 4, thread_so_code_117 },
    { "thread_so_code_118", 10, thread_so_code_118 },
    { "thread_so_code_119", 13, thread_so_code_119 },
    { "thread_so_code_120", 1, thread_so_code_120 },
    { "thread_so_code_121", 1, thread_so_code_121 },
    { "thread_so_code_122", 1, thread_so_code_122 },
    { "thread_so_code_123", 1, thread_so_code_123 },
    { "thread_so_code_124", 1, thread_so_code_124 },
    { "thread_so_code_125", 1, thread_so_code_125 },
    { "thread_so_code_126", 1, thread_so_code_126 },
    { "thread_so_code_127", 4, thread_so_code_127 },
    { "thread_so_code_128", 18, thread_so_code_128 },
    { "thread_so_code_129", 6, thread_so_code_129 },
    { "thread_so_code_130", 13, thread_so_code_130 },
    { "thread_so_code_131", 13, thread_so_code_131 },
    { "thread_so_code_132", 2, thread_so_code_132 },
    { "thread_so_code_133", 13, thread_so_code_133 },
    { "thread_so_code_134", 7, thread_so_code_134 },
    { "thread_so_code_135", 2, thread_so_code_135 },
    { "thread_so_code_136", 7, thread_so_code_136 },
    { "thread_so_code_137", 5, thread_so_code_137 },
    { "thread_so_code_138", 5, thread_so_code_138 },
    { "thread_so_code_139", 3, thread_so_code_139 },
    { "thread_so_code_140", 20, thread_so_code_140 },
    { "thread_so_code_141", 5, thread_so_code_141 },
    { "thread_so_code_142", 1, thread_so_code_142 },
    { "thread_so_code_143", 1, thread_so_code_143 },
    { "thread_so_code_144", 1, thread_so_code_144 },
    { "thread_so_code_145", 1, thread_so_code_145 },
    { "thread_so_code_146", 4, thread_so_code_146 },
    { "thread_so_code_147", 2, thread_so_code_147 },
    { "thread_so_code_148", 3, thread_so_code_148 },
    { "thread_so_code_149", 11, thread_so_code_149 },
    { "thread_so_code_150", 8, thread_so_code_150 },
    { "thread_so_code_151", 10, thread_so_code_151 },
    { "thread_so_code_152", 5, thread_so_code_152 },
    { "thread_so_code_153", 5, thread_so_code_153 },
    { "thread_so_code_154", 11, thread_so_code_154 },
    { "thread_so_code_155", 8, thread_so_code_155 },
    { "thread_so_code_156", 8, thread_so_code_156 },
    { "thread_so_code_157", 2, thread_so_code_157 },
    { "thread_so_code_158", 3, thread_so_code_158 },
    { "thread_so_code_159", 1, thread_so_code_159 },
    { "thread_so_code_160", 1, thread_so_code_160 },
    { "thread_so_code_161", 1, thread_so_code_161 },
    { "thread_so_code_162", 1, thread_so_code_162 },
    { "thread_so_code_163", 1, thread_so_code_163 },
    { "thread_so_code_164", 1, thread_so_code_164 },
    { "thread_so_code_165", 4, thread_so_code_165 },
    { "thread_so_code_166", 4, thread_so_code_166 },
    { "thread_so_code_167", 2, thread_so_code_167 },
    { "thread_so_code_168", 4, thread_so_code_168 },
    { "thread_so_code_169", 5, thread_so_code_169 },
    { "thread_so_code_170", 2, thread_so_code_170 },
    { "thread_so_code_171", 8, thread_so_code_171 },
    { "thread_so_code_172", 3, thread_so_code_172 },
    { "thread_so_code_173", 2, thread_so_code_173 },
    { "thread_so_code_174", 2, thread_so_code_174 },
    { "thread_so_code_175", 67, thread_so_code_175 }
  };

int
decl_thread_so_8763fd0d6a6d4da7 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_thread_so_8763fd0d6a6d4da7);
  return (0);
}

DECLARE_COMPILED_CODE ("thread.so", 82, decl_thread_so_8763fd0d6a6d4da7, thread_so_8763fd0d6a6d4da7)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_thread_so_data_8763fd0d6a6d4da7 [21363] =
  "\xfd\x02\xa2\x02\xda\x2d\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9"
  "\x22\x29\x21\x9d\x2b\xba\x1d\xb0\x82\x88\x28\x0d\xbb\x23\x22\x29"
  "\x21\x9f\x2b\xbc\x1d\xb0\x83\x88\x08\x22\x29\x21\x9d\x2b\xbd\x1d"
  "\xb0\x84\x88\x08\x22\x29\x21\x9d\x2b\xbe\x1d\xb0\x85\x88\x0d\xbf"
  "\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x08\x22\x29"
  "\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x23\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\xc2\x1c\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x83"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x86\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x1d\x81\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1d\x82\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1d\x83\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d"
  "\x84\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x86\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80\xc1\x1c\x0e\x1c"
  "\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x0c\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0d\x1c\x1b\x81\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x06\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x25\x0d\x1c\x0d\x0d\x1c\x0d\x24\x28\x0d"
  "\x1c\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x1b\x83\x0d\x1c\x1b\x24\x28"
  "\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xc1\x1c\x0d\x1c\x24\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81"
  "\x1b\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x07\x0c\x1b\x25\x0d\x1c\x0d\x1c"
  "\x1b\x0d\x1c\x24\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\x1b\x25\x0d\x1c\x1b\x24"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x08\x1b\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0d\x24\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83\x0d\x1c\x1b\x81\x1b"
  "\x1b\x0d\x1c\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x82\x1b\x81\xb1\x1b\x1b\x25\x1b"
  "\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x82\x1b\x81\x1b\x25\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x06\x1b\x25\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x83\x1b"
  "\x02\x28\x1b\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x84"
  "\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x83\x1b\x1b\x84\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b\x83\x1b\x1b\x24\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x85"
  "\x1b\x1b\x81\x1b\x0c\x0d\x1b\x0d\x1c\x1b\x1b\x24\x28\x1b\x28\x1b"
  "\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1d\x81\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1d\x81\xb1\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x1b\x83\x1b\x06\x1b\x25"
  "\x1b\x1b\x24\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\xb1\x07\x1b\x1b\x24\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\xb9\x1d\xb0\x02\x88\x1b\x83\x1d\x1b\x82\x1b\x1b"
  "\x25\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x02\x02\x1b\x85\x1b\x84\x07\x1b\x1b\xb7"
  "\x24\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x02\x1b\x86\x1b\x02\x1b\x0c\x1b\x0d\x1c\x1b\x1b\xb7\x0d"
  "\x1c\x24\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x1b\x1b\x1b\x1b\x1b"
  "\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\xc1\x1c\xc1\x1c\x07\x1b\x86"
  "\x1b\x02\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b"
  "\x1d\x08\x86\x1b\x07\x1b\x02\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x86\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x83\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x84\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x85\x22\x29\x21\x9f\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1d\x86\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\x1b\x80\x1b\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x85\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x86\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1d\x81\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x82\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x83\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x85\x22\x29\x21\x9f\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1d\x86\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\x1b\x80\x1b\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x06\x0d\x1c\x0d\x1c\x25\x0d\x24"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\x1b\x83\x08\x1b\x1b\x1b\x1b\x1b\x24\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x1b"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\x0d\x1c\x98\x0d\x1c\x98\x1b\x82\x80\xc2\x1c\x81\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x1b\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x1b\x07\x0d\x1b"
  "\x1b\x24\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x82\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x1c\x07\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0d\x1c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1b\x1b\x24\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0c\x0d\x1c\x1b"
  "\x24\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x81\x1b\x86\x85\x1b\x1b\x82\x1b\x0d\x1c\x1b\x25"
  "\x1b\x1b\x1b\x24\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x85\x82"
  "\x83\x86\x1b\x81\x1b\x25\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83\x84\x1b\x82\x1b\x86\x85\x1b"
  "\x81\x1b\x25\x1b\x1b\x24\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x1b\x81\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1b\x07\x84\x82\x86\x1b\x83\x08\x1b\x24\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x0c\x1b\x0d\x1c\x0d\x08\x8a\x28\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c"
  "\x08\x89\x1b\x1b\x08\x89\x84\x83\x81\x86\x1b\x82\x1b\x1b\x07\x0c"
  "\x0d\x1b\x1b\x1b\x1b\x1b\x80\x08\x1b\x24\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83\x1b\x84\x81\x85\x1d"
  "\x1b\x86\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x84\x83"
  "\x82\x1b\x81\x85\x1b\x86\x1b\x25\x1b\x24\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x07\x1b\x84\x1b\x1b\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x84"
  "\x07\x1b\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3"
  "\x1b\x07\x1b\x84\x1b\x1b\x1b\x0d\x1c\x24\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x84\x1b\x1b\x1b\x24\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b"
  "\x84\x1b\x1b\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\x1b\x1b\x81\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\x1b\x81\x1b\x84\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x1d"
  "\x80\x1b\x85\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1b\x84\x1b\x85\x07\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x84\x1b\x1b\x1b\x24\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x84"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x82\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x83\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1d\x84\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\x1b\x80\x1b\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x1b\x81\x1b\x1b\x25\x1b"
  "\x1b\x24\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x07\x28\x1b\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x84\x1d\x1b\x82\x83\x1b"
  "\x81\x1b\x25\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x84\x1b"
  "\x0c\x0d\x1c\x1b\x25\x1b\x1b\x24\x28\x0d\x1c\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x85\x1b\x07\x1b\x84\x1b\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x1b\x84\x1d\x1b\x25\x1b\x24\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1c\x1b\x1b\x25\x1b\x24\x28\x0d\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x24"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x24\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x80\xc1\x81\x1b\x82"
  "\x1b\x25\x1b\x1b\x1b\x1b\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xc1\x06\xc0\x1d\x1b\x25\x1b\x1b\x24\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\xb3\x23\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1d\x82\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80"
  "\x1b\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\x0c\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x1b\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x1b\x82\x1b\x1b\x0d\x1c\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\x81\x1d\x82\x1b\x1b\x02\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x0c\x1b\x1b\x0d\x1c\x1b"
  "\x24\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x1b\x02\x28\x1b\x28"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x1b\x81\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x1b\x02\x1b\x82\x1b\x1b\x0d\x1c\x1b\x24\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x1d\x1b\x82\x1b\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b"
  "\x1d\x08\x81\x82\x1b\x07\x1b\x02\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x1b\x02\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x1b\x02\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1d\x81\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x82\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x83\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80\x1b\x0e\x1c\x24\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x1b\x81"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\x1b\x82\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x1b\x82\x1b\x81\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83\x81\x1b\x1b\x82"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x82\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x1b\x81\x83\x1b\x82\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x81\x80\x1b\x82\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x83\x1b\x82\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1d\x83\x1b\x82\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x0c\x1d\x0c\x0d\x0d\x1c\x0c\x0d\xb8\x1b\x0d\x1c\x0d"
  "\x1c\x08\x8b\x0d\x1b\x1b\x1b\x08\x8a\x0c\x0d\x08\x0d\x1c\x0c\x1b"
  "\x0d\x1c\x0c\x0c\xb0\x1b\x1b\x1b\x08\x8b\x0d\x1b\x1b\x1b\x08\x8a"
  "\x0c\xb0\x0d\xb0\x08\x88\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x1b\x0d\x1c\x1b\x0d\x1c\x1b\x25\x0d\x1b\x0d"
  "\x1b\x1b\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x17\x1c\x88\x1b\x1b\x1b\x2a\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e"
  "\x1e\x1e\x1e\x1e\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d"
  "\xb3\x0d\x17\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x9d\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9d\x0d\x1c\x0c\x0d\x1c\x0d\x1c\x0d"
  "\x08\x8a\x1b\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b"
  "\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0d\x0d\x0d\x0d"
  "\x9a\x1b\x2a\x1b\x2a\x1b\x2a\x9a\x0d\x1c\x0c\x0d\x0d\x08\x89\x1b"
  "\x2a\x1b\x1b\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x0d\x1b\x1b\x0d\x1b"
  "\x1b\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x17\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x9e\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9e\x0d\x1c\x0c\x0d\xb0\x0d\x1c"
  "\x1b\x08\x8b\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x0d\x0d\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b"
  "\x1b\x1b\x1b\x1b\x17\x1e\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x17\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0d\x1c\x0d\x99\x1b\x2a\x1b\x0c"
  "\x0d\xb0\x1b\x0d\x1b\x1b\x08\x8d\x81\x02\x1b\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x02\x0d\x1c\x1b\xb7"
  "\x9a\x1b\xb7\x02\x0c\x0d\x0d\x0d\x0d\x1b\x1b\x08\x8d\x86\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x1b\x0d\x0d\x0d\x0d\x1b\x0d\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x0d\x1b\x1b"
  "\x0d\x0d\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x1b\x17\x1e\x1e\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb1"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1e\x1e\x1e\x1e\x1e\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x17\x85\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x17\xc3\x0d\x1c\x0c\x0d\x1b\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x08\x14\xb2\x2a\xb4\x2a\xb5\x2a\xb6"
  "\x2a\x1b\x2a\x1b\x2a\x08\x1b\x2a\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x26\x1b\x1b\xb7\x1b\x1b\x1b\x1b\x24\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02"
  "\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74"
  "\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f"
  "\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63"
  "\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x74\x68\x72\x65\x61"
  "\x64\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61"
  "\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x08\x72\x75\x6e\x6e"
  "\x69\x6e\x67\x53\x04\x82\x02\x03\x02\x02\x0a\x6d\x61\x6b\x65\x2d"
  "\x72\x69\x6e\x67\x02\x54\x04\x82\x02\x03\x02\x55\x04\x82\x02\x03"
  "\x02\x56\x04\x82\x02\x03\x02\x15\x6e\x6f\x2d\x65\x78\x69\x74\x2d"
  "\x76\x61\x6c\x75\x65\x2d\x6d\x61\x72\x6b\x65\x72\x02\x58\x06\x81"
  "\x81\x02\x57\x04\x82\x02\x05\x0a\x09\x02\x59\x04\x82\x02\x03\x0a"
  "\x02\x08\x02\x0e\x6d\x61\x6b\x65\x2d\x31\x64\x2d\x74\x61\x62\x6c"
  "\x65\x02\x5a\x04\x82\x02\x03\x0b\x02\x09\x0c\x25\x72\x65\x63\x6f"
  "\x72\x64\x2d\x72\x65\x66\x0c\x5b\x04\x83\x04\x03\x0d\x02\x0a\x0c"
  "\x5c\x04\x83\x04\x03\x0e\x02\x0b\x0c\x5d\x04\x83\x04\x03\x0f\x02"
  "\x0c\x0c\x5e\x04\x83\x04\x03\x10\x02\x0d\x0c\x5f\x04\x83\x04\x03"
  "\x11\x02\x0e\x0c\x60\x04\x83\x04\x03\x12\x02\x0f\x0c\x08\x61\x04"
  "\x83\x04\x03\x13\x02\x10\x0c\x09\x62\x04\x83\x04\x03\x14\x02\x11"
  "\x0c\x0a\x63\x04\x83\x04\x03\x15\x02\x12\x0c\x0b\x64\x04\x83\x04"
  "\x03\x16\x02\x13\x0c\x0c\x65\x04\x83\x04\x03\x17\x02\x14\x0c\x0d"
  "\x66\x04\x83\x04\x03\x18\x02\x15\x0d\x25\x72\x65\x63\x6f\x72\x64"
  "\x2d\x73\x65\x74\x21\x19\x02\x67\x04\x84\x06\x03\x1a\x02\x16\x19"
  "\x02\x68\x04\x84\x06\x03\x1b\x02\x17\x19\x02\x69\x04\x84\x06\x03"
  "\x1c\x02\x18\x19\x02\x6a\x04\x84\x06\x03\x1d\x02\x19\x19\x02\x6b"
  "\x04\x84\x06\x03\x1e\x02\x1a\x19\x02\x08\x6c\x04\x84\x06\x03\x1f"
  "\x02\x1b\x19\x02\x09\x6d\x04\x84\x06\x03\x20\x02\x1c\x19\x02\x0a"
  "\x6e\x04\x84\x06\x03\x21\x02\x1d\x19\x02\x0b\x6f\x04\x84\x06\x03"
  "\x22\x02\x1e\x19\x02\x0c\x70\x04\x84\x06\x03\x23\x02\x1f\x0c\x0f"
  "\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68\x24\x07"
  "\x2e\x74\x61\x67\x2e\x31\x25\x02\x74\x0a\x81\x85\x02\x73\x08\x81"
  "\x83\x02\x72\x06\x81\x83\x02\x71\x04\x83\x04\x09\x12\x26\x02\x20"
  "\x02\x07\x74\x68\x72\x65\x61\x64\x27\x03\x08\x74\x68\x72\x65\x61"
  "\x64\x3f\x28\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67"
  "\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x29\x03"
  "\x76\x06\x81\x85\x02\x75\x04\x84\x06\x05\x0f\x2a\x02\x21\x05\x64"
  "\x65\x61\x64\x2b\x0c\x78\x06\x81\x83\x02\x77\x04\x83\x04\x05\x0c"
  "\x2c\x02\x22\x65\x12\x74\x68\x72\x65\x61\x64\x2d\x70\x6f\x70\x75"
  "\x6c\x61\x74\x69\x6f\x6e\x2d\x15\x66\x69\x72\x73\x74\x2d\x72\x75"
  "\x6e\x6e\x69\x6e\x67\x2d\x74\x68\x72\x65\x61\x64\x2e\x14\x6c\x61"
  "\x73\x74\x2d\x72\x75\x6e\x6e\x69\x6e\x67\x2d\x74\x68\x72\x65\x61"
  "\x64\x2f\x17\x6e\x65\x78\x74\x2d\x73\x63\x68\x65\x64\x75\x6c\x65"
  "\x64\x2d\x74\x69\x6d\x65\x6f\x75\x74\x30\x0e\x74\x69\x6d\x65\x72"
  "\x2d\x72\x65\x63\x6f\x72\x64\x73\x31\x0f\x74\x69\x6d\x65\x72\x2d"
  "\x69\x6e\x74\x65\x72\x76\x61\x6c\x32\x07\x17\x69\x6e\x69\x74\x69"
  "\x61\x6c\x69\x7a\x65\x2d\x69\x6f\x2d\x62\x6c\x6f\x63\x6b\x69\x6e"
  "\x67\x33\x14\x65\x76\x65\x6e\x74\x3a\x61\x66\x74\x65\x72\x2d\x72"
  "\x65\x73\x74\x6f\x72\x65\x12\x73\x74\x6f\x70\x2d\x74\x68\x72\x65"
  "\x61\x64\x2d\x74\x69\x6d\x65\x72\x34\x12\x65\x76\x65\x6e\x74\x3a"
  "\x62\x65\x66\x6f\x72\x65\x2d\x65\x78\x69\x74\x05\x02\x1d\x69\x6e"
  "\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x65\x72\x72\x6f\x72\x2d\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x73\x21\x35\x02\x10\x6d\x61\x6b"
  "\x65\x2d\x70\x6f\x70\x75\x6c\x61\x74\x69\x6f\x6e\x02\x33\x04\x14"
  "\x61\x64\x64\x2d\x65\x76\x65\x6e\x74\x2d\x72\x65\x63\x65\x69\x76"
  "\x65\x72\x21\x03\x0c\x6d\x61\x6b\x65\x2d\x74\x68\x72\x65\x61\x64"
  "\x36\x03\x0e\x64\x65\x74\x61\x63\x68\x2d\x74\x68\x72\x65\x61\x64"
  "\x37\x07\x89\x01\x24\x81\x83\x02\x88\x01\x22\x81\x83\x02\x87\x01"
  "\x20\x81\x81\x02\x86\x01\x1e\x81\x81\x02\x85\x01\x1c\x81\x81\x02"
  "\x84\x01\x1a\x81\x85\x02\x83\x01\x18\x81\x83\x02\x82\x01\x16\x81"
  "\x81\x02\x81\x01\x14\x81\x81\x02\x80\x01\x12\x81\x81\x02\x7f\x10"
  "\x81\x81\x02\x7e\x0e\x81\x81\x02\x7d\x0c\x81\x81\x02\x7c\x0a\x81"
  "\x81\x02\x7b\x08\x81\x81\x02\x7a\x06\x81\x81\x02\x79\x04\x82\x02"
  "\x23\x41\x38\x02\x23\x0a\x19\x12\x73\x74\x61\x74\x65\x2d\x73\x70"
  "\x61\x63\x65\x3a\x6c\x6f\x63\x61\x6c\x39\x2d\x03\x02\x0d\x25\x6d"
  "\x61\x6b\x65\x2d\x74\x68\x72\x65\x61\x64\x3a\x03\x14\x63\x75\x72"
  "\x72\x65\x6e\x74\x2d\x73\x74\x61\x74\x65\x2d\x70\x6f\x69\x6e\x74"
  "\x04\x1a\x61\x64\x64\x2d\x74\x6f\x2d\x70\x6f\x70\x75\x6c\x61\x74"
  "\x69\x6f\x6e\x21\x2f\x75\x6e\x73\x61\x66\x65\x03\x0f\x74\x68\x72"
  "\x65\x61\x64\x2d\x72\x75\x6e\x6e\x69\x6e\x67\x3b\x05\x92\x01\x14"
  "\x81\x85\x02\x91\x01\x12\x81\x85\x02\x90\x01\x10\x81\x89\x02\x8f"
  "\x01\x0e\x81\x85\x02\x8e\x01\x0c\x81\x85\x02\x8d\x01\x0a\x81\x87"
  "\x02\x8c\x01\x08\x81\x85\x02\x8b\x01\x06\x81\x83\x02\x8a\x01\x04"
  "\x83\x04\x13\x25\x3c\x02\x24\x17\x73\x65\x74\x2d\x69\x6e\x74\x65"
  "\x72\x72\x75\x70\x74\x2d\x65\x6e\x61\x62\x6c\x65\x73\x21\x3d\x15"
  "\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x6d\x61\x73\x6b\x2f\x67"
  "\x63\x2d\x6f\x6b\x3e\x02\x97\x01\x0c\x81\x87\x02\x96\x01\x0a\x81"
  "\x85\x02\x95\x01\x08\x81\x83\x02\x94\x01\x06\x81\x85\x02\x93\x01"
  "\x04\x83\x04\x0b\x11\x3f\x02\x25\x2d\x02\x04\x14\x6d\x61\x70\x2d"
  "\x6f\x76\x65\x72\x2d\x70\x6f\x70\x75\x6c\x61\x74\x69\x6f\x6e\x02"
  "\x9a\x01\x08\x83\x04\x99\x01\x06\x81\x83\x02\x98\x01\x04\x82\x02"
  "\x07\x0f\x40\x02\x26\x0c\x27\x17\x74\x68\x72\x65\x61\x64\x2d\x65"
  "\x78\x65\x63\x75\x74\x69\x6f\x6e\x2d\x73\x74\x61\x74\x65\x41\x03"
  "\x28\x05\x29\x03\x9d\x01\x08\x81\x83\x02\x9c\x01\x06\x81\x83\x02"
  "\x9b\x01\x04\x83\x04\x07\x13\x42\x02\x27\x3d\x02\x13\x63\x6f\x6e"
  "\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x20\x6f\x72\x20\x23\x66\x39"
  "\x02\x0e\x63\x72\x65\x61\x74\x65\x2d\x74\x68\x72\x65\x61\x64\x43"
  "\x1a\x72\x6f\x6f\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69"
  "\x6f\x6e\x2d\x64\x65\x66\x61\x75\x6c\x74\x44\x39\x13\x69\x6e\x74"
  "\x65\x72\x72\x75\x70\x74\x2d\x6d\x61\x73\x6b\x2f\x61\x6c\x6c\x39"
  "\x05\x05\x29\x03\x1f\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x63"
  "\x75\x72\x72\x65\x6e\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74"
  "\x69\x6f\x6e\x45\x03\x0e\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69"
  "\x6f\x6e\x3f\x46\x05\x15\x25\x77\x69\x74\x68\x69\x6e\x2d\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x47\x02\x11\x6d\x61\x6b"
  "\x65\x2d\x73\x74\x61\x74\x65\x2d\x73\x70\x61\x63\x65\x05\x13\x73"
  "\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e"
  "\x64\x48\x03\x36\x03\x14\x65\x78\x69\x74\x2d\x63\x75\x72\x72\x65"
  "\x6e\x74\x2d\x74\x68\x72\x65\x61\x64\x49\x09\xb1\x01\x2a\x81\x83"
  "\x02\xb0\x01\x28\x81\x83\x02\xaf\x01\x26\x81\x85\x02\xae\x01\x24"
  "\x81\x83\x02\xad\x01\x22\x81\x85\x02\xac\x01\x20\x81\x85\x02\xab"
  "\x01\x1e\x81\x83\x02\xaa\x01\x1c\x81\x83\x02\xa9\x01\x1a\x81\x85"
  "\x02\xa8\x01\x18\x81\x83\x02\xa7\x01\x16\x81\x83\x02\xa6\x01\x14"
  "\x81\x83\x02\xa5\x01\x12\x81\x83\x02\xa4\x01\x10\x81\x83\x02\xa3"
  "\x01\x0e\x81\x87\x02\xa2\x01\x0c\x81\x85\x02\xa1\x01\x0a\x84\x06"
  "\xa0\x01\x08\x81\x87\x02\x9f\x01\x06\x81\x85\x02\x9e\x01\x04\x81"
  "\x85\x02\x29\x48\x4a\x02\x28\x44\x02\xb3\x01\x06\x81\x81\x02\xb2"
  "\x01\x04\x82\x02\x05\x0a\x4b\x02\x29\x02\x0d\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x44\x02\x20\x77\x69\x74\x68\x2d\x63"
  "\x72\x65\x61\x74\x65\x2d\x74\x68\x72\x65\x61\x64\x2d\x63\x6f\x6e"
  "\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x4c\x44\x03\x03\x46\x05\x29"
  "\x05\x48\x04\xbc\x01\x14\x81\x83\x02\xbb\x01\x12\x81\x85\x02\xba"
  "\x01\x10\x81\x83\x02\xb9\x01\x0e\x81\x83\x02\xb8\x01\x0c\x81\x83"
  "\x02\xb7\x01\x0a\x81\x87\x02\xb6\x01\x08\x81\x85\x02\xb5\x01\x06"
  "\x81\x85\x02\xb4\x01\x04\x84\x06\x13\x24\x48\x02\x2a\x0f\x62\x6f"
  "\x75\x6e\x64\x2d\x72\x65\x73\x74\x61\x72\x74\x73\x2e\x21\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x6e\x6f\x2d"
  "\x63\x75\x72\x72\x65\x6e\x74\x2d\x74\x68\x72\x65\x61\x64\x46\x03"
  "\x02\x0f\x63\x6f\x6e\x73\x6f\x6c\x65\x2d\x74\x68\x72\x65\x61\x64"
  "\x4d\x02\x11\x72\x75\x6e\x2d\x66\x69\x72\x73\x74\x2d\x74\x68\x72"
  "\x65\x61\x64\x4e\x03\x45\x06\x0f\x6d\x61\x6b\x65\x2d\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x04\x14\x73\x69\x67\x6e\x61\x6c\x2d\x74"
  "\x68\x72\x65\x61\x64\x2d\x65\x76\x65\x6e\x74\x4f\x03\x06\x65\x72"
  "\x72\x6f\x72\x50\x07\xc4\x01\x12\x81\x83\x02\xc3\x01\x10\x81\x85"
  "\x02\xc2\x01\x0e\x81\x8d\x02\xc1\x01\x0c\x81\x85\x02\xc0\x01\x0a"
  "\x81\x83\x02\xbf\x01\x08\x81\x83\x02\xbe\x01\x06\x81\x81\x02\xbd"
  "\x01\x04\x82\x02\x11\x26\x51\x02\x2b\x02\x2e\x02\x02\x4e\x02\xc6"
  "\x01\x06\x81\x85\x02\xc5\x01\x04\x84\x06\x05\x0e\x52\x02\x2c\x11"
  "\x63\x6f\x6e\x73\x6f\x6c\x65\x2d\x69\x2f\x6f\x2d\x70\x6f\x72\x74"
  "\x02\x03\x12\x70\x6f\x72\x74\x2f\x74\x68\x72\x65\x61\x64\x2d\x6d"
  "\x75\x74\x65\x78\x03\x13\x74\x68\x72\x65\x61\x64\x2d\x6d\x75\x74"
  "\x65\x78\x2d\x6f\x77\x6e\x65\x72\x53\x03\xc9\x01\x08\x81\x81\x02"
  "\xc8\x01\x06\x81\x83\x02\xc7\x01\x04\x82\x02\x07\x11\x54\x02\x2d"
  "\x0c\x02\x0f\x63\x75\x72\x72\x65\x6e\x74\x2d\x74\x68\x72\x65\x61"
  "\x64\x55\x02\xcb\x01\x06\x81\x83\x02\xca\x01\x04\x82\x02\x05\x0d"
  "\x56\x02\x2e\x08\x77\x61\x69\x74\x69\x6e\x67\x57\x0c\x3d\x27\x14"
  "\x74\x68\x72\x65\x61\x64\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74"
  "\x69\x6f\x6e\x58\x3e\x02\x03\x28\x05\x29\x03\xd4\x01\x14\x81\x87"
  "\x02\xd3\x01\x12\x81\x87\x02\xd2\x01\x10\x81\x87\x02\xd1\x01\x0e"
  "\x81\x83\x02\xd0\x01\x0c\x81\x85\x02\xcf\x01\x0a\x81\x85\x02\xce"
  "\x01\x08\x81\x83\x02\xcd\x01\x06\x81\x83\x02\xcc\x01\x04\x83\x04"
  "\x13\x24\x59\x02\x2f\x03\x10\x25\x74\x68\x72\x65\x61\x64\x2d\x72"
  "\x75\x6e\x6e\x69\x6e\x67\x5a\x02\x1b\x25\x6d\x61\x79\x62\x65\x2d"
  "\x74\x6f\x67\x67\x6c\x65\x2d\x74\x68\x72\x65\x61\x64\x2d\x74\x69"
  "\x6d\x65\x72\x5b\x03\xd6\x01\x06\x81\x83\x02\xd5\x01\x04\x83\x04"
  "\x05\x0d\x5c\x02\x30\x02\x19\x2e\x2f\x03\x2f\x02\xdc\x01\x0e\x81"
  "\x83\x02\xdb\x01\x0c\x81\x83\x02\xda\x01\x0a\x81\x85\x02\xd9\x01"
  "\x08\x81\x83\x02\xd8\x01\x06\x83\x04\xd7\x01\x04\x81\x83\x02\x0d"
  "\x1a\x5d\x02\x31\x0c\x19\x2e\x02\x02\x4e\x02\xe1\x01\x0c\x81\x87"
  "\x02\xe0\x01\x0a\x81\x87\x02\xdf\x01\x08\x81\x85\x02\xde\x01\x06"
  "\x81\x85\x02\xdd\x01\x04\x84\x06\x0b\x17\x5e\x02\x32\x2f\x02\x2e"
  "\x02\x02\x0c\x77\x61\x69\x74\x2d\x66\x6f\x72\x2d\x69\x6f\x5f\x03"
  "\x0b\x72\x75\x6e\x2d\x74\x68\x72\x65\x61\x64\x60\x03\xe5\x01\x0a"
  "\x81\x81\x02\xe4\x01\x08\x81\x81\x02\xe3\x01\x06\x81\x81\x02\xe2"
  "\x01\x04\x82\x02\x09\x16\x61\x02\x33\x19\x0c\x0b\x05\x47\x03\x18"
  "\x65\x6e\x74\x65\x72\x2d\x66\x6c\x6f\x61\x74\x2d\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x03\x17\x25\x72\x65\x73\x75\x6d\x65"
  "\x2d\x63\x75\x72\x72\x65\x6e\x74\x2d\x74\x68\x72\x65\x61\x64\x47"
  "\x04\xeb\x01\x0e\x81\x83\x02\xea\x01\x0c\x81\x83\x02\xe9\x01\x0a"
  "\x81\x87\x02\xe8\x01\x08\x81\x85\x02\xe7\x01\x06\x81\x83\x02\xe6"
  "\x01\x04\x83\x04\x0d\x1c\x62\x02\x34\x0c\x19\x03\x15\x68\x61\x6e"
  "\x64\x6c\x65\x2d\x74\x68\x72\x65\x61\x64\x2d\x65\x76\x65\x6e\x74"
  "\x73\x63\x02\x5b\x03\xef\x01\x0a\x81\x83\x02\xee\x01\x08\x83\x04"
  "\xed\x01\x06\x81\x83\x02\xec\x01\x04\x81\x83\x02\x09\x14\x64\x02"
  "\x35\x3d\x3e\x02\x02\x18\x25\x73\x75\x73\x70\x65\x6e\x64\x2d\x63"
  "\x75\x72\x72\x65\x6e\x74\x2d\x74\x68\x72\x65\x61\x64\x65\x02\xf4"
  "\x01\x0c\x81\x85\x02\xf3\x01\x0a\x81\x83\x02\xf2\x01\x08\x81\x81"
  "\x02\xf1\x01\x06\x81\x83\x02\xf0\x01\x04\x82\x02\x0b\x14\x66\x02"
  "\x36\x57\x19\x0c\x04\x19\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d"
  "\x63\x75\x72\x72\x65\x6e\x74\x2d\x74\x68\x72\x65\x61\x64\x67\x02"
  "\x1e\x6d\x61\x79\x62\x65\x2d\x73\x69\x67\x6e\x61\x6c\x2d\x69\x6f"
  "\x2d\x74\x68\x72\x65\x61\x64\x2d\x65\x76\x65\x6e\x74\x73\x68\x03"
  "\x63\x03\x45\x02\x5b\x03\x25\x6d\x61\x79\x62\x65\x2d\x73\x61\x76"
  "\x65\x2d\x74\x68\x72\x65\x61\x64\x2d\x66\x6c\x6f\x61\x74\x2d\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x21\x69\x04\x13\x74\x68"
  "\x72\x65\x61\x64\x2d\x6e\x6f\x74\x2d\x72\x75\x6e\x6e\x69\x6e\x67"
  "\x6a\x08\xff\x01\x18\x81\x85\x02\xfe\x01\x16\x81\x85\x02\xfd\x01"
  "\x14\x81\x85\x02\xfc\x01\x12\x81\x85\x02\xfb\x01\x10\x81\x87\x02"
  "\xfa\x01\x0e\x81\x85\x02\xf9\x01\x0c\x81\x85\x02\xf8\x01\x0a\x81"
  "\x85\x02\xf7\x01\x08\x81\x83\x02\xf6\x01\x06\x83\x04\xf5\x01\x04"
  "\x82\x02\x17\x2e\x6b\x02\x37\x08\x73\x74\x6f\x70\x70\x65\x64\x6c"
  "\x19\x3d\x3e\x02\x04\x67\x03\x45\x03\x69\x04\x6a\x05\x88\x02\x14"
  "\x81\x85\x02\x87\x02\x12\x81\x85\x02\x86\x02\x10\x81\x85\x02\x85"
  "\x02\x0e\x81\x85\x02\x84\x02\x0c\x83\x04\x83\x02\x0a\x81\x83\x02"
  "\x82\x02\x08\x81\x81\x02\x81\x02\x06\x81\x83\x02\x80\x02\x04\x82"
  "\x02\x13\x25\x6d\x02\x38\x6c\x0c\x3d\x35\x52\x65\x73\x74\x61\x72"
  "\x74\x69\x6e\x67\x20\x6f\x74\x68\x65\x72\x20\x74\x68\x72\x65\x61"
  "\x64\x3b\x20\x64\x69\x73\x63\x61\x72\x64\x20\x65\x76\x65\x6e\x74"
  "\x73\x20\x69\x6e\x20\x69\x74\x73\x20\x71\x75\x65\x75\x65\x04\x61"
  "\x73\x6b\x27\x0f\x72\x65\x73\x74\x61\x72\x74\x2d\x74\x68\x72\x65"
  "\x61\x64\x6c\x3e\x6c\x03\x03\x28\x05\x29\x03\x18\x70\x72\x6f\x6d"
  "\x70\x74\x2d\x66\x6f\x72\x2d\x63\x6f\x6e\x66\x69\x72\x6d\x61\x74"
  "\x69\x6f\x6e\x03\x3b\x04\x15\x25\x73\x69\x67\x6e\x61\x6c\x2d\x74"
  "\x68\x72\x65\x61\x64\x2d\x65\x76\x65\x6e\x74\x6e\x03\x11\x72\x69"
  "\x6e\x67\x2f\x64\x69\x73\x63\x61\x72\x64\x2d\x61\x6c\x6c\x6f\x04"
  "\x19\x65\x72\x72\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e\x67\x65"
  "\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x08\x96\x02\x1e\x81\x8d\x02"
  "\x95\x02\x1c\x81\x8b\x02\x94\x02\x1a\x81\x8d\x02\x93\x02\x18\x81"
  "\x8d\x02\x92\x02\x16\x81\x8b\x02\x91\x02\x14\x81\x89\x02\x90\x02"
  "\x12\x81\x8b\x02\x8f\x02\x10\x81\x8b\x02\x8e\x02\x0e\x81\x8b\x02"
  "\x8d\x02\x0c\x81\x8b\x02\x8c\x02\x0a\x81\x87\x02\x8b\x02\x08\x81"
  "\x87\x02\x8a\x02\x06\x81\x87\x02\x89\x02\x04\x85\x08\x1d\x3b\x70"
  "\x02\x39\x19\x02\x1b\x72\x75\x6e\x6e\x69\x6e\x67\x2d\x77\x69\x74"
  "\x68\x6f\x75\x74\x2d\x70\x72\x65\x65\x6d\x70\x74\x69\x6f\x6e\x71"
  "\x02\x55\x02\x98\x02\x06\x81\x85\x02\x97\x02\x04\x82\x02\x05\x0f"
  "\x72\x02\x3a\x19\x02\x02\x55\x02\x9a\x02\x06\x81\x85\x02\x99\x02"
  "\x04\x82\x02\x05\x0f\x73\x02\x3b\x71\x0c\x3d\x30\x02\x2e\x3e\x03"
  "\x03\x20\x65\x6e\x74\x65\x72\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d"
  "\x66\x6c\x6f\x61\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x02\x15\x64\x65\x6c\x69\x76\x65\x72\x2d\x74\x69\x6d\x65\x72"
  "\x2d\x65\x76\x65\x6e\x74\x73\x71\x02\x68\x02\x5b\x03\x27\x72\x65"
  "\x73\x74\x6f\x72\x65\x2d\x66\x6c\x6f\x61\x74\x2d\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x66\x72\x6f\x6d\x2d\x64\x65\x66"
  "\x61\x75\x6c\x74\x74\x04\x0d\x79\x69\x65\x6c\x64\x2d\x74\x68\x72"
  "\x65\x61\x64\x75\x03\x60\x03\x47\x09\xa6\x02\x1a\x81\x85\x02\xa5"
  "\x02\x18\x81\x85\x02\xa4\x02\x16\x81\x85\x02\xa3\x02\x14\x81\x83"
  "\x02\xa2\x02\x12\x81\x83\x02\xa1\x02\x10\x81\x83\x02\xa0\x02\x0e"
  "\x81\x83\x02\x9f\x02\x0c\x81\x85\x02\x9e\x02\x0a\x81\x83\x02\x9d"
  "\x02\x08\x81\x81\x02\x9c\x02\x06\x81\x83\x02\x9b\x02\x04\x82\x02"
  "\x19\x38\x76\x02\x3c\x19\x3d\x3e\x02\x04\x67\x03\x75\x03\xad\x02"
  "\x10\x81\x85\x02\xac\x02\x0e\x81\x83\x02\xab\x02\x0c\x83\x04\xaa"
  "\x02\x0a\x81\x83\x02\xa9\x02\x08\x81\x81\x02\xa8\x02\x06\x81\x83"
  "\x02\xa7\x02\x04\x82\x02\x0f\x1e\x02\x3d\x19\x08\x0c\x2f\x2e\x03"
  "\x2f\x02\x03\x47\x03\x74\x03\x45\x04\x69\x03\x60\x06\xb8\x02\x18"
  "\x81\x85\x02\xb7\x02\x16\x81\x85\x02\xb6\x02\x14\x81\x85\x02\xb5"
  "\x02\x12\x81\x85\x02\xb4\x02\x10\x81\x85\x02\xb3\x02\x0e\x81\x85"
  "\x02\xb2\x02\x0c\x81\x85\x02\xb1\x02\x0a\x81\x85\x02\xb0\x02\x08"
  "\x81\x85\x02\xaf\x02\x06\x84\x04\xae\x02\x04\x81\x87\x02\x17\x2f"
  "\x74\x02\x3e\x0c\x0b\xb9\x02\x04\x83\x04\x03\x69\x02\x3f\x19\x02"
  "\x0b\xba\x02\x04\x84\x06\x03\x77\x02\x40\x2b\x09\x0a\x0c\x19\x3d"
  "\x3e\x03\x02\x55\x03\x6f\x03\x19\x74\x72\x61\x6e\x73\x6c\x61\x74"
  "\x65\x2d\x74\x6f\x2d\x73\x74\x61\x74\x65\x2d\x70\x6f\x69\x6e\x74"
  "\x04\x1d\x25\x64\x65\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x69\x6f"
  "\x2d\x74\x68\x72\x65\x61\x64\x2d\x65\x76\x65\x6e\x74\x73\x78\x03"
  "\x1e\x25\x64\x69\x73\x63\x61\x72\x64\x2d\x74\x68\x72\x65\x61\x64"
  "\x2d\x74\x69\x6d\x65\x72\x2d\x72\x65\x63\x6f\x72\x64\x73\x79\x03"
  "\x1d\x25\x64\x69\x73\x61\x73\x73\x6f\x63\x69\x61\x74\x65\x2d\x6a"
  "\x6f\x69\x6e\x65\x64\x2d\x74\x68\x72\x65\x61\x64\x73\x7a\x03\x1d"
  "\x25\x64\x69\x73\x61\x73\x73\x6f\x63\x69\x61\x74\x65\x2d\x74\x68"
  "\x72\x65\x61\x64\x2d\x6d\x75\x74\x65\x78\x65\x73\x7b\x04\x17\x72"
  "\x65\x6c\x65\x61\x73\x65\x2d\x6a\x6f\x69\x6e\x65\x64\x2d\x74\x68"
  "\x72\x65\x61\x64\x73\x7c\x04\x6a\x0a\xca\x02\x22\x81\x87\x02\xc9"
  "\x02\x20\x81\x85\x02\xc8\x02\x1e\x81\x85\x02\xc7\x02\x1c\x81\x85"
  "\x02\xc6\x02\x1a\x81\x85\x02\xc5\x02\x18\x81\x85\x02\xc4\x02\x16"
  "\x81\x85\x02\xc3\x02\x14\x81\x85\x02\xc2\x02\x12\x81\x87\x02\xc1"
  "\x02\x10\x81\x85\x02\xc0\x02\x0e\x81\x87\x02\xbf\x02\x0c\x81\x85"
  "\x02\xbe\x02\x0a\x81\x85\x02\xbd\x02\x08\x81\x87\x02\xbc\x02\x06"
  "\x81\x83\x02\xbb\x02\x04\x83\x04\x21\x43\x7d\x02\x41\x02\x08\x19"
  "\x0c\x09\x3d\x0c\x6a\x6f\x69\x6e\x20\x74\x68\x72\x65\x61\x64\x27"
  "\x0c\x6a\x6f\x69\x6e\x2d\x74\x68\x72\x65\x61\x64\x7e\x7e\x3e\x17"
  "\x64\x65\x74\x61\x63\x68\x65\x64\x2d\x74\x68\x72\x65\x61\x64\x2d"
  "\x6d\x61\x72\x6b\x65\x72\x7f\x05\x03\x28\x05\x29\x02\x55\x06\x17"
  "\x73\x69\x67\x6e\x61\x6c\x2d\x74\x68\x72\x65\x61\x64\x2d\x64\x65"
  "\x61\x64\x6c\x6f\x63\x6b\x80\x01\x03\x17\x73\x69\x67\x6e\x61\x6c"
  "\x2d\x74\x68\x72\x65\x61\x64\x2d\x64\x65\x74\x61\x63\x68\x65\x64"
  "\x81\x01\x04\x4f\x07\xda\x02\x22\x81\x8b\x02\xd9\x02\x20\x81\x85"
  "\x02\xd8\x02\x1e\x81\x83\x02\xd7\x02\x1c\x81\x87\x02\xd6\x02\x1a"
  "\x81\x83\x02\xd5\x02\x18\x81\x83\x02\xd4\x02\x16\x81\x83\x02\xd3"
  "\x02\x14\x81\x8b\x02\xd2\x02\x12\x81\x87\x02\xd1\x02\x10\x81\x89"
  "\x02\xd0\x02\x0e\x81\x89\x02\xcf\x02\x0c\x81\x89\x02\xce\x02\x0a"
  "\x81\x85\x02\xcd\x02\x08\x81\x85\x02\xcc\x02\x06\x81\x85\x02\xcb"
  "\x02\x04\x84\x06\x21\x40\x82\x01\x02\x42\x0c\x09\x3d\x27\x37\x3e"
  "\x7f\x03\x03\x28\x05\x29\x03\x81\x01\x04\x7c\x05\xe5\x02\x18\x81"
  "\x87\x02\xe4\x02\x16\x81\x85\x02\xe3\x02\x14\x81\x87\x02\xe2\x02"
  "\x12\x81\x87\x02\xe1\x02\x10\x81\x85\x02\xe0\x02\x0e\x81\x83\x02"
  "\xdf\x02\x0c\x81\x85\x02\xde\x02\x0a\x81\x85\x02\xdd\x02\x08\x81"
  "\x83\x02\xdc\x02\x06\x81\x83\x02\xdb\x02\x04\x83\x04\x17\x2b\x83"
  "\x01\x02\x43\x08\x04\x63\x64\x72\x84\x01\x04\x63\x61\x72\x85\x01"
  "\x0c\x19\x09\x02\x5b\x04\x06\x64\x65\x6c\x71\x21\x86\x01\x04\x6e"
  "\x04\xf3\x02\x1e\x81\x85\x02\xf2\x02\x1c\x81\x85\x02\xf1\x02\x1a"
  "\x81\x87\x02\xf0\x02\x18\x81\x8d\x02\xef\x02\x16\x81\x8d\x02\xee"
  "\x02\x14\x81\x8b\x02\xed\x02\x12\x81\x89\x02\xec\x02\x10\x81\x89"
  "\x02\xeb\x02\x0e\x81\x91\x02\xea\x02\x0c\x81\x91\x02\xe9\x02\x0a"
  "\x81\x87\x02\xe8\x02\x08\x81\x85\x02\xe7\x02\x06\x81\x85\x02\xe6"
  "\x02\x04\x84\x06\x1d\x2f\x87\x01\x02\x44\x84\x01\x19\x02\x85\x01"
  "\x0c\x08\x04\x0a\x64\x65\x6c\x2d\x61\x73\x73\x71\x21\x02\xfc\x02"
  "\x14\x81\x87\x02\xfb\x02\x12\x81\x87\x02\xfa\x02\x10\x81\x89\x02"
  "\xf9\x02\x0e\x81\x87\x02\xf8\x02\x0c\x81\x89\x02\xf7\x02\x0a\x81"
  "\x89\x02\xf6\x02\x08\x81\x85\x02\xf5\x02\x06\x81\x83\x02\xf4\x02"
  "\x04\x83\x04\x13\x22\x88\x01\x02\x45\x0c\xfd\x02\x04\x83\x04\x03"
  "\x89\x01\x02\x46\x0c\xfe\x02\x04\x83\x04\x03\x8a\x01\x02\x47\x0c"
  "\xff\x02\x04\x83\x04\x03\x8b\x01\x02\x48\x0c\x80\x03\x04\x83\x04"
  "\x03\x8c\x01\x02\x49\x0c\x81\x03\x04\x83\x04\x03\x8d\x01\x02\x4a"
  "\x0c\x82\x03\x04\x83\x04\x03\x8e\x01\x02\x4b\x19\x02\x83\x03\x04"
  "\x84\x06\x03\x8f\x01\x02\x4c\x19\x02\x84\x03\x04\x84\x06\x03\x90"
  "\x01\x02\x4d\x19\x02\x85\x03\x04\x84\x06\x03\x91\x01\x02\x4e\x19"
  "\x02\x86\x03\x04\x84\x06\x03\x92\x01\x02\x4f\x0c\x24\x07\x2e\x74"
  "\x61\x67\x2e\x32\x93\x01\x02\x8a\x03\x0a\x81\x85\x02\x89\x03\x08"
  "\x81\x83\x02\x88\x03\x06\x81\x83\x02\x87\x03\x04\x83\x04\x09\x12"
  "\x94\x01\x02\x50\x0c\x8b\x03\x04\x83\x04\x03\x95\x01\x02\x51\x0c"
  "\x8c\x03\x04\x83\x04\x03\x96\x01\x02\x52\x0c\x8d\x03\x04\x83\x04"
  "\x03\x97\x01\x02\x53\x0c\x8e\x03\x04\x83\x04\x03\x98\x01\x02\x54"
  "\x0c\x8f\x03\x04\x83\x04\x03\x99\x01\x02\x55\x0c\x90\x03\x04\x83"
  "\x04\x03\x9a\x01\x02\x56\x19\x02\x91\x03\x04\x84\x06\x03\x9b\x01"
  "\x02\x57\x19\x02\x92\x03\x04\x84\x06\x03\x9c\x01\x02\x58\x19\x02"
  "\x93\x03\x04\x84\x06\x03\x9d\x01\x02\x59\x19\x02\x94\x03\x04\x84"
  "\x06\x03\x9e\x01\x02\x5a\x19\x02\x95\x03\x04\x84\x06\x03\x9f\x01"
  "\x02\x5b\x0c\x24\x07\x2e\x74\x61\x67\x2e\x33\xa0\x01\x02\x99\x03"
  "\x0a\x81\x85\x02\x98\x03\x08\x81\x83\x02\x97\x03\x06\x81\x83\x02"
  "\x96\x03\x04\x83\x04\x09\x12\xa1\x01\x02\x5c\x02\x0c\x69\x6f\x2d"
  "\x72\x65\x67\x69\x73\x74\x72\x79\xa2\x01\x11\x69\x6f\x2d\x72\x65"
  "\x67\x69\x73\x74\x72\x61\x74\x69\x6f\x6e\x73\xa3\x01\x03\x0d\x68"
  "\x61\x76\x65\x2d\x73\x65\x6c\x65\x63\x74\x3f\x02\x02\x15\x6d\x61"
  "\x6b\x65\x2d\x73\x65\x6c\x65\x63\x74\x2d\x72\x65\x67\x69\x73\x74"
  "\x72\x79\x02\x9e\x03\x0c\x81\x81\x02\x9d\x03\x0a\x81\x81\x02\x9c"
  "\x03\x08\x81\x83\x02\x9b\x03\x06\x82\x02\x9a\x03\x04\x81\x81\x02"
  "\x0b\x18\xa4\x01\x02\x5d\x0c\x3d\x3e\x39\x2e\xa2\x01\x05\x03\x5b"
  "\x02\x5b\x02\x4d\x03\x45\x05\x17\x62\x69\x6e\x64\x2d\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x2d\x68\x61\x6e\x64\x6c\x65\x72\x03\x15"
  "\x73\x69\x67\x6e\x61\x6c\x2d\x73\x65\x6c\x65\x63\x74\x2d\x72\x65"
  "\x73\x75\x6c\x74\x45\x04\x15\x65\x72\x72\x6f\x72\x3a\x64\x65\x72"
  "\x69\x76\x65\x64\x2d\x74\x68\x72\x65\x61\x64\x02\x5f\x03\x60\x04"
  "\x15\x74\x65\x73\x74\x2d\x73\x65\x6c\x65\x63\x74\x2d\x72\x65\x67"
  "\x69\x73\x74\x72\x79\xa5\x01\x04\x14\x77\x69\x74\x68\x69\x6e\x2d"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x0c\xae\x03\x22"
  "\x81\x85\x02\xad\x03\x20\x81\x83\x02\xac\x03\x1e\x81\x81\x02\xab"
  "\x03\x1c\x81\x83\x02\xaa\x03\x1a\x81\x83\x02\xa9\x03\x18\x81\x83"
  "\x02\xa8\x03\x16\x83\x04\xa7\x03\x14\x81\x83\x02\xa6\x03\x12\x82"
  "\x02\xa5\x03\x10\x81\x85\x02\xa4\x03\x0e\x81\x83\x02\xa3\x03\x0c"
  "\x81\x81\x02\xa2\x03\x0a\x81\x85\x02\xa1\x03\x08\x81\x81\x02\xa0"
  "\x03\x06\x81\x81\x02\x9f\x03\x04\x82\x02\x21\x45\xa6\x01\x02\x5e"
  "\x02\x05\x72\x65\x61\x64\xa7\x01\x16\x70\x72\x6f\x63\x65\x73\x73"
  "\x2d\x73\x74\x61\x74\x75\x73\x2d\x63\x68\x61\x6e\x67\x65\xa8\x01"
  "\xa8\x01\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\xa9\x01\x05"
  "\x18\x73\x69\x67\x6e\x61\x6c\x2d\x69\x6f\x2d\x74\x68\x72\x65\x61"
  "\x64\x2d\x65\x76\x65\x6e\x74\x73\xaa\x01\x02\xb2\x03\x0a\x81\x87"
  "\x02\xb1\x03\x08\x81\x85\x02\xb0\x03\x06\x81\x83\x02\xaf\x03\x04"
  "\x83\x04\x09\x17\xab\x01\x02\x5f\x02\xa3\x01\xa2\x01\x03\x04\xa5"
  "\x01\x03\x45\x03\xb6\x03\x0a\x81\x81\x02\xb5\x03\x08\x81\x85\x02"
  "\xb4\x03\x06\x81\x81\x02\xb3\x03\x04\x82\x02\x09\x15\xa5\x01\x02"
  "\x60\x02\xa8\x01\xa7\x01\x0a\x69\x6e\x74\x65\x72\x72\x75\x70\x74"
  "\x3d\x3e\x02\x05\x0d\x64\x79\x6e\x61\x6d\x69\x63\x2d\x77\x69\x6e"
  "\x64\xac\x01\x02\x55\x03\x22\x25\x6d\x61\x79\x62\x65\x2d\x64\x65"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x69\x6f\x2d\x74\x68\x72\x65"
  "\x61\x64\x2d\x65\x76\x65\x6e\x74\xad\x01\x02\x65\x08\x1a\x25\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x2d\x69\x6f\x2d\x74\x68\x72\x65\x61"
  "\x64\x2d\x65\x76\x65\x6e\x74\xae\x01\x02\x5b\x07\xc6\x03\x22\x81"
  "\x85\x02\xc5\x03\x20\x81\x85\x02\xc4\x03\x1e\x81\x83\x02\xc3\x03"
  "\x1c\x81\x85\x02\xc2\x03\x1a\x81\x85\x02\xc1\x03\x18\x81\x83\x02"
  "\xc0\x03\x16\x81\x83\x02\xbf\x03\x14\x81\x83\x02\xbe\x03\x12\x81"
  "\x89\x02\xbd\x03\x10\x81\x83\x02\xbc\x03\x0e\x81\x83\x02\xbb\x03"
  "\x0c\x81\x83\x02\xba\x03\x0a\x81\x87\x02\xb9\x03\x08\x81\x85\x02"
  "\xb8\x03\x06\x81\x87\x02\xb7\x03\x04\x84\x06\x21\x39\xaf\x01\x02"
  "\x61\x02\x0c\x02\x55\x03\x0f\x64\x65\x6c\x65\x74\x65\x2d\x74\x65"
  "\x6e\x74\x72\x79\x21\xb0\x01\x03\xc9\x03\x08\x81\x85\x02\xc8\x03"
  "\x06\x81\x83\x02\xc7\x03\x04\x83\x04\x07\x12\xb1\x01\x02\x62\x25"
  "\x70\x65\x72\x6d\x61\x6e\x65\x6e\x74\x6c\x79\x2d\x72\x65\x67\x69"
  "\x73\x74\x65\x72\x2d\x69\x6f\x2d\x74\x68\x72\x65\x61\x64\x2d\x65"
  "\x76\x65\x6e\x74\xb2\x01\x08\x1b\x72\x65\x67\x69\x73\x74\x65\x72"
  "\x2d\x69\x6f\x2d\x74\x68\x72\x65\x61\x64\x2d\x65\x76\x65\x6e\x74"
  "\x2d\x31\xb3\x01\x02\xca\x03\x04\x86\x0a\x03\x0b\xb4\x01\x02\x63"
  "\x19\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x69\x6f\x2d\x74\x68\x72"
  "\x65\x61\x64\x2d\x65\x76\x65\x6e\x74\xb5\x01\x08\xb3\x01\x02\xcb"
  "\x03\x04\x86\x0a\x03\x0a\xb6\x01\x02\x64\x3d\x27\x3e\x02\x04\x16"
  "\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x73\x65\x6c\x65\x63\x74"
  "\x2d\x6d\x6f\x64\x65\xb7\x01\x03\x28\x05\x29\x08\xae\x01\x02\x5b"
  "\x06\xd4\x03\x14\x81\x91\x02\xd3\x03\x12\x81\x91\x02\xd2\x03\x10"
  "\x81\x8f\x02\xd1\x03\x0e\x81\x8d\x02\xd0\x03\x0c\x81\x8f\x02\xcf"
  "\x03\x0a\x81\x8d\x02\xce\x03\x08\x81\x8d\x02\xcd\x03\x06\x81\x8d"
  "\x02\xcc\x03\x04\x88\x0e\x13\x25\xb8\x01\x02\x65\x3d\x1e\x49\x2f"
  "\x4f\x20\x74\x68\x72\x65\x61\x64\x20\x65\x76\x65\x6e\x74\x20\x72"
  "\x65\x67\x69\x73\x74\x72\x61\x74\x69\x6f\x6e\x1b\x64\x65\x72\x65"
  "\x67\x69\x73\x74\x65\x72\x2d\x69\x6f\x2d\x74\x68\x72\x65\x61\x64"
  "\x2d\x65\x76\x65\x6e\x74\xb9\x01\x3e\x02\x03\x08\x74\x65\x6e\x74"
  "\x72\x79\x3f\xba\x01\x05\x29\x03\x1c\x25\x64\x65\x72\x65\x67\x69"
  "\x73\x74\x65\x72\x2d\x69\x6f\x2d\x74\x68\x72\x65\x61\x64\x2d\x65"
  "\x76\x65\x6e\x74\xbb\x01\x02\x5b\x05\xdc\x03\x12\x81\x87\x02\xdb"
  "\x03\x10\x81\x85\x02\xda\x03\x0e\x81\x85\x02\xd9\x03\x0c\x81\x83"
  "\x02\xd8\x03\x0a\x81\x85\x02\xd7\x03\x08\x81\x83\x02\xd6\x03\x06"
  "\x81\x83\x02\xd5\x03\x04\x83\x04\x11\x22\xbc\x01\x02\x66\x19\xa8"
  "\x01\x0c\x3d\x20\x64\x65\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x69"
  "\x6f\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x2d\x65\x76\x65"
  "\x6e\x74\x73\xbd\x01\xa3\x01\x02\x3e\xa3\x01\xa2\x01\x04\x04\xb7"
  "\x01\x05\x1d\x72\x65\x6d\x6f\x76\x65\x2d\x66\x72\x6f\x6d\x2d\x73"
  "\x65\x6c\x65\x63\x74\x2d\x72\x65\x67\x69\x73\x74\x72\x79\x21\xbe"
  "\x01\x04\x05\x65\x71\x76\x3f\xbf\x01\x02\x5b\x05\xef\x03\x28\x81"
  "\x89\x02\xee\x03\x26\x81\x87\x02\xed\x03\x24\x81\x87\x02\xec\x03"
  "\x22\x81\x85\x02\xeb\x03\x20\x81\x83\x02\xea\x03\x1e\x81\x83\x02"
  "\xe9\x03\x1c\x81\x89\x02\xe8\x03\x1a\x81\x85\x02\xe7\x03\x18\x81"
  "\x85\x02\xe6\x03\x16\x81\x85\x02\xe5\x03\x14\x81\x83\x02\xe4\x03"
  "\x12\x81\x83\x02\xe3\x03\x10\x81\x83\x02\xe2\x03\x0e\x81\x83\x02"
  "\xe1\x03\x0c\x81\x89\x02\xe0\x03\x0a\x81\x85\x02\xdf\x03\x08\x81"
  "\x87\x02\xde\x03\x06\x81\x85\x02\xdd\x03\x04\x84\x06\x27\x42\xc0"
  "\x01\x02\x67\x19\x0c\xa3\x01\x02\xa3\x01\xa2\x01\x03\x02\x5b\x04"
  "\xbf\x01\x05\xbe\x01\x04\x6e\x05\x86\x04\x30\x81\x85\x02\x85\x04"
  "\x2e\x81\x85\x02\x84\x04\x2c\x81\x85\x02\x83\x04\x2a\x81\x89\x02"
  "\x82\x04\x28\x81\x87\x02\x81\x04\x26\x81\x85\x02\x80\x04\x24\x81"
  "\x85\x02\xff\x03\x22\x81\x83\x02\xfe\x03\x20\x81\x8b\x02\xfd\x03"
  "\x1e\x81\x8b\x02\xfc\x03\x1c\x81\x89\x02\xfb\x03\x1a\x81\x87\x02"
  "\xfa\x03\x18\x81\x8b\x02\xf9\x03\x16\x81\x89\x02\xf8\x03\x14\x81"
  "\x87\x02\xf7\x03\x12\x81\x87\x02\xf6\x03\x10\x81\x85\x02\xf5\x03"
  "\x0e\x81\x85\x02\xf4\x03\x0c\x81\x85\x02\xf3\x03\x0a\x81\x87\x02"
  "\xf2\x03\x08\x81\x85\x02\xf1\x03\x06\x81\x83\x02\xf0\x03\x04\x83"
  "\x04\x2f\x47\xc1\x01\x02\x68\x0c\xa8\x01\x19\xa3\x01\x02\xa3\x01"
  "\xa2\x01\x03\x05\x0c\x6d\x61\x6b\x65\x2d\x74\x65\x6e\x74\x72\x79"
  "\xc2\x01\x05\x18\x61\x64\x64\x2d\x74\x6f\x2d\x73\x65\x6c\x65\x63"
  "\x74\x2d\x72\x65\x67\x69\x73\x74\x72\x79\x21\x08\x0c\x6d\x61\x6b"
  "\x65\x2d\x64\x65\x6e\x74\x72\x79\xc3\x01\x04\xbf\x01\x05\xa2\x04"
  "\x3a\x81\x85\x02\xa1\x04\x38\x81\x85\x02\xa0\x04\x36\x81\x83\x02"
  "\x9f\x04\x34\x81\x8f\x02\x9e\x04\x32\x81\x83\x02\x9d\x04\x30\x81"
  "\x85\x02\x9c\x04\x2e\x81\x85\x02\x9b\x04\x2c\x81\x85\x02\x9a\x04"
  "\x2a\x81\x83\x02\x99\x04\x28\x81\x85\x02\x98\x04\x26\x81\x85\x02"
  "\x97\x04\x24\x81\x85\x02\x96\x04\x22\x81\x83\x02\x95\x04\x20\x81"
  "\x83\x02\x94\x04\x1e\x81\x83\x02\x93\x04\x1c\x81\x83\x02\x92\x04"
  "\x1a\x81\x85\x02\x91\x04\x18\x81\x83\x02\x90\x04\x16\x81\x83\x02"
  "\x8f\x04\x14\x81\x83\x02\x8e\x04\x12\x81\x83\x02\x8d\x04\x10\x81"
  "\x83\x02\x8c\x04\x0e\x81\x83\x02\x8b\x04\x0c\x81\x83\x02\x8a\x04"
  "\x0a\x81\x83\x02\x89\x04\x08\x81\x91\x02\x88\x04\x06\x81\x8d\x02"
  "\x87\x04\x04\x88\x0e\x39\x53\xc4\x01\x02\x69\x02\x0c\x03\xb0\x01"
  "\x02\xa4\x04\x06\x81\x83\x02\xa3\x04\x04\x83\x04\x05\x0e\xc5\x01"
  "\x02\x6a\x84\x01\x85\x01\x0c\xa3\x01\x02\x03\xb0\x01\x02\xb1\x04"
  "\x1c\x81\x85\x02\xb0\x04\x1a\x81\x85\x02\xaf\x04\x18\x81\x87\x02"
  "\xae\x04\x16\x81\x83\x02\xad\x04\x14\x81\x8d\x02\xac\x04\x12\x81"
  "\x8d\x02\xab\x04\x10\x81\x8d\x02\xaa\x04\x0e\x81\x89\x02\xa9\x04"
  "\x0c\x81\x8d\x02\xa8\x04\x0a\x81\x8b\x02\xa7\x04\x08\x81\x89\x02"
  "\xa6\x04\x06\x81\x87\x02\xa5\x04\x04\x84\x06\x1b\x2c\xc6\x01\x02"
  "\x6b\x02\x0c\x73\x65\x6c\x65\x63\x74\x20\x6d\x6f\x64\x65\xa7\x01"
  "\x06\x77\x72\x69\x74\x65\xc7\x01\x0b\x72\x65\x61\x64\x2d\x77\x72"
  "\x69\x74\x65\x04\x05\x6d\x65\x6d\x71\xc8\x01\x05\x29\x03\xb3\x04"
  "\x06\x81\x85\x02\xb2\x04\x04\x84\x06\x05\x10\xc9\x01\x02\x6c\xa7"
  "\x01\x0b\x72\x65\x61\x64\x2f\x77\x72\x69\x74\x65\xca\x01\xc7\x01"
  "\xca\x01\x0c\x84\x01\x85\x01\x0e\x49\x6c\x6c\x65\x67\x61\x6c\x20"
  "\x6d\x6f\x64\x65\x3a\x07\x68\x61\x6e\x67\x75\x70\x50\xca\x01\xc7"
  "\x01\xa7\x01\xa9\x01\xa3\x01\x02\x04\x50\x04\x6e\x04\xbf\x01\x03"
  "\xb0\x01\x03\x15\x6d\x6f\x76\x65\x2d\x74\x65\x6e\x74\x72\x79\x2d"
  "\x74\x6f\x2d\x62\x61\x63\x6b\x21\xca\x01\x04\xc8\x01\x07\xd0\x04"
  "\x3c\x81\x93\x02\xcf\x04\x3a\x81\x83\x02\xce\x04\x38\x81\x85\x02"
  "\xcd\x04\x36\x81\x85\x02\xcc\x04\x34\x83\x04\xcb\x04\x32\x83\x04"
  "\xca\x04\x30\x81\x93\x02\xc9\x04\x2e\x81\x93\x02\xc8\x04\x2c\x81"
  "\x91\x02\xc7\x04\x2a\x81\x91\x02\xc6\x04\x28\x83\x04\xc5\x04\x26"
  "\x81\x97\x02\xc4\x04\x24\x81\x95\x02\xc3\x04\x22\x81\x95\x02\xc2"
  "\x04\x20\x83\x04\xc1\x04\x1e\x81\x97\x02\xc0\x04\x1c\x81\x95\x02"
  "\xbf\x04\x1a\x81\x95\x02\xbe\x04\x18\x81\x89\x02\xbd\x04\x16\x81"
  "\x89\x02\xbc\x04\x14\x81\x87\x02\xbb\x04\x12\x81\x87\x02\xba\x04"
  "\x10\x81\x83\x02\xb9\x04\x0e\x81\x93\x02\xb8\x04\x0c\x81\x8d\x02"
  "\xb7\x04\x0a\x81\x8b\x02\xb6\x04\x08\x81\x8b\x02\xb5\x04\x06\x81"
  "\x8f\x02\xb4\x04\x04\x85\x08\x3b\x61\xc8\x01\x02\x6d\x19\x02\x0c"
  "\xd9\x04\x14\x81\x89\x02\xd8\x04\x12\x81\x89\x02\xd7\x04\x10\x81"
  "\x89\x02\xd6\x04\x0e\x81\x89\x02\xd5\x04\x0c\x81\x89\x02\xd4\x04"
  "\x0a\x81\x87\x02\xd3\x04\x08\x81\x85\x02\xd2\x04\x06\x81\x83\x02"
  "\xd1\x04\x04\x83\x04\x13\x1e\xbf\x01\x02\x6e\x02\xa8\x01\x19\x0c"
  "\xa3\x01\x02\xa2\x01\x02\x05\xbe\x01\x02\xee\x04\x2c\x81\x87\x02"
  "\xed\x04\x2a\x81\x85\x02\xec\x04\x28\x81\x85\x02\xeb\x04\x26\x81"
  "\x85\x02\xea\x04\x24\x81\x89\x02\xe9\x04\x22\x81\x89\x02\xe8\x04"
  "\x20\x81\x8b\x02\xe7\x04\x1e\x81\x89\x02\xe6\x04\x1c\x81\x89\x02"
  "\xe5\x04\x1a\x81\x89\x02\xe4\x04\x18\x81\x89\x02\xe3\x04\x16\x81"
  "\x89\x02\xe2\x04\x14\x81\x89\x02\xe1\x04\x12\x81\x89\x02\xe0\x04"
  "\x10\x81\x89\x02\xdf\x04\x0e\x81\x89\x02\xde\x04\x0c\x81\x87\x02"
  "\xdd\x04\x0a\x81\x85\x02\xdc\x04\x08\x81\x83\x02\xdb\x04\x06\x83"
  "\x04\xda\x04\x04\x81\x89\x02\x2b\x3f\xbe\x01\x02\x6f\x19\x0c\x3d"
  "\x3e\x2e\x03\xf5\x04\x10\x81\x85\x02\xf4\x04\x0e\x81\x87\x02\xf3"
  "\x04\x0c\x81\x85\x02\xf2\x04\x0a\x81\x83\x02\xf1\x04\x08\x81\x81"
  "\x02\xf0\x04\x06\x81\x83\x02\xef\x04\x04\x82\x02\x0f\x1a\xa9\x01"
  "\x02\x70\x19\x02\x3d\x3e\x02\x04\x67\x03\x63\x03\xfc\x04\x10\x81"
  "\x83\x02\xfb\x04\x0e\x81\x85\x02\xfa\x04\x0c\x83\x04\xf9\x04\x0a"
  "\x81\x83\x02\xf8\x04\x08\x81\x81\x02\xf7\x04\x06\x81\x83\x02\xf6"
  "\x04\x04\x82\x02\x0f\x1e\xa8\x01\x02\x71\x12\x77\x69\x74\x68\x2d"
  "\x73\x74\x61\x63\x6b\x2d\x6d\x61\x72\x6b\x65\x72\x19\x0c\x3d\x3e"
  "\x2e\x1b\x77\x69\x74\x68\x2d\x74\x68\x72\x65\x61\x64\x2d\x65\x76"
  "\x65\x6e\x74\x73\x2d\x62\x6c\x6f\x63\x6b\x65\x64\xa7\x01\x04\x8d"
  "\x05\x24\x81\x83\x02\x8c\x05\x22\x81\x85\x02\x8b\x05\x20\x81\x83"
  "\x02\x8a\x05\x1e\x81\x83\x02\x89\x05\x1c\x81\x8b\x02\x88\x05\x1a"
  "\x81\x87\x02\x87\x05\x18\x81\x83\x02\x86\x05\x16\x81\x8d\x02\x85"
  "\x05\x14\x81\x89\x02\x84\x05\x12\x81\x8b\x02\x83\x05\x10\x81\x8d"
  "\x02\x82\x05\x0e\x81\x89\x02\x81\x05\x0c\x81\x87\x02\x80\x05\x0a"
  "\x81\x85\x02\xff\x04\x08\x81\x83\x02\xfe\x04\x06\x81\x85\x02\xfd"
  "\x04\x04\x83\x04\x23\x30\xcb\x01\x02\x72\x0c\x3d\x3e\x2e\x03\x93"
  "\x05\x0e\x81\x85\x02\x92\x05\x0c\x81\x85\x02\x91\x05\x0a\x81\x81"
  "\x02\x90\x05\x08\x81\x83\x02\x8f\x05\x06\x81\x83\x02\x8e\x05\x04"
  "\x82\x02\x0d\x16\xcc\x01\x02\x73\x02\x19\x3d\x3e\x2e\x03\x99\x05"
  "\x0e\x81\x85\x02\x98\x05\x0c\x81\x87\x02\x97\x05\x0a\x81\x83\x02"
  "\x96\x05\x08\x81\x85\x02\x95\x05\x06\x81\x85\x02\x94\x05\x04\x83"
  "\x04\x0d\x17\xcd\x01\x02\x74\x02\x10\x73\x69\x67\x6e\x61\x6c\x20"
  "\x65\x76\x65\x6e\x74\x20\x74\x6f\x2b\x0c\x3d\x27\x4f\x2e\x3e\x4f"
  "\x04\x03\x28\x05\x29\x02\x14\x62\x6c\x6f\x63\x6b\x2d\x74\x68\x72"
  "\x65\x61\x64\x2d\x65\x76\x65\x6e\x74\x73\x2b\x07\x13\x73\x69\x67"
  "\x6e\x61\x6c\x2d\x74\x68\x72\x65\x61\x64\x2d\x64\x65\x61\x64\x27"
  "\x04\x6e\x04\x13\x25\x61\x64\x64\x2d\x70\x65\x6e\x64\x69\x6e\x67"
  "\x2d\x65\x76\x65\x6e\x74\xce\x01\x03\x60\x02\x5b\x02\x16\x75\x6e"
  "\x62\x6c\x6f\x63\x6b\x2d\x74\x68\x72\x65\x61\x64\x2d\x65\x76\x65"
  "\x6e\x74\x73\xcf\x01\x0a\xa9\x05\x22\x81\x8b\x02\xa8\x05\x20\x81"
  "\x89\x02\xa7\x05\x1e\x81\x87\x02\xa6\x05\x1c\x81\x8b\x02\xa5\x05"
  "\x1a\x81\x8b\x02\xa4\x05\x18\x81\x89\x02\xa3\x05\x16\x81\x87\x02"
  "\xa2\x05\x14\x81\x8f\x02\xa1\x05\x12\x81\x89\x02\xa0\x05\x10\x81"
  "\x87\x02\x9f\x05\x0e\x81\x89\x02\x9e\x05\x0c\x81\x89\x02\x9d\x05"
  "\x0a\x81\x85\x02\x9c\x05\x08\x81\x85\x02\x9b\x05\x06\x81\x85\x02"
  "\x9a\x05\x04\x84\x06\x21\x43\xd0\x01\x02\x75\x02\x57\x0c\x04\xce"
  "\x01\x03\x5a\x03\xad\x05\x0a\x81\x85\x02\xac\x05\x08\x81\x85\x02"
  "\xab\x05\x06\x81\x85\x02\xaa\x05\x04\x84\x06\x09\x16\x57\x02\x76"
  "\x02\x0c\x03\x11\x72\x69\x6e\x67\x2f\x63\x6f\x75\x6e\x74\x2d\x6d"
  "\x61\x78\x2d\x32\xd1\x01\x04\x15\x72\x69\x6e\x67\x2f\x73\x65\x74"
  "\x2d\x66\x69\x72\x73\x74\x2d\x69\x74\x65\x6d\x21\xd2\x01\x03\x10"
  "\x72\x69\x6e\x67\x2f\x66\x69\x72\x73\x74\x2d\x69\x74\x65\x6d\xd3"
  "\x01\x04\x0d\x72\x69\x6e\x67\x2f\x65\x6e\x71\x75\x65\x75\x65\xd4"
  "\x01\x05\xb1\x05\x0a\x81\x87\x02\xb0\x05\x08\x81\x89\x02\xaf\x05"
  "\x06\x81\x85\x02\xae\x05\x04\x84\x06\x09\x1a\xd5\x01\x02\x77\x3d"
  "\x19\x0c\x3e\x02\x04\x0d\x72\x69\x6e\x67\x2f\x64\x65\x71\x75\x65"
  "\x75\x65\xd6\x01\x02\xbb\x05\x16\x81\x85\x02\xba\x05\x14\x81\x83"
  "\x02\xb9\x05\x12\x81\x83\x02\xb8\x05\x10\x81\x89\x02\xb7\x05\x0e"
  "\x81\x85\x02\xb6\x05\x0c\x81\x87\x02\xb5\x05\x0a\x81\x83\x02\xb4"
  "\x05\x08\x81\x89\x02\xb3\x05\x06\x81\x85\x02\xb2\x05\x04\x83\x04"
  "\x15\x23\xd7\x01\x02\x78\x19\x0c\x3d\x3e\x2e\x03\x02\x71\x02\x5b"
  "\x02\x68\x03\x63\x05\xc8\x05\x1c\x81\x85\x02\xc7\x05\x1a\x81\x85"
  "\x02\xc6\x05\x18\x81\x83\x02\xc5\x05\x16\x81\x83\x02\xc4\x05\x14"
  "\x81\x85\x02\xc3\x05\x12\x81\x83\x02\xc2\x05\x10\x81\x85\x02\xc1"
  "\x05\x0e\x81\x85\x02\xc0\x05\x0c\x81\x83\x02\xbf\x05\x0a\x81\x85"
  "\x02\xbe\x05\x08\x81\x81\x02\xbd\x05\x06\x81\x83\x02\xbc\x05\x04"
  "\x82\x02\x1b\x2e\xd8\x01\x02\x79\x0c\xc9\x05\x04\x83\x04\x03\xd9"
  "\x01\x02\x7a\x0c\xca\x05\x04\x83\x04\x03\xda\x01\x02\x7b\x0c\xcb"
  "\x05\x04\x83\x04\x03\xdb\x01\x02\x7c\x0c\xcc\x05\x04\x83\x04\x03"
  "\xdc\x01\x02\x7d\x19\x02\xcd\x05\x04\x84\x06\x03\xdd\x01\x02\x7e"
  "\x19\x02\xce\x05\x04\x84\x06\x03\xde\x01\x02\x7f\x19\x02\xcf\x05"
  "\x04\x84\x06\x03\xdf\x01\x02\x80\x01\x0c\x24\x07\x2e\x74\x61\x67"
  "\x2e\x34\xe0\x01\x02\xd3\x05\x0a\x81\x85\x02\xd2\x05\x08\x81\x83"
  "\x02\xd1\x05\x06\x81\x83\x02\xd0\x05\x04\x83\x04\x09\x12\xe1\x01"
  "\x02\x81\x01\x19\x0c\x3d\x31\x02\x3e\x31\x03\x02\x10\x72\x65\x61"
  "\x6c\x2d\x74\x69\x6d\x65\x2d\x63\x6c\x6f\x63\x6b\xe2\x01\x02\x55"
  "\x06\x12\x6d\x61\x6b\x65\x2d\x74\x69\x6d\x65\x72\x2d\x72\x65\x63"
  "\x6f\x72\x64\xe3\x01\x02\x5b\x05\xe5\x05\x26\x81\x8d\x02\xe4\x05"
  "\x24\x81\x8b\x02\xe3\x05\x22\x81\x8b\x02\xe2\x05\x20\x81\x85\x02"
  "\xe1\x05\x1e\x81\x83\x02\xe0\x05\x1c\x81\x85\x02\xdf\x05\x1a\x81"
  "\x85\x02\xde\x05\x18\x81\x85\x02\xdd\x05\x16\x81\x85\x02\xdc\x05"
  "\x14\x81\x85\x02\xdb\x05\x12\x81\x8f\x02\xda\x05\x10\x81\x89\x02"
  "\xd9\x05\x0e\x81\x8d\x02\xd8\x05\x0c\x81\x8b\x02\xd7\x05\x0a\x81"
  "\x87\x02\xd6\x05\x08\x81\x85\x02\xd5\x05\x06\x81\x85\x02\xd4\x05"
  "\x04\x84\x06\x25\x3b\xe4\x01\x02\x82\x01\x02\x02\x2b\x04\x15\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x2d\x74\x69\x6d\x65\x72\x2d\x65\x76"
  "\x65\x6e\x74\xe5\x01\x02\x17\x73\x75\x73\x70\x65\x6e\x64\x2d\x63"
  "\x75\x72\x72\x65\x6e\x74\x2d\x74\x68\x72\x65\x61\x64\xe6\x01\x02"
  "\xcf\x01\x05\xeb\x05\x0e\x81\x89\x02\xea\x05\x0c\x81\x87\x02\xe9"
  "\x05\x0a\x81\x83\x02\xe8\x05\x08\x81\x87\x02\xe7\x05\x06\x81\x85"
  "\x02\xe6\x05\x04\x83\x04\x0d\x1b\xe7\x01\x02\x83\x01\x02\x19\x0c"
  "\x31\x02\x31\x02\x02\xe2\x01\x04\x6e\x03\xf8\x05\x1c\x81\x85\x02"
  "\xf7\x05\x1a\x81\x85\x02\xf6\x05\x18\x81\x85\x02\xf5\x05\x16\x81"
  "\x85\x02\xf4\x05\x14\x81\x85\x02\xf3\x05\x12\x81\x89\x02\xf2\x05"
  "\x10\x81\x87\x02\xf1\x05\x0e\x81\x85\x02\xf0\x05\x0c\x81\x85\x02"
  "\xef\x05\x0a\x81\x85\x02\xee\x05\x08\x81\x83\x02\xed\x05\x06\x81"
  "\x81\x02\xec\x05\x04\x82\x02\x1b\x2e\xe8\x01\x02\x84\x01\x19\x0c"
  "\x3d\x19\x74\x69\x6d\x65\x72\x20\x65\x76\x65\x6e\x74\x20\x72\x65"
  "\x67\x69\x73\x74\x72\x61\x74\x69\x6f\x6e\x17\x64\x65\x72\x65\x67"
  "\x69\x73\x74\x65\x72\x2d\x74\x69\x6d\x65\x72\x2d\x65\x76\x65\x6e"
  "\x74\xe9\x01\x31\x02\x3e\x31\x03\x03\x0e\x74\x69\x6d\x65\x72\x2d"
  "\x72\x65\x63\x6f\x72\x64\x3f\xea\x01\x05\x29\x02\x5b\x04\x85\x06"
  "\x1c\x81\x87\x02\x84\x06\x1a\x81\x85\x02\x83\x06\x18\x81\x85\x02"
  "\x82\x06\x16\x81\x85\x02\x81\x06\x14\x81\x83\x02\x80\x06\x12\x81"
  "\x85\x02\xff\x05\x10\x81\x85\x02\xfe\x05\x0e\x81\x89\x02\xfd\x05"
  "\x0c\x81\x83\x02\xfc\x05\x0a\x81\x85\x02\xfb\x05\x08\x81\x83\x02"
  "\xfa\x05\x06\x81\x83\x02\xf9\x05\x04\x83\x04\x1b\x30\xeb\x01\x02"
  "\x85\x01\x31\x02\x87\x06\x06\x81\x81\x02\x86\x06\x04\x82\x02\x05"
  "\x0a\xec\x01\x02\x86\x01\x19\x0c\x3d\x3e\x39\x03\x02\x55\x03\x6f"
  "\x02\x5b\x04\x78\x03\x79\x06\x94\x06\x1c\x81\x83\x02\x93\x06\x1a"
  "\x81\x83\x02\x92\x06\x18\x81\x83\x02\x91\x06\x16\x81\x83\x02\x90"
  "\x06\x14\x81\x83\x02\x8f\x06\x12\x81\x83\x02\x8e\x06\x10\x81\x85"
  "\x02\x8d\x06\x0e\x81\x83\x02\x8c\x06\x0c\x81\x85\x02\x8b\x06\x0a"
  "\x81\x83\x02\x8a\x06\x08\x81\x85\x02\x89\x06\x06\x81\x81\x02\x88"
  "\x06\x04\x82\x02\x1b\x32\x39\x02\x87\x01\x19\x0c\x02\x31\x02\x31"
  "\x02\x9b\x06\x10\x81\x89\x02\x9a\x06\x0e\x81\x89\x02\x99\x06\x0c"
  "\x81\x89\x02\x98\x06\x0a\x81\x87\x02\x97\x06\x08\x81\x87\x02\x96"
  "\x06\x06\x81\x85\x02\x95\x06\x04\x83\x04\x0f\x1b\xed\x01\x02\x88"
  "\x01\x32\x02\x9d\x06\x06\x81\x81\x02\x9c\x06\x04\x82\x02\x05\x0a"
  "\xee\x01\x02\x89\x01\x1b\x73\x65\x74\x2d\x74\x68\x72\x65\x61\x64"
  "\x2d\x74\x69\x6d\x65\x72\x2d\x69\x6e\x74\x65\x72\x76\x61\x6c\x21"
  "\xef\x01\x3d\x32\x02\x3e\x02\x04\x21\x67\x75\x61\x72\x61\x6e\x74"
  "\x65\x65\x2d\x65\x78\x61\x63\x74\x2d\x70\x6f\x73\x69\x74\x69\x76"
  "\x65\x2d\x69\x6e\x74\x65\x67\x65\x72\x02\x5b\x03\xa4\x06\x10\x81"
  "\x87\x02\xa3\x06\x0e\x81\x85\x02\xa2\x06\x0c\x81\x85\x02\xa1\x06"
  "\x0a\x81\x83\x02\xa0\x06\x08\x81\x85\x02\x9f\x06\x06\x83\x04\x9e"
  "\x06\x04\x81\x83\x02\x0f\x1d\xf0\x01\x02\x8a\x01\x3d\x3e\x02\x02"
  "\x5b\x02\xa9\x06\x0c\x81\x85\x02\xa8\x06\x0a\x81\x83\x02\xa7\x06"
  "\x08\x81\x81\x02\xa6\x06\x06\x81\x83\x02\xa5\x06\x04\x82\x02\x0b"
  "\x14\xf1\x01\x02\x8b\x01\x3d\x3e\x02\x02\x13\x25\x73\x74\x6f\x70"
  "\x2d\x74\x68\x72\x65\x61\x64\x2d\x74\x69\x6d\x65\x72\xf2\x01\x02"
  "\xae\x06\x0c\x81\x85\x02\xad\x06\x0a\x81\x83\x02\xac\x06\x08\x81"
  "\x81\x02\xab\x06\x06\x81\x83\x02\xaa\x06\x04\x82\x02\x0b\x14\xf3"
  "\x01\x02\x8c\x01\xf2\x01\x5b\x03\x05\xac\x01\x02\xb1\x06\x08\x81"
  "\x87\x02\xb0\x06\x06\x81\x85\x02\xaf\x06\x04\x83\x04\x07\x10\xf4"
  "\x01\x02\x8d\x01\x0f\x72\x65\x61\x6c\x2d\x74\x69\x6d\x65\x72\x2d"
  "\x73\x65\x74\x14\x72\x65\x71\x75\x65\x73\x74\x2d\x69\x6e\x74\x65"
  "\x72\x72\x75\x70\x74\x73\x21\x0c\x30\x02\x31\x32\xa3\x01\x2e\x14"
  "\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x62\x69\x74\x2f\x74\x69"
  "\x6d\x65\x72\xf5\x01\x06\x02\xe2\x01\x02\xf2\x01\x04\x04\x6d\x69"
  "\x6e\x04\xc5\x06\x2a\x81\x87\x02\xc4\x06\x28\x81\x87\x02\xc3\x06"
  "\x26\x81\x87\x02\xc2\x06\x24\x81\x89\x02\xc1\x06\x22\x81\x89\x02"
  "\xc0\x06\x20\x81\x89\x02\xbf\x06\x1e\x81\x87\x02\xbe\x06\x1c\x81"
  "\x87\x02\xbd\x06\x1a\x81\x85\x02\xbc\x06\x18\x81\x85\x02\xbb\x06"
  "\x16\x81\x85\x02\xba\x06\x14\x81\x85\x02\xb9\x06\x12\x81\x87\x02"
  "\xb8\x06\x10\x81\x85\x02\xb7\x06\x0e\x81\x85\x02\xb6\x06\x0c\x81"
  "\x85\x02\xb5\x06\x0a\x81\x83\x02\xb4\x06\x08\x81\x87\x02\xb3\x06"
  "\x06\x81\x85\x02\xb2\x06\x04\x83\x02\x29\x41\xe2\x01\x02\x8e\x01"
  "\x12\x63\x6c\x65\x61\x72\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74"
  "\x73\x21\x11\x72\x65\x61\x6c\x2d\x74\x69\x6d\x65\x72\x2d\x63\x6c"
  "\x65\x61\x72\x02\x30\x02\x30\xf5\x01\x03\xca\x06\x0c\x81\x81\x02"
  "\xc9\x06\x0a\x81\x81\x02\xc8\x06\x08\x81\x81\x02\xc7\x06\x06\x81"
  "\x81\x02\xc6\x06\x04\x82\x02\x0b\x17\xf5\x01\x02\x8f\x01\x02\x02"
  "\xcb\x06\x04\x82\x02\x03\xf6\x01\x02\x90\x01\x0c\xcc\x06\x04\x83"
  "\x04\x03\xf7\x01\x02\x91\x01\x0c\xcd\x06\x04\x83\x04\x03\xf8\x01"
  "\x02\x92\x01\x19\x02\xce\x06\x04\x84\x06\x03\xf9\x01\x02\x93\x01"
  "\x0c\x24\x07\x2e\x74\x61\x67\x2e\x35\xfa\x01\x02\xd2\x06\x0a\x81"
  "\x85\x02\xd1\x06\x08\x81\x83\x02\xd0\x06\x06\x81\x83\x02\xcf\x06"
  "\x04\x83\x04\x09\x12\xfb\x01\x02\x94\x01\x02\x0d\x74\x68\x72\x65"
  "\x61\x64\x2d\x6d\x75\x74\x65\x78\xfc\x01\x03\x0e\x74\x68\x72\x65"
  "\x61\x64\x2d\x6d\x75\x74\x65\x78\x3f\xfd\x01\x05\x29\x03\xd4\x06"
  "\x06\x81\x85\x02\xd3\x06\x04\x84\x06\x05\x0f\xfe\x01\x02\x95\x01"
  "\x0c\xfc\x01\x53\x03\xfd\x01\x05\x29\x03\xd7\x06\x08\x81\x83\x02"
  "\xd6\x06\x06\x81\x83\x02\xd5\x06\x04\x83\x04\x07\x13\xff\x01\x02"
  "\x96\x01\x12\x6c\x6f\x63\x6b\x20\x74\x68\x72\x65\x61\x64\x20\x6d"
  "\x75\x74\x65\x78\x0c\x3d\xfc\x01\x12\x6c\x6f\x63\x6b\x2d\x74\x68"
  "\x72\x65\x61\x64\x2d\x6d\x75\x74\x65\x78\x80\x02\x3e\x80\x02\x03"
  "\x03\xfd\x01\x05\x29\x02\x55\x06\x80\x01\x05\x13\x25\x6c\x6f\x63"
  "\x6b\x2d\x74\x68\x72\x65\x61\x64\x2d\x6d\x75\x74\x65\x78\x81\x02"
  "\x06\xe2\x06\x18\x81\x87\x02\xe1\x06\x16\x81\x89\x02\xe0\x06\x14"
  "\x81\x89\x02\xdf\x06\x12\x81\x85\x02\xde\x06\x10\x81\x85\x02\xdd"
  "\x06\x0e\x81\x87\x02\xdc\x06\x0c\x81\x83\x02\xdb\x06\x0a\x81\x85"
  "\x02\xda\x06\x08\x81\x83\x02\xd9\x06\x06\x81\x83\x02\xd8\x06\x04"
  "\x83\x04\x17\x2e\x82\x02\x02\x97\x01\x02\x19\x0c\x0c\x04\xd4\x01"
  "\x02\x65\x03\xea\x06\x12\x81\x87\x02\xe9\x06\x10\x81\x87\x02\xe8"
  "\x06\x0e\x81\x87\x02\xe7\x06\x0c\x81\x87\x02\xe6\x06\x0a\x81\x8b"
  "\x02\xe5\x06\x08\x81\x87\x02\xe4\x06\x06\x81\x87\x02\xe3\x06\x04"
  "\x85\x08\x11\x20\x83\x02\x02\x98\x01\x0c\x11\x44\x6f\x6e\x27\x74"
  "\x20\x6f\x77\x6e\x20\x6d\x75\x74\x65\x78\x3a\x3d\xfc\x01\x14\x75"
  "\x6e\x6c\x6f\x63\x6b\x2d\x74\x68\x72\x65\x61\x64\x2d\x6d\x75\x74"
  "\x65\x78\x84\x02\x3e\x02\x03\xfd\x01\x05\x29\x04\x50\x04\x15\x25"
  "\x75\x6e\x6c\x6f\x63\x6b\x2d\x74\x68\x72\x65\x61\x64\x2d\x6d\x75"
  "\x74\x65\x78\x50\x02\x55\x06\xf4\x06\x16\x81\x87\x02\xf3\x06\x14"
  "\x81\x85\x02\xf2\x06\x12\x81\x87\x02\xf1\x06\x10\x81\x83\x02\xf0"
  "\x06\x0e\x81\x83\x02\xef\x06\x0c\x81\x83\x02\xee\x06\x0a\x81\x85"
  "\x02\xed\x06\x08\x81\x83\x02\xec\x06\x06\x81\x83\x02\xeb\x06\x04"
  "\x83\x04\x15\x2b\x85\x02\x02\x99\x01\x02\x19\x0c\x0c\x04\x86\x01"
  "\x03\x16\x25\x25\x75\x6e\x6c\x6f\x63\x6b\x2d\x74\x68\x72\x65\x61"
  "\x64\x2d\x6d\x75\x74\x65\x78\x86\x02\x02\x5b\x04\xf9\x06\x0c\x81"
  "\x85\x02\xf8\x06\x0a\x81\x85\x02\xf7\x06\x08\x81\x85\x02\xf6\x06"
  "\x06\x81\x87\x02\xf5\x06\x04\x84\x06\x0b\x19\x87\x02\x02\x9a\x01"
  "\x19\x0c\x04\xd6\x01\x04\x6e\x03\xfe\x06\x0c\x81\x85\x02\xfd\x06"
  "\x0a\x81\x83\x02\xfc\x06\x08\x81\x85\x02\xfb\x06\x06\x81\x87\x02"
  "\xfa\x06\x04\x83\x04\x0b\x17\x88\x02\x02\x9b\x01\x0c\x0c\x19\x3d"
  "\xfc\x01\x16\x74\x72\x79\x2d\x6c\x6f\x63\x6b\x2d\x74\x68\x72\x65"
  "\x61\x64\x2d\x6d\x75\x74\x65\x78\x3d\x3e\x02\x03\xfd\x01\x05\x29"
  "\x02\x55\x04\x89\x07\x18\x81\x87\x02\x88\x07\x16\x81\x85\x02\x87"
  "\x07\x14\x81\x83\x02\x86\x07\x12\x81\x87\x02\x85\x07\x10\x81\x87"
  "\x02\x84\x07\x0e\x81\x87\x02\x83\x07\x0c\x81\x85\x02\x82\x07\x0a"
  "\x81\x85\x02\x81\x07\x08\x81\x83\x02\x80\x07\x06\x81\x83\x02\xff"
  "\x06\x04\x83\x04\x17\x2b\x3e\x02\x9c\x01\x02\x0c\xfc\x01\x19\x77"
  "\x69\x74\x68\x2d\x74\x68\x72\x65\x61\x64\x2d\x6d\x75\x74\x65\x78"
  "\x2d\x6c\x6f\x63\x6b\x65\x64\xfc\x01\x03\xfd\x01\x05\x29\x02\x55"
  "\x05\xac\x01\x05\x81\x02\x04\x50\x07\x91\x07\x12\x81\x83\x02\x90"
  "\x07\x10\x81\x83\x02\x8f\x07\x0e\x81\x83\x02\x8e\x07\x0c\x81\x83"
  "\x02\x8d\x07\x0a\x81\x87\x02\x8c\x07\x08\x81\x85\x02\x8b\x07\x06"
  "\x81\x85\x02\x8a\x07\x04\x84\x06\x11\x27\xac\x01\x02\x9d\x01\x84"
  "\x01\x19\x02\x85\x01\x0c\x0c\x03\x86\x02\x04\x11\x72\x69\x6e\x67"
  "\x2f\x72\x65\x6d\x6f\x76\x65\x2d\x69\x74\x65\x6d\x85\x01\x03\x99"
  "\x07\x12\x81\x87\x02\x98\x07\x10\x81\x87\x02\x97\x07\x0e\x81\x83"
  "\x02\x96\x07\x0c\x81\x83\x02\x95\x07\x0a\x81\x89\x02\x94\x07\x08"
  "\x81\x85\x02\x93\x07\x06\x81\x83\x02\x92\x07\x04\x83\x04\x11\x23"
  "\x84\x01\x02\x9e\x01\x19\x02\x0c\x0c\x9b\x07\x06\x81\x87\x02\x9a"
  "\x07\x04\x84\x06\x05\x0c\x29\x02\x9f\x01\x19\x02\x0c\x0c\x04\x86"
  "\x01\x02\x9e\x07\x08\x81\x87\x02\x9d\x07\x06\x81\x89\x02\x9c\x07"
  "\x04\x84\x06\x07\x11\x86\x01\x02\xa0\x01\x0c\x9f\x07\x04\x83\x04"
  "\x03\x89\x02\x02\xa1\x01\x0c\xa0\x07\x04\x83\x04\x03\x8a\x02\x02"
  "\xa2\x01\x0c\xa1\x07\x04\x83\x04\x03\x8b\x02\x02\xa3\x01\x19\x02"
  "\xa2\x07\x04\x84\x06\x03\x8c\x02\x02\xa4\x01\x19\x02\xa3\x07\x04"
  "\x84\x06\x03\x8d\x02\x02\xa5\x01\x19\x02\xa4\x07\x04\x84\x06\x03"
  "\x8e\x02\x02\xa6\x01\x0c\x24\x07\x2e\x74\x61\x67\x2e\x36\x24\x02"
  "\xa8\x07\x0a\x81\x85\x02\xa7\x07\x08\x81\x83\x02\xa6\x07\x06\x81"
  "\x83\x02\xa5\x07\x04\x83\x04\x09\x12\x8f\x02\x02\xa7\x01\x19\x05"
  "\x0a\x6d\x61\x6b\x65\x2d\x6c\x69\x6e\x6b\x90\x02\x02\xac\x07\x0a"
  "\x81\x83\x02\xab\x07\x08\x81\x83\x02\xaa\x07\x06\x81\x81\x02\xa9"
  "\x07\x04\x82\x02\x09\x12\x91\x02\x02\xa8\x01\x0c\xae\x07\x06\x81"
  "\x83\x02\xad\x07\x04\x83\x04\x05\x0b\x92\x02\x02\xa9\x01\x02\x19"
  "\x0c\x05\x90\x02\x02\xb2\x07\x0a\x81\x89\x02\xb1\x07\x08\x81\x87"
  "\x02\xb0\x07\x06\x81\x85\x02\xaf\x07\x04\x84\x06\x09\x14\x93\x02"
  "\x02\xaa\x01\x19\x0c\xb7\x07\x0c\x81\x83\x02\xb6\x07\x0a\x81\x89"
  "\x02\xb5\x07\x08\x81\x85\x02\xb4\x07\x06\x84\x06\xb3\x07\x04\x81"
  "\x87\x02\x0b\x13\x94\x02\x02\xab\x01\x02\x19\xb9\x07\x06\x81\x83"
  "\x02\xb8\x07\x04\x83\x04\x05\x0c\x95\x02\x02\xac\x01\x02\x19\x0c"
  "\xc1\x07\x12\x81\x87\x02\xc0\x07\x10\x81\x85\x02\xbf\x07\x0e\x81"
  "\x87\x02\xbe\x07\x0c\x81\x87\x02\xbd\x07\x0a\x81\x87\x02\xbc\x07"
  "\x08\x81\x87\x02\xbb\x07\x06\x81\x85\x02\xba\x07\x04\x84\x06\x11"
  "\x1a\x96\x02\x02\xad\x01\x0c\xc4\x07\x08\x81\x85\x02\xc3\x07\x06"
  "\x81\x83\x02\xc2\x07\x04\x83\x04\x07\x0e\x97\x02\x02\xae\x01\x0c"
  "\xc6\x07\x06\x81\x83\x02\xc5\x07\x04\x83\x04\x05\x0b\x98\x02\x02"
  "\xaf\x01\x19\x02\x0c\xc8\x07\x06\x81\x85\x02\xc7\x07\x04\x84\x06"
  "\x05\x0d\x19\x02\xb0\x01\x15\x20\x62\x65\x63\x61\x75\x73\x65\x20"
  "\x69\x74\x20\x69\x73\x20\x64\x65\x61\x64\x2e\x13\x4e\x6f\x20\x63"
  "\x75\x72\x72\x65\x6e\x74\x20\x74\x68\x72\x65\x61\x64\x21\x02\x09"
  "\x20\x74\x68\x72\x65\x61\x64\x20\x12\x6e\x6f\x2d\x63\x75\x72\x72"
  "\x65\x6e\x74\x2d\x74\x68\x72\x65\x61\x64\x05\x76\x65\x72\x62\x0c"
  "\x0b\x55\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20\x07\x74\x68\x72\x65"
  "\x61\x64\x0c\x09\x6f\x70\x65\x72\x61\x74\x6f\x72\x99\x02\x09\x6f"
  "\x70\x65\x72\x61\x6e\x64\x73\x9a\x02\x0c\x74\x68\x72\x65\x61\x64"
  "\x2d\x64\x65\x61\x64\x0c\x99\x02\x9a\x02\x22\x41\x74\x74\x65\x6d"
  "\x70\x74\x20\x74\x6f\x20\x6a\x6f\x69\x6e\x20\x64\x65\x74\x61\x63"
  "\x68\x65\x64\x20\x74\x68\x72\x65\x61\x64\x3a\x20\x10\x74\x68\x72"
  "\x65\x61\x64\x2d\x64\x65\x74\x61\x63\x68\x65\x64\x08\x6f\x70\x65"
  "\x72\x61\x6e\x64\x9a\x02\x03\x3a\x20\x99\x02\x0c\x64\x65\x73\x63"
  "\x72\x69\x70\x74\x69\x6f\x6e\x0c\x02\x2e\x23\x44\x65\x61\x64\x6c"
  "\x6f\x63\x6b\x20\x64\x65\x74\x65\x63\x74\x65\x64\x20\x77\x68\x69"
  "\x6c\x65\x20\x74\x72\x79\x69\x6e\x67\x20\x74\x6f\x20\x0c\x99\x02"
  "\x9a\x02\x10\x74\x68\x72\x65\x61\x64\x2d\x64\x65\x61\x64\x6c\x6f"
  "\x63\x6b\x0c\x99\x02\x9a\x02\x21\x41\x6e\x6f\x6e\x79\x6d\x6f\x75"
  "\x73\x20\x65\x72\x72\x6f\x72\x20\x61\x73\x73\x6f\x63\x69\x61\x74"
  "\x65\x64\x20\x77\x69\x74\x68\x20\x15\x74\x68\x72\x65\x61\x64\x2d"
  "\x63\x6f\x6e\x74\x72\x6f\x6c\x2d\x65\x72\x72\x6f\x72\x24\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x74\x68\x72"
  "\x65\x61\x64\x2d\x63\x6f\x6e\x74\x72\x6f\x6c\x2d\x65\x72\x72\x6f"
  "\x72\x9a\x02\x1c\x74\x68\x72\x65\x61\x64\x2d\x63\x6f\x6e\x74\x72"
  "\x6f\x6c\x2d\x65\x72\x72\x6f\x72\x2f\x74\x68\x72\x65\x61\x64\x99"
  "\x02\x1f\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65"
  "\x3a\x74\x68\x72\x65\x61\x64\x2d\x64\x65\x61\x64\x6c\x6f\x63\x6b"
  "\x0c\x80\x01\x1c\x74\x68\x72\x65\x61\x64\x2d\x64\x65\x61\x64\x6c"
  "\x6f\x63\x6b\x2f\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x9b"
  "\x02\x19\x74\x68\x72\x65\x61\x64\x2d\x64\x65\x61\x64\x6c\x6f\x63"
  "\x6b\x2f\x6f\x70\x65\x72\x61\x74\x6f\x72\x9c\x02\x18\x74\x68\x72"
  "\x65\x61\x64\x2d\x64\x65\x61\x64\x6c\x6f\x63\x6b\x2f\x6f\x70\x65"
  "\x72\x61\x6e\x64\x9d\x02\x1f\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e"
  "\x2d\x74\x79\x70\x65\x3a\x74\x68\x72\x65\x61\x64\x2d\x64\x65\x74"
  "\x61\x63\x68\x65\x64\x9e\x02\x81\x01\x1b\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x74\x68\x72\x65\x61\x64\x2d"
  "\x64\x65\x61\x64\x9f\x02\x27\x11\x74\x68\x72\x65\x61\x64\x2d\x64"
  "\x65\x61\x64\x2f\x76\x65\x72\x62\xa0\x02\x46\x0e\x1d\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x63\x6f\x6e\x74"
  "\x72\x6f\x6c\x2d\x65\x72\x72\x6f\x72\x9a\x02\x17\x73\x74\x61\x6e"
  "\x64\x61\x72\x64\x2d\x65\x72\x72\x6f\x72\x2d\x68\x61\x6e\x64\x6c"
  "\x65\x72\x0c\x9e\x02\x9f\x02\x07\x06\x14\x6d\x61\x6b\x65\x2d\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x04\x13\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x61\x63\x63\x65\x73\x73\x6f"
  "\x72\x04\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x03"
  "\x99\x02\x05\x14\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x73\x69"
  "\x67\x6e\x61\x6c\x6c\x65\x72\x04\xc7\x01\x03\x9b\x02\x03\x9d\x02"
  "\x03\xa0\x02\x0a\x8b\x08\x88\x01\x81\x89\x02\x8a\x08\x86\x01\x81"
  "\x85\x02\x89\x08\x84\x01\x81\x85\x02\x88\x08\x82\x01\x84\x06\x87"
  "\x08\x80\x01\x81\x81\x02\x86\x08\x7e\x81\x81\x02\x85\x08\x7c\x81"
  "\x89\x02\x84\x08\x7a\x81\x85\x02\x83\x08\x78\x81\x87\x02\x82\x08"
  "\x76\x81\x81\x02\x81\x08\x74\x81\x81\x02\x80\x08\x72\x81\x8b\x02"
  "\xff\x07\x70\x81\x85\x02\xfe\x07\x6e\x81\x85\x02\xfd\x07\x6c\x81"
  "\x81\x02\xfc\x07\x6a\x81\x81\x02\xfb\x07\x68\x81\x89\x02\xfa\x07"
  "\x66\x81\x85\x02\xf9\x07\x64\x84\x06\xf8\x07\x62\x81\x87\x02\xf7"
  "\x07\x60\x81\x83\x02\xf6\x07\x5e\x81\x81\x02\xf5\x07\x5c\x81\x81"
  "\x02\xf4\x07\x5a\x81\x85\x02\xf3\x07\x58\x81\x87\x02\xf2\x07\x56"
  "\x81\x81\x02\xf1\x07\x54\x81\x81\x02\xf0\x07\x52\x84\x06\xef\x07"
  "\x50\x81\x87\x02\xee\x07\x4e\x81\x83\x02\xed\x07\x4c\x81\x81\x02"
  "\xec\x07\x4a\x81\x81\x02\xeb\x07\x48\x81\x89\x02\xea\x07\x46\x81"
  "\x85\x02\xe9\x07\x44\x81\x87\x02\xe8\x07\x42\x81\x81\x02\xe7\x07"
  "\x40\x81\x81\x02\xe6\x07\x3e\x81\x85\x02\xe5\x07\x3c\x81\x85\x02"
  "\xe4\x07\x3a\x81\x81\x02\xe3\x07\x38\x81\x81\x02\xe2\x07\x36\x81"
  "\x89\x02\xe1\x07\x34\x81\x85\x02\xe0\x07\x32\x81\x85\x02\xdf\x07"
  "\x30\x81\x81\x02\xde\x07\x2e\x81\x81\x02\xdd\x07\x2c\x81\x85\x02"
  "\xdc\x07\x2a\x81\x85\x02\xdb\x07\x28\x81\x81\x02\xda\x07\x26\x81"
  "\x81\x02\xd9\x07\x24\x81\x89\x02\xd8\x07\x22\x81\x85\x02\xd7\x07"
  "\x20\x84\x06\xd6\x07\x1e\x81\x87\x02\xd5\x07\x1c\x81\x83\x02\xd4"
  "\x07\x1a\x81\x81\x02\xd3\x07\x18\x81\x81\x02\xd2\x07\x16\x81\x85"
  "\x02\xd1\x07\x14\x81\x87\x02\xd0\x07\x12\x81\x81\x02\xcf\x07\x10"
  "\x81\x81\x02\xce\x07\x0e\x84\x06\xcd\x07\x0c\x81\x85\x02\xcc\x07"
  "\x0a\x81\x81\x02\xcb\x07\x08\x81\x81\x02\xca\x07\x06\x81\x87\x02"
  "\xc9\x07\x04\x82\x02\x87\x01\xcc\x01\xc7\x01\xb0\x01\xa1\x02\xa1"
  "\x02\x24\xc7\x01\x04\x19\x04\x98\x02\x04\x97\x02\x04\x96\x02\x04"
  "\x95\x02\x04\x94\x02\x06\x93\x02\x04\x92\x02\x04\x91\x02\x04\x8f"
  "\x02\x04\x19\x35\x46\xa0\x02\x27\x9f\x02\x81\x01\x9e\x02\x9d\x02"
  "\x9c\x02\x9b\x02\x80\x01\x0c\x99\x02\x9a\x02\xd2\x01\xd3\x01\xd1"
  "\x01\x85\x01\x6f\xd6\x01\xd4\x01\x0c\x72\x69\x6e\x67\x2f\x65\x6d"
  "\x70\x74\x79\x3f\x06\x6c\x69\x6e\x6b\x3f\x19\x90\x02\x0f\x73\x65"
  "\x74\x2d\x6c\x69\x6e\x6b\x2f\x69\x74\x65\x6d\x21\x0f\x73\x65\x74"
  "\x2d\x6c\x69\x6e\x6b\x2f\x6e\x65\x78\x74\x21\x0f\x73\x65\x74\x2d"
  "\x6c\x69\x6e\x6b\x2f\x70\x72\x65\x76\x21\x0a\x6c\x69\x6e\x6b\x2f"
  "\x69\x74\x65\x6d\x0a\x6c\x69\x6e\x6b\x2f\x6e\x65\x78\x74\x0a\x6c"
  "\x69\x6e\x6b\x2f\x70\x72\x65\x76\x8e\x02\x04\x8d\x02\x04\x8c\x02"
  "\x04\x8b\x02\x04\x8a\x02\x04\x89\x02\x04\x09\x72\x74\x64\x3a\x6c"
  "\x69\x6e\x6b\xa1\x02\x05\x6c\x69\x6e\x6b\x05\x70\x72\x65\x76\xa0"
  "\x02\x05\x6e\x65\x78\x74\x9f\x02\x05\x69\x74\x65\x6d\xfa\x01\x15"
  "\x72\x65\x6d\x6f\x76\x65\x2d\x74\x68\x72\x65\x61\x64\x2d\x6d\x75"
  "\x74\x65\x78\x21\x12\x61\x64\x64\x2d\x74\x68\x72\x65\x61\x64\x2d"
  "\x6d\x75\x74\x65\x78\x21\x7b\xfc\x01\x3d\x86\x02\x50\x84\x02\x81"
  "\x02\x80\x02\x53\x17\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x74"
  "\x68\x72\x65\x61\x64\x2d\x6d\x75\x74\x65\x78\xfd\x01\x0e\x86\x01"
  "\x04\x29\x04\x84\x01\x04\xac\x01\x04\x3e\x04\x88\x02\x04\x87\x02"
  "\x04\x85\x02\x04\x83\x02\x04\x82\x02\x04\xff\x01\x04\xfe\x01\x04"
  "\xfb\x01\x04\x0e\x12\x6d\x61\x6b\x65\x2d\x74\x68\x72\x65\x61\x64"
  "\x2d\x6d\x75\x74\x65\x78\x18\x73\x65\x74\x2d\x74\x68\x72\x65\x61"
  "\x64\x2d\x6d\x75\x74\x65\x78\x2f\x6f\x77\x6e\x65\x72\x21\x13\x74"
  "\x68\x72\x65\x61\x64\x2d\x6d\x75\x74\x65\x78\x2f\x6f\x77\x6e\x65"
  "\x72\x1d\x74\x68\x72\x65\x61\x64\x2d\x6d\x75\x74\x65\x78\x2f\x77"
  "\x61\x69\x74\x69\x6e\x67\x2d\x74\x68\x72\x65\x61\x64\x73\xf9\x01"
  "\x04\xf8\x01\x04\xf7\x01\x04\x11\x72\x74\x64\x3a\x74\x68\x72\x65"
  "\x61\x64\x2d\x6d\x75\x74\x65\x78\x9e\x02\x0d\x74\x68\x72\x65\x61"
  "\x64\x2d\x6d\x75\x74\x65\x78\x10\x77\x61\x69\x74\x69\x6e\x67\x2d"
  "\x74\x68\x72\x65\x61\x64\x73\x06\x6f\x77\x6e\x65\x72\xf6\x01\x04"
  "\xe0\x01\xf2\x01\x5b\x1a\x77\x69\x74\x68\x2d\x74\x68\x72\x65\x61"
  "\x64\x2d\x74\x69\x6d\x65\x72\x2d\x73\x74\x6f\x70\x70\x65\x64\x34"
  "\x13\x73\x74\x61\x72\x74\x2d\x74\x68\x72\x65\x61\x64\x2d\x74\x69"
  "\x6d\x65\x72\xef\x01\x16\x74\x68\x72\x65\x61\x64\x2d\x74\x69\x6d"
  "\x65\x72\x2d\x69\x6e\x74\x65\x72\x76\x61\x6c\x79\x16\x64\x65\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x2d\x61\x6c\x6c\x2d\x65\x76\x65\x6e"
  "\x74\x73\x1e\x74\x68\x72\x65\x61\x64\x73\x2d\x70\x65\x6e\x64\x69"
  "\x6e\x67\x2d\x74\x69\x6d\x65\x72\x2d\x65\x76\x65\x6e\x74\x73\x3f"
  "\xe9\x01\x71\x15\x73\x6c\x65\x65\x70\x2d\x63\x75\x72\x72\x65\x6e"
  "\x74\x2d\x74\x68\x72\x65\x61\x64\xe5\x01\xea\x01\x10\xf5\x01\x04"
  "\xe2\x01\x04\xf4\x01\x04\xf3\x01\x04\xf1\x01\x04\xf0\x01\x06\xee"
  "\x01\x04\xed\x01\x04\x39\x04\xec\x01\x04\xeb\x01\x04\xe8\x01\x04"
  "\xe7\x01\x04\xe4\x01\x04\xe1\x01\x04\x10\xe3\x01\x17\x73\x65\x74"
  "\x2d\x74\x69\x6d\x65\x72\x2d\x72\x65\x63\x6f\x72\x64\x2f\x6e\x65"
  "\x78\x74\x21\x18\x73\x65\x74\x2d\x74\x69\x6d\x65\x72\x2d\x72\x65"
  "\x63\x6f\x72\x64\x2f\x65\x76\x65\x6e\x74\x21\x19\x73\x65\x74\x2d"
  "\x74\x69\x6d\x65\x72\x2d\x72\x65\x63\x6f\x72\x64\x2f\x74\x68\x72"
  "\x65\x61\x64\x21\x12\x74\x69\x6d\x65\x72\x2d\x72\x65\x63\x6f\x72"
  "\x64\x2f\x6e\x65\x78\x74\x13\x74\x69\x6d\x65\x72\x2d\x72\x65\x63"
  "\x6f\x72\x64\x2f\x65\x76\x65\x6e\x74\x14\x74\x69\x6d\x65\x72\x2d"
  "\x72\x65\x63\x6f\x72\x64\x2f\x74\x68\x72\x65\x61\x64\x12\x74\x69"
  "\x6d\x65\x72\x2d\x72\x65\x63\x6f\x72\x64\x2f\x74\x69\x6d\x65\xdf"
  "\x01\x04\xde\x01\x04\xdd\x01\x04\xdc\x01\x04\xdb\x01\x04\xda\x01"
  "\x04\xd9\x01\x04\x11\x72\x74\x64\x3a\x74\x69\x6d\x65\x72\x2d\x72"
  "\x65\x63\x6f\x72\x64\x9d\x02\x0d\x74\x69\x6d\x65\x72\x2d\x72\x65"
  "\x63\x6f\x72\x64\x05\x74\x69\x6d\x65\x06\x65\x76\x65\x6e\x74\x9c"
  "\x02\x9f\x02\xa0\x01\x32\x31\x1c\x61\x6c\x6c\x6f\x77\x2d\x74\x68"
  "\x72\x65\x61\x64\x2d\x65\x76\x65\x6e\x74\x2d\x64\x65\x6c\x69\x76"
  "\x65\x72\x79\x63\xce\x01\x6e\x4f\x18\x73\x65\x74\x2d\x74\x68\x72"
  "\x65\x61\x64\x2d\x65\x76\x65\x6e\x74\x2d\x62\x6c\x6f\x63\x6b\x21"
  "\x17\x67\x65\x74\x2d\x74\x68\x72\x65\x61\x64\x2d\x65\x76\x65\x6e"
  "\x74\x2d\x62\x6c\x6f\x63\x6b\xa7\x01\xcf\x01\x2b\xb0\x01\xca\x01"
  "\xaa\x01\xb7\x01\x78\xbb\x01\xae\x01\x1a\x25\x64\x65\x72\x65\x67"
  "\x69\x73\x74\x65\x72\x2d\x69\x6f\x2d\x64\x65\x73\x63\x72\x69\x70"
  "\x74\x6f\x72\xbd\x01\xb9\x01\xb3\x01\xb5\x01\xb2\x01\xad\x01\x17"
  "\x62\x6c\x6f\x63\x6b\x2d\x6f\x6e\x2d\x69\x6f\x2d\x64\x65\x73\x63"
  "\x72\x69\x70\x74\x6f\x72\x68\x45\x5f\x33\xba\x01\x21\xd8\x01\x04"
  "\xd7\x01\x04\xd5\x01\x04\x57\x04\xd0\x01\x04\xcd\x01\x04\xcc\x01"
  "\x04\xcb\x01\x04\xa8\x01\x04\xa9\x01\x04\xbe\x01\x06\xbf\x01\x04"
  "\xc8\x01\x04\xc9\x01\x04\xc6\x01\x04\xc5\x01\x04\xc4\x01\x04\xc1"
  "\x01\x04\xc0\x01\x04\xbc\x01\x04\xb8\x01\x04\xb6\x01\x04\xb4\x01"
  "\x04\xb1\x01\x04\xaf\x01\x04\xa5\x01\x04\xab\x01\x04\xa6\x01\x04"
  "\xa4\x01\x06\xa1\x01\x04\x21\xc2\x01\x11\x73\x65\x74\x2d\x74\x65"
  "\x6e\x74\x72\x79\x2f\x6e\x65\x78\x74\x21\x11\x73\x65\x74\x2d\x74"
  "\x65\x6e\x74\x72\x79\x2f\x70\x72\x65\x76\x21\x12\x73\x65\x74\x2d"
  "\x74\x65\x6e\x74\x72\x79\x2f\x65\x76\x65\x6e\x74\x21\x13\x73\x65"
  "\x74\x2d\x74\x65\x6e\x74\x72\x79\x2f\x74\x68\x72\x65\x61\x64\x21"
  "\x13\x73\x65\x74\x2d\x74\x65\x6e\x74\x72\x79\x2f\x64\x65\x6e\x74"
  "\x72\x79\x21\x0c\x74\x65\x6e\x74\x72\x79\x2f\x6e\x65\x78\x74\x0c"
  "\x74\x65\x6e\x74\x72\x79\x2f\x70\x72\x65\x76\x12\x74\x65\x6e\x74"
  "\x72\x79\x2f\x70\x65\x72\x6d\x61\x6e\x65\x6e\x74\x3f\x0d\x74\x65"
  "\x6e\x74\x72\x79\x2f\x65\x76\x65\x6e\x74\x0e\x74\x65\x6e\x74\x72"
  "\x79\x2f\x74\x68\x72\x65\x61\x64\x0e\x74\x65\x6e\x74\x72\x79\x2f"
  "\x64\x65\x6e\x74\x72\x79\x0c\x9f\x01\x04\x9e\x01\x04\x9d\x01\x04"
  "\x9c\x01\x04\x9b\x01\x04\x9a\x01\x04\x99\x01\x04\x98\x01\x04\x97"
  "\x01\x04\x96\x01\x04\x95\x01\x04\x0c\x0b\x72\x74\x64\x3a\x74\x65"
  "\x6e\x74\x72\x79\x9b\x02\x08\x64\x65\x6e\x74\x72\x79\x3f\x94\x01"
  "\x04\x93\x01\x07\x74\x65\x6e\x74\x72\x79\x07\x64\x65\x6e\x74\x72"
  "\x79\x9c\x02\x0b\x70\x65\x72\x6d\x61\x6e\x65\x6e\x74\x3f\xa0\x02"
  "\x9f\x02\x0d\xc3\x01\x11\x73\x65\x74\x2d\x64\x65\x6e\x74\x72\x79"
  "\x2f\x6e\x65\x78\x74\x21\x11\x73\x65\x74\x2d\x64\x65\x6e\x74\x72"
  "\x79\x2f\x70\x72\x65\x76\x21\x18\x73\x65\x74\x2d\x64\x65\x6e\x74"
  "\x72\x79\x2f\x6c\x61\x73\x74\x2d\x74\x65\x6e\x74\x72\x79\x21\x19"
  "\x73\x65\x74\x2d\x64\x65\x6e\x74\x72\x79\x2f\x66\x69\x72\x73\x74"
  "\x2d\x74\x65\x6e\x74\x72\x79\x21\x0c\x64\x65\x6e\x74\x72\x79\x2f"
  "\x6e\x65\x78\x74\x0c\x64\x65\x6e\x74\x72\x79\x2f\x70\x72\x65\x76"
  "\x13\x64\x65\x6e\x74\x72\x79\x2f\x6c\x61\x73\x74\x2d\x74\x65\x6e"
  "\x74\x72\x79\x14\x64\x65\x6e\x74\x72\x79\x2f\x66\x69\x72\x73\x74"
  "\x2d\x74\x65\x6e\x74\x72\x79\x0c\x64\x65\x6e\x74\x72\x79\x2f\x6d"
  "\x6f\x64\x65\x12\x64\x65\x6e\x74\x72\x79\x2f\x64\x65\x73\x63\x72"
  "\x69\x70\x74\x6f\x72\x0b\x92\x01\x04\x91\x01\x04\x90\x01\x04\x8f"
  "\x01\x04\x8e\x01\x04\x8d\x01\x04\x8c\x01\x04\x8b\x01\x04\x8a\x01"
  "\x04\x89\x01\x04\x0b\x0c\x0b\x72\x74\x64\x3a\x64\x65\x6e\x74\x72"
  "\x79\x9c\x02\x7f\x7f\x08\x07\x64\x65\x6e\x74\x72\x79\x0b\x64\x65"
  "\x73\x63\x72\x69\x70\x74\x6f\x72\x05\x6d\x6f\x64\x65\x0d\x66\x69"
  "\x72\x73\x74\x2d\x74\x65\x6e\x74\x72\x79\x0c\x6c\x61\x73\x74\x2d"
  "\x74\x65\x6e\x74\x72\x79\xa0\x02\x9f\x02\x25\xa3\x01\xa2\x01\x7a"
  "\x7c\x37\x7e\x49\x1e\x73\x65\x74\x2d\x74\x68\x72\x65\x61\x64\x2d"
  "\x66\x6c\x6f\x61\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x21\x19\x74\x68\x72\x65\x61\x64\x2d\x66\x6c\x6f\x61\x74\x2d"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x75\x15\x79\x69\x65"
  "\x6c\x64\x2d\x63\x75\x72\x72\x65\x6e\x74\x2d\x74\x68\x72\x65\x61"
  "\x64\x1f\x74\x68\x72\x65\x61\x64\x2d\x74\x69\x6d\x65\x72\x2d\x69"
  "\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x68\x61\x6e\x64\x6c\x65\x72"
  "\x1d\x61\x6c\x6c\x6f\x77\x2d\x70\x72\x65\x65\x6d\x70\x74\x2d\x63"
  "\x75\x72\x72\x65\x6e\x74\x2d\x74\x68\x72\x65\x61\x64\x20\x64\x69"
  "\x73\x61\x6c\x6c\x6f\x77\x2d\x70\x72\x65\x65\x6d\x70\x74\x2d\x63"
  "\x75\x72\x72\x65\x6e\x74\x2d\x74\x68\x72\x65\x61\x64\x6c\x14\x73"
  "\x74\x6f\x70\x2d\x63\x75\x72\x72\x65\x6e\x74\x2d\x74\x68\x72\x65"
  "\x61\x64\x65\xe6\x01\x47\x60\x4e\x6a\x5a\x3b\x58\x17\x6f\x74\x68"
  "\x65\x72\x2d\x72\x75\x6e\x6e\x69\x6e\x67\x2d\x74\x68\x72\x65\x61"
  "\x64\x73\x3f\x4d\x67\x55\x4c\x1b\x63\x72\x65\x61\x74\x65\x2d\x74"
  "\x68\x72\x65\x61\x64\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69"
  "\x6f\x6e\x43\x41\x0d\x74\x68\x72\x65\x61\x64\x73\x2d\x6c\x69\x73"
  "\x74\x13\x77\x69\x74\x68\x6f\x75\x74\x2d\x69\x6e\x74\x65\x72\x72"
  "\x75\x70\x74\x73\x36\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65"
  "\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x44\x30\x2f\x2e\x2d\x0d\x74"
  "\x68\x72\x65\x61\x64\x2d\x64\x65\x61\x64\x3f\x11\x67\x75\x61\x72"
  "\x61\x6e\x74\x65\x65\x2d\x74\x68\x72\x65\x61\x64\x28\x2e\x88\x01"
  "\x04\x87\x01\x04\x83\x01\x04\x82\x01\x04\x7d\x04\x77\x04\x69\x04"
  "\x74\x06\x04\x76\x04\x73\x04\x72\x04\x70\x04\x6d\x04\x6b\x04\x66"
  "\x04\x64\x08\x62\x04\x61\x04\x5e\x04\x5d\x06\x5c\x04\x59\x04\x56"
  "\x04\x54\x04\x52\x04\x51\x04\x48\x04\x4b\x04\x4a\x0a\x42\x04\x40"
  "\x04\x3f\x04\x3c\x04\x38\x04\x2c\x04\x2a\x04\x26\x04\x2e\x3a\x14"
  "\x73\x65\x74\x2d\x74\x68\x72\x65\x61\x64\x2f\x6d\x75\x74\x65\x78"
  "\x65\x73\x21\x27\x73\x65\x74\x2d\x74\x68\x72\x65\x61\x64\x2f\x66"
  "\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x70\x6f\x69\x6e\x74\x2d\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x21\x1d\x73\x65\x74\x2d\x74"
  "\x68\x72\x65\x61\x64\x2f\x72\x6f\x6f\x74\x2d\x73\x74\x61\x74\x65"
  "\x2d\x70\x6f\x69\x6e\x74\x21\x17\x73\x65\x74\x2d\x74\x68\x72\x65"
  "\x61\x64\x2f\x65\x78\x69\x74\x2d\x76\x61\x6c\x75\x65\x21\x16\x73"
  "\x65\x74\x2d\x74\x68\x72\x65\x61\x64\x2f\x6a\x6f\x69\x6e\x65\x64"
  "\x2d\x74\x6f\x21\x1b\x73\x65\x74\x2d\x74\x68\x72\x65\x61\x64\x2f"
  "\x6a\x6f\x69\x6e\x65\x64\x2d\x74\x68\x72\x65\x61\x64\x73\x21\x1a"
  "\x73\x65\x74\x2d\x74\x68\x72\x65\x61\x64\x2f\x62\x6c\x6f\x63\x6b"
  "\x2d\x65\x76\x65\x6e\x74\x73\x3f\x21\x19\x73\x65\x74\x2d\x74\x68"
  "\x72\x65\x61\x64\x2f\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f"
  "\x6e\x21\x11\x73\x65\x74\x2d\x74\x68\x72\x65\x61\x64\x2f\x6e\x65"
  "\x78\x74\x21\x1c\x73\x65\x74\x2d\x74\x68\x72\x65\x61\x64\x2f\x65"
  "\x78\x65\x63\x75\x74\x69\x6f\x6e\x2d\x73\x74\x61\x74\x65\x21\x12"
  "\x74\x68\x72\x65\x61\x64\x2f\x70\x72\x6f\x70\x65\x72\x74\x69\x65"
  "\x73\x0f\x74\x68\x72\x65\x61\x64\x2f\x6d\x75\x74\x65\x78\x65\x73"
  "\x22\x74\x68\x72\x65\x61\x64\x2f\x66\x6c\x6f\x61\x74\x69\x6e\x67"
  "\x2d\x70\x6f\x69\x6e\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65"
  "\x6e\x74\x18\x74\x68\x72\x65\x61\x64\x2f\x72\x6f\x6f\x74\x2d\x73"
  "\x74\x61\x74\x65\x2d\x70\x6f\x69\x6e\x74\x12\x74\x68\x72\x65\x61"
  "\x64\x2f\x65\x78\x69\x74\x2d\x76\x61\x6c\x75\x65\x11\x74\x68\x72"
  "\x65\x61\x64\x2f\x6a\x6f\x69\x6e\x65\x64\x2d\x74\x6f\x16\x74\x68"
  "\x72\x65\x61\x64\x2f\x6a\x6f\x69\x6e\x65\x64\x2d\x74\x68\x72\x65"
  "\x61\x64\x73\x16\x74\x68\x72\x65\x61\x64\x2f\x70\x65\x6e\x64\x69"
  "\x6e\x67\x2d\x65\x76\x65\x6e\x74\x73\x15\x74\x68\x72\x65\x61\x64"
  "\x2f\x62\x6c\x6f\x63\x6b\x2d\x65\x76\x65\x6e\x74\x73\x3f\x14\x74"
  "\x68\x72\x65\x61\x64\x2f\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69"
  "\x6f\x6e\x0c\x74\x68\x72\x65\x61\x64\x2f\x6e\x65\x78\x74\x17\x74"
  "\x68\x72\x65\x61\x64\x2f\x65\x78\x65\x63\x75\x74\x69\x6f\x6e\x2d"
  "\x73\x74\x61\x74\x65\x17\x23\x04\x22\x04\x21\x04\x20\x04\x1f\x04"
  "\x1e\x04\x1d\x04\x1c\x04\x1b\x04\x1a\x04\x18\x04\x17\x04\x16\x04"
  "\x15\x04\x14\x04\x13\x04\x12\x04\x11\x04\x10\x04\x0f\x04\x0e\x04"
  "\x0d\x04\x17\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e"
  "\x6d\x65\x6e\x74\x0b\x72\x74\x64\x3a\x74\x68\x72\x65\x61\x64\xa0"
  "\x02\x07\x74\x68\x72\x65\x61\x64\x10\x65\x78\x65\x63\x75\x74\x69"
  "\x6f\x6e\x2d\x73\x74\x61\x74\x65\x9f\x02\x0d\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x0e\x62\x6c\x6f\x63\x6b\x2d\x65\x76"
  "\x65\x6e\x74\x73\x3f\x0f\x70\x65\x6e\x64\x69\x6e\x67\x2d\x65\x76"
  "\x65\x6e\x74\x73\x0f\x6a\x6f\x69\x6e\x65\x64\x2d\x74\x68\x72\x65"
  "\x61\x64\x73\x0a\x6a\x6f\x69\x6e\x65\x64\x2d\x74\x6f\x0b\x65\x78"
  "\x69\x74\x2d\x76\x61\x6c\x75\x65\x11\x72\x6f\x6f\x74\x2d\x73\x74"
  "\x61\x74\x65\x2d\x70\x6f\x69\x6e\x74\x1b\x66\x6c\x6f\x61\x74\x69"
  "\x6e\x67\x2d\x70\x6f\x69\x6e\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x08\x6d\x75\x74\x65\x78\x65\x73\x0b\x70\x72\x6f"
  "\x70\x65\x72\x74\x69\x65\x73\x0c\x04\x04\x04\x04\x09\x04\x0a\x04"
  "\x0b\x04\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d"
  "\x74\x79\x70\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70"
  "\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x05\x10"
  "\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x04"
  "\x23\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x65\x66"
  "\x61\x75\x6c\x74\x2d\x76\x61\x6c\x75\x65\x2d\x62\x79\x2d\x69\x6e"
  "\x64\x65\x78\x05\xa0\x02\x9c\x02\x9b\x02\x9d\x02\x9e\x02\xa1\x02"
  "\x08\x52\xa6\x01\x80\x80\x04\x51\xa4\x01\x81\x81\x02\x50\xa2\x01"
  "\x81\x81\x02\x4f\xa0\x01\x81\x85\x02\x4e\x9e\x01\x81\x83\x02\x4d"
  "\x9c\x01\x81\x89\x02\x4c\x9a\x01\x81\x87\x02\x4b\x98\x01\x81\x83"
  "\x02\x4a\x96\x01\x81\x85\x02\x49\x94\x01\x81\x83\x02\x48\x92\x01"
  "\x81\x85\x02\x47\x90\x01\x81\x87\x02\x46\x8e\x01\x81\x83\x02\x45"
  "\x8c\x01\x81\x83\x02\x44\x8a\x01\x81\x83\x02\x43\x88\x01\x81\x85"
  "\x02\x42\x86\x01\x81\x83\x02\x41\x84\x01\x81\x87\x02\x40\x82\x01"
  "\x81\x83\x02\x3f\x80\x01\x81\x87\x02\x3e\x7e\x81\x83\x02\x3d\x7c"
  "\x81\x85\x02\x3c\x7a\x81\x83\x02\x3b\x78\x81\x85\x02\x3a\x76\x81"
  "\x87\x02\x39\x74\x81\x83\x02\x38\x72\x81\x83\x02\x37\x70\x81\x85"
  "\x02\x36\x6e\x81\x83\x02\x35\x6c\x81\x8b\x02\x34\x6a\x81\x87\x02"
  "\x33\x68\x81\x83\x02\x32\x66\x81\x85\x02\x31\x64\x81\x83\x02\x30"
  "\x62\x81\x85\x02\x2f\x60\x81\x87\x02\x2e\x5e\x81\x83\x02\x2d\x5c"
  "\x81\x83\x02\x2c\x5a\x81\x85\x02\x2b\x58\x81\x83\x02\x2a\x56\x81"
  "\x89\x02\x29\x54\x81\x87\x02\x28\x52\x81\x83\x02\x27\x50\x81\x85"
  "\x02\x26\x4e\x81\x83\x02\x25\x4c\x81\x85\x02\x24\x4a\x81\x87\x02"
  "\x23\x48\x81\x83\x02\x22\x46\x81\x8f\x02\x21\x44\x81\x85\x02\x20"
  "\x42\x81\x83\x02\x1f\x40\x81\x93\x02\x1e\x3e\x81\x8d\x02\x1d\x3c"
  "\x81\x8f\x02\x1c\x3a\x81\x87\x02\x1b\x38\x81\x83\x02\x1a\x36\x81"
  "\x91\x02\x19\x34\x81\x8b\x02\x18\x32\x81\x85\x02\x17\x30\x81\x83"
  "\x02\x16\x2e\x81\x8f\x02\x15\x2c\x81\x89\x02\x14\x2a\x81\x87\x02"
  "\x13\x28\x81\x85\x02\x12\x26\x81\x87\x02\x11\x24\x81\x83\x02\x10"
  "\x22\x81\x8b\x02\x0f\x20\x81\x85\x02\x0e\x1e\x81\x83\x02\x0d\x1c"
  "\x81\x89\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x85\x02\x0a\x16\x81"
  "\x83\x02\x09\x14\x81\x87\x02\x08\x12\x81\x83\x02\x07\x10\x81\x87"
  "\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x83\x02"
  "\x03\x08\x81\x85\x02\x02\x06\x81\x87\x02\x01\x04\x81\x83\x02\xa5"
  "\x01\x82\x02";

SCHEME_OBJECT *
thread_so_data_8763fd0d6a6d4da7 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_thread_so_data_8763fd0d6a6d4da7 [0]))), (sizeof (prog_thread_so_data_8763fd0d6a6d4da7)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_95]));
}

DECLARE_COMPILED_DATA_NS ("thread.so", thread_so_data_8763fd0d6a6d4da7)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("thread.so", "b7880bd91fe97199")
