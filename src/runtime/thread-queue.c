/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:57-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 8
#define DEBUGGING_LABEL_1_2 7
#define EXECUTE_CACHE_1_5 5
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
thread_queue_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__thread_queue_first_pair_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__thread_queue_first_pair_3)
DEFLABEL (Z__thread_queue_first_pair_0)
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
thread_queue_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__thread_queue_last_pair_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__thread_queue_last_pair_3)
DEFLABEL (Z__thread_queue_last_pair_0)
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
thread_queue_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__thread_queue_element_count_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__thread_queue_element_count_3)
DEFLABEL (Z__thread_queue_element_count_0)
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
thread_queue_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__thread_queue_max_elements_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__thread_queue_max_elements_3)
DEFLABEL (Z__thread_queue_max_elements_0)
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
thread_queue_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__thread_queue_waiting_queuers_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__thread_queue_waiting_queuers_3)
DEFLABEL (Z__thread_queue_waiting_queuers_0)
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
thread_queue_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__thread_queue_waiting_dequeuers_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__thread_queue_waiting_dequeuers_3)
DEFLABEL (Z__thread_queue_waiting_dequeuers_0)
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
#define ENVIRONMENT_LABEL_8_3 8
#define DEBUGGING_LABEL_8_2 7
#define OBJECT_8_2 6
#define OBJECT_8_1 5
#define OBJECT_8_0 4
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto set__thread_queue_first_pairB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set__thread_queue_first_pairB_3)
DEFLABEL (set__thread_queue_first_pairB_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_8_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 8
#define DEBUGGING_LABEL_9_2 7
#define OBJECT_9_2 6
#define OBJECT_9_1 5
#define OBJECT_9_0 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto set__thread_queue_last_pairB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set__thread_queue_last_pairB_3)
DEFLABEL (set__thread_queue_last_pairB_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_9_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 8
#define DEBUGGING_LABEL_10_2 7
#define OBJECT_10_2 6
#define OBJECT_10_1 5
#define OBJECT_10_0 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto set__thread_queue_element_countB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set__thread_queue_element_countB_3)
DEFLABEL (set__thread_queue_element_countB_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_10_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 8
#define DEBUGGING_LABEL_11_2 7
#define OBJECT_11_2 6
#define OBJECT_11_1 5
#define OBJECT_11_0 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto set__thread_queue_max_elementsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set__thread_queue_max_elementsB_3)
DEFLABEL (set__thread_queue_max_elementsB_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_11_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 8
#define DEBUGGING_LABEL_12_2 7
#define OBJECT_12_2 6
#define OBJECT_12_1 5
#define OBJECT_12_0 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto set__thread_queue_waiting_queuersB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set__thread_queue_waiting_queuersB_3)
DEFLABEL (set__thread_queue_waiting_queuersB_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_12_1]);
  Rsp = (& (Rsp [3]));
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
thread_queue_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set__thread_queue_waiting_dequeuersB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set__thread_queue_waiting_dequeuersB_3)
DEFLABEL (set__thread_queue_waiting_dequeuersB_0)
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
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [7]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_13_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define LABEL_14_7 9
#define ENVIRONMENT_LABEL_14_3 17
#define DEBUGGING_LABEL_14_2 16
#define OBJECT_14_3 15
#define OBJECT_14_2 14
#define OBJECT_14_1 13
#define OBJECT_14_0 12
#define FREE_REFERENCE_14_0 11
#define FREE_REFERENCES_LABEL_14_0 10
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto thread_queueP_4;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_14_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_queueP_10)
DEFLABEL (thread_queueP_4)
  INTERRUPT_CHECK (26, LABEL_14_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
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
  Rvl = (current_block [OBJECT_14_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_14_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define ENVIRONMENT_LABEL_15_3 13
#define DEBUGGING_LABEL_15_2 12
#define OBJECT_15_0 11
#define EXECUTE_CACHE_15_7 7
#define EXECUTE_CACHE_15_6 9
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto guarantee_thread_queue_1;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_thread_queue_4)
DEFLABEL (guarantee_thread_queue_1)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_15_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 11
#define DEBUGGING_LABEL_16_2 10
#define OBJECT_16_2 9
#define OBJECT_16_1 8
#define OBJECT_16_0 7
#define EXECUTE_CACHE_16_5 5
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto error_not_thread_queue_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_thread_queue_5)
DEFLABEL (error_not_thread_queue_2)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_16_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_16_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_9 7
#define LABEL_17_7 9
#define LABEL_17_11 11
#define LABEL_17_8 13
#define LABEL_17_12 15
#define LABEL_17_13 17
#define ENVIRONMENT_LABEL_17_3 30
#define DEBUGGING_LABEL_17_2 29
#define OBJECT_17_5 28
#define OBJECT_17_4 27
#define OBJECT_17_3 26
#define OBJECT_17_2 25
#define OBJECT_17_1 24
#define OBJECT_17_0 23
#define EXECUTE_CACHE_17_10 19
#define EXECUTE_CACHE_17_6 21
#define FREE_REFERENCES_LABEL_17_0 18
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_17_4);
      goto print_thread_queue_8;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_17_9);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_17_11);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_17_8);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_17_12);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_17_13);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_thread_queue_13)
DEFLABEL (print_thread_queue_8)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
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
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_18;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd20.Lng))))
    goto label_18;
  (Wrd14.Obj) = ((Wrd18.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_17)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_7);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_16;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_16;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_15)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_14;
  Rvl = (current_block [OBJECT_17_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_12]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_17_5]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_17_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_17_13);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (label_16)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_17_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Obj) = (current_block [OBJECT_17_1]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_5 3
#define LABEL_18_7 5
#define LABEL_18_4 7
#define ENVIRONMENT_LABEL_18_3 21
#define DEBUGGING_LABEL_18_2 20
#define OBJECT_18_4 19
#define OBJECT_18_3 18
#define OBJECT_18_2 17
#define OBJECT_18_1 16
#define OBJECT_18_0 15
#define EXECUTE_CACHE_18_9 9
#define EXECUTE_CACHE_18_8 11
#define EXECUTE_CACHE_18_6 13
#define FREE_REFERENCES_LABEL_18_0 8
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd26;
  machine_word Wrd25;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_18_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_18_4);
      goto make_thread_queue_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_thread_queue_7)
DEFLABEL (make_thread_queue_4)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_18_1]))
    goto label_11;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  (Wrd25.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_18_0]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_7);
  (Wrd15.Obj) = Rvl;

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_18_3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_18_4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Rsp [5]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (label_9)
  (Wrd15.Obj) = (Rsp [1]);

DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto label_8;

DEFLABEL (label_11)
  (Wrd15.Obj) = (current_block [OBJECT_18_2]);
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_7 7
#define ENVIRONMENT_LABEL_19_3 16
#define DEBUGGING_LABEL_19_2 15
#define OBJECT_19_3 14
#define OBJECT_19_2 13
#define OBJECT_19_1 12
#define OBJECT_19_0 11
#define EXECUTE_CACHE_19_6 9
#define FREE_REFERENCES_LABEL_19_0 8
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_19_4);
      goto thread_queue_emptyP_2;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_queue_emptyP_6)
DEFLABEL (thread_queue_emptyP_2)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_12;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_12;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_11)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd23.uLng) == 26)
    goto label_7;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd25.Lng) == 0)
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_19_3]);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_19_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
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
thread_queue_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_20_4);
      goto Z__emptyP_1;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__emptyP_5)
DEFLABEL (Z__emptyP_1)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_10)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd23.uLng) == 26)
    goto label_6;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_6)
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd25.Lng) == 0)
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_20_2]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_20_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_7 7
#define LABEL_21_8 9
#define TAG_21_9 3
#define LABEL_21_11 11
#define LABEL_21_12 13
#define LABEL_21_13 15
#define LABEL_21_14 17
#define LABEL_21_15 19
#define ENVIRONMENT_LABEL_21_3 36
#define DEBUGGING_LABEL_21_2 35
#define OBJECT_21_7 34
#define OBJECT_21_6 33
#define OBJECT_21_5 32
#define OBJECT_21_4 31
#define OBJECT_21_3 30
#define OBJECT_21_2 29
#define OBJECT_21_1 28
#define OBJECT_21_0 27
#define EXECUTE_CACHE_21_16 21
#define EXECUTE_CACHE_21_10 23
#define EXECUTE_CACHE_21_6 25
#define FREE_REFERENCES_LABEL_21_0 20
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd42;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd87;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd112;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd33;
  machine_word Wrd115;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_21_4);
      goto thread_queue_emptyB_8;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_21_8);
      goto lambda_17;

    case 4:
      current_block = (Rpc - LABEL_21_11);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_21_12);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_21_13);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_21_14);
      goto label_13;

    case 8:
      current_block = (Rpc - LABEL_21_15);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_queue_emptyB_16)
DEFLABEL (thread_queue_emptyB_8)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_8])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_21_7);
  Rvl = (current_block [OBJECT_21_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_21_8);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_28;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_28;
  (Wrd5.Obj) = ((Wrd15.pObj) [4]);

DEFLABEL (label_27)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_26;
  (Wrd115.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd115.Lng) == 0))
    goto label_19;

DEFLABEL (label_18)
  Rvl = (current_block [OBJECT_21_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd101.Obj) = (Rsp [0]);
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd101.Obj));
  (Wrd103.Obj) = ((Wrd102.pObj) [2]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd104.uLng) == 62))
    goto label_25;
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd99.Obj) = ((Wrd98.pObj) [0]);
  (Wrd100.Lng) = (FIXNUM_TO_LONG (Wrd99.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd100.Lng))))
    goto label_25;
  ((Wrd98.pObj) [2]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_24)
  (Wrd76.Obj) = (Rsp [0]);
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd78.Obj) = ((Wrd77.pObj) [2]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 62))
    goto label_23;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd75.Lng))))
    goto label_23;
  ((Wrd73.pObj) [3]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_22)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [2]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 62))
    goto label_21;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd50.Lng))))
    goto label_21;
  (Wrd42.Obj) = (current_block [OBJECT_21_7]);
  ((Wrd48.pObj) [4]) = (Wrd42.Obj);

DEFLABEL (label_20)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [2]);
  (Rsp [0]) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_16]));

DEFLABEL (label_21)
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd55.Obj) = ((Wrd57.pObj) [2]);
  (Wrd58.Obj) = (current_block [OBJECT_21_2]);
  (Wrd59.Obj) = (current_block [OBJECT_21_7]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_15]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_5]), 3);

DEFLABEL (label_12)
  goto label_20;

DEFLABEL (label_23)
  (Wrd81.Obj) = (Rsp [0]);
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd80.Obj) = ((Wrd82.pObj) [2]);
  (Wrd83.Obj) = (current_block [OBJECT_21_6]);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_14]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_5]), 3);

DEFLABEL (label_13)
  goto label_22;

DEFLABEL (label_25)
  (Wrd106.Obj) = (Rsp [0]);
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd106.Obj));
  (Wrd105.Obj) = ((Wrd107.pObj) [2]);
  (Wrd108.Obj) = (current_block [OBJECT_21_4]);
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_13]))));
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_5]), 3);

DEFLABEL (label_14)
  goto label_24;

DEFLABEL (label_26)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_12]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  goto label_18;

DEFLABEL (label_28)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_21_2]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_3]), 2);

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_7 5
#define LABEL_22_5 7
#define LABEL_22_9 9
#define TAG_22_10 3
#define LABEL_22_12 11
#define LABEL_22_13 13
#define LABEL_22_15 15
#define LABEL_22_18 17
#define LABEL_22_16 19
#define LABEL_22_21 21
#define LABEL_22_19 23
#define ENVIRONMENT_LABEL_22_3 46
#define DEBUGGING_LABEL_22_2 45
#define OBJECT_22_5 44
#define OBJECT_22_4 43
#define OBJECT_22_3 42
#define OBJECT_22_2 41
#define OBJECT_22_1 40
#define OBJECT_22_0 39
#define EXECUTE_CACHE_22_22 25
#define EXECUTE_CACHE_22_20 27
#define EXECUTE_CACHE_22_17 29
#define EXECUTE_CACHE_22_14 31
#define EXECUTE_CACHE_22_11 33
#define EXECUTE_CACHE_22_8 35
#define EXECUTE_CACHE_22_6 37
#define FREE_REFERENCES_LABEL_22_0 24
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_22_4);
      goto thread_queue_queueB_14;

    case 1:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_22_9);
      goto lambda_20;

    case 4:
      current_block = (Rpc - LABEL_22_12);
      goto do_loop_11;

    case 5:
      current_block = (Rpc - LABEL_22_13);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_22_15);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_22_18);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_22_16);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_22_21);
      goto label_17;

    case 10:
      current_block = (Rpc - LABEL_22_19);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_queue_queueB_19)
DEFLABEL (thread_queue_queueB_14)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_23;

