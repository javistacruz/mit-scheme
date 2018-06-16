/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:55-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 6
#define DEBUGGING_LABEL_1_2 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syncproc_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
syncproc_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
syncproc_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
#define ENVIRONMENT_LABEL_4_3 8
#define DEBUGGING_LABEL_4_2 7
#define EXECUTE_CACHE_4_5 5
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syncproc_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_5]));

INVOKE_INTERFACE_TARGET_1
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
syncproc_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto subprocess_context_input_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_context_input_3)
DEFLABEL (subprocess_context_input_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
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
syncproc_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto subprocess_context_input_buffer_size_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_context_input_buffer_size_3)
DEFLABEL (subprocess_context_input_buffer_size_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
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
syncproc_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto subprocess_context_output_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_context_output_3)
DEFLABEL (subprocess_context_output_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
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
syncproc_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto subprocess_context_output_buffer_size_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_context_output_buffer_size_3)
DEFLABEL (subprocess_context_output_buffer_size_0)
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
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
syncproc_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto subprocess_context_redisplay_hook_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_context_redisplay_hook_3)
DEFLABEL (subprocess_context_redisplay_hook_0)
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
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
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
syncproc_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto subprocess_context_environment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_context_environment_3)
DEFLABEL (subprocess_context_environment_0)
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
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
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
syncproc_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto subprocess_context_working_directory_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_context_working_directory_3)
DEFLABEL (subprocess_context_working_directory_0)
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
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [8]);
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
syncproc_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto subprocess_context_use_ptyP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_context_use_ptyP_3)
DEFLABEL (subprocess_context_use_ptyP_0)
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
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [9]);
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
syncproc_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto subprocess_context_shell_file_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_context_shell_file_name_3)
DEFLABEL (subprocess_context_shell_file_name_0)
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
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [10]);
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
syncproc_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto subprocess_context_line_ending_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_context_line_ending_3)
DEFLABEL (subprocess_context_line_ending_0)
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
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [11]);
  Rsp = (& (Rsp [2]));
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
syncproc_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto subprocess_contextP_4;

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

DEFLABEL (subprocess_contextP_10)
DEFLABEL (subprocess_contextP_4)
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
#define LABEL_16_6 5
#define LABEL_16_5 7
#define LABEL_16_7 9
#define LABEL_16_9 11
#define ENVIRONMENT_LABEL_16_3 23
#define DEBUGGING_LABEL_16_2 22
#define OBJECT_16_2 21
#define OBJECT_16_1 20
#define OBJECT_16_0 19
#define EXECUTE_CACHE_16_10 13
#define EXECUTE_CACHE_16_8 15
#define FREE_REFERENCE_16_0 18
#define FREE_REFERENCES_LABEL_16_0 12
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syncproc_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_16_4);
      goto run_shell_command_4;

    case 1:
      current_block = (Rpc - LABEL_16_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_16_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (run_shell_command_9)
DEFLABEL (run_shell_command_4)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_13;
  Wrd9 = Wrd13;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_7);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_11;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd15.Lng))))
    goto label_11;
  (Wrd7.Obj) = ((Wrd13.pObj) [10]);

DEFLABEL (label_10)
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (label_11)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_16_1]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 2);

DEFLABEL (label_7)
  (Wrd7.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_6])), (Wrd10.pObj));

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_6 5
#define LABEL_17_5 7
#define ENVIRONMENT_LABEL_17_3 15
#define DEBUGGING_LABEL_17_2 14
#define OBJECT_17_0 13
#define EXECUTE_CACHE_17_7 9
#define FREE_REFERENCE_17_0 12
#define FREE_REFERENCES_LABEL_17_0 8
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syncproc_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto run_synchronous_subprocess_1;

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

DEFLABEL (run_synchronous_subprocess_5)
DEFLABEL (run_synchronous_subprocess_1)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_7;
  Wrd9 = Wrd13;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_6])), (Wrd10.pObj));

DEFLABEL (label_3)
  (Wrd9.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_6 5
#define LABEL_18_5 7
#define LABEL_18_9 9
#define TAG_18_10 3
#define LABEL_18_11 11
#define TAG_18_12 4
#define LABEL_18_20 13
#define LABEL_18_13 15
#define TAG_18_14 6
#define LABEL_18_16 17
#define LABEL_18_18 19
#define TAG_18_19 8
#define LABEL_18_24 21
#define LABEL_18_26 23
#define LABEL_18_21 25
#define TAG_18_22 11
#define LABEL_18_29 27
#define TAG_18_30 12
#define ENVIRONMENT_LABEL_18_3 63
#define DEBUGGING_LABEL_18_2 62
#define OBJECT_18_8 61
#define OBJECT_18_7 60
#define OBJECT_18_6 59
#define OBJECT_18_5 58
#define OBJECT_18_4 57
#define OBJECT_18_3 56
#define OBJECT_18_2 55
#define OBJECT_18_1 54
#define OBJECT_18_0 53
#define EXECUTE_CACHE_18_34 29
#define EXECUTE_CACHE_18_33 31
#define EXECUTE_CACHE_18_32 33
#define EXECUTE_CACHE_18_31 35
#define EXECUTE_CACHE_18_28 37
#define EXECUTE_CACHE_18_27 39
#define EXECUTE_CACHE_18_25 41
#define EXECUTE_CACHE_18_23 43
#define EXECUTE_CACHE_18_17 45
#define EXECUTE_CACHE_18_15 47
#define EXECUTE_CACHE_18_8 49
#define EXECUTE_CACHE_18_7 51
#define FREE_REFERENCES_LABEL_18_0 28
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syncproc_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd26;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_18_4);
      goto run_synchronous_subprocess_1_23;

    case 1:
      current_block = (Rpc - LABEL_18_6);
      goto label_25;

    case 2:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_18_9);
      goto lambda_28;

    case 4:
      current_block = (Rpc - LABEL_18_11);
      goto lambda_29;

    case 5:
      current_block = (Rpc - LABEL_18_20);
      goto continuation_19;

    case 6:
      current_block = (Rpc - LABEL_18_13);
      goto lambda_30;

    case 7:
      current_block = (Rpc - LABEL_18_16);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_18_18);
      goto loop_15;

    case 9:
      current_block = (Rpc - LABEL_18_24);
      goto continuation_18;

    case 10:
      current_block = (Rpc - LABEL_18_26);
      goto continuation_14;

    case 11:
      current_block = (Rpc - LABEL_18_21);
      goto lambda_32;

    case 12:
      current_block = (Rpc - LABEL_18_29);
      goto lambda_33;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (run_synchronous_subprocess_1_27)
DEFLABEL (run_synchronous_subprocess_1_23)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_36;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd20.Lng))))
    goto label_36;
  (Wrd14.Obj) = ((Wrd18.pObj) [8]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_35)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd28.Obj) == ((SCHEME_OBJECT) 0))
    goto label_34;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (label_34)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (label_36)
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.Obj) = (current_block [OBJECT_18_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_9])));
  Rhp += 5;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd16 = Wrd7;
  (Wrd17.Obj) = (Rsp [4]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [5]) = (Wrd11.Obj);
  ((Wrd16.pObj) [6]) = Rvl;
  (Rsp [2]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_11])));
  Rhp += 2;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd23 = Wrd20;
  ((Wrd23.pObj) [2]) = (Wrd17.Obj);
  ((Wrd23.pObj) [3]) = (Wrd11.Obj);
  (Rsp [3]) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_13])));
  Rhp += 1;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  ((Wrd27.pObj) [2]) = (Wrd11.Obj);
  (Rsp [4]) = (Wrd26.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_15]));

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_18_9);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_18_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  ((Wrd8.pObj) [0]) = Rvl;
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_18_11);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_18])));
  Rhp += 2;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  Wrd13 = Wrd17;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Wrd11.Obj) = ((Wrd15.pObj) [3]);
  ((Wrd13.pObj) [3]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [0]) = (Wrd18.Obj);
  goto loop_15;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_18_13);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  if (! ((Wrd9.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_38;

DEFLABEL (label_37)
  Rvl = (current_block [OBJECT_18_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_18_3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_24]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_25]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_18_24);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_28]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_18_20);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_37;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_21])));
  Rhp += 1;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  Wrd30 = Wrd29;
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [2]);
  ((Wrd30.pObj) [2]) = (Wrd33.Obj);
  (Rsp [0]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_23]));

DEFLABEL (loop_31)
DEFLABEL (loop_15)
  INTERRUPT_CHECK (26, LABEL_18_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_27]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_18_26);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_29])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  ((Wrd10.pObj) [3]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_18_21);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_31]));

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_18_29);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_18_4])))
    goto label_39;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_39)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_18_5])))
    goto label_40;
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [2]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd26.Obj) = ((Wrd30.pObj) [0]);
  (Rsp [1]) = (Wrd26.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_32]));

DEFLABEL (label_40)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_18_6])))
    goto label_41;
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd24.pObj) [0]);
  (Rsp [1]) = (Wrd20.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_33]));

DEFLABEL (label_41)
  if ((Wrd5.Obj) == (current_block [OBJECT_18_7]))
    goto label_42;
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_18_8]);
  (Rsp [1]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_34]));

