/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:28-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 8
#define DEBUGGING_LABEL_1_2 7
#define EXECUTE_CACHE_1_5 5
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_5]));

INVOKE_INTERFACE_TARGET_1
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
conpar_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stack_frame_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_type_3)
DEFLABEL (stack_frame_type_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
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
conpar_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stack_frame_elements_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_elements_3)
DEFLABEL (stack_frame_elements_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
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
conpar_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stack_frame_dynamic_state_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_dynamic_state_3)
DEFLABEL (stack_frame_dynamic_state_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
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
conpar_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stack_frame_block_thread_eventsP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_block_thread_eventsP_3)
DEFLABEL (stack_frame_block_thread_eventsP_0)
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
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
conpar_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stack_frame_interrupt_mask_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_interrupt_mask_3)
DEFLABEL (stack_frame_interrupt_mask_0)
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
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
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
conpar_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stack_frame_history_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_history_3)
DEFLABEL (stack_frame_history_0)
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
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
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
conpar_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stack_frame_previous_history_offset_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_previous_history_offset_3)
DEFLABEL (stack_frame_previous_history_offset_0)
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
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [8]);
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
conpar_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stack_frame_previous_history_control_point_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_previous_history_control_point_3)
DEFLABEL (stack_frame_previous_history_control_point_0)
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
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [9]);
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
conpar_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stack_frame_offset_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_offset_3)
DEFLABEL (stack_frame_offset_0)
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
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [10]);
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
conpar_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stack_frame_previous_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_previous_type_3)
DEFLABEL (stack_frame_previous_type_0)
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
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [11]);
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
conpar_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stack_frame__next_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame__next_3)
DEFLABEL (stack_frame__next_0)
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
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [12]);
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
conpar_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stack_frame_properties_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_properties_3)
DEFLABEL (stack_frame_properties_0)
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
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [13]);
  Rsp = (& (Rsp [2]));
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
conpar_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_stack_frame__nextB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_stack_frame__nextB_3)
DEFLABEL (set_stack_frame__nextB_0)
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
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [12]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_14_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define LABEL_15_7 9
#define ENVIRONMENT_LABEL_15_3 17
#define DEBUGGING_LABEL_15_2 16
#define OBJECT_15_3 15
#define OBJECT_15_2 14
#define OBJECT_15_1 13
#define OBJECT_15_0 12
#define FREE_REFERENCE_15_0 11
#define FREE_REFERENCES_LABEL_15_0 10
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto stack_frameP_4;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_15_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frameP_10)
DEFLABEL (stack_frameP_4)
  INTERRUPT_CHECK (26, LABEL_15_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
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
  Rvl = (current_block [OBJECT_15_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_15_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define ENVIRONMENT_LABEL_16_3 17
#define DEBUGGING_LABEL_16_2 16
#define OBJECT_16_2 15
#define OBJECT_16_1 14
#define OBJECT_16_0 13
#define EXECUTE_CACHE_16_7 9
#define FREE_REFERENCE_16_0 12
#define FREE_REFERENCES_LABEL_16_0 8
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_16_4);
      goto stack_frame_reductions_3;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_reductions_8)
DEFLABEL (stack_frame_reductions_3)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_13;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_13;
  (Wrd5.Obj) = ((Wrd11.pObj) [7]);

DEFLABEL (label_12)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_11;
  Wrd22 = Wrd26;

DEFLABEL (label_10)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd28.Obj) == (Wrd22.Obj))
    goto label_9;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_16_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_6])), (Wrd23.pObj));

DEFLABEL (label_6)
  (Wrd22.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_16_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define LABEL_17_8 9
#define LABEL_17_10 11
#define ENVIRONMENT_LABEL_17_3 21
#define DEBUGGING_LABEL_17_2 20
#define OBJECT_17_2 19
#define OBJECT_17_1 18
#define OBJECT_17_0 17
#define EXECUTE_CACHE_17_9 13
#define EXECUTE_CACHE_17_7 15
#define FREE_REFERENCES_LABEL_17_0 12
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_17_4);
      goto stack_frame_next_6;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_17_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_17_10);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_next_11)
DEFLABEL (stack_frame_next_6)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_16;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd13.Lng))))
    goto label_16;
  (Wrd7.Obj) = ((Wrd11.pObj) [12]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_15)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_8);
  (Rsp [0]) = Rvl;
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_14;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd16.Lng))))
    goto label_14;
  ((Wrd14.pObj) [12]) = Rvl;

DEFLABEL (label_13)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_17_0]);
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 3);

DEFLABEL (label_9)
  goto label_13;

DEFLABEL (label_16)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_17_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define ENVIRONMENT_LABEL_18_3 12
#define DEBUGGING_LABEL_18_2 11
#define EXECUTE_CACHE_18_7 7
#define EXECUTE_CACHE_18_6 9
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto continuation_first_subproblem_1;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation_first_subproblem_4)
DEFLABEL (continuation_first_subproblem_1)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_8 7
#define ENVIRONMENT_LABEL_19_3 16
#define DEBUGGING_LABEL_19_2 15
#define EXECUTE_CACHE_19_9 9
#define EXECUTE_CACHE_19_7 11
#define EXECUTE_CACHE_19_6 13
#define FREE_REFERENCES_LABEL_19_0 8
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto stack_frame_next_subproblem_3;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_19_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_next_subproblem_6)
DEFLABEL (stack_frame_next_subproblem_3)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_8);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define ENVIRONMENT_LABEL_20_3 10
#define DEBUGGING_LABEL_20_2 9
#define OBJECT_20_2 8
#define OBJECT_20_1 7
#define OBJECT_20_0 6
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_20_4);
      goto stack_frame_length_1;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_length_5)
DEFLABEL (stack_frame_length_1)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_6;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  Rvl = (MAKE_OBJECT (26, (Wrd25.uLng)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_20_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define LABEL_21_7 9
#define ENVIRONMENT_LABEL_21_3 20
#define DEBUGGING_LABEL_21_2 19
#define OBJECT_21_3 18
#define OBJECT_21_2 17
#define OBJECT_21_1 16
#define OBJECT_21_0 15
#define EXECUTE_CACHE_21_9 11
#define EXECUTE_CACHE_21_8 13
#define FREE_REFERENCES_LABEL_21_0 10
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd40;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_21_4);
      goto stack_frame_ref_7;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_ref_12)
DEFLABEL (stack_frame_ref_7)
  INTERRUPT_CHECK (26, LABEL_21_4);
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
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_17;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Obj) = (MAKE_OBJECT (26, (Wrd24.uLng)));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_16)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if ((Wrd33.Lng) < (Wrd35.Lng))
    goto label_13;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_21_7);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd8.Lng) - (Wrd10.Lng));
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_9]));

DEFLABEL (label_13)
  (Wrd40.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd40.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd57.uLng) == 10)
    goto label_15;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_3]), 2);

DEFLABEL (label_15)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 26))
    goto label_14;
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) (Wrd51.Lng)) < ((unsigned long) (Wrd55.Lng))))
    goto label_14;
  (Wrd43.uLng) = (OBJECT_DATUM (Wrd48.Obj));
  (Wrd46.pObj) = (& ((Wrd53.pObj) [(Wrd43.Lng)]));
  Rvl = ((Wrd46.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_21_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 9
#define DEBUGGING_LABEL_22_2 8
#define OBJECT_22_0 7
#define EXECUTE_CACHE_22_5 5
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto stack_frame_return_address_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_return_address_3)
DEFLABEL (stack_frame_return_address_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_22_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_7 7
#define ENVIRONMENT_LABEL_23_3 17
#define DEBUGGING_LABEL_23_2 16
#define OBJECT_23_0 15
#define EXECUTE_CACHE_23_9 9
#define EXECUTE_CACHE_23_8 11
#define EXECUTE_CACHE_23_6 13
#define FREE_REFERENCES_LABEL_23_0 8
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto stack_frame_return_code_3;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_return_code_6)
DEFLABEL (stack_frame_return_code_3)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_9]));

DEFLABEL (label_7)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define ENVIRONMENT_LABEL_24_3 13
#define DEBUGGING_LABEL_24_2 12
#define OBJECT_24_0 11
#define EXECUTE_CACHE_24_7 7
#define EXECUTE_CACHE_24_6 9
#define FREE_REFERENCES_LABEL_24_0 6
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_24_4);
      goto stack_frame_compiled_codeP_1;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_compiled_codeP_4)
DEFLABEL (stack_frame_compiled_codeP_1)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_7 7
#define LABEL_25_8 9
#define LABEL_25_10 11
#define ENVIRONMENT_LABEL_25_3 24
#define DEBUGGING_LABEL_25_2 23
#define OBJECT_25_3 22
#define OBJECT_25_2 21
#define OBJECT_25_1 20
#define OBJECT_25_0 19
#define EXECUTE_CACHE_25_9 13
#define EXECUTE_CACHE_25_6 15
#define FREE_REFERENCE_25_0 18
#define FREE_REFERENCES_LABEL_25_0 12
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
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
      goto stack_frame_subproblemP_3;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_25_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_25_10);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_subproblemP_8)
DEFLABEL (stack_frame_subproblemP_3)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_25_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_13;
  Wrd6 = Wrd10;

DEFLABEL (label_12)
  (Wrd12.Obj) = (* (Rsp++));
  if ((Wrd6.Obj) == (Wrd12.Obj))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_9;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_25_3]);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_10])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_14)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_18;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd19.Lng))))
    goto label_18;
  (Wrd13.Obj) = ((Wrd17.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_17)
  (Wrd27.Obj) = (current_block [OBJECT_25_2]);
  (Rsp [1]) = (Wrd27.Obj);
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 62)
    goto label_16;

DEFLABEL (label_15)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_16)
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd37.Lng))))
    goto label_15;
  Rvl = ((Wrd35.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_25_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_6 5
#define LABEL_26_5 7
#define LABEL_26_8 9
#define LABEL_26_9 11
#define LABEL_26_10 13
#define LABEL_26_13 15
#define LABEL_26_11 17
#define TAG_26_12 7
#define ENVIRONMENT_LABEL_26_3 28
#define DEBUGGING_LABEL_26_2 27
#define OBJECT_26_3 26
#define OBJECT_26_2 25
#define OBJECT_26_1 24
#define OBJECT_26_0 23
#define EXECUTE_CACHE_26_14 19
#define EXECUTE_CACHE_26_7 21
#define FREE_REFERENCES_LABEL_26_0 18
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_26_4);
      goto stack_frame_resolve_stack_address_13;

    case 1:
      current_block = (Rpc - LABEL_26_6);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_26_8);
      goto loop_11;

    case 4:
      current_block = (Rpc - LABEL_26_9);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_26_10);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_26_13);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_26_11);
      goto lambda_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_resolve_stack_address_19)
DEFLABEL (stack_frame_resolve_stack_address_13)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_23;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_23;
  (Wrd10.Obj) = ((Wrd14.pObj) [10]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_22)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (Rsp [1]) = Rvl;
  goto loop_11;

DEFLABEL (label_23)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_26_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (loop_20)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_26_8);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_28;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_28;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_27)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_26;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (MAKE_OBJECT (26, (Wrd23.uLng)));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_25)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! ((Wrd31.Lng) < (Wrd33.Lng)))
    goto label_24;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd40.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_11])));
  Rhp += 2;
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd40.pObj)));
  Wrd43 = Wrd40;
  (Wrd44.Obj) = (Rsp [1]);
  ((Wrd43.pObj) [2]) = (Wrd44.Obj);
  (Wrd42.Obj) = (Rsp [0]);
  ((Wrd43.pObj) [3]) = (Wrd42.Obj);
  Rvl = (Wrd39.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_13]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_26_13);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd8.Lng) - (Wrd10.Lng));
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_11;

DEFLABEL (label_26)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_3]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_26_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_27;

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_26_11);

DEFLABEL (lambda_8)
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
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_8 7
#define LABEL_27_6 9
#define LABEL_27_11 11
#define LABEL_27_12 13
#define LABEL_27_9 15
#define LABEL_27_16 17
#define LABEL_27_14 19
#define LABEL_27_17 21
#define LABEL_27_19 23
#define ENVIRONMENT_LABEL_27_3 44
#define DEBUGGING_LABEL_27_2 43
#define OBJECT_27_2 42
#define OBJECT_27_1 41
#define OBJECT_27_0 40
#define EXECUTE_CACHE_27_20 25
#define EXECUTE_CACHE_27_18 27
#define EXECUTE_CACHE_27_15 29
#define EXECUTE_CACHE_27_13 31
#define EXECUTE_CACHE_27_10 33
#define EXECUTE_CACHE_27_7 35
#define FREE_REFERENCE_27_1 38
#define FREE_REFERENCE_27_0 39
#define FREE_REFERENCES_LABEL_27_0 24
#define NUMBER_OF_LINKER_SECTIONS_27_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd32;
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
      current_block = (Rpc - LABEL_27_4);
      goto stack_frame_skip_non_subproblems_15;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_27_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_27_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_27_11);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_27_12);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_27_9);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_27_16);
      goto loop_12;

    case 8:
      current_block = (Rpc - LABEL_27_14);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_27_17);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_27_19);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_skip_non_subproblems_21)
DEFLABEL (stack_frame_skip_non_subproblems_15)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_34;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_34;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_33)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_26;

DEFLABEL (label_25)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_27_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  Rsp = (& (Rsp [1]));
  goto loop_12;

DEFLABEL (label_23)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_27_14);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_18]));

DEFLABEL (label_24)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_32;
  Wrd8 = Wrd12;

DEFLABEL (label_31)
  (Wrd14.Obj) = (Rsp [0]);
  if ((Wrd14.Obj) == (Wrd8.Obj))
    goto label_28;

DEFLABEL (label_27)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_30;
  Wrd17 = Wrd21;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_27_2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_27_8);
  (Wrd32.Obj) = (* (Rsp++));
  if (Rvl == (Wrd32.Obj))
    goto label_25;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_12])), (Wrd18.pObj));

DEFLABEL (label_19)
  (Wrd17.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_11])), (Wrd9.pObj));

DEFLABEL (label_18)
  (Wrd8.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_27_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (loop_22)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_27_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_27_17);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_35;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_27_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_20]));

DEFLABEL (label_36)
  goto loop_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_6 5
#define LABEL_28_9 7
#define LABEL_28_10 9
#define LABEL_28_5 11
#define LABEL_28_12 13
#define LABEL_28_7 15
#define LABEL_28_13 17
#define ENVIRONMENT_LABEL_28_3 34
#define DEBUGGING_LABEL_28_2 33
#define OBJECT_28_4 32
#define OBJECT_28_3 31
#define OBJECT_28_2 30
#define OBJECT_28_1 29
#define OBJECT_28_0 28
#define EXECUTE_CACHE_28_11 19
#define EXECUTE_CACHE_28_8 21
#define FREE_REFERENCE_28_1 24
#define FREE_REFERENCE_28_0 25
#define FREE_ASSIGNMENT_28_0 27
#define FREE_REFERENCES_LABEL_28_0 18
#define NUMBER_OF_LINKER_SECTIONS_28_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd25;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_28_4);
      goto initialize_special_framesB_6;

    case 1:
      current_block = (Rpc - LABEL_28_6);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_28_9);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_28_10);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_28_12);
      goto label_8;

    case 6:
      current_block = (Rpc - LABEL_28_7);
      goto lambda_0;

    case 7:
      current_block = (Rpc - LABEL_28_13);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_special_framesB_13)
DEFLABEL (initialize_special_framesB_6)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_28_6);
  (* (--Rsp)) = Rvl;
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_23;
  Wrd19 = Wrd23;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_21;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd33.Lng))))
    goto label_21;
  (Wrd25.Obj) = ((Wrd31.pObj) [2]);

DEFLABEL (label_20)
  (Wrd41.Obj) = (* (Rsp++));
  if (! ((Wrd25.Obj) == (Wrd41.Obj)))
    goto label_15;
  (Wrd43.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_28_2]);
  (Rsp [1]) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_11]));

DEFLABEL (label_15)
  (Wrd5.Obj) = (current_block [OBJECT_28_3]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_19)
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_28_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_18;

DEFLABEL (label_17)
  ((Wrd6.pObj) [0]) = (Wrd5.Obj);

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_28_4]);
  goto pop_return;

DEFLABEL (label_18)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_17;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_28_12])), (Wrd6.pObj), (Wrd5.Obj));

DEFLABEL (label_8)
  goto label_16;

DEFLABEL (label_21)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.Obj) = (current_block [OBJECT_28_0]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_10]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_10)
  (Wrd25.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_9])), (Wrd20.pObj));

DEFLABEL (label_9)
  (Wrd19.Obj) = Rvl;
  goto label_22;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (Wrd5.Obj) = Rvl;
  goto label_19;

DEFLABEL (lambda_14)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_28_7);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_25;
  Wrd6 = Wrd10;

DEFLABEL (label_24)
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_8]));

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_13])), (Wrd7.pObj));

DEFLABEL (label_11)
  (Wrd6.Obj) = Rvl;
  goto label_24;

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
conpar_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_29_4);
      goto parser_state_dynamic_state_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_state_dynamic_state_3)
DEFLABEL (parser_state_dynamic_state_0)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_29_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

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

#define LABEL_30_4 3
#define ENVIRONMENT_LABEL_30_3 7
#define DEBUGGING_LABEL_30_2 6
#define OBJECT_30_1 5
#define OBJECT_30_0 4
#define FREE_REFERENCES_LABEL_30_0 4
#define NUMBER_OF_LINKER_SECTIONS_30_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_30_4);
      goto parser_state_block_thread_eventsP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_state_block_thread_eventsP_3)
DEFLABEL (parser_state_block_thread_eventsP_0)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_30_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

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

#define LABEL_31_4 3
#define ENVIRONMENT_LABEL_31_3 7
#define DEBUGGING_LABEL_31_2 6
#define OBJECT_31_1 5
#define OBJECT_31_0 4
#define FREE_REFERENCES_LABEL_31_0 4
#define NUMBER_OF_LINKER_SECTIONS_31_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_31_4);
      goto parser_state_interrupt_mask_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_state_interrupt_mask_3)
DEFLABEL (parser_state_interrupt_mask_0)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_31_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

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

#define LABEL_32_4 3
#define ENVIRONMENT_LABEL_32_3 7
#define DEBUGGING_LABEL_32_2 6
#define OBJECT_32_1 5
#define OBJECT_32_0 4
#define FREE_REFERENCES_LABEL_32_0 4
#define NUMBER_OF_LINKER_SECTIONS_32_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_32_4);
      goto parser_state_history_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_state_history_3)
DEFLABEL (parser_state_history_0)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_32_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

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

#define LABEL_33_4 3
#define ENVIRONMENT_LABEL_33_3 7
#define DEBUGGING_LABEL_33_2 6
#define OBJECT_33_1 5
#define OBJECT_33_0 4
#define FREE_REFERENCES_LABEL_33_0 4
#define NUMBER_OF_LINKER_SECTIONS_33_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_33_4);
      goto parser_state_previous_history_offset_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_state_previous_history_offset_3)
DEFLABEL (parser_state_previous_history_offset_0)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_33_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

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

#define LABEL_34_4 3
#define ENVIRONMENT_LABEL_34_3 7
#define DEBUGGING_LABEL_34_2 6
#define OBJECT_34_1 5
#define OBJECT_34_0 4
#define FREE_REFERENCES_LABEL_34_0 4
#define NUMBER_OF_LINKER_SECTIONS_34_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_34_4);
      goto parser_state_previous_history_control_point_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_state_previous_history_control_point_3)
DEFLABEL (parser_state_previous_history_control_point_0)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_34_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

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

#define LABEL_35_4 3
#define ENVIRONMENT_LABEL_35_3 7
#define DEBUGGING_LABEL_35_2 6
#define OBJECT_35_1 5
#define OBJECT_35_0 4
#define FREE_REFERENCES_LABEL_35_0 4
#define NUMBER_OF_LINKER_SECTIONS_35_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_35_4);
      goto parser_state_element_stream_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_state_element_stream_3)
DEFLABEL (parser_state_element_stream_0)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_35_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

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

#define LABEL_36_4 3
#define ENVIRONMENT_LABEL_36_3 7
#define DEBUGGING_LABEL_36_2 6
#define OBJECT_36_1 5
#define OBJECT_36_0 4
#define FREE_REFERENCES_LABEL_36_0 4
#define NUMBER_OF_LINKER_SECTIONS_36_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_36_4);
      goto parser_state_n_elements_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_state_n_elements_3)
DEFLABEL (parser_state_n_elements_0)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_36_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

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

#define LABEL_37_4 3
#define ENVIRONMENT_LABEL_37_3 7
#define DEBUGGING_LABEL_37_2 6
#define OBJECT_37_1 5
#define OBJECT_37_0 4
#define FREE_REFERENCES_LABEL_37_0 4
#define NUMBER_OF_LINKER_SECTIONS_37_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_37_4);
      goto parser_state_next_control_point_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_state_next_control_point_3)
DEFLABEL (parser_state_next_control_point_0)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_37_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 2);

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

#define LABEL_38_4 3
#define ENVIRONMENT_LABEL_38_3 7
#define DEBUGGING_LABEL_38_2 6
#define OBJECT_38_1 5
#define OBJECT_38_0 4
#define FREE_REFERENCES_LABEL_38_0 4
#define NUMBER_OF_LINKER_SECTIONS_38_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_38_4);
      goto parser_state_previous_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_state_previous_type_3)
DEFLABEL (parser_state_previous_type_0)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_38_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 2);

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

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_6 7
#define LABEL_39_7 9
#define ENVIRONMENT_LABEL_39_3 17
#define DEBUGGING_LABEL_39_2 16
#define OBJECT_39_3 15
#define OBJECT_39_2 14
#define OBJECT_39_1 13
#define OBJECT_39_0 12
#define FREE_REFERENCE_39_0 11
#define FREE_REFERENCES_LABEL_39_0 10
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_39_4);
      goto parser_stateP_4;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_39_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_39_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_stateP_10)
DEFLABEL (parser_stateP_4)
  INTERRUPT_CHECK (26, LABEL_39_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_0]));
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
  Rvl = (current_block [OBJECT_39_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_39_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_7 7
#define LABEL_40_9 9
#define ENVIRONMENT_LABEL_40_3 20
#define DEBUGGING_LABEL_40_2 19
#define EXECUTE_CACHE_40_11 11
#define EXECUTE_CACHE_40_10 13
#define EXECUTE_CACHE_40_8 15
#define EXECUTE_CACHE_40_6 17
#define FREE_REFERENCES_LABEL_40_0 10
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_40_4);
      goto continuation__stack_frame_3;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_40_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_40_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation__stack_frame_6)
DEFLABEL (continuation__stack_frame_3)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_40_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_9);
  (* (--Rsp)) = Rvl;
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_7 7
#define LABEL_41_8 9
#define LABEL_41_11 11
#define LABEL_41_13 13
#define LABEL_41_15 15
#define LABEL_41_21 17
#define LABEL_41_22 19
#define LABEL_41_23 21
#define LABEL_41_17 23
#define LABEL_41_18 25
#define LABEL_41_19 27
#define LABEL_41_26 29
#define ENVIRONMENT_LABEL_41_3 60
#define DEBUGGING_LABEL_41_2 59
#define EXECUTE_CACHE_41_30 31
#define EXECUTE_CACHE_41_29 33
#define EXECUTE_CACHE_41_28 35
#define EXECUTE_CACHE_41_27 37
#define EXECUTE_CACHE_41_25 39
#define EXECUTE_CACHE_41_24 41
#define EXECUTE_CACHE_41_20 43
#define EXECUTE_CACHE_41_16 45
#define EXECUTE_CACHE_41_14 47
#define EXECUTE_CACHE_41_12 49
#define EXECUTE_CACHE_41_10 51
#define EXECUTE_CACHE_41_9 53
#define EXECUTE_CACHE_41_6 55
#define FREE_REFERENCE_41_0 58
#define FREE_REFERENCES_LABEL_41_0 30
#define NUMBER_OF_LINKER_SECTIONS_41_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_41_4);
      goto parse_control_point_15;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_41_7);
      goto continuation_13;

    case 3:
      current_block = (Rpc - LABEL_41_8);
      goto continuation_12;

    case 4:
      current_block = (Rpc - LABEL_41_11);
      goto continuation_11;

    case 5:
      current_block = (Rpc - LABEL_41_13);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_41_15);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_41_21);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_41_22);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_41_23);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_41_17);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_41_18);
      goto continuation_3;

    case 12:
      current_block = (Rpc - LABEL_41_19);
      goto continuation_2;

    case 13:
      current_block = (Rpc - LABEL_41_26);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_control_point_19)
DEFLABEL (parse_control_point_15)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_41_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_12]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_41_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_14]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_41_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_16]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_41_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_20]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_41_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_29]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_41_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_28]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_41_23);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_21;

DEFLABEL (label_20)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_24]));

DEFLABEL (label_21)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_21]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_25]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_41_21);
  (* (--Rsp)) = Rvl;
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_24;
  Wrd16 = Wrd20;

DEFLABEL (label_23)
  (Wrd22.Obj) = (* (Rsp++));
  if (! ((Wrd16.Obj) == (Wrd22.Obj)))
    goto label_20;
  (Wrd24.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_22)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_27]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_41_26);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_30]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_41_7);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_10]));

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41_22])), (Wrd17.pObj));

DEFLABEL (label_17)
  (Wrd16.Obj) = Rvl;
  goto label_23;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_41_17);
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_6 7
#define LABEL_42_8 9
#define LABEL_42_9 11
#define LABEL_42_11 13
#define LABEL_42_13 15
#define LABEL_42_14 17
#define LABEL_42_15 19
#define LABEL_42_17 21
#define LABEL_42_10 23
#define LABEL_42_18 25
#define LABEL_42_22 27
#define LABEL_42_19 29
#define LABEL_42_23 31
#define LABEL_42_26 33
#define LABEL_42_21 35
#define LABEL_42_27 37
#define LABEL_42_28 39
#define LABEL_42_30 41
#define LABEL_42_34 43
#define LABEL_42_31 45
#define ENVIRONMENT_LABEL_42_3 79
#define DEBUGGING_LABEL_42_2 78
#define OBJECT_42_8 77
#define OBJECT_42_7 76
#define OBJECT_42_6 75
#define OBJECT_42_5 74
#define OBJECT_42_4 73
#define OBJECT_42_3 72
#define OBJECT_42_2 71
#define OBJECT_42_1 70
#define OBJECT_42_0 69
#define EXECUTE_CACHE_42_35 47
#define EXECUTE_CACHE_42_33 49
#define EXECUTE_CACHE_42_32 51
#define EXECUTE_CACHE_42_29 53
#define EXECUTE_CACHE_42_25 55
#define EXECUTE_CACHE_42_24 57
#define EXECUTE_CACHE_42_20 59
#define EXECUTE_CACHE_42_16 61
#define EXECUTE_CACHE_42_12 63
#define EXECUTE_CACHE_42_7 65
#define FREE_REFERENCE_42_0 68
#define FREE_REFERENCES_LABEL_42_0 46
#define NUMBER_OF_LINKER_SECTIONS_42_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd10;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd75;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd59;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd44;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd95;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd25;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_42_4);
      goto parse_one_frame_26;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto label_28;

    case 2:
      current_block = (Rpc - LABEL_42_6);
      goto continuation_16;

    case 3:
      current_block = (Rpc - LABEL_42_8);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_42_9);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_42_11);
      goto label_34;

    case 6:
      current_block = (Rpc - LABEL_42_13);
      goto label_31;

    case 7:
      current_block = (Rpc - LABEL_42_14);
      goto label_32;

    case 8:
      current_block = (Rpc - LABEL_42_15);
      goto label_33;

    case 9:
      current_block = (Rpc - LABEL_42_17);
      goto lambda_14;

    case 10:
      current_block = (Rpc - LABEL_42_10);
      goto continuation_23;

    case 11:
      current_block = (Rpc - LABEL_42_18);
      goto continuation_1;

    case 12:
      current_block = (Rpc - LABEL_42_22);
      goto label_35;

    case 13:
      current_block = (Rpc - LABEL_42_19);
      goto continuation_0;

    case 14:
      current_block = (Rpc - LABEL_42_23);
      goto continuation_4;

    case 15:
      current_block = (Rpc - LABEL_42_26);
      goto label_36;

    case 16:
      current_block = (Rpc - LABEL_42_21);
      goto continuation_3;

    case 17:
      current_block = (Rpc - LABEL_42_27);
      goto continuation_10;

    case 18:
      current_block = (Rpc - LABEL_42_28);
      goto continuation_9;

    case 19:
      current_block = (Rpc - LABEL_42_30);
      goto continuation_8;

    case 20:
      current_block = (Rpc - LABEL_42_34);
      goto label_37;

    case 21:
      current_block = (Rpc - LABEL_42_31);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_one_frame_39)
DEFLABEL (parse_one_frame_26)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_57;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_57;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_56)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_7]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_42_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  goto lambda_14;

DEFLABEL (label_41)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_55;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd15.Lng))))
    goto label_55;
  (Wrd7.Obj) = ((Wrd13.pObj) [10]);

DEFLABEL (label_54)
  (Rsp [0]) = (Wrd7.Obj);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_42;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_53;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd33.Lng))))
    goto label_53;
  (Wrd25.Obj) = ((Wrd31.pObj) [9]);

DEFLABEL (label_52)
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if ((Wrd41.Lng) > 0)
    goto label_49;
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 62))
    goto label_48;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd50.Lng))))
    goto label_48;
  (Wrd44.Obj) = ((Wrd48.pObj) [2]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_47)
  (Wrd58.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd68.Obj) = (Rsp [3]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 62))
    goto label_46;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [0]);
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd67.Lng))))
    goto label_46;
  (Wrd59.Obj) = ((Wrd65.pObj) [3]);

DEFLABEL (label_45)
  (Rsp [2]) = (Wrd59.Obj);
  (Wrd84.Obj) = (Rsp [3]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 62))
    goto label_44;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd82.Obj) = ((Wrd81.pObj) [0]);
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd82.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd83.Lng))))
    goto label_44;
  (Wrd75.Obj) = ((Wrd81.pObj) [11]);

DEFLABEL (label_43)
  (Rsp [3]) = (Wrd75.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_16]));

DEFLABEL (label_44)
  (Wrd86.Obj) = (Rsp [3]);
  (Wrd87.Obj) = (current_block [OBJECT_42_6]);
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_15]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_33)
  (Wrd75.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd70.Obj) = (Rsp [3]);
  (Wrd71.Obj) = (current_block [OBJECT_42_5]);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_14]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_32)
  (Wrd59.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.Obj) = (current_block [OBJECT_42_4]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_13]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_49)
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_10]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (Wrd94.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd94.Obj);
  (Wrd96.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_0]));
  (Wrd99.Obj) = ((Wrd96.pObj) [0]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if ((Wrd100.uLng) == 50)
    goto label_51;
  Wrd95 = Wrd99;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd95.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_12]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_42_10);
  (Rsp [0]) = Rvl;
  goto lambda_14;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42_11])), (Wrd96.pObj));

DEFLABEL (label_34)
  (Wrd95.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.Obj) = (current_block [OBJECT_42_3]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_9]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_30)
  (Wrd25.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_42_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_29)
  (Wrd7.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_42_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (lambda_40)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_42_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_20]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_25]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_42_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 62))
    goto label_65;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_65;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_64)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_23]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_24]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_42_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  (Wrd16.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_60)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_29]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_42_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_33]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_42_27);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_30]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_31]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_32]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_42_31);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_35]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_42_30);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_59;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd15.Lng))))
    goto label_59;
  (Wrd7.Obj) = ((Wrd13.pObj) [6]);

DEFLABEL (label_58)
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd23.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd23.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_59)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (current_block [OBJECT_42_8]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_34]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_37)
  (Wrd7.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd28.Obj) = (Rsp [6]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 62))
    goto label_63;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd27.Lng))))
    goto label_63;
  (Wrd19.Obj) = ((Wrd25.pObj) [9]);

DEFLABEL (label_62)
  (Rsp [2]) = (Wrd19.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_63)
  (Wrd30.Obj) = (Rsp [6]);
  (Wrd31.Obj) = (current_block [OBJECT_42_3]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_26]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_36)
  (Wrd19.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_42_7]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_22]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_42_21);
  (* (--Rsp)) = Rvl;
  goto label_60;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_6 7
#define LABEL_43_7 9
#define LABEL_43_8 11
#define LABEL_43_9 13
#define LABEL_43_10 15
#define LABEL_43_11 17
#define LABEL_43_12 19
#define LABEL_43_13 21
#define ENVIRONMENT_LABEL_43_3 37
#define DEBUGGING_LABEL_43_2 36
#define OBJECT_43_10 35
#define OBJECT_43_9 34
#define OBJECT_43_8 33
#define OBJECT_43_7 32
#define OBJECT_43_6 31
#define OBJECT_43_5 30
#define OBJECT_43_4 29
#define OBJECT_43_3 28
#define OBJECT_43_2 27
#define OBJECT_43_1 26
#define OBJECT_43_0 25
#define EXECUTE_CACHE_43_14 23
#define FREE_REFERENCES_LABEL_43_0 22
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd144;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd126;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd112;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd96;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd80;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd64;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd61;
  machine_word Wrd166;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd44;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_43_4);
      goto make_intermediate_state_14;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_43_6);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_43_7);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_43_8);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_43_9);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_43_10);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_43_11);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_43_12);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_43_13);
      goto label_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_intermediate_state_26)
DEFLABEL (make_intermediate_state_14)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_47;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd13.Lng))))
    goto label_47;
  (Wrd5.Obj) = ((Wrd11.pObj) [9]);

DEFLABEL (label_46)
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Lng) = ((Wrd21.Lng) - (Wrd23.Lng));
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_45;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd34.Lng))))
    goto label_45;
  (Wrd28.Obj) = ((Wrd32.pObj) [7]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_44)
  (Wrd51.Obj) = (Rsp [2]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 62))
    goto label_43;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd50.Lng))))
    goto label_43;
  (Wrd44.Obj) = ((Wrd48.pObj) [6]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_42)
  (Wrd58.Obj) = (Rsp [1]);
  if ((Wrd58.Obj) == ((SCHEME_OBJECT) 0))
    goto label_41;

DEFLABEL (label_40)
  (Wrd61.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_39)
  (Wrd71.Obj) = (Rsp [3]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 62))
    goto label_38;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd70.Lng))))
    goto label_38;
  (Wrd64.Obj) = ((Wrd68.pObj) [5]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_37)
  (Wrd87.Obj) = (Rsp [4]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if (! ((Wrd88.uLng) == 62))
    goto label_36;
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd85.Obj) = ((Wrd84.pObj) [0]);
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd86.Lng))))
    goto label_36;
  (Wrd80.Obj) = ((Wrd84.pObj) [4]);
  (* (--Rsp)) = (Wrd80.Obj);

DEFLABEL (label_35)
  (Wrd103.Obj) = (Rsp [5]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd104.uLng) == 62))
    goto label_34;
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd101.Obj) = ((Wrd100.pObj) [0]);
  (Wrd102.Lng) = (FIXNUM_TO_LONG (Wrd101.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd102.Lng))))
    goto label_34;
  (Wrd96.Obj) = ((Wrd100.pObj) [3]);
  (* (--Rsp)) = (Wrd96.Obj);

DEFLABEL (label_33)
  (Wrd119.Obj) = (Rsp [6]);
  (Wrd120.uLng) = (OBJECT_TYPE (Wrd119.Obj));
  if (! ((Wrd120.uLng) == 62))
    goto label_32;
  (Wrd116.pObj) = (OBJECT_ADDRESS (Wrd119.Obj));
  (Wrd117.Obj) = ((Wrd116.pObj) [0]);
  (Wrd118.Lng) = (FIXNUM_TO_LONG (Wrd117.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd118.Lng))))
    goto label_32;
  (Wrd112.Obj) = ((Wrd116.pObj) [2]);
  (* (--Rsp)) = (Wrd112.Obj);

DEFLABEL (label_31)
  (Wrd135.Obj) = (Rsp [7]);
  (Wrd136.uLng) = (OBJECT_TYPE (Wrd135.Obj));
  if (! ((Wrd136.uLng) == 62))
    goto label_30;
  (Wrd132.pObj) = (OBJECT_ADDRESS (Wrd135.Obj));
  (Wrd133.Obj) = ((Wrd132.pObj) [0]);
  (Wrd134.Lng) = (FIXNUM_TO_LONG (Wrd133.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd134.Lng))))
    goto label_30;
  (Wrd126.Obj) = ((Wrd132.pObj) [10]);

DEFLABEL (label_29)
  (Rsp [8]) = (Wrd126.Obj);
  (Wrd142.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd142.Obj);
  (Wrd143.Obj) = (Rsp [10]);
  (Rsp [7]) = (Wrd143.Obj);
  (Wrd153.Obj) = (Rsp [8]);
  (Wrd154.uLng) = (OBJECT_TYPE (Wrd153.Obj));
  if (! ((Wrd154.uLng) == 62))
    goto label_28;
  (Wrd150.pObj) = (OBJECT_ADDRESS (Wrd153.Obj));
  (Wrd151.Obj) = ((Wrd150.pObj) [0]);
  (Wrd152.Lng) = (FIXNUM_TO_LONG (Wrd151.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd152.Lng))))
    goto label_28;
  (Wrd144.Obj) = ((Wrd150.pObj) [11]);

DEFLABEL (label_27)
  (Rsp [10]) = (Wrd144.Obj);
  (Wrd160.Obj) = (* (Rsp++));
  (Rsp [7]) = (Wrd160.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_14]));

DEFLABEL (label_28)
  (Wrd155.Obj) = (Rsp [8]);
  (Wrd156.Obj) = (current_block [OBJECT_43_10]);
  (Wrd159.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_13]))));
  (* (--Rsp)) = (Wrd159.Obj);
  (* (--Rsp)) = (Wrd156.Obj);
  (* (--Rsp)) = (Wrd155.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_24)
  (Wrd144.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd137.Obj) = (Rsp [7]);
  (Wrd138.Obj) = (current_block [OBJECT_43_9]);
  (Wrd141.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_12]))));
  (* (--Rsp)) = (Wrd141.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd137.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_23)
  (Wrd126.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd121.Obj) = (Rsp [6]);
  (Wrd122.Obj) = (current_block [OBJECT_43_8]);
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_11]))));
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd105.Obj) = (Rsp [5]);
  (Wrd106.Obj) = (current_block [OBJECT_43_7]);
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_10]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd89.Obj) = (Rsp [4]);
  (Wrd90.Obj) = (current_block [OBJECT_43_6]);
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_9]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd73.Obj) = (Rsp [3]);
  (Wrd74.Obj) = (current_block [OBJECT_43_5]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_8]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_41)
  (Wrd161.Obj) = (Rsp [2]);
  (Wrd162.Lng) = (FIXNUM_TO_LONG (Wrd161.Obj));
  (Wrd163.Obj) = (Rsp [0]);
  (Wrd164.Lng) = (FIXNUM_TO_LONG (Wrd163.Obj));
  if (! ((Wrd162.Lng) < (Wrd164.Lng)))
    goto label_40;
  (Wrd166.Obj) = (current_block [OBJECT_43_4]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd166.Obj);
  goto label_39;

DEFLABEL (label_43)
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd54.Obj) = (current_block [OBJECT_43_3]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_7]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.Obj) = (current_block [OBJECT_43_2]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_6]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_43_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_46;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_5 3
#define LABEL_44_4 5
#define LABEL_44_6 7
#define LABEL_44_7 9
#define LABEL_44_8 11
#define LABEL_44_9 13
#define LABEL_44_10 15
#define LABEL_44_12 17
#define LABEL_44_13 19
#define LABEL_44_14 21
#define LABEL_44_15 23
#define LABEL_44_16 25
#define LABEL_44_11 27
#define LABEL_44_19 29
#define LABEL_44_20 31
#define LABEL_44_21 33
#define LABEL_44_22 35
#define LABEL_44_23 37
#define LABEL_44_24 39
#define ENVIRONMENT_LABEL_44_3 62
#define DEBUGGING_LABEL_44_2 61
#define OBJECT_44_11 60
#define OBJECT_44_10 59
#define OBJECT_44_9 58
#define OBJECT_44_8 57
#define OBJECT_44_7 56
#define OBJECT_44_6 55
#define OBJECT_44_5 54
#define OBJECT_44_4 53
#define OBJECT_44_3 52
#define OBJECT_44_2 51
#define OBJECT_44_1 50
#define OBJECT_44_0 49
#define EXECUTE_CACHE_44_25 41
#define EXECUTE_CACHE_44_18 43
#define EXECUTE_CACHE_44_17 45
#define FREE_REFERENCE_44_0 48
#define FREE_REFERENCES_LABEL_44_0 40
#define NUMBER_OF_LINKER_SECTIONS_44_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd92;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd83;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd67;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd93;
  machine_word Wrd94;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd129;
  machine_word Wrd181;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd168;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd152;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd149;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd136;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd133;
  machine_word Wrd130;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd108;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd91;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd71;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd55;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
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
      current_block = (Rpc - LABEL_44_5);
      goto continuation_15;

    case 1:
      current_block = (Rpc - LABEL_44_4);
      goto parse_standard_next_20;

    case 2:
      current_block = (Rpc - LABEL_44_6);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_44_7);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_44_8);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_44_9);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_44_10);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_44_12);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_44_13);
      goto label_28;

    case 9:
      current_block = (Rpc - LABEL_44_14);
      goto label_29;

    case 10:
      current_block = (Rpc - LABEL_44_15);
      goto label_30;

    case 11:
      current_block = (Rpc - LABEL_44_16);
      goto label_31;

    case 12:
      current_block = (Rpc - LABEL_44_11);
      goto continuation_18;

    case 13:
      current_block = (Rpc - LABEL_44_19);
      goto label_32;

    case 14:
      current_block = (Rpc - LABEL_44_20);
      goto label_33;

    case 15:
      current_block = (Rpc - LABEL_44_21);
      goto label_37;

    case 16:
      current_block = (Rpc - LABEL_44_22);
      goto label_34;

    case 17:
      current_block = (Rpc - LABEL_44_23);
      goto label_35;

    case 18:
      current_block = (Rpc - LABEL_44_24);
      goto label_36;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_standard_next_39)
DEFLABEL (parse_standard_next_20)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_76;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_76;
  (Wrd7.Obj) = ((Wrd11.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_75)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_74;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_74;
  (Wrd23.Obj) = ((Wrd27.pObj) [6]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_73)
  (Wrd46.Obj) = (Rsp [4]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_72;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd45.Lng))))
    goto label_72;
  (Wrd39.Obj) = ((Wrd43.pObj) [5]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_71)
  (Wrd62.Obj) = (Rsp [3]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 62))
    goto label_70;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd61.Lng))))
    goto label_70;
  (Wrd55.Obj) = ((Wrd59.pObj) [4]);
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_69)
  (Wrd78.Obj) = (Rsp [6]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 62))
    goto label_68;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [0]);
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd77.Lng))))
    goto label_68;
  (Wrd71.Obj) = ((Wrd75.pObj) [9]);
  (* (--Rsp)) = (Wrd71.Obj);

DEFLABEL (label_67)
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_11]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd88.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd98.Obj) = (Rsp [9]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd99.uLng) == 62))
    goto label_66;
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd98.Obj));
  (Wrd96.Obj) = ((Wrd95.pObj) [0]);
  (Wrd97.Lng) = (FIXNUM_TO_LONG (Wrd96.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd97.Lng))))
    goto label_66;
  (Wrd91.Obj) = ((Wrd95.pObj) [10]);
  (* (--Rsp)) = (Wrd91.Obj);

DEFLABEL (label_65)
  (Wrd105.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd105.Obj);
  (Wrd115.Obj) = (Rsp [11]);
  (Wrd116.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if (! ((Wrd116.uLng) == 62))
    goto label_64;
  (Wrd112.pObj) = (OBJECT_ADDRESS (Wrd115.Obj));
  (Wrd113.Obj) = ((Wrd112.pObj) [0]);
  (Wrd114.Lng) = (FIXNUM_TO_LONG (Wrd113.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd114.Lng))))
    goto label_64;
  (Wrd108.Obj) = ((Wrd112.pObj) [8]);
  (* (--Rsp)) = (Wrd108.Obj);

DEFLABEL (label_63)
  (Wrd122.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd123.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd123.Obj);
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd126.Obj);
  (Wrd127.Obj) = (Rsp [17]);
  if ((Wrd127.Obj) == ((SCHEME_OBJECT) 0))
    goto label_62;

DEFLABEL (label_61)
  (Wrd129.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd129.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_18]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_60)
  (Wrd143.Obj) = (Rsp [15]);
  (Wrd144.uLng) = (OBJECT_TYPE (Wrd143.Obj));
  if (! ((Wrd144.uLng) == 62))
    goto label_59;
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd143.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (Wrd142.Lng) = (FIXNUM_TO_LONG (Wrd141.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd142.Lng))))
    goto label_59;
  (Wrd136.Obj) = ((Wrd140.pObj) [4]);
  (* (--Rsp)) = (Wrd136.Obj);

DEFLABEL (label_58)
  (Wrd159.Obj) = (Rsp [16]);
  (Wrd160.uLng) = (OBJECT_TYPE (Wrd159.Obj));
  if (! ((Wrd160.uLng) == 62))
    goto label_57;
  (Wrd156.pObj) = (OBJECT_ADDRESS (Wrd159.Obj));
  (Wrd157.Obj) = ((Wrd156.pObj) [0]);
  (Wrd158.Lng) = (FIXNUM_TO_LONG (Wrd157.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd158.Lng))))
    goto label_57;
  (Wrd152.Obj) = ((Wrd156.pObj) [3]);
  (* (--Rsp)) = (Wrd152.Obj);

DEFLABEL (label_56)
  (Wrd175.Obj) = (Rsp [17]);
  (Wrd176.uLng) = (OBJECT_TYPE (Wrd175.Obj));
  if (! ((Wrd176.uLng) == 62))
    goto label_55;
  (Wrd172.pObj) = (OBJECT_ADDRESS (Wrd175.Obj));
  (Wrd173.Obj) = ((Wrd172.pObj) [0]);
  (Wrd174.Lng) = (FIXNUM_TO_LONG (Wrd173.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd174.Lng))))
    goto label_55;
  (Wrd168.Obj) = ((Wrd172.pObj) [2]);
  (* (--Rsp)) = (Wrd168.Obj);

DEFLABEL (label_54)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_17]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_44_11);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [8]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_53;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd13.Lng))))
    goto label_53;
  (Wrd7.Obj) = ((Wrd11.pObj) [11]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_52)
  (Wrd26.Obj) = (Rsp [8]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_51;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd21.Obj) = (MAKE_OBJECT (26, (Wrd25.uLng)));

DEFLABEL (label_50)
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd35.Lng) = ((Wrd32.Lng) + (Wrd34.Lng));
  (Wrd36.Obj) = (LONG_TO_FIXNUM (Wrd35.Lng));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [13]);
  if ((Wrd39.Obj) == ((SCHEME_OBJECT) 0))
    goto label_47;
  (Wrd41.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_46)
  (Wrd51.Obj) = (Rsp [13]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 62))
    goto label_45;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd50.Lng))))
    goto label_45;
  (Wrd44.Obj) = ((Wrd48.pObj) [4]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_44)
  (Wrd67.Obj) = (Rsp [14]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 62))
    goto label_43;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd66.Lng))))
    goto label_43;
  (Wrd60.Obj) = ((Wrd64.pObj) [3]);
  (* (--Rsp)) = (Wrd60.Obj);

DEFLABEL (label_42)
  (Wrd83.Obj) = (Rsp [15]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 62))
    goto label_41;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd82.Lng))))
    goto label_41;
  (Wrd76.Obj) = ((Wrd80.pObj) [2]);
  (* (--Rsp)) = (Wrd76.Obj);

DEFLABEL (label_40)
  (Wrd90.Obj) = (Rsp [15]);
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd91.Obj) = (Rsp [15]);
  (* (--Rsp)) = (Wrd91.Obj);
  (Wrd92.pObj) = (& (Rsp [21]));
  {
    SCHEME_OBJECT * MFUp1 = (& (Rsp [11]));
    SCHEME_OBJECT * MFUp2 = (Wrd92.pObj);
    while (MFUp1 > Rsp)
      {
	(* (--MFUp2)) = (* (--MFUp1));
      }
    Rsp = MFUp2;
  }
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_25]));

DEFLABEL (label_41)
  (Wrd85.Obj) = (Rsp [15]);
  (Wrd86.Obj) = (current_block [OBJECT_44_9]);
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_24]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd69.Obj) = (Rsp [14]);
  (Wrd70.Obj) = (current_block [OBJECT_44_8]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_23]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd53.Obj) = (Rsp [13]);
  (Wrd54.Obj) = (current_block [OBJECT_44_4]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_22]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd94.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_0]));
  (Wrd97.Obj) = ((Wrd94.pObj) [0]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if ((Wrd98.uLng) == 50)
    goto label_49;
  Wrd93 = Wrd97;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd93.Obj);
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_21])), (Wrd94.pObj));

DEFLABEL (label_37)
  (Wrd93.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_20]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_11]), 1);

DEFLABEL (label_33)
  (Wrd21.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd16.Obj) = (Rsp [8]);
  (Wrd17.Obj) = (current_block [OBJECT_44_10]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_19]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd177.Obj) = (Rsp [17]);
  (Wrd178.Obj) = (current_block [OBJECT_44_9]);
  (Wrd181.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_16]))));
  (* (--Rsp)) = (Wrd181.Obj);
  (* (--Rsp)) = (Wrd178.Obj);
  (* (--Rsp)) = (Wrd177.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd161.Obj) = (Rsp [16]);
  (Wrd162.Obj) = (current_block [OBJECT_44_8]);
  (Wrd165.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_15]))));
  (* (--Rsp)) = (Wrd165.Obj);
  (* (--Rsp)) = (Wrd162.Obj);
  (* (--Rsp)) = (Wrd161.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd145.Obj) = (Rsp [15]);
  (Wrd146.Obj) = (current_block [OBJECT_44_4]);
  (Wrd149.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_14]))));
  (* (--Rsp)) = (Wrd149.Obj);
  (* (--Rsp)) = (Wrd146.Obj);
  (* (--Rsp)) = (Wrd145.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (label_62)
  (Wrd130.Obj) = (Rsp [9]);
  if (! ((Wrd130.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_61;
  (Wrd133.Obj) = (Rsp [10]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd133.Obj);
  goto label_60;

DEFLABEL (label_64)
  (Wrd117.Obj) = (Rsp [11]);
  (Wrd118.Obj) = (current_block [OBJECT_44_7]);
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_13]))));
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  (* (--Rsp)) = (Wrd117.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd100.Obj) = (Rsp [9]);
  (Wrd101.Obj) = (current_block [OBJECT_44_6]);
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_12]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd80.Obj) = (Rsp [6]);
  (Wrd81.Obj) = (current_block [OBJECT_44_5]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_10]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd64.Obj) = (Rsp [3]);
  (Wrd65.Obj) = (current_block [OBJECT_44_4]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_9]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd48.Obj) = (Rsp [4]);
  (Wrd49.Obj) = (current_block [OBJECT_44_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_8]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.Obj) = (current_block [OBJECT_44_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_44_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_75;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_5 3
#define LABEL_45_4 5
#define LABEL_45_6 7
#define LABEL_45_7 9
#define ENVIRONMENT_LABEL_45_3 18
#define DEBUGGING_LABEL_45_2 17
#define OBJECT_45_3 16
#define OBJECT_45_2 15
#define OBJECT_45_1 14
#define OBJECT_45_0 13
#define EXECUTE_CACHE_45_8 11
#define FREE_REFERENCES_LABEL_45_0 10
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd12;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd15;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_45_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_45_4);
      goto parser_standard_2;

    case 2:
      current_block = (Rpc - LABEL_45_6);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_45_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_standard_7)
DEFLABEL (parser_standard_2)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd41.uLng) == 62))
    goto label_13;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd39.Lng))))
    goto label_13;
  (Wrd12.Obj) = ((Wrd37.pObj) [4]);
  if ((Wrd12.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;

DEFLABEL (label_11)
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_10;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd26.Lng))))
    goto label_10;
  (Wrd15.Obj) = ((Wrd24.pObj) [3]);

DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_8)
  (Rsp [3]) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd16.Obj);
  (Rsp [4]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_8]));

DEFLABEL (label_10)
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.Obj) = (current_block [OBJECT_45_3]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 2);

DEFLABEL (label_4)
  (Wrd15.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  (Wrd15.Obj) = (current_block [OBJECT_45_2]);
  goto label_9;

DEFLABEL (label_13)
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd43.Obj) = (current_block [OBJECT_45_0]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_6]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  goto label_11;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_45_5);
  (Wrd15.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define LABEL_46_8 7
#define LABEL_46_6 9
#define LABEL_46_10 11
#define LABEL_46_11 13
#define ENVIRONMENT_LABEL_46_3 30
#define DEBUGGING_LABEL_46_2 29
#define OBJECT_46_3 28
#define OBJECT_46_2 27
#define OBJECT_46_1 26
#define OBJECT_46_0 25
#define EXECUTE_CACHE_46_13 15
#define EXECUTE_CACHE_46_12 17
#define EXECUTE_CACHE_46_9 19
#define EXECUTE_CACHE_46_7 21
#define FREE_REFERENCE_46_0 24
#define FREE_REFERENCES_LABEL_46_0 14
#define NUMBER_OF_LINKER_SECTIONS_46_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_46_4);
      goto parser_standard_compiled_6;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_46_8);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_46_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_46_10);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_46_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_standard_compiled_11)
DEFLABEL (parser_standard_compiled_6)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_19;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_19;
  (Wrd10.Obj) = ((Wrd14.pObj) [8]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_18)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_46_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_16;
  Wrd7 = Wrd11;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_46_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_46_8);
  (Wrd23.Obj) = (* (Rsp++));
  if (Rvl == (Wrd23.Obj))
    goto label_13;
  (Wrd21.Obj) = (current_block [OBJECT_46_3]);
  goto label_12;

DEFLABEL (label_13)
  (Wrd21.Obj) = (current_block [OBJECT_46_2]);

DEFLABEL (label_12)
DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  (Rsp [3]) = (Wrd21.Obj);
  (Rsp [4]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_9]));

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_10])), (Wrd8.pObj));

DEFLABEL (label_9)
  (Wrd7.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_17)
  (Wrd21.Obj) = ((SCHEME_OBJECT) 0);
  goto label_14;

DEFLABEL (label_19)
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (current_block [OBJECT_46_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_8 7
#define LABEL_47_9 9
#define LABEL_47_6 11
#define ENVIRONMENT_LABEL_47_3 26
#define DEBUGGING_LABEL_47_2 25
#define OBJECT_47_3 24
#define OBJECT_47_2 23
#define OBJECT_47_1 22
#define OBJECT_47_0 21
#define EXECUTE_CACHE_47_11 13
#define EXECUTE_CACHE_47_10 15
#define EXECUTE_CACHE_47_7 17
#define FREE_REFERENCE_47_0 20
#define FREE_REFERENCES_LABEL_47_0 12
#define NUMBER_OF_LINKER_SECTIONS_47_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_47_4);
      goto parser_apply_7;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_47_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_47_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_47_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_apply_12)
DEFLABEL (parser_apply_7)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_23;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_23;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_22)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_47_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_47_8);
  (* (--Rsp)) = Rvl;
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_20;
  Wrd19 = Wrd23;

DEFLABEL (label_19)
  (Wrd25.Obj) = (* (Rsp++));
  if ((Wrd19.Obj) == (Wrd25.Obj))
    goto label_14;
  (Wrd27.Obj) = (current_block [OBJECT_47_3]);
  goto label_13;

DEFLABEL (label_14)
  (Wrd27.Obj) = (current_block [OBJECT_47_2]);

DEFLABEL (label_13)
DEFLABEL (label_18)
  Rsp = (& (Rsp [1]));
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_15;

DEFLABEL (label_16)
  (Wrd12.Obj) = (current_block [OBJECT_47_2]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_15)
DEFLABEL (label_17)
  (Wrd13.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd16.Obj);
  (Rsp [4]) = (Wrd16.Obj);
  (Rsp [1]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_10]));

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47_9])), (Wrd20.pObj));

DEFLABEL (label_10)
  (Wrd19.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  Rsp = (& (Rsp [1]));
  goto label_16;

DEFLABEL (label_23)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_47_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_6 5
#define LABEL_48_7 7
#define LABEL_48_8 9
#define LABEL_48_9 11
#define LABEL_48_10 13
#define LABEL_48_11 15
#define LABEL_48_12 17
#define LABEL_48_13 19
#define LABEL_48_14 21
#define LABEL_48_15 23
#define LABEL_48_5 25
#define ENVIRONMENT_LABEL_48_3 43
#define DEBUGGING_LABEL_48_2 42
#define OBJECT_48_10 41
#define OBJECT_48_9 40
#define OBJECT_48_8 39
#define OBJECT_48_7 38
#define OBJECT_48_6 37
#define OBJECT_48_5 36
#define OBJECT_48_4 35
#define OBJECT_48_3 34
#define OBJECT_48_2 33
#define OBJECT_48_1 32
#define OBJECT_48_0 31
#define EXECUTE_CACHE_48_17 27
#define EXECUTE_CACHE_48_16 29
#define FREE_REFERENCES_LABEL_48_0 26
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd167;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd154;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd151;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd138;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd135;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd122;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd119;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd106;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd90;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd74;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd82;
  machine_word Wrd81;
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
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
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
      current_block = (Rpc - LABEL_48_4);
      goto parser_restore_interrupt_mask_11;

    case 1:
      current_block = (Rpc - LABEL_48_6);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_48_7);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_48_8);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_48_9);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_48_10);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_48_11);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_48_12);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_48_13);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_48_14);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_48_15);
      goto label_22;

    case 11:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_restore_interrupt_mask_24)
DEFLABEL (parser_restore_interrupt_mask_11)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_44;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_44;
  (Wrd10.Obj) = ((Wrd14.pObj) [11]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_43)
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_42;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd32.Lng))))
    goto label_42;
  (Wrd26.Obj) = ((Wrd30.pObj) [10]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_41)
  (Wrd49.Obj) = (Rsp [5]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 62))
    goto label_40;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd48.Lng))))
    goto label_40;
  (Wrd42.Obj) = ((Wrd46.pObj) [9]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_39)
  (Wrd65.Obj) = (Rsp [6]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 62))
    goto label_38;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd64.Lng))))
    goto label_38;
  (Wrd58.Obj) = ((Wrd62.pObj) [8]);
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_37)
  (Wrd81.Obj) = (Rsp [7]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd82.uLng) == 62))
    goto label_36;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd79.Obj) = ((Wrd78.pObj) [0]);
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd80.Lng))))
    goto label_36;
  (Wrd74.Obj) = ((Wrd78.pObj) [7]);
  (* (--Rsp)) = (Wrd74.Obj);

DEFLABEL (label_35)
  (Wrd97.Obj) = (Rsp [8]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd98.uLng) == 62))
    goto label_34;
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd95.Obj) = ((Wrd94.pObj) [0]);
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd95.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd96.Lng))))
    goto label_34;
  (Wrd90.Obj) = ((Wrd94.pObj) [6]);
  (* (--Rsp)) = (Wrd90.Obj);

DEFLABEL (label_33)
  (Wrd113.Obj) = (Rsp [9]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd114.uLng) == 62))
    goto label_32;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd111.Obj) = ((Wrd110.pObj) [0]);
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd111.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd112.Lng))))
    goto label_32;
  (Wrd106.Obj) = ((Wrd110.pObj) [5]);
  (* (--Rsp)) = (Wrd106.Obj);

DEFLABEL (label_31)
  (Wrd129.Obj) = (Rsp [9]);
  (Wrd130.uLng) = (OBJECT_TYPE (Wrd129.Obj));
  if (! ((Wrd130.uLng) == 10))
    goto label_30;
  (Wrd126.pObj) = (OBJECT_ADDRESS (Wrd129.Obj));
  (Wrd127.Obj) = ((Wrd126.pObj) [0]);
  (Wrd128.Lng) = (FIXNUM_TO_LONG (Wrd127.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd128.Lng))))
    goto label_30;
  (Wrd122.Obj) = ((Wrd126.pObj) [2]);
  (* (--Rsp)) = (Wrd122.Obj);

DEFLABEL (label_29)
  (Wrd145.Obj) = (Rsp [11]);
  (Wrd146.uLng) = (OBJECT_TYPE (Wrd145.Obj));
  if (! ((Wrd146.uLng) == 62))
    goto label_28;
  (Wrd142.pObj) = (OBJECT_ADDRESS (Wrd145.Obj));
  (Wrd143.Obj) = ((Wrd142.pObj) [0]);
  (Wrd144.Lng) = (FIXNUM_TO_LONG (Wrd143.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd144.Lng))))
    goto label_28;
  (Wrd138.Obj) = ((Wrd142.pObj) [3]);
  (* (--Rsp)) = (Wrd138.Obj);

DEFLABEL (label_27)
  (Wrd161.Obj) = (Rsp [12]);
  (Wrd162.uLng) = (OBJECT_TYPE (Wrd161.Obj));
  if (! ((Wrd162.uLng) == 62))
    goto label_26;
  (Wrd158.pObj) = (OBJECT_ADDRESS (Wrd161.Obj));
  (Wrd159.Obj) = ((Wrd158.pObj) [0]);
  (Wrd160.Lng) = (FIXNUM_TO_LONG (Wrd159.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd160.Lng))))
    goto label_26;
  (Wrd154.Obj) = ((Wrd158.pObj) [2]);
  (* (--Rsp)) = (Wrd154.Obj);

DEFLABEL (label_25)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_48_5);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_17]));

DEFLABEL (label_26)
  (Wrd163.Obj) = (Rsp [12]);
  (Wrd164.Obj) = (current_block [OBJECT_48_8]);
  (Wrd167.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_15]))));
  (* (--Rsp)) = (Wrd167.Obj);
  (* (--Rsp)) = (Wrd164.Obj);
  (* (--Rsp)) = (Wrd163.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd147.Obj) = (Rsp [11]);
  (Wrd148.Obj) = (current_block [OBJECT_48_10]);
  (Wrd151.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_14]))));
  (* (--Rsp)) = (Wrd151.Obj);
  (* (--Rsp)) = (Wrd148.Obj);
  (* (--Rsp)) = (Wrd147.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd131.Obj) = (Rsp [9]);
  (Wrd132.Obj) = (current_block [OBJECT_48_8]);
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_13]))));
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = (Wrd132.Obj);
  (* (--Rsp)) = (Wrd131.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_9]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd115.Obj) = (Rsp [9]);
  (Wrd116.Obj) = (current_block [OBJECT_48_7]);
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_12]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd99.Obj) = (Rsp [8]);
  (Wrd100.Obj) = (current_block [OBJECT_48_6]);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_11]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd83.Obj) = (Rsp [7]);
  (Wrd84.Obj) = (current_block [OBJECT_48_5]);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_10]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd67.Obj) = (Rsp [6]);
  (Wrd68.Obj) = (current_block [OBJECT_48_4]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_9]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd51.Obj) = (Rsp [5]);
  (Wrd52.Obj) = (current_block [OBJECT_48_3]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_8]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.Obj) = (current_block [OBJECT_48_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_48_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_43;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_6 5
#define LABEL_49_7 7
#define LABEL_49_8 9
#define LABEL_49_9 11
#define LABEL_49_10 13
#define LABEL_49_11 15
#define LABEL_49_13 17
#define LABEL_49_5 19
#define LABEL_49_12 21
#define LABEL_49_16 23
#define LABEL_49_17 25
#define LABEL_49_18 27
#define ENVIRONMENT_LABEL_49_3 45
#define DEBUGGING_LABEL_49_2 44
#define OBJECT_49_8 43
#define OBJECT_49_7 42
#define OBJECT_49_6 41
#define OBJECT_49_5 40
#define OBJECT_49_4 39
#define OBJECT_49_3 38
#define OBJECT_49_2 37
#define OBJECT_49_1 36
#define OBJECT_49_0 35
#define EXECUTE_CACHE_49_19 29
#define EXECUTE_CACHE_49_15 31
#define EXECUTE_CACHE_49_14 33
#define FREE_REFERENCES_LABEL_49_0 28
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd109;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd90;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd74;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd82;
  machine_word Wrd81;
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
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
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
      current_block = (Rpc - LABEL_49_4);
      goto parser_restore_history_12;

    case 1:
      current_block = (Rpc - LABEL_49_6);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_49_7);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_49_8);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_49_9);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_49_10);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_49_11);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_49_13);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_49_12);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_49_16);
      goto label_21;

    case 11:
      current_block = (Rpc - LABEL_49_17);
      goto label_22;

    case 12:
      current_block = (Rpc - LABEL_49_18);
      goto label_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_restore_history_25)
DEFLABEL (parser_restore_history_12)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_45;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_45;
  (Wrd10.Obj) = ((Wrd14.pObj) [11]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_44)
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_43;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd32.Lng))))
    goto label_43;
  (Wrd26.Obj) = ((Wrd30.pObj) [10]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_42)
  (Wrd49.Obj) = (Rsp [5]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 62))
    goto label_41;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd48.Lng))))
    goto label_41;
  (Wrd42.Obj) = ((Wrd46.pObj) [9]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_40)
  (Wrd65.Obj) = (Rsp [6]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 62))
    goto label_39;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd64.Lng))))
    goto label_39;
  (Wrd58.Obj) = ((Wrd62.pObj) [8]);
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_38)
  (Wrd81.Obj) = (Rsp [6]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd82.uLng) == 10))
    goto label_37;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd79.Obj) = ((Wrd78.pObj) [0]);
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd80.Lng))))
    goto label_37;
  (Wrd74.Obj) = ((Wrd78.pObj) [4]);
  (* (--Rsp)) = (Wrd74.Obj);

DEFLABEL (label_36)
  (Wrd97.Obj) = (Rsp [7]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd98.uLng) == 10))
    goto label_35;
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd95.Obj) = ((Wrd94.pObj) [0]);
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd95.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd96.Lng))))
    goto label_35;
  (Wrd90.Obj) = ((Wrd94.pObj) [3]);
  (* (--Rsp)) = (Wrd90.Obj);

DEFLABEL (label_34)
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_12]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (Wrd116.Obj) = (Rsp [9]);
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if (! ((Wrd117.uLng) == 10))
    goto label_33;
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd116.Obj));
  (Wrd114.Obj) = ((Wrd113.pObj) [0]);
  (Wrd115.Lng) = (FIXNUM_TO_LONG (Wrd114.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd115.Lng))))
    goto label_33;
  (Wrd109.Obj) = ((Wrd113.pObj) [2]);
  (* (--Rsp)) = (Wrd109.Obj);

DEFLABEL (label_32)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_49_12);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [10]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_31;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_31;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_30)
  (Wrd30.Obj) = (Rsp [11]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_29;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_29;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_28)
  (Wrd46.Obj) = (Rsp [12]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_27;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd45.Lng))))
    goto label_27;
  (Wrd39.Obj) = ((Wrd43.pObj) [2]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_19]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_49_5);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_15]));

DEFLABEL (label_27)
  (Wrd48.Obj) = (Rsp [12]);
  (Wrd49.Obj) = (current_block [OBJECT_49_8]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_18]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd32.Obj) = (Rsp [11]);
  (Wrd33.Obj) = (current_block [OBJECT_49_7]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_17]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd16.Obj) = (Rsp [10]);
  (Wrd17.Obj) = (current_block [OBJECT_49_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd118.Obj) = (Rsp [9]);
  (Wrd119.Obj) = (current_block [OBJECT_49_8]);
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_13]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_6]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd99.Obj) = (Rsp [7]);
  (Wrd100.Obj) = (current_block [OBJECT_49_7]);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_11]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_6]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd83.Obj) = (Rsp [6]);
  (Wrd84.Obj) = (current_block [OBJECT_49_5]);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_10]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_6]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd67.Obj) = (Rsp [6]);
  (Wrd68.Obj) = (current_block [OBJECT_49_4]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_9]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd51.Obj) = (Rsp [5]);
  (Wrd52.Obj) = (current_block [OBJECT_49_3]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_8]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.Obj) = (current_block [OBJECT_49_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_49_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_44;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_6 7
#define LABEL_50_7 9
#define LABEL_50_8 11
#define ENVIRONMENT_LABEL_50_3 33
#define DEBUGGING_LABEL_50_2 32
#define OBJECT_50_10 31
#define OBJECT_50_9 30
#define OBJECT_50_8 29
#define OBJECT_50_7 28
#define OBJECT_50_6 27
#define OBJECT_50_5 26
#define OBJECT_50_4 25
#define OBJECT_50_3 24
#define OBJECT_50_2 23
#define OBJECT_50_1 22
#define OBJECT_50_0 21
#define EXECUTE_CACHE_50_12 13
#define EXECUTE_CACHE_50_11 15
#define EXECUTE_CACHE_50_10 17
#define EXECUTE_CACHE_50_9 19
#define FREE_REFERENCES_LABEL_50_0 12
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd78;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd64;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd48;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd56;
  machine_word Wrd55;
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
      current_block = (Rpc - LABEL_50_4);
      goto parser_special_compiled_13;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_50_6);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_50_7);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_50_8);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_special_compiled_20)
DEFLABEL (parser_special_compiled_13)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_32;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_32;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_31)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == (current_block [OBJECT_50_2])))
    goto label_22;

DEFLABEL (label_21)
  (Wrd94.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd94.Obj);
  (Wrd95.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd95.Obj);
  (Wrd96.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd96.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  (Rsp [4]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_11]));

DEFLABEL (label_22)
  if ((Wrd21.Obj) == (current_block [OBJECT_50_0]))
    goto label_24;
  if (! ((Wrd21.Obj) == (current_block [OBJECT_50_3])))
    goto label_23;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_10]));

DEFLABEL (label_23)
  if ((Wrd21.Obj) == (current_block [OBJECT_50_5]))
    goto label_21;
  if ((Wrd21.Obj) == (current_block [OBJECT_50_6]))
    goto label_21;
  if ((Wrd21.Obj) == (current_block [OBJECT_50_7]))
    goto label_21;
  if ((Wrd21.Obj) == (current_block [OBJECT_50_8]))
    goto label_21;
  if ((Wrd21.Obj) == (current_block [OBJECT_50_9]))
    goto label_21;
  (Wrd37.Obj) = (current_block [OBJECT_50_10]);
  (Rsp [2]) = (Wrd37.Obj);
  (Rsp [3]) = (Wrd21.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_12]));

DEFLABEL (label_24)
  (Wrd55.Obj) = (Rsp [3]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_30;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd54.Lng))))
    goto label_30;
  (Wrd48.Obj) = ((Wrd52.pObj) [3]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_29)
  (Wrd71.Obj) = (Rsp [4]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 62))
    goto label_28;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd70.Lng))))
    goto label_28;
  (Wrd64.Obj) = ((Wrd68.pObj) [2]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_27)
  (Wrd87.Obj) = (Rsp [4]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if (! ((Wrd88.uLng) == 10))
    goto label_26;
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd85.Obj) = ((Wrd84.pObj) [0]);
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd86.Lng))))
    goto label_26;
  (Wrd78.Obj) = ((Wrd84.pObj) [3]);

DEFLABEL (label_25)
  (Rsp [2]) = (Wrd78.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_9]));

DEFLABEL (label_26)
  (Wrd89.Obj) = (Rsp [4]);
  (Wrd90.Obj) = (current_block [OBJECT_50_3]);
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_8]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_18)
  (Wrd78.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd73.Obj) = (Rsp [4]);
  (Wrd74.Obj) = (current_block [OBJECT_50_0]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_4]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd57.Obj) = (Rsp [3]);
  (Wrd58.Obj) = (current_block [OBJECT_50_3]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_6]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_4]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_50_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_5 3
#define LABEL_51_6 5
#define LABEL_51_4 7
#define LABEL_51_7 9
#define LABEL_51_8 11
#define LABEL_51_9 13
#define LABEL_51_10 15
#define LABEL_51_11 17
#define LABEL_51_12 19
#define LABEL_51_13 21
#define LABEL_51_14 23
#define LABEL_51_15 25
#define LABEL_51_18 27
#define LABEL_51_19 29
#define LABEL_51_20 31
#define LABEL_51_21 33
#define LABEL_51_22 35
#define LABEL_51_16 37
#define LABEL_51_26 39
#define LABEL_51_27 41
#define LABEL_51_28 43
#define LABEL_51_29 45
#define LABEL_51_30 47
#define LABEL_51_17 49
#define LABEL_51_31 51
#define LABEL_51_33 53
#define LABEL_51_36 55
#define ENVIRONMENT_LABEL_51_3 85
#define DEBUGGING_LABEL_51_2 84
#define OBJECT_51_11 83
#define OBJECT_51_10 82
#define OBJECT_51_9 81
#define OBJECT_51_8 80
#define OBJECT_51_7 79
#define OBJECT_51_6 78
#define OBJECT_51_5 77
#define OBJECT_51_4 76
#define OBJECT_51_3 75
#define OBJECT_51_2 74
#define OBJECT_51_1 73
#define OBJECT_51_0 72
#define EXECUTE_CACHE_51_35 57
#define EXECUTE_CACHE_51_34 59
#define EXECUTE_CACHE_51_32 61
#define EXECUTE_CACHE_51_25 63
#define EXECUTE_CACHE_51_24 65
#define EXECUTE_CACHE_51_23 67
#define FREE_REFERENCE_51_1 70
#define FREE_REFERENCE_51_0 71
#define FREE_REFERENCES_LABEL_51_0 56
#define NUMBER_OF_LINKER_SECTIONS_51_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd31;
  machine_word Wrd85;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd159;
  machine_word Wrd209;
  machine_word Wrd206;
  machine_word Wrd205;
  machine_word Wrd196;
  machine_word Wrd202;
  machine_word Wrd201;
  machine_word Wrd200;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd193;
  machine_word Wrd190;
  machine_word Wrd189;
  machine_word Wrd180;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd184;
  machine_word Wrd188;
  machine_word Wrd187;
  machine_word Wrd177;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd164;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd161;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd138;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd121;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd98;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd82;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd66;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd50;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd34;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd226;
  machine_word Wrd223;
  machine_word Wrd222;
  machine_word Wrd211;
  machine_word Wrd219;
  machine_word Wrd218;
  machine_word Wrd217;
  machine_word Wrd221;
  machine_word Wrd220;
  machine_word Wrd239;
  machine_word Wrd236;
  machine_word Wrd235;
  machine_word Wrd28;
  machine_word Wrd232;
  machine_word Wrd231;
  machine_word Wrd230;
  machine_word Wrd234;
  machine_word Wrd233;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_51_5);
      goto continuation_20;

    case 1:
      current_block = (Rpc - LABEL_51_6);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_51_4);
      goto parser_compiler_interrupt_restart_27;

    case 3:
      current_block = (Rpc - LABEL_51_7);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_51_8);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_51_9);
      goto label_42;

    case 6:
      current_block = (Rpc - LABEL_51_10);
      goto label_41;

    case 7:
      current_block = (Rpc - LABEL_51_11);
      goto label_31;

    case 8:
      current_block = (Rpc - LABEL_51_12);
      goto label_32;

    case 9:
      current_block = (Rpc - LABEL_51_13);
      goto label_33;

    case 10:
      current_block = (Rpc - LABEL_51_14);
      goto label_34;

    case 11:
      current_block = (Rpc - LABEL_51_15);
      goto label_35;

    case 12:
      current_block = (Rpc - LABEL_51_18);
      goto label_36;

    case 13:
      current_block = (Rpc - LABEL_51_19);
      goto label_37;

    case 14:
      current_block = (Rpc - LABEL_51_20);
      goto label_38;

    case 15:
      current_block = (Rpc - LABEL_51_21);
      goto label_39;

    case 16:
      current_block = (Rpc - LABEL_51_22);
      goto label_40;

    case 17:
      current_block = (Rpc - LABEL_51_16);
      goto continuation_24;

    case 18:
      current_block = (Rpc - LABEL_51_26);
      goto label_43;

    case 19:
      current_block = (Rpc - LABEL_51_27);
      goto label_47;

    case 20:
      current_block = (Rpc - LABEL_51_28);
      goto label_44;

    case 21:
      current_block = (Rpc - LABEL_51_29);
      goto label_45;

    case 22:
      current_block = (Rpc - LABEL_51_30);
      goto label_46;

    case 23:
      current_block = (Rpc - LABEL_51_17);
      goto continuation_23;

    case 24:
      current_block = (Rpc - LABEL_51_31);
      goto continuation_9;

    case 25:
      current_block = (Rpc - LABEL_51_33);
      goto continuation_16;

    case 26:
      current_block = (Rpc - LABEL_51_36);
      goto label_48;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_compiler_interrupt_restart_50)
DEFLABEL (parser_compiler_interrupt_restart_27)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_97;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_96)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_95;
  if (! ((Wrd5.Obj) == (current_block [OBJECT_51_1])))
    goto label_52;

DEFLABEL (label_51)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_25]));

DEFLABEL (label_52)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd233.Obj) = (Rsp [1]);
  (Wrd234.uLng) = (OBJECT_TYPE (Wrd233.Obj));
  if (! ((Wrd234.uLng) == 62))
    goto label_94;
  (Wrd230.pObj) = (OBJECT_ADDRESS (Wrd233.Obj));
  (Wrd231.Obj) = ((Wrd230.pObj) [0]);
  (Wrd232.Lng) = (FIXNUM_TO_LONG (Wrd231.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd232.Lng))))
    goto label_94;
  (Wrd28.Obj) = ((Wrd230.pObj) [4]);
  if ((Wrd28.Obj) == ((SCHEME_OBJECT) 0))
    goto label_93;

DEFLABEL (label_92)
  (Wrd220.Obj) = (Rsp [1]);
  (Wrd221.uLng) = (OBJECT_TYPE (Wrd220.Obj));
  if (! ((Wrd221.uLng) == 62))
    goto label_91;
  (Wrd217.pObj) = (OBJECT_ADDRESS (Wrd220.Obj));
  (Wrd218.Obj) = ((Wrd217.pObj) [0]);
  (Wrd219.Lng) = (FIXNUM_TO_LONG (Wrd218.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd219.Lng))))
    goto label_91;
  (Wrd211.Obj) = ((Wrd217.pObj) [3]);

DEFLABEL (label_90)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd211.Obj);

DEFLABEL (label_89)
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_88;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd40.Lng))))
    goto label_88;
  (Wrd34.Obj) = ((Wrd38.pObj) [7]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_87)
  (Wrd57.Obj) = (Rsp [4]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 62))
    goto label_86;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd56.Lng))))
    goto label_86;
  (Wrd50.Obj) = ((Wrd54.pObj) [6]);
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_85)
  (Wrd73.Obj) = (Rsp [5]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 62))
    goto label_84;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [0]);
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd72.Lng))))
    goto label_84;
  (Wrd66.Obj) = ((Wrd70.pObj) [5]);
  (* (--Rsp)) = (Wrd66.Obj);

DEFLABEL (label_83)
  (Wrd89.Obj) = (Rsp [4]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd90.uLng) == 62))
    goto label_82;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [0]);
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd87.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd88.Lng))))
    goto label_82;
  (Wrd82.Obj) = ((Wrd86.pObj) [4]);
  (* (--Rsp)) = (Wrd82.Obj);

DEFLABEL (label_81)
  (Wrd105.Obj) = (Rsp [7]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if (! ((Wrd106.uLng) == 62))
    goto label_80;
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd103.Obj) = ((Wrd102.pObj) [0]);
  (Wrd104.Lng) = (FIXNUM_TO_LONG (Wrd103.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd104.Lng))))
    goto label_80;
  (Wrd98.Obj) = ((Wrd102.pObj) [9]);
  (* (--Rsp)) = (Wrd98.Obj);

DEFLABEL (label_79)
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_16]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_17]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (Wrd118.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd128.Obj) = (Rsp [11]);
  (Wrd129.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if (! ((Wrd129.uLng) == 62))
    goto label_78;
  (Wrd125.pObj) = (OBJECT_ADDRESS (Wrd128.Obj));
  (Wrd126.Obj) = ((Wrd125.pObj) [0]);
  (Wrd127.Lng) = (FIXNUM_TO_LONG (Wrd126.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd127.Lng))))
    goto label_78;
  (Wrd121.Obj) = ((Wrd125.pObj) [10]);
  (* (--Rsp)) = (Wrd121.Obj);

DEFLABEL (label_77)
  (Wrd135.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd135.Obj);
  (Wrd145.Obj) = (Rsp [13]);
  (Wrd146.uLng) = (OBJECT_TYPE (Wrd145.Obj));
  if (! ((Wrd146.uLng) == 62))
    goto label_76;
  (Wrd142.pObj) = (OBJECT_ADDRESS (Wrd145.Obj));
  (Wrd143.Obj) = ((Wrd142.pObj) [0]);
  (Wrd144.Lng) = (FIXNUM_TO_LONG (Wrd143.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd144.Lng))))
    goto label_76;
  (Wrd138.Obj) = ((Wrd142.pObj) [8]);
  (* (--Rsp)) = (Wrd138.Obj);

DEFLABEL (label_75)
  (Wrd152.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd152.Obj);
  (Wrd153.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd153.Obj);
  (Wrd156.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd156.Obj);
  (Wrd157.Obj) = (Rsp [10]);
  if ((Wrd157.Obj) == ((SCHEME_OBJECT) 0))
    goto label_74;
  (Wrd159.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd159.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_24]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_51_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_73)
  (Wrd171.Obj) = (Rsp [17]);
  (Wrd172.uLng) = (OBJECT_TYPE (Wrd171.Obj));
  if (! ((Wrd172.uLng) == 62))
    goto label_72;
  (Wrd168.pObj) = (OBJECT_ADDRESS (Wrd171.Obj));
  (Wrd169.Obj) = ((Wrd168.pObj) [0]);
  (Wrd170.Lng) = (FIXNUM_TO_LONG (Wrd169.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd170.Lng))))
    goto label_72;
  (Wrd164.Obj) = ((Wrd168.pObj) [4]);
  (* (--Rsp)) = (Wrd164.Obj);

DEFLABEL (label_71)
  (Wrd187.Obj) = (Rsp [18]);
  (Wrd188.uLng) = (OBJECT_TYPE (Wrd187.Obj));
  if (! ((Wrd188.uLng) == 62))
    goto label_70;
  (Wrd184.pObj) = (OBJECT_ADDRESS (Wrd187.Obj));
  (Wrd185.Obj) = ((Wrd184.pObj) [0]);
  (Wrd186.Lng) = (FIXNUM_TO_LONG (Wrd185.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd186.Lng))))
    goto label_70;
  (Wrd180.Obj) = ((Wrd184.pObj) [3]);
  (* (--Rsp)) = (Wrd180.Obj);

DEFLABEL (label_69)
  (Wrd203.Obj) = (Rsp [19]);
  (Wrd204.uLng) = (OBJECT_TYPE (Wrd203.Obj));
  if (! ((Wrd204.uLng) == 62))
    goto label_68;
  (Wrd200.pObj) = (OBJECT_ADDRESS (Wrd203.Obj));
  (Wrd201.Obj) = ((Wrd200.pObj) [0]);
  (Wrd202.Lng) = (FIXNUM_TO_LONG (Wrd201.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd202.Lng))))
    goto label_68;
  (Wrd196.Obj) = ((Wrd200.pObj) [2]);
  (* (--Rsp)) = (Wrd196.Obj);

DEFLABEL (label_67)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_23]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_51_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_51_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_34]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_51_33);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_66;
  Wrd5 = Wrd9;

DEFLABEL (label_65)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_25]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_51_16);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [9]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_64;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd13.Lng))))
    goto label_64;
  (Wrd7.Obj) = ((Wrd11.pObj) [11]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_63)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd25.Lng) = ((Wrd24.Lng) + 3L);
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [10]);
  if ((Wrd29.Obj) == ((SCHEME_OBJECT) 0))
    goto label_60;
  (Wrd31.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_59)
  (Wrd41.Obj) = (Rsp [14]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_58;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd40.Lng))))
    goto label_58;
  (Wrd34.Obj) = ((Wrd38.pObj) [4]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_57)
  (Wrd57.Obj) = (Rsp [15]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 62))
    goto label_56;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd56.Lng))))
    goto label_56;
  (Wrd50.Obj) = ((Wrd54.pObj) [3]);
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_55)
  (Wrd73.Obj) = (Rsp [16]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 62))
    goto label_54;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [0]);
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd72.Lng))))
    goto label_54;
  (Wrd66.Obj) = ((Wrd70.pObj) [2]);
  (* (--Rsp)) = (Wrd66.Obj);

DEFLABEL (label_53)
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_31]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (Wrd83.Obj) = (current_block [OBJECT_51_1]);
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd84.Obj) = (Rsp [18]);
  (* (--Rsp)) = (Wrd84.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_32]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_51_31);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [16]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.pObj) = (& (Rsp [20]));
  {
    SCHEME_OBJECT * MFUp1 = (& (Rsp [11]));
    SCHEME_OBJECT * MFUp2 = (Wrd6.pObj);
    while (MFUp1 > Rsp)
      {
	(* (--MFUp2)) = (* (--MFUp1));
      }
    Rsp = MFUp2;
  }
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_35]));

DEFLABEL (label_54)
  (Wrd75.Obj) = (Rsp [16]);
  (Wrd76.Obj) = (current_block [OBJECT_51_10]);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_30]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd59.Obj) = (Rsp [15]);
  (Wrd60.Obj) = (current_block [OBJECT_51_3]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_29]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd43.Obj) = (Rsp [14]);
  (Wrd44.Obj) = (current_block [OBJECT_51_1]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_28]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd86.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_0]));
  (Wrd89.Obj) = ((Wrd86.pObj) [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if ((Wrd90.uLng) == 50)
    goto label_62;
  Wrd85 = Wrd89;

DEFLABEL (label_61)
  (* (--Rsp)) = (Wrd85.Obj);
  goto label_59;

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_27])), (Wrd86.pObj));

DEFLABEL (label_47)
  (Wrd85.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd16.Obj) = (Rsp [9]);
  (Wrd17.Obj) = (current_block [OBJECT_51_11]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_26]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_36])), (Wrd6.pObj));

DEFLABEL (label_48)
  (Wrd5.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd205.Obj) = (Rsp [19]);
  (Wrd206.Obj) = (current_block [OBJECT_51_10]);
  (Wrd209.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_22]))));
  (* (--Rsp)) = (Wrd209.Obj);
  (* (--Rsp)) = (Wrd206.Obj);
  (* (--Rsp)) = (Wrd205.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd189.Obj) = (Rsp [18]);
  (Wrd190.Obj) = (current_block [OBJECT_51_3]);
  (Wrd193.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_21]))));
  (* (--Rsp)) = (Wrd193.Obj);
  (* (--Rsp)) = (Wrd190.Obj);
  (* (--Rsp)) = (Wrd189.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd173.Obj) = (Rsp [17]);
  (Wrd174.Obj) = (current_block [OBJECT_51_1]);
  (Wrd177.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_20]))));
  (* (--Rsp)) = (Wrd177.Obj);
  (* (--Rsp)) = (Wrd174.Obj);
  (* (--Rsp)) = (Wrd173.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd161.Obj) = (Rsp [11]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd161.Obj);
  goto label_73;

DEFLABEL (label_76)
  (Wrd147.Obj) = (Rsp [13]);
  (Wrd148.Obj) = (current_block [OBJECT_51_9]);
  (Wrd151.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_19]))));
  (* (--Rsp)) = (Wrd151.Obj);
  (* (--Rsp)) = (Wrd148.Obj);
  (* (--Rsp)) = (Wrd147.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd130.Obj) = (Rsp [11]);
  (Wrd131.Obj) = (current_block [OBJECT_51_8]);
  (Wrd134.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_18]))));
  (* (--Rsp)) = (Wrd134.Obj);
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd130.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd107.Obj) = (Rsp [7]);
  (Wrd108.Obj) = (current_block [OBJECT_51_7]);
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_15]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd91.Obj) = (Rsp [4]);
  (Wrd92.Obj) = (current_block [OBJECT_51_1]);
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_14]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd75.Obj) = (Rsp [5]);
  (Wrd76.Obj) = (current_block [OBJECT_51_6]);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_13]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd59.Obj) = (Rsp [4]);
  (Wrd60.Obj) = (current_block [OBJECT_51_5]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_12]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd44.Obj) = (current_block [OBJECT_51_4]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_11]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_87;

DEFLABEL (label_91)
  (Wrd222.Obj) = (Rsp [1]);
  (Wrd223.Obj) = (current_block [OBJECT_51_3]);
  (Wrd226.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_10]))));
  (* (--Rsp)) = (Wrd226.Obj);
  (* (--Rsp)) = (Wrd223.Obj);
  (* (--Rsp)) = (Wrd222.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_41)
  (Wrd211.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_89;

DEFLABEL (label_94)
  (Wrd235.Obj) = (Rsp [1]);
  (Wrd236.Obj) = (current_block [OBJECT_51_1]);
  (Wrd239.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_9]))));
  (* (--Rsp)) = (Wrd239.Obj);
  (* (--Rsp)) = (Wrd236.Obj);
  (* (--Rsp)) = (Wrd235.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_42)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_93;
  goto label_92;

DEFLABEL (label_95)
  (Wrd17.Obj) = (current_block [OBJECT_51_1]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_30)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  goto label_51;

DEFLABEL (label_97)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_0]), 1);

DEFLABEL (label_29)
  (Wrd5.Obj) = Rvl;
  goto label_96;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_51_6);
  (* (--Rsp)) = Rvl;
  goto label_89;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_7 5
#define LABEL_52_8 7
#define LABEL_52_9 9
#define LABEL_52_12 11
#define LABEL_52_13 13
#define LABEL_52_5 15
#define TAG_52_6 6
#define LABEL_52_16 17
#define LABEL_52_17 19
#define LABEL_52_18 21
#define LABEL_52_20 23
#define LABEL_52_22 25
#define LABEL_52_23 27
#define LABEL_52_24 29
#define LABEL_52_25 31
#define LABEL_52_26 33
#define LABEL_52_27 35
#define LABEL_52_28 37
#define LABEL_52_29 39
#define LABEL_52_30 41
#define LABEL_52_14 43
#define TAG_52_15 20
#define LABEL_52_10 45
#define TAG_52_11 21
#define LABEL_52_31 47
#define LABEL_52_19 49
#define ENVIRONMENT_LABEL_52_3 66
#define DEBUGGING_LABEL_52_2 65
#define OBJECT_52_4 64
#define OBJECT_52_3 63
#define OBJECT_52_2 62
#define OBJECT_52_1 61
#define OBJECT_52_0 60
#define EXECUTE_CACHE_52_32 51
#define EXECUTE_CACHE_52_21 53
#define FREE_REFERENCE_52_3 56
#define FREE_REFERENCE_52_2 57
#define FREE_REFERENCE_52_1 58
#define FREE_REFERENCE_52_0 59
#define FREE_REFERENCES_LABEL_52_0 50
#define NUMBER_OF_LINKER_SECTIONS_52_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd95;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd76;
  machine_word Wrd57;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd52;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd149;
  machine_word Wrd146;
  machine_word Wrd143;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd130;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd121;
  machine_word Wrd118;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd105;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd198;
  machine_word Wrd195;
  machine_word Wrd192;
  machine_word Wrd194;
  machine_word Wrd193;
  machine_word Wrd179;
  machine_word Wrd187;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd191;
  machine_word Wrd190;
  machine_word Wrd189;
  machine_word Wrd188;
  machine_word Wrd174;
  machine_word Wrd171;
  machine_word Wrd168;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd155;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd150;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd274;
  machine_word Wrd271;
  machine_word Wrd268;
  machine_word Wrd270;
  machine_word Wrd269;
  machine_word Wrd255;
  machine_word Wrd263;
  machine_word Wrd262;
  machine_word Wrd261;
  machine_word Wrd267;
  machine_word Wrd266;
  machine_word Wrd265;
  machine_word Wrd264;
  machine_word Wrd250;
  machine_word Wrd249;
  machine_word Wrd246;
  machine_word Wrd243;
  machine_word Wrd240;
  machine_word Wrd242;
  machine_word Wrd241;
  machine_word Wrd227;
  machine_word Wrd235;
  machine_word Wrd234;
  machine_word Wrd233;
  machine_word Wrd239;
  machine_word Wrd238;
  machine_word Wrd237;
  machine_word Wrd236;
  machine_word Wrd222;
  machine_word Wrd219;
  machine_word Wrd216;
  machine_word Wrd218;
  machine_word Wrd217;
  machine_word Wrd203;
  machine_word Wrd211;
  machine_word Wrd210;
  machine_word Wrd209;
  machine_word Wrd215;
  machine_word Wrd214;
  machine_word Wrd213;
  machine_word Wrd212;
  machine_word Wrd10;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd40;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd61;
  machine_word Wrd99;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd96;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd81;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd65;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_52_4);
      goto parser_stack_marker_27;

    case 1:
      current_block = (Rpc - LABEL_52_7);
      goto label_29;

    case 2:
      current_block = (Rpc - LABEL_52_8);
      goto label_32;

    case 3:
      current_block = (Rpc - LABEL_52_9);
      goto label_33;

    case 4:
      current_block = (Rpc - LABEL_52_12);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_52_13);
      goto label_31;

    case 6:
      current_block = (Rpc - LABEL_52_5);
      goto lambda_49;

    case 7:
      current_block = (Rpc - LABEL_52_16);
      goto label_34;

    case 8:
      current_block = (Rpc - LABEL_52_17);
      goto label_44;

    case 9:
      current_block = (Rpc - LABEL_52_18);
      goto label_45;

    case 10:
      current_block = (Rpc - LABEL_52_20);
      goto label_46;

    case 11:
      current_block = (Rpc - LABEL_52_22);
      goto label_35;

    case 12:
      current_block = (Rpc - LABEL_52_23);
      goto label_42;

    case 13:
      current_block = (Rpc - LABEL_52_24);
      goto label_43;

    case 14:
      current_block = (Rpc - LABEL_52_25);
      goto label_36;

    case 15:
      current_block = (Rpc - LABEL_52_26);
      goto label_40;

    case 16:
      current_block = (Rpc - LABEL_52_27);
      goto label_41;

    case 17:
      current_block = (Rpc - LABEL_52_28);
      goto label_37;

    case 18:
      current_block = (Rpc - LABEL_52_29);
      goto label_38;

    case 19:
      current_block = (Rpc - LABEL_52_30);
      goto label_39;

    case 20:
      current_block = (Rpc - LABEL_52_14);
      goto lambda_51;

    case 21:
      current_block = (Rpc - LABEL_52_10);
      goto lambda_50;

    case 22:
      current_block = (Rpc - LABEL_52_31);
      goto lambda_0;

    case 23:
      current_block = (Rpc - LABEL_52_19);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_stack_marker_48)
DEFLABEL (parser_stack_marker_27)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_52_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_52_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_64;
  Wrd15 = Wrd19;

DEFLABEL (label_63)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == (Wrd15.Obj))
    goto label_58;
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_57;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd30.Lng))))
    goto label_57;
  (Wrd24.Obj) = ((Wrd28.pObj) [4]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_56)
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_55;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd46.Lng))))
    goto label_55;
  (Wrd40.Obj) = ((Wrd44.pObj) [3]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_54)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd56.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_52_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_52_14])));
  Rhp += 2;
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd56.pObj)));
  Wrd59 = Wrd56;
  (Wrd60.Obj) = (Rsp [1]);
  ((Wrd59.pObj) [2]) = (Wrd60.Obj);
  (Wrd58.Obj) = (Rsp [0]);
  ((Wrd59.pObj) [3]) = (Wrd58.Obj);
  Wrd61 = Wrd55;

DEFLABEL (label_53)
  Rsp = (& (Rsp [2]));
  (Rsp [1]) = (Wrd61.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_55)
  (Wrd49.Obj) = (Rsp [2]);
  (Wrd50.Obj) = (current_block [OBJECT_52_0]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_13]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.Obj) = (current_block [OBJECT_52_3]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_12]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_58)
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 10))
    goto label_62;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd71.Lng))))
    goto label_62;
  (Wrd65.Obj) = ((Wrd69.pObj) [3]);
  (* (--Rsp)) = (Wrd65.Obj);

DEFLABEL (label_61)
  (Wrd88.Obj) = (Rsp [2]);
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if (! ((Wrd89.uLng) == 10))
    goto label_60;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd87.Lng))))
    goto label_60;
  (Wrd81.Obj) = ((Wrd85.pObj) [2]);
  (* (--Rsp)) = (Wrd81.Obj);

DEFLABEL (label_59)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd97.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_52_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_52_10])));
  Rhp += 2;
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd97.pObj)));
  Wrd100 = Wrd97;
  (Wrd101.Obj) = (Rsp [1]);
  ((Wrd100.pObj) [2]) = (Wrd101.Obj);
  (Wrd99.Obj) = (Rsp [0]);
  ((Wrd100.pObj) [3]) = (Wrd99.Obj);
  Wrd61 = Wrd96;
  goto label_53;

DEFLABEL (label_60)
  (Wrd90.Obj) = (Rsp [2]);
  (Wrd91.Obj) = (current_block [OBJECT_52_2]);
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_9]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd74.Obj) = (Rsp [1]);
  (Wrd75.Obj) = (current_block [OBJECT_52_0]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_8]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_7])), (Wrd16.pObj));

DEFLABEL (label_29)
  (Wrd15.Obj) = Rvl;
  goto label_63;

DEFLABEL (lambda_49)
  CLOSURE_HEADER (LABEL_52_5);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_92;
  Wrd6 = Wrd10;

DEFLABEL (label_91)
  (Wrd12.Obj) = (Rsp [1]);
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_84;
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_2]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_83;
  Wrd14 = Wrd18;

DEFLABEL (label_82)
  (Wrd20.Obj) = (Rsp [1]);
  if ((Wrd20.Obj) == (Wrd14.Obj))
    goto label_78;
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_3]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_77;
  Wrd22 = Wrd26;

DEFLABEL (label_76)
  (Wrd28.Obj) = (Rsp [1]);
  if ((Wrd28.Obj) == (Wrd22.Obj))
    goto label_72;
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [2]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 62))
    goto label_71;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd41.Lng))))
    goto label_71;
  (Wrd33.Obj) = ((Wrd39.pObj) [4]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_70)
  (Wrd66.Obj) = (Rsp [1]);
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [2]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 62))
    goto label_69;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd65.Lng))))
    goto label_69;
  (Wrd57.Obj) = ((Wrd63.pObj) [3]);
  (* (--Rsp)) = (Wrd57.Obj);

DEFLABEL (label_68)
  (Wrd90.Obj) = (Rsp [2]);
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd92.Obj) = ((Wrd91.pObj) [2]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd93.uLng) == 62))
    goto label_66;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd88.Obj) = ((Wrd87.pObj) [0]);
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd88.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd89.Lng))))
    goto label_66;
  (Wrd81.Obj) = ((Wrd87.pObj) [2]);
  (* (--Rsp)) = (Wrd81.Obj);

DEFLABEL (label_65)
  goto lambda_0;

DEFLABEL (label_66)
  (Wrd95.Obj) = (Rsp [2]);
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd94.Obj) = ((Wrd96.pObj) [2]);
  (Wrd97.Obj) = (current_block [OBJECT_52_2]);
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_30]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_4]), 2);

DEFLABEL (label_39)
DEFLABEL (label_67)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_69)
  (Wrd71.Obj) = (Rsp [1]);
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd70.Obj) = ((Wrd72.pObj) [2]);
  (Wrd73.Obj) = (current_block [OBJECT_52_0]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_29]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_4]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [2]);
  (Wrd49.Obj) = (current_block [OBJECT_52_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_28]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_4]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_72)
  (Wrd114.Obj) = (Rsp [0]);
  (Wrd115.pObj) = (OBJECT_ADDRESS (Wrd114.Obj));
  (Wrd116.Obj) = ((Wrd115.pObj) [2]);
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if (! ((Wrd117.uLng) == 62))
    goto label_75;
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd116.Obj));
  (Wrd112.Obj) = ((Wrd111.pObj) [0]);
  (Wrd113.Lng) = (FIXNUM_TO_LONG (Wrd112.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd113.Lng))))
    goto label_75;
  (Wrd105.Obj) = ((Wrd111.pObj) [4]);
  (* (--Rsp)) = (Wrd105.Obj);

DEFLABEL (label_74)
  (Wrd125.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd125.Obj);
  (Wrd139.Obj) = (Rsp [2]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [2]);
  (Wrd142.uLng) = (OBJECT_TYPE (Wrd141.Obj));
  if (! ((Wrd142.uLng) == 62))
    goto label_73;
  (Wrd136.pObj) = (OBJECT_ADDRESS (Wrd141.Obj));
  (Wrd137.Obj) = ((Wrd136.pObj) [0]);
  (Wrd138.Lng) = (FIXNUM_TO_LONG (Wrd137.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd138.Lng))))
    goto label_73;
  (Wrd130.Obj) = ((Wrd136.pObj) [2]);
  (* (--Rsp)) = (Wrd130.Obj);
  goto label_65;

DEFLABEL (label_73)
  (Wrd144.Obj) = (Rsp [2]);
  (Wrd145.pObj) = (OBJECT_ADDRESS (Wrd144.Obj));
  (Wrd143.Obj) = ((Wrd145.pObj) [2]);
  (Wrd146.Obj) = (current_block [OBJECT_52_2]);
  (Wrd149.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_27]))));
  (* (--Rsp)) = (Wrd149.Obj);
  (* (--Rsp)) = (Wrd146.Obj);
  (* (--Rsp)) = (Wrd143.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_4]), 2);

DEFLABEL (label_41)
  goto label_67;

DEFLABEL (label_75)
  (Wrd119.Obj) = (Rsp [0]);
  (Wrd120.pObj) = (OBJECT_ADDRESS (Wrd119.Obj));
  (Wrd118.Obj) = ((Wrd120.pObj) [2]);
  (Wrd121.Obj) = (current_block [OBJECT_52_3]);
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_26]))));
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_4]), 2);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_25])), (Wrd23.pObj));

DEFLABEL (label_36)
  (Wrd22.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_78)
  (Wrd150.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd150.Obj);
  (Wrd164.Obj) = (Rsp [1]);
  (Wrd165.pObj) = (OBJECT_ADDRESS (Wrd164.Obj));
  (Wrd166.Obj) = ((Wrd165.pObj) [2]);
  (Wrd167.uLng) = (OBJECT_TYPE (Wrd166.Obj));
  if (! ((Wrd167.uLng) == 62))
    goto label_81;
  (Wrd161.pObj) = (OBJECT_ADDRESS (Wrd166.Obj));
  (Wrd162.Obj) = ((Wrd161.pObj) [0]);
  (Wrd163.Lng) = (FIXNUM_TO_LONG (Wrd162.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd163.Lng))))
    goto label_81;
  (Wrd155.Obj) = ((Wrd161.pObj) [3]);
  (* (--Rsp)) = (Wrd155.Obj);

DEFLABEL (label_80)
  (Wrd188.Obj) = (Rsp [2]);
  (Wrd189.pObj) = (OBJECT_ADDRESS (Wrd188.Obj));
  (Wrd190.Obj) = ((Wrd189.pObj) [2]);
  (Wrd191.uLng) = (OBJECT_TYPE (Wrd190.Obj));
  if (! ((Wrd191.uLng) == 62))
    goto label_79;
  (Wrd185.pObj) = (OBJECT_ADDRESS (Wrd190.Obj));
  (Wrd186.Obj) = ((Wrd185.pObj) [0]);
  (Wrd187.Lng) = (FIXNUM_TO_LONG (Wrd186.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd187.Lng))))
    goto label_79;
  (Wrd179.Obj) = ((Wrd185.pObj) [2]);
  (* (--Rsp)) = (Wrd179.Obj);
  goto label_65;

DEFLABEL (label_79)
  (Wrd193.Obj) = (Rsp [2]);
  (Wrd194.pObj) = (OBJECT_ADDRESS (Wrd193.Obj));
  (Wrd192.Obj) = ((Wrd194.pObj) [2]);
  (Wrd195.Obj) = (current_block [OBJECT_52_2]);
  (Wrd198.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_24]))));
  (* (--Rsp)) = (Wrd198.Obj);
  (* (--Rsp)) = (Wrd195.Obj);
  (* (--Rsp)) = (Wrd192.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_4]), 2);

DEFLABEL (label_43)
  goto label_67;

DEFLABEL (label_81)
  (Wrd169.Obj) = (Rsp [1]);
  (Wrd170.pObj) = (OBJECT_ADDRESS (Wrd169.Obj));
  (Wrd168.Obj) = ((Wrd170.pObj) [2]);
  (Wrd171.Obj) = (current_block [OBJECT_52_0]);
  (Wrd174.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_23]))));
  (* (--Rsp)) = (Wrd174.Obj);
  (* (--Rsp)) = (Wrd171.Obj);
  (* (--Rsp)) = (Wrd168.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_4]), 2);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_22])), (Wrd15.pObj));

DEFLABEL (label_35)
  (Wrd14.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_84)
  (Wrd212.Obj) = (Rsp [0]);
  (Wrd213.pObj) = (OBJECT_ADDRESS (Wrd212.Obj));
  (Wrd214.Obj) = ((Wrd213.pObj) [2]);
  (Wrd215.uLng) = (OBJECT_TYPE (Wrd214.Obj));
  if (! ((Wrd215.uLng) == 62))
    goto label_90;
  (Wrd209.pObj) = (OBJECT_ADDRESS (Wrd214.Obj));
  (Wrd210.Obj) = ((Wrd209.pObj) [0]);
  (Wrd211.Lng) = (FIXNUM_TO_LONG (Wrd210.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd211.Lng))))
    goto label_90;
  (Wrd203.Obj) = ((Wrd209.pObj) [4]);
  (* (--Rsp)) = (Wrd203.Obj);

DEFLABEL (label_89)
  (Wrd236.Obj) = (Rsp [1]);
  (Wrd237.pObj) = (OBJECT_ADDRESS (Wrd236.Obj));
  (Wrd238.Obj) = ((Wrd237.pObj) [2]);
  (Wrd239.uLng) = (OBJECT_TYPE (Wrd238.Obj));
  if (! ((Wrd239.uLng) == 62))
    goto label_88;
  (Wrd233.pObj) = (OBJECT_ADDRESS (Wrd238.Obj));
  (Wrd234.Obj) = ((Wrd233.pObj) [0]);
  (Wrd235.Lng) = (FIXNUM_TO_LONG (Wrd234.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd235.Lng))))
    goto label_88;
  (Wrd227.Obj) = ((Wrd233.pObj) [3]);
  (* (--Rsp)) = (Wrd227.Obj);

DEFLABEL (label_87)
  (Wrd249.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_19]))));
  (* (--Rsp)) = (Wrd249.Obj);
  (Wrd250.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd250.Obj);
  (Wrd264.Obj) = (Rsp [4]);
  (Wrd265.pObj) = (OBJECT_ADDRESS (Wrd264.Obj));
  (Wrd266.Obj) = ((Wrd265.pObj) [2]);
  (Wrd267.uLng) = (OBJECT_TYPE (Wrd266.Obj));
  if (! ((Wrd267.uLng) == 62))
    goto label_86;
  (Wrd261.pObj) = (OBJECT_ADDRESS (Wrd266.Obj));
  (Wrd262.Obj) = ((Wrd261.pObj) [0]);
  (Wrd263.Lng) = (FIXNUM_TO_LONG (Wrd262.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd263.Lng))))
    goto label_86;
  (Wrd255.Obj) = ((Wrd261.pObj) [2]);
  (* (--Rsp)) = (Wrd255.Obj);

DEFLABEL (label_85)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_21]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_52_19);
  (* (--Rsp)) = Rvl;
  goto lambda_0;

DEFLABEL (label_86)
  (Wrd269.Obj) = (Rsp [4]);
  (Wrd270.pObj) = (OBJECT_ADDRESS (Wrd269.Obj));
  (Wrd268.Obj) = ((Wrd270.pObj) [2]);
  (Wrd271.Obj) = (current_block [OBJECT_52_2]);
  (Wrd274.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_20]))));
  (* (--Rsp)) = (Wrd274.Obj);
  (* (--Rsp)) = (Wrd271.Obj);
  (* (--Rsp)) = (Wrd268.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_4]), 2);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd241.Obj) = (Rsp [1]);
  (Wrd242.pObj) = (OBJECT_ADDRESS (Wrd241.Obj));
  (Wrd240.Obj) = ((Wrd242.pObj) [2]);
  (Wrd243.Obj) = (current_block [OBJECT_52_0]);
  (Wrd246.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_18]))));
  (* (--Rsp)) = (Wrd246.Obj);
  (* (--Rsp)) = (Wrd243.Obj);
  (* (--Rsp)) = (Wrd240.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_4]), 2);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd217.Obj) = (Rsp [0]);
  (Wrd218.pObj) = (OBJECT_ADDRESS (Wrd217.Obj));
  (Wrd216.Obj) = ((Wrd218.pObj) [2]);
  (Wrd219.Obj) = (current_block [OBJECT_52_3]);
  (Wrd222.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_17]))));
  (* (--Rsp)) = (Wrd222.Obj);
  (* (--Rsp)) = (Wrd219.Obj);
  (* (--Rsp)) = (Wrd216.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_4]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_16])), (Wrd7.pObj));

DEFLABEL (label_34)
  (Wrd6.Obj) = Rvl;
  goto label_91;

DEFLABEL (lambda_51)
  CLOSURE_HEADER (LABEL_52_14);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  goto lambda_16;

DEFLABEL (lambda_50)
  CLOSURE_HEADER (LABEL_52_10);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  goto lambda_16;

DEFLABEL (lambda_52)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_52_31);
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [5]) = (Wrd8.Obj);
  (Wrd11.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [3]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_32]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_6 5
#define LABEL_53_7 7
#define LABEL_53_8 9
#define LABEL_53_9 11
#define LABEL_53_10 13
#define LABEL_53_11 15
#define LABEL_53_12 17
#define LABEL_53_5 19
#define ENVIRONMENT_LABEL_53_3 34
#define DEBUGGING_LABEL_53_2 33
#define OBJECT_53_7 32
#define OBJECT_53_6 31
#define OBJECT_53_5 30
#define OBJECT_53_4 29
#define OBJECT_53_3 28
#define OBJECT_53_2 27
#define OBJECT_53_1 26
#define OBJECT_53_0 25
#define EXECUTE_CACHE_53_14 21
#define EXECUTE_CACHE_53_13 23
#define FREE_REFERENCES_LABEL_53_0 20
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd106;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd90;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd74;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd82;
  machine_word Wrd81;
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
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
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
      current_block = (Rpc - LABEL_53_4);
      goto parser__stack_marker_8;

    case 1:
      current_block = (Rpc - LABEL_53_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_53_7);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_53_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_53_9);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_53_10);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_53_11);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_53_12);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_53_5);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser__stack_marker_18)
DEFLABEL (parser__stack_marker_8)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_32;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_32;
  (Wrd10.Obj) = ((Wrd14.pObj) [11]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_31)
  (Wrd33.Obj) = (Rsp [7]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_30;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd32.Lng))))
    goto label_30;
  (Wrd26.Obj) = ((Wrd30.pObj) [10]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_29)
  (Wrd49.Obj) = (Rsp [8]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 62))
    goto label_28;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd48.Lng))))
    goto label_28;
  (Wrd42.Obj) = ((Wrd46.pObj) [9]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_27)
  (Wrd65.Obj) = (Rsp [9]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 62))
    goto label_26;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd64.Lng))))
    goto label_26;
  (Wrd58.Obj) = ((Wrd62.pObj) [8]);
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_25)
  (Wrd81.Obj) = (Rsp [10]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd82.uLng) == 62))
    goto label_24;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd79.Obj) = ((Wrd78.pObj) [0]);
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd80.Lng))))
    goto label_24;
  (Wrd74.Obj) = ((Wrd78.pObj) [7]);
  (* (--Rsp)) = (Wrd74.Obj);

DEFLABEL (label_23)
  (Wrd97.Obj) = (Rsp [11]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd98.uLng) == 62))
    goto label_22;
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd95.Obj) = ((Wrd94.pObj) [0]);
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd95.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd96.Lng))))
    goto label_22;
  (Wrd90.Obj) = ((Wrd94.pObj) [6]);
  (* (--Rsp)) = (Wrd90.Obj);

DEFLABEL (label_21)
  (Wrd113.Obj) = (Rsp [12]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd114.uLng) == 62))
    goto label_20;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd111.Obj) = ((Wrd110.pObj) [0]);
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd111.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd112.Lng))))
    goto label_20;
  (Wrd106.Obj) = ((Wrd110.pObj) [5]);
  (* (--Rsp)) = (Wrd106.Obj);

DEFLABEL (label_19)
  (Wrd120.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd120.Obj);
  (Wrd121.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd121.Obj);
  (Wrd122.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd122.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_53_5);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_14]));

DEFLABEL (label_20)
  (Wrd115.Obj) = (Rsp [12]);
  (Wrd116.Obj) = (current_block [OBJECT_53_7]);
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_12]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd99.Obj) = (Rsp [11]);
  (Wrd100.Obj) = (current_block [OBJECT_53_6]);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_11]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd83.Obj) = (Rsp [10]);
  (Wrd84.Obj) = (current_block [OBJECT_53_5]);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_10]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd67.Obj) = (Rsp [9]);
  (Wrd68.Obj) = (current_block [OBJECT_53_4]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_9]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd51.Obj) = (Rsp [8]);
  (Wrd52.Obj) = (current_block [OBJECT_53_3]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_8]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd35.Obj) = (Rsp [7]);
  (Wrd36.Obj) = (current_block [OBJECT_53_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd19.Obj) = (Rsp [6]);
  (Wrd20.Obj) = (current_block [OBJECT_53_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define LABEL_54_6 7
#define LABEL_54_7 9
#define LABEL_54_8 11
#define LABEL_54_9 13
#define LABEL_54_10 15
#define ENVIRONMENT_LABEL_54_3 25
#define DEBUGGING_LABEL_54_2 24
#define OBJECT_54_4 23
#define OBJECT_54_3 22
#define OBJECT_54_2 21
#define OBJECT_54_1 20
#define OBJECT_54_0 19
#define FREE_REFERENCE_54_1 17
#define FREE_REFERENCE_54_0 18
#define FREE_REFERENCES_LABEL_54_0 16
#define NUMBER_OF_LINKER_SECTIONS_54_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd71;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd78;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd55;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd31;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_54_4);
      goto stack_frame_stack_markerP_8;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_54_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_54_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_54_8);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_54_9);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_54_10);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_stack_markerP_17)
DEFLABEL (stack_frame_stack_markerP_8)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_33;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_33;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_32)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_31;
  Wrd22 = Wrd26;

DEFLABEL (label_30)
  (Wrd28.Obj) = (* (Rsp++));
  if ((Wrd22.Obj) == (Wrd28.Obj))
    goto label_21;
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 62))
    goto label_29;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd37.Lng))))
    goto label_29;
  (Wrd31.Obj) = ((Wrd35.pObj) [2]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_28)
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_1]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_27;
  Wrd46 = Wrd50;

DEFLABEL (label_26)
  (Wrd52.Obj) = (* (Rsp++));
  if ((Wrd46.Obj) == (Wrd52.Obj))
    goto label_20;

DEFLABEL (label_19)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_18)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd64.Obj) = (Rsp [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 62))
    goto label_25;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd63.Lng))))
    goto label_25;
  (Wrd55.Obj) = ((Wrd61.pObj) [3]);

DEFLABEL (label_24)
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd78.uLng) == 10))
    goto label_23;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [0]);
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd77.Lng))))
    goto label_23;
  (Wrd71.Obj) = ((Wrd75.pObj) [2]);

DEFLABEL (label_22)
  (Rsp [0]) = (Wrd71.Obj);
  if ((Wrd71.Obj) == (current_block [OBJECT_54_0]))
    goto label_21;
  if (! ((Wrd71.Obj) == (current_block [OBJECT_54_2])))
    goto label_19;

DEFLABEL (label_21)
  Rvl = (current_block [OBJECT_54_4]);
  goto label_18;

DEFLABEL (label_23)
  (Wrd80.Obj) = (current_block [OBJECT_54_0]);
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_10]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_3]), 2);

DEFLABEL (label_15)
  (Wrd71.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd67.Obj) = (current_block [OBJECT_54_2]);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_9]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 2);

DEFLABEL (label_14)
  (Wrd55.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_8])), (Wrd47.pObj));

DEFLABEL (label_13)
  (Wrd46.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.Obj) = (current_block [OBJECT_54_0]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_7]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_6])), (Wrd23.pObj));

DEFLABEL (label_11)
  (Wrd22.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_54_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define LABEL_55_6 7
#define LABEL_55_7 9
#define LABEL_55_8 11
#define ENVIRONMENT_LABEL_55_3 19
#define DEBUGGING_LABEL_55_2 18
#define OBJECT_55_3 17
#define OBJECT_55_2 16
#define OBJECT_55_1 15
#define OBJECT_55_0 14
#define FREE_REFERENCE_55_0 13
#define FREE_REFERENCES_LABEL_55_0 12
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd31;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd60;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_55_4);
      goto stack_marker_frame_type_4;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_55_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_55_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_55_8);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_marker_frame_type_11)
DEFLABEL (stack_marker_frame_type_4)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_23;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_23;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_22)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_21;
  Wrd22 = Wrd26;

DEFLABEL (label_20)
  (Wrd28.Obj) = (* (Rsp++));
  if ((Wrd22.Obj) == (Wrd28.Obj))
    goto label_17;
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 62))
    goto label_16;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd37.Lng))))
    goto label_16;
  (Wrd31.Obj) = ((Wrd35.pObj) [3]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_15)
  (Wrd45.Obj) = (current_block [OBJECT_55_2]);
  (Rsp [1]) = (Wrd45.Obj);
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd57.uLng) == 10)
    goto label_13;

DEFLABEL (label_12)
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_3]), 2);

DEFLABEL (label_13)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd55.Lng))))
    goto label_12;
  Rvl = ((Wrd53.pObj) [3]);

DEFLABEL (label_14)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.Obj) = (current_block [OBJECT_55_2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_8]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_17)
  (Wrd67.Obj) = (Rsp [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 62))
    goto label_19;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd66.Lng))))
    goto label_19;
  (Wrd60.Obj) = ((Wrd64.pObj) [3]);
  (* (--Rsp)) = (Wrd60.Obj);

DEFLABEL (label_18)
  (Wrd74.Obj) = (current_block [OBJECT_55_0]);
  (Rsp [1]) = (Wrd74.Obj);
  (Wrd85.Obj) = (Rsp [0]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 10))
    goto label_12;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [0]);
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd83.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd84.Lng))))
    goto label_12;
  Rvl = ((Wrd82.pObj) [2]);
  goto label_14;

DEFLABEL (label_19)
  (Wrd69.Obj) = (Rsp [0]);
  (Wrd70.Obj) = (current_block [OBJECT_55_2]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_7]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55_6])), (Wrd23.pObj));

DEFLABEL (label_7)
  (Wrd22.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_55_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_5 5
#define LABEL_56_6 7
#define LABEL_56_7 9
#define LABEL_56_8 11
#define ENVIRONMENT_LABEL_56_3 20
#define DEBUGGING_LABEL_56_2 19
#define OBJECT_56_4 18
#define OBJECT_56_3 17
#define OBJECT_56_2 16
#define OBJECT_56_1 15
#define OBJECT_56_0 14
#define FREE_REFERENCE_56_0 13
#define FREE_REFERENCES_LABEL_56_0 12
#define NUMBER_OF_LINKER_SECTIONS_56_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd31;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd60;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_56_4);
      goto stack_marker_frame_instance_4;

    case 1:
      current_block = (Rpc - LABEL_56_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_56_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_56_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_56_8);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_marker_frame_instance_11)
DEFLABEL (stack_marker_frame_instance_4)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_23;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_23;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_22)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_21;
  Wrd22 = Wrd26;

DEFLABEL (label_20)
  (Wrd28.Obj) = (* (Rsp++));
  if ((Wrd22.Obj) == (Wrd28.Obj))
    goto label_17;
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 62))
    goto label_16;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd37.Lng))))
    goto label_16;
  (Wrd31.Obj) = ((Wrd35.pObj) [3]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_15)
  (Wrd45.Obj) = (current_block [OBJECT_56_3]);
  (Rsp [1]) = (Wrd45.Obj);
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd57.uLng) == 10)
    goto label_13;

DEFLABEL (label_12)
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_4]), 2);

DEFLABEL (label_13)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd55.Lng))))
    goto label_12;
  Rvl = ((Wrd53.pObj) [4]);

DEFLABEL (label_14)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.Obj) = (current_block [OBJECT_56_2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_8]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_17)
  (Wrd67.Obj) = (Rsp [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 62))
    goto label_19;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd66.Lng))))
    goto label_19;
  (Wrd60.Obj) = ((Wrd64.pObj) [3]);
  (* (--Rsp)) = (Wrd60.Obj);

DEFLABEL (label_18)
  (Wrd74.Obj) = (current_block [OBJECT_56_2]);
  (Rsp [1]) = (Wrd74.Obj);
  (Wrd85.Obj) = (Rsp [0]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 10))
    goto label_12;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [0]);
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd83.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd84.Lng))))
    goto label_12;
  Rvl = ((Wrd82.pObj) [3]);
  goto label_14;

DEFLABEL (label_19)
  (Wrd69.Obj) = (Rsp [0]);
  (Wrd70.Obj) = (current_block [OBJECT_56_2]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_7]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_6])), (Wrd23.pObj));

DEFLABEL (label_7)
  (Wrd22.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_56_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define LABEL_57_6 7
#define ENVIRONMENT_LABEL_57_3 14
#define DEBUGGING_LABEL_57_2 13
#define OBJECT_57_2 12
#define OBJECT_57_1 11
#define OBJECT_57_0 10
#define FREE_REFERENCE_57_0 9
#define FREE_REFERENCES_LABEL_57_0 8
#define NUMBER_OF_LINKER_SECTIONS_57_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_57_4);
      goto Z__stack_frame_stack_markerP_1;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_57_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__stack_frame_stack_markerP_6)
DEFLABEL (Z__stack_frame_stack_markerP_1)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_13;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_13;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_12)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_11;
  Wrd22 = Wrd26;

DEFLABEL (label_10)
  (Wrd28.Obj) = (* (Rsp++));
  if ((Wrd22.Obj) == (Wrd28.Obj))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_57_2]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_6])), (Wrd23.pObj));

DEFLABEL (label_4)
  (Wrd22.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_57_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define LABEL_58_6 7
#define ENVIRONMENT_LABEL_58_3 14
#define DEBUGGING_LABEL_58_2 13
#define OBJECT_58_2 12
#define OBJECT_58_1 11
#define OBJECT_58_0 10
#define FREE_REFERENCE_58_0 9
#define FREE_REFERENCES_LABEL_58_0 8
#define NUMBER_OF_LINKER_SECTIONS_58_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_58_4);
      goto stack_frame_special_compiledP_1;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_58_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_special_compiledP_6)
DEFLABEL (stack_frame_special_compiledP_1)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_13;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_13;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_12)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_11;
  Wrd22 = Wrd26;

DEFLABEL (label_10)
  (Wrd28.Obj) = (* (Rsp++));
  if ((Wrd22.Obj) == (Wrd28.Obj))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_58_2]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_6])), (Wrd23.pObj));

DEFLABEL (label_4)
  (Wrd22.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_58_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define LABEL_59_7 7
#define LABEL_59_9 9
#define ENVIRONMENT_LABEL_59_3 19
#define DEBUGGING_LABEL_59_2 18
#define OBJECT_59_0 17
#define EXECUTE_CACHE_59_8 11
#define EXECUTE_CACHE_59_6 13
#define FREE_REFERENCE_59_0 16
#define FREE_REFERENCES_LABEL_59_0 10
#define NUMBER_OF_LINKER_SECTIONS_59_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_59_4);
      goto stack_frame_repl_eval_boundaryP_2;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_59_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_59_9);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_repl_eval_boundaryP_6)
DEFLABEL (stack_frame_repl_eval_boundaryP_2)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_59_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_59_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_12;
  Wrd6 = Wrd10;

DEFLABEL (label_11)
  (Wrd12.Obj) = (* (Rsp++));
  if ((Wrd6.Obj) == (Wrd12.Obj))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_59_0]);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_9])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_5 5
#define LABEL_60_7 7
#define ENVIRONMENT_LABEL_60_3 15
#define DEBUGGING_LABEL_60_2 14
#define OBJECT_60_0 13
#define EXECUTE_CACHE_60_6 9
#define FREE_REFERENCE_60_0 12
#define FREE_REFERENCES_LABEL_60_0 8
#define NUMBER_OF_LINKER_SECTIONS_60_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_60_4);
      goto stack_marker_frame_repl_eval_boundaryP_1;

    case 1:
      current_block = (Rpc - LABEL_60_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_60_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_marker_frame_repl_eval_boundaryP_5)
DEFLABEL (stack_marker_frame_repl_eval_boundaryP_1)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_60_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_10;
  Wrd6 = Wrd10;

DEFLABEL (label_9)
  (Wrd12.Obj) = (* (Rsp++));
  if ((Wrd6.Obj) == (Wrd12.Obj))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_60_0]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_7])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define LABEL_61_6 7
#define ENVIRONMENT_LABEL_61_3 16
#define DEBUGGING_LABEL_61_2 15
#define OBJECT_61_1 14
#define OBJECT_61_0 13
#define EXECUTE_CACHE_61_8 9
#define EXECUTE_CACHE_61_7 11
#define FREE_REFERENCES_LABEL_61_0 8
#define NUMBER_OF_LINKER_SECTIONS_61_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_61_4);
      goto stack_frame__continuation_2;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_61_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame__continuation_6)
DEFLABEL (stack_frame__continuation_2)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_7)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_61_6);
  (* (--Rsp)) = Rvl;
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_8]));

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_61_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_5 5
#define LABEL_62_7 7
#define TAG_62_8 2
#define LABEL_62_9 9
#define LABEL_62_11 11
#define LABEL_62_12 13
#define LABEL_62_10 15
#define LABEL_62_15 17
#define LABEL_62_19 19
#define LABEL_62_20 21
#define LABEL_62_16 23
#define LABEL_62_21 25
#define LABEL_62_17 27
#define LABEL_62_23 29
#define TAG_62_24 13
#define LABEL_62_26 31
#define LABEL_62_27 33
#define TAG_62_28 15
#define ENVIRONMENT_LABEL_62_3 60
#define DEBUGGING_LABEL_62_2 59
#define OBJECT_62_8 58
#define OBJECT_62_7 57
#define OBJECT_62_6 56
#define OBJECT_62_5 55
#define OBJECT_62_4 54
#define OBJECT_62_3 53
#define OBJECT_62_2 52
#define OBJECT_62_1 51
#define OBJECT_62_0 50
#define EXECUTE_CACHE_62_25 35
#define EXECUTE_CACHE_62_22 37
#define EXECUTE_CACHE_62_18 39
#define EXECUTE_CACHE_62_14 41
#define EXECUTE_CACHE_62_13 43
#define EXECUTE_CACHE_62_6 45
#define FREE_REFERENCE_62_1 48
#define FREE_REFERENCE_62_0 49
#define FREE_REFERENCES_LABEL_62_0 34
#define NUMBER_OF_LINKER_SECTIONS_62_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd36;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd6;
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
      goto stack_frame__control_point_16;

    case 1:
      current_block = (Rpc - LABEL_62_5);
      goto continuation_15;

    case 2:
      current_block = (Rpc - LABEL_62_7);
      goto lambda_26;

    case 3:
      current_block = (Rpc - LABEL_62_9);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_62_11);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_62_12);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_62_10);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_62_15);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_62_19);
      goto continuation_13;

    case 9:
      current_block = (Rpc - LABEL_62_20);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_62_16);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_62_21);
      goto label_22;

    case 12:
      current_block = (Rpc - LABEL_62_17);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_62_23);
      goto lambda_27;

    case 14:
      current_block = (Rpc - LABEL_62_26);
      goto continuation_11;

    case 15:
      current_block = (Rpc - LABEL_62_27);
      goto lambda_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame__control_point_25)
DEFLABEL (stack_frame__control_point_16)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_6]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_62_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_62_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_62_7])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_62_7);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_35;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_35;
  (Wrd9.Obj) = ((Wrd15.pObj) [8]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_34)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_10]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [2]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 62))
    goto label_33;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd44.Lng))))
    goto label_33;
  (Wrd36.Obj) = ((Wrd42.pObj) [7]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_32)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_0]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_31;
  Wrd57 = Wrd61;

DEFLABEL (label_30)
  (Wrd63.Obj) = (Rsp [0]);
  if ((Wrd63.Obj) == (Wrd57.Obj))
    goto label_29;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_14]));

DEFLABEL (label_29)
  (Wrd64.Obj) = (current_block [OBJECT_62_3]);
  (Rsp [0]) = (Wrd64.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_13]));

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62_12])), (Wrd58.pObj));

DEFLABEL (label_20)
  (Wrd57.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd49.Obj) = ((Wrd51.pObj) [2]);
  (Wrd52.Obj) = (current_block [OBJECT_62_2]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_11]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_62_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_9]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_62_10);
  (* (--Rsp)) = Rvl;
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_43;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_43;
  (Wrd9.Obj) = ((Wrd15.pObj) [6]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_42)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_16]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_17]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_62_5]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [6]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [2]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_18]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_62_17);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_25]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_62_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_62_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_62_23])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd12 = Wrd11;
  (Wrd13.Obj) = (Rsp [5]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_62_5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_62_7]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_8]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_62_19);
  (* (--Rsp)) = Rvl;
  (Wrd43.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_1]));
  (Wrd46.Obj) = ((Wrd43.pObj) [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 50)
    goto label_40;
  Wrd42 = Wrd46;

DEFLABEL (label_39)
  (Wrd48.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));

DEFLABEL (label_38)
  (Rsp [4]) = (Wrd16.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [2]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_37;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd29.Lng))))
    goto label_37;
  (Wrd17.Obj) = ((Wrd27.pObj) [9]);

DEFLABEL (label_36)
  (Rsp [3]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_22]));

DEFLABEL (label_37)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [2]);
  (Wrd37.Obj) = (current_block [OBJECT_62_6]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_21]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

DEFLABEL (label_22)
  (Wrd17.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62_20])), (Wrd43.pObj));

DEFLABEL (label_23)
  (Wrd42.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  (Wrd16.Obj) = (Rsp [4]);
  goto label_38;

DEFLABEL (label_43)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_62_4]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_15]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_62_23);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_62_28);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_62_27])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_62_5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_62_7]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_8]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_62_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_62_27);

DEFLABEL (lambda_10)
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

#define LABEL_63_4 3
#define LABEL_63_5 5
#define LABEL_63_6 7
#define LABEL_63_11 9
#define LABEL_63_14 11
#define LABEL_63_17 13
#define LABEL_63_18 15
#define LABEL_63_19 17
#define LABEL_63_10 19
#define LABEL_63_12 21
#define LABEL_63_8 23
#define LABEL_63_26 25
#define LABEL_63_27 27
#define LABEL_63_22 29
#define TAG_63_23 13
#define LABEL_63_31 31
#define LABEL_63_32 33
#define LABEL_63_28 35
#define TAG_63_29 16
#define LABEL_63_30 37
#define LABEL_63_33 39
#define TAG_63_34 18
#define LABEL_63_20 41
#define TAG_63_21 19
#define LABEL_63_35 43
#define TAG_63_36 20
#define LABEL_63_37 45
#define LABEL_63_40 47
#define LABEL_63_38 49
#define TAG_63_39 23
#define LABEL_63_15 51
#define TAG_63_16 24
#define ENVIRONMENT_LABEL_63_3 77
#define DEBUGGING_LABEL_63_2 76
#define OBJECT_63_10 75
#define OBJECT_63_9 74
#define OBJECT_63_8 73
#define OBJECT_63_7 72
#define OBJECT_63_6 71
#define OBJECT_63_5 70
#define OBJECT_63_4 69
#define OBJECT_63_3 68
#define OBJECT_63_2 67
#define OBJECT_63_1 66
#define OBJECT_63_0 65
#define EXECUTE_CACHE_63_25 53
#define EXECUTE_CACHE_63_24 55
#define EXECUTE_CACHE_63_13 57
#define EXECUTE_CACHE_63_9 59
#define EXECUTE_CACHE_63_7 61
#define FREE_REFERENCE_63_0 64
#define FREE_REFERENCES_LABEL_63_0 52
#define NUMBER_OF_LINKER_SECTIONS_63_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd48;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd32;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_63_4);
      goto unparse_stack_frame_35;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto label_37;

    case 2:
      current_block = (Rpc - LABEL_63_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_63_11);
      goto label_38;

    case 4:
      current_block = (Rpc - LABEL_63_14);
      goto continuation_22;

    case 5:
      current_block = (Rpc - LABEL_63_17);
      goto continuation_21;

    case 6:
      current_block = (Rpc - LABEL_63_18);
      goto label_43;

    case 7:
      current_block = (Rpc - LABEL_63_19);
      goto label_44;

    case 8:
      current_block = (Rpc - LABEL_63_10);
      goto continuation_19;

    case 9:
      current_block = (Rpc - LABEL_63_12);
      goto continuation_20;

    case 10:
      current_block = (Rpc - LABEL_63_8);
      goto continuation_30;

    case 11:
      current_block = (Rpc - LABEL_63_26);
      goto label_39;

    case 12:
      current_block = (Rpc - LABEL_63_27);
      goto label_40;

    case 13:
      current_block = (Rpc - LABEL_63_22);
      goto lambda_50;

    case 14:
      current_block = (Rpc - LABEL_63_31);
      goto label_41;

    case 15:
      current_block = (Rpc - LABEL_63_32);
      goto label_42;

    case 16:
      current_block = (Rpc - LABEL_63_28);
      goto lambda_51;

    case 17:
      current_block = (Rpc - LABEL_63_30);
      goto continuation_3;

    case 18:
      current_block = (Rpc - LABEL_63_33);
      goto loop_11;

    case 19:
      current_block = (Rpc - LABEL_63_20);
      goto lambda_49;

    case 20:
      current_block = (Rpc - LABEL_63_35);
      goto lambda_53;

    case 21:
      current_block = (Rpc - LABEL_63_37);
      goto continuation_10;

    case 22:
      current_block = (Rpc - LABEL_63_40);
      goto label_45;

    case 23:
      current_block = (Rpc - LABEL_63_38);
      goto lambda_54;

    case 24:
      current_block = (Rpc - LABEL_63_15);
      goto lambda_48;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_stack_frame_47)
DEFLABEL (unparse_stack_frame_35)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_70;
  Wrd5 = Wrd9;

DEFLABEL (label_69)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_63_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_63_6);
  (Wrd5.Obj) = (* (Rsp++));
  if (! (Rvl == (Wrd5.Obj)))
    goto label_59;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_9]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_63_8);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_58;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_58;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_57)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_56;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd27.Lng))))
    goto label_56;
  (Wrd21.Obj) = ((Wrd25.pObj) [2]);

DEFLABEL (label_55)
  (Rsp [1]) = (Wrd21.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_63_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_63_28])));
  Rhp += 2;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  Wrd39 = Wrd36;
  ((Wrd39.pObj) [2]) = (Wrd21.Obj);
  (Wrd38.Obj) = (Rsp [0]);
  ((Wrd39.pObj) [3]) = (Wrd38.Obj);
  Rvl = (Wrd35.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd30.Obj) = (current_block [OBJECT_63_6]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_27]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_7]), 2);

DEFLABEL (label_40)
  (Wrd21.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_63_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_26]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_2]), 2);

DEFLABEL (label_39)
  (Wrd5.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_59)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_68;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd18.Lng))))
    goto label_68;
  (Wrd12.Obj) = ((Wrd16.pObj) [12]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_67)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_12]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_13]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_63_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_25]));

DEFLABEL (label_60)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_24]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_63_17);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_62;
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_14]))));
  (* (--Rsp)) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_9]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_63_14);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd59.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_63_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_63_15])));
  Rhp += 1;
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd59.pObj)));
  ((Wrd59.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_61)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_63_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_63_22])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_62)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_66;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd20.Lng))))
    goto label_66;
  (Wrd14.Obj) = ((Wrd18.pObj) [8]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_65)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_64;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd36.Lng))))
    goto label_64;
  (Wrd28.Obj) = ((Wrd34.pObj) [10]);

DEFLABEL (label_63)
  (Rsp [1]) = (Wrd28.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd47.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_63_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_63_20])));
  Rhp += 2;
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd47.pObj)));
  Wrd50 = Wrd47;
  ((Wrd50.pObj) [2]) = (Wrd28.Obj);
  (Wrd49.Obj) = (Rsp [0]);
  ((Wrd50.pObj) [3]) = (Wrd49.Obj);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd46.Obj);
  goto label_61;

DEFLABEL (label_64)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (current_block [OBJECT_63_4]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_19]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_2]), 2);

DEFLABEL (label_44)
  (Wrd28.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_63_3]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_18]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_2]), 2);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_63_1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_2]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_5])), (Wrd6.pObj));

DEFLABEL (label_37)
  (Wrd5.Obj) = Rvl;
  goto label_69;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_63_10);
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (lambda_50)
  CLOSURE_HEADER (LABEL_63_22);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_74;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd20.Lng))))
    goto label_74;
  (Wrd12.Obj) = ((Wrd18.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_73)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_72;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Obj) = (MAKE_OBJECT (26, (Wrd35.uLng)));
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_71)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd55.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_63_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_63_33])));
  Rhp += 3;
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd55.pObj)));
  (* (--Rsp)) = (Wrd56.Obj);
  Wrd53 = Wrd55;
  (Wrd54.Obj) = (Rsp [5]);
  ((Wrd53.pObj) [2]) = (Wrd54.Obj);
  (Wrd51.Obj) = (Rsp [2]);
  ((Wrd53.pObj) [3]) = (Wrd51.Obj);
  (Wrd48.Obj) = (Rsp [1]);
  ((Wrd53.pObj) [4]) = (Wrd48.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [0]) = (Wrd56.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_63_0]);
  (Rsp [1]) = (Wrd45.Obj);
  goto loop_11;

DEFLABEL (label_72)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_32]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_8]), 1);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [2]);
  (Wrd28.Obj) = (current_block [OBJECT_63_5]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_31]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_2]), 2);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_63_30);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_63_36);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_63_35])));
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

DEFLABEL (lambda_51)
  CLOSURE_HEADER (LABEL_63_28);

DEFLABEL (lambda_33)
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

DEFLABEL (loop_52)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_63_33);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd6.Lng) < (Wrd10.Lng))
    goto label_75;
  Rvl = ((Wrd8.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_75)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_37]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_63_39);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_63_38])));
  Rhp += 2;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd22 = Wrd19;
  ((Wrd22.pObj) [2]) = (Wrd7.Obj);
  ((Wrd22.pObj) [3]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_63_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_63_9]);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_10]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_63_37);
  (* (--Rsp)) = Rvl;
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [3]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_77;
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_77;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd22.Lng))))
    goto label_77;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd12.pObj) = (& ((Wrd20.pObj) [(Wrd7.Lng)]));
  (Wrd5.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_76)
  (Wrd34.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_77)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [3]);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_40]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_7]), 2);

DEFLABEL (label_45)
  (Wrd5.Obj) = Rvl;
  goto label_76;

DEFLABEL (lambda_49)
  CLOSURE_HEADER (LABEL_63_20);

DEFLABEL (lambda_27)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  goto lambda_17;

DEFLABEL (lambda_53)
  CLOSURE_HEADER (LABEL_63_35);

DEFLABEL (lambda_15)
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

DEFLABEL (lambda_54)
  CLOSURE_HEADER (LABEL_63_38);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [3]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd12.Lng) + 1L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));
  (Rsp [1]) = (Wrd8.Obj);
  goto loop_11;

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_63_15);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  goto lambda_17;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define ENVIRONMENT_LABEL_64_3 11
#define DEBUGGING_LABEL_64_2 10
#define OBJECT_64_0 9
#define EXECUTE_CACHE_64_6 7
#define FREE_REFERENCES_LABEL_64_0 6
#define NUMBER_OF_LINKER_SECTIONS_64_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_64_4);
      goto length_combination_save_value_2;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (length_combination_save_value_5)
DEFLABEL (length_combination_save_value_2)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_64_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_64_5);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd9.Obj));
  (Wrd6.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd15.Lng) = ((Wrd14.Lng) + 3L);
  Rvl = (LONG_TO_FIXNUM (Wrd15.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_5 5
#define TAG_65_6 1
#define LABEL_65_7 7
#define LABEL_65_8 9
#define ENVIRONMENT_LABEL_65_3 15
#define DEBUGGING_LABEL_65_2 14
#define OBJECT_65_0 13
#define EXECUTE_CACHE_65_9 11
#define FREE_REFERENCES_LABEL_65_0 10
#define NUMBER_OF_LINKER_SECTIONS_65_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
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
      goto length_application_frame_5;

    case 1:
      current_block = (Rpc - LABEL_65_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_65_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_65_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (length_application_frame_8)
DEFLABEL (length_application_frame_5)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_65_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_65_5])));
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

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_65_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_65_8);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_0]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_65_7);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd7.Lng) - (Wrd11.Lng));
  (Wrd16.Obj) = ((Wrd9.pObj) [3]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd20.Lng) = ((Wrd17.Lng) + 1L);
  (Wrd22.Lng) = ((Wrd20.Lng) + (Wrd12.Lng));
  Rvl = (LONG_TO_FIXNUM (Wrd22.Lng));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_5 5
#define LABEL_66_7 7
#define LABEL_66_9 9
#define LABEL_66_11 11
#define LABEL_66_14 13
#define LABEL_66_12 15
#define LABEL_66_16 17
#define LABEL_66_17 19
#define LABEL_66_19 21
#define ENVIRONMENT_LABEL_66_3 39
#define DEBUGGING_LABEL_66_2 38
#define OBJECT_66_0 37
#define EXECUTE_CACHE_66_20 23
#define EXECUTE_CACHE_66_18 25
#define EXECUTE_CACHE_66_15 27
#define EXECUTE_CACHE_66_13 29
#define EXECUTE_CACHE_66_10 31
#define EXECUTE_CACHE_66_8 33
#define EXECUTE_CACHE_66_6 35
#define FREE_REFERENCES_LABEL_66_0 22
#define NUMBER_OF_LINKER_SECTIONS_66_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_66_4);
      goto length_compiled_return_address_15;

    case 1:
      current_block = (Rpc - LABEL_66_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_66_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_66_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_66_11);
      goto loop_11;

    case 5:
      current_block = (Rpc - LABEL_66_14);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_66_12);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_66_16);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_66_17);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_66_19);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (length_compiled_return_address_18)
DEFLABEL (length_compiled_return_address_15)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_66_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_66_7);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd11.Lng) = ((Wrd10.Lng) + 1L);
  Rvl = (LONG_TO_FIXNUM (Wrd11.Lng));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_66_9);
  (* (--Rsp)) = Rvl;
  goto loop_11;

DEFLABEL (loop_19)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_66_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_66_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;

DEFLABEL (label_22)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_6]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_66_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_66_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd8.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_20]));

DEFLABEL (label_21)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_19]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_66_19);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto loop_11;

DEFLABEL (label_23)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_66_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_66_14);
  goto label_22;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define LABEL_67_6 7
#define ENVIRONMENT_LABEL_67_3 14
#define DEBUGGING_LABEL_67_2 13
#define EXECUTE_CACHE_67_8 9
#define EXECUTE_CACHE_67_7 11
#define FREE_REFERENCES_LABEL_67_0 8
#define NUMBER_OF_LINKER_SECTIONS_67_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_67_4);
      goto length_interrupt_compiled_procedure_2;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_67_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (length_interrupt_compiled_procedure_5)
DEFLABEL (length_interrupt_compiled_procedure_2)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_67_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_67_5);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  Rvl = (LONG_TO_FIXNUM (Wrd8.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_8 5
#define LABEL_68_10 7
#define LABEL_68_5 9
#define LABEL_68_6 11
#define LABEL_68_11 13
#define ENVIRONMENT_LABEL_68_3 26
#define DEBUGGING_LABEL_68_2 25
#define OBJECT_68_1 24
#define OBJECT_68_0 23
#define EXECUTE_CACHE_68_13 15
#define EXECUTE_CACHE_68_12 17
#define EXECUTE_CACHE_68_9 19
#define EXECUTE_CACHE_68_7 21
#define FREE_REFERENCES_LABEL_68_0 14
#define NUMBER_OF_LINKER_SECTIONS_68_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_68_4);
      goto length_compiler_interrupt_restart_8;

    case 1:
      current_block = (Rpc - LABEL_68_8);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_68_10);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_68_5);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_68_6);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_68_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (length_compiler_interrupt_restart_11)
DEFLABEL (length_compiler_interrupt_restart_8)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_68_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_68_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_68_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_68_1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_68_11);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_68_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd23.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_9]));

DEFLABEL (label_12)
  (Wrd5.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_16)
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = (Wrd6.Obj);
  goto label_13;

DEFLABEL (label_14)
  Rvl = (current_block [OBJECT_68_0]);

DEFLABEL (label_13)
DEFLABEL (label_15)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_68_5);
  (Wrd5.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_5 5
#define LABEL_69_6 7
#define ENVIRONMENT_LABEL_69_3 14
#define DEBUGGING_LABEL_69_2 13
#define OBJECT_69_4 12
#define OBJECT_69_3 11
#define OBJECT_69_2 10
#define OBJECT_69_1 9
#define OBJECT_69_0 8
#define FREE_REFERENCES_LABEL_69_0 8
#define NUMBER_OF_LINKER_SECTIONS_69_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd15;
  INVOKE_INTERFACE_DECLS
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
      goto compiled_internal_procedureP_3;

    case 1:
      current_block = (Rpc - LABEL_69_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_69_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_internal_procedureP_7)
DEFLABEL (compiled_internal_procedureP_3)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd15.Obj) = (current_block [OBJECT_69_0]);
  (Wrd18.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 40L) < ((unsigned long) (Wrd18.Lng))))
    goto label_13;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd6.Obj) == (Wrd8.Obj))
    goto label_9;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_2]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_69_6);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [0]);
  if ((Wrd6.Obj) == (current_block [OBJECT_69_3]))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_69_4]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_5]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_5 5
#define LABEL_70_17 7
#define LABEL_70_15 9
#define LABEL_70_16 11
#define LABEL_70_13 13
#define LABEL_70_14 15
#define LABEL_70_11 17
#define LABEL_70_12 19
#define LABEL_70_9 21
#define LABEL_70_10 23
#define LABEL_70_7 25
#define LABEL_70_8 27
#define LABEL_70_19 29
#define LABEL_70_20 31
#define ENVIRONMENT_LABEL_70_3 51
#define DEBUGGING_LABEL_70_2 50
#define OBJECT_70_10 49
#define OBJECT_70_9 48
#define OBJECT_70_8 47
#define OBJECT_70_7 46
#define OBJECT_70_6 45
#define OBJECT_70_5 44
#define OBJECT_70_4 43
#define OBJECT_70_3 42
#define OBJECT_70_2 41
#define OBJECT_70_1 40
#define OBJECT_70_0 39
#define EXECUTE_CACHE_70_21 33
#define EXECUTE_CACHE_70_18 35
#define EXECUTE_CACHE_70_6 37
#define FREE_REFERENCES_LABEL_70_0 32
#define NUMBER_OF_LINKER_SECTIONS_70_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd68;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
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
      current_block = (Rpc - LABEL_70_4);
      goto length_special_compiled_29;

    case 1:
      current_block = (Rpc - LABEL_70_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_70_17);
      goto lambda_1;

    case 3:
      current_block = (Rpc - LABEL_70_15);
      goto continuation_12;

    case 4:
      current_block = (Rpc - LABEL_70_16);
      goto continuation_11;

    case 5:
      current_block = (Rpc - LABEL_70_13);
      goto continuation_14;

    case 6:
      current_block = (Rpc - LABEL_70_14);
      goto continuation_13;

    case 7:
      current_block = (Rpc - LABEL_70_11);
      goto continuation_18;

    case 8:
      current_block = (Rpc - LABEL_70_12);
      goto continuation_17;

    case 9:
      current_block = (Rpc - LABEL_70_9);
      goto continuation_23;

    case 10:
      current_block = (Rpc - LABEL_70_10);
      goto continuation_22;

    case 11:
      current_block = (Rpc - LABEL_70_7);
      goto continuation_26;

    case 12:
      current_block = (Rpc - LABEL_70_8);
      goto continuation_25;

    case 13:
      current_block = (Rpc - LABEL_70_19);
      goto continuation_16;

    case 14:
      current_block = (Rpc - LABEL_70_20);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (length_special_compiled_32)
DEFLABEL (length_special_compiled_29)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_70_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_70_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 26)
    goto label_35;

DEFLABEL (label_34)
  goto lambda_1;

DEFLABEL (label_35)
  if (Rvl == (current_block [OBJECT_70_1]))
    goto label_46;
  if (Rvl == (current_block [OBJECT_70_0]))
    goto label_45;
  (Wrd12.Obj) = (current_block [OBJECT_70_2]);
  if (Rvl == (Wrd12.Obj))
    goto label_44;
  (Wrd14.Obj) = (current_block [OBJECT_70_3]);
  if (Rvl == (Wrd14.Obj))
    goto label_43;
  if (Rvl == (current_block [OBJECT_70_4]))
    goto label_42;
  if (Rvl == (current_block [OBJECT_70_5]))
    goto label_40;
  if (Rvl == (current_block [OBJECT_70_6]))
    goto label_37;
  if (! (Rvl == (current_block [OBJECT_70_7])))
    goto label_34;
  Rvl = (current_block [OBJECT_70_8]);

DEFLABEL (label_36)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_15]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_16]))));
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_38)
  (Wrd68.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd68.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_6]));

DEFLABEL (label_40)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_13]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_14]))));
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_38;

DEFLABEL (label_42)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_11]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_12]))));
  (* (--Rsp)) = (Wrd46.Obj);
  goto label_39;

DEFLABEL (label_43)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_9]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_10]))));
  (* (--Rsp)) = (Wrd54.Obj);
  goto label_41;

DEFLABEL (label_44)
  Rvl = (current_block [OBJECT_70_4]);
  goto label_36;

DEFLABEL (label_45)
  Rvl = (current_block [OBJECT_70_3]);
  goto label_36;

DEFLABEL (label_46)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_7]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_8]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd67.Obj) = (current_block [OBJECT_70_2]);
  (* (--Rsp)) = (Wrd67.Obj);
  goto label_38;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_70_16);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_10]), 1);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_70_15);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd10.Lng) = ((Wrd9.Lng) + 3L);
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_70_14);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_10]), 1);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_70_13);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd10.Lng) = ((Wrd9.Lng) + 3L);
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_70_12);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_10]), 1);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_70_11);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_70_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_6]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_70_20);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_10]), 1);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_70_19);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd8.Lng) + (Wrd10.Lng));
  (Wrd18.Lng) = ((Wrd11.Lng) + 5L);
  (Wrd19.Lng) = ((Wrd18.Lng) - 1L);
  Rvl = (LONG_TO_FIXNUM (Wrd19.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_70_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_21]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_70_9);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_48;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd13.Lng) = ((Wrd12.Lng) + 5L);
  Rvl = (LONG_TO_FIXNUM (Wrd13.Lng));
  goto label_47;

DEFLABEL (label_48)
  Rvl = (current_block [OBJECT_70_5]);

DEFLABEL (label_47)
DEFLABEL (label_49)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_70_8);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_10]), 1);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_70_7);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd10.Lng) = ((Wrd9.Lng) + 3L);
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_33)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_70_17);
  (Wrd5.Obj) = (current_block [OBJECT_70_9]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_18]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_5 5
#define LABEL_71_7 7
#define LABEL_71_13 9
#define LABEL_71_11 11
#define LABEL_71_9 13
#define LABEL_71_15 15
#define ENVIRONMENT_LABEL_71_3 31
#define DEBUGGING_LABEL_71_2 30
#define OBJECT_71_0 29
#define EXECUTE_CACHE_71_16 17
#define EXECUTE_CACHE_71_14 19
#define EXECUTE_CACHE_71_12 21
#define EXECUTE_CACHE_71_10 23
#define EXECUTE_CACHE_71_8 25
#define EXECUTE_CACHE_71_6 27
#define FREE_REFERENCES_LABEL_71_0 16
#define NUMBER_OF_LINKER_SECTIONS_71_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_71_4);
      goto compiled_code_address_frame_size_8;

    case 1:
      current_block = (Rpc - LABEL_71_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_71_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_71_13);
      goto lambda_0;

    case 4:
      current_block = (Rpc - LABEL_71_11);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_71_9);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_71_15);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_code_address_frame_size_11)
DEFLABEL (compiled_code_address_frame_size_8)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_71_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  goto lambda_0;

DEFLABEL (label_13)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_71_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_71_11);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd11.Lng) = ((Wrd10.Lng) + 1L);
  Rvl = (LONG_TO_FIXNUM (Wrd11.Lng));
  goto label_14;

DEFLABEL (label_15)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_14)
DEFLABEL (label_16)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_71_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;
  goto lambda_0;

DEFLABEL (label_18)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_71_15);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  Rvl = (LONG_TO_FIXNUM (Wrd8.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_12)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_71_13);
  (Wrd5.Obj) = (current_block [OBJECT_71_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_14]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_5 3
#define LABEL_72_4 5
#define LABEL_72_9 7
#define LABEL_72_6 9
#define LABEL_72_12 11
#define LABEL_72_7 13
#define LABEL_72_13 15
#define LABEL_72_11 17
#define LABEL_72_16 19
#define LABEL_72_18 21
#define LABEL_72_20 23
#define LABEL_72_19 25
#define ENVIRONMENT_LABEL_72_3 45
#define DEBUGGING_LABEL_72_2 44
#define OBJECT_72_2 43
#define OBJECT_72_1 42
#define OBJECT_72_0 41
#define EXECUTE_CACHE_72_22 27
#define EXECUTE_CACHE_72_21 29
#define EXECUTE_CACHE_72_17 31
#define EXECUTE_CACHE_72_15 33
#define EXECUTE_CACHE_72_14 35
#define EXECUTE_CACHE_72_10 37
#define EXECUTE_CACHE_72_8 39
#define FREE_REFERENCES_LABEL_72_0 26
#define NUMBER_OF_LINKER_SECTIONS_72_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_72_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_72_4);
      goto verify_16;

    case 2:
      current_block = (Rpc - LABEL_72_9);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_72_6);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_72_12);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_72_7);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_72_13);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_72_11);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_72_16);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_72_18);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_72_20);
      goto label_20;

    case 11:
      current_block = (Rpc - LABEL_72_19);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (verify_22)
DEFLABEL (verify_16)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_33;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd19.Lng) == 0))
    goto label_24;

DEFLABEL (label_23)
  Rvl = (current_block [OBJECT_72_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_72_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_23;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_72_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_72_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 62))
    goto label_32;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_32;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_31)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_13]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_72_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_25;
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [7]);
  (Rsp [2]) = (Wrd16.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_25)
  (Wrd5.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_30)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_16]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_17]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_72_16);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_26;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_18]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_19]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_8]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_72_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_22]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_72_18);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_27;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_29;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_29;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));

DEFLABEL (label_28)
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd17.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd23.Lng) = ((Wrd20.Lng) + (Wrd22.Lng));
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));
  (Rsp [4]) = (Wrd18.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_21]));

DEFLABEL (label_29)
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_20)
  (Wrd11.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_32)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_72_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_2]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_23;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_72_11);
  (Wrd5.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_5 3
#define LABEL_73_4 5
#define LABEL_73_9 7
#define LABEL_73_6 9
#define LABEL_73_11 11
#define ENVIRONMENT_LABEL_73_3 27
#define DEBUGGING_LABEL_73_2 26
#define OBJECT_73_2 25
#define OBJECT_73_1 24
#define OBJECT_73_0 23
#define EXECUTE_CACHE_73_13 13
#define EXECUTE_CACHE_73_12 15
#define EXECUTE_CACHE_73_10 17
#define EXECUTE_CACHE_73_8 19
#define EXECUTE_CACHE_73_7 21
#define FREE_REFERENCES_LABEL_73_0 12
#define NUMBER_OF_LINKER_SECTIONS_73_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd17;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_73_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_73_4);
      goto stream_tail__6;

    case 2:
      current_block = (Rpc - LABEL_73_9);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_73_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_73_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stream_tail__9)
DEFLABEL (stream_tail__6)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_73_0])))
    goto label_11;

DEFLABEL (label_10)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_73_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_73_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;

DEFLABEL (label_12)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_73_11);
  (Rsp [0]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd8.Lng) - 1L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_13]));

DEFLABEL (label_13)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_73_1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_73_2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_73_9);
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define ENVIRONMENT_LABEL_74_3 8
#define DEBUGGING_LABEL_74_2 7
#define EXECUTE_CACHE_74_5 5
#define FREE_REFERENCES_LABEL_74_0 4
#define NUMBER_OF_LINKER_SECTIONS_74_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_74_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_74_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define ENVIRONMENT_LABEL_75_3 7
#define DEBUGGING_LABEL_75_2 6
#define OBJECT_75_1 5
#define OBJECT_75_0 4
#define FREE_REFERENCES_LABEL_75_0 4
#define NUMBER_OF_LINKER_SECTIONS_75_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_75_4);
      goto stack_frame_type_code_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_type_code_3)
DEFLABEL (stack_frame_type_code_0)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_75_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

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

#define LABEL_76_4 3
#define ENVIRONMENT_LABEL_76_3 7
#define DEBUGGING_LABEL_76_2 6
#define OBJECT_76_1 5
#define OBJECT_76_0 4
#define FREE_REFERENCES_LABEL_76_0 4
#define NUMBER_OF_LINKER_SECTIONS_76_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_76_4);
      goto stack_frame_type_subproblemP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_type_subproblemP_3)
DEFLABEL (stack_frame_type_subproblemP_0)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_76_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_1]), 2);

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

#define LABEL_77_4 3
#define ENVIRONMENT_LABEL_77_3 7
#define DEBUGGING_LABEL_77_2 6
#define OBJECT_77_1 5
#define OBJECT_77_0 4
#define FREE_REFERENCES_LABEL_77_0 4
#define NUMBER_OF_LINKER_SECTIONS_77_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_77_4);
      goto stack_frame_type_history_subproblemP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_type_history_subproblemP_3)
DEFLABEL (stack_frame_type_history_subproblemP_0)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_77_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 2);

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

#define LABEL_78_4 3
#define ENVIRONMENT_LABEL_78_3 7
#define DEBUGGING_LABEL_78_2 6
#define OBJECT_78_1 5
#define OBJECT_78_0 4
#define FREE_REFERENCES_LABEL_78_0 4
#define NUMBER_OF_LINKER_SECTIONS_78_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_78_4);
      goto stack_frame_type_length_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_type_length_3)
DEFLABEL (stack_frame_type_length_0)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_78_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_1]), 2);

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

#define LABEL_79_4 3
#define ENVIRONMENT_LABEL_79_3 7
#define DEBUGGING_LABEL_79_2 6
#define OBJECT_79_1 5
#define OBJECT_79_0 4
#define FREE_REFERENCES_LABEL_79_0 4
#define NUMBER_OF_LINKER_SECTIONS_79_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stack_frame_type_parser_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_type_parser_3)
DEFLABEL (stack_frame_type_parser_0)
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
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
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
conpar_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stack_frame_type_properties_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_type_properties_3)
DEFLABEL (stack_frame_type_properties_0)
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
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define LABEL_81_5 5
#define LABEL_81_6 7
#define LABEL_81_7 9
#define ENVIRONMENT_LABEL_81_3 17
#define DEBUGGING_LABEL_81_2 16
#define OBJECT_81_3 15
#define OBJECT_81_2 14
#define OBJECT_81_1 13
#define OBJECT_81_0 12
#define FREE_REFERENCE_81_0 11
#define FREE_REFERENCES_LABEL_81_0 10
#define NUMBER_OF_LINKER_SECTIONS_81_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_81_4);
      goto stack_frame_typeP_4;

    case 1:
      current_block = (Rpc - LABEL_81_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_81_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_81_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_typeP_10)
DEFLABEL (stack_frame_typeP_4)
  INTERRUPT_CHECK (26, LABEL_81_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_81_0]));
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
  Rvl = (current_block [OBJECT_81_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_81_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_5 3
#define LABEL_82_4 5
#define LABEL_82_6 7
#define LABEL_82_7 9
#define LABEL_82_8 11
#define ENVIRONMENT_LABEL_82_3 21
#define DEBUGGING_LABEL_82_2 20
#define OBJECT_82_2 19
#define OBJECT_82_1 18
#define OBJECT_82_0 17
#define EXECUTE_CACHE_82_9 13
#define FREE_REFERENCE_82_0 16
#define FREE_REFERENCES_LABEL_82_0 12
#define NUMBER_OF_LINKER_SECTIONS_82_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd51;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_82_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_82_4);
      goto microcode_return_code__type_3;

    case 2:
      current_block = (Rpc - LABEL_82_6);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_82_7);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_82_8);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_return_code__type_9)
DEFLABEL (microcode_return_code__type_3)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_82_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_18;
  Wrd6 = Wrd10;

DEFLABEL (label_17)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_16;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd12.Obj) = (MAKE_OBJECT (26, (Wrd15.uLng)));

DEFLABEL (label_15)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if ((Wrd22.Lng) < (Wrd23.Lng))
    goto label_14;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_5]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_82_2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_82_5);

DEFLABEL (label_14)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_82_0]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_13;
  Wrd29 = Wrd33;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd51.uLng) == 10)
    goto label_11;

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_1]), 2);

DEFLABEL (label_11)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 26))
    goto label_10;
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) (Wrd45.Lng)) < ((unsigned long) (Wrd49.Lng))))
    goto label_10;
  (Wrd37.uLng) = (OBJECT_DATUM (Wrd42.Obj));
  (Wrd40.pObj) = (& ((Wrd47.pObj) [(Wrd37.Lng)]));
  Rvl = ((Wrd40.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_82_8])), (Wrd30.pObj));

DEFLABEL (label_7)
  (Wrd29.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_16)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_0]), 1);

DEFLABEL (label_6)
  (Wrd12.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_82_6])), (Wrd7.pObj));

DEFLABEL (label_5)
  (Wrd6.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define LABEL_83_5 5
#define ENVIRONMENT_LABEL_83_3 12
#define DEBUGGING_LABEL_83_2 11
#define EXECUTE_CACHE_83_7 7
#define EXECUTE_CACHE_83_6 9
#define FREE_REFERENCES_LABEL_83_0 6
#define NUMBER_OF_LINKER_SECTIONS_83_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto microcode_return_name__type_1;

    case 1:
      current_block = (Rpc - LABEL_83_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_return_name__type_4)
DEFLABEL (microcode_return_name__type_1)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_83_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define LABEL_84_5 5
#define LABEL_84_9 7
#define LABEL_84_7 9
#define LABEL_84_17 11
#define LABEL_84_11 13
#define LABEL_84_15 15
#define LABEL_84_21 17
#define LABEL_84_13 19
#define LABEL_84_24 21
#define LABEL_84_19 23
#define LABEL_84_25 25
#define LABEL_84_26 27
#define LABEL_84_22 29
#define LABEL_84_28 31
#define ENVIRONMENT_LABEL_84_3 62
#define DEBUGGING_LABEL_84_2 61
#define OBJECT_84_1 60
#define OBJECT_84_0 59
#define EXECUTE_CACHE_84_27 33
#define EXECUTE_CACHE_84_23 35
#define EXECUTE_CACHE_84_20 37
#define EXECUTE_CACHE_84_18 39
#define EXECUTE_CACHE_84_16 41
#define EXECUTE_CACHE_84_14 43
#define EXECUTE_CACHE_84_12 45
#define EXECUTE_CACHE_84_10 47
#define EXECUTE_CACHE_84_8 49
#define EXECUTE_CACHE_84_6 51
#define FREE_REFERENCE_84_4 54
#define FREE_REFERENCE_84_3 55
#define FREE_REFERENCE_84_2 56
#define FREE_REFERENCE_84_1 57
#define FREE_REFERENCE_84_0 58
#define FREE_REFERENCES_LABEL_84_0 32
#define NUMBER_OF_LINKER_SECTIONS_84_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_84_4);
      goto return_address__stack_frame_type_11;

    case 1:
      current_block = (Rpc - LABEL_84_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_84_9);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_84_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_84_17);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_84_11);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_84_15);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_84_21);
      goto label_13;

    case 8:
      current_block = (Rpc - LABEL_84_13);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_84_24);
      goto label_14;

    case 10:
      current_block = (Rpc - LABEL_84_19);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_84_25);
      goto label_16;

    case 12:
      current_block = (Rpc - LABEL_84_26);
      goto label_15;

    case 13:
      current_block = (Rpc - LABEL_84_22);
      goto continuation_3;

    case 14:
      current_block = (Rpc - LABEL_84_28);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (return_address__stack_frame_type_19)
DEFLABEL (return_address__stack_frame_type_11)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_84_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_84_9);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_84_11);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;

DEFLABEL (label_20)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_84_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_84_17);
  goto label_20;

DEFLABEL (label_22)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_84_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_84_15);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_19]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_20]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_84_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_84_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_25;
  Wrd8 = Wrd12;

DEFLABEL (label_24)
  Rvl = (Wrd8.Obj);

DEFLABEL (label_23)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_84_26])), (Wrd9.pObj));

DEFLABEL (label_15)
  (Wrd8.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_26)
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_84_2]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_28;
  Wrd15 = Wrd19;

DEFLABEL (label_27)
  Rvl = (Wrd15.Obj);
  goto label_23;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_84_25])), (Wrd16.pObj));

DEFLABEL (label_16)
  (Wrd15.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_29)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_84_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_31;
  Wrd8 = Wrd12;

DEFLABEL (label_30)
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_84_21])), (Wrd9.pObj));

DEFLABEL (label_13)
  (Wrd8.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_84_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_36;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_22]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_23]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_84_22);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_33;
  (Wrd14.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_84_1]);
  (Rsp [1]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_27]));

DEFLABEL (label_33)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_84_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_35;
  Wrd8 = Wrd12;

DEFLABEL (label_34)
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_84_28])), (Wrd9.pObj));

DEFLABEL (label_17)
  (Wrd8.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_36)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_84_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_38;
  Wrd8 = Wrd12;

DEFLABEL (label_37)
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_84_24])), (Wrd9.pObj));

DEFLABEL (label_14)
  (Wrd8.Obj) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define LABEL_85_5 5
#define LABEL_85_8 7
#define LABEL_85_6 9
#define LABEL_85_9 11
#define LABEL_85_12 13
#define LABEL_85_10 15
#define LABEL_85_13 17
#define LABEL_85_15 19
#define LABEL_85_16 21
#define LABEL_85_18 23
#define LABEL_85_19 25
#define LABEL_85_20 27
#define LABEL_85_22 29
#define LABEL_85_23 31
#define LABEL_85_21 33
#define LABEL_85_25 35
#define LABEL_85_27 37
#define LABEL_85_26 39
#define LABEL_85_28 41
#define LABEL_85_30 43
#define LABEL_85_31 45
#define LABEL_85_29 47
#define LABEL_85_32 49
#define LABEL_85_34 51
#define LABEL_85_35 53
#define LABEL_85_33 55
#define LABEL_85_36 57
#define LABEL_85_38 59
#define LABEL_85_37 61
#define LABEL_85_39 63
#define LABEL_85_40 65
#define LABEL_85_41 67
#define LABEL_85_42 69
#define LABEL_85_43 71
#define LABEL_85_44 73
#define ENVIRONMENT_LABEL_85_3 116
#define DEBUGGING_LABEL_85_2 115
#define OBJECT_85_9 114
#define OBJECT_85_8 113
#define OBJECT_85_7 112
#define OBJECT_85_6 111
#define OBJECT_85_5 110
#define OBJECT_85_4 109
#define OBJECT_85_3 108
#define OBJECT_85_2 107
#define OBJECT_85_1 106
#define OBJECT_85_0 105
#define EXECUTE_CACHE_85_24 75
#define EXECUTE_CACHE_85_17 77
#define EXECUTE_CACHE_85_14 79
#define EXECUTE_CACHE_85_11 81
#define EXECUTE_CACHE_85_7 83
#define FREE_REFERENCE_85_5 86
#define FREE_REFERENCE_85_4 87
#define FREE_REFERENCE_85_3 88
#define FREE_REFERENCE_85_2 89
#define FREE_REFERENCE_85_1 90
#define FREE_REFERENCE_85_0 91
#define FREE_ASSIGNMENT_85_11 93
#define FREE_ASSIGNMENT_85_10 94
#define FREE_ASSIGNMENT_85_9 95
#define FREE_ASSIGNMENT_85_8 96
#define FREE_ASSIGNMENT_85_7 97
#define FREE_ASSIGNMENT_85_6 98
#define FREE_ASSIGNMENT_85_5 99
#define FREE_ASSIGNMENT_85_4 100
#define FREE_ASSIGNMENT_85_3 101
#define FREE_ASSIGNMENT_85_2 102
#define FREE_ASSIGNMENT_85_1 103
#define FREE_ASSIGNMENT_85_0 104
#define FREE_REFERENCES_LABEL_85_0 74
#define NUMBER_OF_LINKER_SECTIONS_85_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd42;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_85_4);
      goto initialize_packageB_23;

    case 1:
      current_block = (Rpc - LABEL_85_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_85_8);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_85_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_85_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_85_12);
      goto label_26;

    case 6:
      current_block = (Rpc - LABEL_85_10);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_85_13);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_85_15);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_85_16);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_85_18);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_85_19);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_85_20);
      goto label_29;

    case 13:
      current_block = (Rpc - LABEL_85_22);
      goto label_30;

    case 14:
      current_block = (Rpc - LABEL_85_23);
      goto label_31;

    case 15:
      current_block = (Rpc - LABEL_85_21);
      goto continuation_7;

    case 16:
      current_block = (Rpc - LABEL_85_25);
      goto label_32;

    case 17:
      current_block = (Rpc - LABEL_85_27);
      goto label_33;

    case 18:
      current_block = (Rpc - LABEL_85_26);
      goto continuation_8;

    case 19:
      current_block = (Rpc - LABEL_85_28);
      goto label_34;

    case 20:
      current_block = (Rpc - LABEL_85_30);
      goto label_35;

    case 21:
      current_block = (Rpc - LABEL_85_31);
      goto label_36;

    case 22:
      current_block = (Rpc - LABEL_85_29);
      goto continuation_9;

    case 23:
      current_block = (Rpc - LABEL_85_32);
      goto label_37;

    case 24:
      current_block = (Rpc - LABEL_85_34);
      goto label_38;

    case 25:
      current_block = (Rpc - LABEL_85_35);
      goto label_39;

    case 26:
      current_block = (Rpc - LABEL_85_33);
      goto continuation_10;

    case 27:
      current_block = (Rpc - LABEL_85_36);
      goto label_40;

    case 28:
      current_block = (Rpc - LABEL_85_38);
      goto label_41;

    case 29:
      current_block = (Rpc - LABEL_85_37);
      goto continuation_11;

    case 30:
      current_block = (Rpc - LABEL_85_39);
      goto label_42;

    case 31:
      current_block = (Rpc - LABEL_85_40);
      goto continuation_12;

    case 32:
      current_block = (Rpc - LABEL_85_41);
      goto loop_20;

    case 33:
      current_block = (Rpc - LABEL_85_42);
      goto continuation_16;

    case 34:
      current_block = (Rpc - LABEL_85_43);
      goto label_43;

    case 35:
      current_block = (Rpc - LABEL_85_44);
      goto label_44;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_46)
DEFLABEL (initialize_packageB_23)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_85_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_85_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_85_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_85_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_93;

DEFLABEL (label_92)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_91)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_85_1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_85_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_85_9);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_85_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_90;

DEFLABEL (label_89)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_88)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_85_13);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_85_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_87;

DEFLABEL (label_86)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_85)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_85_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_85_16);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_85_3]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_84;

DEFLABEL (label_83)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_82)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_19]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_85_3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_85_19);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_85_4]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_81;

DEFLABEL (label_80)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_79)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_21]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_85_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_78;
  Wrd21 = Wrd25;

DEFLABEL (label_77)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_85_1]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_76;
  Wrd27 = Wrd31;

DEFLABEL (label_75)
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd34.Obj) = (current_block [OBJECT_85_4]);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_24]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_85_21);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_85_5]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_74;

DEFLABEL (label_73)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_72)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_26]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_85_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_71;
  Wrd21 = Wrd25;

DEFLABEL (label_70)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_85_5]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_85_4]);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_24]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_85_26);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_85_6]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_69;

DEFLABEL (label_68)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_67)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_29]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_85_3]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_66;
  Wrd21 = Wrd25;

DEFLABEL (label_65)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_85_4]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_64;
  Wrd27 = Wrd31;

DEFLABEL (label_63)
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd34.Obj) = (current_block [OBJECT_85_4]);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_24]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_85_29);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_85_7]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_62;

DEFLABEL (label_61)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_60)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_33]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_85_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_59;
  Wrd21 = Wrd25;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_85_5]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_57;
  Wrd27 = Wrd31;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd34.Obj) = (current_block [OBJECT_85_4]);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_24]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_85_33);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_85_8]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_55;

DEFLABEL (label_54)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_53)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_37]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_85_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_52;
  Wrd21 = Wrd25;

DEFLABEL (label_51)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_85_5]);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd29.Obj) = (current_block [OBJECT_85_4]);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_24]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_85_37);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_85_9]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_50;

DEFLABEL (label_49)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_48)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_40]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd22.Obj) = (current_block [OBJECT_85_5]);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_6]), 2);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_85_40);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd8.Obj));
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_85_7]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto loop_20;

DEFLABEL (label_50)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_49;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_85_39])), (Wrd6.pObj), Rvl);

DEFLABEL (label_42)
  goto label_48;

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85_38])), (Wrd22.pObj));

DEFLABEL (label_41)
  (Wrd21.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_55)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_54;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_85_36])), (Wrd6.pObj), Rvl);

DEFLABEL (label_40)
  goto label_53;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85_35])), (Wrd28.pObj));

DEFLABEL (label_39)
  (Wrd27.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85_34])), (Wrd22.pObj));

DEFLABEL (label_38)
  (Wrd21.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_62)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_61;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_85_32])), (Wrd6.pObj), Rvl);

DEFLABEL (label_37)
  goto label_60;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85_31])), (Wrd28.pObj));

DEFLABEL (label_36)
  (Wrd27.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85_30])), (Wrd22.pObj));

DEFLABEL (label_35)
  (Wrd21.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_69)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_68;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_85_28])), (Wrd6.pObj), Rvl);

DEFLABEL (label_34)
  goto label_67;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85_27])), (Wrd22.pObj));

DEFLABEL (label_33)
  (Wrd21.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_74)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_73;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_85_25])), (Wrd6.pObj), Rvl);

DEFLABEL (label_32)
  goto label_72;

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85_23])), (Wrd28.pObj));

DEFLABEL (label_31)
  (Wrd27.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85_22])), (Wrd22.pObj));

DEFLABEL (label_30)
  (Wrd21.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_81)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_80;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_85_20])), (Wrd6.pObj), Rvl);

DEFLABEL (label_29)
  goto label_79;

DEFLABEL (label_84)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_83;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_85_18])), (Wrd6.pObj), Rvl);

DEFLABEL (label_28)
  goto label_82;

DEFLABEL (label_87)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_86;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_85_15])), (Wrd6.pObj), Rvl);

DEFLABEL (label_27)
  goto label_85;

DEFLABEL (label_90)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_89;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_85_12])), (Wrd6.pObj), Rvl);

DEFLABEL (label_26)
  goto label_88;

DEFLABEL (label_93)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_92;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_85_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_25)
  goto label_91;

DEFLABEL (loop_47)
DEFLABEL (loop_20)
  INTERRUPT_CHECK (26, LABEL_85_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_6]), 2);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_85_42);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd9.Obj));
  (Wrd6.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));
  (Wrd11.Obj) = (Rsp [1]);
  if (! ((Wrd6.Obj) == (Wrd11.Obj)))
    goto label_94;
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  (Wrd45.Lng) = ((Wrd44.Lng) + 1L);
  (Wrd42.Obj) = (LONG_TO_FIXNUM (Wrd45.Lng));
  (Rsp [0]) = (Wrd42.Obj);
  goto loop_20;

DEFLABEL (label_94)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd16.Lng) = ((Wrd15.Lng) - 1L);
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  Rsp = (& (Rsp [2]));
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_85_10]));
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_100;

DEFLABEL (label_99)
  ((Wrd17.pObj) [0]) = (Wrd13.Obj);

DEFLABEL (label_98)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_85_11]));
  (Wrd30.Obj) = (current_block [OBJECT_85_8]);
  (Wrd37.Obj) = ((Wrd29.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_97;

DEFLABEL (label_96)
  ((Wrd29.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_95)
  Rvl = (current_block [OBJECT_85_9]);
  goto pop_return;

DEFLABEL (label_97)
  if ((Wrd37.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_96;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_85_44])), (Wrd29.pObj), (Wrd30.Obj));

DEFLABEL (label_44)
  goto label_95;

DEFLABEL (label_100)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_99;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_85_43])), (Wrd17.pObj), (Wrd13.Obj));

DEFLABEL (label_43)
  goto label_98;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define LABEL_86_5 5
#define LABEL_86_6 7
#define LABEL_86_8 9
#define LABEL_86_11 11
#define LABEL_86_12 13
#define LABEL_86_10 15
#define LABEL_86_14 17
#define LABEL_86_13 19
#define LABEL_86_15 21
#define LABEL_86_17 23
#define LABEL_86_18 25
#define LABEL_86_21 27
#define LABEL_86_20 29
#define LABEL_86_23 31
#define LABEL_86_22 33
#define LABEL_86_25 35
#define LABEL_86_24 37
#define LABEL_86_27 39
#define LABEL_86_26 41
#define LABEL_86_29 43
#define LABEL_86_28 45
#define LABEL_86_30 47
#define LABEL_86_32 49
#define LABEL_86_33 51
#define LABEL_86_31 53
#define LABEL_86_34 55
#define LABEL_86_35 57
#define LABEL_86_36 59
#define LABEL_86_37 61
#define LABEL_86_38 63
#define LABEL_86_39 65
#define LABEL_86_41 67
#define LABEL_86_40 69
#define LABEL_86_42 71
#define LABEL_86_43 73
#define LABEL_86_45 75
#define LABEL_86_50 77
#define LABEL_86_46 79
#define LABEL_86_52 81
#define LABEL_86_53 83
#define LABEL_86_47 85
#define LABEL_86_48 87
#define LABEL_86_56 89
#define LABEL_86_49 91
#define LABEL_86_57 93
#define LABEL_86_58 95
#define LABEL_86_51 97
#define LABEL_86_54 99
#define LABEL_86_60 101
#define LABEL_86_61 103
#define LABEL_86_55 105
#define LABEL_86_62 107
#define LABEL_86_59 109
#define LABEL_86_64 111
#define LABEL_86_65 113
#define LABEL_86_63 115
#define LABEL_86_66 117
#define LABEL_86_67 119
#define LABEL_86_68 121
#define LABEL_86_69 123
#define ENVIRONMENT_LABEL_86_3 187
#define DEBUGGING_LABEL_86_2 186
#define OBJECT_86_40 185
#define OBJECT_86_39 184
#define OBJECT_86_38 183
#define OBJECT_86_37 182
#define OBJECT_86_36 181
#define OBJECT_86_35 180
#define OBJECT_86_34 179
#define OBJECT_86_33 178
#define OBJECT_86_32 177
#define OBJECT_86_31 176
#define OBJECT_86_30 175
#define OBJECT_86_29 174
#define OBJECT_86_28 173
#define OBJECT_86_27 172
#define OBJECT_86_26 171
#define OBJECT_86_25 170
#define OBJECT_86_24 169
#define OBJECT_86_23 168
#define OBJECT_86_22 167
#define OBJECT_86_21 166
#define OBJECT_86_20 165
#define OBJECT_86_19 164
#define OBJECT_86_18 163
#define OBJECT_86_17 162
#define OBJECT_86_16 161
#define OBJECT_86_15 160
#define OBJECT_86_14 159
#define OBJECT_86_13 158
#define OBJECT_86_12 157
#define OBJECT_86_11 156
#define OBJECT_86_10 155
#define OBJECT_86_9 154
#define OBJECT_86_8 153
#define OBJECT_86_7 152
#define OBJECT_86_6 151
#define OBJECT_86_5 150
#define OBJECT_86_4 149
#define OBJECT_86_3 148
#define OBJECT_86_2 147
#define OBJECT_86_1 146
#define OBJECT_86_0 145
#define EXECUTE_CACHE_86_44 125
#define EXECUTE_CACHE_86_19 127
#define EXECUTE_CACHE_86_16 129
#define EXECUTE_CACHE_86_9 131
#define EXECUTE_CACHE_86_7 133
#define FREE_REFERENCE_86_8 136
#define FREE_REFERENCE_86_7 137
#define FREE_REFERENCE_86_6 138
#define FREE_REFERENCE_86_5 139
#define FREE_REFERENCE_86_4 140
#define FREE_REFERENCE_86_3 141
#define FREE_REFERENCE_86_2 142
#define FREE_REFERENCE_86_1 143
#define FREE_REFERENCE_86_0 144
#define FREE_REFERENCES_LABEL_86_0 124
#define NUMBER_OF_LINKER_SECTIONS_86_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_86_4);
      goto make_stack_frame_types_55;

    case 1:
      current_block = (Rpc - LABEL_86_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_86_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_86_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_86_11);
      goto standard_frame_49;

    case 5:
      current_block = (Rpc - LABEL_86_12);
      goto label_57;

    case 6:
      current_block = (Rpc - LABEL_86_10);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_86_14);
      goto stack_frame_type_46;

    case 8:
      current_block = (Rpc - LABEL_86_13);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_86_15);
      goto continuation_41;

    case 10:
      current_block = (Rpc - LABEL_86_17);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_86_18);
      goto continuation_42;

    case 12:
      current_block = (Rpc - LABEL_86_21);
      goto label_58;

    case 13:
      current_block = (Rpc - LABEL_86_20);
      goto continuation_6;

    case 14:
      current_block = (Rpc - LABEL_86_23);
      goto label_59;

    case 15:
      current_block = (Rpc - LABEL_86_22);
      goto continuation_7;

    case 16:
      current_block = (Rpc - LABEL_86_25);
      goto label_60;

    case 17:
      current_block = (Rpc - LABEL_86_24);
      goto continuation_8;

    case 18:
      current_block = (Rpc - LABEL_86_27);
      goto label_61;

    case 19:
      current_block = (Rpc - LABEL_86_26);
      goto continuation_9;

    case 20:
      current_block = (Rpc - LABEL_86_29);
      goto label_62;

    case 21:
      current_block = (Rpc - LABEL_86_28);
      goto continuation_10;

    case 22:
      current_block = (Rpc - LABEL_86_30);
      goto continuation_11;

    case 23:
      current_block = (Rpc - LABEL_86_32);
      goto standard_subproblem_50;

    case 24:
      current_block = (Rpc - LABEL_86_33);
      goto label_63;

    case 25:
      current_block = (Rpc - LABEL_86_31);
      goto continuation_12;

    case 26:
      current_block = (Rpc - LABEL_86_34);
      goto continuation_13;

    case 27:
      current_block = (Rpc - LABEL_86_35);
      goto continuation_14;

    case 28:
      current_block = (Rpc - LABEL_86_36);
      goto continuation_15;

    case 29:
      current_block = (Rpc - LABEL_86_37);
      goto continuation_16;

    case 30:
      current_block = (Rpc - LABEL_86_38);
      goto continuation_17;

    case 31:
      current_block = (Rpc - LABEL_86_39);
      goto continuation_18;

    case 32:
      current_block = (Rpc - LABEL_86_41);
      goto label_64;

    case 33:
      current_block = (Rpc - LABEL_86_40);
      goto continuation_19;

    case 34:
      current_block = (Rpc - LABEL_86_42);
      goto continuation_21;

    case 35:
      current_block = (Rpc - LABEL_86_43);
      goto continuation_20;

    case 36:
      current_block = (Rpc - LABEL_86_45);
      goto continuation_27;

    case 37:
      current_block = (Rpc - LABEL_86_50);
      goto label_65;

    case 38:
      current_block = (Rpc - LABEL_86_46);
      goto continuation_29;

    case 39:
      current_block = (Rpc - LABEL_86_52);
      goto label_66;

    case 40:
      current_block = (Rpc - LABEL_86_53);
      goto label_67;

    case 41:
      current_block = (Rpc - LABEL_86_47);
      goto continuation_28;

    case 42:
      current_block = (Rpc - LABEL_86_48);
      goto continuation_22;

    case 43:
      current_block = (Rpc - LABEL_86_56);
      goto label_68;

    case 44:
      current_block = (Rpc - LABEL_86_49);
      goto continuation_40;

    case 45:
      current_block = (Rpc - LABEL_86_57);
      goto non_history_subproblem_53;

    case 46:
      current_block = (Rpc - LABEL_86_58);
      goto label_69;

    case 47:
      current_block = (Rpc - LABEL_86_51);
      goto continuation_32;

    case 48:
      current_block = (Rpc - LABEL_86_54);
      goto continuation_30;

    case 49:
      current_block = (Rpc - LABEL_86_60);
      goto lambda_26;

    case 50:
      current_block = (Rpc - LABEL_86_61);
      goto label_70;

    case 51:
      current_block = (Rpc - LABEL_86_55);
      goto continuation_23;

    case 52:
      current_block = (Rpc - LABEL_86_62);
      goto label_71;

    case 53:
      current_block = (Rpc - LABEL_86_59);
      goto continuation_33;

    case 54:
      current_block = (Rpc - LABEL_86_64);
      goto lambda_25;

    case 55:
      current_block = (Rpc - LABEL_86_65);
      goto label_72;

    case 56:
      current_block = (Rpc - LABEL_86_63);
      goto continuation_34;

    case 57:
      current_block = (Rpc - LABEL_86_66);
      goto continuation_35;

    case 58:
      current_block = (Rpc - LABEL_86_67);
      goto continuation_36;

    case 59:
      current_block = (Rpc - LABEL_86_68);
      goto continuation_37;

    case 60:
      current_block = (Rpc - LABEL_86_69);
      goto continuation_38;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_stack_frame_types_74)
DEFLABEL (make_stack_frame_types_55)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_86_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_86_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_86_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_86_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_86_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto standard_frame_49;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_86_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_86_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_86_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_86_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto standard_frame_49;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_86_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_86_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_86_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_86_4]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto standard_frame_49;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_86_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_86_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_86_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_86_5]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto standard_frame_49;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_86_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_86_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_86_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_86_6]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto standard_frame_49;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_86_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_86_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_94;
  Wrd11 = Wrd15;

DEFLABEL (label_93)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_86_8]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_86_9]);
  (* (--Rsp)) = (Wrd18.Obj);
  goto standard_frame_49;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_86_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_86_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_92;
  Wrd11 = Wrd15;

DEFLABEL (label_91)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_86_8]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_86_10]);
  (* (--Rsp)) = (Wrd18.Obj);
  goto standard_frame_49;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_86_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_86_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_90;
  Wrd11 = Wrd15;

DEFLABEL (label_89)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_86_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_86_11]);
  (* (--Rsp)) = (Wrd18.Obj);
  goto standard_frame_49;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_86_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_86_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_88;
  Wrd11 = Wrd15;

DEFLABEL (label_87)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_86_12]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_86_13]);
  (* (--Rsp)) = (Wrd18.Obj);
  goto standard_frame_49;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_86_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_86_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_86_14]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto standard_subproblem_50;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_86_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_86_12]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_86_15]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto standard_subproblem_50;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_86_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_86_12]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_86_17]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto standard_subproblem_50;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_86_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_86_12]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_86_18]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto standard_subproblem_50;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_86_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_86_12]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_86_19]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto standard_subproblem_50;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_86_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_86_12]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_86_20]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto standard_subproblem_50;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_86_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_86_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_86_21]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto standard_subproblem_50;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_86_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_86_12]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_86_22]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto standard_subproblem_50;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_86_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_86_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_86;
  Wrd11 = Wrd15;

DEFLABEL (label_85)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_86_23]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto standard_subproblem_50;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_86_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_43]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_86_24]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_86_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_44]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_86_43);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [3]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (current_block [OBJECT_86_25]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto standard_subproblem_50;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_86_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [3]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_86_8]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_84;
  Wrd11 = Wrd15;

DEFLABEL (label_83)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_86_29]);
  (* (--Rsp)) = (Wrd18.Obj);
  goto non_history_subproblem_53;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_86_55);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_86_8]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_82;
  Wrd5 = Wrd9;

DEFLABEL (label_81)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_86_33]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = (& (Rsp [5]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd14.pObj)));
  (Rsp [3]) = (Wrd16.Obj);
  goto non_history_subproblem_53;

DEFLABEL (label_82)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86_62])), (Wrd6.pObj));

DEFLABEL (label_71)
  (Wrd5.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86_56])), (Wrd12.pObj));

DEFLABEL (label_68)
  (Wrd11.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86_41])), (Wrd12.pObj));

DEFLABEL (label_64)
  (Wrd11.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86_29])), (Wrd12.pObj));

DEFLABEL (label_62)
  (Wrd11.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86_27])), (Wrd12.pObj));

DEFLABEL (label_61)
  (Wrd11.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86_25])), (Wrd12.pObj));

DEFLABEL (label_60)
  (Wrd11.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86_23])), (Wrd12.pObj));

DEFLABEL (label_59)
  (Wrd11.Obj) = Rvl;
  goto label_93;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_86_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_46]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_47]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_86_24]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_86_8]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_44]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_86_47);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [4]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (current_block [OBJECT_86_28]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_26;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_86_54);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_86_32]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.pObj) = (& (Rsp [5]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (Rsp [2]) = (Wrd10.Obj);
  goto lambda_26;

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_86_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_86_6]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_98;
  Wrd11 = Wrd15;

DEFLABEL (label_97)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_86_7]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_96;
  Wrd17 = Wrd21;

DEFLABEL (label_95)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_86_16]);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd25.Obj) = (current_block [OBJECT_86_27]);
  (* (--Rsp)) = (Wrd25.Obj);
  goto stack_frame_type_46;

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_86_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_86_30]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_86_31]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_25;

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_86_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_86_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_86_34]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_25;

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_86_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_86_35]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_86_36]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_26;

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_86_66);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_86_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_86_37]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_26;

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_86_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_86_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_86_38]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_26;

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_86_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_86_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_86_39]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_26;

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_86_69);
  (Wrd5.pObj) = (& (Rsp [1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd5.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_86_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_86_40]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_26;

DEFLABEL (label_96)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86_53])), (Wrd18.pObj));

DEFLABEL (label_67)
  (Wrd17.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86_52])), (Wrd12.pObj));

DEFLABEL (label_66)
  (Wrd11.Obj) = Rvl;
  goto label_97;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_86_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_86_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_86_5]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_100;
  Wrd12 = Wrd16;

DEFLABEL (label_99)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_86_26]);
  (* (--Rsp)) = (Wrd18.Obj);
  goto non_history_subproblem_53;

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_86_49);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_100)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86_50])), (Wrd13.pObj));

DEFLABEL (label_65)
  (Wrd12.Obj) = Rvl;
  goto label_99;

DEFLABEL (standard_frame_75)
DEFLABEL (standard_frame_49)
  INTERRUPT_CHECK (26, LABEL_86_11);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd8.Obj) = (Rsp [4]);
  if ((Wrd8.Obj) == (current_block [OBJECT_86_0]))
    goto label_102;
  Wrd10 = Wrd8;

DEFLABEL (label_101)
  (Rsp [4]) = (Wrd10.Obj);
  goto stack_frame_type_46;

DEFLABEL (label_102)
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_86_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_104;
  Wrd11 = Wrd15;

DEFLABEL (label_103)
  Wrd10 = Wrd11;
  goto label_101;

DEFLABEL (label_104)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86_12])), (Wrd12.pObj));

DEFLABEL (label_57)
  (Wrd11.Obj) = Rvl;
  goto label_103;

DEFLABEL (stack_frame_type_76)
DEFLABEL (stack_frame_type_46)
  INTERRUPT_CHECK (26, LABEL_86_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_16]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_86_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_19]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_86_18);
  (* (--Rsp)) = Rvl;
  (Wrd25.Obj) = (Rsp [7]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_106;
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_106;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) (Wrd18.Lng)) < ((unsigned long) (Wrd24.Lng))))
    goto label_106;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd13.pObj) = (& ((Wrd22.pObj) [(Wrd8.Lng)]));
  ((Wrd13.pObj) [1]) = Rvl;

DEFLABEL (label_105)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_106)
  (Wrd30.Obj) = (Rsp [7]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [0]);
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_21]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_7]), 3);

DEFLABEL (label_58)
  goto label_105;

DEFLABEL (standard_subproblem_77)
DEFLABEL (standard_subproblem_50)
  INTERRUPT_CHECK (26, LABEL_86_32);
  (Wrd5.Obj) = (current_block [OBJECT_86_16]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_86_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_108;
  Wrd10 = Wrd14;

DEFLABEL (label_107)
  (Rsp [4]) = (Wrd10.Obj);
  goto stack_frame_type_46;

DEFLABEL (label_108)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86_33])), (Wrd11.pObj));

DEFLABEL (label_63)
  (Wrd10.Obj) = Rvl;
  goto label_107;

DEFLABEL (non_history_subproblem_78)
DEFLABEL (non_history_subproblem_53)
  INTERRUPT_CHECK (26, LABEL_86_57);
  (Wrd5.Obj) = (current_block [OBJECT_86_16]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd8.Obj) = (Rsp [4]);
  if ((Wrd8.Obj) == (current_block [OBJECT_86_0]))
    goto label_110;
  Wrd10 = Wrd8;

DEFLABEL (label_109)
  (Rsp [4]) = (Wrd10.Obj);
  goto stack_frame_type_46;

DEFLABEL (label_110)
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_86_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_112;
  Wrd11 = Wrd15;

DEFLABEL (label_111)
  Wrd10 = Wrd11;
  goto label_109;

DEFLABEL (label_112)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86_58])), (Wrd12.pObj));

DEFLABEL (label_69)
  (Wrd11.Obj) = Rvl;
  goto label_111;

DEFLABEL (lambda_79)
DEFLABEL (lambda_26)
  INTERRUPT_CHECK (26, LABEL_86_60);
  (Wrd5.Obj) = (current_block [OBJECT_86_16]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_86_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_114;
  Wrd10 = Wrd14;

DEFLABEL (label_113)
  (Rsp [4]) = (Wrd10.Obj);
  goto stack_frame_type_46;

DEFLABEL (label_114)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86_61])), (Wrd11.pObj));

DEFLABEL (label_70)
  (Wrd10.Obj) = Rvl;
  goto label_113;

DEFLABEL (lambda_80)
DEFLABEL (lambda_25)
  INTERRUPT_CHECK (26, LABEL_86_64);
  (Wrd5.Obj) = (current_block [OBJECT_86_16]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_86_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_116;
  Wrd10 = Wrd14;

DEFLABEL (label_115)
  (Rsp [4]) = (Wrd10.Obj);
  goto stack_frame_type_46;

DEFLABEL (label_116)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86_65])), (Wrd11.pObj));

DEFLABEL (label_72)
  (Wrd10.Obj) = Rvl;
  goto label_115;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define LABEL_87_5 5
#define LABEL_87_7 7
#define LABEL_87_8 9
#define LABEL_87_11 11
#define LABEL_87_15 13
#define LABEL_87_10 15
#define LABEL_87_14 17
#define LABEL_87_18 19
#define LABEL_87_17 21
#define LABEL_87_19 23
#define LABEL_87_20 25
#define LABEL_87_23 27
#define LABEL_87_24 29
#define LABEL_87_21 31
#define LABEL_87_22 33
#define LABEL_87_25 35
#define ENVIRONMENT_LABEL_87_3 59
#define DEBUGGING_LABEL_87_2 58
#define OBJECT_87_8 57
#define OBJECT_87_7 56
#define OBJECT_87_6 55
#define OBJECT_87_5 54
#define OBJECT_87_4 53
#define OBJECT_87_3 52
#define OBJECT_87_2 51
#define OBJECT_87_1 50
#define OBJECT_87_0 49
#define EXECUTE_CACHE_87_26 37
#define EXECUTE_CACHE_87_16 39
#define EXECUTE_CACHE_87_13 41
#define EXECUTE_CACHE_87_12 43
#define EXECUTE_CACHE_87_9 45
#define EXECUTE_CACHE_87_6 47
#define FREE_REFERENCES_LABEL_87_0 36
#define NUMBER_OF_LINKER_SECTIONS_87_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd29;
  machine_word Wrd13;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_87_4);
      goto length_hardware_trap_23;

    case 1:
      current_block = (Rpc - LABEL_87_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_87_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_87_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_87_11);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_87_15);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_87_10);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_87_14);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_87_18);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_87_17);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_87_19);
      goto label_26;

    case 11:
      current_block = (Rpc - LABEL_87_20);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_87_23);
      goto label_27;

    case 13:
      current_block = (Rpc - LABEL_87_24);
      goto label_28;

    case 14:
      current_block = (Rpc - LABEL_87_21);
      goto continuation_11;

    case 15:
      current_block = (Rpc - LABEL_87_22);
      goto continuation_16;

    case 16:
      current_block = (Rpc - LABEL_87_25);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (length_hardware_trap_30)
DEFLABEL (length_hardware_trap_23)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_87_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_87_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_87_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_87_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_31;
  Rvl = (current_block [OBJECT_87_2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_87_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_87_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_87_3]))
    goto label_37;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_87_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_87_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_32;
  (Wrd24.Obj) = (current_block [OBJECT_87_6]);
  (Rsp [3]) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd25.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_13]));

DEFLABEL (label_32)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_36;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd17.Lng) = ((Wrd21.Lng) + 9L);
  if (! (LONG_TO_FIXNUM_P (Wrd17.Lng)))
    goto label_36;
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_35)
  (Wrd23.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_87_14);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 26)
    goto label_34;

DEFLABEL (label_33)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_34)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_33;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd13.Lng) - (Wrd15.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd11.Lng)))
    goto label_33;
  Rvl = (LONG_TO_FIXNUM (Wrd11.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd10.Obj) = (current_block [OBJECT_87_2]);
  (Wrd11.Obj) = (Rsp [5]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_15]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_10]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_87_4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_6]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_87_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_7]), 1);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_87_17);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_18]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_50;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd29.Lng) < 0))
    goto label_49;

DEFLABEL (label_48)
  (Wrd26.Obj) = (current_block [OBJECT_87_8]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_6]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_87_18);
  (Wrd17.Obj) = Rvl;

DEFLABEL (label_47)
  (Rsp [0]) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_21]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_6]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_87_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_26]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_87_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd7.Obj) = (current_block [OBJECT_87_2]);
  (Rsp [4]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd8.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 26)
    goto label_39;

DEFLABEL (label_38)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_39)
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd16.Lng) + 9L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_38;
  Rvl = (LONG_TO_FIXNUM (Wrd12.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_22]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_46;
  (Wrd30.Obj) = (Rsp [6]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_46;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd32.Lng) = ((Wrd34.Lng) + (Wrd36.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd32.Lng)))
    goto label_46;
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd32.Lng));

DEFLABEL (label_45)
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_44;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd43.Lng) = ((Wrd46.Lng) + 9L);
  if (! (LONG_TO_FIXNUM_P (Wrd43.Lng)))
    goto label_44;
  (Wrd47.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_43)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_25]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_9]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_87_25);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_16]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_87_22);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [4]));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 26)
    goto label_42;

DEFLABEL (label_41)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_42)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_41;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd13.Lng) - (Wrd15.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd11.Lng)))
    goto label_41;
  Rvl = (LONG_TO_FIXNUM (Wrd11.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd37.Obj) = (current_block [OBJECT_87_2]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_24]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (Rsp [6]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_23]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_27)
  (Wrd27.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_49)
  (Wrd17.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [1]));
  goto label_47;

DEFLABEL (label_50)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_19]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  goto label_48;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define LABEL_88_7 5
#define LABEL_88_8 7
#define LABEL_88_5 9
#define LABEL_88_12 11
#define LABEL_88_9 13
#define LABEL_88_15 15
#define ENVIRONMENT_LABEL_88_3 31
#define DEBUGGING_LABEL_88_2 30
#define OBJECT_88_0 29
#define EXECUTE_CACHE_88_16 17
#define EXECUTE_CACHE_88_14 19
#define EXECUTE_CACHE_88_13 21
#define EXECUTE_CACHE_88_11 23
#define EXECUTE_CACHE_88_10 25
#define EXECUTE_CACHE_88_6 27
#define FREE_REFERENCES_LABEL_88_0 16
#define NUMBER_OF_LINKER_SECTIONS_88_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_88_4);
      goto heuristic_6;

    case 1:
      current_block = (Rpc - LABEL_88_7);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_88_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_88_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_88_12);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_88_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_88_15);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (heuristic_10)
DEFLABEL (heuristic_6)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_88_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;

DEFLABEL (label_11)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_88_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_88_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_88_0]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_88_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_15)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_88_9);
  (Rsp [0]) = Rvl;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_14;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd15.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_14;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_13)
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_16]));

DEFLABEL (label_14)
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_8)
  (Wrd10.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define LABEL_89_5 5
#define LABEL_89_7 7
#define LABEL_89_8 9
#define ENVIRONMENT_LABEL_89_3 19
#define DEBUGGING_LABEL_89_2 18
#define OBJECT_89_2 17
#define OBJECT_89_1 16
#define OBJECT_89_0 15
#define EXECUTE_CACHE_89_6 11
#define FREE_REFERENCE_89_0 14
#define FREE_REFERENCES_LABEL_89_0 10
#define NUMBER_OF_LINKER_SECTIONS_89_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_89_4);
      goto hardware_trap_frameP_2;

    case 1:
      current_block = (Rpc - LABEL_89_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_89_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_89_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hardware_trap_frameP_7)
DEFLABEL (hardware_trap_frameP_2)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_89_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_89_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_15;
  Wrd7 = Wrd11;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_13;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd21.Lng))))
    goto label_13;
  (Wrd13.Obj) = ((Wrd19.pObj) [2]);

DEFLABEL (label_12)
  (Wrd29.Obj) = (* (Rsp++));
  if ((Wrd13.Obj) == (Wrd29.Obj))
    goto label_9;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_89_2]);

DEFLABEL (label_8)
DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (current_block [OBJECT_89_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

DEFLABEL (label_5)
  (Wrd13.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_89_7])), (Wrd8.pObj));

DEFLABEL (label_4)
  (Wrd7.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
conpar_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto guarantee_hardware_trap_frame_1;

    case 1:
      current_block = (Rpc - LABEL_90_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_hardware_trap_frame_4)
DEFLABEL (guarantee_hardware_trap_frame_1)
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
#define ENVIRONMENT_LABEL_91_3 11
#define DEBUGGING_LABEL_91_2 10
#define OBJECT_91_2 9
#define OBJECT_91_1 8
#define OBJECT_91_0 7
#define EXECUTE_CACHE_91_5 5
#define FREE_REFERENCES_LABEL_91_0 4
#define NUMBER_OF_LINKER_SECTIONS_91_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_91_4);
      goto error_not_hardware_trap_frame_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_hardware_trap_frame_5)
DEFLABEL (error_not_hardware_trap_frame_2)
  INTERRUPT_CHECK (26, LABEL_91_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_91_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_91_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_91_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_92_4 3
#define LABEL_92_5 5
#define LABEL_92_7 7
#define ENVIRONMENT_LABEL_92_3 17
#define DEBUGGING_LABEL_92_2 16
#define OBJECT_92_2 15
#define OBJECT_92_1 14
#define OBJECT_92_0 13
#define EXECUTE_CACHE_92_8 9
#define EXECUTE_CACHE_92_6 11
#define FREE_REFERENCES_LABEL_92_0 8
#define NUMBER_OF_LINKER_SECTIONS_92_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
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
      goto hardware_trap_frame_code_5;

    case 1:
      current_block = (Rpc - LABEL_92_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_92_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hardware_trap_frame_code_8)
DEFLABEL (hardware_trap_frame_code_5)
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
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_92_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_92_7);
  (Rsp [0]) = Rvl;
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd7.uLng) == 1)
    goto label_12;
  if ((Wrd7.uLng) == 30)
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_9;

DEFLABEL (label_10)
  Rvl = Rvl;

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  if ((Wrd7.uLng) == 1)
    goto label_13;
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_2]), 1);

DEFLABEL (label_13)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Rvl));
  Rvl = ((Wrd16.pObj) [1]);
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_93_4 3
#define LABEL_93_5 5
#define LABEL_93_7 7
#define LABEL_93_9 9
#define LABEL_93_10 11
#define LABEL_93_12 13
#define LABEL_93_13 15
#define LABEL_93_14 17
#define LABEL_93_15 19
#define LABEL_93_19 21
#define LABEL_93_16 23
#define LABEL_93_20 25
#define LABEL_93_17 27
#define ENVIRONMENT_LABEL_93_3 49
#define DEBUGGING_LABEL_93_2 48
#define OBJECT_93_8 47
#define OBJECT_93_7 46
#define OBJECT_93_6 45
#define OBJECT_93_5 44
#define OBJECT_93_4 43
#define OBJECT_93_3 42
#define OBJECT_93_2 41
#define OBJECT_93_1 40
#define OBJECT_93_0 39
#define EXECUTE_CACHE_93_21 29
#define EXECUTE_CACHE_93_18 31
#define EXECUTE_CACHE_93_11 33
#define EXECUTE_CACHE_93_8 35
#define EXECUTE_CACHE_93_6 37
#define FREE_REFERENCES_LABEL_93_0 28
#define NUMBER_OF_LINKER_SECTIONS_93_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_93 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_93_4);
      goto hardware_trap_frame_print_registers_17;

    case 1:
      current_block = (Rpc - LABEL_93_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_93_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_93_9);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_93_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_93_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_93_13);
      goto loop_13;

    case 7:
      current_block = (Rpc - LABEL_93_14);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_93_15);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_93_19);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_93_16);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_93_20);
      goto label_22;

    case 12:
      current_block = (Rpc - LABEL_93_17);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hardware_trap_frame_print_registers_24)
DEFLABEL (hardware_trap_frame_print_registers_17)
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
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_93_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_93_7);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_26;
  Rvl = (current_block [OBJECT_93_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd12.Obj));
  (Wrd8.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));
  (Wrd19.Obj) = ((SCHEME_OBJECT) 26);
  if (! ((Wrd19.uLng) == 26))
    goto label_28;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd20.Lng) = ((Wrd21.Lng) - 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd20.Lng)))
    goto label_28;
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_27)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_10]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_93_4]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_93_5]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_93_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_93_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_93_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_93_12);
  (Wrd5.Obj) = (current_block [OBJECT_93_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_13;

DEFLABEL (label_28)
  (Wrd15.Obj) = (current_block [OBJECT_93_3]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (loop_25)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_93_13);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_35;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_35;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd28.Lng) < (Wrd30.Lng))
    goto label_30;

DEFLABEL (label_29)
  Rvl = (current_block [OBJECT_93_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_15]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_16]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_17]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_18]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_93_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_93_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_21]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_93_16);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_34;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd16.Lng) + 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_34;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_33)
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_11]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_93_15);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_32;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_32;
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_31)
  (Rsp [0]) = (Wrd9.Obj);
  goto loop_13;

DEFLABEL (label_32)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_21)
  (Wrd9.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd5.Obj) = (current_block [OBJECT_93_3]);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_35)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_20)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_30;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_94_4 3
#define LABEL_94_7 5
#define LABEL_94_5 7
#define LABEL_94_6 9
#define LABEL_94_11 11
#define LABEL_94_12 13
#define LABEL_94_13 15
#define LABEL_94_8 17
#define LABEL_94_10 19
#define LABEL_94_14 21
#define LABEL_94_16 23
#define LABEL_94_17 25
#define LABEL_94_18 27
#define ENVIRONMENT_LABEL_94_3 44
#define DEBUGGING_LABEL_94_2 43
#define OBJECT_94_5 42
#define OBJECT_94_4 41
#define OBJECT_94_3 40
#define OBJECT_94_2 39
#define OBJECT_94_1 38
#define OBJECT_94_0 37
#define EXECUTE_CACHE_94_19 29
#define EXECUTE_CACHE_94_15 31
#define EXECUTE_CACHE_94_9 33
#define FREE_REFERENCE_94_0 36
#define FREE_REFERENCES_LABEL_94_0 28
#define NUMBER_OF_LINKER_SECTIONS_94_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_94 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd38;
  machine_word Wrd31;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_94_4);
      goto print_register_12;

    case 1:
      current_block = (Rpc - LABEL_94_7);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_94_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_94_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_94_11);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_94_12);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_94_13);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_94_8);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_94_10);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_94_14);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_94_16);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_94_17);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_94_18);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_register_19)
DEFLABEL (print_register_12)
  INTERRUPT_CHECK (26, LABEL_94_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_94_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_27;
  Wrd11 = Wrd15;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_94_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd13.Obj) = (Rsp [5]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_25;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd17.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_25;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_24)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_94_0]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_23;
  Wrd20 = Wrd24;

DEFLABEL (label_22)
  Wrd19 = Wrd20;
  (Wrd26.Obj) = (* (Rsp++));
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_21;
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_21;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (multiply_with_overflow ((Wrd35.Lng), (Wrd36.Lng), (& (Wrd34.Lng))))
    goto label_21;
  (Wrd37.Obj) = (LONG_TO_FIXNUM (Wrd34.Lng));
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_20)
  (Wrd38.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_1]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_94_10);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_3]), 1);

DEFLABEL (label_21)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_13]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94_12])), (Wrd21.pObj));

DEFLABEL (label_16)
  (Wrd20.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd9.Obj) = (Rsp [5]);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94_7])), (Wrd12.pObj));

DEFLABEL (label_14)
  (Wrd11.Obj) = Rvl;
  goto label_26;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_94_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_94_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_94_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_94_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_94_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_94_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_94_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_94_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_19]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_94_18);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_15]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_95_4 3
#define LABEL_95_5 5
#define LABEL_95_8 7
#define LABEL_95_9 9
#define LABEL_95_7 11
#define LABEL_95_13 13
#define LABEL_95_11 15
#define LABEL_95_14 17
#define LABEL_95_16 19
#define LABEL_95_17 21
#define LABEL_95_19 23
#define LABEL_95_20 25
#define LABEL_95_22 27
#define LABEL_95_23 29
#define ENVIRONMENT_LABEL_95_3 56
#define DEBUGGING_LABEL_95_2 55
#define OBJECT_95_9 54
#define OBJECT_95_8 53
#define OBJECT_95_7 52
#define OBJECT_95_6 51
#define OBJECT_95_5 50
#define OBJECT_95_4 49
#define OBJECT_95_3 48
#define OBJECT_95_2 47
#define OBJECT_95_1 46
#define OBJECT_95_0 45
#define EXECUTE_CACHE_95_24 31
#define EXECUTE_CACHE_95_21 33
#define EXECUTE_CACHE_95_18 35
#define EXECUTE_CACHE_95_15 37
#define EXECUTE_CACHE_95_12 39
#define EXECUTE_CACHE_95_10 41
#define EXECUTE_CACHE_95_6 43
#define FREE_REFERENCES_LABEL_95_0 30
#define NUMBER_OF_LINKER_SECTIONS_95_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_95 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd25;
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
      goto hardware_trap_frame_print_stack_16;

    case 1:
      current_block = (Rpc - LABEL_95_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_95_8);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_95_9);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_95_7);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_95_13);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_95_11);
      goto continuation_14;

    case 7:
      current_block = (Rpc - LABEL_95_14);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_95_16);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_95_17);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_95_19);
      goto continuation_13;

    case 11:
      current_block = (Rpc - LABEL_95_20);
      goto lambda_10;

    case 12:
      current_block = (Rpc - LABEL_95_22);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_95_23);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hardware_trap_frame_print_stack_21)
DEFLABEL (hardware_trap_frame_print_stack_16)
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
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_26;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_26;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_25)
  (Wrd24.Obj) = (current_block [OBJECT_95_3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_24;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd26.Obj) = (MAKE_OBJECT (26, (Wrd30.uLng)));

DEFLABEL (label_23)
  (Rsp [2]) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_10]));

DEFLABEL (label_24)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_4]), 1);

DEFLABEL (label_19)
  (Wrd26.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_95_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_2]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_95_7);
  (Rsp [0]) = Rvl;
  if (Rvl == (current_block [OBJECT_95_5]))
    goto label_27;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_95_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_95_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_95_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_18]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_95_17);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_20]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_21]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_95_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_12]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_95_19);
  (Wrd5.Obj) = (current_block [OBJECT_95_8]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_15]));

DEFLABEL (label_27)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_12]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_95_11);
  (Wrd5.Obj) = (current_block [OBJECT_95_7]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_15]));

DEFLABEL (lambda_22)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_95_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_95_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_95_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_95_23);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_24]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_96_4 3
#define LABEL_96_5 5
#define LABEL_96_6 7
#define LABEL_96_9 9
#define ENVIRONMENT_LABEL_96_3 20
#define DEBUGGING_LABEL_96_2 19
#define OBJECT_96_1 18
#define OBJECT_96_0 17
#define EXECUTE_CACHE_96_10 11
#define EXECUTE_CACHE_96_8 13
#define EXECUTE_CACHE_96_7 15
#define FREE_REFERENCES_LABEL_96_0 10
#define NUMBER_OF_LINKER_SECTIONS_96_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_96 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_96_4);
      goto write_hex_3;

    case 1:
      current_block = (Rpc - LABEL_96_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_96_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_96_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_hex_7)
DEFLABEL (write_hex_3)
  INTERRUPT_CHECK (26, LABEL_96_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_10;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd8.Lng) < 16L))
    goto label_9;

DEFLABEL (label_8)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_8]));

DEFLABEL (label_9)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_96_1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_96_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_96_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_96_9);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_7]));

DEFLABEL (label_10)
  (Wrd16.Obj) = (current_block [OBJECT_96_0]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_8;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_97_4 3
#define LABEL_97_5 5
#define LABEL_97_7 7
#define LABEL_97_9 9
#define LABEL_97_10 11
#define LABEL_97_12 13
#define LABEL_97_16 15
#define LABEL_97_15 17
#define LABEL_97_14 19
#define LABEL_97_13 21
#define LABEL_97_18 23
#define LABEL_97_19 25
#define LABEL_97_20 27
#define LABEL_97_21 29
#define LABEL_97_22 31
#define LABEL_97_23 33
#define LABEL_97_24 35
#define LABEL_97_26 37
#define LABEL_97_25 39
#define LABEL_97_28 41
#define LABEL_97_27 43
#define LABEL_97_29 45
#define LABEL_97_33 47
#define LABEL_97_35 49
#define LABEL_97_37 51
#define LABEL_97_34 53
#define LABEL_97_40 55
#define LABEL_97_38 57
#define LABEL_97_41 59
#define LABEL_97_36 61
#define LABEL_97_39 63
#define LABEL_97_42 65
#define LABEL_97_43 67
#define LABEL_97_45 69
#define LABEL_97_46 71
#define LABEL_97_47 73
#define ENVIRONMENT_LABEL_97_3 121
#define DEBUGGING_LABEL_97_2 120
#define OBJECT_97_28 119
#define OBJECT_97_27 118
#define OBJECT_97_26 117
#define OBJECT_97_25 116
#define OBJECT_97_24 115
#define OBJECT_97_23 114
#define OBJECT_97_22 113
#define OBJECT_97_21 112
#define OBJECT_97_20 111
#define OBJECT_97_19 110
#define OBJECT_97_18 109
#define OBJECT_97_17 108
#define OBJECT_97_16 107
#define OBJECT_97_15 106
#define OBJECT_97_14 105
#define OBJECT_97_13 104
#define OBJECT_97_12 103
#define OBJECT_97_11 102
#define OBJECT_97_10 101
#define OBJECT_97_9 100
#define OBJECT_97_8 99
#define OBJECT_97_7 98
#define OBJECT_97_6 97
#define OBJECT_97_5 96
#define OBJECT_97_4 95
#define OBJECT_97_3 94
#define OBJECT_97_2 93
#define OBJECT_97_1 92
#define OBJECT_97_0 91
#define EXECUTE_CACHE_97_44 75
#define EXECUTE_CACHE_97_32 77
#define EXECUTE_CACHE_97_31 79
#define EXECUTE_CACHE_97_30 81
#define EXECUTE_CACHE_97_17 83
#define EXECUTE_CACHE_97_11 85
#define EXECUTE_CACHE_97_8 87
#define EXECUTE_CACHE_97_6 89
#define FREE_REFERENCES_LABEL_97_0 74
#define NUMBER_OF_LINKER_SECTIONS_97_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conpar_so_code_97 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_97_4);
      goto hardware_trap_frame_describe_50;

    case 1:
      current_block = (Rpc - LABEL_97_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_97_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_97_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_97_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_97_12);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_97_16);
      goto continuation_22;

    case 7:
      current_block = (Rpc - LABEL_97_15);
      goto continuation_28;

    case 8:
      current_block = (Rpc - LABEL_97_14);
      goto continuation_34;

    case 9:
      current_block = (Rpc - LABEL_97_13);
      goto continuation_46;

    case 10:
      current_block = (Rpc - LABEL_97_18);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_97_19);
      goto continuation_23;

    case 12:
      current_block = (Rpc - LABEL_97_20);
      goto continuation_29;

    case 13:
      current_block = (Rpc - LABEL_97_21);
      goto continuation_36;

    case 14:
      current_block = (Rpc - LABEL_97_22);
      goto continuation_35;

    case 15:
      current_block = (Rpc - LABEL_97_23);
      goto continuation_47;

    case 16:
      current_block = (Rpc - LABEL_97_24);
      goto continuation_6;

    case 17:
      current_block = (Rpc - LABEL_97_26);
      goto continuation_25;

    case 18:
      current_block = (Rpc - LABEL_97_25);
      goto continuation_24;

    case 19:
      current_block = (Rpc - LABEL_97_28);
      goto continuation_31;

    case 20:
      current_block = (Rpc - LABEL_97_27);
      goto continuation_30;

    case 21:
      current_block = (Rpc - LABEL_97_29);
      goto continuation_37;

    case 22:
      current_block = (Rpc - LABEL_97_33);
      goto continuation_7;

    case 23:
      current_block = (Rpc - LABEL_97_35);
      goto label_53;

    case 24:
      current_block = (Rpc - LABEL_97_37);
      goto label_52;

    case 25:
      current_block = (Rpc - LABEL_97_34);
      goto continuation_38;

    case 26:
      current_block = (Rpc - LABEL_97_40);
      goto continuation_12;

    case 27:
      current_block = (Rpc - LABEL_97_38);
      goto continuation_10;

    case 28:
      current_block = (Rpc - LABEL_97_41);
      goto label_54;

    case 29:
      current_block = (Rpc - LABEL_97_36);
      goto continuation_13;

    case 30:
      current_block = (Rpc - LABEL_97_39);
      goto continuation_39;

    case 31:
      current_block = (Rpc - LABEL_97_42);
      goto continuation_40;

    case 32:
      current_block = (Rpc - LABEL_97_43);
      goto continuation_44;

    case 33:
      current_block = (Rpc - LABEL_97_45);
      goto lambda_43;

    case 34:
      current_block = (Rpc - LABEL_97_46);
      goto continuation_41;

    case 35:
      current_block = (Rpc - LABEL_97_47);
      goto continuation_42;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hardware_trap_frame_describe_56)
DEFLABEL (hardware_trap_frame_describe_50)
  INTERRUPT_CHECK (26, LABEL_97_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_97_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_97_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_97_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_97_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_97_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_97_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_64;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_12]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_97_4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_97_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_97_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_97_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_97_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_97_23]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_97_33);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_60;

DEFLABEL (label_59)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_38]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_97_26]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_58)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_11]));

DEFLABEL (label_60)
  if (! ((Wrd6.uLng) == 1))
    goto label_63;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  if ((Wrd13.Obj) == ((SCHEME_OBJECT) 0))
    goto label_59;

DEFLABEL (label_62)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_36]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_61;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  goto label_58;

DEFLABEL (label_61)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_37]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_97_25]), 1);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (label_63)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_35]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_97_25]), 1);

DEFLABEL (label_53)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  goto label_62;

DEFLABEL (label_64)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_97_3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_97_10);
  (Wrd5.Obj) = (Rsp [3]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_65;
  Rvl = (current_block [OBJECT_97_5]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_65)
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == (current_block [OBJECT_97_6]))
    goto label_73;
  if (! ((Wrd7.Obj) == (current_block [OBJECT_97_8])))
    goto label_66;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_13]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_97_9]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_11]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_97_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_97_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_8]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_97_23);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_32]));

DEFLABEL (label_66)
  if (! ((Wrd7.Obj) == (current_block [OBJECT_97_2])))
    goto label_67;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_14]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_97_10]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_11]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_97_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_97_18]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_8]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_97_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_31]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_97_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_30]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_97_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_97_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_11]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_97_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_97_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_8]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_97_39);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_42]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_32]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_97_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_44]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_97_43);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_45]))));
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_67)
  if ((Wrd7.Obj) == (current_block [OBJECT_97_4]))
    goto label_71;
  if ((Wrd7.Obj) == (current_block [OBJECT_97_12]))
    goto label_70;
  if ((Wrd7.Obj) == (current_block [OBJECT_97_1]))
    goto label_68;
  (Wrd19.Obj) = (current_block [OBJECT_97_14]);
  (Rsp [2]) = (Wrd19.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_17]));

DEFLABEL (label_68)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_16]))));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_69)
  (Wrd30.Obj) = (current_block [OBJECT_97_13]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_8]));

DEFLABEL (label_70)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_15]))));
  (* (--Rsp)) = (Wrd29.Obj);
  goto label_69;

DEFLABEL (label_71)
  (Wrd32.Obj) = (current_block [OBJECT_97_11]);
  (Rsp [3]) = (Wrd32.Obj);

DEFLABEL (label_72)
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_11]));

DEFLABEL (label_73)
  (Wrd42.Obj) = (current_block [OBJECT_97_7]);
  (Rsp [3]) = (Wrd42.Obj);
  goto label_72;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_97_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_40]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 1)
    goto label_75;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_74)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_31]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_97_36);
  (Wrd5.Obj) = (current_block [OBJECT_97_28]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_11]));

DEFLABEL (label_75)
  if (! ((Wrd12.uLng) == 1))
    goto label_77;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [0]);

DEFLABEL (label_76)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd16.Obj);
  goto label_74;

DEFLABEL (label_77)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_41]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_97_27]), 1);

DEFLABEL (label_54)
  (Wrd16.Obj) = Rvl;
  goto label_76;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_97_16);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_97_16]), 1);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_97_19);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_78;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_26]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_97_20]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_11]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_97_26);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_11]));

DEFLABEL (label_78)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_25]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_97_19]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_11]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_97_25);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_31]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_97_15);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_20]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_97_17]), 1);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_97_20);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_79;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_28]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_97_22]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_11]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_97_28);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_11]));

DEFLABEL (label_79)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_27]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_97_21]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_11]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_97_27);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_31]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_97_40);
  (* (--Rsp)) = Rvl;
  goto label_74;

DEFLABEL (lambda_57)
DEFLABEL (lambda_43)
  INTERRUPT_CHECK (26, LABEL_97_45);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_80;
  Rvl = (current_block [OBJECT_97_5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_46]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_97_23]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_11]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_97_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_11]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_97_47);
  (Wrd5.Obj) = (current_block [OBJECT_97_28]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_11]));

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
#define LABEL_32 41
#define LABEL_28 43
#define TAG_29 20
#define LABEL_30 45
#define LABEL_31 47
#define LABEL_33 49
#define LABEL_34 51
#define LABEL_38 53
#define LABEL_35 55
#define LABEL_36 57
#define LABEL_37 59
#define LABEL_39 61
#define LABEL_44 63
#define LABEL_40 65
#define TAG_41 31
#define LABEL_46 67
#define LABEL_42 69
#define LABEL_43 71
#define LABEL_45 73
#define LABEL_47 75
#define LABEL_48 77
#define LABEL_49 79
#define ENVIRONMENT_LABEL_3 130
#define DEBUGGING_LABEL_2 129
#define PURIFICATION_ROOT 128
#define OBJECT_34 127
#define OBJECT_33 126
#define OBJECT_32 125
#define OBJECT_31 124
#define OBJECT_30 123
#define OBJECT_29 122
#define OBJECT_28 121
#define OBJECT_27 120
#define OBJECT_26 119
#define OBJECT_25 118
#define OBJECT_24 117
#define OBJECT_23 116
#define OBJECT_22 115
#define OBJECT_21 114
#define OBJECT_20 113
#define OBJECT_19 112
#define OBJECT_18 111
#define OBJECT_17 110
#define OBJECT_16 109
#define OBJECT_15 108
#define OBJECT_14 107
#define OBJECT_13 106
#define OBJECT_12 105
#define OBJECT_11 104
#define OBJECT_10 103
#define OBJECT_9 102
#define OBJECT_8 101
#define OBJECT_7 100
#define OBJECT_6 99
#define OBJECT_5 98
#define OBJECT_4 97
#define OBJECT_3 96
#define OBJECT_2 95
#define OBJECT_1 94
#define OBJECT_0 93
#define FREE_REFERENCE_2 81
#define FREE_REFERENCE_1 82
#define FREE_REFERENCE_0 83
#define GLOBAL_EXECUTE_CACHE_20 85
#define GLOBAL_EXECUTE_CACHE_12 87
#define GLOBAL_EXECUTE_CACHE_10 89
#define GLOBAL_EXECUTE_CACHE_6 91
#define FREE_REFERENCES_LABEL_0 80
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
conpar_so_d22a03e328eb6bc4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd21;
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
      goto label_66;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_12;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_19;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_14;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto continuation_20;

    case 6:
      current_block = (Rpc - LABEL_17);
      goto label_67;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto make_stack_frame_75;

    case 8:
      current_block = (Rpc - LABEL_19);
      goto label_68;

    case 9:
      current_block = (Rpc - LABEL_15);
      goto continuation_22;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto continuation_21;

    case 11:
      current_block = (Rpc - LABEL_18);
      goto continuation_16;

    case 12:
      current_block = (Rpc - LABEL_21);
      goto continuation_23;

    case 13:
      current_block = (Rpc - LABEL_22);
      goto continuation_37;

    case 14:
      current_block = (Rpc - LABEL_26);
      goto label_69;

    case 15:
      current_block = (Rpc - LABEL_23);
      goto continuation_35;

    case 16:
      current_block = (Rpc - LABEL_24);
      goto continuation_42;

    case 17:
      current_block = (Rpc - LABEL_25);
      goto continuation_38;

    case 18:
      current_block = (Rpc - LABEL_27);
      goto continuation_43;

    case 19:
      current_block = (Rpc - LABEL_32);
      goto label_70;

    case 20:
      current_block = (Rpc - LABEL_28);
      goto make_parser_state_76;

    case 21:
      current_block = (Rpc - LABEL_30);
      goto continuation_45;

    case 22:
      current_block = (Rpc - LABEL_31);
      goto continuation_44;

    case 23:
      current_block = (Rpc - LABEL_33);
      goto continuation_46;

    case 24:
      current_block = (Rpc - LABEL_34);
      goto continuation_54;

    case 25:
      current_block = (Rpc - LABEL_38);
      goto label_71;

    case 26:
      current_block = (Rpc - LABEL_35);
      goto continuation_53;

    case 27:
      current_block = (Rpc - LABEL_36);
      goto continuation_60;

    case 28:
      current_block = (Rpc - LABEL_37);
      goto continuation_55;

    case 29:
      current_block = (Rpc - LABEL_39);
      goto continuation_61;

    case 30:
      current_block = (Rpc - LABEL_44);
      goto label_72;

    case 31:
      current_block = (Rpc - LABEL_40);
      goto make_stack_frame_type_77;

    case 32:
      current_block = (Rpc - LABEL_46);
      goto label_73;

    case 33:
      current_block = (Rpc - LABEL_42);
      goto continuation_63;

    case 34:
      current_block = (Rpc - LABEL_43);
      goto continuation_62;

    case 35:
      current_block = (Rpc - LABEL_45);
      goto continuation_57;

    case 36:
      current_block = (Rpc - LABEL_47);
      goto label_79;

    case 37:
      current_block = (Rpc - LABEL_48);
      goto label_80;

    case 38:
      current_block = (Rpc - LABEL_49);
      goto expression_65;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_65)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_48])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_80)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_79)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	2,
	1,
	1,
	1,
	1,
	2,
	1,
	1,
	2,
	3,
	2,
	1,
	2,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
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
	2,
	2,
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
	2,
	1,
	1,
	1,
	2,
	2,
	1,
	2,
	1,
	2,
	2,
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
	3,
	2,
	1,
	2,
	1,
	1,
	1,
	1,
	0,
	1,
	1,
	1,
	2,
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
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 97)
      goto label_78;
    blocks = (current_block [OBJECT_34]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_47])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_78)
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
  (Wrd59.pObj) = (& (Rhp [-2]));
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd59.pObj)));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd62.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd63.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd63.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

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
    goto label_92;
  Wrd11 = Wrd15;

DEFLABEL (label_91)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0xc0c, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_90;
  Wrd11 = Wrd15;

DEFLABEL (label_89)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_23)
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
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd53.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd8.Obj) = (current_block [OBJECT_15]);
  (Wrd9.Obj) = (current_block [OBJECT_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd16.Obj) = (MAKE_OBJECT (0, 2));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd12.pObj) = (& (Rhp [-3]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_88;
  Wrd11 = Wrd15;

DEFLABEL (label_87)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_25);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0xb0b, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_86;
  Wrd11 = Wrd15;

DEFLABEL (label_85)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_31);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd15.Obj) = (current_block [OBJECT_23]);
  (Wrd16.Obj) = (current_block [OBJECT_1]);
  (* (Rhp++)) = (Wrd15.Obj);
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
  (Wrd37.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_35);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_84;
  Wrd11 = Wrd15;

DEFLABEL (label_83)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_37);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_82;
  Wrd11 = Wrd15;

DEFLABEL (label_81)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_43);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd5.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_32]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (label_82)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44])), (Wrd12.pObj));

DEFLABEL (label_72)
  (Wrd11.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38])), (Wrd12.pObj));

DEFLABEL (label_71)
  (Wrd11.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32])), (Wrd12.pObj));

DEFLABEL (label_70)
  (Wrd11.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26])), (Wrd12.pObj));

DEFLABEL (label_69)
  (Wrd11.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd12.pObj));

DEFLABEL (label_67)
  (Wrd11.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd12.pObj));

DEFLABEL (label_66)
  (Wrd11.Obj) = Rvl;
  goto label_91;

DEFLABEL (make_stack_frame_75)
  CLOSURE_HEADER (LABEL_13);

DEFLABEL (make_stack_frame_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_94;
  Wrd9 = Wrd13;

DEFLABEL (label_93)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_20]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd21.Obj) = (MAKE_OBJECT (0, 13));
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (Wrd12.Obj) = (Rsp [8]);
  (Wrd13.Obj) = (Rsp [9]);
  (Wrd14.Obj) = (Rsp [10]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd10.Obj) = (Rsp [11]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-14]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd8.pObj)));
  Rsp = (& (Rsp [12]));
  goto pop_return;

DEFLABEL (label_94)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd10.pObj));

DEFLABEL (label_68)
  (Wrd9.Obj) = Rvl;
  goto label_93;

DEFLABEL (make_parser_state_76)
  CLOSURE_HEADER (LABEL_28);

DEFLABEL (make_parser_state_40)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd19.Obj) = (MAKE_OBJECT (0, 11));
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.Obj) = (Rsp [5]);
  (Wrd16.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (Wrd10.Obj) = (Rsp [8]);
  (Wrd11.Obj) = (Rsp [9]);
  (Wrd12.Obj) = (Rsp [10]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd7.pObj) = (& (Rhp [-12]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [11]));
  goto pop_return;

DEFLABEL (make_stack_frame_type_77)
  CLOSURE_HEADER (LABEL_40);

DEFLABEL (make_stack_frame_type_58)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_96;
  Wrd9 = Wrd13;

DEFLABEL (label_95)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_20]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_45);
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
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-8]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd8.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_96)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46])), (Wrd10.pObj));

DEFLABEL (label_73)
  (Wrd9.Obj) = Rvl;
  goto label_95;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_conpar_so_d22a03e328eb6bc4 [97] =
  {
    { "conpar_so_code_1", 1, conpar_so_code_1 },
    { "conpar_so_code_2", 1, conpar_so_code_2 },
    { "conpar_so_code_3", 1, conpar_so_code_3 },
    { "conpar_so_code_4", 1, conpar_so_code_4 },
    { "conpar_so_code_5", 1, conpar_so_code_5 },
    { "conpar_so_code_6", 1, conpar_so_code_6 },
    { "conpar_so_code_7", 1, conpar_so_code_7 },
    { "conpar_so_code_8", 1, conpar_so_code_8 },
    { "conpar_so_code_9", 1, conpar_so_code_9 },
    { "conpar_so_code_10", 1, conpar_so_code_10 },
    { "conpar_so_code_11", 1, conpar_so_code_11 },
    { "conpar_so_code_12", 1, conpar_so_code_12 },
    { "conpar_so_code_13", 1, conpar_so_code_13 },
    { "conpar_so_code_14", 1, conpar_so_code_14 },
    { "conpar_so_code_15", 4, conpar_so_code_15 },
    { "conpar_so_code_16", 3, conpar_so_code_16 },
    { "conpar_so_code_17", 5, conpar_so_code_17 },
    { "conpar_so_code_18", 2, conpar_so_code_18 },
    { "conpar_so_code_19", 3, conpar_so_code_19 },
    { "conpar_so_code_20", 2, conpar_so_code_20 },
    { "conpar_so_code_21", 4, conpar_so_code_21 },
    { "conpar_so_code_22", 1, conpar_so_code_22 },
    { "conpar_so_code_23", 3, conpar_so_code_23 },
    { "conpar_so_code_24", 2, conpar_so_code_24 },
    { "conpar_so_code_25", 5, conpar_so_code_25 },
    { "conpar_so_code_26", 8, conpar_so_code_26 },
    { "conpar_so_code_27", 11, conpar_so_code_27 },
    { "conpar_so_code_28", 8, conpar_so_code_28 },
    { "conpar_so_code_29", 1, conpar_so_code_29 },
    { "conpar_so_code_30", 1, conpar_so_code_30 },
    { "conpar_so_code_31", 1, conpar_so_code_31 },
    { "conpar_so_code_32", 1, conpar_so_code_32 },
    { "conpar_so_code_33", 1, conpar_so_code_33 },
    { "conpar_so_code_34", 1, conpar_so_code_34 },
    { "conpar_so_code_35", 1, conpar_so_code_35 },
    { "conpar_so_code_36", 1, conpar_so_code_36 },
    { "conpar_so_code_37", 1, conpar_so_code_37 },
    { "conpar_so_code_38", 1, conpar_so_code_38 },
    { "conpar_so_code_39", 4, conpar_so_code_39 },
    { "conpar_so_code_40", 4, conpar_so_code_40 },
    { "conpar_so_code_41", 14, conpar_so_code_41 },
    { "conpar_so_code_42", 22, conpar_so_code_42 },
    { "conpar_so_code_43", 10, conpar_so_code_43 },
    { "conpar_so_code_44", 19, conpar_so_code_44 },
    { "conpar_so_code_45", 4, conpar_so_code_45 },
    { "conpar_so_code_46", 6, conpar_so_code_46 },
    { "conpar_so_code_47", 5, conpar_so_code_47 },
    { "conpar_so_code_48", 12, conpar_so_code_48 },
    { "conpar_so_code_49", 13, conpar_so_code_49 },
    { "conpar_so_code_50", 5, conpar_so_code_50 },
    { "conpar_so_code_51", 27, conpar_so_code_51 },
    { "conpar_so_code_52", 24, conpar_so_code_52 },
    { "conpar_so_code_53", 9, conpar_so_code_53 },
    { "conpar_so_code_54", 7, conpar_so_code_54 },
    { "conpar_so_code_55", 5, conpar_so_code_55 },
    { "conpar_so_code_56", 5, conpar_so_code_56 },
    { "conpar_so_code_57", 3, conpar_so_code_57 },
    { "conpar_so_code_58", 3, conpar_so_code_58 },
    { "conpar_so_code_59", 4, conpar_so_code_59 },
    { "conpar_so_code_60", 3, conpar_so_code_60 },
    { "conpar_so_code_61", 3, conpar_so_code_61 },
    { "conpar_so_code_62", 16, conpar_so_code_62 },
    { "conpar_so_code_63", 25, conpar_so_code_63 },
    { "conpar_so_code_64", 2, conpar_so_code_64 },
    { "conpar_so_code_65", 4, conpar_so_code_65 },
    { "conpar_so_code_66", 10, conpar_so_code_66 },
    { "conpar_so_code_67", 3, conpar_so_code_67 },
    { "conpar_so_code_68", 6, conpar_so_code_68 },
    { "conpar_so_code_69", 3, conpar_so_code_69 },
    { "conpar_so_code_70", 15, conpar_so_code_70 },
    { "conpar_so_code_71", 7, conpar_so_code_71 },
    { "conpar_so_code_72", 12, conpar_so_code_72 },
    { "conpar_so_code_73", 5, conpar_so_code_73 },
    { "conpar_so_code_74", 1, conpar_so_code_74 },
    { "conpar_so_code_75", 1, conpar_so_code_75 },
    { "conpar_so_code_76", 1, conpar_so_code_76 },
    { "conpar_so_code_77", 1, conpar_so_code_77 },
    { "conpar_so_code_78", 1, conpar_so_code_78 },
    { "conpar_so_code_79", 1, conpar_so_code_79 },
    { "conpar_so_code_80", 1, conpar_so_code_80 },
    { "conpar_so_code_81", 4, conpar_so_code_81 },
    { "conpar_so_code_82", 5, conpar_so_code_82 },
    { "conpar_so_code_83", 2, conpar_so_code_83 },
    { "conpar_so_code_84", 15, conpar_so_code_84 },
    { "conpar_so_code_85", 36, conpar_so_code_85 },
    { "conpar_so_code_86", 61, conpar_so_code_86 },
    { "conpar_so_code_87", 17, conpar_so_code_87 },
    { "conpar_so_code_88", 7, conpar_so_code_88 },
    { "conpar_so_code_89", 4, conpar_so_code_89 },
    { "conpar_so_code_90", 2, conpar_so_code_90 },
    { "conpar_so_code_91", 1, conpar_so_code_91 },
    { "conpar_so_code_92", 3, conpar_so_code_92 },
    { "conpar_so_code_93", 13, conpar_so_code_93 },
    { "conpar_so_code_94", 13, conpar_so_code_94 },
    { "conpar_so_code_95", 14, conpar_so_code_95 },
    { "conpar_so_code_96", 4, conpar_so_code_96 },
    { "conpar_so_code_97", 36, conpar_so_code_97 }
  };

int
decl_conpar_so_d22a03e328eb6bc4 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_conpar_so_d22a03e328eb6bc4);
  return (0);
}

DECLARE_COMPILED_CODE ("conpar.so", 39, decl_conpar_so_d22a03e328eb6bc4, conpar_so_d22a03e328eb6bc4)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_conpar_so_data_d22a03e328eb6bc4 [16034] =
  "\x94\x02\xab\x01\xeb\x1c\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d"
  "\xb9\x23\x22\x29\x21\x9f\x2b\xba\x1d\xb0\x82\x88\xc2\xbb\x81\x22"
  "\x29\x21\x9e\x2b\xbc\x1d\xb0\x83\x88\xb3\x82\x22\x29\x21\x9e\x2b"
  "\xbd\x1d\xb0\x84\x88\xb3\x83\x22\x29\x21\x9e\x2b\xbe\x1d\xb0\x85"
  "\x88\xb3\x84\x22\x29\x21\x9e\x2b\xbf\x1d\xb0\x86\x88\xb3\x85\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x86\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\xb3\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\xb3\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x02\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x02\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\xb3\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\xb3\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x1d"
  "\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\xb3\x80\xc1\x1c"
  "\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x08\xb3\x86\x0d\x1c\x24\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb3\x02\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xc1\x1c\xb3\x82\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xc2\x1c\x1b\xb3\x82\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x28\x1b\x23\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x28\x1b\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x80\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\x82\xb3\x81\x0d\x1c\x24\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x82\xb3\x02\x28\x0d\x1c\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x80\xb3\x81\x0d\x1c\x0d\x1c\x24\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x06\x80\xb3\x81\x1b"
  "\x25\x1b\x0d\x1c\x24\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb3\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x82"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x83\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\xb3\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\xb3\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x86"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x02\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\xb3\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\xb3\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x02"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x07\xb3\x80\x1b\x0e\x1c"
  "\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x0d"
  "\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x85\x84\x02\x82\x81\x02\x02\xb3\x02\x0d\x1c\x24\x28\x1b"
  "\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x02\x81\x82"
  "\x83\x84\x80\x85\x86\xb3\x02\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x81\x82\x02\x02\x02\x83\x84\x85"
  "\xb3\x86\x1b\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x06\xb3\x83\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x06\x07\xb3\x02\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x06\x07\xb3\x02\x1b\x24\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x82\x1b\x81\x84\x85\x86\x02\x02\x02\xb3\x02"
  "\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x81\x82\x1b\x83\x02\x02\x02\xb3\x02\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x02\x86\x85\x84\x83\xb3\x82"
  "\x80\x1b\x81\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x02\x81\x02\x02\x02\x84\x85\x86\x82\xb3\x83\x1b\x1b\x0d\x1c"
  "\x24\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x83\x81\x1b"
  "\x82\x0d\x1c\x0d\x0d\x0d\x24\x28\x0d\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x84\x85\x86\x02\x02\x02\xb3\x02\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x82\xb3\x81"
  "\x1b\x0d\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\xb3\x81\x1b\x24"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x83\x82\xb3\x81\x1b\x24\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb3\x81\x1b\x24"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb3"
  "\x81\x1b\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x24\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x83\x28"
  "\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xc3\x1c\x02\x02\x80\x85\x0d\x86\xb3\x02\x1b\x1b\x24"
  "\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x1b\x1b\x81\x82\x02\x02\xb3\x02"
  "\x80\x1b\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x82\x83\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x83\xc1\xc2\x02\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x0c\x02\x02\x86\x85\x84\x83\x82\x80\x81"
  "\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28"
  "\x0d\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb3\x84\x07\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x80\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\xb1\x23\x22\x29\x21"
  "\x9f\x2b\xb9\x1d\xb0\x02\x88\xb3\x81\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\xb3\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3"
  "\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x84\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x85\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\xb3\x86\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\xb3\x80\x1b\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b\x1b\x0d\x1c\x24\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x0c\x1b\x1b\x1b\x1b\x0d\x1c\x24\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28\x0d"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x06\x82\xc2\x81\x07\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x1b\x1b\x0d\x1c\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x0d\x1c\x1b\x25\x0d\x1c\x0d\x1c\x1b\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x24\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x0d\x0d\x0d\x0d\x85\x1b\x0d\x0d\x0d\x02\x0d\x0d\x0d\x1b\x0d"
  "\x80\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x07\x0d\x0d\x1b\x83\x0d\x0d\x0d"
  "\x84\xc3\x0d\x0d\x0d\x1b\x0d\x82\x1d\x1b\x0d\x1c\x0d\x1c\x1b\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x24\x28\x0d\x28\x0d\x28\x1b"
  "\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\xc1\x0c\x80\x82\x83\x84\x85"
  "\x08\x8c\x86\x81\x02\x85\x84\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x07\xb3\x81\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06"
  "\x1d\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1"
  "\x1c\x83\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x81\x0c\x80\x0c\x82\x1d\x02"
  "\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x02\x0c\xc1\x0c\xc3\xc1\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x0c\x0c\x0c\x08\x1b\x02\xb3\x82\x0d\x1c\x28"
  "\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x0d\xbb\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x02\x28\x1b\x28\xb3\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\xc1\x0c\x1b"
  "\x0c\x0c\x0c\x0c\x0c\x0c\x02\xc1\xc1\x0c\x0c\x86\x84\x0c\x0c\x0c"
  "\x81\x0c\x80\x1d\x83\x0c\x82\x85\x0d\x1c\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x0d\x1c\x28\xb3\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x02\x02\x86\x85\x84\x83\x82\x81\x02\x1b\x2a\x1e"
  "\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x17\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x0d\x1b\x1b\x1b\x0d\x17\x86\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x9d\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9d\x0d\x1c\x0c\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x1c\x08\x8d\xb1\x2a\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1e\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x02\x86\x85\x84\x83"
  "\x82\x81\x80\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0d\x1c\x1b\x99\x1b"
  "\x0c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x0d\x0d"
  "\x0d\x1c\x08\x14\x1b\x0d\x1b\x1b\x0d\x1b\x0d\x0d\x0d\x1b\x0d\x1b"
  "\x1b\x1b\x0d\x1b\x17\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x17\x02\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb6\x2a\xb5\x2a\xb4\x2a\x17\xc3\x0d"
  "\x1c\x0c\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x0d\x1b\x08\x14"
  "\x08\xb2\x2a\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x1b\x1b\x24"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66"
  "\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72"
  "\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x63\x6f\x6e\x70"
  "\x61\x72\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63"
  "\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x02\x0e\x6d\x61"
  "\x6b\x65\x2d\x31\x64\x2d\x74\x61\x62\x6c\x65\x02\x28\x04\x82\x02"
  "\x03\x02\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x29\x04"
  "\x83\x04\x03\x02\x2a\x04\x83\x04\x03\x02\x2b\x04\x83\x04\x03\x02"
  "\x2c\x04\x83\x04\x03\x02\x2d\x04\x83\x04\x03\x09\x02\x08\x2e\x04"
  "\x83\x04\x03\x0a\x02\x09\x08\x2f\x04\x83\x04\x03\x0b\x02\x0a\x09"
  "\x30\x04\x83\x04\x03\x0c\x02\x0b\x0a\x31\x04\x83\x04\x03\x0d\x02"
  "\x0c\x0b\x32\x04\x83\x04\x03\x0e\x02\x0d\x0c\x33\x04\x83\x04\x03"
  "\x0f\x02\x0e\x0d\x34\x04\x83\x04\x03\x10\x02\x0f\x0d\x25\x72\x65"
  "\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x11\x02\x0c\x35\x04\x84\x06"
  "\x03\x12\x02\x10\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65\x6e"
  "\x67\x74\x68\x13\x07\x2e\x74\x61\x67\x2e\x31\x14\x02\x39\x0a\x81"
  "\x85\x02\x38\x08\x81\x83\x02\x37\x06\x81\x83\x02\x36\x04\x83\x04"
  "\x09\x12\x15\x02\x11\x12\x75\x6e\x64\x65\x66\x69\x6e\x65\x64\x2d"
  "\x68\x69\x73\x74\x6f\x72\x79\x16\x02\x03\x13\x68\x69\x73\x74\x6f"
  "\x72\x79\x2d\x72\x65\x64\x75\x63\x74\x69\x6f\x6e\x73\x02\x3c\x08"
  "\x81\x83\x02\x3b\x06\x81\x83\x02\x3a\x04\x83\x04\x07\x12\x17\x02"
  "\x12\x11\x0c\x03\x0e\x70\x61\x72\x73\x65\x72\x2d\x73\x74\x61\x74"
  "\x65\x3f\x11\x03\x10\x70\x61\x72\x73\x65\x2d\x6f\x6e\x65\x2d\x66"
  "\x72\x61\x6d\x65\x18\x03\x41\x0c\x81\x85\x02\x40\x0a\x81\x85\x02"
  "\x3f\x08\x81\x85\x02\x3e\x06\x81\x83\x02\x3d\x04\x83\x04\x0b\x16"
  "\x19\x02\x13\x03\x1a\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f"
  "\x6e\x2d\x3e\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x1a\x03"
  "\x21\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x73\x6b\x69"
  "\x70\x2d\x6e\x6f\x6e\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d"
  "\x73\x1b\x03\x43\x06\x81\x83\x02\x42\x04\x83\x04\x05\x0d\x1c\x02"
  "\x14\x03\x18\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x73"
  "\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x3f\x1d\x03\x1b\x03\x11\x73"
  "\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x6e\x65\x78\x74\x1e"
  "\x04\x46\x08\x81\x83\x02\x45\x06\x81\x83\x02\x44\x04\x83\x04\x07"
  "\x11\x1f\x02\x15\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67"
  "\x74\x68\x20\x48\x06\x81\x83\x02\x47\x04\x83\x04\x05\x0b\x21\x02"
  "\x16\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x22\x20\x03\x1e"
  "\x04\x10\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x72\x65"
  "\x66\x23\x03\x4c\x0a\x81\x89\x02\x4b\x08\x81\x87\x02\x4a\x06\x81"
  "\x85\x02\x49\x04\x84\x06\x09\x15\x24\x02\x17\x04\x23\x02\x4d\x04"
  "\x83\x04\x03\x0a\x25\x02\x18\x04\x23\x03\x1c\x69\x6e\x74\x65\x72"
  "\x70\x72\x65\x74\x65\x72\x2d\x72\x65\x74\x75\x72\x6e\x2d\x61\x64"
  "\x64\x72\x65\x73\x73\x3f\x26\x03\x14\x72\x65\x74\x75\x72\x6e\x2d"
  "\x61\x64\x64\x72\x65\x73\x73\x2f\x63\x6f\x64\x65\x27\x04\x50\x08"
  "\x81\x83\x02\x4f\x06\x81\x83\x02\x4e\x04\x83\x04\x07\x12\x28\x02"
  "\x19\x04\x23\x03\x19\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x72\x65"
  "\x74\x75\x72\x6e\x2d\x61\x64\x64\x72\x65\x73\x73\x3f\x29\x03\x52"
  "\x06\x81\x83\x02\x51\x04\x83\x04\x05\x0e\x2a\x02\x1a\x18\x77\x69"
  "\x74\x68\x2d\x72\x65\x70\x6c\x2d\x65\x76\x61\x6c\x2d\x62\x6f\x75"
  "\x6e\x64\x61\x72\x79\x2b\x02\x03\x1a\x73\x74\x61\x63\x6b\x2d\x66"
  "\x72\x61\x6d\x65\x2f\x73\x74\x61\x63\x6b\x2d\x6d\x61\x72\x6b\x65"
  "\x72\x3f\x2c\x03\x18\x73\x74\x61\x63\x6b\x2d\x6d\x61\x72\x6b\x65"
  "\x72\x2d\x66\x72\x61\x6d\x65\x2f\x74\x79\x70\x65\x2d\x03\x57\x0c"
  "\x81\x85\x02\x56\x0a\x81\x83\x02\x55\x08\x81\x83\x02\x54\x06\x81"
  "\x83\x02\x53\x04\x83\x04\x0b\x19\x2e\x02\x1b\x20\x0a\x04\x15\x73"
  "\x74\x61\x63\x6b\x2d\x61\x64\x64\x72\x65\x73\x73\x2d\x3e\x69\x6e"
  "\x64\x65\x78\x2f\x03\x1e\x03\x5f\x12\x81\x85\x02\x5e\x10\x81\x87"
  "\x02\x5d\x0e\x81\x85\x02\x5c\x0c\x81\x85\x02\x5b\x0a\x81\x85\x02"
  "\x5a\x08\x81\x85\x02\x59\x06\x81\x87\x02\x58\x04\x84\x06\x11\x1d"
  "\x30\x02\x1c\x29\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2d"
  "\x74\x79\x70\x65\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x72\x65"
  "\x74\x75\x72\x6e\x2d\x61\x64\x64\x72\x65\x73\x73\x31\x1c\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x72\x65\x74\x75\x72"
  "\x6e\x2d\x61\x64\x64\x72\x65\x73\x73\x32\x03\x03\x1d\x03\x2c\x04"
  "\x23\x03\x1e\x03\x1b\x03\x1c\x73\x74\x61\x63\x6b\x2d\x66\x72\x61"
  "\x6d\x65\x2f\x6e\x65\x78\x74\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c"
  "\x65\x6d\x33\x07\x6a\x18\x81\x83\x02\x69\x16\x81\x83\x02\x68\x14"
  "\x81\x85\x02\x67\x12\x81\x83\x02\x66\x10\x81\x85\x02\x65\x0e\x81"
  "\x85\x02\x64\x0c\x81\x85\x02\x63\x0a\x81\x85\x02\x62\x08\x81\x87"
  "\x02\x61\x06\x81\x83\x02\x60\x04\x83\x04\x17\x2d\x34\x02\x1d\x02"
  "\x32\x02\x31\x1e\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e"
  "\x2f\x66\x69\x72\x73\x74\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65"
  "\x6d\x35\x03\x03\x1f\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x63"
  "\x75\x72\x72\x65\x6e\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74"
  "\x69\x6f\x6e\x04\x23\x03\x72\x12\x81\x83\x02\x71\x10\x83\x04\x70"
  "\x0e\x81\x81\x02\x6f\x0c\x81\x81\x02\x6e\x0a\x81\x85\x02\x6d\x08"
  "\x81\x83\x02\x6c\x06\x81\x83\x02\x6b\x04\x82\x02\x11\x23\x36\x02"
  "\x1e\x73\x04\x83\x04\x03\x37\x02\x1f\x74\x04\x83\x04\x03\x38\x02"
  "\x20\x75\x04\x83\x04\x03\x39\x02\x21\x76\x04\x83\x04\x03\x3a\x02"
  "\x22\x77\x04\x83\x04\x03\x3b\x02\x23\x78\x04\x83\x04\x03\x3c\x02"
  "\x24\x08\x79\x04\x83\x04\x03\x3d\x02\x25\x09\x7a\x04\x83\x04\x03"
  "\x3e\x02\x26\x0a\x7b\x04\x83\x04\x03\x3f\x02\x27\x0b\x7c\x04\x83"
  "\x04\x03\x40\x02\x28\x13\x07\x2e\x74\x61\x67\x2e\x32\x41\x02\x80"
  "\x01\x0a\x81\x85\x02\x7f\x08\x81\x83\x02\x7e\x06\x81\x83\x02\x7d"
  "\x04\x83\x04\x09\x12\x42\x02\x29\x03\x22\x63\x6f\x6e\x74\x69\x6e"
  "\x75\x61\x74\x69\x6f\x6e\x2f\x62\x6c\x6f\x63\x6b\x2d\x74\x68\x72"
  "\x65\x61\x64\x2d\x65\x76\x65\x6e\x74\x73\x3f\x03\x1b\x63\x6f\x6e"
  "\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x64\x79\x6e\x61\x6d\x69"
  "\x63\x2d\x73\x74\x61\x74\x65\x03\x1b\x63\x6f\x6e\x74\x69\x6e\x75"
  "\x61\x74\x69\x6f\x6e\x2f\x63\x6f\x6e\x74\x72\x6f\x6c\x2d\x70\x6f"
  "\x69\x6e\x74\x06\x14\x70\x61\x72\x73\x65\x2d\x63\x6f\x6e\x74\x72"
  "\x6f\x6c\x2d\x70\x6f\x69\x6e\x74\x43\x05\x84\x01\x0a\x81\x87\x02"
  "\x83\x01\x08\x81\x85\x02\x82\x01\x06\x81\x83\x02\x81\x01\x04\x83"
  "\x04\x09\x15\x44\x02\x2a\x25\x72\x65\x74\x75\x72\x6e\x2d\x61\x64"
  "\x64\x72\x65\x73\x73\x2f\x72\x65\x65\x6e\x74\x65\x72\x2d\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x45\x02\x03\x1d\x63"
  "\x6f\x6e\x74\x72\x6f\x6c\x2d\x70\x6f\x69\x6e\x74\x2f\x65\x6c\x65"
  "\x6d\x65\x6e\x74\x2d\x73\x74\x72\x65\x61\x6d\x03\x21\x63\x6f\x6e"
  "\x74\x72\x6f\x6c\x2d\x70\x6f\x69\x6e\x74\x2f\x6e\x65\x78\x74\x2d"
  "\x63\x6f\x6e\x74\x72\x6f\x6c\x2d\x70\x6f\x69\x6e\x74\x03\x18\x03"
  "\x19\x63\x6f\x6e\x74\x72\x6f\x6c\x2d\x70\x6f\x69\x6e\x74\x2f\x6e"
  "\x2d\x65\x6c\x65\x6d\x65\x6e\x74\x73\x03\x2d\x63\x6f\x6e\x74\x72"
  "\x6f\x6c\x2d\x70\x6f\x69\x6e\x74\x2f\x70\x72\x65\x76\x69\x6f\x75"
  "\x73\x2d\x68\x69\x73\x74\x6f\x72\x79\x2d\x63\x6f\x6e\x74\x72\x6f"
  "\x6c\x2d\x70\x6f\x69\x6e\x74\x03\x26\x63\x6f\x6e\x74\x72\x6f\x6c"
  "\x2d\x70\x6f\x69\x6e\x74\x2f\x70\x72\x65\x76\x69\x6f\x75\x73\x2d"
  "\x68\x69\x73\x74\x6f\x72\x79\x2d\x6f\x66\x66\x73\x65\x74\x03\x16"
  "\x63\x6f\x6e\x74\x72\x6f\x6c\x2d\x70\x6f\x69\x6e\x74\x2f\x68\x69"
  "\x73\x74\x6f\x72\x79\x03\x15\x68\x69\x73\x74\x6f\x72\x79\x2d\x73"
  "\x75\x70\x65\x72\x70\x72\x6f\x62\x6c\x65\x6d\x46\x03\x0b\x73\x74"
  "\x72\x65\x61\x6d\x2d\x63\x61\x72\x47\x03\x1d\x63\x6f\x6e\x74\x72"
  "\x6f\x6c\x2d\x70\x6f\x69\x6e\x74\x2f\x69\x6e\x74\x65\x72\x72\x75"
  "\x70\x74\x2d\x6d\x61\x73\x6b\x03\x0d\x73\x74\x72\x65\x61\x6d\x2d"
  "\x70\x61\x69\x72\x3f\x48\x03\x12\x68\x69\x73\x74\x6f\x72\x79\x2d"
  "\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x49\x0c\x12\x6d\x61\x6b\x65"
  "\x2d\x70\x61\x72\x73\x65\x72\x2d\x73\x74\x61\x74\x65\x4a\x0e\x92"
  "\x01\x1e\x81\x9b\x02\x91\x01\x1c\x81\x9d\x02\x90\x01\x1a\x81\x9b"
  "\x02\x8f\x01\x18\x81\x99\x02\x8e\x01\x16\x81\x83\x02\x8d\x01\x14"
  "\x81\x85\x02\x8c\x01\x12\x81\x83\x02\x8b\x01\x10\x81\x97\x02\x8a"
  "\x01\x0e\x81\x95\x02\x89\x01\x0c\x81\x91\x02\x88\x01\x0a\x81\x8f"
  "\x02\x87\x01\x08\x81\x8b\x02\x86\x01\x06\x81\x89\x02\x85\x01\x04"
  "\x86\x0a\x1d\x3d\x4b\x02\x2b\x0b\x09\x0a\x08\x1e\x72\x65\x74\x75"
  "\x72\x6e\x2d\x61\x64\x64\x72\x65\x73\x73\x2f\x6a\x6f\x69\x6e\x2d"
  "\x73\x74\x61\x63\x6b\x6c\x65\x74\x73\x4c\x02\x03\x48\x04\x07\x73"
  "\x74\x72\x65\x61\x6d\x4d\x06\x43\x03\x47\x03\x1b\x65\x78\x61\x63"
  "\x74\x2d\x6e\x6f\x6e\x6e\x65\x67\x61\x74\x69\x76\x65\x2d\x69\x6e"
  "\x74\x65\x67\x65\x72\x3f\x4e\x03\x21\x72\x65\x74\x75\x72\x6e\x2d"
  "\x61\x64\x64\x72\x65\x73\x73\x2d\x3e\x73\x74\x61\x63\x6b\x2d\x66"
  "\x72\x61\x6d\x65\x2d\x74\x79\x70\x65\x4f\x04\x0c\x73\x74\x72\x65"
  "\x61\x6d\x2d\x74\x61\x69\x6c\x50\x04\x0c\x73\x74\x72\x65\x61\x6d"
  "\x2d\x68\x65\x61\x64\x05\x18\x6d\x61\x6b\x65\x2d\x69\x6e\x74\x65"
  "\x72\x6d\x65\x64\x69\x61\x74\x65\x2d\x73\x74\x61\x74\x65\x51\x03"
  "\x0d\x6c\x69\x73\x74\x2d\x3e\x76\x65\x63\x74\x6f\x72\x0b\xa8\x01"
  "\x2e\x81\x8b\x02\xa7\x01\x2c\x81\x8b\x02\xa6\x01\x2a\x81\x89\x02"
  "\xa5\x01\x28\x81\x8b\x02\xa4\x01\x26\x81\x89\x02\xa3\x01\x24\x81"
  "\x87\x02\xa2\x01\x22\x81\x87\x02\xa1\x01\x20\x81\x83\x02\xa0\x01"
  "\x1e\x81\x87\x02\x9f\x01\x1c\x81\x89\x02\x9e\x01\x1a\x81\x85\x02"
  "\x9d\x01\x18\x81\x85\x02\x9c\x01\x16\x81\x85\x02\x9b\x01\x14\x81"
  "\x89\x02\x9a\x01\x12\x81\x89\x02\x99\x01\x10\x81\x85\x02\x98\x01"
  "\x0e\x81\x89\x02\x97\x01\x0c\x81\x85\x02\x96\x01\x0a\x81\x85\x02"
  "\x95\x01\x08\x81\x85\x02\x94\x01\x06\x81\x83\x02\x93\x01\x04\x83"
  "\x04\x2d\x50\x52\x02\x2c\x0b\x0a\x09\x0c\x4a\x02\xb2\x01\x16\x81"
  "\x97\x02\xb1\x01\x14\x81\x95\x02\xb0\x01\x12\x81\x93\x02\xaf\x01"
  "\x10\x81\x91\x02\xae\x01\x0e\x81\x8f\x02\xad\x01\x0c\x81\x8d\x02"
  "\xac\x01\x0a\x81\x8b\x02\xab\x01\x08\x81\x89\x02\xaa\x01\x06\x81"
  "\x87\x02\xa9\x01\x04\x85\x08\x15\x26\x53\x02\x2d\x20\x0b\x08\x0a"
  "\x09\x16\x02\x0c\x4a\x03\x46\x0d\x11\x6d\x61\x6b\x65\x2d\x73\x74"
  "\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x54\x04\xc5\x01\x28\x81\xa5"
  "\x02\xc4\x01\x26\x81\xa3\x02\xc3\x01\x24\x81\xa1\x02\xc2\x01\x22"
  "\x81\x9f\x02\xc1\x01\x20\x81\x99\x02\xc0\x01\x1e\x81\x97\x02\xbf"
  "\x01\x1c\x81\x95\x02\xbe\x01\x1a\x81\xa9\x02\xbd\x01\x18\x81\xa7"
  "\x02\xbc\x01\x16\x81\xa5\x02\xbb\x01\x14\x81\x9d\x02\xba\x01\x12"
  "\x81\x99\x02\xb9\x01\x10\x81\x93\x02\xb8\x01\x0e\x81\x91\x02\xb7"
  "\x01\x0c\x81\x8f\x02\xb6\x01\x0a\x81\x8d\x02\xb5\x01\x08\x81\x8b"
  "\x02\xb4\x01\x06\x87\x0c\xb3\x01\x04\x81\xa3\x02\x27\x3f\x55\x02"
  "\x2e\x07\x14\x70\x61\x72\x73\x65\x2f\x73\x74\x61\x6e\x64\x61\x72"
  "\x64\x2d\x6e\x65\x78\x74\x56\x02\xc9\x01\x0a\x81\x8d\x02\xc8\x01"
  "\x08\x81\x8d\x02\xc7\x01\x06\x85\x08\xc6\x01\x04\x81\x8b\x02\x09"
  "\x13\x57\x02\x2f\x08\x27\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d"
  "\x65\x2d\x74\x79\x70\x65\x2f\x72\x65\x74\x75\x72\x6e\x2d\x74\x6f"
  "\x2d\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x58\x02\x03\x48"
  "\x07\x56\x03\x47\x03\x4f\x05\xcf\x01\x0e\x81\x91\x02\xce\x01\x0c"
  "\x81\x8d\x02\xcd\x01\x0a\x81\x8d\x02\xcc\x01\x08\x81\x8f\x02\xcb"
  "\x01\x06\x81\x8b\x02\xca\x01\x04\x85\x08\x0d\x1f\x59\x02\x30\x08"
  "\x45\x02\x03\x48\x07\x56\x03\x47\x04\xd4\x01\x0c\x81\x89\x02\xd3"
  "\x01\x0a\x81\x8b\x02\xd2\x01\x08\x81\x89\x02\xd1\x01\x06\x81\x87"
  "\x02\xd0\x01\x04\x85\x08\x0b\x1b\x5a\x02\x31\x22\x08\x09\x0a\x0b"
  "\x0c\x4a\x05\x10\x70\x61\x72\x73\x65\x72\x2f\x73\x74\x61\x6e\x64"
  "\x61\x72\x64\x5b\x03\xe0\x01\x1a\x81\x87\x02\xdf\x01\x18\x81\x9b"
  "\x02\xde\x01\x16\x81\x99\x02\xdd\x01\x14\x81\x97\x02\xdc\x01\x12"
  "\x81\x95\x02\xdb\x01\x10\x81\x93\x02\xda\x01\x0e\x81\x91\x02\xd9"
  "\x01\x0c\x81\x8f\x02\xd8\x01\x0a\x81\x8d\x02\xd7\x01\x08\x81\x8b"
  "\x02\xd6\x01\x06\x81\x89\x02\xd5\x01\x04\x85\x08\x19\x2c\x5c\x02"
  "\x32\x22\x08\x09\x0a\x0b\x03\x49\x05\x5b\x0c\x4a\x04\xed\x01\x1c"
  "\x81\x9b\x02\xec\x01\x1a\x81\x99\x02\xeb\x01\x18\x81\x97\x02\xea"
  "\x01\x16\x81\x95\x02\xe9\x01\x14\x81\x87\x02\xe8\x01\x12\x81\x97"
  "\x02\xe7\x01\x10\x81\x93\x02\xe6\x01\x0e\x81\x91\x02\xe5\x01\x0c"
  "\x81\x8f\x02\xe4\x01\x0a\x81\x8d\x02\xe3\x01\x08\x81\x8b\x02\xe2"
  "\x01\x06\x81\x89\x02\xe1\x01\x04\x85\x08\x1b\x2e\x49\x02\x33\x25"
  "\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x73\x70\x65\x63\x69\x61\x6c\x20"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x64\x20\x66\x72\x61\x6d\x65\x20\x63"
  "\x6f\x64\x65\x3a\x08\x22\x08\x15\x70\x61\x72\x73\x65\x72\x2f\x25"
  "\x73\x74\x61\x63\x6b\x2d\x6d\x61\x72\x6b\x65\x72\x5d\x05\x14\x70"
  "\x61\x72\x73\x65\x72\x2f\x73\x74\x61\x63\x6b\x2d\x6d\x61\x72\x6b"
  "\x65\x72\x5e\x07\x56\x04\x06\x65\x72\x72\x6f\x72\x5f\x05\xf2\x01"
  "\x0c\x81\x8d\x02\xf1\x01\x0a\x81\x8b\x02\xf0\x01\x08\x81\x89\x02"
  "\xef\x01\x06\x81\x87\x02\xee\x01\x04\x85\x08\x0b\x22\x60\x02\x34"
  "\x0b\x08\x0a\x09\x20\x16\x2e\x73\x74\x61\x63\x6b\x2d\x66\x72\x61"
  "\x6d\x65\x2d\x74\x79\x70\x65\x2f\x69\x6e\x74\x65\x72\x72\x75\x70"
  "\x74\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x61\x03\x0c\x4a\x03\x46\x05\x5b\x04\x0c\x76\x65"
  "\x63\x74\x6f\x72\x2d\x68\x65\x61\x64\x04\x0c\x76\x65\x63\x74\x6f"
  "\x72\x2d\x74\x61\x69\x6c\x0d\x54\x07\x8d\x02\x38\x81\x99\x02\x8c"
  "\x02\x36\x81\x97\x02\x8b\x02\x34\x81\xa5\x02\x8a\x02\x32\x81\x95"
  "\x02\x89\x02\x30\x81\xa3\x02\x88\x02\x2e\x81\xa1\x02\x87\x02\x2c"
  "\x81\x9f\x02\x86\x02\x2a\x81\x9d\x02\x85\x02\x28\x81\x95\x02\x84"
  "\x02\x26\x81\x93\x02\x83\x02\x24\x81\xa9\x02\x82\x02\x22\x81\xa7"
  "\x02\x81\x02\x20\x81\xa5\x02\x80\x02\x1e\x81\x9d\x02\xff\x01\x1c"
  "\x81\x99\x02\xfe\x01\x1a\x81\x91\x02\xfd\x01\x18\x81\x8f\x02\xfc"
  "\x01\x16\x81\x8d\x02\xfb\x01\x14\x81\x8b\x02\xfa\x01\x12\x81\x89"
  "\x02\xf9\x01\x10\x81\x89\x02\xf8\x01\x0e\x81\x89\x02\xf7\x01\x0c"
  "\x81\x87\x02\xf6\x01\x0a\x81\x87\x02\xf5\x01\x08\x85\x08\xf4\x01"
  "\x06\x81\x87\x02\xf3\x01\x04\x81\xa3\x02\x37\x56\x46\x02\x35\x22"
  "\x1e\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2d\x74\x79\x70"
  "\x65\x2f\x73\x74\x61\x63\x6b\x2d\x6d\x61\x72\x6b\x65\x72\x62\x1a"
  "\x25\x74\x72\x61\x6e\x73\x6c\x61\x74\x65\x2d\x74\x6f\x2d\x73\x74"
  "\x61\x74\x65\x2d\x70\x6f\x69\x6e\x74\x17\x73\x65\x74\x2d\x69\x6e"
  "\x74\x65\x72\x72\x75\x70\x74\x2d\x65\x6e\x61\x62\x6c\x65\x73\x21"
  "\x1b\x77\x69\x74\x68\x2d\x74\x68\x72\x65\x61\x64\x2d\x65\x76\x65"
  "\x6e\x74\x73\x2d\x62\x6c\x6f\x63\x6b\x65\x64\x05\x04\x14\x6d\x65"
  "\x72\x67\x65\x2d\x64\x79\x6e\x61\x6d\x69\x63\x2d\x73\x74\x61\x74"
  "\x65\x08\x5d\x03\xa5\x02\x32\x81\x8b\x02\xa4\x02\x30\x81\x8d\x02"
  "\xa3\x02\x2e\x81\x85\x02\xa2\x02\x2c\x81\x85\x02\xa1\x02\x2a\x81"
  "\x8b\x02\xa0\x02\x28\x81\x89\x02\x9f\x02\x26\x81\x87\x02\x9e\x02"
  "\x24\x81\x8b\x02\x9d\x02\x22\x81\x87\x02\x9c\x02\x20\x81\x87\x02"
  "\x9b\x02\x1e\x81\x8b\x02\x9a\x02\x1c\x81\x89\x02\x99\x02\x1a\x81"
  "\x87\x02\x98\x02\x18\x81\x8f\x02\x97\x02\x16\x81\x89\x02\x96\x02"
  "\x14\x81\x87\x02\x95\x02\x12\x81\x87\x02\x94\x02\x10\x81\x87\x02"
  "\x93\x02\x0e\x81\x89\x02\x92\x02\x0c\x81\x87\x02\x91\x02\x0a\x81"
  "\x89\x02\x90\x02\x08\x81\x87\x02\x8f\x02\x06\x81\x87\x02\x8e\x02"
  "\x04\x85\x08\x31\x43\x63\x02\x36\x08\x09\x0a\x0b\x0c\x4a\x05\x5b"
  "\x03\xae\x02\x14\x81\x8d\x02\xad\x02\x12\x81\x9b\x02\xac\x02\x10"
  "\x81\x99\x02\xab\x02\x0e\x81\x97\x02\xaa\x02\x0c\x81\x95\x02\xa9"
  "\x02\x0a\x81\x93\x02\xa8\x02\x08\x81\x91\x02\xa7\x02\x06\x81\x8f"
  "\x02\xa6\x02\x04\x88\x0e\x13\x23\x64\x02\x37\x22\x62\x22\x73\x74"
  "\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2d\x74\x79\x70\x65\x2f\x73"
  "\x70\x65\x63\x69\x61\x6c\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x65"
  "\x03\xb5\x02\x10\x81\x83\x02\xb4\x02\x0e\x81\x83\x02\xb3\x02\x0c"
  "\x81\x85\x02\xb2\x02\x0a\x81\x83\x02\xb1\x02\x08\x81\x85\x02\xb0"
  "\x02\x06\x81\x83\x02\xaf\x02\x04\x83\x04\x0f\x1a\x66\x02\x38\x22"
  "\x62\x02\xba\x02\x0c\x81\x83\x02\xb9\x02\x0a\x81\x83\x02\xb8\x02"
  "\x08\x81\x85\x02\xb7\x02\x06\x81\x83\x02\xb6\x02\x04\x83\x04\x0b"
  "\x14\x67\x02\x39\x22\x62\x02\xbf\x02\x0c\x81\x83\x02\xbe\x02\x0a"
  "\x81\x83\x02\xbd\x02\x08\x81\x85\x02\xbc\x02\x06\x81\x83\x02\xbb"
  "\x02\x04\x83\x04\x0b\x15\x68\x02\x3a\x62\x02\xc2\x02\x08\x81\x85"
  "\x02\xc1\x02\x06\x81\x83\x02\xc0\x02\x04\x83\x04\x07\x0f\x69\x02"
  "\x3b\x65\x02\xc5\x02\x08\x81\x85\x02\xc4\x02\x06\x81\x83\x02\xc3"
  "\x02\x04\x83\x04\x07\x0f\x6a\x02\x3c\x2b\x02\x03\x2c\x03\x2d\x03"
  "\xc9\x02\x0a\x81\x85\x02\xc8\x02\x08\x81\x83\x02\xc7\x02\x06\x81"
  "\x83\x02\xc6\x02\x04\x83\x04\x09\x14\x6b\x02\x3d\x2b\x02\x03\x2d"
  "\x02\xcc\x02\x08\x81\x85\x02\xcb\x02\x06\x81\x83\x02\xca\x02\x04"
  "\x83\x04\x07\x10\x2b\x02\x3e\x03\x1b\x73\x74\x61\x63\x6b\x2d\x66"
  "\x72\x61\x6d\x65\x2d\x3e\x63\x6f\x6e\x74\x72\x6f\x6c\x2d\x70\x6f"
  "\x69\x6e\x74\x6c\x05\x12\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x03\xcf\x02\x08\x81\x85\x02\xce\x02"
  "\x06\x81\x83\x02\xcd\x02\x04\x83\x04\x07\x11\x6d\x02\x3f\x11\x73"
  "\x79\x73\x74\x65\x6d\x2d\x70\x61\x69\x72\x2d\x63\x6f\x6e\x73\x6e"
  "\x14\x09\x0e\x64\x75\x6d\x6d\x79\x2d\x68\x69\x73\x74\x6f\x72\x79"
  "\x08\x16\x45\x03\x03\x14\x75\x6e\x70\x61\x72\x73\x65\x2f\x73\x74"
  "\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x6f\x03\x13\x66\x69\x78\x65"
  "\x64\x2d\x6f\x62\x6a\x65\x63\x74\x73\x2d\x69\x74\x65\x6d\x03\x14"
  "\x68\x69\x73\x74\x6f\x72\x79\x2d\x75\x6e\x74\x72\x61\x6e\x73\x66"
  "\x6f\x72\x6d\x04\x23\x08\x13\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x74"
  "\x72\x6f\x6c\x2d\x70\x6f\x69\x6e\x74\x03\x29\x07\xdf\x02\x22\x81"
  "\x83\x02\xde\x02\x20\x81\x83\x02\xdd\x02\x1e\x81\x83\x02\xdc\x02"
  "\x1c\x81\x8f\x02\xdb\x02\x1a\x81\x8d\x02\xda\x02\x18\x81\x8d\x02"
  "\xd9\x02\x16\x81\x8f\x02\xd8\x02\x14\x81\x8d\x02\xd7\x02\x12\x81"
  "\x8b\x02\xd6\x02\x10\x81\x89\x02\xd5\x02\x0e\x81\x83\x02\xd4\x02"
  "\x0c\x81\x8b\x02\xd3\x02\x0a\x81\x87\x02\xd2\x02\x08\x81\x87\x02"
  "\xd1\x02\x06\x81\x83\x02\xd0\x02\x04\x83\x04\x21\x3d\x70\x02\x40"
  "\x6e\x14\x20\x22\x0a\x08\x0c\x4c\x02\x04\x23\x02\x4d\x03\x0d\x73"
  "\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x3f\x6e\x03\x11\x03\x6f"
  "\x06\xf8\x02\x34\x81\x85\x02\xf7\x02\x32\x81\x83\x02\xf6\x02\x30"
  "\x81\x87\x02\xf5\x02\x2e\x81\x85\x02\xf4\x02\x2c\x81\x85\x02\xf3"
  "\x02\x2a\x81\x85\x02\xf2\x02\x28\x81\x85\x02\xf1\x02\x26\x81\x87"
  "\x02\xf0\x02\x24\x81\x85\x02\xef\x02\x22\x81\x83\x02\xee\x02\x20"
  "\x81\x89\x02\xed\x02\x1e\x81\x87\x02\xec\x02\x1c\x81\x85\x02\xeb"
  "\x02\x1a\x81\x85\x02\xea\x02\x18\x81\x83\x02\xe9\x02\x16\x81\x83"
  "\x02\xe8\x02\x14\x81\x83\x02\xe7\x02\x12\x81\x85\x02\xe6\x02\x10"
  "\x81\x83\x02\xe5\x02\x0e\x81\x83\x02\xe4\x02\x0c\x81\x83\x02\xe3"
  "\x02\x0a\x81\x85\x02\xe2\x02\x08\x81\x85\x02\xe1\x02\x06\x81\x83"
  "\x02\xe0\x02\x04\x83\x04\x33\x4e\x4d\x02\x41\x04\x0b\x73\x74\x72"
  "\x65\x61\x6d\x2d\x72\x65\x66\x71\x02\xfa\x02\x06\x81\x85\x02\xf9"
  "\x02\x04\x84\x06\x05\x0c\x72\x02\x42\x0d\x6f\x62\x6a\x65\x63\x74"
  "\x2d\x64\x61\x74\x75\x6d\x73\x04\x71\x02\xfe\x02\x0a\x81\x89\x02"
  "\xfd\x02\x08\x81\x87\x02\xfc\x02\x06\x81\x87\x02\xfb\x02\x04\x84"
  "\x06\x09\x10\x74\x02\x43\x1d\x55\x6e\x61\x62\x6c\x65\x20\x74\x6f"
  "\x20\x66\x69\x6e\x64\x20\x64\x79\x6e\x61\x6d\x69\x63\x20\x6c\x69"
  "\x6e\x6b\x3a\x03\x47\x03\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x6e\x65\x78"
  "\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x6f"
  "\x66\x66\x73\x65\x74\x75\x03\x0b\x73\x74\x72\x65\x61\x6d\x2d\x63"
  "\x64\x72\x76\x03\x48\x04\x5f\x03\x0f\x73\x74\x61\x63\x6b\x2d\x61"
  "\x64\x64\x72\x65\x73\x73\x3f\x77\x04\x2f\x08\x88\x03\x16\x81\x8b"
  "\x02\x87\x03\x14\x81\x8b\x02\x86\x03\x12\x81\x89\x02\x85\x03\x10"
  "\x81\x89\x02\x84\x03\x0e\x81\x89\x02\x83\x03\x0c\x81\x89\x02\x82"
  "\x03\x0a\x81\x87\x02\x81\x03\x08\x81\x87\x02\x80\x03\x06\x81\x85"
  "\x02\xff\x02\x04\x84\x06\x15\x28\x78\x02\x44\x03\x47\x03\x1e\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x2d\x66\x72\x61\x6d\x65\x2d\x73\x69\x7a\x65\x79\x03\x8b\x03"
  "\x08\x81\x87\x02\x8a\x03\x06\x81\x85\x02\x89\x03\x04\x84\x06\x07"
  "\x0f\x7a\x02\x45\x04\x71\x04\x2f\x03\x1d\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x64\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x3f\x2f\x03\x77\x05\x91\x03\x0e\x81\x83\x02"
  "\x90\x03\x0c\x81\x87\x02\x8f\x03\x0a\x81\x85\x02\x8e\x03\x08\x81"
  "\x83\x02\x8d\x03\x06\x81\x83\x02\x8c\x03\x04\x84\x06\x0d\x1b\x77"
  "\x02\x46\x14\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65\x6e\x74\x72"
  "\x79\x2d\x6b\x69\x6e\x64\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79"
  "\x70\x65\x3f\x29\x94\x03\x08\x81\x83\x02\x93\x03\x06\x81\x83\x02"
  "\x92\x03\x04\x83\x04\x07\x0f\x7b\x02\x47\x73\x25\x55\x6e\x6b\x6e"
  "\x6f\x77\x6e\x20\x73\x70\x65\x63\x69\x61\x6c\x20\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x64\x20\x66\x72\x61\x6d\x65\x20\x63\x6f\x64\x65\x3a"
  "\x0a\x08\x04\x71\x04\x5f\x03\x21\x63\x6f\x6d\x70\x69\x6c\x65\x64"
  "\x2d\x63\x6f\x64\x65\x2d\x61\x64\x64\x72\x65\x73\x73\x2f\x66\x72"
  "\x61\x6d\x65\x2d\x73\x69\x7a\x65\x73\x04\xa3\x03\x20\x81\x89\x02"
  "\xa2\x03\x1e\x81\x87\x02\xa1\x03\x1c\x81\x89\x02\xa0\x03\x1a\x81"
  "\x87\x02\x9f\x03\x18\x81\x89\x02\x9e\x03\x16\x81\x87\x02\x9d\x03"
  "\x14\x81\x89\x02\x9c\x03\x12\x81\x87\x02\x9b\x03\x10\x81\x89\x02"
  "\x9a\x03\x0e\x81\x87\x02\x99\x03\x0c\x81\x89\x02\x98\x03\x0a\x81"
  "\x87\x02\x97\x03\x08\x81\x87\x02\x96\x03\x06\x81\x85\x02\x95\x03"
  "\x04\x84\x06\x1f\x34\x7c\x02\x48\x13\x55\x6e\x65\x78\x70\x65\x63"
  "\x74\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x3a\x03\x17\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x61\x64\x64\x72\x65"
  "\x73\x73\x3f\x03\x29\x03\x14\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x7d\x03\x75\x04\x5f\x03"
  "\x79\x07\xaa\x03\x10\x81\x83\x02\xa9\x03\x0e\x81\x83\x02\xa8\x03"
  "\x0c\x81\x83\x02\xa7\x03\x0a\x81\x83\x02\xa6\x03\x08\x81\x83\x02"
  "\xa5\x03\x06\x81\x83\x02\xa4\x03\x04\x83\x04\x0f\x20\x79\x02\x49"
  "\x03\x47\x03\x0d\x73\x74\x72\x65\x61\x6d\x2d\x6e\x75\x6c\x6c\x3f"
  "\x75\x03\x4e\x03\x4f\x04\x0d\x73\x74\x72\x65\x61\x6d\x2d\x74\x61"
  "\x69\x6c\x2a\x4e\x05\x07\x76\x65\x72\x69\x66\x79\x7e\x03\x10\x72"
  "\x65\x74\x75\x72\x6e\x2d\x61\x64\x64\x72\x65\x73\x73\x3f\x7f\x08"
  "\xb6\x03\x1a\x81\x8d\x02\xb5\x03\x18\x81\x8b\x02\xb4\x03\x16\x81"
  "\x8b\x02\xb3\x03\x14\x81\x89\x02\xb2\x03\x12\x81\x89\x02\xb1\x03"
  "\x10\x81\x83\x02\xb0\x03\x0e\x81\x89\x02\xaf\x03\x0c\x81\x8b\x02"
  "\xae\x03\x0a\x81\x87\x02\xad\x03\x08\x81\x87\x02\xac\x03\x06\x85"
  "\x08\xab\x03\x04\x81\x87\x02\x19\x2e\x80\x01\x02\x4a\x07\x73\x74"
  "\x72\x65\x61\x6d\x4e\x03\x48\x03\x75\x05\x1a\x65\x72\x72\x6f\x72"
  "\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75"
  "\x6d\x65\x6e\x74\x48\x03\x76\x04\x4e\x06\xbb\x03\x0c\x81\x85\x02"
  "\xba\x03\x0a\x81\x85\x02\xb9\x03\x08\x81\x85\x02\xb8\x03\x06\x84"
  "\x06\xb7\x03\x04\x81\x85\x02\x0b\x1c\x81\x01\x02\x4b\x02\x02\xbc"
  "\x03\x04\x82\x02\x03\x02\x4c\xbd\x03\x04\x83\x04\x03\x82\x01\x02"
  "\x4d\xbe\x03\x04\x83\x04\x03\x83\x01\x02\x4e\xbf\x03\x04\x83\x04"
  "\x03\x84\x01\x02\x4f\xc0\x03\x04\x83\x04\x03\x85\x01\x02\x50\xc1"
  "\x03\x04\x83\x04\x03\x86\x01\x02\x51\xc2\x03\x04\x83\x04\x03\x87"
  "\x01\x02\x52\x13\x07\x2e\x74\x61\x67\x2e\x33\x13\x02\xc6\x03\x0a"
  "\x81\x85\x02\xc5\x03\x08\x81\x83\x02\xc4\x03\x06\x81\x83\x02\xc3"
  "\x03\x04\x83\x04\x09\x12\x88\x01\x02\x53\x1c\x6d\x69\x63\x72\x6f"
  "\x63\x6f\x64\x65\x2d\x72\x65\x74\x75\x72\x6e\x2f\x63\x6f\x64\x65"
  "\x2d\x3e\x74\x79\x70\x65\x89\x01\x22\x20\x12\x73\x74\x61\x63\x6b"
  "\x2d\x66\x72\x61\x6d\x65\x2d\x74\x79\x70\x65\x73\x22\x02\x04\x19"
  "\x65\x72\x72\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d"
  "\x61\x72\x67\x75\x6d\x65\x6e\x74\x8a\x01\x02\xcb\x03\x0c\x81\x83"
  "\x02\xca\x03\x0a\x81\x83\x02\xc9\x03\x08\x81\x83\x02\xc8\x03\x06"
  "\x83\x04\xc7\x03\x04\x81\x83\x02\x0b\x16\x8b\x01\x02\x54\x03\x11"
  "\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x72\x65\x74\x75\x72\x6e"
  "\x8c\x01\x03\x89\x01\x03\xcd\x03\x06\x81\x83\x02\xcc\x03\x04\x83"
  "\x04\x05\x0d\x8d\x01\x02\x55\x4f\x19\x52\x65\x74\x75\x72\x6e\x20"
  "\x63\x6f\x64\x65\x20\x68\x61\x73\x20\x6e\x6f\x20\x74\x79\x70\x65"
  "\x3a\x58\x61\x31\x65\x2f\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d"
  "\x65\x2d\x74\x79\x70\x65\x2f\x69\x6e\x74\x65\x72\x72\x75\x70\x74"
  "\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65\x78\x70\x72\x65\x73"
  "\x73\x69\x6f\x6e\x8e\x01\x06\x03\x26\x03\x29\x03\x27\x03\x89\x01"
  "\x03\x7d\x03\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x6e"
  "\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x72\x65\x74\x75\x72\x6e"
  "\x2d\x74\x6f\x2d\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x3f"
  "\x04\x5f\x03\x2c\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x6e"
  "\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x72\x65\x66\x6c\x65\x63"
  "\x74\x2d\x74\x6f\x2d\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x3f\x03"
  "\x15\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65\x78\x70\x72\x65\x73"
  "\x73\x69\x6f\x6e\x3f\x04\x8a\x01\x0b\xdc\x03\x20\x81\x83\x02\xdb"
  "\x03\x1e\x81\x83\x02\xda\x03\x1c\x81\x83\x02\xd9\x03\x1a\x81\x83"
  "\x02\xd8\x03\x18\x81\x83\x02\xd7\x03\x16\x81\x83\x02\xd6\x03\x14"
  "\x81\x83\x02\xd5\x03\x12\x81\x83\x02\xd4\x03\x10\x81\x83\x02\xd3"
  "\x03\x0e\x81\x83\x02\xd2\x03\x0c\x81\x85\x02\xd1\x03\x0a\x81\x83"
  "\x02\xd0\x03\x08\x81\x83\x02\xcf\x03\x06\x81\x83\x02\xce\x03\x04"
  "\x83\x04\x1f\x3f\x8a\x01\x02\x56\x02\x10\x6d\x61\x6b\x65\x2d\x62"
  "\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x0d\x73\x74\x61\x63\x6b\x2d"
  "\x6d\x61\x72\x6b\x65\x72\x7d\x0e\x68\x61\x72\x64\x77\x61\x72\x65"
  "\x2d\x74\x72\x61\x70\x29\x16\x72\x65\x65\x6e\x74\x65\x72\x2d\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x27\x0f\x6a\x6f"
  "\x69\x6e\x2d\x73\x74\x61\x63\x6b\x6c\x65\x74\x73\x26\x4c\x45\x22"
  "\x1f\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2d\x74\x79\x70"
  "\x65\x2f\x68\x61\x72\x64\x77\x61\x72\x65\x2d\x74\x72\x61\x70\x8f"
  "\x01\x62\x31\x58\x65\x61\x8e\x01\x0a\x77\x6f\x72\x64\x2d\x73\x69"
  "\x7a\x65\x90\x01\x32\x0d\x19\x70\x61\x72\x73\x65\x72\x2f\x73\x74"
  "\x61\x6e\x64\x61\x72\x64\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x91"
  "\x01\x1f\x6c\x65\x6e\x67\x74\x68\x2f\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x64\x2d\x72\x65\x74\x75\x72\x6e\x2d\x61\x64\x64\x72\x65\x73\x73"
  "\x92\x01\x5b\x18\x70\x61\x72\x73\x65\x72\x2f\x73\x70\x65\x63\x69"
  "\x61\x6c\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x93\x01\x18\x6c\x65"
  "\x6e\x67\x74\x68\x2f\x73\x70\x65\x63\x69\x61\x6c\x2d\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x64\x94\x01\x24\x6c\x65\x6e\x67\x74\x68\x2f\x69"
  "\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x95\x01\x07\x03\x8c"
  "\x01\x03\x14\x6d\x61\x6b\x65\x2d\x72\x65\x74\x75\x72\x6e\x2d\x61"
  "\x64\x64\x72\x65\x73\x73\x02\x17\x6d\x61\x6b\x65\x2d\x73\x74\x61"
  "\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2d\x74\x79\x70\x65\x73\x96\x01"
  "\x03\x1c\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x72\x65\x74\x75"
  "\x72\x6e\x2f\x6e\x61\x6d\x65\x2d\x3e\x74\x79\x70\x65\x97\x01\x07"
  "\x16\x6d\x61\x6b\x65\x2d\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d"
  "\x65\x2d\x74\x79\x70\x65\x98\x01\x06\x80\x04\x4a\x81\x81\x02\xff"
  "\x03\x48\x81\x81\x02\xfe\x03\x46\x81\x85\x02\xfd\x03\x44\x81\x85"
  "\x02\xfc\x03\x42\x81\x81\x02\xfb\x03\x40\x81\x81\x02\xfa\x03\x3e"
  "\x81\x81\x02\xf9\x03\x3c\x81\x83\x02\xf8\x03\x3a\x81\x81\x02\xf7"
  "\x03\x38\x81\x81\x02\xf6\x03\x36\x81\x85\x02\xf5\x03\x34\x81\x83"
  "\x02\xf4\x03\x32\x81\x81\x02\xf3\x03\x30\x81\x81\x02\xf2\x03\x2e"
  "\x81\x85\x02\xf1\x03\x2c\x81\x83\x02\xf0\x03\x2a\x81\x81\x02\xef"
  "\x03\x28\x81\x81\x02\xee\x03\x26\x81\x83\x02\xed\x03\x24\x81\x81"
  "\x02\xec\x03\x22\x81\x81\x02\xeb\x03\x20\x81\x85\x02\xea\x03\x1e"
  "\x81\x83\x02\xe9\x03\x1c\x81\x81\x02\xe8\x03\x1a\x81\x81\x02\xe7"
  "\x03\x18\x81\x81\x02\xe6\x03\x16\x81\x81\x02\xe5\x03\x14\x81\x81"
  "\x02\xe4\x03\x12\x81\x81\x02\xe3\x03\x10\x81\x83\x02\xe2\x03\x0e"
  "\x81\x81\x02\xe1\x03\x0c\x81\x81\x02\xe0\x03\x0a\x81\x83\x02\xdf"
  "\x03\x08\x81\x81\x02\xde\x03\x06\x81\x81\x02\xdd\x03\x04\x82\x02"
  "\x49\x75\x99\x01\x02\x57\x17\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d"
  "\x65\x72\x72\x6f\x72\x2d\x72\x65\x73\x74\x61\x72\x74\x22\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x72\x2d\x75\x6e\x61\x73\x73\x69\x67\x6e\x65"
  "\x64\x3f\x2d\x74\x72\x61\x70\x2d\x72\x65\x73\x74\x61\x72\x74\x25"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x73\x61\x66\x65\x2d\x72\x65"
  "\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x2d\x72\x65\x73"
  "\x74\x61\x72\x74\x20\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x72\x65"
  "\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x2d\x72\x65\x73"
  "\x74\x61\x72\x74\x21\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x61\x73"
  "\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x74\x72\x61\x70\x2d\x72\x65"
  "\x73\x74\x61\x72\x74\x27\x13\x69\x6e\x74\x65\x72\x6e\x61\x6c\x2d"
  "\x61\x70\x70\x6c\x79\x2d\x76\x61\x6c\x26\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x72\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x2d\x6c\x6f\x6f\x6b"
  "\x75\x70\x2d\x74\x72\x61\x70\x2d\x72\x65\x73\x74\x61\x72\x74\x1d"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x6c\x69\x6e\x6b\x2d\x63\x61"
  "\x63\x68\x65\x73\x2d\x72\x65\x73\x74\x61\x72\x74\x09\x0f\x69\x6e"
  "\x74\x65\x72\x6e\x61\x6c\x2d\x61\x70\x70\x6c\x79\x23\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x72\x2d\x6c\x6f\x6f\x6b\x75\x70\x2d\x61\x70\x70"
  "\x6c\x79\x2d\x74\x72\x61\x70\x2d\x72\x65\x73\x74\x61\x72\x74\x1b"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x69\x6e\x74\x65\x72\x72\x75"
  "\x70\x74\x2d\x72\x65\x73\x74\x61\x72\x74\x29\x12\x63\x6f\x6d\x62"
  "\x69\x6e\x61\x74\x69\x6f\x6e\x2d\x61\x70\x70\x6c\x79\x17\x63\x6f"
  "\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2d\x73\x61\x76\x65\x2d\x76"
  "\x61\x6c\x75\x65\x12\x73\x65\x71\x75\x65\x6e\x63\x65\x2d\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x65\x11\x66\x6f\x72\x63\x65\x2d\x73\x6e\x61"
  "\x70\x2d\x74\x68\x75\x6e\x6b\x0b\x65\x76\x61\x6c\x2d\x65\x72\x72"
  "\x6f\x72\x13\x64\x69\x73\x6a\x75\x6e\x63\x74\x69\x6f\x6e\x2d\x64"
  "\x65\x63\x69\x64\x65\x14\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e"
  "\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x65\x13\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x61\x6c\x2d\x64\x65\x63\x69\x64\x65\x14\x61\x73\x73"
  "\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x65"
  "\x10\x61\x63\x63\x65\x73\x73\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x65"
  "\x7d\x17\x72\x65\x73\x74\x6f\x72\x65\x2d\x69\x6e\x74\x65\x72\x72"
  "\x75\x70\x74\x2d\x6d\x61\x73\x6b\x10\x72\x65\x73\x74\x6f\x72\x65"
  "\x2d\x68\x69\x73\x74\x6f\x72\x79\x1a\x72\x65\x73\x74\x6f\x72\x65"
  "\x2d\x64\x6f\x6e\x74\x2d\x63\x6f\x70\x79\x2d\x68\x69\x73\x74\x6f"
  "\x72\x79\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x0e\x72"
  "\x65\x73\x74\x6f\x72\x65\x2d\x76\x61\x6c\x75\x65\x11\x70\x6f\x70"
  "\x2d\x72\x65\x74\x75\x72\x6e\x2d\x65\x72\x72\x6f\x72\x1a\x6e\x6f"
  "\x6e\x2d\x65\x78\x69\x73\x74\x65\x6e\x74\x2d\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x26\x05\x68\x61\x6c\x74\x08\x5b\x17"
  "\x70\x61\x72\x73\x65\x72\x2f\x72\x65\x73\x74\x6f\x72\x65\x2d\x68"
  "\x69\x73\x74\x6f\x72\x79\x7d\x1e\x70\x61\x72\x73\x65\x72\x2f\x72"
  "\x65\x73\x74\x6f\x72\x65\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74"
  "\x2d\x6d\x61\x73\x6b\x29\x5e\x1e\x6c\x65\x6e\x67\x74\x68\x2f\x63"
  "\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2d\x73\x61\x76\x65\x2d"
  "\x76\x61\x6c\x75\x65\x27\x15\x6c\x65\x6e\x67\x74\x68\x2f\x68\x61"
  "\x72\x64\x77\x61\x72\x65\x2d\x74\x72\x61\x70\x26\x22\x70\x61\x72"
  "\x73\x65\x72\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x69\x6e\x74"
  "\x65\x72\x72\x75\x70\x74\x2d\x72\x65\x73\x74\x61\x72\x74\x9a\x01"
  "\x22\x6c\x65\x6e\x67\x74\x68\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72"
  "\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x72\x65\x73\x74\x61"
  "\x72\x74\x9b\x01\x0d\x70\x61\x72\x73\x65\x72\x2f\x61\x70\x70\x6c"
  "\x79\x9c\x01\x0a\x02\x1c\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d"
  "\x72\x65\x74\x75\x72\x6e\x2f\x63\x6f\x64\x65\x2d\x6c\x69\x6d\x69"
  "\x74\x04\x0c\x6d\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x03\x8c"
  "\x01\x07\x98\x01\x04\x19\x6c\x65\x6e\x67\x74\x68\x2f\x61\x70\x70"
  "\x6c\x69\x63\x61\x74\x69\x6f\x6e\x2d\x66\x72\x61\x6d\x65\x8c\x01"
  "\x06\xbd\x04\x7c\x81\x81\x02\xbc\x04\x7a\x81\x81\x02\xbb\x04\x78"
  "\x81\x81\x02\xba\x04\x76\x81\x81\x02\xb9\x04\x74\x81\x81\x02\xb8"
  "\x04\x72\x81\x8d\x02\xb7\x04\x70\x81\x87\x02\xb6\x04\x6e\x81\x81"
  "\x02\xb5\x04\x6c\x81\x83\x02\xb4\x04\x6a\x81\x83\x02\xb3\x04\x68"
  "\x81\x8d\x02\xb2\x04\x66\x81\x87\x02\xb1\x04\x64\x81\x83\x02\xb0"
  "\x04\x62\x81\x81\x02\xaf\x04\x60\x81\x8d\x02\xae\x04\x5e\x81\x89"
  "\x02\xad\x04\x5c\x81\x83\x02\xac\x04\x5a\x81\x87\x02\xab\x04\x58"
  "\x81\x83\x02\xaa\x04\x56\x81\x83\x02\xa9\x04\x54\x81\x87\x02\xa8"
  "\x04\x52\x81\x85\x02\xa7\x04\x50\x81\x81\x02\xa6\x04\x4e\x81\x89"
  "\x02\xa5\x04\x4c\x81\x83\x02\xa4\x04\x4a\x81\x85\x02\xa3\x04\x48"
  "\x81\x83\x02\xa2\x04\x46\x81\x83\x02\xa1\x04\x44\x81\x87\x02\xa0"
  "\x04\x42\x81\x83\x02\x9f\x04\x40\x81\x83\x02\x9e\x04\x3e\x81\x83"
  "\x02\x9d\x04\x3c\x81\x83\x02\x9c\x04\x3a\x81\x83\x02\x9b\x04\x38"
  "\x81\x83\x02\x9a\x04\x36\x81\x83\x02\x99\x04\x34\x81\x8d\x02\x98"
  "\x04\x32\x81\x87\x02\x97\x04\x30\x81\x83\x02\x96\x04\x2e\x81\x83"
  "\x02\x95\x04\x2c\x81\x87\x02\x94\x04\x2a\x81\x83\x02\x93\x04\x28"
  "\x81\x87\x02\x92\x04\x26\x81\x83\x02\x91\x04\x24\x81\x87\x02\x90"
  "\x04\x22\x81\x83\x02\x8f\x04\x20\x81\x87\x02\x8e\x04\x1e\x81\x83"
  "\x02\x8d\x04\x1c\x81\x91\x02\x8c\x04\x1a\x81\x8f\x02\x8b\x04\x18"
  "\x81\x83\x02\x8a\x04\x16\x81\x8d\x02\x89\x04\x14\x81\x83\x02\x88"
  "\x04\x12\x81\x8d\x02\x87\x04\x10\x81\x83\x02\x86\x04\x0e\x81\x8d"
  "\x02\x85\x04\x0c\x81\x89\x02\x84\x04\x0a\x81\x83\x02\x83\x04\x08"
  "\x81\x85\x02\x82\x04\x06\x81\x81\x02\x81\x04\x04\x82\x02\x7b\xbc"
  "\x01\x9d\x01\x02\x58\x08\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x72\x69\x74\x79"
  "\x0f\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x73\x74\x61\x74\x65\x3a\x0a"
  "\x04\x71\x04\x50\x04\x05\x6d\x65\x6d\x71\x04\x5f\x04\x0a\x68\x65"
  "\x75\x72\x69\x73\x74\x69\x63\x71\x03\x7f\x07\xce\x04\x24\x81\x91"
  "\x02\xcd\x04\x22\x81\x8d\x02\xcc\x04\x20\x81\x8f\x02\xcb\x04\x1e"
  "\x81\x8f\x02\xca\x04\x1c\x81\x8f\x02\xc9\x04\x1a\x81\x8d\x02\xc8"
  "\x04\x18\x81\x8f\x02\xc7\x04\x16\x81\x8d\x02\xc6\x04\x14\x81\x8d"
  "\x02\xc5\x04\x12\x81\x8b\x02\xc4\x04\x10\x81\x8b\x02\xc3\x04\x0e"
  "\x81\x8d\x02\xc2\x04\x0c\x81\x8b\x02\xc1\x04\x0a\x81\x89\x02\xc0"
  "\x04\x08\x81\x87\x02\xbf\x04\x06\x81\x85\x02\xbe\x04\x04\x84\x06"
  "\x23\x3c\x50\x02\x59\x03\x75\x03\x76\x05\x7e\x03\x47\x03\x7f\x04"
  "\x71\x07\xd5\x04\x10\x81\x85\x02\xd4\x04\x0e\x81\x85\x02\xd3\x04"
  "\x0c\x81\x87\x02\xd2\x04\x0a\x81\x85\x02\xd1\x04\x08\x81\x85\x02"
  "\xd0\x04\x06\x81\x85\x02\xcf\x04\x04\x84\x06\x0f\x20\x7f\x02\x5a"
  "\x8f\x01\x02\x03\x6e\x02\xd9\x04\x0a\x81\x85\x02\xd8\x04\x08\x81"
  "\x83\x02\xd7\x04\x06\x81\x83\x02\xd6\x04\x04\x83\x04\x09\x14\x76"
  "\x02\x5b\x02\x03\x15\x68\x61\x72\x64\x77\x61\x72\x65\x2d\x74\x72"
  "\x61\x70\x2d\x66\x72\x61\x6d\x65\x3f\x75\x04\x1e\x65\x72\x72\x6f"
  "\x72\x3a\x6e\x6f\x74\x2d\x68\x61\x72\x64\x77\x61\x72\x65\x2d\x74"
  "\x72\x61\x70\x2d\x66\x72\x61\x6d\x65\x47\x03\xdb\x04\x06\x81\x85"
  "\x02\xda\x04\x04\x84\x04\x05\x0e\x9e\x01\x02\x5c\x08\x14\x68\x61"
  "\x72\x64\x77\x61\x72\x65\x2d\x74\x72\x61\x70\x20\x66\x72\x61\x6d"
  "\x65\x05\x48\x02\xdc\x04\x04\x84\x04\x03\x0c\x48\x02\x5d\x04\x63"
  "\x64\x72\x9f\x01\x19\x68\x61\x72\x64\x77\x61\x72\x65\x2d\x74\x72"
  "\x61\x70\x2d\x66\x72\x61\x6d\x65\x2f\x63\x6f\x64\x65\xa0\x01\x04"
  "\x1e\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x68\x61\x72\x64\x77"
  "\x61\x72\x65\x2d\x74\x72\x61\x70\x2d\x66\x72\x61\x6d\x65\xa1\x01"
  "\x04\x23\x03\xdf\x04\x08\x81\x83\x02\xde\x04\x06\x81\x83\x02\xdd"
  "\x04\x04\x83\x04\x07\x12\xa2\x01\x02\x5e\x0a\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x20\x03\x73\x70\x03\x70\x63\x02\x09\x24\x68\x61\x72"
  "\x64\x77\x61\x72\x65\x2d\x74\x72\x61\x70\x2d\x66\x72\x61\x6d\x65"
  "\x2f\x70\x72\x69\x6e\x74\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x73"
  "\xa3\x01\x04\xa1\x01\x04\x23\x05\x0f\x70\x72\x69\x6e\x74\x2d\x72"
  "\x65\x67\x69\x73\x74\x65\x72\xa4\x01\x03\x0f\x6e\x75\x6d\x62\x65"
  "\x72\x2d\x3e\x73\x74\x72\x69\x6e\x67\xa5\x01\x04\x0e\x73\x74\x72"
  "\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x06\xec\x04\x1c\x81\x8b"
  "\x02\xeb\x04\x1a\x81\x8b\x02\xea\x04\x18\x81\x89\x02\xe9\x04\x16"
  "\x81\x87\x02\xe8\x04\x14\x81\x87\x02\xe7\x04\x12\x81\x87\x02\xe6"
  "\x04\x10\x81\x87\x02\xe5\x04\x0e\x81\x85\x02\xe4\x04\x0c\x81\x85"
  "\x02\xe3\x04\x0a\x81\x83\x02\xe2\x04\x08\x81\x83\x02\xe1\x04\x06"
  "\x81\x83\x02\xe0\x04\x04\x83\x04\x1b\x32\xa6\x01\x02\x5f\x11\x04"
  "\x20\x3d\x20\x1d\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x3e"
  "\x75\x6e\x73\x69\x67\x6e\x65\x64\x2d\x69\x6e\x74\x65\x67\x65\x72"
  "\x03\x20\x20\x0b\x72\x65\x61\x64\x2d\x62\x69\x74\x73\x21\x14\x62"
  "\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x61\x6c\x6c\x6f\x63\x61"
  "\x74\x65\x90\x01\x02\x02\x08\x6e\x65\x77\x6c\x69\x6e\x65\xa7\x01"
  "\x03\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\xa8\x01"
  "\x04\xa5\x01\x04\xf9\x04\x1c\x81\x89\x02\xf8\x04\x1a\x81\x89\x02"
  "\xf7\x04\x18\x81\x89\x02\xf6\x04\x16\x81\x89\x02\xf5\x04\x14\x81"
  "\x83\x02\xf4\x04\x12\x81\x89\x02\xf3\x04\x10\x81\x87\x02\xf2\x04"
  "\x0e\x81\x89\x02\xf1\x04\x0c\x81\x87\x02\xf0\x04\x0a\x81\x89\x02"
  "\xef\x04\x08\x81\x87\x02\xee\x04\x06\x81\x8b\x02\xed\x04\x04\x85"
  "\x08\x1b\x2d\xa9\x01\x02\x60\x03\x20\x20\x14\x3b\x3b\x20\x54\x6f"
  "\x70\x20\x6f\x66\x20\x74\x68\x65\x20\x73\x74\x61\x63\x6b\x0f\x3b"
  "\x3b\x20\x45\x6d\x70\x74\x79\x20\x73\x74\x61\x63\x6b\x17\x3b\x3b"
  "\x20\x42\x6f\x74\x74\x6f\x6d\x20\x6f\x66\x20\x74\x68\x65\x20\x73"
  "\x74\x61\x63\x6b\x20\x0a\x20\x68\x61\x72\x64\x77\x61\x72\x65\x2d"
  "\x74\x72\x61\x70\x2d\x66\x72\x61\x6d\x65\x2f\x70\x72\x69\x6e\x74"
  "\x2d\x73\x74\x61\x63\x6b\x20\x04\xa1\x01\x05\x10\x73\x75\x62\x76"
  "\x65\x63\x74\x6f\x72\x2d\x3e\x6c\x69\x73\x74\x02\xa7\x01\x03\xa8"
  "\x01\x03\x08\x72\x65\x76\x65\x72\x73\x65\x04\x09\x66\x6f\x72\x2d"
  "\x65\x61\x63\x68\x03\x06\x77\x72\x69\x74\x65\x08\x87\x05\x1e\x81"
  "\x83\x02\x86\x05\x1c\x81\x83\x02\x85\x05\x1a\x83\x04\x84\x05\x18"
  "\x81\x83\x02\x83\x05\x16\x81\x85\x02\x82\x05\x14\x81\x83\x02\x81"
  "\x05\x12\x81\x83\x02\x80\x05\x10\x81\x83\x02\xff\x04\x0e\x81\x83"
  "\x02\xfe\x04\x0c\x81\x83\x02\xfd\x04\x0a\x81\x87\x02\xfc\x04\x08"
  "\x81\x85\x02\xfb\x04\x06\x81\x83\x02\xfa\x04\x04\x83\x04\x1d\x39"
  "\xaa\x01\x02\x61\x03\x23\x78\x11\x03\xa8\x01\x03\x04\xa5\x01\x04"
  "\x8b\x05\x0a\x81\x83\x02\x8a\x05\x08\x81\x83\x02\x89\x05\x06\x81"
  "\x83\x02\x88\x05\x04\x83\x04\x09\x15\xa5\x01\x02\x62\x02\x29\x04"
  "\x63\x61\x72\x08\x63\x6f\x64\x65\x20\x3d\x20\x9f\x01\x08\x77\x69"
  "\x74\x68\x69\x6e\x20\x03\x20\x28\x1f\x20\x69\x6e\x20\x61\x73\x73"
  "\x65\x6d\x62\x6c\x79\x2d\x6c\x61\x6e\x67\x75\x61\x67\x65\x20\x75"
  "\x74\x69\x6c\x69\x74\x79\x20\x27\x20\x69\x6e\x20\x75\x6e\x6b\x6e"
  "\x6f\x77\x6e\x20\x61\x73\x73\x65\x6d\x62\x6c\x79\x2d\x6c\x61\x6e"
  "\x67\x75\x61\x67\x65\x20\x75\x74\x69\x6c\x69\x74\x79\x20\x1b\x20"
  "\x69\x6e\x20\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65"
  "\x20\x75\x74\x69\x6c\x69\x74\x79\x20\x23\x20\x69\x6e\x20\x75\x6e"
  "\x6b\x6e\x6f\x77\x6e\x20\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63"
  "\x6f\x64\x65\x20\x75\x74\x69\x6c\x69\x74\x79\x20\x08\x14\x62\x75"
  "\x69\x6c\x74\x69\x6e\x2d\x69\x6e\x64\x65\x78\x2d\x3e\x6e\x61\x6d"
  "\x65\x14\x75\x74\x69\x6c\x69\x74\x79\x2d\x69\x6e\x64\x65\x78\x2d"
  "\x3e\x6e\x61\x6d\x65\x0f\x48\x61\x72\x64\x77\x61\x72\x65\x20\x74"
  "\x72\x61\x70\x20\x0f\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x73\x74\x61"
  "\x74\x65\x3a\x27\x20\x61\x74\x20\x61\x6e\x20\x75\x6e\x6b\x6e\x6f"
  "\x77\x6e\x20\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65"
  "\x20\x6c\x6f\x63\x61\x74\x69\x6f\x6e\x2e\x0c\x20\x61\x74\x20\x6f"
  "\x66\x66\x73\x65\x74\x20\x09\x20\x77\x69\x74\x68\x69\x6e\x20\x19"
  "\x20\x61\x74\x20\x61\x6e\x20\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x6c"
  "\x6f\x63\x61\x74\x69\x6f\x6e\x2e\x02\x15\x55\x73\x65\x72\x20\x6d"
  "\x69\x63\x72\x6f\x63\x6f\x64\x65\x20\x72\x65\x73\x65\x74\x1d\x68"
  "\x61\x72\x64\x77\x61\x72\x65\x2d\x74\x72\x61\x70\x2d\x66\x72\x61"
  "\x6d\x65\x2f\x64\x65\x73\x63\x72\x69\x62\x65\x9f\x01\x04\xa1\x01"
  "\x04\x23\x03\xa8\x01\x04\x5f\x02\xa7\x01\x03\x0a\x77\x72\x69\x74"
  "\x65\x2d\x68\x65\x78\xa8\x01\x03\x03\x27\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x64\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x2f\x66\x69"
  "\x6c\x65\x6e\x61\x6d\x65\x2d\x61\x6e\x64\x2d\x69\x6e\x64\x65\x78"
  "\x09\xaf\x05\x4a\x81\x85\x02\xae\x05\x48\x81\x85\x02\xad\x05\x46"
  "\x84\x06\xac\x05\x44\x81\x83\x02\xab\x05\x42\x81\x83\x02\xaa\x05"
  "\x40\x81\x89\x02\xa9\x05\x3e\x81\x83\x02\xa8\x05\x3c\x81\x87\x02"
  "\xa7\x05\x3a\x81\x83\x02\xa6\x05\x38\x81\x85\x02\xa5\x05\x36\x81"
  "\x89\x02\xa4\x05\x34\x81\x85\x02\xa3\x05\x32\x81\x83\x02\xa2\x05"
  "\x30\x81\x83\x02\xa1\x05\x2e\x81\x89\x02\xa0\x05\x2c\x81\x85\x02"
  "\x9f\x05\x2a\x81\x85\x02\x9e\x05\x28\x81\x85\x02\x9d\x05\x26\x81"
  "\x85\x02\x9c\x05\x24\x81\x83\x02\x9b\x05\x22\x81\x89\x02\x9a\x05"
  "\x20\x81\x8b\x02\x99\x05\x1e\x81\x89\x02\x98\x05\x1c\x81\x83\x02"
  "\x97\x05\x1a\x81\x83\x02\x96\x05\x18\x81\x83\x02\x95\x05\x16\x81"
  "\x89\x02\x94\x05\x14\x81\x89\x02\x93\x05\x12\x81\x89\x02\x92\x05"
  "\x10\x81\x89\x02\x91\x05\x0e\x81\x8b\x02\x90\x05\x0c\x81\x89\x02"
  "\x8f\x05\x0a\x81\x87\x02\x8e\x05\x08\x81\x85\x02\x8d\x05\x06\x81"
  "\x85\x02\x8c\x05\x04\x84\x06\x49\x7a\xa7\x01\x62\x5f\x5f\x13\xa7"
  "\x01\x04\xa5\x01\x04\xaa\x01\x04\xa9\x01\x04\xa6\x01\x04\xa2\x01"
  "\x04\x48\x04\x9e\x01\x04\x76\x04\x7f\x04\x50\x04\x09\x08\x0a\x9d"
  "\x01\x04\x99\x01\x04\x8a\x01\x04\x8d\x01\x04\x8b\x01\x06\x88\x01"
  "\x04\x24\x9f\x01\xa8\x01\x20\x90\x01\xa4\x01\xa3\x01\xa0\x01\x47"
  "\xa1\x01\x75\x71\x26\x1f\x68\x61\x72\x64\x77\x61\x72\x65\x2d\x74"
  "\x72\x61\x70\x2f\x65\x78\x74\x72\x61\x2d\x69\x6e\x66\x6f\x2d\x69"
  "\x6e\x64\x65\x78\x1d\x68\x61\x72\x64\x77\x61\x72\x65\x2d\x74\x72"
  "\x61\x70\x2f\x70\x63\x2d\x69\x6e\x66\x6f\x32\x2d\x69\x6e\x64\x65"
  "\x78\x1d\x68\x61\x72\x64\x77\x61\x72\x65\x2d\x74\x72\x61\x70\x2f"
  "\x70\x63\x2d\x69\x6e\x66\x6f\x31\x2d\x69\x6e\x64\x65\x78\x1a\x68"
  "\x61\x72\x64\x77\x61\x72\x65\x2d\x74\x72\x61\x70\x2f\x73\x74\x61"
  "\x74\x65\x2d\x69\x6e\x64\x65\x78\x1a\x68\x61\x72\x64\x77\x61\x72"
  "\x65\x2d\x74\x72\x61\x70\x2f\x73\x74\x61\x63\x6b\x2d\x69\x6e\x64"
  "\x65\x78\x19\x68\x61\x72\x64\x77\x61\x72\x65\x2d\x74\x72\x61\x70"
  "\x2f\x63\x6f\x64\x65\x2d\x69\x6e\x64\x65\x78\x20\x68\x61\x72\x64"
  "\x77\x61\x72\x65\x2d\x74\x72\x61\x70\x2f\x73\x69\x67\x6e\x61\x6c"
  "\x2d\x6e\x61\x6d\x65\x2d\x69\x6e\x64\x65\x78\x1b\x68\x61\x72\x64"
  "\x77\x61\x72\x65\x2d\x74\x72\x61\x70\x2f\x73\x69\x67\x6e\x61\x6c"
  "\x2d\x69\x6e\x64\x65\x78\x19\x68\x61\x72\x64\x77\x61\x72\x65\x2d"
  "\x74\x72\x61\x70\x2f\x66\x72\x61\x6d\x65\x2d\x73\x69\x7a\x65\x96"
  "\x01\x8e\x01\x61\x62\x8f\x01\x65\x58\x31\x22\x14\x69\x6e\x69\x74"
  "\x69\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x4f"
  "\x97\x01\x89\x01\x12\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65"
  "\x2d\x74\x79\x70\x65\x3f\x24\x98\x01\x1c\x73\x74\x61\x63\x6b\x2d"
  "\x66\x72\x61\x6d\x65\x2d\x74\x79\x70\x65\x2f\x70\x72\x6f\x70\x65"
  "\x72\x74\x69\x65\x73\x18\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d"
  "\x65\x2d\x74\x79\x70\x65\x2f\x70\x61\x72\x73\x65\x72\x18\x73\x74"
  "\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2d\x74\x79\x70\x65\x2f\x6c"
  "\x65\x6e\x67\x74\x68\x25\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d"
  "\x65\x2d\x74\x79\x70\x65\x2f\x68\x69\x73\x74\x6f\x72\x79\x2d\x73"
  "\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x3f\x1d\x73\x74\x61\x63\x6b"
  "\x2d\x66\x72\x61\x6d\x65\x2d\x74\x79\x70\x65\x2f\x73\x75\x62\x70"
  "\x72\x6f\x62\x6c\x65\x6d\x3f\x16\x73\x74\x61\x63\x6b\x2d\x66\x72"
  "\x61\x6d\x65\x2d\x74\x79\x70\x65\x2f\x63\x6f\x64\x65\x87\x01\x04"
  "\x86\x01\x04\x85\x01\x04\x84\x01\x04\x83\x01\x04\x82\x01\x04\x15"
  "\x72\x74\x64\x3a\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2d"
  "\x74\x79\x70\x65\xaa\x01\x11\x73\x74\x61\x63\x6b\x2d\x66\x72\x61"
  "\x6d\x65\x2d\x74\x79\x70\x65\x05\x63\x6f\x64\x65\x0c\x73\x75\x62"
  "\x70\x72\x6f\x62\x6c\x65\x6d\x3f\x14\x68\x69\x73\x74\x6f\x72\x79"
  "\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x3f\x07\x6c\x65\x6e"
  "\x67\x74\x68\x07\x70\x61\x72\x73\x65\x72\x0b\x70\x72\x6f\x70\x65"
  "\x72\x74\x69\x65\x73\xa9\x01\x04\x41\x4e\x7e\x73\x94\x01\x2f\x9b"
  "\x01\x95\x01\x92\x01\x8c\x01\x27\x45\x4c\x6f\x6c\x1a\x73\x74\x61"
  "\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2d\x3e\x63\x6f\x6e\x74\x69\x6e"
  "\x75\x61\x74\x69\x6f\x6e\x27\x73\x74\x61\x63\x6b\x2d\x6d\x61\x72"
  "\x6b\x65\x72\x2d\x66\x72\x61\x6d\x65\x2f\x72\x65\x70\x6c\x2d\x65"
  "\x76\x61\x6c\x2d\x62\x6f\x75\x6e\x64\x61\x72\x79\x3f\x20\x73\x74"
  "\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x72\x65\x70\x6c\x2d\x65"
  "\x76\x61\x6c\x2d\x62\x6f\x75\x6e\x64\x61\x72\x79\x3f\x1e\x73\x74"
  "\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x73\x70\x65\x63\x69\x61"
  "\x6c\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x3f\x1b\x25\x73\x74\x61"
  "\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x73\x74\x61\x63\x6b\x2d\x6d"
  "\x61\x72\x6b\x65\x72\x3f\x1c\x73\x74\x61\x63\x6b\x2d\x6d\x61\x72"
  "\x6b\x65\x72\x2d\x66\x72\x61\x6d\x65\x2f\x69\x6e\x73\x74\x61\x6e"
  "\x63\x65\x2d\x2c\x5d\x5e\x9a\x01\x93\x01\x16\x63\x6f\x64\x65\x2f"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x2d\x6c\x69\x6e\x6b\x69\x6e\x67"
  "\x14\x63\x6f\x64\x65\x2f\x61\x70\x70\x6c\x79\x2d\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x64\x12\x63\x6f\x64\x65\x2f\x72\x65\x73\x74\x6f\x72"
  "\x65\x2d\x72\x65\x67\x73\x17\x63\x6f\x64\x65\x2f\x69\x6e\x74\x65"
  "\x72\x72\x75\x70\x74\x2d\x72\x65\x73\x74\x61\x72\x74\x29\x63\x6f"
  "\x64\x65\x2f\x73\x70\x65\x63\x69\x61\x6c\x2d\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x64\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64"
  "\x65\x2d\x62\x6b\x70\x74\x23\x63\x6f\x64\x65\x2f\x73\x70\x65\x63"
  "\x69\x61\x6c\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2f\x73\x74\x61"
  "\x63\x6b\x2d\x6d\x61\x72\x6b\x65\x72\x2d\x63\x6f\x64\x65\x2f\x73"
  "\x70\x65\x63\x69\x61\x6c\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2f"
  "\x72\x65\x73\x74\x6f\x72\x65\x2d\x69\x6e\x74\x65\x72\x72\x75\x70"
  "\x74\x2d\x6d\x61\x73\x6b\x25\x63\x6f\x64\x65\x2f\x73\x70\x65\x63"
  "\x69\x61\x6c\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2f\x69\x6e\x74"
  "\x65\x72\x6e\x61\x6c\x2d\x61\x70\x70\x6c\x79\x7d\x29\x9c\x01\x91"
  "\x01\x5b\x56\x51\x18\x43\x1a\x11\x2e\x81\x01\x06\x80\x01\x06\x79"
  "\x04\x7c\x04\x7b\x04\x77\x04\x7a\x04\x78\x04\x74\x04\x72\x04\x4d"
  "\x04\x70\x04\x6d\x04\x2b\x04\x6b\x04\x6a\x04\x69\x04\x68\x04\x67"
  "\x04\x66\x04\x64\x04\x63\x04\x46\x08\x60\x04\x08\x49\x04\x5c\x04"
  "\x5a\x04\x59\x04\x57\x06\x55\x06\x53\x04\x52\x04\x4b\x04\x44\x04"
  "\x42\x04\x2e\x4a\x1b\x70\x61\x72\x73\x65\x72\x2d\x73\x74\x61\x74"
  "\x65\x2f\x70\x72\x65\x76\x69\x6f\x75\x73\x2d\x74\x79\x70\x65\x20"
  "\x70\x61\x72\x73\x65\x72\x2d\x73\x74\x61\x74\x65\x2f\x6e\x65\x78"
  "\x74\x2d\x63\x6f\x6e\x74\x72\x6f\x6c\x2d\x70\x6f\x69\x6e\x74\x18"
  "\x70\x61\x72\x73\x65\x72\x2d\x73\x74\x61\x74\x65\x2f\x6e\x2d\x65"
  "\x6c\x65\x6d\x65\x6e\x74\x73\x1c\x70\x61\x72\x73\x65\x72\x2d\x73"
  "\x74\x61\x74\x65\x2f\x65\x6c\x65\x6d\x65\x6e\x74\x2d\x73\x74\x72"
  "\x65\x61\x6d\x2c\x70\x61\x72\x73\x65\x72\x2d\x73\x74\x61\x74\x65"
  "\x2f\x70\x72\x65\x76\x69\x6f\x75\x73\x2d\x68\x69\x73\x74\x6f\x72"
  "\x79\x2d\x63\x6f\x6e\x74\x72\x6f\x6c\x2d\x70\x6f\x69\x6e\x74\x25"
  "\x70\x61\x72\x73\x65\x72\x2d\x73\x74\x61\x74\x65\x2f\x70\x72\x65"
  "\x76\x69\x6f\x75\x73\x2d\x68\x69\x73\x74\x6f\x72\x79\x2d\x6f\x66"
  "\x66\x73\x65\x74\x15\x70\x61\x72\x73\x65\x72\x2d\x73\x74\x61\x74"
  "\x65\x2f\x68\x69\x73\x74\x6f\x72\x79\x1c\x70\x61\x72\x73\x65\x72"
  "\x2d\x73\x74\x61\x74\x65\x2f\x69\x6e\x74\x65\x72\x72\x75\x70\x74"
  "\x2d\x6d\x61\x73\x6b\x22\x70\x61\x72\x73\x65\x72\x2d\x73\x74\x61"
  "\x74\x65\x2f\x62\x6c\x6f\x63\x6b\x2d\x74\x68\x72\x65\x61\x64\x2d"
  "\x65\x76\x65\x6e\x74\x73\x3f\x1b\x70\x61\x72\x73\x65\x72\x2d\x73"
  "\x74\x61\x74\x65\x2f\x64\x79\x6e\x61\x6d\x69\x63\x2d\x73\x74\x61"
  "\x74\x65\x0b\x40\x04\x3f\x04\x3e\x04\x3d\x04\x3c\x04\x3b\x04\x3a"
  "\x04\x39\x04\x38\x04\x37\x04\x0b\x11\x72\x74\x64\x3a\x70\x61\x72"
  "\x73\x65\x72\x2d\x73\x74\x61\x74\x65\xa8\x01\x16\x16\x0d\x70\x61"
  "\x72\x73\x65\x72\x2d\x73\x74\x61\x74\x65\x0e\x64\x79\x6e\x61\x6d"
  "\x69\x63\x2d\x73\x74\x61\x74\x65\xa7\x01\x15\x62\x6c\x6f\x63\x6b"
  "\x2d\x74\x68\x72\x65\x61\x64\x2d\x65\x76\x65\x6e\x74\x73\x3f\xa6"
  "\x01\x0f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x6d\x61\x73\x6b"
  "\xa5\x01\x08\x68\x69\x73\x74\x6f\x72\x79\xa4\x01\x18\x70\x72\x65"
  "\x76\x69\x6f\x75\x73\x2d\x68\x69\x73\x74\x6f\x72\x79\x2d\x6f\x66"
  "\x66\x73\x65\x74\xa3\x01\x1f\x70\x72\x65\x76\x69\x6f\x75\x73\x2d"
  "\x68\x69\x73\x74\x6f\x72\x79\x2d\x63\x6f\x6e\x74\x72\x6f\x6c\x2d"
  "\x70\x6f\x69\x6e\x74\xa2\x01\x0f\x65\x6c\x65\x6d\x65\x6e\x74\x2d"
  "\x73\x74\x72\x65\x61\x6d\x0b\x6e\x2d\x65\x6c\x65\x6d\x65\x6e\x74"
  "\x73\x13\x6e\x65\x78\x74\x2d\x63\x6f\x6e\x74\x72\x6f\x6c\x2d\x70"
  "\x6f\x69\x6e\x74\x0e\x70\x72\x65\x76\x69\x6f\x75\x73\x2d\x74\x79"
  "\x70\x65\xa1\x01\x0a\x14\x1b\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a"
  "\x65\x2d\x73\x70\x65\x63\x69\x61\x6c\x2d\x66\x72\x61\x6d\x65\x73"
  "\x21\x32\x1b\x22\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f"
  "\x72\x65\x73\x6f\x6c\x76\x65\x2d\x73\x74\x61\x63\x6b\x2d\x61\x64"
  "\x64\x72\x65\x73\x73\x1d\x1b\x73\x74\x61\x63\x6b\x2d\x66\x72\x61"
  "\x6d\x65\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65"
  "\x3f\x18\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x72\x65"
  "\x74\x75\x72\x6e\x2d\x63\x6f\x64\x65\x1b\x73\x74\x61\x63\x6b\x2d"
  "\x66\x72\x61\x6d\x65\x2f\x72\x65\x74\x75\x72\x6e\x2d\x61\x64\x64"
  "\x72\x65\x73\x73\x23\x13\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d"
  "\x65\x2f\x6c\x65\x6e\x67\x74\x68\x33\x35\x1e\x17\x73\x74\x61\x63"
  "\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x72\x65\x64\x75\x63\x74\x69\x6f"
  "\x6e\x73\x6e\x10\x36\x04\x34\x04\x30\x04\x2e\x04\x2a\x04\x28\x04"
  "\x25\x04\x24\x04\x21\x04\x1f\x04\x1c\x04\x19\x04\x17\x04\x15\x04"
  "\x10\x0d\x54\x17\x73\x65\x74\x2d\x73\x74\x61\x63\x6b\x2d\x66\x72"
  "\x61\x6d\x65\x2f\x25\x6e\x65\x78\x74\x21\x17\x73\x74\x61\x63\x6b"
  "\x2d\x66\x72\x61\x6d\x65\x2f\x70\x72\x6f\x70\x65\x72\x74\x69\x65"
  "\x73\x12\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x25\x6e"
  "\x65\x78\x74\x1a\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f"
  "\x70\x72\x65\x76\x69\x6f\x75\x73\x2d\x74\x79\x70\x65\x13\x73\x74"
  "\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x6f\x66\x66\x73\x65\x74"
  "\x2b\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x70\x72\x65"
  "\x76\x69\x6f\x75\x73\x2d\x68\x69\x73\x74\x6f\x72\x79\x2d\x63\x6f"
  "\x6e\x74\x72\x6f\x6c\x2d\x70\x6f\x69\x6e\x74\x24\x73\x74\x61\x63"
  "\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x70\x72\x65\x76\x69\x6f\x75\x73"
  "\x2d\x68\x69\x73\x74\x6f\x72\x79\x2d\x6f\x66\x66\x73\x65\x74\x14"
  "\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x68\x69\x73\x74"
  "\x6f\x72\x79\x1b\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f"
  "\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x6d\x61\x73\x6b\x21\x73"
  "\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x62\x6c\x6f\x63\x6b"
  "\x2d\x74\x68\x72\x65\x61\x64\x2d\x65\x76\x65\x6e\x74\x73\x3f\x1a"
  "\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x64\x79\x6e\x61"
  "\x6d\x69\x63\x2d\x73\x74\x61\x74\x65\x15\x73\x74\x61\x63\x6b\x2d"
  "\x66\x72\x61\x6d\x65\x2f\x65\x6c\x65\x6d\x65\x6e\x74\x73\x11\x73"
  "\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x74\x79\x70\x65\x0e"
  "\x12\x04\x10\x04\x0f\x04\x0e\x04\x0d\x04\x0c\x04\x0b\x04\x0a\x04"
  "\x09\x04\x04\x04\x04\x04\x0e\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73"
  "\x73\x69\x67\x6e\x6d\x65\x6e\x74\x10\x72\x74\x64\x3a\x73\x74\x61"
  "\x63\x6b\x2d\x66\x72\x61\x6d\x65\xa0\x01\x0c\x73\x74\x61\x63\x6b"
  "\x2d\x66\x72\x61\x6d\x65\x05\x74\x79\x70\x65\x09\x65\x6c\x65\x6d"
  "\x65\x6e\x74\x73\xa7\x01\xa6\x01\xa5\x01\xa4\x01\xa3\x01\xa2\x01"
  "\x07\x6f\x66\x66\x73\x65\x74\xa1\x01\x06\x25\x6e\x65\x78\x74\xa9"
  "\x01\x0c\x04\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64"
  "\x2d\x74\x79\x70\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79"
  "\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x05"
  "\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65"
  "\x04\x23\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x65"
  "\x66\x61\x75\x6c\x74\x2d\x76\x61\x6c\x75\x65\x2d\x62\x79\x2d\x69"
  "\x6e\x64\x65\x78\x05\xa0\x01\xa8\x01\xaa\x01\x04\x27\x50\x80\x80"
  "\x04\x26\x4e\x81\x81\x02\x25\x4c\x81\x81\x02\x24\x4a\x81\x8d\x02"
  "\x23\x48\x81\x85\x02\x22\x46\x81\x83\x02\x21\x44\x81\x91\x02\x20"
  "\x42\x81\x8d\x02\x1f\x40\x81\x87\x02\x1e\x3e\x81\x83\x02\x1d\x3c"
  "\x81\x85\x02\x1c\x3a\x81\x83\x02\x1b\x38\x81\x85\x02\x1a\x36\x81"
  "\x87\x02\x19\x34\x81\x83\x02\x18\x32\x81\x83\x02\x17\x30\x81\x85"
  "\x02\x16\x2e\x81\x83\x02\x15\x2c\x81\x97\x02\x14\x2a\x81\x87\x02"
  "\x13\x28\x81\x83\x02\x12\x26\x81\x85\x02\x11\x24\x81\x83\x02\x10"
  "\x22\x81\x85\x02\x0f\x20\x81\x87\x02\x0e\x1e\x81\x83\x02\x0d\x1c"
  "\x81\x83\x02\x0c\x1a\x81\x99\x02\x0b\x18\x81\x85\x02\x0a\x16\x81"
  "\x83\x02\x09\x14\x81\x9d\x02\x08\x12\x81\x99\x02\x07\x10\x81\x87"
  "\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x83\x02"
  "\x03\x08\x81\x85\x02\x02\x06\x81\x87\x02\x01\x04\x81\x83\x02\x4f"
  "\x83\x01";

SCHEME_OBJECT *
conpar_so_data_d22a03e328eb6bc4 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_conpar_so_data_d22a03e328eb6bc4 [0]))), (sizeof (prog_conpar_so_data_d22a03e328eb6bc4)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_49]));
}

DECLARE_COMPILED_DATA_NS ("conpar.so", conpar_so_data_d22a03e328eb6bc4)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("conpar.so", "fdb02c8ea7838681")