DEFLABEL (label_22)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_9])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_11]));

DEFLABEL (label_23)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_22_1]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_7);
  goto label_22;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_22_9);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  goto do_loop_11;

DEFLABEL (do_loop_21)
DEFLABEL (do_loop_11)
  INTERRUPT_CHECK (26, LABEL_22_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_22_13);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_16]))));
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_22_16);
  (Wrd9.Obj) = (current_block [OBJECT_22_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [3]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_28;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd22.Lng))))
    goto label_28;
  (Wrd14.Obj) = ((Wrd20.pObj) [6]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_27)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_22]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_22_15);
  (Wrd5.Obj) = Rvl;
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_26;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd20.Lng))))
    goto label_26;
  ((Wrd18.pObj) [6]) = Rvl;

DEFLABEL (label_25)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_22_19);
  Rsp = (& (Rsp [1]));
  goto do_loop_11;

DEFLABEL (label_26)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [3]);
  (Wrd28.Obj) = (current_block [OBJECT_22_2]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_18]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 3);

DEFLABEL (label_16)
  goto label_25;

DEFLABEL (label_28)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [3]);
  (Wrd30.Obj) = (current_block [OBJECT_22_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_21]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_5]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_7 5
#define LABEL_23_5 7
#define LABEL_23_9 9
#define TAG_23_10 3
#define ENVIRONMENT_LABEL_23_3 22
#define DEBUGGING_LABEL_23_2 21
#define OBJECT_23_1 20
#define OBJECT_23_0 19
#define EXECUTE_CACHE_23_12 11
#define EXECUTE_CACHE_23_11 13
#define EXECUTE_CACHE_23_8 15
#define EXECUTE_CACHE_23_6 17
#define FREE_REFERENCES_LABEL_23_0 10
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_23_4);
      goto thread_queue_queue_no_hangB_3;

    case 1:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_23_9);
      goto lambda_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_queue_queue_no_hangB_6)
DEFLABEL (thread_queue_queue_no_hangB_3)
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
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_8)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_9])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_11]));

DEFLABEL (label_9)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_23_1]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_7);
  goto label_8;

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_23_9);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_6 7
#define LABEL_24_7 9
#define ENVIRONMENT_LABEL_24_3 17
#define DEBUGGING_LABEL_24_2 16
#define OBJECT_24_2 15
#define OBJECT_24_1 14
#define OBJECT_24_0 13
#define EXECUTE_CACHE_24_8 11
#define FREE_REFERENCES_LABEL_24_0 10
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd40;
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
      current_block = (Rpc - LABEL_24_4);
      goto Z__queue_no_hangB_4;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_24_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_24_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__queue_no_hangB_10)
DEFLABEL (Z__queue_no_hangB_4)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_18;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_18;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_17)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_12;

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (label_12)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_16;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd31.Lng))))
    goto label_16;
  (Wrd23.Obj) = ((Wrd29.pObj) [4]);

DEFLABEL (label_15)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_14;
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_14;
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if ((Wrd51.Lng) < (Wrd53.Lng))
    goto label_11;

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  goto label_11;

DEFLABEL (label_16)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_24_2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_7)
  (Wrd23.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_24_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_7 7
#define LABEL_25_9 9
#define LABEL_25_10 11
#define LABEL_25_11 13
#define LABEL_25_14 15
#define ENVIRONMENT_LABEL_25_3 30
#define DEBUGGING_LABEL_25_2 29
#define OBJECT_25_1 28
#define OBJECT_25_0 27
#define EXECUTE_CACHE_25_15 17
#define EXECUTE_CACHE_25_13 19
#define EXECUTE_CACHE_25_12 21
#define EXECUTE_CACHE_25_8 23
#define EXECUTE_CACHE_25_6 25
#define FREE_REFERENCES_LABEL_25_0 16
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_25_4);
      goto thread_queue_dequeue_no_hangB_6;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_25_9);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_25_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_25_11);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_25_14);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_queue_dequeue_no_hangB_10)
DEFLABEL (thread_queue_dequeue_no_hangB_6)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_25_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_3)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_25_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_25_11);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_12;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_12;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd15.Lng) = ((Wrd16.Lng) + (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_12;
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_11)
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_15]));

DEFLABEL (label_12)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_8)
  (Wrd12.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define TAG_26_7 2
#define LABEL_26_9 9
#define LABEL_26_10 11
#define LABEL_26_11 13
#define LABEL_26_12 15
#define LABEL_26_14 17
#define LABEL_26_15 19
#define LABEL_26_18 21
#define LABEL_26_21 23
#define LABEL_26_16 25
#define LABEL_26_23 27
#define LABEL_26_19 29
#define LABEL_26_20 31
#define LABEL_26_25 33
#define ENVIRONMENT_LABEL_26_3 56
#define DEBUGGING_LABEL_26_2 55
#define OBJECT_26_5 54
#define OBJECT_26_4 53
#define OBJECT_26_3 52
#define OBJECT_26_2 51
#define OBJECT_26_1 50
#define OBJECT_26_0 49
#define EXECUTE_CACHE_26_26 35
#define EXECUTE_CACHE_26_24 37
#define EXECUTE_CACHE_26_22 39
#define EXECUTE_CACHE_26_17 41
#define EXECUTE_CACHE_26_13 43
#define EXECUTE_CACHE_26_8 45
#define FREE_REFERENCE_26_0 48
#define FREE_REFERENCES_LABEL_26_0 34
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd9;
  machine_word Wrd31;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd26;
  machine_word Wrd13;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd44;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_26_4);
      goto thread_queue_dequeue_untilB_19;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto lambda_30;

    case 3:
      current_block = (Rpc - LABEL_26_9);
      goto loop_15;

    case 4:
      current_block = (Rpc - LABEL_26_10);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_26_11);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_26_12);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_26_14);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_26_15);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_26_18);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_26_21);
      goto label_25;

    case 11:
      current_block = (Rpc - LABEL_26_16);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_26_23);
      goto label_27;

    case 13:
      current_block = (Rpc - LABEL_26_19);
      goto continuation_12;

    case 14:
      current_block = (Rpc - LABEL_26_20);
      goto lambda_11;

    case 15:
      current_block = (Rpc - LABEL_26_25);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_queue_dequeue_untilB_29)
DEFLABEL (thread_queue_dequeue_untilB_19)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_34;
  Wrd7 = Wrd11;

DEFLABEL (label_33)
  (Rsp [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_6])));
  Rhp += 3;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd20 = Wrd15;
  ((Wrd20.pObj) [2]) = (Wrd7.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  ((Wrd20.pObj) [4]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_5])), (Wrd8.pObj));

DEFLABEL (label_21)
  (Wrd7.Obj) = Rvl;
  goto label_33;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_26_6);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  goto loop_15;

DEFLABEL (loop_31)
DEFLABEL (loop_15)
  INTERRUPT_CHECK (26, LABEL_26_9);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_48;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_48;
  (Wrd5.Obj) = ((Wrd15.pObj) [4]);

DEFLABEL (label_47)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_46;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd44.Lng) == 0)
    goto label_36;

DEFLABEL (label_35)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = ((Wrd36.pObj) [3]);
  (Rsp [1]) = (Wrd38.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_36)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_12]))));
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_26_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_45;
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_45;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd30.Lng) > (Wrd32.Lng))
    goto label_38;

DEFLABEL (label_37)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_15]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_16]))));
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_26_16);
  (Wrd9.Obj) = (current_block [OBJECT_26_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [3]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_44;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd22.Lng))))
    goto label_44;
  (Wrd14.Obj) = ((Wrd20.pObj) [7]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_43)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_24]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_26_15);
  (Wrd5.Obj) = Rvl;
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [3]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_42;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd43.Lng))))
    goto label_42;
  ((Wrd41.pObj) [7]) = Rvl;

DEFLABEL (label_41)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_40;
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_40;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Lng) = ((Wrd28.Lng) - (Wrd30.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_40;
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_39)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_22]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_26_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_26]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_26_25);
  Rsp = (& (Rsp [1]));
  goto loop_15;

DEFLABEL (label_40)
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [4]);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_21]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd48.Obj) = ((Wrd50.pObj) [3]);
  (Wrd51.Obj) = (current_block [OBJECT_26_2]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_18]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_3]), 3);

DEFLABEL (label_26)
  goto label_41;

DEFLABEL (label_44)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [3]);
  (Wrd30.Obj) = (current_block [OBJECT_26_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_23]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_45)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [4]);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_14]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_38;

DEFLABEL (label_46)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_11]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  goto label_36;

DEFLABEL (label_48)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [3]);
  (Wrd25.Obj) = (current_block [OBJECT_26_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_22)
  (Wrd5.Obj) = Rvl;
  goto label_47;

DEFLABEL (lambda_32)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_26_20);
  Rvl = (current_block [OBJECT_26_5]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define TAG_27_6 1
#define LABEL_27_8 7
#define LABEL_27_9 9
#define LABEL_27_10 11
#define LABEL_27_11 13
#define LABEL_27_13 15
#define LABEL_27_14 17
#define LABEL_27_17 19
#define LABEL_27_20 21
#define LABEL_27_15 23
#define LABEL_27_22 25
#define LABEL_27_18 27
#define LABEL_27_19 29
#define LABEL_27_24 31
#define ENVIRONMENT_LABEL_27_3 52
#define DEBUGGING_LABEL_27_2 51
#define OBJECT_27_5 50
#define OBJECT_27_4 49
#define OBJECT_27_3 48
#define OBJECT_27_2 47
#define OBJECT_27_1 46
#define OBJECT_27_0 45
#define EXECUTE_CACHE_27_25 33
#define EXECUTE_CACHE_27_23 35
#define EXECUTE_CACHE_27_21 37
#define EXECUTE_CACHE_27_16 39
#define EXECUTE_CACHE_27_12 41
#define EXECUTE_CACHE_27_7 43
#define FREE_REFERENCES_LABEL_27_0 32
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd44;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_27_4);
      goto when_non_empty_before_18;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto lambda_28;

    case 2:
      current_block = (Rpc - LABEL_27_8);
      goto loop_15;

    case 3:
      current_block = (Rpc - LABEL_27_9);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_27_10);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_27_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_27_13);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_27_14);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_27_17);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_27_20);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_27_15);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_27_22);
      goto label_25;

    case 12:
      current_block = (Rpc - LABEL_27_18);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_27_19);
      goto lambda_11;

    case 14:
      current_block = (Rpc - LABEL_27_24);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (when_non_empty_before_27)
DEFLABEL (when_non_empty_before_18)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_5])));
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
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_27_5);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  goto loop_15;

DEFLABEL (loop_29)
DEFLABEL (loop_15)
  INTERRUPT_CHECK (26, LABEL_27_8);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_44;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_44;
  (Wrd5.Obj) = ((Wrd15.pObj) [4]);

DEFLABEL (label_43)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_42;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd44.Lng) == 0)
    goto label_32;

DEFLABEL (label_31)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = ((Wrd36.pObj) [3]);
  (Rsp [1]) = (Wrd38.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_32)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_11]))));
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_27_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_41;
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_41;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd30.Lng) > (Wrd32.Lng))
    goto label_34;

DEFLABEL (label_33)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_15]))));
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_27_15);
  (Wrd9.Obj) = (current_block [OBJECT_27_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [3]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_40;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd22.Lng))))
    goto label_40;
  (Wrd14.Obj) = ((Wrd20.pObj) [7]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_39)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_27_14);
  (Wrd5.Obj) = Rvl;
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [3]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_38;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd43.Lng))))
    goto label_38;
  ((Wrd41.pObj) [7]) = Rvl;

DEFLABEL (label_37)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_18]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_36;
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_36;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Lng) = ((Wrd28.Lng) - (Wrd30.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_36;
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_21]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_27_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_25]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_27_24);
  Rsp = (& (Rsp [1]));
  goto loop_15;

DEFLABEL (label_36)
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [4]);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_20]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd48.Obj) = ((Wrd50.pObj) [3]);
  (Wrd51.Obj) = (current_block [OBJECT_27_2]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_17]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 3);

DEFLABEL (label_24)
  goto label_37;

DEFLABEL (label_40)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [3]);
  (Wrd30.Obj) = (current_block [OBJECT_27_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_22]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [4]);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  goto label_34;

DEFLABEL (label_42)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_10]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  goto label_32;