DEFLABEL (label_42)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [3]);
  (Rsp [2]) = (Wrd16.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_15;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_6 7
#define LABEL_19_11 9
#define LABEL_19_12 11
#define LABEL_19_13 13
#define LABEL_19_8 15
#define LABEL_19_14 17
#define LABEL_19_15 19
#define LABEL_19_16 21
#define ENVIRONMENT_LABEL_19_3 39
#define DEBUGGING_LABEL_19_2 38
#define OBJECT_19_3 37
#define OBJECT_19_2 36
#define OBJECT_19_1 35
#define OBJECT_19_0 34
#define EXECUTE_CACHE_19_17 23
#define EXECUTE_CACHE_19_10 25
#define EXECUTE_CACHE_19_9 27
#define EXECUTE_CACHE_19_7 29
#define FREE_REFERENCE_19_1 32
#define FREE_REFERENCE_19_0 33
#define FREE_REFERENCES_LABEL_19_0 22
#define NUMBER_OF_LINKER_SECTIONS_19_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syncproc_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd40;
  machine_word Wrd62;
  machine_word Wrd63;
  machine_word Wrd16;
  machine_word Wrd66;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd9;
  machine_word Wrd8;
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
      goto start_subprocess_11;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_19_11);
      goto continuation_9;

    case 4:
      current_block = (Rpc - LABEL_19_12);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_19_13);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_19_8);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_19_14);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_19_15);
      goto label_13;

    case 9:
      current_block = (Rpc - LABEL_19_16);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (start_subprocess_18)
DEFLABEL (start_subprocess_11)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_6);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_8);
  (Rsp [2]) = Rvl;
  (Wrd51.Obj) = (Rsp [4]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 62))
    goto label_30;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd50.Lng))))
    goto label_30;
  (Wrd8.Obj) = ((Wrd48.pObj) [9]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_26;

DEFLABEL (label_29)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 0);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_19_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd67.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd70.Obj) = ((Wrd67.pObj) [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd71.uLng) == 50)
    goto label_25;
  Wrd66 = Wrd70;

DEFLABEL (label_24)
  Wrd16 = Wrd66;

DEFLABEL (label_23)
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 62))
    goto label_22;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd25.Lng))))
    goto label_22;
  (Wrd19.Obj) = ((Wrd23.pObj) [7]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_21)
  (Wrd33.Obj) = (Rsp [4]);
  if ((Wrd33.Obj) == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_13]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_19_13);
  (Wrd63.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd63.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd62.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd62.pObj)));

DEFLABEL (label_19)
  Rsp = (& (Rsp [1]));
  (Rsp [4]) = (Wrd40.Obj);
  (Wrd41.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd41.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_20)
  (Wrd40.Obj) = (Rsp [0]);
  goto label_19;

DEFLABEL (label_22)
  (Wrd28.Obj) = (Rsp [4]);
  (Wrd29.Obj) = (current_block [OBJECT_19_2]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_16]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_12])), (Wrd67.pObj));

DEFLABEL (label_16)
  (Wrd66.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_26)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_28;
  Wrd10 = Wrd14;

DEFLABEL (label_27)
  Wrd16 = Wrd10;
  goto label_23;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_15])), (Wrd11.pObj));

DEFLABEL (label_13)
  (Wrd10.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd53.Obj) = (Rsp [4]);
  (Wrd54.Obj) = (current_block [OBJECT_19_0]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_14]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_7 7
#define LABEL_20_9 9
#define LABEL_20_10 11
#define LABEL_20_12 13
#define LABEL_20_14 15
#define LABEL_20_15 17
#define TAG_20_16 7
#define ENVIRONMENT_LABEL_20_3 28
#define DEBUGGING_LABEL_20_2 27
#define EXECUTE_CACHE_20_13 19
#define EXECUTE_CACHE_20_11 21
#define EXECUTE_CACHE_20_8 23
#define EXECUTE_CACHE_20_6 25
#define FREE_REFERENCES_LABEL_20_0 18
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syncproc_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_20_4);
      goto subprocess_wait__13;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_20_9);
      goto tick_loop_11;

    case 4:
      current_block = (Rpc - LABEL_20_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_20_12);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_20_14);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_20_15);
      goto lambda_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_wait__16)
DEFLABEL (subprocess_wait__13)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_7);
  (* (--Rsp)) = Rvl;
  goto tick_loop_11;

DEFLABEL (tick_loop_17)
DEFLABEL (tick_loop_11)
  INTERRUPT_CHECK (26, LABEL_20_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_20_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_20_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_20_14);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [3]);
  if (Rvl == (Wrd6.Obj))
    goto label_19;
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  goto tick_loop_11;

DEFLABEL (label_19)
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd10.Obj);
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_15])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  (Wrd17.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  Rvl = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_20_15);

DEFLABEL (lambda_7)
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

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define TAG_21_7 2
#define LABEL_21_9 9
#define LABEL_21_11 11
#define LABEL_21_12 13
#define LABEL_21_14 15
#define LABEL_21_16 17
#define LABEL_21_17 19
#define LABEL_21_18 21
#define LABEL_21_19 23
#define ENVIRONMENT_LABEL_21_3 42
#define DEBUGGING_LABEL_21_2 41
#define OBJECT_21_5 40
#define OBJECT_21_4 39
#define OBJECT_21_3 38
#define OBJECT_21_2 37
#define OBJECT_21_1 36
#define OBJECT_21_0 35
#define EXECUTE_CACHE_21_15 25
#define EXECUTE_CACHE_21_13 27
#define EXECUTE_CACHE_21_10 29
#define EXECUTE_CACHE_21_8 31
#define FREE_REFERENCE_21_0 34
#define FREE_REFERENCES_LABEL_21_0 24
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syncproc_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_21_4);
      goto abnormal_termination_type_9;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto lambda_14;

    case 3:
      current_block = (Rpc - LABEL_21_9);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_21_11);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_21_12);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_21_14);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_21_16);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_21_17);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_21_18);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_21_19);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (abnormal_termination_type_13)
DEFLABEL (abnormal_termination_type_9)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_16;
  Wrd5 = Wrd9;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_21_0]);
  (Rsp [2]) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_6])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd17.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Rsp [3]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_5])), (Wrd6.pObj));

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_15;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_21_6);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_21_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_21_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_21_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_21_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_21_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_19]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_21_4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_21_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_21_18);
  (Wrd5.Obj) = (current_block [OBJECT_21_5]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_6 5
#define LABEL_22_7 7
#define LABEL_22_5 9
#define LABEL_22_11 11
#define LABEL_22_12 13
#define LABEL_22_13 15
#define LABEL_22_14 17
#define LABEL_22_10 19
#define LABEL_22_15 21
#define TAG_22_16 9
#define LABEL_22_19 23
#define LABEL_22_20 25
#define LABEL_22_23 27
#define LABEL_22_25 29
#define LABEL_22_26 31
#define LABEL_22_21 33
#define TAG_22_22 15
#define LABEL_22_27 35
#define LABEL_22_29 37
#define LABEL_22_31 39
#define LABEL_22_28 41
#define LABEL_22_30 43
#define LABEL_22_34 45
#define LABEL_22_32 47
#define LABEL_22_35 49
#define LABEL_22_36 51
#define LABEL_22_33 53
#define ENVIRONMENT_LABEL_22_3 76
#define DEBUGGING_LABEL_22_2 75
#define OBJECT_22_9 74
#define OBJECT_22_8 73
#define OBJECT_22_7 72
#define OBJECT_22_6 71
#define OBJECT_22_5 70
#define OBJECT_22_4 69
#define OBJECT_22_3 68
#define OBJECT_22_2 67
#define OBJECT_22_1 66
#define OBJECT_22_0 65
#define EXECUTE_CACHE_22_24 55
#define EXECUTE_CACHE_22_18 57
#define EXECUTE_CACHE_22_17 59
#define EXECUTE_CACHE_22_9 61
#define EXECUTE_CACHE_22_8 63
#define FREE_REFERENCES_LABEL_22_0 54
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syncproc_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd29;
  machine_word Wrd6;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd76;
  machine_word Wrd60;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd77;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd74;
  machine_word Wrd75;
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
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd82;
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
      current_block = (Rpc - LABEL_22_4);
      goto synchronous_process_wait_41;

    case 1:
      current_block = (Rpc - LABEL_22_6);
      goto label_43;

    case 2:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_22_11);
      goto label_44;

    case 5:
      current_block = (Rpc - LABEL_22_12);
      goto label_45;

    case 6:
      current_block = (Rpc - LABEL_22_13);
      goto label_46;

    case 7:
      current_block = (Rpc - LABEL_22_14);
      goto label_47;

    case 8:
      current_block = (Rpc - LABEL_22_10);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_22_15);
      goto lambda_54;

    case 10:
      current_block = (Rpc - LABEL_22_19);
      goto label_48;

    case 11:
      current_block = (Rpc - LABEL_22_20);
      goto label_49;

    case 12:
      current_block = (Rpc - LABEL_22_23);
      goto label_50;

    case 13:
      current_block = (Rpc - LABEL_22_25);
      goto continuation_12;

    case 14:
      current_block = (Rpc - LABEL_22_26);
      goto continuation_29;

    case 15:
      current_block = (Rpc - LABEL_22_21);
      goto lambda_55;

    case 16:
      current_block = (Rpc - LABEL_22_27);
      goto loop_36;

    case 17:
      current_block = (Rpc - LABEL_22_29);
      goto do_loop_27;

    case 18:
      current_block = (Rpc - LABEL_22_31);
      goto do_loop_19;

    case 19:
      current_block = (Rpc - LABEL_22_28);
      goto continuation_31;

    case 20:
      current_block = (Rpc - LABEL_22_30);
      goto continuation_22;

    case 21:
      current_block = (Rpc - LABEL_22_34);
      goto continuation_18;

    case 22:
      current_block = (Rpc - LABEL_22_32);
      goto continuation_14;

    case 23:
      current_block = (Rpc - LABEL_22_35);
      goto label_51;

    case 24:
      current_block = (Rpc - LABEL_22_36);
      goto continuation_34;

    case 25:
      current_block = (Rpc - LABEL_22_33);
      goto continuation_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (synchronous_process_wait_53)