DEFLABEL (label_44)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [3]);
  (Wrd25.Obj) = (current_block [OBJECT_27_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_43;

DEFLABEL (lambda_30)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_27_19);
  Rvl = (current_block [OBJECT_27_5]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_7 7
#define TAG_28_8 2
#define LABEL_28_10 9
#define LABEL_28_11 11
#define LABEL_28_12 13
#define LABEL_28_13 15
#define LABEL_28_15 17
#define LABEL_28_18 19
#define LABEL_28_16 21
#define LABEL_28_21 23
#define LABEL_28_19 25
#define ENVIRONMENT_LABEL_28_3 46
#define DEBUGGING_LABEL_28_2 45
#define OBJECT_28_5 44
#define OBJECT_28_4 43
#define OBJECT_28_3 42
#define OBJECT_28_2 41
#define OBJECT_28_1 40
#define OBJECT_28_0 39
#define EXECUTE_CACHE_28_22 27
#define EXECUTE_CACHE_28_20 29
#define EXECUTE_CACHE_28_17 31
#define EXECUTE_CACHE_28_14 33
#define EXECUTE_CACHE_28_9 35
#define EXECUTE_CACHE_28_6 37
#define FREE_REFERENCES_LABEL_28_0 26
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd53;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_28_4);
      goto thread_queue_dequeueB_15;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_28_7);
      goto lambda_23;

    case 3:
      current_block = (Rpc - LABEL_28_10);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_28_11);
      goto do_loop_12;

    case 5:
      current_block = (Rpc - LABEL_28_12);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_28_13);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_28_15);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_28_18);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_28_16);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_28_21);
      goto label_20;

    case 11:
      current_block = (Rpc - LABEL_28_19);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_queue_dequeueB_22)
DEFLABEL (thread_queue_dequeueB_15)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_7])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_9]));

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_28_7);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  goto do_loop_12;

DEFLABEL (do_loop_24)
DEFLABEL (do_loop_12)
  INTERRUPT_CHECK (26, LABEL_28_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_35;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd20.Lng))))
    goto label_35;
  (Wrd8.Obj) = ((Wrd18.pObj) [4]);

DEFLABEL (label_34)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_33;
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if ((Wrd53.Lng) == 0)
    goto label_32;

DEFLABEL (label_31)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_28_10);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_30)
  (Wrd43.Obj) = (Rsp [0]);
  if ((Wrd43.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;
  Rvl = (Wrd43.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_15]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_16]))));
  (* (--Rsp)) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_28_16);
  (Wrd9.Obj) = (current_block [OBJECT_28_5]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_29;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd22.Lng))))
    goto label_29;
  (Wrd14.Obj) = ((Wrd20.pObj) [7]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_22]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_28_15);
  (Wrd5.Obj) = Rvl;
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_27;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd20.Lng))))
    goto label_27;
  ((Wrd18.pObj) [7]) = Rvl;

DEFLABEL (label_26)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_20]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_28_19);
  Rsp = (& (Rsp [1]));
  goto do_loop_12;

DEFLABEL (label_27)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [2]);
  (Wrd28.Obj) = (current_block [OBJECT_28_3]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_18]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_4]), 3);

DEFLABEL (label_19)
  goto label_26;

DEFLABEL (label_29)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [2]);
  (Wrd30.Obj) = (current_block [OBJECT_28_3]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_21]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_32)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_30;

DEFLABEL (label_33)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_13]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  goto label_32;

DEFLABEL (label_35)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [2]);
  (Wrd28.Obj) = (current_block [OBJECT_28_1]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_12]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 2);

DEFLABEL (label_17)
  (Wrd8.Obj) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_7 7
#define LABEL_29_9 9
#define LABEL_29_10 11
#define LABEL_29_11 13
#define LABEL_29_14 15
#define ENVIRONMENT_LABEL_29_3 30
#define DEBUGGING_LABEL_29_2 29
#define OBJECT_29_1 28
#define OBJECT_29_0 27
#define EXECUTE_CACHE_29_15 17
#define EXECUTE_CACHE_29_13 19
#define EXECUTE_CACHE_29_12 21
#define EXECUTE_CACHE_29_8 23
#define EXECUTE_CACHE_29_6 25
#define FREE_REFERENCES_LABEL_29_0 16
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_29_4);
      goto thread_queue_peek_no_hang_6;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_29_9);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_29_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_29_11);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_29_14);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_queue_peek_no_hang_10)
DEFLABEL (thread_queue_peek_no_hang_6)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_29_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_3)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_29_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_29_11);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_12;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_12;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd15.Lng) = ((Wrd16.Lng) + (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_12;
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_11)
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_15]));

DEFLABEL (label_12)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_8)
  (Wrd12.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_6 7
#define TAG_30_7 2
#define LABEL_30_9 9
#define LABEL_30_10 11
#define LABEL_30_11 13
#define LABEL_30_12 15
#define LABEL_30_14 17
#define LABEL_30_15 19
#define LABEL_30_18 21
#define LABEL_30_21 23
#define LABEL_30_16 25
#define LABEL_30_23 27
#define LABEL_30_19 29
#define LABEL_30_20 31
#define LABEL_30_25 33
#define ENVIRONMENT_LABEL_30_3 56
#define DEBUGGING_LABEL_30_2 55
#define OBJECT_30_5 54
#define OBJECT_30_4 53
#define OBJECT_30_3 52
#define OBJECT_30_2 51
#define OBJECT_30_1 50
#define OBJECT_30_0 49
#define EXECUTE_CACHE_30_26 35
#define EXECUTE_CACHE_30_24 37
#define EXECUTE_CACHE_30_22 39
#define EXECUTE_CACHE_30_17 41
#define EXECUTE_CACHE_30_13 43
#define EXECUTE_CACHE_30_8 45
#define FREE_REFERENCE_30_0 48
#define FREE_REFERENCES_LABEL_30_0 34
#define NUMBER_OF_LINKER_SECTIONS_30_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd9;
  machine_word Wrd31;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd26;
  machine_word Wrd13;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd44;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_30_4);
      goto thread_queue_peek_until_19;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_30_6);
      goto lambda_30;

    case 3:
      current_block = (Rpc - LABEL_30_9);
      goto loop_15;

    case 4:
      current_block = (Rpc - LABEL_30_10);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_30_11);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_30_12);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_30_14);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_30_15);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_30_18);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_30_21);
      goto label_25;

    case 11:
      current_block = (Rpc - LABEL_30_16);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_30_23);
      goto label_27;

    case 13:
      current_block = (Rpc - LABEL_30_19);
      goto continuation_12;

    case 14:
      current_block = (Rpc - LABEL_30_20);
      goto lambda_11;

    case 15:
      current_block = (Rpc - LABEL_30_25);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_queue_peek_until_29)
DEFLABEL (thread_queue_peek_until_19)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_34;
  Wrd7 = Wrd11;

DEFLABEL (label_33)
  (Rsp [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_6])));
  Rhp += 3;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd20 = Wrd15;
  ((Wrd20.pObj) [2]) = (Wrd7.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  ((Wrd20.pObj) [4]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_8]));

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_5])), (Wrd8.pObj));

DEFLABEL (label_21)
  (Wrd7.Obj) = Rvl;
  goto label_33;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_30_6);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  goto loop_15;

DEFLABEL (loop_31)
DEFLABEL (loop_15)
  INTERRUPT_CHECK (26, LABEL_30_9);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_48;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_48;
  (Wrd5.Obj) = ((Wrd15.pObj) [4]);

DEFLABEL (label_47)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_46;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd44.Lng) == 0)
    goto label_36;

DEFLABEL (label_35)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = ((Wrd36.pObj) [3]);
  (Rsp [1]) = (Wrd38.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_36)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_12]))));
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_30_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_45;
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_45;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd30.Lng) > (Wrd32.Lng))
    goto label_38;

DEFLABEL (label_37)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_15]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_16]))));
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_30_16);
  (Wrd9.Obj) = (current_block [OBJECT_30_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [3]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_44;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd22.Lng))))
    goto label_44;
  (Wrd14.Obj) = ((Wrd20.pObj) [7]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_43)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_24]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_30_15);
  (Wrd5.Obj) = Rvl;
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [3]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_42;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd43.Lng))))
    goto label_42;
  ((Wrd41.pObj) [7]) = Rvl;

DEFLABEL (label_41)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_40;
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_40;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Lng) = ((Wrd28.Lng) - (Wrd30.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_40;
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_39)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_22]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_30_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_26]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_30_25);
  Rsp = (& (Rsp [1]));
  goto loop_15;

DEFLABEL (label_40)
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [4]);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_21]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd48.Obj) = ((Wrd50.pObj) [3]);
  (Wrd51.Obj) = (current_block [OBJECT_30_2]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_18]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_3]), 3);

DEFLABEL (label_26)
  goto label_41;

DEFLABEL (label_44)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [3]);
  (Wrd30.Obj) = (current_block [OBJECT_30_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_23]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_45)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [4]);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_14]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_38;

DEFLABEL (label_46)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  goto label_36;

DEFLABEL (label_48)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [3]);
  (Wrd25.Obj) = (current_block [OBJECT_30_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_22)
  (Wrd5.Obj) = Rvl;
  goto label_47;

DEFLABEL (lambda_32)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_30_20);
  Rvl = (current_block [OBJECT_30_5]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_7 7
#define TAG_31_8 2
#define LABEL_31_10 9
#define LABEL_31_11 11
#define LABEL_31_12 13
#define LABEL_31_13 15
#define LABEL_31_14 17
#define LABEL_31_15 19
#define LABEL_31_16 21
#define LABEL_31_19 23
#define LABEL_31_17 25
#define LABEL_31_22 27
#define LABEL_31_20 29
#define ENVIRONMENT_LABEL_31_3 50
#define DEBUGGING_LABEL_31_2 49
#define OBJECT_31_7 48
#define OBJECT_31_6 47
#define OBJECT_31_5 46
#define OBJECT_31_4 45
#define OBJECT_31_3 44
#define OBJECT_31_2 43
#define OBJECT_31_1 42
#define OBJECT_31_0 41
#define EXECUTE_CACHE_31_23 31
#define EXECUTE_CACHE_31_21 33
#define EXECUTE_CACHE_31_18 35
#define EXECUTE_CACHE_31_9 37
#define EXECUTE_CACHE_31_6 39
#define FREE_REFERENCES_LABEL_31_0 30
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd64;
  machine_word Wrd65;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd38;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd36;
  machine_word Wrd82;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_31_4);
      goto thread_queue_peek_16;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_31_7);
      goto lambda_26;

    case 3:
      current_block = (Rpc - LABEL_31_10);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_31_11);
      goto do_loop_13;

    case 5:
      current_block = (Rpc - LABEL_31_12);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_31_13);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_31_14);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_31_15);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_31_16);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_31_19);
      goto label_22;

    case 11:
      current_block = (Rpc - LABEL_31_17);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_31_22);
      goto label_23;

    case 13:
      current_block = (Rpc - LABEL_31_20);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_queue_peek_25)
DEFLABEL (thread_queue_peek_16)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_7])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_9]));

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_31_7);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  goto do_loop_13;

DEFLABEL (do_loop_27)
DEFLABEL (do_loop_13)
  INTERRUPT_CHECK (26, LABEL_31_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_42;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd20.Lng))))
    goto label_42;
  (Wrd8.Obj) = ((Wrd18.pObj) [4]);

DEFLABEL (label_41)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_40;
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if ((Wrd82.Lng) == 0)
    goto label_39;

DEFLABEL (label_38)
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [2]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 62))
    goto label_37;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd50.Lng))))
    goto label_37;
  (Wrd38.Obj) = ((Wrd48.pObj) [2]);

DEFLABEL (label_36)
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd65.uLng) == 1))
    goto label_35;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd63.Obj) = ((Wrd64.pObj) [0]);

DEFLABEL (label_34)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd63.Obj);

DEFLABEL (label_33)
  (Wrd70.Obj) = (Rsp [0]);
  if ((Wrd70.Obj) == ((SCHEME_OBJECT) 0))
    goto label_28;
  Rvl = (Wrd70.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_16]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_17]))));
  (* (--Rsp)) = (Wrd79.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_18]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_31_17);
  (Wrd9.Obj) = (current_block [OBJECT_31_7]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_32;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd22.Lng))))
    goto label_32;
  (Wrd14.Obj) = ((Wrd20.pObj) [7]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_23]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_31_16);
  (Wrd5.Obj) = Rvl;
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_30;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd20.Lng))))
    goto label_30;
  ((Wrd18.pObj) [7]) = Rvl;

DEFLABEL (label_29)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_20]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_21]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_31_20);
  Rsp = (& (Rsp [1]));
  goto do_loop_13;

DEFLABEL (label_30)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [2]);
  (Wrd28.Obj) = (current_block [OBJECT_31_5]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_19]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_6]), 3);

DEFLABEL (label_22)
  goto label_29;

DEFLABEL (label_32)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [2]);
  (Wrd30.Obj) = (current_block [OBJECT_31_5]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_22]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_35)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_15]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 1);

DEFLABEL (label_21)
  (Wrd63.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd55.Obj) = ((Wrd57.pObj) [2]);
  (Wrd58.Obj) = (current_block [OBJECT_31_3]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_14]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 2);

DEFLABEL (label_20)
  (Wrd38.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_33;

DEFLABEL (label_40)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_13]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  goto label_39;