DEFLABEL (synchronous_process_wait_41)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_70;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_70;
  (Wrd10.Obj) = ((Wrd14.pObj) [11]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_69)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_7);
  (* (--Rsp)) = Rvl;
  (Wrd82.Obj) = (Rsp [1]);
  if ((Wrd82.Obj) == ((SCHEME_OBJECT) 0))
    goto label_59;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_9]));

DEFLABEL (label_59)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_68)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_67;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_67;
  (Wrd10.Obj) = ((Wrd14.pObj) [6]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_66)
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_65;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_65;
  (Wrd26.Obj) = ((Wrd30.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_64)
  (Wrd49.Obj) = (Rsp [4]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 62))
    goto label_63;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd48.Lng))))
    goto label_63;
  (Wrd42.Obj) = ((Wrd46.pObj) [4]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_62)
  (Wrd65.Obj) = (Rsp [5]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 62))
    goto label_61;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd64.Lng))))
    goto label_61;
  (Wrd58.Obj) = ((Wrd62.pObj) [2]);
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_60)
  (Wrd72.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd75.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_15])));
  Rhp += 3;
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd75.pObj)));
  Wrd80 = Wrd75;
  (Wrd81.Obj) = (Rsp [7]);
  ((Wrd80.pObj) [2]) = (Wrd81.Obj);
  ((Wrd80.pObj) [3]) = (Wrd72.Obj);
  (Wrd77.Obj) = (Rsp [4]);
  ((Wrd80.pObj) [4]) = (Wrd77.Obj);
  (Rsp [4]) = (Wrd74.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_17]));

DEFLABEL (label_61)
  (Wrd67.Obj) = (Rsp [5]);
  (Wrd68.Obj) = (current_block [OBJECT_22_5]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_14]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd51.Obj) = (Rsp [4]);
  (Wrd52.Obj) = (current_block [OBJECT_22_4]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_13]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.Obj) = (current_block [OBJECT_22_3]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_12]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_22_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (label_70)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_22_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_22_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_18]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_22_5);
  goto label_68;

DEFLABEL (lambda_54)
  CLOSURE_HEADER (LABEL_22_15);

DEFLABEL (lambda_39)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_76;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_76;
  (Wrd9.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_75)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [2]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 62))
    goto label_74;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd41.Lng))))
    goto label_74;
  (Wrd33.Obj) = ((Wrd39.pObj) [4]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_73)
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [3]);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd58.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_21])));
  Rhp += 2;
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd58.pObj)));
  Wrd61 = Wrd58;
  (Wrd64.Obj) = ((Wrd54.pObj) [4]);
  ((Wrd61.pObj) [2]) = (Wrd64.Obj);
  (Wrd60.Obj) = (Rsp [4]);
  ((Wrd61.pObj) [3]) = (Wrd60.Obj);
  (Rsp [4]) = (Wrd57.Obj);
  (Wrd80.Obj) = ((Wrd54.pObj) [2]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 62))
    goto label_72;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [0]);
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd77.Lng))))
    goto label_72;
  (Wrd65.Obj) = ((Wrd75.pObj) [5]);

DEFLABEL (label_71)
  (Rsp [3]) = (Wrd65.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_24]));

DEFLABEL (label_72)
  (Wrd83.Obj) = (Rsp [3]);
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd82.Obj) = ((Wrd84.pObj) [2]);
  (Wrd85.Obj) = (current_block [OBJECT_22_6]);
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_23]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_50)
  (Wrd65.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [2]);
  (Wrd49.Obj) = (current_block [OBJECT_22_4]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_20]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_22_5]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_19]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (lambda_55)
  CLOSURE_HEADER (LABEL_22_21);

DEFLABEL (lambda_38)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_80;
  (Wrd9.Obj) = (Rsp [1]);
  if (! ((Wrd9.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_77;
  goto do_loop_27;

DEFLABEL (label_77)
  (Wrd13.Obj) = ((Wrd6.pObj) [2]);
  if (! ((Wrd13.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_79;

DEFLABEL (label_78)
  goto loop_36;

DEFLABEL (label_79)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_26]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_22_26);
  goto label_78;

DEFLABEL (label_80)
  (Wrd21.Obj) = (Rsp [1]);
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_81;
  Rvl = (current_block [OBJECT_22_7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_81)
  (Wrd25.Obj) = ((Wrd6.pObj) [2]);
  if (! ((Wrd25.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_83;

DEFLABEL (label_82)
  goto do_loop_19;

DEFLABEL (label_83)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_25]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_22_25);
  goto label_82;

DEFLABEL (loop_56)
DEFLABEL (loop_36)
  INTERRUPT_CHECK (26, LABEL_22_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_22_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_22_33);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_85;

DEFLABEL (label_84)
  Rsp = (& (Rsp [1]));
  goto loop_36;

DEFLABEL (label_85)
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd8.Lng) > 0)
    goto label_86;
  Rvl = (current_block [OBJECT_22_7]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_86)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  if ((Wrd13.Obj) == ((SCHEME_OBJECT) 0))
    goto label_84;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_36]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_22_36);
  goto label_84;

DEFLABEL (do_loop_57)
DEFLABEL (do_loop_27)
  INTERRUPT_CHECK (26, LABEL_22_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_22_30);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_88;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd8.Lng) > 0)
    goto label_88;
  (Wrd10.Obj) = (current_block [OBJECT_22_8]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd10.Obj);
  goto label_87;

DEFLABEL (label_88)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_87)
DEFLABEL (label_90)
  (Wrd11.Obj) = (Rsp [0]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_89;
  Rvl = (Wrd11.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_89)
  Rsp = (& (Rsp [1]));
  goto do_loop_27;

DEFLABEL (do_loop_58)
DEFLABEL (do_loop_19)
  INTERRUPT_CHECK (26, LABEL_22_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_22_32);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_92;
  (Wrd8.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_92)
  (Wrd8.Obj) = (current_block [OBJECT_22_9]);

DEFLABEL (label_91)
DEFLABEL (label_98)
  Rsp = (& (Rsp [1]));
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 26))
    goto label_97;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if (! ((Wrd27.Lng) == 0))
    goto label_94;

DEFLABEL (label_93)
  Rvl = (current_block [OBJECT_22_8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_94)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  if (! ((Wrd17.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_96;

DEFLABEL (label_95)
  goto do_loop_19;

DEFLABEL (label_96)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_34]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_22_34);
  goto label_95;

DEFLABEL (label_97)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_35]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_51)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_94;
  goto label_93;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_7 7
#define LABEL_23_13 9
#define LABEL_23_10 11
#define TAG_23_11 4
#define LABEL_23_9 13
#define LABEL_23_16 15
#define LABEL_23_14 17
#define LABEL_23_17 19
#define TAG_23_18 8
#define LABEL_23_19 21
#define TAG_23_20 9
#define LABEL_23_24 23
#define LABEL_23_22 25
#define ENVIRONMENT_LABEL_23_3 47
#define DEBUGGING_LABEL_23_2 46
#define OBJECT_23_4 45
#define OBJECT_23_3 44
#define OBJECT_23_2 43
#define OBJECT_23_1 42
#define OBJECT_23_0 41
#define EXECUTE_CACHE_23_25 27
#define EXECUTE_CACHE_23_23 29
#define EXECUTE_CACHE_23_21 31
#define EXECUTE_CACHE_23_15 33
#define EXECUTE_CACHE_23_12 35
#define EXECUTE_CACHE_23_8 37
#define EXECUTE_CACHE_23_6 39
#define FREE_REFERENCES_LABEL_23_0 26
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syncproc_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd6;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_23_4);
      goto call_with_input_copier_17;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_23_13);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_23_10);
      goto lambda_21;

    case 5:
      current_block = (Rpc - LABEL_23_9);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_23_16);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_23_14);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_23_17);
      goto lambda_22;

    case 9:
      current_block = (Rpc - LABEL_23_19);
      goto lambda_23;

    case 10:
      current_block = (Rpc - LABEL_23_24);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_23_22);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_with_input_copier_20)