DEFLABEL (label_42)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [2]);
  (Wrd28.Obj) = (current_block [OBJECT_31_1]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_12]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 2);

DEFLABEL (label_18)
  (Wrd8.Obj) = Rvl;
  goto label_41;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_31_10);
  (* (--Rsp)) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define ENVIRONMENT_LABEL_32_3 10
#define DEBUGGING_LABEL_32_2 9
#define OBJECT_32_2 8
#define OBJECT_32_1 7
#define OBJECT_32_0 6
#define FREE_REFERENCES_LABEL_32_0 6
#define NUMBER_OF_LINKER_SECTIONS_32_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_32_4);
      goto Z__peek_1;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__peek_5)
DEFLABEL (Z__peek_1)
  INTERRUPT_CHECK (26, LABEL_32_4);
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
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_32_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_5 3
#define LABEL_33_4 5
#define LABEL_33_6 7
#define LABEL_33_7 9
#define LABEL_33_8 11
#define LABEL_33_9 13
#define LABEL_33_10 15
#define LABEL_33_11 17
#define LABEL_33_12 19
#define LABEL_33_13 21
#define ENVIRONMENT_LABEL_33_3 33
#define DEBUGGING_LABEL_33_2 32
#define OBJECT_33_6 31
#define OBJECT_33_5 30
#define OBJECT_33_4 29
#define OBJECT_33_3 28
#define OBJECT_33_2 27
#define OBJECT_33_1 26
#define OBJECT_33_0 25
#define EXECUTE_CACHE_33_14 23
#define FREE_REFERENCES_LABEL_33_0 22
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd81;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd61;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd38;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd84;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd92;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd33;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd124;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd110;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd134;
  machine_word Wrd131;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd129;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_33_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_33_4);
      goto Z__queueB_11;

    case 2:
      current_block = (Rpc - LABEL_33_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_33_7);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_33_8);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_33_9);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_33_10);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_33_11);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_33_12);
      goto label_16;

    case 9:
      current_block = (Rpc - LABEL_33_13);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__queueB_21)
DEFLABEL (Z__queueB_11)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.Obj) = (current_block [OBJECT_33_0]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_39;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd21.Lng))))
    goto label_39;
  (Wrd15.Obj) = ((Wrd19.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_38)
  (Wrd29.Obj) = (Rsp [0]);
  if ((Wrd29.Obj) == ((SCHEME_OBJECT) 0))
    goto label_36;
  (Wrd129.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd129.uLng) == 1))
    goto label_37;
  (Wrd126.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd127.Obj) = (Rsp [1]);
  ((Wrd126.pObj) [1]) = (Wrd127.Obj);

DEFLABEL (label_36)
  (Wrd117.Obj) = (Rsp [3]);
  (Wrd118.uLng) = (OBJECT_TYPE (Wrd117.Obj));
  if (! ((Wrd118.uLng) == 62))
    goto label_35;
  (Wrd114.pObj) = (OBJECT_ADDRESS (Wrd117.Obj));
  (Wrd115.Obj) = ((Wrd114.pObj) [0]);
  (Wrd116.Lng) = (FIXNUM_TO_LONG (Wrd115.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd116.Lng))))
    goto label_35;
  (Wrd110.Obj) = (Rsp [1]);
  ((Wrd114.pObj) [3]) = (Wrd110.Obj);

DEFLABEL (label_34)
  (Wrd100.Obj) = (Rsp [3]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd101.uLng) == 62))
    goto label_33;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd98.Obj) = ((Wrd97.pObj) [0]);
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd99.Lng))))
    goto label_33;
  (Wrd33.Obj) = ((Wrd97.pObj) [2]);
  if ((Wrd33.Obj) == ((SCHEME_OBJECT) 0))
    goto label_30;

DEFLABEL (label_29)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_28)
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 62))
    goto label_27;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd46.Lng))))
    goto label_27;
  (Wrd38.Obj) = ((Wrd44.pObj) [4]);

DEFLABEL (label_26)
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd59.uLng) == 26))
    goto label_25;
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd60.Lng) = ((Wrd61.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd60.Lng)))
    goto label_25;
  (Wrd58.Obj) = (LONG_TO_FIXNUM (Wrd60.Lng));

DEFLABEL (label_24)
  (Wrd74.Obj) = (Rsp [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 62))
    goto label_23;
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd72.Obj) = ((Wrd71.pObj) [0]);
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd72.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd73.Lng))))
    goto label_23;
  ((Wrd71.pObj) [4]) = (Wrd58.Obj);

DEFLABEL (label_22)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_13]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd65.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd65.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_14]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_33_13);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd76.Obj) = (Rsp [0]);
  (Wrd77.Obj) = (current_block [OBJECT_33_6]);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_12]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_4]), 3);

DEFLABEL (label_16)
  goto label_22;

DEFLABEL (label_25)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_15)
  (Wrd58.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.Obj) = (current_block [OBJECT_33_6]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_10]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 2);

DEFLABEL (label_14)
  (Wrd38.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_30)
  (Wrd35.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_33_5]);
  (Rsp [1]) = (Wrd36.Obj);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd92.uLng) == 62)
    goto label_32;

DEFLABEL (label_31)
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_4]), 3);

DEFLABEL (label_32)
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (Wrd90.Lng) = (FIXNUM_TO_LONG (Wrd89.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd90.Lng))))
    goto label_31;
  (Wrd84.Obj) = (Rsp [2]);
  ((Wrd88.pObj) [2]) = (Wrd84.Obj);
  Rsp = (& (Rsp [4]));
  goto label_28;

DEFLABEL (label_33)
  (Wrd102.Obj) = (Rsp [3]);
  (Wrd103.Obj) = (current_block [OBJECT_33_5]);
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_9]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 2);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  goto label_29;

DEFLABEL (label_35)
  (Wrd119.Obj) = (Rsp [3]);
  (Wrd120.Obj) = (current_block [OBJECT_33_1]);
  (Wrd121.Obj) = (Rsp [1]);
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_8]))));
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd119.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_4]), 3);

DEFLABEL (label_18)
  goto label_34;

DEFLABEL (label_37)
  (Wrd131.Obj) = (Rsp [1]);
  (Wrd134.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd134.Obj);
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_3]), 2);

DEFLABEL (label_19)
  goto label_36;

DEFLABEL (label_39)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (current_block [OBJECT_33_1]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_6]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_33_5);
  goto label_28;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_6 7
#define LABEL_34_7 9
#define LABEL_34_8 11
#define LABEL_34_9 13
#define LABEL_34_10 15
#define LABEL_34_11 17
#define LABEL_34_12 19
#define LABEL_34_13 21
#define LABEL_34_14 23
#define LABEL_34_15 25
#define ENVIRONMENT_LABEL_34_3 37
#define DEBUGGING_LABEL_34_2 36
#define OBJECT_34_6 35
#define OBJECT_34_5 34
#define OBJECT_34_4 33
#define OBJECT_34_3 32
#define OBJECT_34_2 31
#define OBJECT_34_1 30
#define OBJECT_34_0 29
#define EXECUTE_CACHE_34_16 27
#define FREE_REFERENCES_LABEL_34_0 26
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd99;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd75;
  machine_word Wrd76;
  machine_word Wrd78;
  machine_word Wrd79;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd56;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd115;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd132;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd149;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd143;
  machine_word Wrd142;
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
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_34_4);
      goto Z__dequeueB_13;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_34_6);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_34_7);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_34_8);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_34_9);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_34_10);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_34_11);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_34_12);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_34_13);
      goto label_20;

    case 10:
      current_block = (Rpc - LABEL_34_14);
      goto label_21;

    case 11:
      current_block = (Rpc - LABEL_34_15);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__dequeueB_26)
DEFLABEL (Z__dequeueB_13)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_46;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_46;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_45)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_44;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_43)
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_42;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd38.Lng))))
    goto label_42;
  (Wrd30.Obj) = ((Wrd36.pObj) [3]);

DEFLABEL (label_41)
  (Wrd46.Obj) = (Rsp [1]);
  if ((Wrd46.Obj) == (Wrd30.Obj))
    goto label_37;
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_36;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_35)
  (Wrd108.Obj) = (Rsp [2]);
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if (! ((Wrd109.uLng) == 62))
    goto label_34;
  (Wrd105.pObj) = (OBJECT_ADDRESS (Wrd108.Obj));
  (Wrd106.Obj) = ((Wrd105.pObj) [0]);
  (Wrd107.Lng) = (FIXNUM_TO_LONG (Wrd106.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd107.Lng))))
    goto label_34;
  ((Wrd105.pObj) [2]) = (Wrd47.Obj);

DEFLABEL (label_33)
  (Wrd65.Obj) = (Rsp [2]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 62))
    goto label_32;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd64.Lng))))
    goto label_32;
  (Wrd56.Obj) = ((Wrd62.pObj) [4]);

DEFLABEL (label_31)
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd77.uLng) == 26))
    goto label_30;
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  (Wrd78.Lng) = ((Wrd79.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd78.Lng)))
    goto label_30;
  (Wrd76.Obj) = (LONG_TO_FIXNUM (Wrd78.Lng));

DEFLABEL (label_29)
  (Wrd92.Obj) = (Rsp [2]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd93.uLng) == 62))
    goto label_28;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd90.Obj) = ((Wrd89.pObj) [0]);
  (Wrd91.Lng) = (FIXNUM_TO_LONG (Wrd90.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd91.Lng))))
    goto label_28;
  ((Wrd89.pObj) [4]) = (Wrd76.Obj);

DEFLABEL (label_27)
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_15]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (Wrd83.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd83.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_34_15);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd94.Obj) = (Rsp [2]);
  (Wrd95.Obj) = (current_block [OBJECT_34_6]);
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_14]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_4]), 3);

DEFLABEL (label_21)
  goto label_27;

DEFLABEL (label_30)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_13]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_20)
  (Wrd76.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd67.Obj) = (Rsp [2]);
  (Wrd68.Obj) = (current_block [OBJECT_34_6]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_12]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_19)
  (Wrd56.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd110.Obj) = (Rsp [2]);
  (Wrd111.Obj) = (current_block [OBJECT_34_0]);
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_11]))));
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_4]), 3);

DEFLABEL (label_22)
  goto label_33;

DEFLABEL (label_36)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_10]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_5]), 1);

DEFLABEL (label_18)
  (Wrd47.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Wrd142.Obj) = (Rsp [2]);
  (Wrd143.uLng) = (OBJECT_TYPE (Wrd142.Obj));
  if (! ((Wrd143.uLng) == 62))
    goto label_40;
  (Wrd139.pObj) = (OBJECT_ADDRESS (Wrd142.Obj));
  (Wrd140.Obj) = ((Wrd139.pObj) [0]);
  (Wrd141.Lng) = (FIXNUM_TO_LONG (Wrd140.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd141.Lng))))
    goto label_40;
  ((Wrd139.pObj) [2]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_39)
  (Wrd125.Obj) = (Rsp [2]);
  (Wrd126.uLng) = (OBJECT_TYPE (Wrd125.Obj));
  if (! ((Wrd126.uLng) == 62))
    goto label_38;
  (Wrd122.pObj) = (OBJECT_ADDRESS (Wrd125.Obj));
  (Wrd123.Obj) = ((Wrd122.pObj) [0]);
  (Wrd124.Lng) = (FIXNUM_TO_LONG (Wrd123.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd124.Lng))))
    goto label_38;
  ((Wrd122.pObj) [3]) = ((SCHEME_OBJECT) 0);
  goto label_33;

DEFLABEL (label_38)
  (Wrd127.Obj) = (Rsp [2]);
  (Wrd128.Obj) = (current_block [OBJECT_34_3]);
  (Wrd132.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd132.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_4]), 3);

DEFLABEL (label_23)
  goto label_33;

DEFLABEL (label_40)
  (Wrd144.Obj) = (Rsp [2]);
  (Wrd145.Obj) = (current_block [OBJECT_34_0]);
  (Wrd149.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_8]))));
  (* (--Rsp)) = (Wrd149.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd144.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_4]), 3);

DEFLABEL (label_24)
  goto label_39;

DEFLABEL (label_42)
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.Obj) = (current_block [OBJECT_34_3]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_17)
  (Wrd30.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_34_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_45;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_6 7
#define LABEL_35_9 9
#define LABEL_35_7 11
#define LABEL_35_11 13
#define LABEL_35_8 15
#define ENVIRONMENT_LABEL_35_3 27
#define DEBUGGING_LABEL_35_2 26
#define OBJECT_35_6 25
#define OBJECT_35_5 24
#define OBJECT_35_4 23
#define OBJECT_35_3 22
#define OBJECT_35_2 21
#define OBJECT_35_1 20
#define OBJECT_35_0 19
#define EXECUTE_CACHE_35_10 17
#define FREE_REFERENCES_LABEL_35_0 16
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_35_4);
      goto Z__resume_queuers_10;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_35_6);
      goto do_loop_8;

    case 3:
      current_block = (Rpc - LABEL_35_9);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_35_7);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_35_11);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_35_8);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__resume_queuers_16)
DEFLABEL (Z__resume_queuers_10)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_20;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_20;
  (Wrd7.Obj) = ((Wrd11.pObj) [6]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_19)
  goto do_loop_8;

DEFLABEL (label_20)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_35_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (do_loop_17)
DEFLABEL (do_loop_8)
  INTERRUPT_CHECK (26, LABEL_35_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_35_2]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_25;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_24;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_23)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_35_7);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_22;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_21)
  (Rsp [0]) = (Wrd5.Obj);
  goto do_loop_8;

DEFLABEL (label_22)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_6]), 1);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_5]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_25)
  Rsp = (& (Rsp [1]));
  (Wrd22.Obj) = (current_block [OBJECT_35_0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd37.uLng) == 62)
    goto label_27;

DEFLABEL (label_26)
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_4]), 3);

DEFLABEL (label_27)
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd35.Lng))))
    goto label_26;
  ((Wrd33.pObj) [6]) = (Wrd6.Obj);
  Rvl = (current_block [OBJECT_35_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_18)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_35_8);
  Rvl = (current_block [OBJECT_35_3]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_6 7
#define LABEL_36_9 9
#define LABEL_36_7 11
#define LABEL_36_11 13
#define LABEL_36_8 15
#define ENVIRONMENT_LABEL_36_3 27
#define DEBUGGING_LABEL_36_2 26
#define OBJECT_36_6 25
#define OBJECT_36_5 24
#define OBJECT_36_4 23
#define OBJECT_36_3 22
#define OBJECT_36_2 21
#define OBJECT_36_1 20
#define OBJECT_36_0 19
#define EXECUTE_CACHE_36_10 17
#define FREE_REFERENCES_LABEL_36_0 16
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_36_4);
      goto Z__resume_dequeuers_10;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_36_6);
      goto do_loop_8;

    case 3:
      current_block = (Rpc - LABEL_36_9);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_36_7);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_36_11);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_36_8);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__resume_dequeuers_16)
DEFLABEL (Z__resume_dequeuers_10)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_20;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_20;
  (Wrd7.Obj) = ((Wrd11.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_19)
  goto do_loop_8;

DEFLABEL (label_20)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_36_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (do_loop_17)
DEFLABEL (do_loop_8)
  INTERRUPT_CHECK (26, LABEL_36_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_36_2]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_25;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_24;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_23)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_36_7);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_22;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_21)
  (Rsp [0]) = (Wrd5.Obj);
  goto do_loop_8;

DEFLABEL (label_22)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_6]), 1);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_5]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_25)
  Rsp = (& (Rsp [1]));
  (Wrd22.Obj) = (current_block [OBJECT_36_0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd37.uLng) == 62)
    goto label_27;

DEFLABEL (label_26)
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_4]), 3);

DEFLABEL (label_27)
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd35.Lng))))
    goto label_26;
  ((Wrd33.pObj) [7]) = (Wrd6.Obj);
  Rvl = (current_block [OBJECT_36_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_18)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_36_8);
  Rvl = (current_block [OBJECT_36_3]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_7 5
#define LABEL_37_5 7
#define LABEL_37_9 9
#define TAG_37_10 3
#define LABEL_37_12 11
#define LABEL_37_13 13
#define LABEL_37_14 15
#define LABEL_37_15 17
#define LABEL_37_16 19
#define LABEL_37_19 21
#define LABEL_37_20 23
#define LABEL_37_21 25
#define LABEL_37_22 27
#define LABEL_37_23 29
#define LABEL_37_24 31
#define LABEL_37_25 33
#define LABEL_37_17 35
#define ENVIRONMENT_LABEL_37_3 58
#define DEBUGGING_LABEL_37_2 57
#define OBJECT_37_11 56
#define OBJECT_37_10 55
#define OBJECT_37_9 54
#define OBJECT_37_8 53
#define OBJECT_37_7 52
#define OBJECT_37_6 51
#define OBJECT_37_5 50
#define OBJECT_37_4 49
#define OBJECT_37_3 48
#define OBJECT_37_2 47
#define OBJECT_37_1 46
#define OBJECT_37_0 45
#define EXECUTE_CACHE_37_18 37
#define EXECUTE_CACHE_37_11 39
#define EXECUTE_CACHE_37_8 41
#define EXECUTE_CACHE_37_6 43
#define FREE_REFERENCES_LABEL_37_0 36
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd27;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd53;
  machine_word Wrd70;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd58;
  machine_word Wrd63;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd97;
  machine_word Wrd128;
  machine_word Wrd125;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd88;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd68;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd124;
  machine_word Wrd122;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd31;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_37_4);
      goto thread_queue_pushB_23;

    case 1:
      current_block = (Rpc - LABEL_37_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_37_9);
      goto lambda_38;

    case 4:
      current_block = (Rpc - LABEL_37_12);
      goto label_25;

    case 5:
      current_block = (Rpc - LABEL_37_13);
      goto label_26;

    case 6:
      current_block = (Rpc - LABEL_37_14);
      goto label_27;

    case 7:
      current_block = (Rpc - LABEL_37_15);
      goto label_28;

    case 8:
      current_block = (Rpc - LABEL_37_16);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_37_19);
      goto before_last_12;

    case 10:
      current_block = (Rpc - LABEL_37_20);
      goto label_30;

    case 11:
      current_block = (Rpc - LABEL_37_21);
      goto label_35;

    case 12:
      current_block = (Rpc - LABEL_37_22);
      goto label_34;

    case 13:
      current_block = (Rpc - LABEL_37_23);
      goto label_33;

    case 14:
      current_block = (Rpc - LABEL_37_24);
      goto label_32;

    case 15:
      current_block = (Rpc - LABEL_37_25);
      goto label_31;

    case 16:
      current_block = (Rpc - LABEL_37_17);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (thread_queue_pushB_37)
DEFLABEL (thread_queue_pushB_23)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_41;

DEFLABEL (label_40)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_37_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37_9])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_11]));

DEFLABEL (label_41)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_37_1]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_37_7);
  goto label_40;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_37_9);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_53;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_53;
  (Wrd9.Obj) = ((Wrd15.pObj) [5]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_52)
  (Wrd29.Obj) = (Rsp [0]);
  if (! ((Wrd29.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_43;

DEFLABEL (label_42)
  (Wrd126.Obj) = (Rsp [1]);
  (Wrd127.pObj) = (OBJECT_ADDRESS (Wrd126.Obj));
  (Wrd125.Obj) = ((Wrd127.pObj) [3]);
  (Rsp [0]) = (Wrd125.Obj);
  (Wrd128.Obj) = ((Wrd127.pObj) [2]);
  (Rsp [1]) = (Wrd128.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_18]));

DEFLABEL (label_43)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [3]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_51;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd43.Lng))))
    goto label_51;
  (Wrd31.Obj) = ((Wrd41.pObj) [4]);

DEFLABEL (label_50)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd55.uLng) == 26))
    goto label_49;
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 26))
    goto label_49;
  (Wrd122.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd124.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if ((Wrd122.Lng) < (Wrd124.Lng))
    goto label_42;

DEFLABEL (label_48)
  (Wrd77.Obj) = (Rsp [1]);
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd79.Obj) = ((Wrd78.pObj) [3]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd80.uLng) == 62))
    goto label_47;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [0]);
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd76.Lng))))
    goto label_47;
  (Wrd68.Obj) = ((Wrd74.pObj) [3]);
  (* (--Rsp)) = (Wrd68.Obj);

DEFLABEL (label_46)
  (Wrd101.Obj) = (Rsp [2]);
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd101.Obj));
  (Wrd103.Obj) = ((Wrd102.pObj) [3]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd104.uLng) == 62))
    goto label_45;
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd99.Obj) = ((Wrd98.pObj) [0]);
  (Wrd100.Lng) = (FIXNUM_TO_LONG (Wrd99.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd100.Lng))))
    goto label_45;
  (Wrd88.Obj) = ((Wrd98.pObj) [2]);

DEFLABEL (label_44)
  (Rsp [1]) = (Wrd88.Obj);
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_17]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  goto before_last_12;

DEFLABEL (label_45)
  (Wrd106.Obj) = (Rsp [2]);
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd106.Obj));
  (Wrd105.Obj) = ((Wrd107.pObj) [3]);
  (Wrd108.Obj) = (current_block [OBJECT_37_6]);
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_16]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_3]), 2);

DEFLABEL (label_29)
  (Wrd88.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd82.Obj) = (Rsp [1]);
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd81.Obj) = ((Wrd83.pObj) [3]);
  (Wrd84.Obj) = (current_block [OBJECT_37_5]);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_15]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_3]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_14]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  goto label_42;

DEFLABEL (label_51)
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd48.Obj) = ((Wrd50.pObj) [3]);
  (Wrd51.Obj) = (current_block [OBJECT_37_4]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_13]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_3]), 2);

DEFLABEL (label_26)
  (Wrd31.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [3]);
  (Wrd25.Obj) = (current_block [OBJECT_37_2]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_12]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_3]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_37_17);

DEFLABEL (label_54)
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (before_last_39)
DEFLABEL (before_last_12)
  INTERRUPT_CHECK (26, LABEL_37_19);
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_69;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_68)
  (Wrd18.Obj) = (Rsp [2]);
  if ((Wrd9.Obj) == (Wrd18.Obj))
    goto label_57;
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_56;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_55)
  (Rsp [0]) = (Wrd19.Obj);
  goto before_last_12;

DEFLABEL (label_56)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_25]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_7]), 1);

DEFLABEL (label_31)
  (Wrd19.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_57)
  (Wrd29.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd100.uLng) == 1))
    goto label_67;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd98.Obj) = (current_block [OBJECT_37_8]);
  ((Wrd97.pObj) [1]) = (Wrd98.Obj);

DEFLABEL (label_66)
  (Wrd84.Obj) = (Rsp [4]);
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [3]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd87.uLng) == 62))
    goto label_65;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd82.Obj) = ((Wrd81.pObj) [0]);
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd82.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd83.Lng))))
    goto label_65;
  (Wrd75.Obj) = (Rsp [0]);
  ((Wrd81.pObj) [3]) = (Wrd75.Obj);

DEFLABEL (label_64)
  (Wrd62.Obj) = (Rsp [2]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 1))
    goto label_63;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd59.Obj) = (Rsp [4]);
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [2]);
  ((Wrd58.pObj) [0]) = (Wrd61.Obj);

DEFLABEL (label_62)
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_61;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd49.Obj) = (Rsp [3]);
  ((Wrd48.pObj) [1]) = (Wrd49.Obj);

DEFLABEL (label_60)
  (Wrd30.Obj) = (current_block [OBJECT_37_6]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [5]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [3]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd34.Obj);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd46.uLng) == 62)
    goto label_59;

DEFLABEL (label_58)
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_10]), 3);

DEFLABEL (label_59)
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd44.Lng))))
    goto label_58;
  ((Wrd42.pObj) [2]) = (Wrd34.Obj);
  Rsp = (& (Rsp [4]));
  goto label_54;

DEFLABEL (label_61)
  (Wrd53.Obj) = (Rsp [3]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_24]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_9]), 2);

DEFLABEL (label_32)
  goto label_60;

DEFLABEL (label_63)
  (Wrd66.Obj) = (Rsp [4]);
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd65.Obj) = ((Wrd67.pObj) [2]);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_23]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_11]), 2);

DEFLABEL (label_33)
  goto label_62;

DEFLABEL (label_65)
  (Wrd89.Obj) = (Rsp [4]);
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd88.Obj) = ((Wrd90.pObj) [3]);
  (Wrd91.Obj) = (current_block [OBJECT_37_5]);
  (Wrd92.Obj) = (Rsp [0]);
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_22]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_10]), 3);

DEFLABEL (label_34)
  goto label_64;

DEFLABEL (label_67)
  (Wrd102.Obj) = (current_block [OBJECT_37_8]);
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_21]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_9]), 2);

DEFLABEL (label_35)
  goto label_66;

DEFLABEL (label_69)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_20]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_7]), 1);

DEFLABEL (label_30)
  (Wrd9.Obj) = Rvl;
  goto label_68;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_6 7
#define LABEL_38_7 9
#define LABEL_38_8 11
#define LABEL_38_9 13
#define LABEL_38_10 15
#define LABEL_38_11 17
#define LABEL_38_12 19
#define ENVIRONMENT_LABEL_38_3 29
#define DEBUGGING_LABEL_38_2 28
#define OBJECT_38_4 27
#define OBJECT_38_3 26
#define OBJECT_38_2 25
#define OBJECT_38_1 24
#define OBJECT_38_0 23
#define EXECUTE_CACHE_38_13 21
#define FREE_REFERENCES_LABEL_38_0 20
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
thread_queue_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd76;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd28;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd121;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_38_4);
      goto Z__pushB_11;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_38_6);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_38_7);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_38_8);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_38_9);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_38_10);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_38_11);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_38_12);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__pushB_21)