DEFLABEL (call_with_input_copier_17)
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
  (Wrd8.Obj) = (current_block [OBJECT_23_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_10])));
  Rhp += 6;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd20 = Wrd9;
  (Wrd21.Obj) = (Rsp [6]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  ((Wrd20.pObj) [4]) = (Wrd17.Obj);
  ((Wrd20.pObj) [5]) = (Wrd5.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd20.pObj) [6]) = (Wrd13.Obj);
  ((Wrd20.pObj) [7]) = Rvl;
  (Rsp [6]) = (Wrd8.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd22.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_12]));

DEFLABEL (label_24)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_23_9);
  (Wrd5.Obj) = (Rsp [6]);
  (Rsp [5]) = (Wrd5.Obj);
  (Rsp [6]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_23_10);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_23_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_16]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_23_2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_23_16);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_23_13);

DEFLABEL (label_25)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_14]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd31.Obj) = ((Wrd24.pObj) [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_23_14);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_17])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd18 = Wrd7;
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [5]);
  ((Wrd18.pObj) [2]) = (Wrd21.Obj);
  (Wrd17.Obj) = ((Wrd20.pObj) [6]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd20.pObj) [7]);
  ((Wrd18.pObj) [4]) = (Wrd13.Obj);
  ((Wrd18.pObj) [5]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_23_17);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_23_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_19])));
  Rhp += 4;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd24 = Wrd11;
  ((Wrd24.pObj) [2]) = (Wrd8.Obj);
  (Wrd23.Obj) = ((Wrd7.pObj) [3]);
  ((Wrd24.pObj) [3]) = (Wrd23.Obj);
  (Wrd19.Obj) = ((Wrd7.pObj) [4]);
  ((Wrd24.pObj) [4]) = (Wrd19.Obj);
  (Wrd15.Obj) = ((Wrd7.pObj) [5]);
  ((Wrd24.pObj) [5]) = (Wrd15.Obj);
  (Rsp [2]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_21]));

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_23_19);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_23]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_23_22);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_27;

DEFLABEL (label_26)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd8.Lng) > 0)
    goto label_28;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_24]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_23_24);
  goto label_26;

DEFLABEL (label_28)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd22.Obj) = (current_block [OBJECT_23_4]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = ((Wrd24.pObj) [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_25]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define TAG_24_6 1
#define LABEL_24_8 7
#define LABEL_24_9 9
#define TAG_24_10 3
#define LABEL_24_14 11
#define LABEL_24_12 13
#define LABEL_24_15 15
#define ENVIRONMENT_LABEL_24_3 34
#define DEBUGGING_LABEL_24_2 33
#define OBJECT_24_3 32
#define OBJECT_24_2 31
#define OBJECT_24_1 30
#define OBJECT_24_0 29
#define EXECUTE_CACHE_24_17 17
#define EXECUTE_CACHE_24_16 19
#define EXECUTE_CACHE_24_13 21
#define EXECUTE_CACHE_24_11 23
#define EXECUTE_CACHE_24_7 25
#define FREE_REFERENCE_24_0 28
#define FREE_REFERENCES_LABEL_24_0 16
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syncproc_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_24_4);
      goto handle_broken_pipe_8;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto lambda_13;

    case 2:
      current_block = (Rpc - LABEL_24_8);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_24_9);
      goto lambda_14;

    case 4:
      current_block = (Rpc - LABEL_24_14);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_24_12);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_24_15);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handle_broken_pipe_12)
DEFLABEL (handle_broken_pipe_8)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_24_5);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_16;
  Wrd6 = Wrd10;

DEFLABEL (label_15)
  (Wrd15.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [2]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_9])));
  Rhp += 2;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd24 = Wrd21;
  (Wrd27.Obj) = ((Wrd18.pObj) [3]);
  ((Wrd24.pObj) [2]) = (Wrd27.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  ((Wrd24.pObj) [3]) = (Wrd23.Obj);
  (Rsp [1]) = (Wrd20.Obj);
  (Rsp [2]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_11]));

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_8])), (Wrd7.pObj));

DEFLABEL (label_10)
  (Wrd6.Obj) = Rvl;
  goto label_15;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_24_9);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_12);
  if (Rvl == (current_block [OBJECT_24_2]))
    goto label_18;

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_24_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_24_14);
  if (! (Rvl == (current_block [OBJECT_24_1])))
    goto label_17;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_15]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_24_15);
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

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_7 7
#define LABEL_25_9 9
#define LABEL_25_12 11
#define LABEL_25_10 13
#define LABEL_25_13 15
#define TAG_25_14 6
#define LABEL_25_19 17
#define LABEL_25_20 19
#define LABEL_25_15 21
#define LABEL_25_22 23
#define LABEL_25_17 25
#define LABEL_25_23 27
#define TAG_25_24 12
#define LABEL_25_21 29
#define LABEL_25_27 31
#define TAG_25_28 14
#define LABEL_25_29 33
#define ENVIRONMENT_LABEL_25_3 56
#define DEBUGGING_LABEL_25_2 55
#define OBJECT_25_5 54
#define OBJECT_25_4 53
#define OBJECT_25_3 52
#define OBJECT_25_2 51
#define OBJECT_25_1 50
#define OBJECT_25_0 49
#define EXECUTE_CACHE_25_26 35
#define EXECUTE_CACHE_25_25 37
#define EXECUTE_CACHE_25_18 39
#define EXECUTE_CACHE_25_16 41
#define EXECUTE_CACHE_25_11 43
#define EXECUTE_CACHE_25_8 45
#define EXECUTE_CACHE_25_6 47
#define FREE_REFERENCES_LABEL_25_0 34
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syncproc_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_25_4);
      goto call_with_output_copier_28;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_25_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_25_12);
      goto continuation_10;

    case 5:
      current_block = (Rpc - LABEL_25_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_25_13);
      goto lambda_32;

    case 7:
      current_block = (Rpc - LABEL_25_19);
      goto continuation_22;

    case 8:
      current_block = (Rpc - LABEL_25_20);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_25_15);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_25_22);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_25_17);
      goto continuation_4;

    case 12:
      current_block = (Rpc - LABEL_25_23);
      goto lambda_33;

    case 13:
      current_block = (Rpc - LABEL_25_21);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_25_27);
      goto do_loop_20;

    case 15:
      current_block = (Rpc - LABEL_25_29);
      goto continuation_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_with_output_copier_31)
DEFLABEL (call_with_output_copier_28)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_25_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_35;
  (Wrd11.Obj) = (Rsp [7]);
  (Rsp [6]) = (Wrd11.Obj);
  (Rsp [7]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_35)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_25_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_13])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [5]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  ((Wrd12.pObj) [4]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  if ((Wrd14.Obj) == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_25_2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_25_12);

DEFLABEL (label_38)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_15]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd25.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_25_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_37;

DEFLABEL (label_36)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_25_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_21]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_25_3]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_16]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_25_21);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_28);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_27])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  Wrd8 = Wrd10;
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd11.Obj);
  goto do_loop_20;

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_25_13);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_25_17);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_40;

DEFLABEL (label_39)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd8.Lng) > 0))
    goto label_39;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_22]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_23])));
  Rhp += 3;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd22 = Wrd15;
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  ((Wrd22.pObj) [2]) = (Wrd25.Obj);
  (Wrd21.Obj) = ((Wrd24.pObj) [4]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  ((Wrd22.pObj) [4]) = Rvl;
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_25_3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_25]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_25_22);
  goto label_39;

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_25_23);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_25_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [3]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_26]));