DEFLABEL (Z__pushB_11)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_35;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_35;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_34)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Rsp [0]) = (Wrd21.Obj);
  (Wrd114.Obj) = (Rsp [1]);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd114.Obj));
  if (! ((Wrd115.uLng) == 62))
    goto label_33;
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd114.Obj));
  (Wrd112.Obj) = ((Wrd111.pObj) [0]);
  (Wrd113.Lng) = (FIXNUM_TO_LONG (Wrd112.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd113.Lng))))
    goto label_33;
  ((Wrd111.pObj) [2]) = (Wrd21.Obj);

DEFLABEL (label_32)
  (Wrd97.Obj) = (Rsp [1]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd98.uLng) == 62))
    goto label_31;
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd95.Obj) = ((Wrd94.pObj) [0]);
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd95.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd96.Lng))))
    goto label_31;
  (Wrd28.Obj) = ((Wrd94.pObj) [3]);
  if ((Wrd28.Obj) == ((SCHEME_OBJECT) 0))
    goto label_29;

DEFLABEL (label_28)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_27;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd38.Lng))))
    goto label_27;
  (Wrd30.Obj) = ((Wrd36.pObj) [4]);

DEFLABEL (label_26)
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd51.uLng) == 26))
    goto label_25;
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd52.Lng) = ((Wrd53.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd52.Lng)))
    goto label_25;
  (Wrd50.Obj) = (LONG_TO_FIXNUM (Wrd52.Lng));

DEFLABEL (label_24)
  (Wrd66.Obj) = (Rsp [1]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 62))
    goto label_23;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd65.Lng))))
    goto label_23;
  ((Wrd63.pObj) [4]) = (Wrd50.Obj);

DEFLABEL (label_22)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_12]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_13]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_38_12);
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd68.Obj) = (Rsp [1]);
  (Wrd69.Obj) = (current_block [OBJECT_38_4]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_11]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 3);

DEFLABEL (label_16)
  goto label_22;

DEFLABEL (label_25)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_10]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_15)
  (Wrd50.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_38_4]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 2);

DEFLABEL (label_14)
  (Wrd30.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd83.Obj) = (Rsp [1]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 62))
    goto label_30;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd82.Lng))))
    goto label_30;
  (Wrd76.Obj) = (Rsp [0]);
  ((Wrd80.pObj) [3]) = (Wrd76.Obj);
  goto label_28;

DEFLABEL (label_30)
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.Obj) = (current_block [OBJECT_38_3]);
  (Wrd87.Obj) = (Rsp [0]);
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_8]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 3);

DEFLABEL (label_17)
  goto label_28;

DEFLABEL (label_31)
  (Wrd99.Obj) = (Rsp [1]);
  (Wrd100.Obj) = (current_block [OBJECT_38_3]);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_7]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 2);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_28;

DEFLABEL (label_33)
  (Wrd116.Obj) = (Rsp [1]);
  (Wrd117.Obj) = (current_block [OBJECT_38_0]);
  (Wrd118.Obj) = (Rsp [0]);
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_6]))));
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 3);

DEFLABEL (label_19)
  goto label_32;

DEFLABEL (label_35)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_38_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_10 5
#define LABEL_5 7
#define LABEL_6 9
#define LABEL_8 11
#define LABEL_9 13
#define LABEL_13 15
#define LABEL_19 17
#define LABEL_15 19
#define TAG_16 8
#define LABEL_17 21
#define LABEL_18 23
#define LABEL_20 25
#define LABEL_21 27
#define LABEL_22 29
#define ENVIRONMENT_LABEL_3 58
#define DEBUGGING_LABEL_2 57
#define PURIFICATION_ROOT 56
#define OBJECT_13 55
#define OBJECT_12 54
#define OBJECT_11 53
#define OBJECT_10 52
#define OBJECT_9 51
#define OBJECT_8 50
#define OBJECT_7 49
#define OBJECT_6 48
#define OBJECT_5 47
#define OBJECT_4 46
#define OBJECT_3 45
#define OBJECT_2 44
#define OBJECT_1 43
#define OBJECT_0 42
#define EXECUTE_CACHE_7 31
#define FREE_REFERENCE_0 34
#define GLOBAL_EXECUTE_CACHE_14 36
#define GLOBAL_EXECUTE_CACHE_12 38
#define GLOBAL_EXECUTE_CACHE_11 40
#define FREE_REFERENCES_LABEL_0 30
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
thread_queue_so_163d8ff18750461e (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto continuation_8;

    case 1:
      current_block = (Rpc - LABEL_10);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_6);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_13;

    case 5:
      current_block = (Rpc - LABEL_9);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_14;

    case 7:
      current_block = (Rpc - LABEL_19);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto Z__make_thread_queue_22;

    case 9:
      current_block = (Rpc - LABEL_17);
      goto continuation_16;

    case 10:
      current_block = (Rpc - LABEL_18);
      goto continuation_15;

    case 11:
      current_block = (Rpc - LABEL_20);
      goto label_24;

    case 12:
      current_block = (Rpc - LABEL_21);
      goto label_25;

    case 13:
      current_block = (Rpc - LABEL_22);
      goto expression_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_18)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_21])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_25)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_24)
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
	0,
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
	0,
	1,
	1,
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
	0,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 38)
      goto label_23;
    blocks = (current_block [OBJECT_13]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_20])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_23)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_29;
  Wrd11 = Wrd15;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_9);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x707, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_27;
  Wrd11 = Wrd15;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_11]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd12.pObj));

DEFLABEL (label_20)
  (Wrd11.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10])), (Wrd12.pObj));

DEFLABEL (label_19)
  (Wrd11.Obj) = Rvl;
  goto label_28;

DEFLABEL (Z__make_thread_queue_22)
  CLOSURE_HEADER (LABEL_15);

DEFLABEL (Z__make_thread_queue_11)
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

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_thread_queue_so_163d8ff18750461e [38] =
  {
    { "thread_queue_so_code_1", 1, thread_queue_so_code_1 },
    { "thread_queue_so_code_2", 1, thread_queue_so_code_2 },
    { "thread_queue_so_code_3", 1, thread_queue_so_code_3 },
    { "thread_queue_so_code_4", 1, thread_queue_so_code_4 },
    { "thread_queue_so_code_5", 1, thread_queue_so_code_5 },
    { "thread_queue_so_code_6", 1, thread_queue_so_code_6 },
    { "thread_queue_so_code_7", 1, thread_queue_so_code_7 },
    { "thread_queue_so_code_8", 1, thread_queue_so_code_8 },
    { "thread_queue_so_code_9", 1, thread_queue_so_code_9 },
    { "thread_queue_so_code_10", 1, thread_queue_so_code_10 },
    { "thread_queue_so_code_11", 1, thread_queue_so_code_11 },
    { "thread_queue_so_code_12", 1, thread_queue_so_code_12 },
    { "thread_queue_so_code_13", 1, thread_queue_so_code_13 },
    { "thread_queue_so_code_14", 4, thread_queue_so_code_14 },
    { "thread_queue_so_code_15", 2, thread_queue_so_code_15 },
    { "thread_queue_so_code_16", 1, thread_queue_so_code_16 },
    { "thread_queue_so_code_17", 8, thread_queue_so_code_17 },
    { "thread_queue_so_code_18", 3, thread_queue_so_code_18 },
    { "thread_queue_so_code_19", 3, thread_queue_so_code_19 },
    { "thread_queue_so_code_20", 2, thread_queue_so_code_20 },
    { "thread_queue_so_code_21", 9, thread_queue_so_code_21 },
    { "thread_queue_so_code_22", 11, thread_queue_so_code_22 },
    { "thread_queue_so_code_23", 4, thread_queue_so_code_23 },
    { "thread_queue_so_code_24", 4, thread_queue_so_code_24 },
    { "thread_queue_so_code_25", 7, thread_queue_so_code_25 },
    { "thread_queue_so_code_26", 16, thread_queue_so_code_26 },
    { "thread_queue_so_code_27", 15, thread_queue_so_code_27 },
    { "thread_queue_so_code_28", 12, thread_queue_so_code_28 },
    { "thread_queue_so_code_29", 7, thread_queue_so_code_29 },
    { "thread_queue_so_code_30", 16, thread_queue_so_code_30 },
    { "thread_queue_so_code_31", 14, thread_queue_so_code_31 },
    { "thread_queue_so_code_32", 2, thread_queue_so_code_32 },
    { "thread_queue_so_code_33", 10, thread_queue_so_code_33 },
    { "thread_queue_so_code_34", 12, thread_queue_so_code_34 },
    { "thread_queue_so_code_35", 7, thread_queue_so_code_35 },
    { "thread_queue_so_code_36", 7, thread_queue_so_code_36 },
    { "thread_queue_so_code_37", 17, thread_queue_so_code_37 },
    { "thread_queue_so_code_38", 9, thread_queue_so_code_38 }
  };

int
decl_thread_queue_so_163d8ff18750461e (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_thread_queue_so_163d8ff18750461e);
  return (0);
}