DEFLABEL (do_loop_34)
DEFLABEL (do_loop_20)
  INTERRUPT_CHECK (26, LABEL_25_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto lambda_9;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_25_29);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd6.Lng) > 0)
    goto label_42;
  (Wrd7.Obj) = (current_block [OBJECT_25_5]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_41;

DEFLABEL (label_42)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_41)
DEFLABEL (label_44)
  (Wrd8.Obj) = (Rsp [0]);
  if (! ((Wrd8.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_43;
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [1]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_20;

DEFLABEL (label_43)
  Rsp = (& (Rsp [2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_25_19);
  goto label_36;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_11 7
#define LABEL_7 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_13 15
#define LABEL_17 17
#define LABEL_15 19
#define LABEL_16 21
#define LABEL_19 23
#define LABEL_22 25
#define LABEL_20 27
#define LABEL_21 29
#define LABEL_24 31
#define LABEL_25 33
#define LABEL_30 35
#define LABEL_31 37
#define LABEL_26 39
#define LABEL_28 41
#define LABEL_29 43
#define LABEL_33 45
#define LABEL_37 47
#define LABEL_38 49
#define LABEL_34 51
#define LABEL_35 53
#define LABEL_36 55
#define LABEL_39 57
#define LABEL_42 59
#define LABEL_40 61
#define LABEL_46 63
#define LABEL_41 65
#define LABEL_44 67
#define LABEL_45 69
#define LABEL_47 71
#define LABEL_48 73
#define LABEL_49 75
#define ENVIRONMENT_LABEL_3 143
#define DEBUGGING_LABEL_2 142
#define PURIFICATION_ROOT 141
#define OBJECT_37 140
#define OBJECT_36 139
#define OBJECT_35 138
#define OBJECT_34 137
#define OBJECT_33 136
#define OBJECT_32 135
#define OBJECT_31 134
#define OBJECT_30 133
#define OBJECT_29 132
#define OBJECT_28 131
#define OBJECT_27 130
#define OBJECT_26 129
#define OBJECT_25 128
#define OBJECT_24 127
#define OBJECT_23 126
#define OBJECT_22 125
#define OBJECT_21 124
#define OBJECT_20 123
#define OBJECT_19 122
#define OBJECT_18 121
#define OBJECT_17 120
#define OBJECT_16 119
#define OBJECT_15 118
#define OBJECT_14 117
#define OBJECT_13 116
#define OBJECT_12 115
#define OBJECT_11 114
#define OBJECT_10 113
#define OBJECT_9 112
#define OBJECT_8 111
#define OBJECT_7 110
#define OBJECT_6 109
#define OBJECT_5 108
#define OBJECT_4 107
#define OBJECT_3 106
#define OBJECT_2 105
#define OBJECT_1 104
#define OBJECT_0 103
#define EXECUTE_CACHE_43 77
#define EXECUTE_CACHE_32 79
#define EXECUTE_CACHE_27 81
#define EXECUTE_CACHE_23 83
#define EXECUTE_CACHE_5 85
#define FREE_REFERENCE_5 88
#define FREE_REFERENCE_4 89
#define FREE_REFERENCE_3 90
#define FREE_REFERENCE_2 91
#define FREE_REFERENCE_1 92
#define FREE_REFERENCE_0 93
#define GLOBAL_EXECUTE_CACHE_18 95
#define GLOBAL_EXECUTE_CACHE_14 97
#define GLOBAL_EXECUTE_CACHE_12 99
#define GLOBAL_EXECUTE_CACHE_8 101
#define FREE_REFERENCES_LABEL_0 76
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
syncproc_so_41e3ffb8118dd9a6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd7;
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
      goto continuation_12;

    case 2:
      current_block = (Rpc - LABEL_11);
      goto label_37;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_11;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_14;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_13;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_15;

    case 7:
      current_block = (Rpc - LABEL_17);
      goto label_38;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto continuation_17;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_16;

    case 10:
      current_block = (Rpc - LABEL_19);
      goto continuation_18;

    case 11:
      current_block = (Rpc - LABEL_22);
      goto label_39;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto continuation_20;

    case 13:
      current_block = (Rpc - LABEL_21);
      goto continuation_19;

    case 14:
      current_block = (Rpc - LABEL_24);
      goto continuation_21;

    case 15:
      current_block = (Rpc - LABEL_25);
      goto continuation_23;

    case 16:
      current_block = (Rpc - LABEL_30);
      goto label_40;

    case 17:
      current_block = (Rpc - LABEL_31);
      goto label_41;

    case 18:
      current_block = (Rpc - LABEL_26);
      goto continuation_22;

    case 19:
      current_block = (Rpc - LABEL_28);
      goto continuation_25;

    case 20:
      current_block = (Rpc - LABEL_29);
      goto continuation_24;

    case 21:
      current_block = (Rpc - LABEL_33);
      goto continuation_27;

    case 22:
      current_block = (Rpc - LABEL_37);
      goto label_42;

    case 23:
      current_block = (Rpc - LABEL_38);
      goto label_43;

    case 24:
      current_block = (Rpc - LABEL_34);
      goto continuation_26;

    case 25:
      current_block = (Rpc - LABEL_35);
      goto continuation_29;

    case 26:
      current_block = (Rpc - LABEL_36);
      goto continuation_28;

    case 27:
      current_block = (Rpc - LABEL_39);
      goto continuation_30;

    case 28:
      current_block = (Rpc - LABEL_42);
      goto label_44;

    case 29:
      current_block = (Rpc - LABEL_40);
      goto continuation_32;

    case 30:
      current_block = (Rpc - LABEL_46);
      goto label_45;

    case 31:
      current_block = (Rpc - LABEL_41);
      goto continuation_31;

    case 32:
      current_block = (Rpc - LABEL_44);
      goto continuation_34;

    case 33:
      current_block = (Rpc - LABEL_45);
      goto continuation_33;

    case 34:
      current_block = (Rpc - LABEL_47);
      goto label_48;

    case 35:
      current_block = (Rpc - LABEL_48);
      goto label_49;

    case 36:
      current_block = (Rpc - LABEL_49);
      goto expression_36;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_36)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_48])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_49)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_48)
  {
    static const short sections [] =
      {
	0,
	1,
	2,
	1,
	1,
	2,
	1,
	2,
	1,
	2,
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
	1,
	0,
	1,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 25)
      goto label_47;
    blocks = (current_block [OBJECT_37]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_47])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_47)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_1]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd20.Obj);
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
  (Wrd40.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Wrd44.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (Wrd48.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd53.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_67;
  Wrd11 = Wrd15;

DEFLABEL (label_66)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_65;
  Wrd11 = Wrd15;

DEFLABEL (label_64)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_18]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_63;
  Wrd13 = Wrd17;

DEFLABEL (label_62)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_26);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_61;
  Wrd11 = Wrd15;

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_59;
  Wrd18 = Wrd22;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_29);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_34);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_57;
  Wrd11 = Wrd15;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_55;
  Wrd18 = Wrd22;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_36);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_53;
  Wrd12 = Wrd16;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_41);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_51;
  Wrd12 = Wrd16;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_45);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd5.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_35]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46])), (Wrd13.pObj));

DEFLABEL (label_45)
  (Wrd12.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42])), (Wrd13.pObj));

DEFLABEL (label_44)
  (Wrd12.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38])), (Wrd19.pObj));

DEFLABEL (label_43)
  (Wrd18.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37])), (Wrd12.pObj));

DEFLABEL (label_42)
  (Wrd11.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31])), (Wrd19.pObj));

DEFLABEL (label_41)
  (Wrd18.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30])), (Wrd12.pObj));

DEFLABEL (label_40)
  (Wrd11.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22])), (Wrd14.pObj));

DEFLABEL (label_39)
  (Wrd13.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd12.pObj));

DEFLABEL (label_38)
  (Wrd11.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd12.pObj));

DEFLABEL (label_37)
  (Wrd11.Obj) = Rvl;
  goto label_66;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_syncproc_so_41e3ffb8118dd9a6 [25] =
  {
    { "syncproc_so_code_1", 1, syncproc_so_code_1 },
    { "syncproc_so_code_2", 1, syncproc_so_code_2 },
    { "syncproc_so_code_3", 1, syncproc_so_code_3 },
    { "syncproc_so_code_4", 1, syncproc_so_code_4 },
    { "syncproc_so_code_5", 1, syncproc_so_code_5 },
    { "syncproc_so_code_6", 1, syncproc_so_code_6 },
    { "syncproc_so_code_7", 1, syncproc_so_code_7 },
    { "syncproc_so_code_8", 1, syncproc_so_code_8 },
    { "syncproc_so_code_9", 1, syncproc_so_code_9 },
    { "syncproc_so_code_10", 1, syncproc_so_code_10 },
    { "syncproc_so_code_11", 1, syncproc_so_code_11 },
    { "syncproc_so_code_12", 1, syncproc_so_code_12 },
    { "syncproc_so_code_13", 1, syncproc_so_code_13 },
    { "syncproc_so_code_14", 1, syncproc_so_code_14 },
    { "syncproc_so_code_15", 4, syncproc_so_code_15 },
    { "syncproc_so_code_16", 5, syncproc_so_code_16 },
    { "syncproc_so_code_17", 3, syncproc_so_code_17 },
    { "syncproc_so_code_18", 13, syncproc_so_code_18 },
    { "syncproc_so_code_19", 10, syncproc_so_code_19 },
    { "syncproc_so_code_20", 8, syncproc_so_code_20 },
    { "syncproc_so_code_21", 11, syncproc_so_code_21 },
    { "syncproc_so_code_22", 26, syncproc_so_code_22 },
    { "syncproc_so_code_23", 12, syncproc_so_code_23 },
    { "syncproc_so_code_24", 7, syncproc_so_code_24 },
    { "syncproc_so_code_25", 16, syncproc_so_code_25 }
  };

int
decl_syncproc_so_41e3ffb8118dd9a6 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_syncproc_so_41e3ffb8118dd9a6);
  return (0);
}