DECLARE_COMPILED_CODE ("thread-queue.so", 14, decl_thread_queue_so_163d8ff18750461e, thread_queue_so_163d8ff18750461e)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_thread_queue_so_data_163d8ff18750461e [4622] =
  "\x62\x43\x8b\x0a\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d\xb9\x23"
  "\x22\x29\x21\x9f\x2b\xba\x1d\xb0\x82\x88\xc2\xbb\x81\x22\x29\x21"
  "\x9e\x2b\xbc\x1d\xb0\x83\x88\xb3\x82\x22\x29\x21\x9e\x2b\xbd\x1d"
  "\xb0\x84\x88\xb3\x83\x22\x29\x21\x9e\x2b\xbe\x1d\xb0\x85\x88\xb3"
  "\x84\x22\x29\x21\x9e\x2b\xbf\x1d\xb0\x86\x88\xb3\x85\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x86\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\xc3\x1c\x1d\x81\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1d\x82\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d"
  "\x83\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x84\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x85\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1d\x86\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\xb3\x80\xc1\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c"
  "\x28\x0d\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1d\x84"
  "\xb3\x83\x0c\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x80\x08\x06\x1d\x0c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb3\x83\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x07\xb3\x83\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x80\x82\x1b\x81\xb3\x83\x1d\x0d\x1c\x28\x1b\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x08"
  "\x1b\x85\x0c\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x83\xb3\x84\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x0d\x1c\x28\x1b\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x08\x1b\x86\xb3\x83\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\x08\x1b\x86\xb3\x83\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1b\x86\xb3\x83\x0d\x1c"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x0d\x1c"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x08\x1b\x86\xb3\x83\x0d\x1c\x24\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x08\x1b\x86\xc1\x1c\x81\xb3\x83\x0d\x1c\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb3\x81\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83\x81\x1b\xc2\x1c\xb3\x82\x08"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x83\xc1\x1c\x1b\x82\x1b\xb3\x81\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x1d\x08"
  "\xb3\x85\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x1d"
  "\x08\xb3\x86\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1b\x1b\x08"
  "\x1b\x81\x82\x83\xb3\x84\x0c\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83\x82\x1b"
  "\xb3\x81\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x17\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x0d\xb1\x1b\x1b\x1b\x17\x1b\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb6\x2a\xb5"
  "\x2a\xb4\x2a\x17\x0c\x0d\x0d\x0d\x0d\x0d\x0d\x08\x8d\x08\xc3\x0d"
  "\x1c\x0d\xb2\x2a\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x24\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5b"
  "\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77"
  "\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72"
  "\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f"
  "\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x74\x68\x72\x65\x61\x64"
  "\x2d\x71\x75\x65\x75\x65\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72"
  "\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02"
  "\x04\x13\x70\x72\x69\x6e\x74\x2d\x74\x68\x72\x65\x61\x64\x2d\x71"
  "\x75\x65\x75\x65\x02\x0f\x04\x84\x06\x03\x02\x0c\x25\x72\x65\x63"
  "\x6f\x72\x64\x2d\x72\x65\x66\x10\x04\x83\x04\x03\x02\x11\x04\x83"
  "\x04\x03\x02\x12\x04\x83\x04\x03\x02\x13\x04\x83\x04\x03\x02\x14"
  "\x04\x83\x04\x03\x09\x02\x08\x15\x04\x83\x04\x03\x0a\x02\x09\x0d"
  "\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x0b\x02\x16\x04"
  "\x84\x06\x03\x0c\x02\x0a\x0b\x02\x17\x04\x84\x06\x03\x0d\x02\x0b"
  "\x0b\x02\x18\x04\x84\x06\x03\x0e\x02\x0c\x0b\x02\x19\x04\x84\x06"
  "\x03\x0f\x02\x0d\x0b\x02\x1a\x04\x84\x06\x03\x10\x02\x0e\x0b\x02"
  "\x1b\x04\x84\x06\x03\x11\x02\x0f\x0f\x25\x72\x65\x63\x6f\x72\x64"
  "\x2d\x6c\x65\x6e\x67\x74\x68\x07\x2e\x74\x61\x67\x2e\x31\x12\x02"
  "\x1f\x0a\x81\x85\x02\x1e\x08\x81\x83\x02\x1d\x06\x81\x83\x02\x1c"
  "\x04\x83\x04\x09\x12\x13\x02\x10\x02\x03\x0e\x74\x68\x72\x65\x61"
  "\x64\x2d\x71\x75\x65\x75\x65\x3f\x14\x04\x17\x65\x72\x72\x6f\x72"
  "\x3a\x6e\x6f\x74\x2d\x74\x68\x72\x65\x61\x64\x2d\x71\x75\x65\x75"
  "\x65\x15\x03\x21\x06\x81\x85\x02\x20\x04\x84\x04\x05\x0e\x16\x02"
  "\x11\x08\x0f\x61\x20\x74\x68\x72\x65\x61\x64\x2d\x71\x75\x65\x75"
  "\x65\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74"
  "\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x02\x22\x04\x84"
  "\x04\x03\x0c\x17\x02\x12\x06\x20\x6d\x61\x78\x3a\x02\x0b\x20\x65"
  "\x6c\x65\x6d\x65\x6e\x74\x73\x3a\x04\x0d\x77\x72\x69\x74\x65\x2d"
  "\x73\x74\x72\x69\x6e\x67\x03\x0f\x6e\x75\x6d\x62\x65\x72\x2d\x3e"
  "\x73\x74\x72\x69\x6e\x67\x03\x2a\x12\x81\x87\x02\x29\x10\x81\x87"
  "\x02\x28\x0e\x81\x89\x02\x27\x0c\x81\x85\x02\x26\x0a\x81\x85\x02"
  "\x25\x08\x81\x8b\x02\x24\x06\x81\x85\x02\x23\x04\x84\x06\x11\x1f"
  "\x18\x02\x13\x08\x1d\x4d\x61\x78\x2d\x73\x69\x7a\x65\x20\x6d\x75"
  "\x73\x74\x20\x62\x65\x20\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72"
  "\x3a\x04\x06\x65\x72\x72\x6f\x72\x19\x08\x13\x25\x6d\x61\x6b\x65"
  "\x2d\x74\x68\x72\x65\x61\x64\x2d\x71\x75\x65\x75\x65\x1a\x03\x09"
  "\x69\x6e\x74\x65\x67\x65\x72\x3f\x04\x2d\x08\x83\x02\x2c\x06\x81"
  "\x83\x02\x2b\x04\x81\x85\x02\x07\x16\x1b\x02\x14\x14\x74\x68\x72"
  "\x65\x61\x64\x2d\x71\x75\x65\x75\x65\x2f\x65\x6d\x70\x74\x79\x3f"
  "\x1c\x04\x17\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x74\x68\x72"
  "\x65\x61\x64\x2d\x71\x75\x65\x75\x65\x1d\x02\x30\x08\x81\x83\x02"
  "\x2f\x06\x81\x83\x02\x2e\x04\x83\x04\x07\x11\x1e\x02\x15\x32\x06"
  "\x81\x83\x02\x31\x04\x83\x04\x05\x0b\x1f\x02\x16\x0b\x02\x14\x74"
  "\x68\x72\x65\x61\x64\x2d\x71\x75\x65\x75\x65\x2f\x65\x6d\x70\x74"
  "\x79\x21\x20\x04\x1d\x03\x13\x77\x69\x74\x68\x6f\x75\x74\x2d\x69"
  "\x6e\x74\x65\x72\x72\x75\x70\x74\x73\x21\x03\x10\x25\x72\x65\x73"
  "\x75\x6d\x65\x2d\x71\x75\x65\x75\x65\x72\x73\x22\x04\x3b\x14\x81"
  "\x83\x02\x3a\x12\x81\x83\x02\x39\x10\x81\x83\x02\x38\x0e\x81\x83"
  "\x02\x37\x0c\x81\x83\x02\x36\x0a\x81\x83\x02\x35\x08\x81\x83\x02"
  "\x34\x06\x81\x83\x02\x33\x04\x83\x04\x13\x25\x23\x02\x17\x0b\x11"
  "\x43\x61\x6e\x6e\x6f\x74\x20\x71\x75\x65\x75\x65\x20\x23\x46\x3a"
  "\x14\x74\x68\x72\x65\x61\x64\x2d\x71\x75\x65\x75\x65\x2f\x71\x75"
  "\x65\x75\x65\x21\x24\x04\x1d\x04\x19\x03\x21\x04\x10\x25\x71\x75"
  "\x65\x75\x65\x2d\x6e\x6f\x2d\x68\x61\x6e\x67\x21\x25\x02\x0f\x63"
  "\x75\x72\x72\x65\x6e\x74\x2d\x74\x68\x72\x65\x61\x64\x26\x02\x17"
  "\x73\x75\x73\x70\x65\x6e\x64\x2d\x63\x75\x72\x72\x65\x6e\x74\x2d"
  "\x74\x68\x72\x65\x61\x64\x27\x04\x08\x61\x70\x70\x65\x6e\x64\x21"
  "\x28\x08\x46\x18\x81\x85\x02\x45\x16\x81\x89\x02\x44\x14\x81\x87"
  "\x02\x43\x12\x81\x85\x02\x42\x10\x81\x85\x02\x41\x0e\x81\x83\x02"
  "\x40\x0c\x81\x83\x02\x3f\x0a\x81\x83\x02\x3e\x08\x81\x85\x02\x3d"
  "\x06\x81\x85\x02\x3c\x04\x84\x06\x17\x2f\x29\x02\x18\x11\x43\x61"
  "\x6e\x6e\x6f\x74\x20\x71\x75\x65\x75\x65\x20\x23\x46\x3a\x1c\x74"
  "\x68\x72\x65\x61\x64\x2d\x71\x75\x65\x75\x65\x2f\x71\x75\x65\x75"
  "\x65\x2d\x6e\x6f\x2d\x68\x61\x6e\x67\x21\x2a\x04\x1d\x04\x19\x03"
  "\x21\x04\x25\x05\x4a\x0a\x81\x83\x02\x49\x08\x81\x85\x02\x48\x06"
  "\x81\x85\x02\x47\x04\x84\x06\x09\x17\x2b\x02\x19\x04\x08\x25\x71"
  "\x75\x65\x75\x65\x21\x2c\x02\x4e\x0a\x81\x87\x02\x4d\x08\x81\x87"
  "\x02\x4c\x06\x81\x85\x02\x4b\x04\x84\x06\x09\x12\x2d\x02\x1a\xe9"
  "\x07\x1e\x74\x68\x72\x65\x61\x64\x2d\x71\x75\x65\x75\x65\x2f\x64"
  "\x65\x71\x75\x65\x75\x65\x2d\x6e\x6f\x2d\x68\x61\x6e\x67\x21\x2e"
  "\x04\x1d\x04\x1e\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x6e\x6f"
  "\x6e\x2d\x6e\x65\x67\x61\x74\x69\x76\x65\x2d\x66\x69\x78\x6e\x75"
  "\x6d\x2f\x02\x10\x72\x65\x61\x6c\x2d\x74\x69\x6d\x65\x2d\x63\x6c"
  "\x6f\x63\x6b\x30\x03\x1d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x74"
  "\x69\x6d\x65\x2f\x73\x65\x63\x6f\x6e\x64\x73\x2d\x3e\x74\x69\x63"
  "\x6b\x73\x31\x04\x1c\x74\x68\x72\x65\x61\x64\x2d\x71\x75\x65\x75"
  "\x65\x2f\x64\x65\x71\x75\x65\x75\x65\x2d\x75\x6e\x74\x69\x6c\x21"
  "\x32\x06\x55\x10\x81\x85\x02\x54\x0e\x81\x87\x02\x53\x0c\x81\x87"
  "\x02\x52\x0a\x81\x85\x02\x51\x08\x81\x85\x02\x50\x06\x81\x85\x02"
  "\x4f\x04\x84\x06\x0f\x1f\x33\x02\x1b\x02\x0b\x0a\x25\x64\x65\x71"
  "\x75\x65\x75\x65\x21\x34\x02\x03\x21\x02\x30\x02\x26\x04\x15\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x2d\x74\x69\x6d\x65\x72\x2d\x65\x76"
  "\x65\x6e\x74\x35\x04\x28\x02\x27\x07\x65\x22\x81\x85\x02\x64\x20"
  "\x82\x02\x63\x1e\x81\x85\x02\x62\x1c\x81\x89\x02\x61\x1a\x81\x87"
  "\x02\x60\x18\x81\x89\x02\x5f\x16\x81\x85\x02\x5e\x14\x81\x85\x02"
  "\x5d\x12\x81\x85\x02\x5c\x10\x81\x83\x02\x5b\x0e\x81\x83\x02\x5a"
  "\x0c\x81\x83\x02\x59\x0a\x81\x83\x02\x58\x08\x81\x83\x02\x57\x06"
  "\x81\x87\x02\x56\x04\x84\x06\x21\x39\x36\x02\x1c\x02\x0b\x03\x21"
  "\x02\x30\x02\x26\x04\x35\x04\x28\x02\x27\x07\x74\x20\x81\x85\x02"
  "\x73\x1e\x82\x02\x72\x1c\x81\x85\x02\x71\x1a\x81\x89\x02\x70\x18"
  "\x81\x87\x02\x6f\x16\x81\x89\x02\x6e\x14\x81\x85\x02\x6d\x12\x81"
  "\x85\x02\x6c\x10\x81\x85\x02\x6b\x0e\x81\x83\x02\x6a\x0c\x81\x83"
  "\x02\x69\x0a\x81\x83\x02\x68\x08\x81\x83\x02\x67\x06\x81\x83\x02"
  "\x66\x04\x85\x08\x1f\x35\x37\x02\x1d\x0b\x16\x74\x68\x72\x65\x61"
  "\x64\x2d\x71\x75\x65\x75\x65\x2f\x64\x65\x71\x75\x65\x75\x65\x21"
  "\x38\x04\x1d\x03\x21\x03\x34\x02\x26\x02\x27\x04\x28\x07\x80\x01"
  "\x1a\x81\x85\x02\x7f\x18\x81\x89\x02\x7e\x16\x81\x87\x02\x7d\x14"
  "\x81\x85\x02\x7c\x12\x81\x85\x02\x7b\x10\x81\x85\x02\x7a\x0e\x81"
  "\x85\x02\x79\x0c\x81\x83\x02\x78\x0a\x81\x83\x02\x77\x08\x81\x83"
  "\x02\x76\x06\x81\x83\x02\x75\x04\x83\x04\x19\x2f\x39\x02\x1e\xe9"
  "\x07\x1a\x74\x68\x72\x65\x61\x64\x2d\x71\x75\x65\x75\x65\x2f\x70"
  "\x65\x65\x6b\x2d\x6e\x6f\x2d\x68\x61\x6e\x67\x3a\x04\x1d\x04\x2f"
  "\x02\x30\x03\x31\x04\x18\x74\x68\x72\x65\x61\x64\x2d\x71\x75\x65"
  "\x75\x65\x2f\x70\x65\x65\x6b\x2d\x75\x6e\x74\x69\x6c\x31\x06\x87"
  "\x01\x10\x81\x85\x02\x86\x01\x0e\x81\x87\x02\x85\x01\x0c\x81\x87"
  "\x02\x84\x01\x0a\x81\x85\x02\x83\x01\x08\x81\x85\x02\x82\x01\x06"
  "\x81\x85\x02\x81\x01\x04\x84\x06\x0f\x1f\x2f\x02\x1f\x02\x0b\x06"
  "\x25\x70\x65\x65\x6b\x3b\x02\x03\x21\x02\x30\x02\x26\x04\x35\x04"
  "\x28\x02\x27\x07\x97\x01\x22\x81\x85\x02\x96\x01\x20\x82\x02\x95"
  "\x01\x1e\x81\x85\x02\x94\x01\x1c\x81\x89\x02\x93\x01\x1a\x81\x87"
  "\x02\x92\x01\x18\x81\x89\x02\x91\x01\x16\x81\x85\x02\x90\x01\x14"
  "\x81\x85\x02\x8f\x01\x12\x81\x85\x02\x8e\x01\x10\x81\x83\x02\x8d"
  "\x01\x0e\x81\x83\x02\x8c\x01\x0c\x81\x83\x02\x8b\x01\x0a\x81\x83"
  "\x02\x8a\x01\x08\x81\x83\x02\x89\x01\x06\x81\x87\x02\x88\x01\x04"
  "\x84\x06\x21\x39\x35\x02\x20\x0b\x04\x63\x61\x72\x30\x12\x74\x68"
  "\x72\x65\x61\x64\x2d\x71\x75\x65\x75\x65\x2f\x70\x65\x65\x6b\x3c"
  "\x04\x1d\x03\x21\x02\x26\x02\x27\x04\x28\x06\xa5\x01\x1e\x81\x85"
  "\x02\xa4\x01\x1c\x81\x89\x02\xa3\x01\x1a\x81\x87\x02\xa2\x01\x18"
  "\x81\x85\x02\xa1\x01\x16\x81\x85\x02\xa0\x01\x14\x81\x85\x02\x9f"
  "\x01\x12\x81\x85\x02\x9e\x01\x10\x81\x85\x02\x9d\x01\x0e\x81\x85"
  "\x02\x9c\x01\x0c\x81\x83\x02\x9b\x01\x0a\x81\x83\x02\x9a\x01\x08"
  "\x81\x83\x02\x99\x01\x06\x81\x83\x02\x98\x01\x04\x83\x04\x1d\x33"
  "\x28\x02\x21\x30\xa7\x01\x06\x81\x83\x02\xa6\x01\x04\x83\x04\x05"
  "\x0b\x27\x02\x22\x0b\x09\x73\x65\x74\x2d\x63\x64\x72\x21\x26\x03"
  "\x12\x25\x72\x65\x73\x75\x6d\x65\x2d\x64\x65\x71\x75\x65\x75\x65"
  "\x72\x73\x3d\x02\xb1\x01\x16\x81\x85\x02\xb0\x01\x14\x81\x85\x02"
  "\xaf\x01\x12\x81\x85\x02\xae\x01\x10\x81\x85\x02\xad\x01\x0e\x81"
  "\x85\x02\xac\x01\x0c\x81\x85\x02\xab\x01\x0a\x81\x85\x02\xaa\x01"
  "\x08\x81\x89\x02\xa9\x01\x06\x84\x06\xa8\x01\x04\x81\x85\x02\x15"
  "\x22\x3e\x02\x23\x04\x63\x64\x72\x3f\x0b\x30\x03\x22\x02\xbd\x01"
  "\x1a\x81\x87\x02\xbc\x01\x18\x81\x87\x02\xbb\x01\x16\x81\x87\x02"
  "\xba\x01\x14\x81\x87\x02\xb9\x01\x12\x81\x87\x02\xb8\x01\x10\x81"
  "\x87\x02\xb7\x01\x0e\x81\x87\x02\xb6\x01\x0c\x81\x87\x02\xb5\x01"
  "\x0a\x81\x87\x02\xb4\x01\x08\x81\x85\x02\xb3\x01\x06\x81\x83\x02"
  "\xb2\x01\x04\x83\x04\x19\x26\x40\x02\x24\x3f\x30\x0b\x02\x04\x14"
  "\x73\x69\x67\x6e\x61\x6c\x2d\x74\x68\x72\x65\x61\x64\x2d\x65\x76"
  "\x65\x6e\x74\x41\x02\xc4\x01\x10\x82\x02\xc3\x01\x0e\x81\x85\x02"
  "\xc2\x01\x0c\x81\x85\x02\xc1\x01\x0a\x81\x89\x02\xc0\x01\x08\x81"
  "\x85\x02\xbf\x01\x06\x81\x83\x02\xbe\x01\x04\x83\x04\x0f\x1c\x42"
  "\x02\x25\x3f\x30\x0b\x02\x04\x41\x02\xcb\x01\x10\x82\x02\xca\x01"
  "\x0e\x81\x85\x02\xc9\x01\x0c\x81\x85\x02\xc8\x01\x0a\x81\x89\x02"
  "\xc7\x01\x08\x81\x85\x02\xc6\x01\x06\x81\x83\x02\xc5\x01\x04\x83"
  "\x04\x0f\x1c\x41\x02\x26\x09\x73\x65\x74\x2d\x63\x61\x72\x21\x0b"
  "\x26\x3f\x11\x43\x61\x6e\x6e\x6f\x74\x20\x71\x75\x65\x75\x65\x20"
  "\x23\x46\x3a\x13\x74\x68\x72\x65\x61\x64\x2d\x71\x75\x65\x75\x65"
  "\x2f\x70\x75\x73\x68\x21\x3f\x04\x1d\x04\x19\x03\x21\x04\x07\x25"
  "\x70\x75\x73\x68\x21\x30\x05\xdc\x01\x24\x81\x87\x02\xdb\x01\x22"
  "\x81\x8b\x02\xda\x01\x20\x81\x83\x02\xd9\x01\x1e\x81\x83\x02\xd8"
  "\x01\x1c\x81\x83\x02\xd7\x01\x1a\x81\x83\x02\xd6\x01\x18\x81\x8b"
  "\x02\xd5\x01\x16\x81\x8b\x02\xd4\x01\x14\x81\x87\x02\xd3\x01\x12"
  "\x81\x85\x02\xd2\x01\x10\x81\x85\x02\xd1\x01\x0e\x81\x85\x02\xd0"
  "\x01\x0c\x81\x83\x02\xcf\x01\x0a\x81\x83\x02\xce\x01\x08\x81\x85"
  "\x02\xcd\x01\x06\x81\x85\x02\xcc\x01\x04\x84\x06\x23\x3b\x26\x02"
  "\x27\x0b\x03\x3d\x02\xe5\x01\x14\x81\x87\x02\xe4\x01\x12\x81\x87"
  "\x02\xe3\x01\x10\x81\x87\x02\xe2\x01\x0e\x81\x87\x02\xe1\x01\x0c"
  "\x81\x87\x02\xe0\x01\x0a\x81\x87\x02\xdf\x01\x08\x81\x87\x02\xde"
  "\x01\x06\x81\x85\x02\xdd\x01\x04\x84\x06\x13\x1e\x21\x27\x19\x19"
  "\x12\x21\x04\x26\x04\x41\x04\x42\x04\x40\x04\x3e\x06\x27\x04\x28"
  "\x04\x35\x04\x2f\x04\x39\x04\x37\x04\x36\x04\x33\x04\x2d\x04\x2b"
  "\x04\x29\x04\x23\x04\x1f\x04\x1e\x04\x1b\x08\x18\x04\x17\x04\x16"
  "\x04\x13\x04\x1a\x30\x3f\x3d\x22\x34\x2c\x3b\x3c\x31\x3a\x38\x16"
  "\x77\x68\x65\x6e\x2d\x6e\x6f\x6e\x2d\x65\x6d\x70\x74\x79\x2d\x62"
  "\x65\x66\x6f\x72\x65\x32\x2e\x25\x2a\x24\x20\x08\x25\x65\x6d\x70"
  "\x74\x79\x3f\x1c\x12\x6d\x61\x6b\x65\x2d\x74\x68\x72\x65\x61\x64"
  "\x2d\x71\x75\x65\x75\x65\x15\x1d\x14\x1a\x1a\x25\x73\x65\x74\x2d"
  "\x25\x74\x68\x72\x65\x61\x64\x2d\x71\x75\x65\x75\x65\x2f\x77\x61"
  "\x69\x74\x69\x6e\x67\x2d\x64\x65\x71\x75\x65\x75\x65\x72\x73\x21"
  "\x23\x73\x65\x74\x2d\x25\x74\x68\x72\x65\x61\x64\x2d\x71\x75\x65"
  "\x75\x65\x2f\x77\x61\x69\x74\x69\x6e\x67\x2d\x71\x75\x65\x75\x65"
  "\x72\x73\x21\x20\x73\x65\x74\x2d\x25\x74\x68\x72\x65\x61\x64\x2d"
  "\x71\x75\x65\x75\x65\x2f\x6d\x61\x78\x2d\x65\x6c\x65\x6d\x65\x6e"
  "\x74\x73\x21\x21\x73\x65\x74\x2d\x25\x74\x68\x72\x65\x61\x64\x2d"
  "\x71\x75\x65\x75\x65\x2f\x65\x6c\x65\x6d\x65\x6e\x74\x2d\x63\x6f"
  "\x75\x6e\x74\x21\x1d\x73\x65\x74\x2d\x25\x74\x68\x72\x65\x61\x64"
  "\x2d\x71\x75\x65\x75\x65\x2f\x6c\x61\x73\x74\x2d\x70\x61\x69\x72"
  "\x21\x1e\x73\x65\x74\x2d\x25\x74\x68\x72\x65\x61\x64\x2d\x71\x75"
  "\x65\x75\x65\x2f\x66\x69\x72\x73\x74\x2d\x70\x61\x69\x72\x21\x20"
  "\x25\x74\x68\x72\x65\x61\x64\x2d\x71\x75\x65\x75\x65\x2f\x77\x61"
  "\x69\x74\x69\x6e\x67\x2d\x64\x65\x71\x75\x65\x75\x65\x72\x73\x1e"
  "\x25\x74\x68\x72\x65\x61\x64\x2d\x71\x75\x65\x75\x65\x2f\x77\x61"
  "\x69\x74\x69\x6e\x67\x2d\x71\x75\x65\x75\x65\x72\x73\x1b\x25\x74"
  "\x68\x72\x65\x61\x64\x2d\x71\x75\x65\x75\x65\x2f\x6d\x61\x78\x2d"
  "\x65\x6c\x65\x6d\x65\x6e\x74\x73\x1c\x25\x74\x68\x72\x65\x61\x64"
  "\x2d\x71\x75\x65\x75\x65\x2f\x65\x6c\x65\x6d\x65\x6e\x74\x2d\x63"
  "\x6f\x75\x6e\x74\x18\x25\x74\x68\x72\x65\x61\x64\x2d\x71\x75\x65"
  "\x75\x65\x2f\x6c\x61\x73\x74\x2d\x70\x61\x69\x72\x19\x25\x74\x68"
  "\x72\x65\x61\x64\x2d\x71\x75\x65\x75\x65\x2f\x66\x69\x72\x73\x74"
  "\x2d\x70\x61\x69\x72\x0d\x11\x04\x10\x04\x0f\x04\x0e\x04\x0d\x04"
  "\x0c\x04\x0a\x04\x09\x04\x04\x04\x04\x04\x0d\x0d\x74\x68\x72\x65"
  "\x61\x64\x2d\x71\x75\x65\x75\x65\x0b\x66\x69\x72\x73\x74\x2d\x70"
  "\x61\x69\x72\x0a\x6c\x61\x73\x74\x2d\x70\x61\x69\x72\x0e\x65\x6c"
  "\x65\x6d\x65\x6e\x74\x2d\x63\x6f\x75\x6e\x74\x0d\x6d\x61\x78\x2d"
  "\x65\x6c\x65\x6d\x65\x6e\x74\x73\x10\x77\x61\x69\x74\x69\x6e\x67"
  "\x2d\x71\x75\x65\x75\x65\x72\x73\x12\x77\x61\x69\x74\x69\x6e\x67"
  "\x2d\x64\x65\x71\x75\x65\x75\x65\x72\x73\x11\x6c\x6f\x63\x61\x6c"
  "\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x11\x72\x74\x64\x3a"
  "\x74\x68\x72\x65\x61\x64\x2d\x71\x75\x65\x75\x65\x42\x0d\x74\x68"
  "\x72\x65\x61\x64\x2d\x71\x75\x65\x75\x65\x04\x03\x19\x72\x65\x63"
  "\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63"
  "\x68\x2d\x74\x61\x67\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f"
  "\x72\x64\x2d\x74\x79\x70\x65\x05\x10\x64\x65\x66\x69\x6e\x65\x2d"
  "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x04\x42\x02\x04\x19\x73\x74\x61"
  "\x6e\x64\x61\x72\x64\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x6d"
  "\x65\x74\x68\x6f\x64\x02\x0e\x1e\x80\x80\x04\x0d\x1c\x81\x81\x02"
  "\x0c\x1a\x81\x81\x02\x0b\x18\x81\x85\x02\x0a\x16\x81\x83\x02\x09"
  "\x14\x81\x8f\x02\x08\x12\x81\x87\x02\x07\x10\x81\x83\x02\x06\x0e"
  "\x81\x85\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x87\x02\x03\x08\x81"
  "\x85\x02\x02\x06\x81\x87\x02\x01\x04\x81\x83\x02\x1d\x3b";

SCHEME_OBJECT *
thread_queue_so_data_163d8ff18750461e (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_thread_queue_so_data_163d8ff18750461e [0]))), (sizeof (prog_thread_queue_so_data_163d8ff18750461e)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_22]));
}

DECLARE_COMPILED_DATA_NS ("thread-queue.so", thread_queue_so_data_163d8ff18750461e)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("thread-queue.so", "953c1a000e96414a")