DECLARE_COMPILED_CODE ("syncproc.so", 37, decl_syncproc_so_41e3ffb8118dd9a6, syncproc_so_41e3ffb8118dd9a6)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_syncproc_so_data_41e3ffb8118dd9a6 [4501] =
  "\x90\x01\x32\x9f\x07\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x02\x22\x29"
  "\x21\x9d\x2b\xb9\x1d\xb0\x82\x88\x28\x0d\x23\x22\x29\x21\x9f\x2b"
  "\xba\x1d\xb0\x83\x88\x02\x22\x29\x21\x9d\x2b\xbb\x1d\xb0\x84\x88"
  "\x28\x0d\x23\x22\x29\x21\x9f\x2b\xbc\x1d\xb0\x85\x88\xc2\xbd\x81"
  "\x22\x29\x21\x9e\x2b\xbe\x1d\xb0\x86\x88\xb5\x82\x22\x29\x21\x9e"
  "\x2b\xbf\x1d\xb0\x02\x88\xb5\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\xb5\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb5\x85"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb5\x86\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\xb5\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\xb5\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb5\x02"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb5\x02\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\xb5\x80\xc1\x0e\x1c\x24\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5\x02\xc2"
  "\x1c\x0d\x1c\x24\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x24\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x0d\x0d\x0d\x1c\x0d\x1c\x1b\x1b\x08\x89\x1d\xb5\x02\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc0\x86"
  "\xb5\x02\x0d\x0d\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x28"
  "\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0d\x1c\x0c"
  "\x0d\x1c\x0c\x08\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x80\x07\x1d\x84\x81\x83\x82\x85\xb5\x02\x28\x0d\x28\x0d\x28\x0d"
  "\xbd\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x80\x0d\x1c\x0d\x0d\x1c\x0d\x28\x0d\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\x1b\x0d\x08\x0d\x1c\x24\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x80\x1b\x1b\x0d\x0d\x28"
  "\x0d\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x17\x1c\x88\x1b\x1b\x1b\x2a\x1b\x1b\x0d\x0d\x1b\x1b\xb5"
  "\x1b\x9a\x1b\x2a\x1b\x2a\x1b\x2a\x9a\x0d\x1c\x1b\x0d\x0c\x0d\x1c"
  "\x0d\x0c\x1b\x0d\x1c\x1b\x2a\x0d\x1b\x1b\x08\x89\x1b\x1b\x1b\x1b"
  "\x0d\x0d\x0d\x9d\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x9d\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x17\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb6"
  "\x2a\x17\xc3\x0d\x1c\x0c\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x08\x14\xb1\x2a\xb2\x2a\xb3\x2a\xb4\x2a\x08\x1b\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\x26\x1b\x0d\x0d\x1b\x1b\x1b\x24\x28\x0d\x28\x1b"
  "\x28\x1b\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x02\x57\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f"
  "\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32"
  "\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x73"
  "\x79\x6e\x63\x70\x72\x6f\x63\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75"
  "\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d"
  "\x02\x81\x04\x26\x04\x82\x02\x03\x02\x02\x14\x63\x75\x72\x72\x65"
  "\x6e\x74\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x02\x27"
  "\x04\x82\x02\x03\x02\x81\x04\x28\x04\x82\x02\x03\x02\x02\x13\x6f"
  "\x73\x2f\x73\x68\x65\x6c\x6c\x2d\x66\x69\x6c\x65\x2d\x6e\x61\x6d"
  "\x65\x02\x29\x04\x82\x02\x03\x02\x0c\x25\x72\x65\x63\x6f\x72\x64"
  "\x2d\x72\x65\x66\x2a\x04\x83\x04\x03\x02\x2b\x04\x83\x04\x03\x02"
  "\x08\x2c\x04\x83\x04\x03\x09\x02\x09\x2d\x04\x83\x04\x03\x0a\x02"
  "\x0a\x2e\x04\x83\x04\x03\x0b\x02\x0b\x2f\x04\x83\x04\x03\x0c\x02"
  "\x0c\x08\x30\x04\x83\x04\x03\x0d\x02\x0d\x09\x31\x04\x83\x04\x03"
  "\x0e\x02\x0e\x0a\x32\x04\x83\x04\x03\x0f\x02\x0f\x0b\x33\x04\x83"
  "\x04\x03\x10\x02\x10\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65"
  "\x6e\x67\x74\x68\x07\x2e\x74\x61\x67\x2e\x31\x11\x02\x37\x0a\x81"
  "\x85\x02\x36\x08\x81\x83\x02\x35\x06\x81\x83\x02\x34\x04\x83\x04"
  "\x09\x12\x12\x02\x11\x0a\x06\x61\x70\x70\x6c\x79\x13\x18\x6d\x61"
  "\x6b\x65\x2d\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x63\x6f"
  "\x6e\x74\x65\x78\x74\x14\x02\x03\x16\x6f\x73\x2f\x66\x6f\x72\x6d"
  "\x2d\x73\x68\x65\x6c\x6c\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x05\x1d"
  "\x72\x75\x6e\x2d\x73\x79\x6e\x63\x68\x72\x6f\x6e\x6f\x75\x73\x2d"
  "\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x31\x15\x03\x3c\x0c"
  "\x81\x87\x02\x3b\x0a\x81\x87\x02\x3a\x08\x81\x85\x02\x39\x06\x81"
  "\x89\x02\x38\x04\xfe\x05\x0b\x18\x16\x02\x12\x13\x14\x02\x05\x15"
  "\x02\x3f\x08\x81\x87\x02\x3e\x06\x81\x8b\x02\x3d\x04\xfd\x07\x07"
  "\x10\x13\x02\x13\x27\x49\x6e\x76\x61\x6c\x69\x64\x20\x73\x79\x6e"
  "\x63\x68\x72\x6f\x6e\x6f\x75\x73\x20\x73\x75\x62\x70\x72\x6f\x63"
  "\x65\x73\x73\x20\x73\x74\x61\x74\x75\x73\x3a\x08\x72\x75\x6e\x6e"
  "\x69\x6e\x67\x08\x73\x74\x6f\x70\x70\x65\x64\x0a\x73\x69\x67\x6e"
  "\x61\x6c\x6c\x65\x64\x17\x07\x65\x78\x69\x74\x65\x64\x18\x18\x17"
  "\x02\x08\x02\x1b\x77\x6f\x72\x6b\x69\x6e\x67\x2d\x64\x69\x72\x65"
  "\x63\x74\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x03\x10"
  "\x6d\x65\x72\x67\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x73\x05"
  "\x0d\x64\x79\x6e\x61\x6d\x69\x63\x2d\x77\x69\x6e\x64\x06\x11\x73"
  "\x74\x61\x72\x74\x2d\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x18"
  "\x03\x0e\x69\x67\x6e\x6f\x72\x65\x2d\x65\x72\x72\x6f\x72\x73\x03"
  "\x12\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x73\x74\x61\x74"
  "\x75\x73\x17\x04\x19\x73\x79\x6e\x63\x68\x72\x6f\x6e\x6f\x75\x73"
  "\x2d\x70\x72\x6f\x63\x65\x73\x73\x2d\x77\x61\x69\x74\x19\x04\x05"
  "\x6d\x65\x6d\x71\x03\x10\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73"
  "\x2d\x6b\x69\x6c\x6c\x04\x1b\x65\x72\x72\x6f\x72\x3a\x73\x75\x62"
  "\x70\x72\x6f\x63\x65\x73\x73\x2d\x73\x69\x67\x6e\x61\x6c\x6c\x65"
  "\x64\x1a\x04\x19\x65\x72\x72\x6f\x72\x3a\x73\x75\x62\x70\x72\x6f"
  "\x63\x65\x73\x73\x2d\x73\x74\x6f\x70\x70\x65\x64\x1b\x04\x06\x65"
  "\x72\x72\x6f\x72\x0d\x4c\x1c\x81\x87\x02\x4b\x1a\x81\x83\x02\x4a"
  "\x18\x81\x83\x02\x49\x16\x81\x87\x02\x48\x14\x81\x83\x02\x47\x12"
  "\x81\x83\x02\x46\x10\x81\x83\x02\x45\x0e\x81\x83\x02\x44\x0c\x81"
  "\x83\x02\x43\x0a\x81\x83\x02\x42\x08\x81\x89\x02\x41\x06\x81\x8b"
  "\x02\x40\x04\x85\x08\x1b\x40\x1c\x02\x14\x0b\x68\x61\x76\x65\x2d"
  "\x70\x74\x79\x73\x3f\x09\x15\x73\x74\x61\x72\x74\x2d\x70\x74\x79"
  "\x2d\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x16\x73\x74\x61\x72"
  "\x74\x2d\x70\x69\x70\x65\x2d\x73\x75\x62\x70\x72\x6f\x63\x65\x73"
  "\x73\x03\x03\x10\x66\x69\x6c\x65\x2d\x6e\x61\x6d\x65\x73\x74\x72"
  "\x69\x6e\x67\x04\x10\x6f\x73\x2f\x66\x69\x6e\x64\x2d\x70\x72\x6f"
  "\x67\x72\x61\x6d\x03\x0d\x6c\x69\x73\x74\x2d\x3e\x76\x65\x63\x74"
  "\x6f\x72\x03\x0d\x2d\x3e\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e\x67"
  "\x05\x56\x16\x81\x8b\x02\x55\x14\x81\x8b\x02\x54\x12\x81\x8b\x02"
  "\x53\x10\x81\x8b\x02\x52\x0e\x81\x8d\x02\x51\x0c\x81\x8b\x02\x50"
  "\x0a\x81\x8b\x02\x4f\x08\x81\x8b\x02\x4e\x06\x81\x89\x02\x4d\x04"
  "\x86\x0a\x15\x28\x1d\x02\x15\x03\x10\x73\x75\x62\x70\x72\x6f\x63"
  "\x65\x73\x73\x2d\x77\x61\x69\x74\x1e\x03\x17\x73\x75\x62\x70\x72"
  "\x6f\x63\x65\x73\x73\x2d\x73\x74\x61\x74\x75\x73\x2d\x74\x69\x63"
  "\x6b\x03\x17\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x65\x78"
  "\x69\x74\x2d\x72\x65\x61\x73\x6f\x6e\x03\x17\x05\x5e\x12\x81\x85"
  "\x02\x5d\x10\x81\x89\x02\x5c\x0e\x81\x87\x02\x5b\x0c\x81\x85\x02"
  "\x5a\x0a\x81\x85\x02\x59\x08\x81\x83\x02\x58\x06\x81\x83\x02\x57"
  "\x04\x83\x04\x11\x1d\x17\x02\x16\x02\x2e\x07\x72\x65\x61\x73\x6f"
  "\x6e\x1f\x02\x20\x0b\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x20"
  "\x0c\x53\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x20\x2f\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x73\x75\x62\x70"
  "\x72\x6f\x63\x65\x73\x73\x2d\x61\x62\x6e\x6f\x72\x6d\x61\x6c\x2d"
  "\x74\x65\x72\x6d\x69\x6e\x61\x74\x69\x6f\x6e\x21\x02\x06\x14\x6d"
  "\x61\x6b\x65\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79"
  "\x70\x65\x22\x04\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e"
  "\x67\x04\x11\x61\x63\x63\x65\x73\x73\x2d\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x04\x06\x77\x72\x69\x74\x65\x23\x05\x69\x18\x81\x8b"
  "\x02\x68\x16\x81\x87\x02\x67\x14\x81\x87\x02\x66\x12\x81\x87\x02"
  "\x65\x10\x81\x87\x02\x64\x0e\x81\x8b\x02\x63\x0c\x81\x87\x02\x62"
  "\x0a\x81\x87\x02\x61\x08\x81\x87\x02\x60\x06\x81\x85\x02\x5f\x04"
  "\x84\x06\x17\x2b\x24\x02\x17\x02\x0b\x03\x14\x73\x75\x62\x70\x72"
  "\x6f\x63\x65\x73\x73\x2d\x69\x2f\x6f\x2d\x70\x6f\x72\x74\x04\x15"
  "\x70\x6f\x72\x74\x2f\x73\x65\x74\x2d\x6c\x69\x6e\x65\x2d\x65\x6e"
  "\x64\x69\x6e\x67\x07\x17\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d"
  "\x69\x6e\x70\x75\x74\x2d\x63\x6f\x70\x69\x65\x72\x03\x11\x73\x75"
  "\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x77\x61\x69\x74\x2a\x25\x07"
  "\x18\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x6f\x75\x74\x70\x75"
  "\x74\x2d\x63\x6f\x70\x69\x65\x72\x26\x06\x83\x01\x36\x81\x85\x02"
  "\x82\x01\x34\x81\x87\x02\x81\x01\x32\x81\x85\x02\x80\x01\x30\x81"
  "\x85\x02\x7f\x2e\x81\x85\x02\x7e\x2c\x81\x85\x02\x7d\x2a\x81\x85"
  "\x02\x7c\x28\x81\x85\x02\x7b\x26\x81\x85\x02\x7a\x24\x81\x85\x02"
  "\x79\x22\x81\x85\x02\x78\x20\x81\x85\x02\x77\x1e\x81\x85\x02\x76"
  "\x1c\x81\x8b\x02\x75\x1a\x81\x87\x02\x74\x18\x81\x85\x02\x73\x16"
  "\x81\x85\x02\x72\x14\x81\x85\x02\x71\x12\x81\x87\x02\x70\x10\x81"
  "\x85\x02\x6f\x0e\x81\x83\x02\x6e\x0c\x81\x87\x02\x6d\x0a\x81\x85"
  "\x02\x6c\x08\x81\x89\x02\x6b\x06\x81\x87\x02\x6a\x04\x84\x06\x35"
  "\x4d\x27\x02\x18\x09\x62\x6c\x6f\x63\x6b\x69\x6e\x67\x28\x19\x73"
  "\x65\x74\x2d\x6f\x75\x74\x70\x75\x74\x2d\x62\x6c\x6f\x63\x6b\x69"
  "\x6e\x67\x2d\x6d\x6f\x64\x65\x0c\x6e\x6f\x6e\x62\x6c\x6f\x63\x6b"
  "\x69\x6e\x67\x29\x0d\x63\x6c\x6f\x73\x65\x2d\x6f\x75\x74\x70\x75"
  "\x74\x03\x17\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x6f\x75"
  "\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x04\x0f\x70\x6f\x72\x74\x2f"
  "\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2a\x04\x13\x68\x61\x6e\x64"
  "\x6c\x65\x2d\x62\x72\x6f\x6b\x65\x6e\x2d\x70\x69\x70\x65\x2b\x03"
  "\x11\x6d\x61\x6b\x65\x2d\x77\x69\x64\x65\x2d\x73\x74\x72\x69\x6e"
  "\x67\x2c\x05\x1e\x70\x6f\x72\x74\x2f\x77\x69\x74\x68\x2d\x69\x6e"
  "\x70\x75\x74\x2d\x62\x6c\x6f\x63\x6b\x69\x6e\x67\x2d\x6d\x6f\x64"
  "\x65\x04\x18\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x72\x65"
  "\x61\x64\x2d\x73\x74\x72\x69\x6e\x67\x21\x2d\x06\x1c\x6f\x75\x74"
  "\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x77\x72\x69\x74\x65\x2d\x73"
  "\x75\x62\x73\x74\x72\x69\x6e\x67\x2e\x08\x8f\x01\x1a\x81\x83\x02"
  "\x8e\x01\x18\x81\x85\x02\x8d\x01\x16\x81\x83\x02\x8c\x01\x14\x81"
  "\x83\x02\x8b\x01\x12\x81\x85\x02\x8a\x01\x10\x81\x89\x02\x89\x01"
  "\x0e\x81\x8f\x02\x88\x01\x0c\x81\x83\x02\x87\x01\x0a\x81\x83\x02"
  "\x86\x01\x08\x81\x8d\x02\x85\x01\x06\x81\x8b\x02\x84\x01\x04\x87"
  "\x0c\x19\x30\x2f\x02\x19\x02\x23\x0c\x62\x72\x6f\x6b\x65\x6e\x2d"
  "\x70\x69\x70\x65\x21\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74"
  "\x79\x70\x65\x3a\x73\x79\x73\x74\x65\x6d\x2d\x63\x61\x6c\x6c\x2d"
  "\x65\x72\x72\x6f\x72\x23\x02\x03\x1f\x63\x61\x6c\x6c\x2d\x77\x69"
  "\x74\x68\x2d\x63\x75\x72\x72\x65\x6e\x74\x2d\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x05\x17\x62\x69\x6e\x64\x2d\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x68\x61\x6e\x64\x6c\x65\x72\x03"
  "\x11\x73\x79\x73\x74\x65\x6d\x2d\x63\x61\x6c\x6c\x2d\x6e\x61\x6d"
  "\x65\x30\x03\x1e\x03\x12\x73\x79\x73\x74\x65\x6d\x2d\x63\x61\x6c"
  "\x6c\x2d\x65\x72\x72\x6f\x72\x1e\x06\x96\x01\x10\x81\x85\x02\x95"
  "\x01\x0e\x81\x85\x02\x94\x01\x0c\x81\x85\x02\x93\x01\x0a\x81\x85"
  "\x02\x92\x01\x08\x81\x85\x02\x91\x01\x06\x81\x85\x02\x90\x01\x04"
  "\x84\x06\x0f\x23\x31\x02\x1a\x28\x29\x0c\x69\x6e\x70\x75\x74\x2d"
  "\x6f\x70\x65\x6e\x3f\x0c\x63\x6c\x6f\x73\x65\x2d\x69\x6e\x70\x75"
  "\x74\x03\x16\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x69\x6e"
  "\x70\x75\x74\x2d\x70\x6f\x72\x74\x04\x2a\x03\x2c\x04\x1d\x70\x6f"
  "\x72\x74\x2f\x73\x65\x74\x2d\x69\x6e\x70\x75\x74\x2d\x62\x6c\x6f"
  "\x63\x6b\x69\x6e\x67\x2d\x6d\x6f\x64\x65\x04\x2d\x05\x1f\x70\x6f"
  "\x72\x74\x2f\x77\x69\x74\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x62"
  "\x6c\x6f\x63\x6b\x69\x6e\x67\x2d\x6d\x6f\x64\x65\x06\x2e\x08\xa6"
  "\x01\x22\x81\x97\x02\xa5\x01\x20\x81\x97\x02\xa4\x01\x1e\x81\x95"
  "\x02\xa3\x01\x1c\x81\x83\x02\xa2\x01\x1a\x81\x83\x02\xa1\x01\x18"
  "\x81\x85\x02\xa0\x01\x16\x81\x93\x02\x9f\x01\x14\x81\x95\x02\x9e"
  "\x01\x12\x81\x95\x02\x9d\x01\x10\x81\x83\x02\x9c\x01\x0e\x81\x91"
  "\x02\x9b\x01\x0c\x81\x93\x02\x9a\x01\x0a\x81\x8f\x02\x99\x01\x08"
  "\x81\x8d\x02\x98\x01\x06\x81\x8b\x02\x97\x01\x04\x87\x0c\x21\x39"
  "\x2e\x1a\x2d\x2d\x1e\x2e\x04\x26\x30\x0b\x65\x72\x72\x6f\x72\x2d"
  "\x74\x79\x70\x65\x0c\x73\x79\x73\x74\x65\x6d\x2d\x63\x61\x6c\x6c"
  "\x1a\x2b\x19\x31\x04\x2f\x04\x27\x04\x24\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x73\x75\x62\x70\x72\x6f\x63"
  "\x65\x73\x73\x2d\x73\x69\x67\x6e\x61\x6c\x6c\x65\x64\x31\x1b\x15"
  "\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x73\x69\x67\x6e\x61"
  "\x6c\x6c\x65\x64\x17\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20"
  "\x77\x69\x74\x68\x20\x73\x69\x67\x6e\x61\x6c\x22\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x73\x75\x62\x70\x72"
  "\x6f\x63\x65\x73\x73\x2d\x73\x74\x6f\x70\x70\x65\x64\x30\x13\x73"
  "\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x73\x74\x6f\x70\x70\x65"
  "\x64\x14\x73\x74\x6f\x70\x70\x65\x64\x20\x77\x69\x74\x68\x20\x73"
  "\x69\x67\x6e\x61\x6c\x21\x1a\x61\x62\x6e\x6f\x72\x6d\x61\x6c\x2d"
  "\x74\x65\x72\x6d\x69\x6e\x61\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65"
  "\x2f\x24\x04\x20\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x61"
  "\x62\x6e\x6f\x72\x6d\x61\x6c\x2d\x74\x65\x72\x6d\x69\x6e\x61\x74"
  "\x69\x6f\x6e\x20\x1f\x11\x25\x18\x15\x1b\x72\x75\x6e\x2d\x73\x79"
  "\x6e\x63\x68\x72\x6f\x6e\x6f\x75\x73\x2d\x73\x75\x62\x70\x72\x6f"
  "\x63\x65\x73\x73\x12\x72\x75\x6e\x2d\x73\x68\x65\x6c\x6c\x2d\x63"
  "\x6f\x6d\x6d\x61\x6e\x64\x14\x73\x75\x62\x70\x72\x6f\x63\x65\x73"
  "\x73\x2d\x63\x6f\x6e\x74\x65\x78\x74\x3f\x17\x04\x1d\x04\x1c\x04"
  "\x13\x04\x16\x04\x12\x04\x14\x1f\x73\x75\x62\x70\x72\x6f\x63\x65"
  "\x73\x73\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x6c\x69\x6e\x65\x2d"
  "\x65\x6e\x64\x69\x6e\x67\x23\x73\x75\x62\x70\x72\x6f\x63\x65\x73"
  "\x73\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x73\x68\x65\x6c\x6c\x2d"
  "\x66\x69\x6c\x65\x2d\x6e\x61\x6d\x65\x1c\x73\x75\x62\x70\x72\x6f"
  "\x63\x65\x73\x73\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x75\x73\x65"
  "\x2d\x70\x74\x79\x3f\x25\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73"
  "\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x77\x6f\x72\x6b\x69\x6e\x67"
  "\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x1f\x73\x75\x62\x70\x72"
  "\x6f\x63\x65\x73\x73\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x22\x73\x75\x62\x70\x72\x6f"
  "\x63\x65\x73\x73\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x72\x65\x64"
  "\x69\x73\x70\x6c\x61\x79\x2d\x68\x6f\x6f\x6b\x26\x73\x75\x62\x70"
  "\x72\x6f\x63\x65\x73\x73\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x6f"
  "\x75\x74\x70\x75\x74\x2d\x62\x75\x66\x66\x65\x72\x2d\x73\x69\x7a"
  "\x65\x1a\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x63\x6f\x6e"
  "\x74\x65\x78\x74\x2f\x6f\x75\x74\x70\x75\x74\x25\x73\x75\x62\x70"
  "\x72\x6f\x63\x65\x73\x73\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x69"
  "\x6e\x70\x75\x74\x2d\x62\x75\x66\x66\x65\x72\x2d\x73\x69\x7a\x65"
  "\x19\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x63\x6f\x6e\x74"
  "\x65\x78\x74\x2f\x69\x6e\x70\x75\x74\x0b\x10\x04\x0f\x04\x0e\x04"
  "\x0d\x04\x0c\x04\x0b\x04\x0a\x04\x09\x04\x04\x04\x0b\x11\x6c\x6f"
  "\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x17\x72"
  "\x74\x64\x3a\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x63\x6f"
  "\x6e\x74\x65\x78\x74\x2e\x13\x73\x75\x62\x70\x72\x6f\x63\x65\x73"
  "\x73\x2d\x63\x6f\x6e\x74\x65\x78\x74\x06\x69\x6e\x70\x75\x74\x12"
  "\x69\x6e\x70\x75\x74\x2d\x62\x75\x66\x66\x65\x72\x2d\x73\x69\x7a"
  "\x65\x07\x6f\x75\x74\x70\x75\x74\x13\x6f\x75\x74\x70\x75\x74\x2d"
  "\x62\x75\x66\x66\x65\x72\x2d\x73\x69\x7a\x65\x0f\x72\x65\x64\x69"
  "\x73\x70\x6c\x61\x79\x2d\x68\x6f\x6f\x6b\x0c\x65\x6e\x76\x69\x72"
  "\x6f\x6e\x6d\x65\x6e\x74\x12\x77\x6f\x72\x6b\x69\x6e\x67\x2d\x64"
  "\x69\x72\x65\x63\x74\x6f\x72\x79\x09\x75\x73\x65\x2d\x70\x74\x79"
  "\x3f\x10\x73\x68\x65\x6c\x6c\x2d\x66\x69\x6c\x65\x2d\x6e\x61\x6d"
  "\x65\x0c\x6c\x69\x6e\x65\x2d\x65\x6e\x64\x69\x6e\x67\x0a\x04\x04"
  "\x04\x04\x20\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64"
  "\x2d\x74\x79\x70\x65\x03\x1b\x72\x65\x63\x6f\x72\x64\x2d\x6b\x65"
  "\x79\x77\x6f\x72\x64\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f"
  "\x72\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70"
  "\x6c\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d"
  "\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x05\x2e\x15\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x65\x72"
  "\x72\x6f\x72\x17\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x65\x72\x72"
  "\x6f\x72\x2d\x68\x61\x6e\x64\x6c\x65\x72\x30\x31\x23\x07\x03\x0c"
  "\x6c\x6f\x61\x64\x2d\x6f\x70\x74\x69\x6f\x6e\x06\x22\x04\x2f\x05"
  "\x14\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x73\x69\x67\x6e\x61"
  "\x6c\x6c\x65\x72\x04\x13\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d"
  "\x61\x63\x63\x65\x73\x73\x6f\x72\x06\x25\x4c\x80\x80\x04\x24\x4a"
  "\x81\x81\x02\x23\x48\x81\x81\x02\x22\x46\x81\x85\x02\x21\x44\x81"
  "\x83\x02\x20\x42\x81\x85\x02\x1f\x40\x81\x89\x02\x1e\x3e\x81\x83"
  "\x02\x1d\x3c\x81\x89\x02\x1c\x3a\x81\x83\x02\x1b\x38\x81\x85\x02"
  "\x1a\x36\x81\x83\x02\x19\x34\x81\x85\x02\x18\x32\x81\x8b\x02\x17"
  "\x30\x81\x87\x02\x16\x2e\x81\x83\x02\x15\x2c\x81\x85\x02\x14\x2a"
  "\x81\x83\x02\x13\x28\x81\x85\x02\x12\x26\x81\x8b\x02\x11\x24\x81"
  "\x87\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x85"
  "\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x8b\x02\x0b\x18\x81\x83\x02"
  "\x0a\x16\x81\x85\x02\x09\x14\x81\x83\x02\x08\x12\x81\x87\x02\x07"
  "\x10\x81\x83\x02\x06\x0e\x81\x85\x02\x05\x0c\x81\x83\x02\x04\x0a"
  "\x81\x85\x02\x03\x08\x81\x87\x02\x02\x06\x81\x83\x02\x01\x04\x81"
  "\x83\x02\x4b\x90\x01";

SCHEME_OBJECT *
syncproc_so_data_41e3ffb8118dd9a6 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_syncproc_so_data_41e3ffb8118dd9a6 [0]))), (sizeof (prog_syncproc_so_data_41e3ffb8118dd9a6)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_49]));
}

DECLARE_COMPILED_DATA_NS ("syncproc.so", syncproc_so_data_41e3ffb8118dd9a6)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("syncproc.so", "5dae27634469f1dc")
