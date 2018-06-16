/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:48-07 by Liar version 4.118. */

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
port_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto port_type_parent_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_type_parent_3)
DEFLABEL (port_type_parent_0)
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
port_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto port_type_standard_operations_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_type_standard_operations_3)
DEFLABEL (port_type_standard_operations_0)
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
port_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto port_type_custom_operations_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_type_custom_operations_3)
DEFLABEL (port_type_custom_operations_0)
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
port_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto port_type_char_readyP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_type_char_readyP_3)
DEFLABEL (port_type_char_readyP_0)
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
port_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto port_type_read_char_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_type_read_char_3)
DEFLABEL (port_type_read_char_0)
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
port_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto port_type_unread_char_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_type_unread_char_3)
DEFLABEL (port_type_unread_char_0)
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
port_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto port_type_peek_char_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_type_peek_char_3)
DEFLABEL (port_type_peek_char_0)
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
port_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto port_type_read_substring_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_type_read_substring_3)
DEFLABEL (port_type_read_substring_0)
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
port_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto port_type_write_char_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_type_write_char_3)
DEFLABEL (port_type_write_char_0)
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
port_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto port_type_write_substring_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_type_write_substring_3)
DEFLABEL (port_type_write_substring_0)
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
port_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto port_type_fresh_line_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_type_fresh_line_3)
DEFLABEL (port_type_fresh_line_0)
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
port_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto port_type_line_startP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_type_line_startP_3)
DEFLABEL (port_type_line_startP_0)
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
port_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto port_type_flush_output_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_type_flush_output_3)
DEFLABEL (port_type_flush_output_0)
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
port_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto port_type_discretionary_flush_output_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_type_discretionary_flush_output_3)
DEFLABEL (port_type_discretionary_flush_output_0)
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
#define ENVIRONMENT_LABEL_15_3 8
#define DEBUGGING_LABEL_15_2 7
#define OBJECT_15_2 6
#define OBJECT_15_1 5
#define OBJECT_15_0 4
#define FREE_REFERENCES_LABEL_15_0 4
#define NUMBER_OF_LINKER_SECTIONS_15_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_port_type_standard_operationsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_port_type_standard_operationsB_3)
DEFLABEL (set_port_type_standard_operationsB_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
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
port_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_port_type_custom_operationsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_port_type_custom_operationsB_3)
DEFLABEL (set_port_type_custom_operationsB_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_16_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define LABEL_17_7 9
#define ENVIRONMENT_LABEL_17_3 17
#define DEBUGGING_LABEL_17_2 16
#define OBJECT_17_3 15
#define OBJECT_17_2 14
#define OBJECT_17_1 13
#define OBJECT_17_0 12
#define FREE_REFERENCE_17_0 11
#define FREE_REFERENCES_LABEL_17_0 10
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto port_typeP_4;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_17_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_typeP_10)
DEFLABEL (port_typeP_4)
  INTERRUPT_CHECK (26, LABEL_17_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
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
  Rvl = (current_block [OBJECT_17_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_17_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_6 5
#define LABEL_18_7 7
#define LABEL_18_8 9
#define LABEL_18_5 11
#define ENVIRONMENT_LABEL_18_3 23
#define DEBUGGING_LABEL_18_2 22
#define OBJECT_18_6 21
#define OBJECT_18_5 20
#define OBJECT_18_4 19
#define OBJECT_18_3 18
#define OBJECT_18_2 17
#define OBJECT_18_1 16
#define OBJECT_18_0 15
#define EXECUTE_CACHE_18_9 13
#define FREE_REFERENCES_LABEL_18_0 12
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd35;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd15;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd11;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd60;
  machine_word Wrd59;
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
      current_block = (Rpc - LABEL_18_4);
      goto lambda_5;

    case 1:
      current_block = (Rpc - LABEL_18_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_18_8);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_11)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd59.Obj) = (Rsp [3]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 62))
    goto label_23;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd58.Lng))))
    goto label_23;
  (Wrd11.Obj) = ((Wrd56.pObj) [6]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;

DEFLABEL (label_17)
  (Wrd45.Obj) = (Rsp [3]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 62))
    goto label_16;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd44.Lng))))
    goto label_16;
  (Wrd35.Obj) = ((Wrd42.pObj) [10]);
  if ((Wrd35.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;

DEFLABEL (label_14)
  (Wrd38.Obj) = (current_block [OBJECT_18_6]);
  (* (--Rsp)) = (Wrd38.Obj);
  goto label_12;

DEFLABEL (label_13)
  (Wrd37.Obj) = (current_block [OBJECT_18_5]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_12)
DEFLABEL (label_15)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_16)
  (Wrd47.Obj) = (Rsp [3]);
  (Wrd48.Obj) = (current_block [OBJECT_18_2]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  goto label_14;

DEFLABEL (label_18)
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_22;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd24.Lng))))
    goto label_22;
  (Wrd15.Obj) = ((Wrd22.pObj) [10]);
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_20;

DEFLABEL (label_21)
  (Wrd18.Obj) = (current_block [OBJECT_18_4]);
  (* (--Rsp)) = (Wrd18.Obj);
  goto label_19;

DEFLABEL (label_20)
  (Wrd17.Obj) = (current_block [OBJECT_18_3]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_19)
  goto label_15;

DEFLABEL (label_22)
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.Obj) = (current_block [OBJECT_18_2]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  goto label_21;

DEFLABEL (label_23)
  (Wrd61.Obj) = (Rsp [3]);
  (Wrd62.Obj) = (current_block [OBJECT_18_0]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_7 5
#define LABEL_19_5 7
#define ENVIRONMENT_LABEL_19_3 15
#define DEBUGGING_LABEL_19_2 14
#define OBJECT_19_0 13
#define EXECUTE_CACHE_19_8 9
#define EXECUTE_CACHE_19_6 11
#define FREE_REFERENCES_LABEL_19_0 8
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_19_4);
      goto guarantee_port_type_2;

    case 1:
      current_block = (Rpc - LABEL_19_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_port_type_5)
DEFLABEL (guarantee_port_type_2)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;

DEFLABEL (label_6)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_7);
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 7
#define DEBUGGING_LABEL_20_2 6
#define OBJECT_20_1 5
#define OBJECT_20_0 4
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto port_type_supports_inputP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_type_supports_inputP_3)
DEFLABEL (port_type_supports_inputP_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_20_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

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

#define LABEL_21_4 3
#define ENVIRONMENT_LABEL_21_3 7
#define DEBUGGING_LABEL_21_2 6
#define OBJECT_21_1 5
#define OBJECT_21_0 4
#define FREE_REFERENCES_LABEL_21_0 4
#define NUMBER_OF_LINKER_SECTIONS_21_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto port_type_supports_outputP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_type_supports_outputP_3)
DEFLABEL (port_type_supports_outputP_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_21_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

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

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_7 7
#define ENVIRONMENT_LABEL_22_3 15
#define DEBUGGING_LABEL_22_2 14
#define OBJECT_22_2 13
#define OBJECT_22_1 12
#define OBJECT_22_0 11
#define EXECUTE_CACHE_22_6 9
#define FREE_REFERENCES_LABEL_22_0 8
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
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
      goto input_port_typeP_2;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_22_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (input_port_typeP_6)
DEFLABEL (input_port_typeP_2)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_11;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd20.Lng))))
    goto label_11;
  (Wrd9.Obj) = ((Wrd18.pObj) [6]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_22_2]);
  goto label_7;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_7)
DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_22_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_4)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_7 7
#define ENVIRONMENT_LABEL_23_3 15
#define DEBUGGING_LABEL_23_2 14
#define OBJECT_23_2 13
#define OBJECT_23_1 12
#define OBJECT_23_0 11
#define EXECUTE_CACHE_23_6 9
#define FREE_REFERENCES_LABEL_23_0 8
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_23_4);
      goto output_port_typeP_2;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_port_typeP_6)
DEFLABEL (output_port_typeP_2)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_11;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd20.Lng))))
    goto label_11;
  (Wrd9.Obj) = ((Wrd18.pObj) [10]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_23_2]);
  goto label_7;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_7)
DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_23_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_4)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_7 7
#define LABEL_24_8 9
#define ENVIRONMENT_LABEL_24_3 18
#define DEBUGGING_LABEL_24_2 17
#define OBJECT_24_3 16
#define OBJECT_24_2 15
#define OBJECT_24_1 14
#define OBJECT_24_0 13
#define EXECUTE_CACHE_24_6 11
#define FREE_REFERENCES_LABEL_24_0 10
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd15;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd9;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
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
      goto i_o_port_typeP_3;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (i_o_port_typeP_8)
DEFLABEL (i_o_port_typeP_3)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_15;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd38.Lng))))
    goto label_15;
  (Wrd9.Obj) = ((Wrd36.pObj) [6]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_14)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_13;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd24.Lng))))
    goto label_13;
  (Wrd15.Obj) = ((Wrd22.pObj) [10]);
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_24_3]);
  goto label_9;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (current_block [OBJECT_24_2]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (current_block [OBJECT_24_0]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_8 7
#define LABEL_25_9 9
#define LABEL_25_7 11
#define LABEL_25_12 13
#define LABEL_25_13 15
#define LABEL_25_11 17
#define ENVIRONMENT_LABEL_25_3 32
#define DEBUGGING_LABEL_25_2 31
#define OBJECT_25_3 30
#define OBJECT_25_2 29
#define OBJECT_25_1 28
#define OBJECT_25_0 27
#define EXECUTE_CACHE_25_14 19
#define EXECUTE_CACHE_25_10 21
#define EXECUTE_CACHE_25_6 23
#define FREE_REFERENCE_25_0 26
#define FREE_REFERENCES_LABEL_25_0 18
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_25_4);
      goto port_type_operation_names_5;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_25_8);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_25_9);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_25_7);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_25_12);
      goto label_9;

    case 6:
      current_block = (Rpc - LABEL_25_13);
      goto label_10;

    case 7:
      current_block = (Rpc - LABEL_25_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_type_operation_names_12)
DEFLABEL (port_type_operation_names_5)
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
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_20;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_20;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_19)
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_18;
  Wrd24 = Wrd28;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_25_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
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
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_14;
  Wrd24 = Wrd28;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_25_11);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_14]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_13])), (Wrd25.pObj));

DEFLABEL (label_10)
  (Wrd24.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_25_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_9])), (Wrd25.pObj));

DEFLABEL (label_8)
  (Wrd24.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_25_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_8 7
#define LABEL_26_7 9
#define LABEL_26_12 11
#define LABEL_26_9 13
#define LABEL_26_14 15
#define LABEL_26_15 17
#define LABEL_26_11 19
#define LABEL_26_13 21
#define LABEL_26_17 23
#define LABEL_26_18 25
#define ENVIRONMENT_LABEL_26_3 41
#define DEBUGGING_LABEL_26_2 40
#define OBJECT_26_6 39
#define OBJECT_26_5 38
#define OBJECT_26_4 37
#define OBJECT_26_3 36
#define OBJECT_26_2 35
#define OBJECT_26_1 34
#define OBJECT_26_0 33
#define EXECUTE_CACHE_26_16 27
#define EXECUTE_CACHE_26_10 29
#define EXECUTE_CACHE_26_6 31
#define FREE_REFERENCES_LABEL_26_0 26
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_26_4);
      goto port_type_operations_13;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_26_8);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_26_7);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_26_12);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_26_9);
      goto lambda_4;

    case 6:
      current_block = (Rpc - LABEL_26_14);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_26_15);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_26_11);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_26_13);
      goto lambda_10;

    case 10:
      current_block = (Rpc - LABEL_26_17);
      goto label_19;

    case 11:
      current_block = (Rpc - LABEL_26_18);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_type_operations_22)
DEFLABEL (port_type_operations_13)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_28;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_28;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_27)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_26_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_26;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_26;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_25)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_10]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_26_11);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_16]));

DEFLABEL (label_26)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_26_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_26_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (lambda_23)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_26_9);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_32;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_31)
  (Wrd17.Obj) = (current_block [OBJECT_26_5]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_30;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_29)
  (Wrd27.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_15]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_6]), 1);

DEFLABEL (label_18)
  (Wrd18.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_4]), 1);

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_31;

DEFLABEL (lambda_24)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_26_13);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_36;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_35)
  (Wrd17.Obj) = (current_block [OBJECT_26_5]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_34;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_33)
  (Wrd27.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_18]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_6]), 1);

DEFLABEL (label_20)
  (Wrd18.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_4]), 1);

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_7 5
#define LABEL_27_6 7
#define LABEL_27_9 9
#define LABEL_27_5 11
#define ENVIRONMENT_LABEL_27_3 20
#define DEBUGGING_LABEL_27_2 19
#define OBJECT_27_3 18
#define OBJECT_27_2 17
#define OBJECT_27_1 16
#define OBJECT_27_0 15
#define EXECUTE_CACHE_27_8 13
#define FREE_REFERENCES_LABEL_27_0 12
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_27_4);
      goto port_type__operation_6;

    case 1:
      current_block = (Rpc - LABEL_27_7);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_27_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_27_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_type__operation_11)
DEFLABEL (port_type__operation_6)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_20;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd19.Lng))))
    goto label_20;
  (Wrd13.Obj) = ((Wrd17.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_19)
  (Wrd27.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd5.Obj) = Rvl;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_15)
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd13.uLng) == 1)
    goto label_12;
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 1);

DEFLABEL (label_12)
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd10.pObj) [1]);

DEFLABEL (label_13)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_13;

DEFLABEL (label_16)
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_18;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_18;
  (Wrd21.Obj) = ((Wrd27.pObj) [3]);

DEFLABEL (label_17)
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_8]));

DEFLABEL (label_18)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.Obj) = (current_block [OBJECT_27_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_9)
  (Wrd21.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_27_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (Wrd5.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define ENVIRONMENT_LABEL_28_3 13
#define DEBUGGING_LABEL_28_2 12
#define OBJECT_28_0 11
#define EXECUTE_CACHE_28_7 7
#define EXECUTE_CACHE_28_6 9
#define FREE_REFERENCES_LABEL_28_0 6
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto port_type_operation_1;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_type_operation_4)
DEFLABEL (port_type_operation_1)
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_8 5
#define LABEL_29_9 7
#define LABEL_29_5 9
#define LABEL_29_14 11
#define LABEL_29_6 13
#define LABEL_29_15 15
#define LABEL_29_16 17
#define LABEL_29_17 19
#define LABEL_29_19 21
#define LABEL_29_20 23
#define LABEL_29_11 25
#define LABEL_29_18 27
#define LABEL_29_24 29
#define LABEL_29_25 31
#define LABEL_29_22 33
#define TAG_29_23 15
#define LABEL_29_26 35
#define LABEL_29_27 37
#define LABEL_29_29 39
#define LABEL_29_30 41
#define LABEL_29_38 43
#define LABEL_29_31 45
#define LABEL_29_32 47
#define LABEL_29_41 49
#define LABEL_29_33 51
#define LABEL_29_43 53
#define LABEL_29_34 55
#define LABEL_29_45 57
#define LABEL_29_35 59
#define TAG_29_36 28
#define LABEL_29_37 61
#define LABEL_29_47 63
#define LABEL_29_39 65
#define LABEL_29_40 67
#define LABEL_29_42 69
#define LABEL_29_44 71
#define LABEL_29_46 73
#define LABEL_29_48 75
#define LABEL_29_49 77
#define LABEL_29_50 79
#define LABEL_29_51 81
#define LABEL_29_52 83
#define LABEL_29_53 85
#define LABEL_29_54 87
#define LABEL_29_55 89
#define LABEL_29_56 91
#define ENVIRONMENT_LABEL_29_3 134
#define DEBUGGING_LABEL_29_2 133
#define OBJECT_29_20 132
#define OBJECT_29_19 131
#define OBJECT_29_18 130
#define OBJECT_29_17 129
#define OBJECT_29_16 128
#define OBJECT_29_15 127
#define OBJECT_29_14 126
#define OBJECT_29_13 125
#define OBJECT_29_12 124
#define OBJECT_29_11 123
#define OBJECT_29_10 122
#define OBJECT_29_9 121
#define OBJECT_29_8 120
#define OBJECT_29_7 119
#define OBJECT_29_6 118
#define OBJECT_29_5 117
#define OBJECT_29_4 116
#define OBJECT_29_3 115
#define OBJECT_29_2 114
#define OBJECT_29_1 113
#define OBJECT_29_0 112
#define EXECUTE_CACHE_29_57 93
#define EXECUTE_CACHE_29_28 95
#define EXECUTE_CACHE_29_21 97
#define EXECUTE_CACHE_29_13 99
#define EXECUTE_CACHE_29_12 101
#define EXECUTE_CACHE_29_10 103
#define EXECUTE_CACHE_29_7 105
#define FREE_REFERENCE_29_3 108
#define FREE_REFERENCE_29_2 109
#define FREE_REFERENCE_29_1 110
#define FREE_REFERENCE_29_0 111
#define FREE_REFERENCES_LABEL_29_0 92
#define NUMBER_OF_LINKER_SECTIONS_29_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd8;
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
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_29_4);
      goto make_port_type_46;

    case 1:
      current_block = (Rpc - LABEL_29_8);
      goto continuation_14;

    case 2:
      current_block = (Rpc - LABEL_29_9);
      goto continuation_15;

    case 3:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_13;

    case 4:
      current_block = (Rpc - LABEL_29_14);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_29_6);
      goto lambda_12;

    case 6:
      current_block = (Rpc - LABEL_29_15);
      goto label_48;

    case 7:
      current_block = (Rpc - LABEL_29_16);
      goto label_52;

    case 8:
      current_block = (Rpc - LABEL_29_17);
      goto label_49;

    case 9:
      current_block = (Rpc - LABEL_29_19);
      goto label_50;

    case 10:
      current_block = (Rpc - LABEL_29_20);
      goto label_51;

    case 11:
      current_block = (Rpc - LABEL_29_11);
      goto continuation_45;

    case 12:
      current_block = (Rpc - LABEL_29_18);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_29_24);
      goto label_53;

    case 14:
      current_block = (Rpc - LABEL_29_25);
      goto label_54;

    case 15:
      current_block = (Rpc - LABEL_29_22);
      goto lambda_62;

    case 16:
      current_block = (Rpc - LABEL_29_26);
      goto continuation_20;

    case 17:
      current_block = (Rpc - LABEL_29_27);
      goto continuation_17;

    case 18:
      current_block = (Rpc - LABEL_29_29);
      goto continuation_38;

    case 19:
      current_block = (Rpc - LABEL_29_30);
      goto continuation_16;

    case 20:
      current_block = (Rpc - LABEL_29_38);
      goto label_55;

    case 21:
      current_block = (Rpc - LABEL_29_31);
      goto continuation_37;

    case 22:
      current_block = (Rpc - LABEL_29_32);
      goto continuation_28;

    case 23:
      current_block = (Rpc - LABEL_29_41);
      goto label_56;

    case 24:
      current_block = (Rpc - LABEL_29_33);
      goto continuation_26;

    case 25:
      current_block = (Rpc - LABEL_29_43);
      goto label_57;

    case 26:
      current_block = (Rpc - LABEL_29_34);
      goto continuation_24;

    case 27:
      current_block = (Rpc - LABEL_29_45);
      goto label_58;

    case 28:
      current_block = (Rpc - LABEL_29_35);
      goto lambda_63;

    case 29:
      current_block = (Rpc - LABEL_29_37);
      goto continuation_25;

    case 30:
      current_block = (Rpc - LABEL_29_47);
      goto lambda_19;

    case 31:
      current_block = (Rpc - LABEL_29_39);
      goto continuation_36;

    case 32:
      current_block = (Rpc - LABEL_29_40);
      goto continuation_30;

    case 33:
      current_block = (Rpc - LABEL_29_42);
      goto continuation_29;

    case 34:
      current_block = (Rpc - LABEL_29_44);
      goto continuation_27;

    case 35:
      current_block = (Rpc - LABEL_29_46);
      goto continuation_21;

    case 36:
      current_block = (Rpc - LABEL_29_48);
      goto lambda_18;

    case 37:
      current_block = (Rpc - LABEL_29_49);
      goto continuation_35;

    case 38:
      current_block = (Rpc - LABEL_29_50);
      goto continuation_34;

    case 39:
      current_block = (Rpc - LABEL_29_51);
      goto continuation_33;

    case 40:
      current_block = (Rpc - LABEL_29_52);
      goto continuation_32;

    case 41:
      current_block = (Rpc - LABEL_29_53);
      goto continuation_40;

    case 42:
      current_block = (Rpc - LABEL_29_54);
      goto continuation_41;

    case 43:
      current_block = (Rpc - LABEL_29_55);
      goto continuation_42;

    case 44:
      current_block = (Rpc - LABEL_29_56);
      goto continuation_39;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_port_type_60)
DEFLABEL (make_port_type_46)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_29_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_67;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_29_1]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_29_8);

DEFLABEL (label_67)
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_66;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_13]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_29_9);

DEFLABEL (label_66)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_12]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_29_11);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_22])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_61)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_29_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_69;

DEFLABEL (label_68)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_69)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_93;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_92)
  (Wrd67.Obj) = (current_block [OBJECT_29_3]);
  (Wrd70.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd70.Lng))))
    goto label_91;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd67.Obj));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd22.Obj) == (Wrd24.Obj))
    goto label_90;

DEFLABEL (label_89)
  (Wrd25.Obj) = (current_block [OBJECT_29_5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd35.Lng)))
    goto label_70;
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_70)
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd25.Obj));
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd29.Obj) == (Wrd31.Obj))
    goto label_72;
  (Wrd27.Obj) = (current_block [OBJECT_29_7]);
  goto label_71;

DEFLABEL (label_72)
  (Wrd27.Obj) = (current_block [OBJECT_29_6]);

DEFLABEL (label_71)
DEFLABEL (label_88)
  Rsp = (& (Rsp [3]));
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_68;

DEFLABEL (label_87)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_86;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_85)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_68;
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_18]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_84;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd50.Obj) = ((Wrd52.pObj) [1]);

DEFLABEL (label_83)
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_82;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (* (--Rsp)) = (Wrd60.Obj);

DEFLABEL (label_81)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_29_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_75;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_80;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_79)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_78;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_77)
  if ((Wrd16.Obj) == (current_block [OBJECT_29_9]))
    goto label_74;

DEFLABEL (label_75)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_73;

DEFLABEL (label_74)
  Rvl = (current_block [OBJECT_29_6]);

DEFLABEL (label_73)
DEFLABEL (label_76)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_78)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_25]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_8]), 1);

DEFLABEL (label_54)
  (Wrd16.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_24]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_8]), 1);

DEFLABEL (label_53)
  (Wrd7.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_20]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 1);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_19]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_8]), 1);

DEFLABEL (label_50)
  (Wrd50.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_17]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_8]), 1);

DEFLABEL (label_49)
  (Wrd37.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_90)
  Rsp = (& (Rsp [2]));
  goto label_87;

DEFLABEL (label_91)
  (Wrd72.Obj) = (Rsp [0]);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_16]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_52)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_89;
  goto label_90;

DEFLABEL (label_93)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 1);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_92;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_29_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  goto label_87;

DEFLABEL (lambda_62)
  CLOSURE_HEADER (LABEL_29_22);

DEFLABEL (lambda_44)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_29_10]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_28]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_29_27);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_29_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_28]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_29_30);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_33]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_34]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_36);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_35])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd17.Obj) = (Rsp [7]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_37]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_101;
  Wrd21 = Wrd25;

DEFLABEL (label_100)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd27.Obj);
  goto lambda_19;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_29_37);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_29_34);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_99;
  Wrd8 = Wrd12;

DEFLABEL (label_98)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto lambda_19;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_29_44);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_29_33);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_97;
  Wrd8 = Wrd12;

DEFLABEL (label_96)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto lambda_19;

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_29_42);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_29_32);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_95;
  Wrd8 = Wrd12;

DEFLABEL (label_94)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto lambda_19;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_29_40);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_95)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_41])), (Wrd9.pObj));

DEFLABEL (label_56)
  (Wrd8.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_43])), (Wrd9.pObj));

DEFLABEL (label_57)
  (Wrd8.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_45])), (Wrd9.pObj));

DEFLABEL (label_58)
  (Wrd8.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_38])), (Wrd22.pObj));

DEFLABEL (label_55)
  (Wrd21.Obj) = Rvl;
  goto label_100;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_29_26);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_29_29);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_29_31);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_29_39);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_29_49);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_29_50);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_29_51);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_29_52);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [10]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_53]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_29_17]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_29_53);
  (Rsp [11]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_54]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_29_18]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_29_54);
  (Rsp [12]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_55]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_29_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_29_55);
  (Rsp [13]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_56]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_29_20]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_29_56);
  (Rsp [10]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_57]));

DEFLABEL (lambda_63)
  CLOSURE_HEADER (LABEL_29_35);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_28]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_29_46);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_104;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd13.uLng) == 1)
    goto label_102;
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_8]), 1);

DEFLABEL (label_102)
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd10.pObj) [1]);

DEFLABEL (label_103)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_104)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_103;

DEFLABEL (lambda_64)
DEFLABEL (lambda_19)
  INTERRUPT_CHECK (26, LABEL_29_47);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_106;
  Rvl = (Rsp [1]);
  goto label_105;

DEFLABEL (label_106)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_48]))));

DEFLABEL (label_105)
DEFLABEL (label_107)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_65)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_29_48);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_5 3
#define LABEL_30_4 5
#define LABEL_30_7 7
#define LABEL_30_8 9
#define LABEL_30_9 11
#define LABEL_30_16 13
#define LABEL_30_12 15
#define TAG_30_13 6
#define LABEL_30_19 17
#define LABEL_30_14 19
#define LABEL_30_17 21
#define LABEL_30_21 23
#define LABEL_30_18 25
#define LABEL_30_22 27
#define ENVIRONMENT_LABEL_30_3 49
#define DEBUGGING_LABEL_30_2 48
#define OBJECT_30_3 47
#define OBJECT_30_2 46
#define OBJECT_30_1 45
#define OBJECT_30_0 44
#define EXECUTE_CACHE_30_23 29
#define EXECUTE_CACHE_30_20 31
#define EXECUTE_CACHE_30_15 33
#define EXECUTE_CACHE_30_11 35
#define EXECUTE_CACHE_30_10 37
#define EXECUTE_CACHE_30_6 39
#define FREE_REFERENCE_30_1 42
#define FREE_REFERENCE_30_0 43
#define FREE_REFERENCES_LABEL_30_0 28
#define NUMBER_OF_LINKER_SECTIONS_30_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd22;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_30_4);
      goto parse_operations_list_15;

    case 2:
      current_block = (Rpc - LABEL_30_7);
      goto continuation_14;

    case 3:
      current_block = (Rpc - LABEL_30_8);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_30_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_30_16);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_30_12);
      goto lambda_23;

    case 7:
      current_block = (Rpc - LABEL_30_19);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_30_14);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_30_17);
      goto continuation_2;

    case 10:
      current_block = (Rpc - LABEL_30_21);
      goto label_19;

    case 11:
      current_block = (Rpc - LABEL_30_18);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_30_22);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_operations_list_22)
DEFLABEL (parse_operations_list_15)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_30_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_31;
  Wrd7 = Wrd11;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_29)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_17]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_30_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_1]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_27;
  Wrd7 = Wrd11;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_25)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_30_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_12])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  ((Wrd11.pObj) [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_20]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_30_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Wrd22.Obj) = Rvl;

DEFLABEL (label_24)
  (Rsp [1]) = (Wrd22.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_21])), (Wrd8.pObj));

DEFLABEL (label_19)
  (Wrd7.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_28)
  (Wrd13.Obj) = (current_block [OBJECT_30_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto label_25;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_16])), (Wrd8.pObj));

DEFLABEL (label_17)
  (Wrd7.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd18.Obj) = (current_block [OBJECT_30_1]);
  (* (--Rsp)) = (Wrd18.Obj);
  goto label_29;

DEFLABEL (label_33)
  (Wrd22.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [1]));
  goto label_24;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_30_12);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_38;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_37)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_30_18);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_36;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [0]);

DEFLABEL (label_35)
  (Rsp [2]) = (Wrd12.Obj);
  (Wrd21.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_23]));

DEFLABEL (label_36)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_22]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_3]), 1);

DEFLABEL (label_20)
  (Wrd12.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_19]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_3]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_6 7
#define LABEL_31_7 9
#define LABEL_31_8 11
#define LABEL_31_9 13
#define LABEL_31_10 15
#define LABEL_31_12 17
#define LABEL_31_13 19
#define LABEL_31_14 21
#define LABEL_31_16 23
#define LABEL_31_19 25
#define LABEL_31_20 27
#define LABEL_31_11 29
#define LABEL_31_21 31
#define LABEL_31_22 33
#define LABEL_31_23 35
#define LABEL_31_24 37
#define LABEL_31_18 39
#define LABEL_31_25 41
#define TAG_31_26 19
#define ENVIRONMENT_LABEL_31_3 54
#define DEBUGGING_LABEL_31_2 53
#define OBJECT_31_2 52
#define OBJECT_31_1 51
#define OBJECT_31_0 50
#define EXECUTE_CACHE_31_17 43
#define EXECUTE_CACHE_31_15 45
#define FREE_REFERENCE_31_1 48
#define FREE_REFERENCE_31_0 49
#define FREE_REFERENCES_LABEL_31_0 42
#define NUMBER_OF_LINKER_SECTIONS_31_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd46;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd60;
  machine_word Wrd51;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd78;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_31_4);
      goto parse_operations_list_1_25;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto loop_23;

    case 2:
      current_block = (Rpc - LABEL_31_6);
      goto label_27;

    case 3:
      current_block = (Rpc - LABEL_31_7);
      goto label_28;

    case 4:
      current_block = (Rpc - LABEL_31_8);
      goto label_29;

    case 5:
      current_block = (Rpc - LABEL_31_9);
      goto label_30;

    case 6:
      current_block = (Rpc - LABEL_31_10);
      goto label_31;

    case 7:
      current_block = (Rpc - LABEL_31_12);
      goto label_32;

    case 8:
      current_block = (Rpc - LABEL_31_13);
      goto label_33;

    case 9:
      current_block = (Rpc - LABEL_31_14);
      goto label_34;

    case 10:
      current_block = (Rpc - LABEL_31_16);
      goto continuation_2;

    case 11:
      current_block = (Rpc - LABEL_31_19);
      goto continuation_17;

    case 12:
      current_block = (Rpc - LABEL_31_20);
      goto label_39;

    case 13:
      current_block = (Rpc - LABEL_31_11);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_31_21);
      goto label_36;

    case 15:
      current_block = (Rpc - LABEL_31_22);
      goto label_37;

    case 16:
      current_block = (Rpc - LABEL_31_23);
      goto label_38;

    case 17:
      current_block = (Rpc - LABEL_31_24);
      goto label_35;

    case 18:
      current_block = (Rpc - LABEL_31_18);
      goto continuation_3;

    case 19:
      current_block = (Rpc - LABEL_31_25);
      goto lambda_43;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_operations_list_1_41)
DEFLABEL (parse_operations_list_1_25)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd5.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  goto loop_23;

DEFLABEL (loop_42)
DEFLABEL (loop_23)
  INTERRUPT_CHECK (26, LABEL_31_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_44;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_17]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_31_16);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_18]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_31_18);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_25])));
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

DEFLABEL (label_44)
  if (! ((Wrd6.uLng) == 1))
    goto label_73;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_72)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_71;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd20.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_70)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_69;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_68)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_67;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [0]);

DEFLABEL (label_66)
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_65;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd43.Obj) = ((Wrd44.pObj) [0]);

DEFLABEL (label_64)
  (Wrd50.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_11]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_63;
  Wrd57 = Wrd61;

DEFLABEL (label_62)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd66.Obj) = (Rsp [3]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_61;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd63.Obj) = ((Wrd65.pObj) [0]);

DEFLABEL (label_60)
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_59;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (* (--Rsp)) = (Wrd73.Obj);

DEFLABEL (label_58)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_15]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_31_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;

DEFLABEL (label_48)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_47;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_46)
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Rsp [2]) = (Wrd16.Obj);

DEFLABEL (label_45)
  Rsp = (& (Rsp [1]));
  goto loop_23;

DEFLABEL (label_47)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_24]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 1);

DEFLABEL (label_35)
  (Wrd7.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_19]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_1]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_57;
  Wrd25 = Wrd29;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_55;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [0]);

DEFLABEL (label_54)
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_53;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_52)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_15]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_31_19);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_48;
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_51;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd49.Obj) = ((Wrd51.pObj) [1]);

DEFLABEL (label_50)
  (Rsp [1]) = (Wrd49.Obj);
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd62.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  (Rsp [3]) = (Wrd58.Obj);
  goto label_45;

DEFLABEL (label_51)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_20]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 1);

DEFLABEL (label_39)
  (Wrd49.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_23]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_22]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_37)
  (Wrd31.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_21])), (Wrd26.pObj));

DEFLABEL (label_36)
  (Wrd25.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_14]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_13]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_33)
  (Wrd63.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_12])), (Wrd58.pObj));

DEFLABEL (label_32)
  (Wrd57.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_10]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_31)
  (Wrd43.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_30)
  (Wrd34.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 1);

DEFLABEL (label_28)
  (Wrd20.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_27)
  (Wrd11.Obj) = Rvl;
  goto label_72;

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_31_25);

DEFLABEL (lambda_4)
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

#define LABEL_32_4 3
#define LABEL_32_5 5
#define ENVIRONMENT_LABEL_32_3 12
#define DEBUGGING_LABEL_32_2 11
#define OBJECT_32_1 10
#define OBJECT_32_0 9
#define EXECUTE_CACHE_32_6 7
#define FREE_REFERENCES_LABEL_32_0 6
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto required_operation_1;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (required_operation_4)
DEFLABEL (required_operation_1)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_32_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  (Wrd9.Obj) = (current_block [OBJECT_32_0]);
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_8 7
#define LABEL_33_9 9
#define LABEL_33_10 11
#define LABEL_33_12 13
#define LABEL_33_7 15
#define LABEL_33_11 17
#define LABEL_33_14 19
#define LABEL_33_15 21
#define LABEL_33_17 23
#define TAG_33_18 10
#define LABEL_33_16 25
#define ENVIRONMENT_LABEL_33_3 41
#define DEBUGGING_LABEL_33_2 40
#define OBJECT_33_6 39
#define OBJECT_33_5 38
#define OBJECT_33_4 37
#define OBJECT_33_3 36
#define OBJECT_33_2 35
#define OBJECT_33_1 34
#define OBJECT_33_0 33
#define EXECUTE_CACHE_33_13 27
#define EXECUTE_CACHE_33_6 29
#define FREE_REFERENCE_33_0 32
#define FREE_REFERENCES_LABEL_33_0 26
#define NUMBER_OF_LINKER_SECTIONS_33_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd34;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd33;
  machine_word Wrd32;
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
      current_block = (Rpc - LABEL_33_4);
      goto provide_default_input_operations_18;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_33_8);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_33_9);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_33_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_33_12);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_33_7);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_33_11);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_33_14);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_33_15);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_33_17);
      goto lambda_23;

    case 11:
      current_block = (Rpc - LABEL_33_16);
      goto lambda_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (provide_default_input_operations_22)
DEFLABEL (provide_default_input_operations_18)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;

DEFLABEL (label_26)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_33_1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_25)
  (Wrd34.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd34.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_27)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_10]))));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_28)
  (Wrd15.Obj) = (current_block [OBJECT_33_4]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto label_25;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_33_12);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_31;

DEFLABEL (label_30)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_33_3]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_33_8);

DEFLABEL (label_29)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_33_2]);
  (* (--Rsp)) = (Wrd33.Obj);
  goto label_25;

DEFLABEL (label_31)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  goto label_28;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_33_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_26;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_33_11);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = Rvl;

DEFLABEL (label_35)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_33_5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_33_15);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_33)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_16]))));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_32)
DEFLABEL (label_34)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_17])));
  Rhp += 3;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd16 = Wrd11;
  (Wrd17.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  Rvl = (Wrd10.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_38;
  Wrd16 = Wrd20;

DEFLABEL (label_37)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd16.Obj);
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_14])), (Wrd17.pObj));

DEFLABEL (label_20)
  (Wrd16.Obj) = Rvl;
  goto label_37;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_33_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  goto label_29;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_33_17);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_33_5]))
    goto label_41;
  if ((Wrd5.Obj) == (current_block [OBJECT_33_2]))
    goto label_39;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [2]);
  (Rsp [0]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_39)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  Rvl = ((Wrd14.pObj) [3]);

DEFLABEL (label_40)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  Rvl = ((Wrd18.pObj) [4]);
  goto label_40;

DEFLABEL (lambda_24)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_33_16);
  Rvl = (current_block [OBJECT_33_6]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_7 7
#define LABEL_34_9 9
#define LABEL_34_10 11
#define LABEL_34_12 13
#define LABEL_34_14 15
#define LABEL_34_15 17
#define LABEL_34_17 19
#define LABEL_34_18 21
#define LABEL_34_19 23
#define LABEL_34_16 25
#define LABEL_34_20 27
#define LABEL_34_21 29
#define ENVIRONMENT_LABEL_34_3 41
#define DEBUGGING_LABEL_34_2 40
#define OBJECT_34_0 39
#define EXECUTE_CACHE_34_13 31
#define EXECUTE_CACHE_34_11 33
#define EXECUTE_CACHE_34_8 35
#define EXECUTE_CACHE_34_6 37
#define FREE_REFERENCES_LABEL_34_0 30
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd6;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_34_4);
      goto generic_port_operation_read_substring_18;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_34_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_34_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_34_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_34_12);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_34_14);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_34_15);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_34_17);
      goto loop_14;

    case 9:
      current_block = (Rpc - LABEL_34_18);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_34_19);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_34_16);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_34_20);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_34_21);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generic_port_operation_read_substring_24)
DEFLABEL (generic_port_operation_read_substring_18)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_34_9);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_26;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_34_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  Rvl = (current_block [OBJECT_34_0]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_34_12);
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_29;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_29;
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_28)
  (Rsp [0]) = (Wrd9.Obj);
  goto loop_14;

DEFLABEL (label_29)
  (Wrd5.Obj) = (Rsp [5]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_14]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_20)
  (Wrd9.Obj) = Rvl;
  goto label_28;

DEFLABEL (loop_25)
DEFLABEL (loop_14)
  INTERRUPT_CHECK (26, LABEL_34_17);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_39;
  (Wrd7.Obj) = (Rsp [6]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_39;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd35.Lng) < (Wrd37.Lng)))
    goto label_35;

DEFLABEL (label_38)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_15]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd33.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_34_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_16]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd44.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_34_16);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_11]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_34_19);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_32;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_20]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_13]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_34_20);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_31;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_31;
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_30)
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_14;

DEFLABEL (label_31)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_21]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_22)
  (Wrd9.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd11.Obj) = (Rsp [6]);
  (Rsp [7]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [6]) = (Wrd12.Obj);
  Rsp = (& (Rsp [6]));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 26)
    goto label_34;

DEFLABEL (label_33)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_34)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_33;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) - (Wrd22.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_33;
  Rvl = (LONG_TO_FIXNUM (Wrd18.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd15.Obj) = (Rsp [5]);
  (Rsp [6]) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd16.Obj);
  Rsp = (& (Rsp [5]));
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 26)
    goto label_37;

DEFLABEL (label_36)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_37)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_36;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd22.Lng) = ((Wrd24.Lng) - (Wrd26.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd22.Lng)))
    goto label_36;
  Rvl = (LONG_TO_FIXNUM (Wrd22.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [6]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  goto label_38;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_7 7
#define LABEL_35_8 9
#define LABEL_35_9 11
#define LABEL_35_10 13
#define LABEL_35_11 15
#define LABEL_35_12 17
#define LABEL_35_13 19
#define TAG_35_14 8
#define ENVIRONMENT_LABEL_35_3 31
#define DEBUGGING_LABEL_35_2 30
#define OBJECT_35_3 29
#define OBJECT_35_2 28
#define OBJECT_35_1 27
#define OBJECT_35_0 26
#define EXECUTE_CACHE_35_6 21
#define FREE_REFERENCE_35_1 24
#define FREE_REFERENCE_35_0 25
#define FREE_REFERENCES_LABEL_35_0 20
#define NUMBER_OF_LINKER_SECTIONS_35_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_35_4);
      goto provide_default_output_operations_16;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_35_7);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_35_8);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_35_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_35_10);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_35_11);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_35_12);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_35_13);
      goto lambda_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (provide_default_output_operations_22)
DEFLABEL (provide_default_output_operations_16)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_35_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = Rvl;

DEFLABEL (label_32)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_35_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_35_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = Rvl;

DEFLABEL (label_28)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_35_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_35_11);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = Rvl;

DEFLABEL (label_24)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_13])));
  Rhp += 4;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd18 = Wrd11;
  (Wrd19.Obj) = (Rsp [3]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd18.pObj) [4]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  ((Wrd18.pObj) [5]) = (Wrd13.Obj);
  Rvl = (Wrd10.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_1]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_27;
  Wrd22 = Wrd26;

DEFLABEL (label_26)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd22.Obj);
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_12])), (Wrd23.pObj));

DEFLABEL (label_20)
  (Wrd22.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_31;
  Wrd16 = Wrd20;

DEFLABEL (label_30)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd16.Obj);
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_10])), (Wrd17.pObj));

DEFLABEL (label_19)
  (Wrd16.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_35;
  Wrd16 = Wrd20;

DEFLABEL (label_34)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd16.Obj);
  goto label_32;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_8])), (Wrd17.pObj));

DEFLABEL (label_18)
  (Wrd16.Obj) = Rvl;
  goto label_34;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_35_13);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_35_3]))
    goto label_39;
  if ((Wrd5.Obj) == (current_block [OBJECT_35_2]))
    goto label_38;
  if ((Wrd5.Obj) == (current_block [OBJECT_35_1]))
    goto label_36;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [2]);
  (Rsp [0]) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_36)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  Rvl = ((Wrd16.pObj) [3]);

DEFLABEL (label_37)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  Rvl = ((Wrd20.pObj) [4]);
  goto label_37;

DEFLABEL (label_39)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  Rvl = ((Wrd24.pObj) [5]);
  goto label_37;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define ENVIRONMENT_LABEL_36_3 6
#define DEBUGGING_LABEL_36_2 5
#define OBJECT_36_0 4
#define FREE_REFERENCES_LABEL_36_0 4
#define NUMBER_OF_LINKER_SECTIONS_36_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_36_4);
      goto no_flush_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (no_flush_3)
DEFLABEL (no_flush_0)
  INTERRUPT_CHECK (26, LABEL_36_4);
  Rvl = (current_block [OBJECT_36_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_7 7
#define LABEL_37_8 9
#define LABEL_37_9 11
#define LABEL_37_12 13
#define LABEL_37_13 15
#define LABEL_37_14 17
#define LABEL_37_10 19
#define ENVIRONMENT_LABEL_37_3 26
#define DEBUGGING_LABEL_37_2 25
#define EXECUTE_CACHE_37_11 21
#define EXECUTE_CACHE_37_6 23
#define FREE_REFERENCES_LABEL_37_0 20
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd70;
  machine_word Wrd68;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_37_4);
      goto generic_port_operation_write_substring_12;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_37_7);
      goto loop_9;

    case 3:
      current_block = (Rpc - LABEL_37_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_37_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_37_12);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_37_13);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_37_14);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_37_10);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generic_port_operation_write_substring_19)
DEFLABEL (generic_port_operation_write_substring_12)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_9;

DEFLABEL (loop_20)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_37_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_37;
  (Wrd7.Obj) = (Rsp [5]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_37;
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd38.Lng) < (Wrd40.Lng)))
    goto label_34;

DEFLABEL (label_33)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_9]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_10]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_37_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_37_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 26))
    goto label_28;
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd40.Lng) > 0)
    goto label_25;

DEFLABEL (label_24)
  (Wrd14.Obj) = (Rsp [5]);
  (Rsp [6]) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd15.Obj);
  Rsp = (& (Rsp [5]));
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 26)
    goto label_22;

DEFLABEL (label_21)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_22)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_21;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd21.Lng) = ((Wrd23.Lng) - (Wrd25.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd21.Lng)))
    goto label_21;
  Rvl = (LONG_TO_FIXNUM (Wrd21.Lng));

DEFLABEL (label_23)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_27;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd35.Lng) = ((Wrd37.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd35.Lng)))
    goto label_27;
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd35.Lng));

DEFLABEL (label_26)
  (Rsp [1]) = (Wrd32.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_9;

DEFLABEL (label_27)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_14]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_16)
  (Wrd32.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_28)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_13]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_25;

DEFLABEL (label_29)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_32;
  (Wrd43.Obj) = (Rsp [5]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 26))
    goto label_32;
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if ((Wrd68.Lng) > (Wrd70.Lng))
    goto label_31;

DEFLABEL (label_30)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd53.Obj) = (Rsp [5]);
  (Rsp [6]) = (Wrd53.Obj);
  (Wrd54.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd54.Obj);
  Rsp = (& (Rsp [5]));
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 26))
    goto label_21;
  (Wrd58.Obj) = (Rsp [1]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 26))
    goto label_21;
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  (Wrd60.Lng) = ((Wrd62.Lng) - (Wrd64.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd60.Lng)))
    goto label_21;
  Rvl = (LONG_TO_FIXNUM (Wrd60.Lng));
  goto label_23;

DEFLABEL (label_32)
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.Obj) = (Rsp [5]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_12]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  goto label_31;

DEFLABEL (label_34)
  (Wrd15.Obj) = (Rsp [4]);
  (Rsp [5]) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd16.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 26)
    goto label_36;

DEFLABEL (label_35)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_36)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_35;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd22.Lng) = ((Wrd24.Lng) - (Wrd26.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd22.Lng)))
    goto label_35;
  Rvl = (LONG_TO_FIXNUM (Wrd22.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_33;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_6 7
#define TAG_38_7 2
#define LABEL_38_8 9
#define LABEL_38_9 11
#define LABEL_38_10 13
#define TAG_38_11 5
#define LABEL_38_12 15
#define LABEL_38_13 17
#define LABEL_38_19 19
#define LABEL_38_15 21
#define LABEL_38_16 23
#define TAG_38_17 10
#define LABEL_38_18 25
#define LABEL_38_20 27
#define LABEL_38_27 29
#define LABEL_38_22 31
#define LABEL_38_23 33
#define TAG_38_24 15
#define LABEL_38_25 35
#define TAG_38_26 16
#define LABEL_38_28 37
#define LABEL_38_29 39
#define LABEL_38_30 41
#define ENVIRONMENT_LABEL_38_3 56
#define DEBUGGING_LABEL_38_2 55
#define OBJECT_38_7 54
#define OBJECT_38_6 53
#define OBJECT_38_5 52
#define OBJECT_38_4 51
#define OBJECT_38_3 50
#define OBJECT_38_2 49
#define OBJECT_38_1 48
#define OBJECT_38_0 47
#define EXECUTE_CACHE_38_21 43
#define EXECUTE_CACHE_38_14 45
#define FREE_REFERENCES_LABEL_38_0 42
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_38_4);
      goto provide_input_features_36;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_21;

    case 2:
      current_block = (Rpc - LABEL_38_6);
      goto lambda_43;

    case 3:
      current_block = (Rpc - LABEL_38_8);
      goto continuation_13;

    case 4:
      current_block = (Rpc - LABEL_38_9);
      goto continuation_23;

    case 5:
      current_block = (Rpc - LABEL_38_10);
      goto lambda_44;

    case 6:
      current_block = (Rpc - LABEL_38_12);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_38_13);
      goto continuation_24;

    case 8:
      current_block = (Rpc - LABEL_38_19);
      goto label_38;

    case 9:
      current_block = (Rpc - LABEL_38_15);
      goto continuation_15;

    case 10:
      current_block = (Rpc - LABEL_38_16);
      goto lambda_45;

    case 11:
      current_block = (Rpc - LABEL_38_18);
      goto continuation_0;

    case 12:
      current_block = (Rpc - LABEL_38_20);
      goto continuation_16;

    case 13:
      current_block = (Rpc - LABEL_38_27);
      goto label_39;

    case 14:
      current_block = (Rpc - LABEL_38_22);
      goto continuation_10;

    case 15:
      current_block = (Rpc - LABEL_38_23);
      goto lambda_46;

    case 16:
      current_block = (Rpc - LABEL_38_25);
      goto lambda_47;

    case 17:
      current_block = (Rpc - LABEL_38_28);
      goto continuation_2;

    case 18:
      current_block = (Rpc - LABEL_38_29);
      goto continuation_3;

    case 19:
      current_block = (Rpc - LABEL_38_30);
      goto label_40;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (provide_input_features_42)
DEFLABEL (provide_input_features_36)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_38_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_6])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_38_1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_38_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_10])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  ((Wrd10.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_48;

DEFLABEL (label_49)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_48)
DEFLABEL (label_53)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_38_2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_38_12);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_16])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  ((Wrd10.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_50;

DEFLABEL (label_51)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_50)
DEFLABEL (label_52)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_18]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_38_3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_18);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_23])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_25])));
  Rhp += 5;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd22 = Wrd13;
  (Wrd23.Obj) = (Rsp [4]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  ((Wrd22.pObj) [4]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  ((Wrd22.pObj) [5]) = (Wrd17.Obj);
  ((Wrd22.pObj) [6]) = (Wrd7.Obj);
  Rvl = (Wrd12.Obj);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_38_6);

DEFLABEL (lambda_27)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_38_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_14]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_38_13);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_55;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd15.Lng))))
    goto label_55;
  ((Wrd13.pObj) [5]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_54)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_55)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (current_block [OBJECT_38_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_19]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_5]), 3);

DEFLABEL (label_38)
  goto label_54;

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_38_10);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_15]))));
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

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_38_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_21]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_38_20);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_57;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd15.Lng))))
    goto label_57;
  (Wrd9.Obj) = (current_block [OBJECT_38_6]);
  ((Wrd13.pObj) [5]) = (Wrd9.Obj);

DEFLABEL (label_56)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (current_block [OBJECT_38_4]);
  (Wrd20.Obj) = (current_block [OBJECT_38_6]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_27]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_5]), 3);

DEFLABEL (label_39)
  goto label_56;

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_38_16);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_38_22);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_38_6]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_38_4]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_59;

DEFLABEL (label_58)
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_5]), 3);

DEFLABEL (label_59)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_58;
  ((Wrd16.pObj) [5]) = (Wrd6.Obj);
  Rvl = (current_block [OBJECT_38_7]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_46)
  CLOSURE_HEADER (LABEL_38_23);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_28]))));
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

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_38_28);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_21]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_38_29);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_61;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd15.Lng))))
    goto label_61;
  ((Wrd13.pObj) [5]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_60)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_61)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (current_block [OBJECT_38_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_30]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_5]), 3);

DEFLABEL (label_40)
  goto label_60;

DEFLABEL (lambda_47)
  CLOSURE_HEADER (LABEL_38_25);

DEFLABEL (lambda_34)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_38_3]))
    goto label_66;
  if ((Wrd5.Obj) == (current_block [OBJECT_38_2]))
    goto label_65;
  if ((Wrd5.Obj) == (current_block [OBJECT_38_1]))
    goto label_64;
  if ((Wrd5.Obj) == (current_block [OBJECT_38_0]))
    goto label_62;
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [2]);
  (Rsp [0]) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_62)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  Rvl = ((Wrd18.pObj) [3]);

DEFLABEL (label_63)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  Rvl = ((Wrd22.pObj) [4]);
  goto label_63;

DEFLABEL (label_65)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  Rvl = ((Wrd26.pObj) [5]);
  goto label_63;

DEFLABEL (label_66)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  Rvl = ((Wrd30.pObj) [6]);
  goto label_63;

INVOKE_INTERFACE_TARGET_0
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
port_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_39_4);
      goto transcribe_input_char_2;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transcribe_input_char_6)
DEFLABEL (transcribe_input_char_2)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 2)
    goto label_8;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_39_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_10;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd11.Obj) = ((Wrd16.pObj) [5]);
  if (! ((Wrd11.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_7;

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (label_10)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_39_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_4)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_5 3
#define LABEL_40_4 5
#define LABEL_40_6 7
#define LABEL_40_7 9
#define LABEL_40_8 11
#define LABEL_40_9 13
#define ENVIRONMENT_LABEL_40_3 21
#define DEBUGGING_LABEL_40_2 20
#define OBJECT_40_2 19
#define OBJECT_40_1 18
#define OBJECT_40_0 17
#define EXECUTE_CACHE_40_10 15
#define FREE_REFERENCES_LABEL_40_0 14
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd36;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd33;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd65;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd39;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_40_4);
      goto transcribe_input_substring_4;

    case 2:
      current_block = (Rpc - LABEL_40_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_40_7);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_40_8);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_40_9);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transcribe_input_substring_11)
DEFLABEL (transcribe_input_substring_4)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd5.Obj) = (Rsp [2]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_13;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_40_0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_23;
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd65.Lng) > 0))
    goto label_12;

DEFLABEL (label_22)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_21;
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_21;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd26.Lng) = ((Wrd28.Lng) + (Wrd30.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd26.Lng)))
    goto label_21;
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));

DEFLABEL (label_20)
  (Rsp [2]) = (Wrd21.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd56.Obj) = (Rsp [4]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 62))
    goto label_19;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd55.Lng))))
    goto label_19;
  (Wrd36.Obj) = ((Wrd53.pObj) [5]);
  if ((Wrd36.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;

DEFLABEL (label_17)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_16;
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd47.Lng) = ((Wrd49.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd47.Lng)))
    goto label_16;
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd47.Lng));

DEFLABEL (label_15)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_14)
  (Rsp [1]) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_10]));

DEFLABEL (label_16)
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_9]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_8)
  (Wrd39.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd39.Obj) = (Rsp [2]);
  goto label_15;

DEFLABEL (label_19)
  (Wrd58.Obj) = (Rsp [4]);
  (Wrd59.Obj) = (current_block [OBJECT_40_1]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_8]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_2]), 2);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_17;

DEFLABEL (label_21)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_7)
  (Wrd21.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  goto label_22;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_40_5);
  (Wrd39.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_6 7
#define TAG_41_7 2
#define LABEL_41_8 9
#define LABEL_41_9 11
#define LABEL_41_10 13
#define TAG_41_11 5
#define LABEL_41_12 15
#define LABEL_41_14 17
#define LABEL_41_15 19
#define TAG_41_16 8
#define LABEL_41_17 21
#define LABEL_41_26 23
#define LABEL_41_19 25
#define LABEL_41_27 27
#define LABEL_41_28 29
#define LABEL_41_30 31
#define LABEL_41_20 33
#define TAG_41_21 15
#define LABEL_41_22 35
#define TAG_41_23 16
#define LABEL_41_33 37
#define LABEL_41_34 39
#define LABEL_41_24 41
#define TAG_41_25 19
#define LABEL_41_29 43
#define LABEL_41_36 45
#define LABEL_41_38 47
#define LABEL_41_32 49
#define LABEL_41_39 51
#define LABEL_41_35 53
#define LABEL_41_41 55
#define LABEL_41_42 57
#define ENVIRONMENT_LABEL_41_3 83
#define DEBUGGING_LABEL_41_2 82
#define OBJECT_41_12 81
#define OBJECT_41_11 80
#define OBJECT_41_10 79
#define OBJECT_41_9 78
#define OBJECT_41_8 77
#define OBJECT_41_7 76
#define OBJECT_41_6 75
#define OBJECT_41_5 74
#define OBJECT_41_4 73
#define OBJECT_41_3 72
#define OBJECT_41_2 71
#define OBJECT_41_1 70
#define OBJECT_41_0 69
#define EXECUTE_CACHE_41_40 59
#define EXECUTE_CACHE_41_37 61
#define EXECUTE_CACHE_41_31 63
#define EXECUTE_CACHE_41_18 65
#define EXECUTE_CACHE_41_13 67
#define FREE_REFERENCES_LABEL_41_0 58
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd47;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd49;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_41_4);
      goto provide_output_features_49;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto continuation_27;

    case 2:
      current_block = (Rpc - LABEL_41_6);
      goto lambda_62;

    case 3:
      current_block = (Rpc - LABEL_41_8);
      goto continuation_22;

    case 4:
      current_block = (Rpc - LABEL_41_9);
      goto continuation_29;

    case 5:
      current_block = (Rpc - LABEL_41_10);
      goto lambda_63;

    case 6:
      current_block = (Rpc - LABEL_41_12);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_41_14);
      goto continuation_24;

    case 8:
      current_block = (Rpc - LABEL_41_15);
      goto lambda_64;

    case 9:
      current_block = (Rpc - LABEL_41_17);
      goto continuation_0;

    case 10:
      current_block = (Rpc - LABEL_41_26);
      goto continuation_14;

    case 11:
      current_block = (Rpc - LABEL_41_19);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_41_27);
      goto label_51;

    case 13:
      current_block = (Rpc - LABEL_41_28);
      goto label_52;

    case 14:
      current_block = (Rpc - LABEL_41_30);
      goto label_53;

    case 15:
      current_block = (Rpc - LABEL_41_20);
      goto lambda_65;

    case 16:
      current_block = (Rpc - LABEL_41_22);
      goto lambda_66;

    case 17:
      current_block = (Rpc - LABEL_41_33);
      goto label_55;

    case 18:
      current_block = (Rpc - LABEL_41_34);
      goto label_54;

    case 19:
      current_block = (Rpc - LABEL_41_24);
      goto lambda_67;

    case 20:
      current_block = (Rpc - LABEL_41_29);
      goto continuation_16;

    case 21:
      current_block = (Rpc - LABEL_41_36);
      goto label_56;

    case 22:
      current_block = (Rpc - LABEL_41_38);
      goto continuation_5;

    case 23:
      current_block = (Rpc - LABEL_41_32);
      goto continuation_2;

    case 24:
      current_block = (Rpc - LABEL_41_39);
      goto label_57;

    case 25:
      current_block = (Rpc - LABEL_41_35);
      goto lambda_34;

    case 26:
      current_block = (Rpc - LABEL_41_41);
      goto label_59;

    case 27:
      current_block = (Rpc - LABEL_41_42);
      goto label_58;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (provide_output_features_61)
DEFLABEL (provide_output_features_49)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_41_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_6])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_41_1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_41_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_10])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_41_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_41_12);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_15])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_41_3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_17);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_20])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_22])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  ((Wrd12.pObj) [2]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_24])));
  Rhp += 6;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd28 = Wrd17;
  (Wrd29.Obj) = (Rsp [5]);
  ((Wrd28.pObj) [2]) = (Wrd29.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  ((Wrd28.pObj) [3]) = (Wrd27.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  ((Wrd28.pObj) [4]) = (Wrd25.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  ((Wrd28.pObj) [5]) = (Wrd23.Obj);
  ((Wrd28.pObj) [6]) = (Wrd7.Obj);
  ((Wrd28.pObj) [7]) = (Wrd11.Obj);
  Rvl = (Wrd16.Obj);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (lambda_62)
  CLOSURE_HEADER (LABEL_41_6);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_9]))));
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

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_41_9);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_13]));

DEFLABEL (lambda_63)
  CLOSURE_HEADER (LABEL_41_10);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_14]))));
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

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_41_14);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_18]));

DEFLABEL (lambda_64)
  CLOSURE_HEADER (LABEL_41_15);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_41_19);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_70;

DEFLABEL (label_69)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_70)
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 26))
    goto label_78;
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd49.Lng) > 0))
    goto label_69;

DEFLABEL (label_77)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_26]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd24.Obj) = (Rsp [5]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_76;
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_76;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd28.Lng) = ((Wrd30.Lng) + (Wrd32.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd28.Lng)))
    goto label_76;
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_75)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_29]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_74;
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd43.Lng) = ((Wrd45.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd43.Lng)))
    goto label_74;
  (Wrd46.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_73)
  (Wrd47.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_31]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_41_29);
  (Wrd5.Obj) = Rvl;
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_72;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_72;
  ((Wrd15.pObj) [6]) = Rvl;

DEFLABEL (label_71)
  (Wrd6.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (Rsp [3]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_37]));

DEFLABEL (label_72)
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.Obj) = (current_block [OBJECT_41_4]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_36]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_10]), 3);

DEFLABEL (label_56)
  goto label_71;

DEFLABEL (label_74)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_30]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_28]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_27]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_51)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_69;
  goto label_77;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_41_26);
  goto label_69;

DEFLABEL (lambda_65)
  CLOSURE_HEADER (LABEL_41_20);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_41_32);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_80;

DEFLABEL (label_79)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd8.Lng) > 0))
    goto label_79;
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_82;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd24.Lng))))
    goto label_82;
  (Wrd18.Obj) = (Rsp [3]);
  ((Wrd22.pObj) [6]) = (Wrd18.Obj);

DEFLABEL (label_81)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_38]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_40]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_41_38);
  goto label_79;

DEFLABEL (label_82)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.Obj) = (current_block [OBJECT_41_4]);
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_39]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_10]), 3);

DEFLABEL (label_57)
  goto label_81;

DEFLABEL (lambda_66)
  CLOSURE_HEADER (LABEL_41_22);

DEFLABEL (lambda_38)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_87;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd38.Lng))))
    goto label_87;
  (Wrd7.Obj) = ((Wrd36.pObj) [6]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_84;

DEFLABEL (label_83)
  Rvl = (current_block [OBJECT_41_7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_84)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_86;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd19.Lng))))
    goto label_86;
  (Wrd11.Obj) = ((Wrd17.pObj) [6]);

DEFLABEL (label_85)
  (Wrd27.Obj) = (current_block [OBJECT_41_6]);
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_83;
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd31.Obj);
  (Rsp [2]) = (Wrd27.Obj);
  goto lambda_7;

DEFLABEL (label_86)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_41_4]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_34]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_5]), 2);

DEFLABEL (label_54)
  (Wrd11.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_87)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_41_4]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_33]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_5]), 2);

DEFLABEL (label_55)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_83;
  goto label_84;

DEFLABEL (lambda_67)
  CLOSURE_HEADER (LABEL_41_24);

DEFLABEL (lambda_46)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_41_3]))
    goto label_94;
  if ((Wrd5.Obj) == (current_block [OBJECT_41_2]))
    goto label_93;
  if ((Wrd5.Obj) == (current_block [OBJECT_41_8]))
    goto label_92;
  if ((Wrd5.Obj) == (current_block [OBJECT_41_9]))
    goto label_91;
  if ((Wrd5.Obj) == (current_block [OBJECT_41_1]))
    goto label_90;
  if ((Wrd5.Obj) == (current_block [OBJECT_41_0]))
    goto label_88;
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [2]);
  (Rsp [0]) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_88)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  Rvl = ((Wrd22.pObj) [3]);

DEFLABEL (label_89)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_90)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  Rvl = ((Wrd26.pObj) [4]);
  goto label_89;

DEFLABEL (label_91)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_35]))));
  goto label_89;

DEFLABEL (label_92)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  Rvl = ((Wrd33.pObj) [7]);
  goto label_89;

DEFLABEL (label_93)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  Rvl = ((Wrd37.pObj) [5]);
  goto label_89;

DEFLABEL (label_94)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  Rvl = ((Wrd41.pObj) [6]);
  goto label_89;

DEFLABEL (lambda_68)
DEFLABEL (lambda_34)
  INTERRUPT_CHECK (26, LABEL_41_35);
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_102;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd36.Lng))))
    goto label_102;
  (Wrd7.Obj) = ((Wrd34.pObj) [6]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_101;

DEFLABEL (label_100)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_99;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd19.Lng))))
    goto label_99;
  (Wrd11.Obj) = ((Wrd17.pObj) [6]);

DEFLABEL (label_98)
  if ((Wrd11.Obj) == (current_block [OBJECT_41_6]))
    goto label_96;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_95;

DEFLABEL (label_96)
  Rvl = (current_block [OBJECT_41_12]);

DEFLABEL (label_95)
DEFLABEL (label_97)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_99)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_41_4]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_42]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_5]), 2);

DEFLABEL (label_58)
  (Wrd11.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  Rvl = (current_block [OBJECT_41_11]);
  goto label_97;

DEFLABEL (label_102)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.Obj) = (current_block [OBJECT_41_4]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_41]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_5]), 2);

DEFLABEL (label_59)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_101;
  goto label_100;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define ENVIRONMENT_LABEL_42_3 8
#define DEBUGGING_LABEL_42_2 7
#define EXECUTE_CACHE_42_5 5
#define FREE_REFERENCES_LABEL_42_0 4
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_42_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_42_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_5]));

INVOKE_INTERFACE_TARGET_1
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
port_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_43_4);
  Rvl = (current_block [OBJECT_43_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define ENVIRONMENT_LABEL_44_3 7
#define DEBUGGING_LABEL_44_2 6
#define OBJECT_44_1 5
#define OBJECT_44_0 4
#define FREE_REFERENCES_LABEL_44_0 4
#define NUMBER_OF_LINKER_SECTIONS_44_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_44_4);
      goto port__type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port__type_3)
DEFLABEL (port__type_0)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_44_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

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

#define LABEL_45_4 3
#define ENVIRONMENT_LABEL_45_3 7
#define DEBUGGING_LABEL_45_2 6
#define OBJECT_45_1 5
#define OBJECT_45_0 4
#define FREE_REFERENCES_LABEL_45_0 4
#define NUMBER_OF_LINKER_SECTIONS_45_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_45_4);
      goto port__state_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port__state_3)
DEFLABEL (port__state_0)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_45_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 2);

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

#define LABEL_46_4 3
#define ENVIRONMENT_LABEL_46_3 7
#define DEBUGGING_LABEL_46_2 6
#define OBJECT_46_1 5
#define OBJECT_46_0 4
#define FREE_REFERENCES_LABEL_46_0 4
#define NUMBER_OF_LINKER_SECTIONS_46_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_46_4);
      goto port__thread_mutex_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port__thread_mutex_3)
DEFLABEL (port__thread_mutex_0)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_46_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

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

#define LABEL_47_4 3
#define ENVIRONMENT_LABEL_47_3 7
#define DEBUGGING_LABEL_47_2 6
#define OBJECT_47_1 5
#define OBJECT_47_0 4
#define FREE_REFERENCES_LABEL_47_0 4
#define NUMBER_OF_LINKER_SECTIONS_47_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_47_4);
      goto port_unreadP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_unreadP_3)
DEFLABEL (port_unreadP_0)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_47_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 2);

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

#define LABEL_48_4 3
#define ENVIRONMENT_LABEL_48_3 7
#define DEBUGGING_LABEL_48_2 6
#define OBJECT_48_1 5
#define OBJECT_48_0 4
#define FREE_REFERENCES_LABEL_48_0 4
#define NUMBER_OF_LINKER_SECTIONS_48_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_48_4);
      goto port_previous_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_previous_3)
DEFLABEL (port_previous_0)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_48_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 2);

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

#define LABEL_49_4 3
#define ENVIRONMENT_LABEL_49_3 7
#define DEBUGGING_LABEL_49_2 6
#define OBJECT_49_1 5
#define OBJECT_49_0 4
#define FREE_REFERENCES_LABEL_49_0 4
#define NUMBER_OF_LINKER_SECTIONS_49_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_49_4);
      goto port_properties_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_properties_3)
DEFLABEL (port_properties_0)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_49_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 2);

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

#define LABEL_50_4 3
#define ENVIRONMENT_LABEL_50_3 7
#define DEBUGGING_LABEL_50_2 6
#define OBJECT_50_1 5
#define OBJECT_50_0 4
#define FREE_REFERENCES_LABEL_50_0 4
#define NUMBER_OF_LINKER_SECTIONS_50_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_50_4);
      goto port_transcript_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_transcript_3)
DEFLABEL (port_transcript_0)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_50_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

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

#define LABEL_51_4 3
#define ENVIRONMENT_LABEL_51_3 8
#define DEBUGGING_LABEL_51_2 7
#define OBJECT_51_2 6
#define OBJECT_51_1 5
#define OBJECT_51_0 4
#define FREE_REFERENCES_LABEL_51_0 4
#define NUMBER_OF_LINKER_SECTIONS_51_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_51_4);
      goto set_port__typeB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_port__typeB_3)
DEFLABEL (set_port__typeB_0)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_51_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_51_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define ENVIRONMENT_LABEL_52_3 8
#define DEBUGGING_LABEL_52_2 7
#define OBJECT_52_2 6
#define OBJECT_52_1 5
#define OBJECT_52_0 4
#define FREE_REFERENCES_LABEL_52_0 4
#define NUMBER_OF_LINKER_SECTIONS_52_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_52_4);
      goto set_port__stateB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_port__stateB_3)
DEFLABEL (set_port__stateB_0)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_52_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_52_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define ENVIRONMENT_LABEL_53_3 8
#define DEBUGGING_LABEL_53_2 7
#define OBJECT_53_2 6
#define OBJECT_53_1 5
#define OBJECT_53_0 4
#define FREE_REFERENCES_LABEL_53_0 4
#define NUMBER_OF_LINKER_SECTIONS_53_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_53_4);
      goto set_port__thread_mutexB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_port__thread_mutexB_3)
DEFLABEL (set_port__thread_mutexB_0)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_53_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_53_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define ENVIRONMENT_LABEL_54_3 8
#define DEBUGGING_LABEL_54_2 7
#define OBJECT_54_2 6
#define OBJECT_54_1 5
#define OBJECT_54_0 4
#define FREE_REFERENCES_LABEL_54_0 4
#define NUMBER_OF_LINKER_SECTIONS_54_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_54_4);
      goto set_port_unreadPB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_port_unreadPB_3)
DEFLABEL (set_port_unreadPB_0)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_54_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_54_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define ENVIRONMENT_LABEL_55_3 8
#define DEBUGGING_LABEL_55_2 7
#define OBJECT_55_2 6
#define OBJECT_55_1 5
#define OBJECT_55_0 4
#define FREE_REFERENCES_LABEL_55_0 4
#define NUMBER_OF_LINKER_SECTIONS_55_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_55_4);
      goto set_port_previousB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_port_previousB_3)
DEFLABEL (set_port_previousB_0)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_55_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_55_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define ENVIRONMENT_LABEL_56_3 8
#define DEBUGGING_LABEL_56_2 7
#define OBJECT_56_2 6
#define OBJECT_56_1 5
#define OBJECT_56_0 4
#define FREE_REFERENCES_LABEL_56_0 4
#define NUMBER_OF_LINKER_SECTIONS_56_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_56_4);
      goto set_port_propertiesB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_port_propertiesB_3)
DEFLABEL (set_port_propertiesB_0)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_56_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [7]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_56_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define ENVIRONMENT_LABEL_57_3 8
#define DEBUGGING_LABEL_57_2 7
#define OBJECT_57_2 6
#define OBJECT_57_1 5
#define OBJECT_57_0 4
#define FREE_REFERENCES_LABEL_57_0 4
#define NUMBER_OF_LINKER_SECTIONS_57_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_57_4);
      goto set_port_transcriptB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_port_transcriptB_3)
DEFLABEL (set_port_transcriptB_0)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_57_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [8]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_57_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define LABEL_58_6 7
#define LABEL_58_7 9
#define ENVIRONMENT_LABEL_58_3 17
#define DEBUGGING_LABEL_58_2 16
#define OBJECT_58_3 15
#define OBJECT_58_2 14
#define OBJECT_58_1 13
#define OBJECT_58_0 12
#define FREE_REFERENCE_58_0 11
#define FREE_REFERENCES_LABEL_58_0 10
#define NUMBER_OF_LINKER_SECTIONS_58_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_58_4);
      goto portP_4;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_58_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_58_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (portP_10)
DEFLABEL (portP_4)
  INTERRUPT_CHECK (26, LABEL_58_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
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
  Rvl = (current_block [OBJECT_58_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_58_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define ENVIRONMENT_LABEL_59_3 13
#define DEBUGGING_LABEL_59_2 12
#define OBJECT_59_0 11
#define EXECUTE_CACHE_59_7 7
#define EXECUTE_CACHE_59_6 9
#define FREE_REFERENCES_LABEL_59_0 6
#define NUMBER_OF_LINKER_SECTIONS_59_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_59_4);
      goto make_port_1;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_port_4)
DEFLABEL (make_port_1)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_59_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_59_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_7 5
#define LABEL_60_5 7
#define ENVIRONMENT_LABEL_60_3 17
#define DEBUGGING_LABEL_60_2 16
#define OBJECT_60_2 15
#define OBJECT_60_1 14
#define OBJECT_60_0 13
#define EXECUTE_CACHE_60_8 9
#define EXECUTE_CACHE_60_6 11
#define FREE_REFERENCES_LABEL_60_0 8
#define NUMBER_OF_LINKER_SECTIONS_60_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_60_4);
      goto port_type_2;

    case 1:
      current_block = (Rpc - LABEL_60_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_60_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_type_5)
DEFLABEL (port_type_2)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_60_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_60_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_60_7);

DEFLABEL (label_8)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_60_1]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_2]), 2);

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

#define LABEL_61_4 3
#define LABEL_61_7 5
#define LABEL_61_5 7
#define LABEL_61_9 9
#define ENVIRONMENT_LABEL_61_3 22
#define DEBUGGING_LABEL_61_2 21
#define OBJECT_61_3 20
#define OBJECT_61_2 19
#define OBJECT_61_1 18
#define OBJECT_61_0 17
#define EXECUTE_CACHE_61_10 11
#define EXECUTE_CACHE_61_8 13
#define EXECUTE_CACHE_61_6 15
#define FREE_REFERENCES_LABEL_61_0 10
#define NUMBER_OF_LINKER_SECTIONS_61_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_61_4);
      goto set_port_typeB_3;

    case 1:
      current_block = (Rpc - LABEL_61_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_61_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_61_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_port_typeB_6)
DEFLABEL (set_port_typeB_3)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_61_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_9)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_61_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_61_9);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_61_1]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_3]), 3);

DEFLABEL (label_8)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_7;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_61_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_61_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_61_7);
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_7 5
#define LABEL_62_5 7
#define ENVIRONMENT_LABEL_62_3 17
#define DEBUGGING_LABEL_62_2 16
#define OBJECT_62_2 15
#define OBJECT_62_1 14
#define OBJECT_62_0 13
#define EXECUTE_CACHE_62_8 9
#define EXECUTE_CACHE_62_6 11
#define FREE_REFERENCES_LABEL_62_0 8
#define NUMBER_OF_LINKER_SECTIONS_62_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_62_4);
      goto port_state_2;

    case 1:
      current_block = (Rpc - LABEL_62_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_62_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_state_5)
DEFLABEL (port_state_2)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_62_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_62_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_62_7);

DEFLABEL (label_8)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_62_1]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_2]), 2);

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

#define LABEL_63_4 3
#define LABEL_63_7 5
#define LABEL_63_5 7
#define ENVIRONMENT_LABEL_63_3 18
#define DEBUGGING_LABEL_63_2 17
#define OBJECT_63_3 16
#define OBJECT_63_2 15
#define OBJECT_63_1 14
#define OBJECT_63_0 13
#define EXECUTE_CACHE_63_8 9
#define EXECUTE_CACHE_63_6 11
#define FREE_REFERENCES_LABEL_63_0 8
#define NUMBER_OF_LINKER_SECTIONS_63_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
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
      goto set_port_stateB_2;

    case 1:
      current_block = (Rpc - LABEL_63_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_63_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_port_stateB_5)
DEFLABEL (set_port_stateB_2)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_63_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_63_0]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_63_7);

DEFLABEL (label_8)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_63_1]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd21.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_3]), 3);

DEFLABEL (label_7)
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_6;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [3]) = (Wrd12.Obj);
  Rvl = (current_block [OBJECT_63_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_7 5
#define LABEL_64_5 7
#define ENVIRONMENT_LABEL_64_3 17
#define DEBUGGING_LABEL_64_2 16
#define OBJECT_64_2 15
#define OBJECT_64_1 14
#define OBJECT_64_0 13
#define EXECUTE_CACHE_64_8 9
#define EXECUTE_CACHE_64_6 11
#define FREE_REFERENCES_LABEL_64_0 8
#define NUMBER_OF_LINKER_SECTIONS_64_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_64_4);
      goto port_thread_mutex_2;

    case 1:
      current_block = (Rpc - LABEL_64_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_64_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_thread_mutex_5)
DEFLABEL (port_thread_mutex_2)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_64_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_64_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_64_7);

DEFLABEL (label_8)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_64_1]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_2]), 2);

DEFLABEL (label_7)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_6;
  Rvl = ((Wrd16.pObj) [4]);
  Rsp = (& (Rsp [2]));
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
port_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_port_thread_mutexB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_port_thread_mutexB_3)
DEFLABEL (set_port_thread_mutexB_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_65_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_7 5
#define LABEL_66_5 7
#define LABEL_66_10 9
#define LABEL_66_9 11
#define ENVIRONMENT_LABEL_66_3 20
#define DEBUGGING_LABEL_66_2 19
#define OBJECT_66_1 18
#define OBJECT_66_0 17
#define EXECUTE_CACHE_66_8 13
#define EXECUTE_CACHE_66_6 15
#define FREE_REFERENCES_LABEL_66_0 12
#define NUMBER_OF_LINKER_SECTIONS_66_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_66_4);
      goto port_P_4;

    case 1:
      current_block = (Rpc - LABEL_66_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_66_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_66_10);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_66_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_P_7)
DEFLABEL (port_P_4)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_66_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;

DEFLABEL (label_12)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_66_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_10]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_66_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_66_10);

DEFLABEL (label_11)
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (Wrd9.Obj))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_66_1]);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_66_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_66_7);
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define ENVIRONMENT_LABEL_67_3 12
#define DEBUGGING_LABEL_67_2 11
#define EXECUTE_CACHE_67_7 7
#define EXECUTE_CACHE_67_6 9
#define FREE_REFERENCES_LABEL_67_0 6
#define NUMBER_OF_LINKER_SECTIONS_67_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_67_4);
      goto port_operation_names_1;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_operation_names_4)
DEFLABEL (port_operation_names_1)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_67_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_5 5
#define ENVIRONMENT_LABEL_68_3 12
#define DEBUGGING_LABEL_68_2 11
#define OBJECT_68_1 10
#define OBJECT_68_0 9
#define EXECUTE_CACHE_68_6 7
#define FREE_REFERENCES_LABEL_68_0 6
#define NUMBER_OF_LINKER_SECTIONS_68_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_68_4);
      goto port__operation_1;

    case 1:
      current_block = (Rpc - LABEL_68_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port__operation_5)
DEFLABEL (port__operation_1)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_68_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_7 5
#define LABEL_69_5 7
#define LABEL_69_9 9
#define ENVIRONMENT_LABEL_69_3 21
#define DEBUGGING_LABEL_69_2 20
#define OBJECT_69_2 19
#define OBJECT_69_1 18
#define OBJECT_69_0 17
#define EXECUTE_CACHE_69_10 11
#define EXECUTE_CACHE_69_8 13
#define EXECUTE_CACHE_69_6 15
#define FREE_REFERENCES_LABEL_69_0 10
#define NUMBER_OF_LINKER_SECTIONS_69_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_69_4);
      goto port_operation_3;

    case 1:
      current_block = (Rpc - LABEL_69_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_69_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_69_9);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_operation_7)
DEFLABEL (port_operation_3)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_69_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_69_0]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_69_7);

DEFLABEL (label_10)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_9;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_9;
  (Wrd7.Obj) = ((Wrd13.pObj) [2]);

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_10]));

DEFLABEL (label_9)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_69_1]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_2]), 2);

DEFLABEL (label_5)
  (Wrd7.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_5 5
#define LABEL_70_6 7
#define LABEL_70_7 9
#define LABEL_70_8 11
#define LABEL_70_10 13
#define ENVIRONMENT_LABEL_70_3 28
#define DEBUGGING_LABEL_70_2 27
#define OBJECT_70_7 26
#define OBJECT_70_6 25
#define OBJECT_70_5 24
#define OBJECT_70_4 23
#define OBJECT_70_3 22
#define OBJECT_70_2 21
#define OBJECT_70_1 20
#define OBJECT_70_0 19
#define EXECUTE_CACHE_70_11 15
#define EXECUTE_CACHE_70_9 17
#define FREE_REFERENCES_LABEL_70_0 14
#define NUMBER_OF_LINKER_SECTIONS_70_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_70_4);
      goto lambda_12;

    case 1:
      current_block = (Rpc - LABEL_70_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_70_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_70_7);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_70_8);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_70_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_17)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_21;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_20)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_19;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_18)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_70_2]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_70_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_70_7);
  (Wrd8.Obj) = (current_block [OBJECT_70_3]);
  (Wrd9.Obj) = (current_block [OBJECT_70_4]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_70_5]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_70_10);
  (Wrd8.Obj) = (current_block [OBJECT_70_6]);
  (Wrd9.Obj) = (current_block [OBJECT_70_4]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_70_7]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_0]), 1);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_5 5
#define ENVIRONMENT_LABEL_71_3 12
#define DEBUGGING_LABEL_71_2 11
#define OBJECT_71_1 10
#define OBJECT_71_0 9
#define EXECUTE_CACHE_71_6 7
#define FREE_REFERENCES_LABEL_71_0 6
#define NUMBER_OF_LINKER_SECTIONS_71_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_71_4);
      goto port_operation_char_readyP_1;

    case 1:
      current_block = (Rpc - LABEL_71_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_operation_char_readyP_4)
DEFLABEL (port_operation_char_readyP_1)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_71_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_71_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define LABEL_72_5 5
#define ENVIRONMENT_LABEL_72_3 12
#define DEBUGGING_LABEL_72_2 11
#define OBJECT_72_1 10
#define OBJECT_72_0 9
#define EXECUTE_CACHE_72_6 7
#define FREE_REFERENCES_LABEL_72_0 6
#define NUMBER_OF_LINKER_SECTIONS_72_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_72_4);
      goto port_operation_read_char_1;

    case 1:
      current_block = (Rpc - LABEL_72_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_operation_read_char_4)
DEFLABEL (port_operation_read_char_1)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_72_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_72_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define LABEL_73_5 5
#define ENVIRONMENT_LABEL_73_3 12
#define DEBUGGING_LABEL_73_2 11
#define OBJECT_73_1 10
#define OBJECT_73_0 9
#define EXECUTE_CACHE_73_6 7
#define FREE_REFERENCES_LABEL_73_0 6
#define NUMBER_OF_LINKER_SECTIONS_73_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_73_4);
      goto port_operation_unread_char_1;

    case 1:
      current_block = (Rpc - LABEL_73_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_operation_unread_char_4)
DEFLABEL (port_operation_unread_char_1)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_73_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_73_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define LABEL_74_5 5
#define ENVIRONMENT_LABEL_74_3 12
#define DEBUGGING_LABEL_74_2 11
#define OBJECT_74_1 10
#define OBJECT_74_0 9
#define EXECUTE_CACHE_74_6 7
#define FREE_REFERENCES_LABEL_74_0 6
#define NUMBER_OF_LINKER_SECTIONS_74_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_74_4);
      goto port_operation_peek_char_1;

    case 1:
      current_block = (Rpc - LABEL_74_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_operation_peek_char_4)
DEFLABEL (port_operation_peek_char_1)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_74_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_74_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define LABEL_75_5 5
#define ENVIRONMENT_LABEL_75_3 12
#define DEBUGGING_LABEL_75_2 11
#define OBJECT_75_1 10
#define OBJECT_75_0 9
#define EXECUTE_CACHE_75_6 7
#define FREE_REFERENCES_LABEL_75_0 6
#define NUMBER_OF_LINKER_SECTIONS_75_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_75_4);
      goto port_operation_read_substring_1;

    case 1:
      current_block = (Rpc - LABEL_75_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_operation_read_substring_4)
DEFLABEL (port_operation_read_substring_1)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_75_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_75_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [9]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define LABEL_76_5 5
#define ENVIRONMENT_LABEL_76_3 12
#define DEBUGGING_LABEL_76_2 11
#define OBJECT_76_1 10
#define OBJECT_76_0 9
#define EXECUTE_CACHE_76_6 7
#define FREE_REFERENCES_LABEL_76_0 6
#define NUMBER_OF_LINKER_SECTIONS_76_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_76_4);
      goto port_operation_write_char_1;

    case 1:
      current_block = (Rpc - LABEL_76_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_operation_write_char_4)
DEFLABEL (port_operation_write_char_1)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_76_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_76_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [10]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define LABEL_77_5 5
#define ENVIRONMENT_LABEL_77_3 12
#define DEBUGGING_LABEL_77_2 11
#define OBJECT_77_1 10
#define OBJECT_77_0 9
#define EXECUTE_CACHE_77_6 7
#define FREE_REFERENCES_LABEL_77_0 6
#define NUMBER_OF_LINKER_SECTIONS_77_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_77_4);
      goto port_operation_write_substring_1;

    case 1:
      current_block = (Rpc - LABEL_77_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_operation_write_substring_4)
DEFLABEL (port_operation_write_substring_1)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_77_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_77_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [11]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define LABEL_78_5 5
#define ENVIRONMENT_LABEL_78_3 12
#define DEBUGGING_LABEL_78_2 11
#define OBJECT_78_1 10
#define OBJECT_78_0 9
#define EXECUTE_CACHE_78_6 7
#define FREE_REFERENCES_LABEL_78_0 6
#define NUMBER_OF_LINKER_SECTIONS_78_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_78_4);
      goto port_operation_fresh_line_1;

    case 1:
      current_block = (Rpc - LABEL_78_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_operation_fresh_line_4)
DEFLABEL (port_operation_fresh_line_1)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_78_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_78_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [12]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define LABEL_79_5 5
#define ENVIRONMENT_LABEL_79_3 12
#define DEBUGGING_LABEL_79_2 11
#define OBJECT_79_1 10
#define OBJECT_79_0 9
#define EXECUTE_CACHE_79_6 7
#define FREE_REFERENCES_LABEL_79_0 6
#define NUMBER_OF_LINKER_SECTIONS_79_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_79_4);
      goto port_operation_line_startP_1;

    case 1:
      current_block = (Rpc - LABEL_79_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_operation_line_startP_4)
DEFLABEL (port_operation_line_startP_1)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_79_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_79_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [13]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define LABEL_80_5 5
#define ENVIRONMENT_LABEL_80_3 12
#define DEBUGGING_LABEL_80_2 11
#define OBJECT_80_1 10
#define OBJECT_80_0 9
#define EXECUTE_CACHE_80_6 7
#define FREE_REFERENCES_LABEL_80_0 6
#define NUMBER_OF_LINKER_SECTIONS_80_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      goto port_operation_flush_output_1;

    case 1:
      current_block = (Rpc - LABEL_80_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_operation_flush_output_4)
DEFLABEL (port_operation_flush_output_1)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_80_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_80_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [14]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define LABEL_81_5 5
#define ENVIRONMENT_LABEL_81_3 12
#define DEBUGGING_LABEL_81_2 11
#define OBJECT_81_1 10
#define OBJECT_81_0 9
#define EXECUTE_CACHE_81_6 7
#define FREE_REFERENCES_LABEL_81_0 6
#define NUMBER_OF_LINKER_SECTIONS_81_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_81_4);
      goto port_operation_discretionary_flush_output_1;

    case 1:
      current_block = (Rpc - LABEL_81_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_operation_discretionary_flush_output_4)
DEFLABEL (port_operation_discretionary_flush_output_1)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_81_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_81_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [15]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define LABEL_82_5 5
#define LABEL_82_6 7
#define LABEL_82_7 9
#define LABEL_82_8 11
#define LABEL_82_10 13
#define ENVIRONMENT_LABEL_82_3 28
#define DEBUGGING_LABEL_82_2 27
#define OBJECT_82_7 26
#define OBJECT_82_6 25
#define OBJECT_82_5 24
#define OBJECT_82_4 23
#define OBJECT_82_3 22
#define OBJECT_82_2 21
#define OBJECT_82_1 20
#define OBJECT_82_0 19
#define EXECUTE_CACHE_82_11 15
#define EXECUTE_CACHE_82_9 17
#define FREE_REFERENCES_LABEL_82_0 14
#define NUMBER_OF_LINKER_SECTIONS_82_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_82_4);
      goto lambda_12;

    case 1:
      current_block = (Rpc - LABEL_82_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_82_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_82_7);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_82_8);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_82_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_17)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_21;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_20)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_19;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_18)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_82_2]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_82_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_82_7);
  (Wrd8.Obj) = (current_block [OBJECT_82_3]);
  (Wrd9.Obj) = (current_block [OBJECT_82_4]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_82_5]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_82_10);
  (Wrd8.Obj) = (current_block [OBJECT_82_6]);
  (Wrd9.Obj) = (current_block [OBJECT_82_4]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_82_7]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_1]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_0]), 1);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define LABEL_83_5 5
#define ENVIRONMENT_LABEL_83_3 10
#define DEBUGGING_LABEL_83_2 9
#define OBJECT_83_2 8
#define OBJECT_83_1 7
#define OBJECT_83_0 6
#define FREE_REFERENCES_LABEL_83_0 6
#define NUMBER_OF_LINKER_SECTIONS_83_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_83_4);
      goto port__operation_discretionary_flush_output_1;

    case 1:
      current_block = (Rpc - LABEL_83_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port__operation_discretionary_flush_output_5)
DEFLABEL (port__operation_discretionary_flush_output_1)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_8)
  (Wrd21.Obj) = (current_block [OBJECT_83_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 2);

DEFLABEL (label_7)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd31.Lng))))
    goto label_6;
  Rvl = ((Wrd29.pObj) [15]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_83_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define LABEL_84_5 5
#define ENVIRONMENT_LABEL_84_3 10
#define DEBUGGING_LABEL_84_2 9
#define OBJECT_84_2 8
#define OBJECT_84_1 7
#define OBJECT_84_0 6
#define FREE_REFERENCES_LABEL_84_0 6
#define NUMBER_OF_LINKER_SECTIONS_84_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_84_4);
      goto port__operation_read_char_1;

    case 1:
      current_block = (Rpc - LABEL_84_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port__operation_read_char_5)
DEFLABEL (port__operation_read_char_1)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_8)
  (Wrd21.Obj) = (current_block [OBJECT_84_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_1]), 2);

DEFLABEL (label_7)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd31.Lng))))
    goto label_6;
  Rvl = ((Wrd29.pObj) [6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_84_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define LABEL_85_5 5
#define ENVIRONMENT_LABEL_85_3 10
#define DEBUGGING_LABEL_85_2 9
#define OBJECT_85_2 8
#define OBJECT_85_1 7
#define OBJECT_85_0 6
#define FREE_REFERENCES_LABEL_85_0 6
#define NUMBER_OF_LINKER_SECTIONS_85_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_85_4);
      goto port__operation_peek_char_1;

    case 1:
      current_block = (Rpc - LABEL_85_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port__operation_peek_char_5)
DEFLABEL (port__operation_peek_char_1)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_8)
  (Wrd21.Obj) = (current_block [OBJECT_85_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_1]), 2);

DEFLABEL (label_7)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd31.Lng))))
    goto label_6;
  Rvl = ((Wrd29.pObj) [8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_85_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define LABEL_86_5 5
#define ENVIRONMENT_LABEL_86_3 10
#define DEBUGGING_LABEL_86_2 9
#define OBJECT_86_2 8
#define OBJECT_86_1 7
#define OBJECT_86_0 6
#define FREE_REFERENCES_LABEL_86_0 6
#define NUMBER_OF_LINKER_SECTIONS_86_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_86_4);
      goto port__operation_write_char_1;

    case 1:
      current_block = (Rpc - LABEL_86_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port__operation_write_char_5)
DEFLABEL (port__operation_write_char_1)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_8)
  (Wrd21.Obj) = (current_block [OBJECT_86_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_7)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd31.Lng))))
    goto label_6;
  Rvl = ((Wrd29.pObj) [10]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_86_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define LABEL_87_6 5
#define LABEL_87_5 7
#define ENVIRONMENT_LABEL_87_3 16
#define DEBUGGING_LABEL_87_2 15
#define OBJECT_87_1 14
#define OBJECT_87_0 13
#define EXECUTE_CACHE_87_8 9
#define EXECUTE_CACHE_87_7 11
#define FREE_REFERENCES_LABEL_87_0 8
#define NUMBER_OF_LINKER_SECTIONS_87_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_87_4);
      goto port_position_3;

    case 1:
      current_block = (Rpc - LABEL_87_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_87_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_position_6)
DEFLABEL (port_position_3)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_87_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_87_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_87_1]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_8]));

DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_87_5);
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define LABEL_88_6 5
#define LABEL_88_5 7
#define ENVIRONMENT_LABEL_88_3 16
#define DEBUGGING_LABEL_88_2 15
#define OBJECT_88_1 14
#define OBJECT_88_0 13
#define EXECUTE_CACHE_88_8 9
#define EXECUTE_CACHE_88_7 11
#define FREE_REFERENCES_LABEL_88_0 8
#define NUMBER_OF_LINKER_SECTIONS_88_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_88_4);
      goto set_port_positionB_3;

    case 1:
      current_block = (Rpc - LABEL_88_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_88_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_port_positionB_6)
DEFLABEL (set_port_positionB_3)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_88_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_88_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_88_1]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_8]));

DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_88_5);
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define LABEL_89_5 5
#define LABEL_89_8 7
#define LABEL_89_9 9
#define LABEL_89_6 11
#define LABEL_89_12 13
#define LABEL_89_14 15
#define ENVIRONMENT_LABEL_89_3 36
#define DEBUGGING_LABEL_89_2 35
#define OBJECT_89_5 34
#define OBJECT_89_4 33
#define OBJECT_89_3 32
#define OBJECT_89_2 31
#define OBJECT_89_1 30
#define OBJECT_89_0 29
#define EXECUTE_CACHE_89_16 17
#define EXECUTE_CACHE_89_15 19
#define EXECUTE_CACHE_89_13 21
#define EXECUTE_CACHE_89_11 23
#define EXECUTE_CACHE_89_10 25
#define EXECUTE_CACHE_89_7 27
#define FREE_REFERENCES_LABEL_89_0 16
#define NUMBER_OF_LINKER_SECTIONS_89_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_89_4);
      goto lambda_12;

    case 1:
      current_block = (Rpc - LABEL_89_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_89_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_89_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_89_6);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_89_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_89_14);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_15)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_89_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_22;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_89_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_21;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_89_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd26.Obj) = (current_block [OBJECT_89_1]);
  (* (--Rsp)) = (Wrd26.Obj);
  goto label_16;

DEFLABEL (label_17)
  (Wrd27.Obj) = (current_block [OBJECT_89_0]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_16)
DEFLABEL (label_20)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_89_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_89_12);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_15]));

DEFLABEL (label_18)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_89_5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_89_14);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd9.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_16]));

DEFLABEL (label_19)
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_15]));

DEFLABEL (label_21)
  (Wrd19.Obj) = (current_block [OBJECT_89_2]);
  (* (--Rsp)) = (Wrd19.Obj);
  goto label_20;

DEFLABEL (label_22)
  (Wrd7.Obj) = (current_block [OBJECT_89_3]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_20;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_89_5);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_4 3
#define LABEL_90_5 5
#define LABEL_90_7 7
#define LABEL_90_9 9
#define LABEL_90_10 11
#define ENVIRONMENT_LABEL_90_3 22
#define DEBUGGING_LABEL_90_2 21
#define EXECUTE_CACHE_90_12 13
#define EXECUTE_CACHE_90_11 15
#define EXECUTE_CACHE_90_8 17
#define EXECUTE_CACHE_90_6 19
#define FREE_REFERENCES_LABEL_90_0 12
#define NUMBER_OF_LINKER_SECTIONS_90_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_90_4);
      goto port_copy_5;

    case 1:
      current_block = (Rpc - LABEL_90_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_90_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_90_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_90_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_copy_8)
DEFLABEL (port_copy_5)
  INTERRUPT_CHECK (26, LABEL_90_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_90_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_90_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_90_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_90_9);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_91_4 3
#define LABEL_91_5 5
#define LABEL_91_7 7
#define ENVIRONMENT_LABEL_91_3 17
#define DEBUGGING_LABEL_91_2 16
#define OBJECT_91_0 15
#define EXECUTE_CACHE_91_9 9
#define EXECUTE_CACHE_91_8 11
#define EXECUTE_CACHE_91_6 13
#define FREE_REFERENCES_LABEL_91_0 8
#define NUMBER_OF_LINKER_SECTIONS_91_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_91_4);
      goto close_port_3;

    case 1:
      current_block = (Rpc - LABEL_91_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_91_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (close_port_6)
DEFLABEL (close_port_3)
  INTERRUPT_CHECK (26, LABEL_91_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_91_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_91_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_91_7);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_92_4 3
#define LABEL_92_5 5
#define ENVIRONMENT_LABEL_92_3 12
#define DEBUGGING_LABEL_92_2 11
#define OBJECT_92_1 10
#define OBJECT_92_0 9
#define EXECUTE_CACHE_92_6 7
#define FREE_REFERENCES_LABEL_92_0 6
#define NUMBER_OF_LINKER_SECTIONS_92_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_92_4);
      goto close_input_port_2;

    case 1:
      current_block = (Rpc - LABEL_92_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (close_input_port_5)
DEFLABEL (close_input_port_2)
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
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_92_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_93_4 3
#define LABEL_93_5 5
#define ENVIRONMENT_LABEL_93_3 12
#define DEBUGGING_LABEL_93_2 11
#define OBJECT_93_1 10
#define OBJECT_93_0 9
#define EXECUTE_CACHE_93_6 7
#define FREE_REFERENCES_LABEL_93_0 6
#define NUMBER_OF_LINKER_SECTIONS_93_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_93 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_93_4);
      goto close_output_port_2;

    case 1:
      current_block = (Rpc - LABEL_93_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (close_output_port_5)
DEFLABEL (close_output_port_2)
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
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_93_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_94_4 3
#define LABEL_94_5 5
#define LABEL_94_9 7
#define LABEL_94_7 9
#define LABEL_94_10 11
#define ENVIRONMENT_LABEL_94_3 26
#define DEBUGGING_LABEL_94_2 25
#define OBJECT_94_1 24
#define OBJECT_94_0 23
#define EXECUTE_CACHE_94_13 13
#define EXECUTE_CACHE_94_12 15
#define EXECUTE_CACHE_94_11 17
#define EXECUTE_CACHE_94_8 19
#define EXECUTE_CACHE_94_6 21
#define FREE_REFERENCES_LABEL_94_0 12
#define NUMBER_OF_LINKER_SECTIONS_94_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_94 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_94_4);
      goto port_openP_5;

    case 1:
      current_block = (Rpc - LABEL_94_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_94_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_94_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_94_10);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_openP_8)
DEFLABEL (port_openP_5)
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
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_9)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_94_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_94_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_94_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_13]));

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_94_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_95_4 3
#define LABEL_95_5 5
#define ENVIRONMENT_LABEL_95_3 12
#define DEBUGGING_LABEL_95_2 11
#define EXECUTE_CACHE_95_7 7
#define EXECUTE_CACHE_95_6 9
#define FREE_REFERENCES_LABEL_95_0 6
#define NUMBER_OF_LINKER_SECTIONS_95_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_95 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_95_4);
      goto port_input_openP_1;

    case 1:
      current_block = (Rpc - LABEL_95_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_input_openP_4)
DEFLABEL (port_input_openP_1)
  INTERRUPT_CHECK (26, LABEL_95_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_95_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_7]));

DEFLABEL (label_5)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_96_4 3
#define LABEL_96_6 5
#define LABEL_96_5 7
#define ENVIRONMENT_LABEL_96_3 16
#define DEBUGGING_LABEL_96_2 15
#define OBJECT_96_3 14
#define OBJECT_96_2 13
#define OBJECT_96_1 12
#define OBJECT_96_0 11
#define EXECUTE_CACHE_96_7 9
#define FREE_REFERENCES_LABEL_96_0 8
#define NUMBER_OF_LINKER_SECTIONS_96_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_96 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_96_4);
      goto Z__input_openP_3;

    case 1:
      current_block = (Rpc - LABEL_96_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_96_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__input_openP_7)
DEFLABEL (Z__input_openP_3)
  INTERRUPT_CHECK (26, LABEL_96_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_96_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_10;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_10;
  (Wrd11.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_96_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_96_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_96_1]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_2]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_97_4 3
#define LABEL_97_5 5
#define ENVIRONMENT_LABEL_97_3 12
#define DEBUGGING_LABEL_97_2 11
#define EXECUTE_CACHE_97_7 7
#define EXECUTE_CACHE_97_6 9
#define FREE_REFERENCES_LABEL_97_0 6
#define NUMBER_OF_LINKER_SECTIONS_97_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_97 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_97_4);
      goto port_output_openP_1;

    case 1:
      current_block = (Rpc - LABEL_97_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_output_openP_4)
DEFLABEL (port_output_openP_1)
  INTERRUPT_CHECK (26, LABEL_97_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_97_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_7]));

DEFLABEL (label_5)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_98_4 3
#define LABEL_98_6 5
#define LABEL_98_5 7
#define ENVIRONMENT_LABEL_98_3 16
#define DEBUGGING_LABEL_98_2 15
#define OBJECT_98_3 14
#define OBJECT_98_2 13
#define OBJECT_98_1 12
#define OBJECT_98_0 11
#define EXECUTE_CACHE_98_7 9
#define FREE_REFERENCES_LABEL_98_0 8
#define NUMBER_OF_LINKER_SECTIONS_98_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_98 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_98_4);
      goto Z__output_openP_3;

    case 1:
      current_block = (Rpc - LABEL_98_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_98_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__output_openP_7)
DEFLABEL (Z__output_openP_3)
  INTERRUPT_CHECK (26, LABEL_98_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_98_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_10;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_10;
  (Wrd11.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_98_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_98_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_98_1]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_2]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_99_4 3
#define LABEL_99_5 5
#define ENVIRONMENT_LABEL_99_3 11
#define DEBUGGING_LABEL_99_2 10
#define OBJECT_99_0 9
#define EXECUTE_CACHE_99_6 7
#define FREE_REFERENCES_LABEL_99_0 6
#define NUMBER_OF_LINKER_SECTIONS_99_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_99 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_99_4);
      goto port_input_channel_2;

    case 1:
      current_block = (Rpc - LABEL_99_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_input_channel_5)
DEFLABEL (port_input_channel_2)
  INTERRUPT_CHECK (26, LABEL_99_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_99_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_99_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_6)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_100_4 3
#define LABEL_100_5 5
#define ENVIRONMENT_LABEL_100_3 11
#define DEBUGGING_LABEL_100_2 10
#define OBJECT_100_0 9
#define EXECUTE_CACHE_100_6 7
#define FREE_REFERENCES_LABEL_100_0 6
#define NUMBER_OF_LINKER_SECTIONS_100_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_100 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_100_4);
      goto port_output_channel_2;

    case 1:
      current_block = (Rpc - LABEL_100_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_output_channel_5)
DEFLABEL (port_output_channel_2)
  INTERRUPT_CHECK (26, LABEL_100_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_100_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_100_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_6)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_101_4 3
#define LABEL_101_5 5
#define LABEL_101_8 7
#define LABEL_101_7 9
#define ENVIRONMENT_LABEL_101_3 20
#define DEBUGGING_LABEL_101_2 19
#define OBJECT_101_3 18
#define OBJECT_101_2 17
#define OBJECT_101_1 16
#define OBJECT_101_0 15
#define EXECUTE_CACHE_101_9 11
#define EXECUTE_CACHE_101_6 13
#define FREE_REFERENCES_LABEL_101_0 10
#define NUMBER_OF_LINKER_SECTIONS_101_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_101 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_101_4);
      goto port_get_property_4;

    case 1:
      current_block = (Rpc - LABEL_101_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_101_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_101_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_get_property_8)
DEFLABEL (port_get_property_4)
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
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_12;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_12;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_11)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_101_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  Rvl = (Rsp [3]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_9)
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_10;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_3]), 1);

DEFLABEL (label_12)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_101_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_2]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_102_4 3
#define LABEL_102_5 5
#define LABEL_102_7 7
#define LABEL_102_8 9
#define ENVIRONMENT_LABEL_102_3 22
#define DEBUGGING_LABEL_102_2 21
#define OBJECT_102_5 20
#define OBJECT_102_4 19
#define OBJECT_102_3 18
#define OBJECT_102_2 17
#define OBJECT_102_1 16
#define OBJECT_102_0 15
#define EXECUTE_CACHE_102_9 11
#define EXECUTE_CACHE_102_6 13
#define FREE_REFERENCES_LABEL_102_0 10
#define NUMBER_OF_LINKER_SECTIONS_102_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_102 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd29;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_102_4);
      goto port_set_propertyB_7;

    case 1:
      current_block = (Rpc - LABEL_102_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_102_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_102_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_set_propertyB_11)
DEFLABEL (port_set_propertyB_7)
  INTERRUPT_CHECK (26, LABEL_102_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_102_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_102_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_17;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_17;
  (Wrd7.Obj) = ((Wrd11.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_16)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_102_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_12;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [1]) = (Wrd11.Obj);
  Rvl = (current_block [OBJECT_102_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_5]), 2);

DEFLABEL (label_13)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd24.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Rsp [4]) = (Wrd21.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_102_1]);
  (Rsp [3]) = (Wrd25.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 62)
    goto label_15;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_4]), 3);

DEFLABEL (label_15)
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd36.Lng))))
    goto label_14;
  (Wrd29.Obj) = (Rsp [2]);
  ((Wrd34.pObj) [7]) = (Wrd29.Obj);
  Rvl = (current_block [OBJECT_102_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_102_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_2]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_103_4 3
#define LABEL_103_5 5
#define LABEL_103_7 7
#define LABEL_103_8 9
#define LABEL_103_10 11
#define LABEL_103_11 13
#define ENVIRONMENT_LABEL_103_3 25
#define DEBUGGING_LABEL_103_2 24
#define OBJECT_103_4 23
#define OBJECT_103_3 22
#define OBJECT_103_2 21
#define OBJECT_103_1 20
#define OBJECT_103_0 19
#define EXECUTE_CACHE_103_9 15
#define EXECUTE_CACHE_103_6 17
#define FREE_REFERENCES_LABEL_103_0 14
#define NUMBER_OF_LINKER_SECTIONS_103_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_103 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_103_4);
      goto port_intern_propertyB_10;

    case 1:
      current_block = (Rpc - LABEL_103_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_103_7);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_103_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_103_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_103_11);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_intern_propertyB_15)
DEFLABEL (port_intern_propertyB_10)
  INTERRUPT_CHECK (26, LABEL_103_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_103_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_103_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_103_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_21;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_21;
  (Wrd7.Obj) = ((Wrd11.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_20)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_103_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_103_8);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_103_10);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_17;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd24.Lng))))
    goto label_17;
  ((Wrd22.pObj) [7]) = (Wrd11.Obj);

DEFLABEL (label_16)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.Obj) = (current_block [OBJECT_103_1]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_11]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_4]), 3);

DEFLABEL (label_13)
  goto label_16;

DEFLABEL (label_18)
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [4]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_19;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_3]), 1);

DEFLABEL (label_21)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_103_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_2]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_104_4 3
#define LABEL_104_5 5
#define LABEL_104_8 7
#define LABEL_104_7 9
#define ENVIRONMENT_LABEL_104_3 21
#define DEBUGGING_LABEL_104_2 20
#define OBJECT_104_4 19
#define OBJECT_104_3 18
#define OBJECT_104_2 17
#define OBJECT_104_1 16
#define OBJECT_104_0 15
#define EXECUTE_CACHE_104_9 11
#define EXECUTE_CACHE_104_6 13
#define FREE_REFERENCES_LABEL_104_0 10
#define NUMBER_OF_LINKER_SECTIONS_104_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_104 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_104_4);
      goto port_remove_propertyB_3;

    case 1:
      current_block = (Rpc - LABEL_104_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_104_8);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_104_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_remove_propertyB_7)
DEFLABEL (port_remove_propertyB_3)
  INTERRUPT_CHECK (26, LABEL_104_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_104_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_104_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_11;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_11;
  (Wrd11.Obj) = ((Wrd15.pObj) [7]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_10)
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_104_7);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_104_1]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_9;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_4]), 3);

DEFLABEL (label_9)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_8;
  ((Wrd15.pObj) [7]) = Rvl;
  Rvl = (current_block [OBJECT_104_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_104_1]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_2]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_105_4 3
#define LABEL_105_5 5
#define ENVIRONMENT_LABEL_105_3 13
#define DEBUGGING_LABEL_105_2 12
#define OBJECT_105_2 11
#define OBJECT_105_1 10
#define OBJECT_105_0 9
#define EXECUTE_CACHE_105_6 7
#define FREE_REFERENCES_LABEL_105_0 6
#define NUMBER_OF_LINKER_SECTIONS_105_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_105 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_105_4);
      goto transcribe_char_2;

    case 1:
      current_block = (Rpc - LABEL_105_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transcribe_char_6)
DEFLABEL (transcribe_char_2)
  INTERRUPT_CHECK (26, LABEL_105_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_8)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Rsp [2]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_6]));

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_105_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_105_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_106_4 3
#define LABEL_106_5 5
#define ENVIRONMENT_LABEL_106_3 13
#define DEBUGGING_LABEL_106_2 12
#define OBJECT_106_2 11
#define OBJECT_106_1 10
#define OBJECT_106_0 9
#define EXECUTE_CACHE_106_6 7
#define FREE_REFERENCES_LABEL_106_0 6
#define NUMBER_OF_LINKER_SECTIONS_106_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_106 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_106_4);
      goto transcribe_substring_2;

    case 1:
      current_block = (Rpc - LABEL_106_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transcribe_substring_6)
DEFLABEL (transcribe_substring_2)
  INTERRUPT_CHECK (26, LABEL_106_4);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_8)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Rsp [4]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106_6]));

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_106_2]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_106_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_107_4 3
#define LABEL_107_5 5
#define ENVIRONMENT_LABEL_107_3 13
#define DEBUGGING_LABEL_107_2 12
#define OBJECT_107_2 11
#define OBJECT_107_1 10
#define OBJECT_107_0 9
#define EXECUTE_CACHE_107_6 7
#define FREE_REFERENCES_LABEL_107_0 6
#define NUMBER_OF_LINKER_SECTIONS_107_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_107 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_107_4);
      goto flush_transcript_2;

    case 1:
      current_block = (Rpc - LABEL_107_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flush_transcript_6)
DEFLABEL (flush_transcript_2)
  INTERRUPT_CHECK (26, LABEL_107_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd5.Obj) = ((Wrd11.pObj) [8]);

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_6]));

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_107_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_107_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_108_4 3
#define LABEL_108_5 5
#define ENVIRONMENT_LABEL_108_3 13
#define DEBUGGING_LABEL_108_2 12
#define OBJECT_108_2 11
#define OBJECT_108_1 10
#define OBJECT_108_0 9
#define EXECUTE_CACHE_108_6 7
#define FREE_REFERENCES_LABEL_108_0 6
#define NUMBER_OF_LINKER_SECTIONS_108_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_108 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_108_4);
      goto discretionary_flush_transcript_2;

    case 1:
      current_block = (Rpc - LABEL_108_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (discretionary_flush_transcript_6)
DEFLABEL (discretionary_flush_transcript_2)
  INTERRUPT_CHECK (26, LABEL_108_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd5.Obj) = ((Wrd11.pObj) [8]);

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_6]));

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_108_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_108_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_109_4 3
#define LABEL_109_5 5
#define LABEL_109_7 7
#define LABEL_109_8 9
#define ENVIRONMENT_LABEL_109_3 18
#define DEBUGGING_LABEL_109_2 17
#define OBJECT_109_3 16
#define OBJECT_109_2 15
#define OBJECT_109_1 14
#define OBJECT_109_0 13
#define EXECUTE_CACHE_109_6 11
#define FREE_REFERENCES_LABEL_109_0 10
#define NUMBER_OF_LINKER_SECTIONS_109_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_109 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd24;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_109_4);
      goto input_portP_3;

    case 1:
      current_block = (Rpc - LABEL_109_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_109_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_109_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (input_portP_8)
DEFLABEL (input_portP_3)
  INTERRUPT_CHECK (26, LABEL_109_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_109_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_109_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_15;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_15;
  (Wrd7.Obj) = ((Wrd13.pObj) [2]);

DEFLABEL (label_14)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_13;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd34.Lng))))
    goto label_13;
  (Wrd24.Obj) = ((Wrd32.pObj) [6]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_109_3]);
  goto label_9;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd37.Obj) = (current_block [OBJECT_109_2]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_8]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_11;

DEFLABEL (label_15)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_109_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_1]), 2);

DEFLABEL (label_5)
  (Wrd7.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_110_4 3
#define LABEL_110_5 5
#define LABEL_110_7 7
#define LABEL_110_8 9
#define ENVIRONMENT_LABEL_110_3 18
#define DEBUGGING_LABEL_110_2 17
#define OBJECT_110_3 16
#define OBJECT_110_2 15
#define OBJECT_110_1 14
#define OBJECT_110_0 13
#define EXECUTE_CACHE_110_6 11
#define FREE_REFERENCES_LABEL_110_0 10
#define NUMBER_OF_LINKER_SECTIONS_110_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_110 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd24;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_110_4);
      goto output_portP_3;

    case 1:
      current_block = (Rpc - LABEL_110_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_110_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_110_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_portP_8)
DEFLABEL (output_portP_3)
  INTERRUPT_CHECK (26, LABEL_110_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_110_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_110_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_15;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_15;
  (Wrd7.Obj) = ((Wrd13.pObj) [2]);

DEFLABEL (label_14)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_13;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd34.Lng))))
    goto label_13;
  (Wrd24.Obj) = ((Wrd32.pObj) [10]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_110_3]);
  goto label_9;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd37.Obj) = (current_block [OBJECT_110_2]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_8]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_11;

DEFLABEL (label_15)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_110_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_1]), 2);

DEFLABEL (label_5)
  (Wrd7.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_111_4 3
#define LABEL_111_5 5
#define LABEL_111_7 7
#define LABEL_111_8 9
#define LABEL_111_9 11
#define ENVIRONMENT_LABEL_111_3 21
#define DEBUGGING_LABEL_111_2 20
#define OBJECT_111_4 19
#define OBJECT_111_3 18
#define OBJECT_111_2 17
#define OBJECT_111_1 16
#define OBJECT_111_0 15
#define EXECUTE_CACHE_111_6 13
#define FREE_REFERENCES_LABEL_111_0 12
#define NUMBER_OF_LINKER_SECTIONS_111_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_111 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd31;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd25;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd56;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_111_4);
      goto i_o_portP_5;

    case 1:
      current_block = (Rpc - LABEL_111_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_111_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_111_8);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_111_9);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (i_o_portP_11)
DEFLABEL (i_o_portP_5)
  INTERRUPT_CHECK (26, LABEL_111_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_111_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_111_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_20;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_20;
  (Wrd7.Obj) = ((Wrd13.pObj) [2]);

DEFLABEL (label_19)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_18;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd54.Lng))))
    goto label_18;
  (Wrd25.Obj) = ((Wrd52.pObj) [6]);
  if ((Wrd25.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;

DEFLABEL (label_17)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_16;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd40.Lng))))
    goto label_16;
  (Wrd31.Obj) = ((Wrd38.pObj) [10]);
  if ((Wrd31.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;

DEFLABEL (label_14)
  Rvl = (current_block [OBJECT_111_4]);
  goto label_12;

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_12)
DEFLABEL (label_15)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.Obj) = (current_block [OBJECT_111_3]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111_9]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_111_1]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  goto label_14;

DEFLABEL (label_18)
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.Obj) = (current_block [OBJECT_111_2]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111_8]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_111_1]), 2);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  goto label_17;

DEFLABEL (label_20)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_111_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_111_1]), 2);

DEFLABEL (label_7)
  (Wrd7.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_112_4 3
#define LABEL_112_7 5
#define LABEL_112_5 7
#define ENVIRONMENT_LABEL_112_3 14
#define DEBUGGING_LABEL_112_2 13
#define EXECUTE_CACHE_112_8 9
#define EXECUTE_CACHE_112_6 11
#define FREE_REFERENCES_LABEL_112_0 8
#define NUMBER_OF_LINKER_SECTIONS_112_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_112 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_112_4);
      goto guarantee_port_2;

    case 1:
      current_block = (Rpc - LABEL_112_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_112_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_port_5)
DEFLABEL (guarantee_port_2)
  INTERRUPT_CHECK (26, LABEL_112_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_112_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_112_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;

DEFLABEL (label_6)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_112_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_112_7);
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_113_4 3
#define ENVIRONMENT_LABEL_113_3 9
#define DEBUGGING_LABEL_113_2 8
#define OBJECT_113_0 7
#define EXECUTE_CACHE_113_5 5
#define FREE_REFERENCES_LABEL_113_0 4
#define NUMBER_OF_LINKER_SECTIONS_113_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_113 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_113_4);
      goto error_not_port_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_port_3)
DEFLABEL (error_not_port_0)
  INTERRUPT_CHECK (26, LABEL_113_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_113_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_113_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_114_4 3
#define LABEL_114_7 5
#define LABEL_114_5 7
#define ENVIRONMENT_LABEL_114_3 14
#define DEBUGGING_LABEL_114_2 13
#define EXECUTE_CACHE_114_8 9
#define EXECUTE_CACHE_114_6 11
#define FREE_REFERENCES_LABEL_114_0 8
#define NUMBER_OF_LINKER_SECTIONS_114_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_114 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_114_4);
      goto guarantee_input_port_2;

    case 1:
      current_block = (Rpc - LABEL_114_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_114_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_input_port_5)
DEFLABEL (guarantee_input_port_2)
  INTERRUPT_CHECK (26, LABEL_114_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_114_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_114_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;

DEFLABEL (label_6)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_114_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_114_7);
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_115_4 3
#define ENVIRONMENT_LABEL_115_3 9
#define DEBUGGING_LABEL_115_2 8
#define OBJECT_115_0 7
#define EXECUTE_CACHE_115_5 5
#define FREE_REFERENCES_LABEL_115_0 4
#define NUMBER_OF_LINKER_SECTIONS_115_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_115 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_115_4);
      goto error_not_input_port_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_input_port_3)
DEFLABEL (error_not_input_port_0)
  INTERRUPT_CHECK (26, LABEL_115_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_115_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_115_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_116_4 3
#define LABEL_116_7 5
#define LABEL_116_5 7
#define ENVIRONMENT_LABEL_116_3 14
#define DEBUGGING_LABEL_116_2 13
#define EXECUTE_CACHE_116_8 9
#define EXECUTE_CACHE_116_6 11
#define FREE_REFERENCES_LABEL_116_0 8
#define NUMBER_OF_LINKER_SECTIONS_116_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_116 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_116_4);
      goto guarantee_output_port_2;

    case 1:
      current_block = (Rpc - LABEL_116_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_116_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_output_port_5)
DEFLABEL (guarantee_output_port_2)
  INTERRUPT_CHECK (26, LABEL_116_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_116_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_116_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;

DEFLABEL (label_6)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_116_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_116_7);
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_117_4 3
#define ENVIRONMENT_LABEL_117_3 9
#define DEBUGGING_LABEL_117_2 8
#define OBJECT_117_0 7
#define EXECUTE_CACHE_117_5 5
#define FREE_REFERENCES_LABEL_117_0 4
#define NUMBER_OF_LINKER_SECTIONS_117_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_117 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_117_4);
      goto error_not_output_port_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_output_port_3)
DEFLABEL (error_not_output_port_0)
  INTERRUPT_CHECK (26, LABEL_117_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_117_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_118_4 3
#define LABEL_118_7 5
#define LABEL_118_5 7
#define ENVIRONMENT_LABEL_118_3 14
#define DEBUGGING_LABEL_118_2 13
#define EXECUTE_CACHE_118_8 9
#define EXECUTE_CACHE_118_6 11
#define FREE_REFERENCES_LABEL_118_0 8
#define NUMBER_OF_LINKER_SECTIONS_118_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_118 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_118_4);
      goto guarantee_i_o_port_2;

    case 1:
      current_block = (Rpc - LABEL_118_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_118_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_i_o_port_5)
DEFLABEL (guarantee_i_o_port_2)
  INTERRUPT_CHECK (26, LABEL_118_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_118_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_118_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;

DEFLABEL (label_6)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_118_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_118_7);
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_119_4 3
#define ENVIRONMENT_LABEL_119_3 9
#define DEBUGGING_LABEL_119_2 8
#define OBJECT_119_0 7
#define EXECUTE_CACHE_119_5 5
#define FREE_REFERENCES_LABEL_119_0 4
#define NUMBER_OF_LINKER_SECTIONS_119_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_119 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_119_4);
      goto error_not_i_o_port_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_i_o_port_3)
DEFLABEL (error_not_i_o_port_0)
  INTERRUPT_CHECK (26, LABEL_119_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_119_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_119_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_120_4 3
#define LABEL_120_5 5
#define ENVIRONMENT_LABEL_120_3 11
#define DEBUGGING_LABEL_120_2 10
#define OBJECT_120_0 9
#define EXECUTE_CACHE_120_6 7
#define FREE_REFERENCES_LABEL_120_0 6
#define NUMBER_OF_LINKER_SECTIONS_120_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_120 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_120_4);
      goto port_supports_codingP_2;

    case 1:
      current_block = (Rpc - LABEL_120_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_supports_codingP_5)
DEFLABEL (port_supports_codingP_2)
  INTERRUPT_CHECK (26, LABEL_120_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_120_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_120_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_120_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_120_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_6)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_121_4 3
#define LABEL_121_6 5
#define LABEL_121_5 7
#define ENVIRONMENT_LABEL_121_3 16
#define DEBUGGING_LABEL_121_2 15
#define OBJECT_121_1 14
#define OBJECT_121_0 13
#define EXECUTE_CACHE_121_8 9
#define EXECUTE_CACHE_121_7 11
#define FREE_REFERENCES_LABEL_121_0 8
#define NUMBER_OF_LINKER_SECTIONS_121_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_121 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_121_4);
      goto port_coding_3;

    case 1:
      current_block = (Rpc - LABEL_121_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_121_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_coding_6)
DEFLABEL (port_coding_3)
  INTERRUPT_CHECK (26, LABEL_121_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_121_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_121_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_121_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_121_1]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_121_8]));

DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_121_5);
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_122_4 3
#define LABEL_122_6 5
#define LABEL_122_5 7
#define ENVIRONMENT_LABEL_122_3 16
#define DEBUGGING_LABEL_122_2 15
#define OBJECT_122_1 14
#define OBJECT_122_0 13
#define EXECUTE_CACHE_122_8 9
#define EXECUTE_CACHE_122_7 11
#define FREE_REFERENCES_LABEL_122_0 8
#define NUMBER_OF_LINKER_SECTIONS_122_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_122 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_122_4);
      goto port_set_coding_3;

    case 1:
      current_block = (Rpc - LABEL_122_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_122_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_set_coding_6)
DEFLABEL (port_set_coding_3)
  INTERRUPT_CHECK (26, LABEL_122_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_122_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_122_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_122_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_122_1]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_122_8]));

DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_122_5);
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_123_4 3
#define LABEL_123_6 5
#define LABEL_123_5 7
#define ENVIRONMENT_LABEL_123_3 16
#define DEBUGGING_LABEL_123_2 15
#define OBJECT_123_1 14
#define OBJECT_123_0 13
#define EXECUTE_CACHE_123_8 9
#define EXECUTE_CACHE_123_7 11
#define FREE_REFERENCES_LABEL_123_0 8
#define NUMBER_OF_LINKER_SECTIONS_123_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_123 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_123_4);
      goto port_known_codingP_3;

    case 1:
      current_block = (Rpc - LABEL_123_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_123_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_known_codingP_6)
DEFLABEL (port_known_codingP_3)
  INTERRUPT_CHECK (26, LABEL_123_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_123_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_123_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_123_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_123_1]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_123_8]));

DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_123_5);
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_124_4 3
#define LABEL_124_6 5
#define LABEL_124_5 7
#define ENVIRONMENT_LABEL_124_3 16
#define DEBUGGING_LABEL_124_2 15
#define OBJECT_124_1 14
#define OBJECT_124_0 13
#define EXECUTE_CACHE_124_8 9
#define EXECUTE_CACHE_124_7 11
#define FREE_REFERENCES_LABEL_124_0 8
#define NUMBER_OF_LINKER_SECTIONS_124_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_124 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_124_4);
      goto port_known_codings_3;

    case 1:
      current_block = (Rpc - LABEL_124_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_124_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_known_codings_6)
DEFLABEL (port_known_codings_3)
  INTERRUPT_CHECK (26, LABEL_124_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_124_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_124_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_124_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_124_1]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_124_8]));

DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_124_5);
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_125_4 3
#define LABEL_125_6 5
#define LABEL_125_5 7
#define ENVIRONMENT_LABEL_125_3 16
#define DEBUGGING_LABEL_125_2 15
#define OBJECT_125_1 14
#define OBJECT_125_0 13
#define EXECUTE_CACHE_125_8 9
#define EXECUTE_CACHE_125_7 11
#define FREE_REFERENCES_LABEL_125_0 8
#define NUMBER_OF_LINKER_SECTIONS_125_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_125 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_125_4);
      goto port_line_ending_3;

    case 1:
      current_block = (Rpc - LABEL_125_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_125_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_line_ending_6)
DEFLABEL (port_line_ending_3)
  INTERRUPT_CHECK (26, LABEL_125_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_125_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_125_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_125_1]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_8]));

DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_125_5);
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_126_4 3
#define LABEL_126_6 5
#define LABEL_126_5 7
#define ENVIRONMENT_LABEL_126_3 16
#define DEBUGGING_LABEL_126_2 15
#define OBJECT_126_1 14
#define OBJECT_126_0 13
#define EXECUTE_CACHE_126_8 9
#define EXECUTE_CACHE_126_7 11
#define FREE_REFERENCES_LABEL_126_0 8
#define NUMBER_OF_LINKER_SECTIONS_126_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_126 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_126_4);
      goto port_set_line_ending_3;

    case 1:
      current_block = (Rpc - LABEL_126_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_126_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_set_line_ending_6)
DEFLABEL (port_set_line_ending_3)
  INTERRUPT_CHECK (26, LABEL_126_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_126_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_126_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_126_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_126_1]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_126_8]));

DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_126_5);
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_127_4 3
#define LABEL_127_6 5
#define LABEL_127_5 7
#define ENVIRONMENT_LABEL_127_3 16
#define DEBUGGING_LABEL_127_2 15
#define OBJECT_127_1 14
#define OBJECT_127_0 13
#define EXECUTE_CACHE_127_8 9
#define EXECUTE_CACHE_127_7 11
#define FREE_REFERENCES_LABEL_127_0 8
#define NUMBER_OF_LINKER_SECTIONS_127_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_127 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_127_4);
      goto port_known_line_endingP_3;

    case 1:
      current_block = (Rpc - LABEL_127_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_127_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_known_line_endingP_6)
DEFLABEL (port_known_line_endingP_3)
  INTERRUPT_CHECK (26, LABEL_127_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_127_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_127_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_127_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_127_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_127_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_127_1]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_127_8]));

DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_127_5);
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_128_4 3
#define LABEL_128_6 5
#define LABEL_128_5 7
#define ENVIRONMENT_LABEL_128_3 16
#define DEBUGGING_LABEL_128_2 15
#define OBJECT_128_1 14
#define OBJECT_128_0 13
#define EXECUTE_CACHE_128_8 9
#define EXECUTE_CACHE_128_7 11
#define FREE_REFERENCES_LABEL_128_0 8
#define NUMBER_OF_LINKER_SECTIONS_128_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_128 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_128_4);
      goto port_known_line_endings_3;

    case 1:
      current_block = (Rpc - LABEL_128_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_128_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_known_line_endings_6)
DEFLABEL (port_known_line_endings_3)
  INTERRUPT_CHECK (26, LABEL_128_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_128_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_128_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_128_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_128_1]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_128_8]));

DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_128_5);
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_129_4 3
#define LABEL_129_5 5
#define ENVIRONMENT_LABEL_129_3 11
#define DEBUGGING_LABEL_129_2 10
#define OBJECT_129_0 9
#define EXECUTE_CACHE_129_6 7
#define FREE_REFERENCES_LABEL_129_0 6
#define NUMBER_OF_LINKER_SECTIONS_129_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_129 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_129_4);
      goto port_input_blocking_mode_2;

    case 1:
      current_block = (Rpc - LABEL_129_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_input_blocking_mode_5)
DEFLABEL (port_input_blocking_mode_2)
  INTERRUPT_CHECK (26, LABEL_129_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_129_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_129_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_129_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_6)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_130_4 3
#define LABEL_130_5 5
#define ENVIRONMENT_LABEL_130_3 12
#define DEBUGGING_LABEL_130_2 11
#define OBJECT_130_1 10
#define OBJECT_130_0 9
#define EXECUTE_CACHE_130_6 7
#define FREE_REFERENCES_LABEL_130_0 6
#define NUMBER_OF_LINKER_SECTIONS_130_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_130 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_130_4);
      goto port_set_input_blocking_mode_2;

    case 1:
      current_block = (Rpc - LABEL_130_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_set_input_blocking_mode_5)
DEFLABEL (port_set_input_blocking_mode_2)
  INTERRUPT_CHECK (26, LABEL_130_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_130_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_130_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_130_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_130_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_131_4 3
#define ENVIRONMENT_LABEL_131_3 10
#define DEBUGGING_LABEL_131_2 9
#define OBJECT_131_1 8
#define OBJECT_131_0 7
#define EXECUTE_CACHE_131_5 5
#define FREE_REFERENCES_LABEL_131_0 4
#define NUMBER_OF_LINKER_SECTIONS_131_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_131 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_131_4);
      goto port_with_input_blocking_mode_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_with_input_blocking_mode_3)
DEFLABEL (port_with_input_blocking_mode_0)
  INTERRUPT_CHECK (26, LABEL_131_4);
  (Wrd5.Obj) = (current_block [OBJECT_131_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_131_1]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_131_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_132_4 3
#define LABEL_132_5 5
#define ENVIRONMENT_LABEL_132_3 11
#define DEBUGGING_LABEL_132_2 10
#define OBJECT_132_0 9
#define EXECUTE_CACHE_132_6 7
#define FREE_REFERENCES_LABEL_132_0 6
#define NUMBER_OF_LINKER_SECTIONS_132_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_132 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_132_4);
      goto port_output_blocking_mode_2;

    case 1:
      current_block = (Rpc - LABEL_132_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_output_blocking_mode_5)
DEFLABEL (port_output_blocking_mode_2)
  INTERRUPT_CHECK (26, LABEL_132_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_132_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_132_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_132_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_132_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_6)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_133_4 3
#define LABEL_133_5 5
#define ENVIRONMENT_LABEL_133_3 12
#define DEBUGGING_LABEL_133_2 11
#define OBJECT_133_1 10
#define OBJECT_133_0 9
#define EXECUTE_CACHE_133_6 7
#define FREE_REFERENCES_LABEL_133_0 6
#define NUMBER_OF_LINKER_SECTIONS_133_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_133 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_133_4);
      goto port_set_output_blocking_mode_2;

    case 1:
      current_block = (Rpc - LABEL_133_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_set_output_blocking_mode_5)
DEFLABEL (port_set_output_blocking_mode_2)
  INTERRUPT_CHECK (26, LABEL_133_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_133_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_133_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_133_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_133_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_134_4 3
#define ENVIRONMENT_LABEL_134_3 10
#define DEBUGGING_LABEL_134_2 9
#define OBJECT_134_1 8
#define OBJECT_134_0 7
#define EXECUTE_CACHE_134_5 5
#define FREE_REFERENCES_LABEL_134_0 4
#define NUMBER_OF_LINKER_SECTIONS_134_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_134 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_134_4);
      goto port_with_output_blocking_mode_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_with_output_blocking_mode_3)
DEFLABEL (port_with_output_blocking_mode_0)
  INTERRUPT_CHECK (26, LABEL_134_4);
  (Wrd5.Obj) = (current_block [OBJECT_134_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_134_1]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_134_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_135_4 3
#define LABEL_135_5 5
#define ENVIRONMENT_LABEL_135_3 11
#define DEBUGGING_LABEL_135_2 10
#define OBJECT_135_0 9
#define EXECUTE_CACHE_135_6 7
#define FREE_REFERENCES_LABEL_135_0 6
#define NUMBER_OF_LINKER_SECTIONS_135_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_135 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_135_4);
      goto port_input_terminal_mode_2;

    case 1:
      current_block = (Rpc - LABEL_135_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_input_terminal_mode_5)
DEFLABEL (port_input_terminal_mode_2)
  INTERRUPT_CHECK (26, LABEL_135_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_135_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_135_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_135_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_135_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_6)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_136_4 3
#define LABEL_136_5 5
#define ENVIRONMENT_LABEL_136_3 12
#define DEBUGGING_LABEL_136_2 11
#define OBJECT_136_1 10
#define OBJECT_136_0 9
#define EXECUTE_CACHE_136_6 7
#define FREE_REFERENCES_LABEL_136_0 6
#define NUMBER_OF_LINKER_SECTIONS_136_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_136 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_136_4);
      goto port_set_input_terminal_mode_2;

    case 1:
      current_block = (Rpc - LABEL_136_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_set_input_terminal_mode_5)
DEFLABEL (port_set_input_terminal_mode_2)
  INTERRUPT_CHECK (26, LABEL_136_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_136_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_136_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_136_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_136_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_136_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_137_4 3
#define ENVIRONMENT_LABEL_137_3 10
#define DEBUGGING_LABEL_137_2 9
#define OBJECT_137_1 8
#define OBJECT_137_0 7
#define EXECUTE_CACHE_137_5 5
#define FREE_REFERENCES_LABEL_137_0 4
#define NUMBER_OF_LINKER_SECTIONS_137_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_137 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_137_4);
      goto port_with_input_terminal_mode_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_with_input_terminal_mode_3)
DEFLABEL (port_with_input_terminal_mode_0)
  INTERRUPT_CHECK (26, LABEL_137_4);
  (Wrd5.Obj) = (current_block [OBJECT_137_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_137_1]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_137_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_138_4 3
#define LABEL_138_5 5
#define ENVIRONMENT_LABEL_138_3 11
#define DEBUGGING_LABEL_138_2 10
#define OBJECT_138_0 9
#define EXECUTE_CACHE_138_6 7
#define FREE_REFERENCES_LABEL_138_0 6
#define NUMBER_OF_LINKER_SECTIONS_138_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_138 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_138_4);
      goto port_output_terminal_mode_2;

    case 1:
      current_block = (Rpc - LABEL_138_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_output_terminal_mode_5)
DEFLABEL (port_output_terminal_mode_2)
  INTERRUPT_CHECK (26, LABEL_138_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_138_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_138_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_138_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_138_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_6)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_139_4 3
#define LABEL_139_5 5
#define ENVIRONMENT_LABEL_139_3 12
#define DEBUGGING_LABEL_139_2 11
#define OBJECT_139_1 10
#define OBJECT_139_0 9
#define EXECUTE_CACHE_139_6 7
#define FREE_REFERENCES_LABEL_139_0 6
#define NUMBER_OF_LINKER_SECTIONS_139_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_139 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_139_4);
      goto port_set_output_terminal_mode_2;

    case 1:
      current_block = (Rpc - LABEL_139_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_set_output_terminal_mode_5)
DEFLABEL (port_set_output_terminal_mode_2)
  INTERRUPT_CHECK (26, LABEL_139_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_139_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_139_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_139_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_139_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_139_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_140_4 3
#define ENVIRONMENT_LABEL_140_3 10
#define DEBUGGING_LABEL_140_2 9
#define OBJECT_140_1 8
#define OBJECT_140_0 7
#define EXECUTE_CACHE_140_5 5
#define FREE_REFERENCES_LABEL_140_0 4
#define NUMBER_OF_LINKER_SECTIONS_140_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_140 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_140_4);
      goto port_with_output_terminal_mode_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_with_output_terminal_mode_3)
DEFLABEL (port_with_output_terminal_mode_0)
  INTERRUPT_CHECK (26, LABEL_140_4);
  (Wrd5.Obj) = (current_block [OBJECT_140_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_140_1]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_140_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_141_4 3
#define LABEL_141_5 5
#define LABEL_141_8 7
#define LABEL_141_7 9
#define LABEL_141_9 11
#define TAG_141_10 4
#define LABEL_141_11 13
#define TAG_141_12 5
#define LABEL_141_14 15
#define LABEL_141_16 17
#define LABEL_141_17 19
#define LABEL_141_18 21
#define ENVIRONMENT_LABEL_141_3 31
#define DEBUGGING_LABEL_141_2 30
#define OBJECT_141_0 29
#define EXECUTE_CACHE_141_15 23
#define EXECUTE_CACHE_141_13 25
#define EXECUTE_CACHE_141_6 27
#define FREE_REFERENCES_LABEL_141_0 22
#define NUMBER_OF_LINKER_SECTIONS_141_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_141 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd13;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_141_4);
      goto bind_mode_11;

    case 1:
      current_block = (Rpc - LABEL_141_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_141_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_141_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_141_9);
      goto lambda_15;

    case 5:
      current_block = (Rpc - LABEL_141_11);
      goto lambda_16;

    case 6:
      current_block = (Rpc - LABEL_141_14);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_141_16);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_141_17);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_141_18);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bind_mode_14)
DEFLABEL (bind_mode_11)
  INTERRUPT_CHECK (26, LABEL_141_4);
  (Wrd13.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-1]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd11.pObj)));
  (Rsp [3]) = (Wrd12.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_141_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_141_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_141_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_141_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_141_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_141_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;

DEFLABEL (label_17)
  Rsp = (& (Rsp [6]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_18)
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_141_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_141_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd22.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd18.pObj) = (& (Rhp [-1]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_141_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_141_9])));
  Rhp += 5;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd34 = Wrd25;
  (Wrd35.Obj) = (Rsp [6]);
  ((Wrd34.pObj) [2]) = (Wrd35.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  ((Wrd34.pObj) [3]) = (Wrd33.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  ((Wrd34.pObj) [4]) = (Wrd31.Obj);
  (Wrd29.Obj) = (Rsp [1]);
  ((Wrd34.pObj) [5]) = (Wrd29.Obj);
  ((Wrd34.pObj) [6]) = (Wrd19.Obj);
  (Rsp [5]) = (Wrd24.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd38.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_141_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_141_11])));
  Rhp += 5;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd38.pObj)));
  Wrd47 = Wrd38;
  ((Wrd47.pObj) [2]) = (Wrd35.Obj);
  ((Wrd47.pObj) [3]) = (Wrd33.Obj);
  ((Wrd47.pObj) [4]) = (Wrd31.Obj);
  ((Wrd47.pObj) [5]) = (Wrd29.Obj);
  ((Wrd47.pObj) [6]) = (Wrd19.Obj);
  (Wrd49.Obj) = (Rsp [7]);
  (Rsp [6]) = (Wrd49.Obj);
  (Rsp [7]) = (Wrd37.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_141_13]));

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_141_9);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_141_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_141_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_141_14);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_19;
  Rvl = (current_block [OBJECT_141_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_141_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_141_17);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [6]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  ((Wrd9.pObj) [0]) = Rvl;
  (Wrd12.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = ((Wrd7.pObj) [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd20.pObj) [0]);
  (Rsp [2]) = (Wrd16.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_141_11);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_141_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_141_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_141_16);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_20;
  Rvl = (current_block [OBJECT_141_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_141_18]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_141_18);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  ((Wrd9.pObj) [0]) = Rvl;
  (Wrd12.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = ((Wrd7.pObj) [6]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd20.pObj) [0]);
  (Rsp [2]) = (Wrd16.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_142_4 3
#define LABEL_142_5 5
#define ENVIRONMENT_LABEL_142_3 12
#define DEBUGGING_LABEL_142_2 11
#define EXECUTE_CACHE_142_6 7
#define FREE_REFERENCE_142_0 10
#define FREE_REFERENCES_LABEL_142_0 6
#define NUMBER_OF_LINKER_SECTIONS_142_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_142 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_142_4);
      goto current_input_port_1;

    case 1:
      current_block = (Rpc - LABEL_142_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (current_input_port_5)
DEFLABEL (current_input_port_1)
  INTERRUPT_CHECK (26, LABEL_142_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_142_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_142_6]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_142_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_143_4 3
#define LABEL_143_7 5
#define LABEL_143_5 7
#define LABEL_143_9 9
#define ENVIRONMENT_LABEL_143_3 20
#define DEBUGGING_LABEL_143_2 19
#define OBJECT_143_1 18
#define OBJECT_143_0 17
#define EXECUTE_CACHE_143_8 11
#define EXECUTE_CACHE_143_6 13
#define FREE_ASSIGNMENT_143_0 16
#define FREE_REFERENCES_LABEL_143_0 10
#define NUMBER_OF_LINKER_SECTIONS_143_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_143 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_143_4);
      goto set_current_input_portB_2;

    case 1:
      current_block = (Rpc - LABEL_143_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_143_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_143_9);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_current_input_portB_6)
DEFLABEL (set_current_input_portB_2)
  INTERRUPT_CHECK (26, LABEL_143_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_143_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_143_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_143_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_143_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_143_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_143_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_143_7);

DEFLABEL (label_10)
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_143_0]));
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd15.Obj) = ((Wrd7.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd7.pObj) [0]) = (Wrd8.Obj);

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_143_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd15.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_143_9])), (Wrd7.pObj), (Wrd8.Obj));

DEFLABEL (label_4)
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_144_4 3
#define LABEL_144_7 5
#define LABEL_144_5 7
#define LABEL_144_11 9
#define TAG_144_12 3
#define LABEL_144_9 11
#define TAG_144_10 4
#define LABEL_144_14 13
#define LABEL_144_15 15
#define LABEL_144_16 17
#define ENVIRONMENT_LABEL_144_3 32
#define DEBUGGING_LABEL_144_2 31
#define OBJECT_144_1 30
#define OBJECT_144_0 29
#define EXECUTE_CACHE_144_13 19
#define EXECUTE_CACHE_144_8 21
#define EXECUTE_CACHE_144_6 23
#define FREE_REFERENCE_144_0 26
#define FREE_ASSIGNMENT_144_0 28
#define FREE_REFERENCES_LABEL_144_0 18
#define NUMBER_OF_LINKER_SECTIONS_144_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_144 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_144_4);
      goto with_input_from_port_11;

    case 1:
      current_block = (Rpc - LABEL_144_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_144_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_144_11);
      goto lambda_19;

    case 4:
      current_block = (Rpc - LABEL_144_9);
      goto swapB_18;

    case 5:
      current_block = (Rpc - LABEL_144_14);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_144_15);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_144_16);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_input_from_port_17)
DEFLABEL (with_input_from_port_11)
  INTERRUPT_CHECK (26, LABEL_144_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_144_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_144_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_144_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;

DEFLABEL (label_20)
  (Wrd10.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-1]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_144_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_144_9])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  ((Wrd22.pObj) [2]) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_144_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_144_11])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Rsp [2]) = (Wrd12.Obj);
  (Rsp [3]) = (Wrd23.Obj);
  (Rsp [1]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_144_13]));

DEFLABEL (label_21)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_144_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_144_0]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_144_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_144_7);
  goto label_20;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_144_11);

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

DEFLABEL (swapB_18)
  CLOSURE_HEADER (LABEL_144_9);

DEFLABEL (swapB_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_144_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  Wrd5 = Wrd9;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_144_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_25)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_144_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_24;

DEFLABEL (label_23)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_144_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_24)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_23;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_144_16])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_15)
  goto label_22;

DEFLABEL (label_27)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_26;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_144_15])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_14)
  goto label_25;

DEFLABEL (label_30)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_29;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_144_14])), (Wrd6.pObj));

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_145_4 3
#define LABEL_145_5 5
#define ENVIRONMENT_LABEL_145_3 12
#define DEBUGGING_LABEL_145_2 11
#define EXECUTE_CACHE_145_6 7
#define FREE_REFERENCE_145_0 10
#define FREE_REFERENCES_LABEL_145_0 6
#define NUMBER_OF_LINKER_SECTIONS_145_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_145 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_145_4);
      goto current_output_port_1;

    case 1:
      current_block = (Rpc - LABEL_145_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (current_output_port_5)
DEFLABEL (current_output_port_1)
  INTERRUPT_CHECK (26, LABEL_145_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_145_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_145_6]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_145_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_146_4 3
#define LABEL_146_7 5
#define LABEL_146_5 7
#define LABEL_146_9 9
#define ENVIRONMENT_LABEL_146_3 20
#define DEBUGGING_LABEL_146_2 19
#define OBJECT_146_1 18
#define OBJECT_146_0 17
#define EXECUTE_CACHE_146_8 11
#define EXECUTE_CACHE_146_6 13
#define FREE_ASSIGNMENT_146_0 16
#define FREE_REFERENCES_LABEL_146_0 10
#define NUMBER_OF_LINKER_SECTIONS_146_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_146 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_146_4);
      goto set_current_output_portB_2;

    case 1:
      current_block = (Rpc - LABEL_146_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_146_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_146_9);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_current_output_portB_6)
DEFLABEL (set_current_output_portB_2)
  INTERRUPT_CHECK (26, LABEL_146_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_146_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_146_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_146_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_146_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_146_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_146_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_146_7);

DEFLABEL (label_10)
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_146_0]));
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd15.Obj) = ((Wrd7.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd7.pObj) [0]) = (Wrd8.Obj);

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_146_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd15.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_146_9])), (Wrd7.pObj), (Wrd8.Obj));

DEFLABEL (label_4)
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_147_4 3
#define LABEL_147_7 5
#define LABEL_147_5 7
#define LABEL_147_11 9
#define TAG_147_12 3
#define LABEL_147_9 11
#define TAG_147_10 4
#define LABEL_147_14 13
#define LABEL_147_15 15
#define LABEL_147_16 17
#define ENVIRONMENT_LABEL_147_3 32
#define DEBUGGING_LABEL_147_2 31
#define OBJECT_147_1 30
#define OBJECT_147_0 29
#define EXECUTE_CACHE_147_13 19
#define EXECUTE_CACHE_147_8 21
#define EXECUTE_CACHE_147_6 23
#define FREE_REFERENCE_147_0 26
#define FREE_ASSIGNMENT_147_0 28
#define FREE_REFERENCES_LABEL_147_0 18
#define NUMBER_OF_LINKER_SECTIONS_147_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_147 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_147_4);
      goto with_output_to_port_11;

    case 1:
      current_block = (Rpc - LABEL_147_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_147_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_147_11);
      goto lambda_19;

    case 4:
      current_block = (Rpc - LABEL_147_9);
      goto swapB_18;

    case 5:
      current_block = (Rpc - LABEL_147_14);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_147_15);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_147_16);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_output_to_port_17)
DEFLABEL (with_output_to_port_11)
  INTERRUPT_CHECK (26, LABEL_147_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_147_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_147_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_147_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;

DEFLABEL (label_20)
  (Wrd10.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-1]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_147_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_147_9])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  ((Wrd22.pObj) [2]) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_147_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_147_11])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Rsp [2]) = (Wrd12.Obj);
  (Rsp [3]) = (Wrd23.Obj);
  (Rsp [1]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_147_13]));

DEFLABEL (label_21)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_147_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_147_0]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_147_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_147_7);
  goto label_20;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_147_11);

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

DEFLABEL (swapB_18)
  CLOSURE_HEADER (LABEL_147_9);

DEFLABEL (swapB_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_147_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  Wrd5 = Wrd9;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_147_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_25)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_147_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_24;

DEFLABEL (label_23)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_147_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_24)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_23;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_147_16])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_15)
  goto label_22;

DEFLABEL (label_27)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_26;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_147_15])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_14)
  goto label_25;

DEFLABEL (label_30)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_29;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_147_14])), (Wrd6.pObj));

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_148_4 3
#define LABEL_148_5 5
#define ENVIRONMENT_LABEL_148_3 12
#define DEBUGGING_LABEL_148_2 11
#define EXECUTE_CACHE_148_6 7
#define FREE_REFERENCE_148_0 10
#define FREE_REFERENCES_LABEL_148_0 6
#define NUMBER_OF_LINKER_SECTIONS_148_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_148 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_148_4);
      goto notification_output_port_1;

    case 1:
      current_block = (Rpc - LABEL_148_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (notification_output_port_5)
DEFLABEL (notification_output_port_1)
  INTERRUPT_CHECK (26, LABEL_148_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_148_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_148_6]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_148_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_149_4 3
#define LABEL_149_7 5
#define LABEL_149_5 7
#define LABEL_149_9 9
#define ENVIRONMENT_LABEL_149_3 20
#define DEBUGGING_LABEL_149_2 19
#define OBJECT_149_1 18
#define OBJECT_149_0 17
#define EXECUTE_CACHE_149_8 11
#define EXECUTE_CACHE_149_6 13
#define FREE_ASSIGNMENT_149_0 16
#define FREE_REFERENCES_LABEL_149_0 10
#define NUMBER_OF_LINKER_SECTIONS_149_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_149 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_149_4);
      goto set_notification_output_portB_2;

    case 1:
      current_block = (Rpc - LABEL_149_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_149_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_149_9);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_notification_output_portB_6)
DEFLABEL (set_notification_output_portB_2)
  INTERRUPT_CHECK (26, LABEL_149_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_149_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_149_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_149_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_149_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_149_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_149_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_149_7);

DEFLABEL (label_10)
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_149_0]));
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd15.Obj) = ((Wrd7.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd7.pObj) [0]) = (Wrd8.Obj);

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_149_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd15.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_149_9])), (Wrd7.pObj), (Wrd8.Obj));

DEFLABEL (label_4)
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_150_4 3
#define LABEL_150_7 5
#define LABEL_150_5 7
#define LABEL_150_11 9
#define TAG_150_12 3
#define LABEL_150_9 11
#define TAG_150_10 4
#define LABEL_150_14 13
#define LABEL_150_15 15
#define LABEL_150_16 17
#define ENVIRONMENT_LABEL_150_3 32
#define DEBUGGING_LABEL_150_2 31
#define OBJECT_150_1 30
#define OBJECT_150_0 29
#define EXECUTE_CACHE_150_13 19
#define EXECUTE_CACHE_150_8 21
#define EXECUTE_CACHE_150_6 23
#define FREE_REFERENCE_150_0 26
#define FREE_ASSIGNMENT_150_0 28
#define FREE_REFERENCES_LABEL_150_0 18
#define NUMBER_OF_LINKER_SECTIONS_150_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_150 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_150_4);
      goto with_notification_output_port_11;

    case 1:
      current_block = (Rpc - LABEL_150_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_150_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_150_11);
      goto lambda_19;

    case 4:
      current_block = (Rpc - LABEL_150_9);
      goto swapB_18;

    case 5:
      current_block = (Rpc - LABEL_150_14);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_150_15);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_150_16);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_notification_output_port_17)
DEFLABEL (with_notification_output_port_11)
  INTERRUPT_CHECK (26, LABEL_150_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_150_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_150_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_150_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;

DEFLABEL (label_20)
  (Wrd10.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-1]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_150_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_150_9])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  ((Wrd22.pObj) [2]) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_150_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_150_11])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Rsp [2]) = (Wrd12.Obj);
  (Rsp [3]) = (Wrd23.Obj);
  (Rsp [1]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_150_13]));

DEFLABEL (label_21)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_150_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_150_0]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_150_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_150_7);
  goto label_20;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_150_11);

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

DEFLABEL (swapB_18)
  CLOSURE_HEADER (LABEL_150_9);

DEFLABEL (swapB_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_150_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  Wrd5 = Wrd9;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_150_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_25)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_150_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_24;

DEFLABEL (label_23)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_150_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_24)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_23;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_150_16])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_15)
  goto label_22;

DEFLABEL (label_27)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_26;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_150_15])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_14)
  goto label_25;

DEFLABEL (label_30)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_29;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_150_14])), (Wrd6.pObj));

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_151_4 3
#define LABEL_151_5 5
#define ENVIRONMENT_LABEL_151_3 12
#define DEBUGGING_LABEL_151_2 11
#define EXECUTE_CACHE_151_6 7
#define FREE_REFERENCE_151_0 10
#define FREE_REFERENCES_LABEL_151_0 6
#define NUMBER_OF_LINKER_SECTIONS_151_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_151 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_151_4);
      goto trace_output_port_1;

    case 1:
      current_block = (Rpc - LABEL_151_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (trace_output_port_5)
DEFLABEL (trace_output_port_1)
  INTERRUPT_CHECK (26, LABEL_151_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_151_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_151_6]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_151_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_152_4 3
#define LABEL_152_7 5
#define LABEL_152_5 7
#define LABEL_152_9 9
#define ENVIRONMENT_LABEL_152_3 20
#define DEBUGGING_LABEL_152_2 19
#define OBJECT_152_1 18
#define OBJECT_152_0 17
#define EXECUTE_CACHE_152_8 11
#define EXECUTE_CACHE_152_6 13
#define FREE_ASSIGNMENT_152_0 16
#define FREE_REFERENCES_LABEL_152_0 10
#define NUMBER_OF_LINKER_SECTIONS_152_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_152 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_152_4);
      goto set_trace_output_portB_2;

    case 1:
      current_block = (Rpc - LABEL_152_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_152_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_152_9);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_trace_output_portB_6)
DEFLABEL (set_trace_output_portB_2)
  INTERRUPT_CHECK (26, LABEL_152_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_152_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_152_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_152_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_152_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_152_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_152_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_152_7);

DEFLABEL (label_10)
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_152_0]));
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd15.Obj) = ((Wrd7.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd7.pObj) [0]) = (Wrd8.Obj);

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_152_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd15.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_152_9])), (Wrd7.pObj), (Wrd8.Obj));

DEFLABEL (label_4)
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_153_4 3
#define LABEL_153_7 5
#define LABEL_153_5 7
#define LABEL_153_11 9
#define TAG_153_12 3
#define LABEL_153_9 11
#define TAG_153_10 4
#define LABEL_153_14 13
#define LABEL_153_15 15
#define LABEL_153_16 17
#define ENVIRONMENT_LABEL_153_3 32
#define DEBUGGING_LABEL_153_2 31
#define OBJECT_153_1 30
#define OBJECT_153_0 29
#define EXECUTE_CACHE_153_13 19
#define EXECUTE_CACHE_153_8 21
#define EXECUTE_CACHE_153_6 23
#define FREE_REFERENCE_153_0 26
#define FREE_ASSIGNMENT_153_0 28
#define FREE_REFERENCES_LABEL_153_0 18
#define NUMBER_OF_LINKER_SECTIONS_153_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_153 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_153_4);
      goto with_trace_output_port_11;

    case 1:
      current_block = (Rpc - LABEL_153_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_153_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_153_11);
      goto lambda_19;

    case 4:
      current_block = (Rpc - LABEL_153_9);
      goto swapB_18;

    case 5:
      current_block = (Rpc - LABEL_153_14);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_153_15);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_153_16);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_trace_output_port_17)
DEFLABEL (with_trace_output_port_11)
  INTERRUPT_CHECK (26, LABEL_153_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_153_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_153_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_153_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;

DEFLABEL (label_20)
  (Wrd10.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-1]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_153_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_153_9])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  ((Wrd22.pObj) [2]) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_153_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_153_11])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Rsp [2]) = (Wrd12.Obj);
  (Rsp [3]) = (Wrd23.Obj);
  (Rsp [1]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_153_13]));

DEFLABEL (label_21)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_153_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_153_0]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_153_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_153_7);
  goto label_20;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_153_11);

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

DEFLABEL (swapB_18)
  CLOSURE_HEADER (LABEL_153_9);

DEFLABEL (swapB_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_153_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  Wrd5 = Wrd9;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_153_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_25)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_153_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_24;

DEFLABEL (label_23)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_153_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_24)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_23;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_153_16])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_15)
  goto label_22;

DEFLABEL (label_27)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_26;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_153_15])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_14)
  goto label_25;

DEFLABEL (label_30)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_29;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_153_14])), (Wrd6.pObj));

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_154_4 3
#define LABEL_154_5 5
#define ENVIRONMENT_LABEL_154_3 12
#define DEBUGGING_LABEL_154_2 11
#define EXECUTE_CACHE_154_6 7
#define FREE_REFERENCE_154_0 10
#define FREE_REFERENCES_LABEL_154_0 6
#define NUMBER_OF_LINKER_SECTIONS_154_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_154 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_154_4);
      goto interaction_i_o_port_1;

    case 1:
      current_block = (Rpc - LABEL_154_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interaction_i_o_port_5)
DEFLABEL (interaction_i_o_port_1)
  INTERRUPT_CHECK (26, LABEL_154_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_154_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_154_6]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_154_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_155_4 3
#define LABEL_155_7 5
#define LABEL_155_5 7
#define LABEL_155_9 9
#define ENVIRONMENT_LABEL_155_3 20
#define DEBUGGING_LABEL_155_2 19
#define OBJECT_155_1 18
#define OBJECT_155_0 17
#define EXECUTE_CACHE_155_8 11
#define EXECUTE_CACHE_155_6 13
#define FREE_ASSIGNMENT_155_0 16
#define FREE_REFERENCES_LABEL_155_0 10
#define NUMBER_OF_LINKER_SECTIONS_155_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_155 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_155_4);
      goto set_interaction_i_o_portB_2;

    case 1:
      current_block = (Rpc - LABEL_155_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_155_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_155_9);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_interaction_i_o_portB_6)
DEFLABEL (set_interaction_i_o_portB_2)
  INTERRUPT_CHECK (26, LABEL_155_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_155_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_155_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_155_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_155_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_155_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_155_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_155_7);

DEFLABEL (label_10)
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_155_0]));
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd15.Obj) = ((Wrd7.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd7.pObj) [0]) = (Wrd8.Obj);

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_155_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd15.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_155_9])), (Wrd7.pObj), (Wrd8.Obj));

DEFLABEL (label_4)
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_156_4 3
#define LABEL_156_7 5
#define LABEL_156_5 7
#define LABEL_156_11 9
#define TAG_156_12 3
#define LABEL_156_9 11
#define TAG_156_10 4
#define LABEL_156_14 13
#define LABEL_156_15 15
#define LABEL_156_16 17
#define ENVIRONMENT_LABEL_156_3 32
#define DEBUGGING_LABEL_156_2 31
#define OBJECT_156_1 30
#define OBJECT_156_0 29
#define EXECUTE_CACHE_156_13 19
#define EXECUTE_CACHE_156_8 21
#define EXECUTE_CACHE_156_6 23
#define FREE_REFERENCE_156_0 26
#define FREE_ASSIGNMENT_156_0 28
#define FREE_REFERENCES_LABEL_156_0 18
#define NUMBER_OF_LINKER_SECTIONS_156_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
port_so_code_156 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_156_4);
      goto with_interaction_i_o_port_11;

    case 1:
      current_block = (Rpc - LABEL_156_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_156_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_156_11);
      goto lambda_19;

    case 4:
      current_block = (Rpc - LABEL_156_9);
      goto swapB_18;

    case 5:
      current_block = (Rpc - LABEL_156_14);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_156_15);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_156_16);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_interaction_i_o_port_17)
DEFLABEL (with_interaction_i_o_port_11)
  INTERRUPT_CHECK (26, LABEL_156_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_156_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_156_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_156_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;

DEFLABEL (label_20)
  (Wrd10.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-1]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_156_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_156_9])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  ((Wrd22.pObj) [2]) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_156_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_156_11])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Rsp [2]) = (Wrd12.Obj);
  (Rsp [3]) = (Wrd23.Obj);
  (Rsp [1]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_156_13]));

DEFLABEL (label_21)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_156_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_156_0]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_156_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_156_7);
  goto label_20;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_156_11);

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

DEFLABEL (swapB_18)
  CLOSURE_HEADER (LABEL_156_9);

DEFLABEL (swapB_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_156_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  Wrd5 = Wrd9;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_156_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_25)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_156_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_24;

DEFLABEL (label_23)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_156_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_24)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_23;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_156_16])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_15)
  goto label_22;

DEFLABEL (label_27)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_26;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_156_15])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_14)
  goto label_25;

DEFLABEL (label_30)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_29;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_156_14])), (Wrd6.pObj));

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_9 5
#define LABEL_5 7
#define LABEL_7 9
#define LABEL_8 11
#define LABEL_11 13
#define LABEL_12 15
#define TAG_13 6
#define LABEL_14 17
#define LABEL_15 19
#define LABEL_16 21
#define LABEL_17 23
#define LABEL_18 25
#define LABEL_19 27
#define LABEL_20 29
#define LABEL_21 31
#define LABEL_22 33
#define LABEL_23 35
#define LABEL_24 37
#define LABEL_25 39
#define LABEL_26 41
#define LABEL_27 43
#define LABEL_28 45
#define LABEL_31 47
#define LABEL_29 49
#define LABEL_30 51
#define LABEL_32 53
#define LABEL_34 55
#define LABEL_33 57
#define LABEL_36 59
#define LABEL_37 61
#define LABEL_38 63
#define LABEL_39 65
#define LABEL_40 67
#define LABEL_41 69
#define LABEL_42 71
#define LABEL_43 73
#define LABEL_44 75
#define LABEL_45 77
#define LABEL_46 79
#define LABEL_47 81
#define LABEL_48 83
#define LABEL_49 85
#define LABEL_50 87
#define LABEL_51 89
#define LABEL_52 91
#define LABEL_53 93
#define LABEL_54 95
#define LABEL_55 97
#define LABEL_56 99
#define LABEL_57 101
#define LABEL_58 103
#define LABEL_59 105
#define LABEL_60 107
#define LABEL_61 109
#define LABEL_65 111
#define LABEL_62 113
#define LABEL_63 115
#define LABEL_64 117
#define LABEL_66 119
#define LABEL_67 121
#define TAG_68 59
#define LABEL_71 123
#define LABEL_69 125
#define LABEL_70 127
#define LABEL_75 129
#define LABEL_73 131
#define LABEL_74 133
#define LABEL_76 135
#define LABEL_77 137
#define LABEL_78 139
#define LABEL_79 141
#define LABEL_80 143
#define LABEL_81 145
#define LABEL_82 147
#define LABEL_83 149
#define LABEL_84 151
#define LABEL_85 153
#define LABEL_86 155
#define LABEL_89 157
#define LABEL_87 159
#define LABEL_88 161
#define LABEL_90 163
#define LABEL_91 165
#define LABEL_92 167
#define LABEL_93 169
#define LABEL_94 171
#define LABEL_95 173
#define LABEL_96 175
#define LABEL_97 177
#define LABEL_98 179
#define LABEL_99 181
#define LABEL_100 183
#define LABEL_101 185
#define LABEL_102 187
#define LABEL_103 189
#define LABEL_104 191
#define LABEL_106 193
#define LABEL_107 195
#define LABEL_108 197
#define LABEL_109 199
#define LABEL_110 201
#define LABEL_111 203
#define LABEL_112 205
#define LABEL_113 207
#define LABEL_114 209
#define LABEL_115 211
#define LABEL_116 213
#define LABEL_117 215
#define LABEL_118 217
#define LABEL_119 219
#define LABEL_120 221
#define LABEL_121 223
#define LABEL_122 225
#define LABEL_123 227
#define LABEL_124 229
#define LABEL_125 231
#define LABEL_127 233
#define LABEL_126 235
#define LABEL_128 237
#define LABEL_129 239
#define LABEL_130 241
#define LABEL_131 243
#define LABEL_132 245
#define LABEL_133 247
#define LABEL_134 249
#define LABEL_135 251
#define LABEL_136 253
#define LABEL_137 255
#define LABEL_138 257
#define LABEL_139 259
#define LABEL_140 261
#define LABEL_141 263
#define LABEL_142 265
#define LABEL_143 267
#define LABEL_144 269
#define LABEL_145 271
#define LABEL_146 273
#define LABEL_147 275
#define LABEL_148 277
#define LABEL_149 279
#define LABEL_150 281
#define LABEL_151 283
#define LABEL_152 285
#define LABEL_153 287
#define LABEL_154 289
#define LABEL_155 291
#define LABEL_156 293
#define LABEL_157 295
#define LABEL_158 297
#define LABEL_159 299
#define LABEL_160 301
#define LABEL_161 303
#define LABEL_162 305
#define LABEL_163 307
#define LABEL_164 309
#define LABEL_165 311
#define LABEL_166 313
#define LABEL_167 315
#define LABEL_168 317
#define LABEL_169 319
#define LABEL_170 321
#define LABEL_171 323
#define LABEL_172 325
#define LABEL_173 327
#define LABEL_174 329
#define LABEL_175 331
#define LABEL_176 333
#define LABEL_177 335
#define LABEL_178 337
#define LABEL_179 339
#define LABEL_180 341
#define LABEL_181 343
#define LABEL_182 345
#define LABEL_183 347
#define LABEL_184 349
#define LABEL_185 351
#define LABEL_186 353
#define LABEL_187 355
#define LABEL_188 357
#define LABEL_189 359
#define LABEL_190 361
#define LABEL_191 363
#define LABEL_192 365
#define LABEL_193 367
#define LABEL_194 369
#define LABEL_195 371
#define LABEL_196 373
#define LABEL_197 375
#define LABEL_198 377
#define LABEL_199 379
#define LABEL_200 381
#define LABEL_201 383
#define LABEL_202 385
#define LABEL_203 387
#define LABEL_204 389
#define LABEL_205 391
#define LABEL_206 393
#define LABEL_207 395
#define LABEL_208 397
#define LABEL_209 399
#define LABEL_210 401
#define LABEL_211 403
#define LABEL_212 405
#define ENVIRONMENT_LABEL_3 769
#define DEBUGGING_LABEL_2 768
#define PURIFICATION_ROOT 767
#define OBJECT_335 766
#define OBJECT_334 765
#define OBJECT_333 764
#define OBJECT_332 763
#define OBJECT_331 762
#define OBJECT_330 761
#define OBJECT_329 760
#define OBJECT_328 759
#define OBJECT_327 758
#define OBJECT_326 757
#define OBJECT_325 756
#define OBJECT_324 755
#define OBJECT_323 754
#define OBJECT_322 753
#define OBJECT_321 752
#define OBJECT_320 751
#define OBJECT_319 750
#define OBJECT_318 749
#define OBJECT_317 748
#define OBJECT_316 747
#define OBJECT_315 746
#define OBJECT_314 745
#define OBJECT_313 744
#define OBJECT_312 743
#define OBJECT_311 742
#define OBJECT_310 741
#define OBJECT_309 740
#define OBJECT_308 739
#define OBJECT_307 738
#define OBJECT_306 737
#define OBJECT_305 736
#define OBJECT_304 735
#define OBJECT_303 734
#define OBJECT_302 733
#define OBJECT_301 732
#define OBJECT_300 731
#define OBJECT_299 730
#define OBJECT_298 729
#define OBJECT_297 728
#define OBJECT_296 727
#define OBJECT_295 726
#define OBJECT_294 725
#define OBJECT_293 724
#define OBJECT_292 723
#define OBJECT_291 722
#define OBJECT_290 721
#define OBJECT_289 720
#define OBJECT_288 719
#define OBJECT_287 718
#define OBJECT_286 717
#define OBJECT_285 716
#define OBJECT_284 715
#define OBJECT_283 714
#define OBJECT_282 713
#define OBJECT_281 712
#define OBJECT_280 711
#define OBJECT_279 710
#define OBJECT_278 709
#define OBJECT_277 708
#define OBJECT_276 707
#define OBJECT_275 706
#define OBJECT_274 705
#define OBJECT_273 704
#define OBJECT_272 703
#define OBJECT_271 702
#define OBJECT_270 701
#define OBJECT_269 700
#define OBJECT_268 699
#define OBJECT_267 698
#define OBJECT_266 697
#define OBJECT_265 696
#define OBJECT_264 695
#define OBJECT_263 694
#define OBJECT_262 693
#define OBJECT_261 692
#define OBJECT_260 691
#define OBJECT_259 690
#define OBJECT_258 689
#define OBJECT_257 688
#define OBJECT_256 687
#define OBJECT_255 686
#define OBJECT_254 685
#define OBJECT_253 684
#define OBJECT_252 683
#define OBJECT_251 682
#define OBJECT_250 681
#define OBJECT_249 680
#define OBJECT_248 679
#define OBJECT_247 678
#define OBJECT_246 677
#define OBJECT_245 676
#define OBJECT_244 675
#define OBJECT_243 674
#define OBJECT_242 673
#define OBJECT_241 672
#define OBJECT_240 671
#define OBJECT_239 670
#define OBJECT_238 669
#define OBJECT_237 668
#define OBJECT_236 667
#define OBJECT_235 666
#define OBJECT_234 665
#define OBJECT_233 664
#define OBJECT_232 663
#define OBJECT_231 662
#define OBJECT_230 661
#define OBJECT_229 660
#define OBJECT_228 659
#define OBJECT_227 658
#define OBJECT_226 657
#define OBJECT_225 656
#define OBJECT_224 655
#define OBJECT_223 654
#define OBJECT_222 653
#define OBJECT_221 652
#define OBJECT_220 651
#define OBJECT_219 650
#define OBJECT_218 649
#define OBJECT_217 648
#define OBJECT_216 647
#define OBJECT_215 646
#define OBJECT_214 645
#define OBJECT_213 644
#define OBJECT_212 643
#define OBJECT_211 642
#define OBJECT_210 641
#define OBJECT_209 640
#define OBJECT_208 639
#define OBJECT_207 638
#define OBJECT_206 637
#define OBJECT_205 636
#define OBJECT_204 635
#define OBJECT_203 634
#define OBJECT_202 633
#define OBJECT_201 632
#define OBJECT_200 631
#define OBJECT_199 630
#define OBJECT_198 629
#define OBJECT_197 628
#define OBJECT_196 627
#define OBJECT_195 626
#define OBJECT_194 625
#define OBJECT_193 624
#define OBJECT_192 623
#define OBJECT_191 622
#define OBJECT_190 621
#define OBJECT_189 620
#define OBJECT_188 619
#define OBJECT_187 618
#define OBJECT_186 617
#define OBJECT_185 616
#define OBJECT_184 615
#define OBJECT_183 614
#define OBJECT_182 613
#define OBJECT_181 612
#define OBJECT_180 611
#define OBJECT_179 610
#define OBJECT_178 609
#define OBJECT_177 608
#define OBJECT_176 607
#define OBJECT_175 606
#define OBJECT_174 605
#define OBJECT_173 604
#define OBJECT_172 603
#define OBJECT_171 602
#define OBJECT_170 601
#define OBJECT_169 600
#define OBJECT_168 599
#define OBJECT_167 598
#define OBJECT_166 597
#define OBJECT_165 596
#define OBJECT_164 595
#define OBJECT_163 594
#define OBJECT_162 593
#define OBJECT_161 592
#define OBJECT_160 591
#define OBJECT_159 590
#define OBJECT_158 589
#define OBJECT_157 588
#define OBJECT_156 587
#define OBJECT_155 586
#define OBJECT_154 585
#define OBJECT_153 584
#define OBJECT_152 583
#define OBJECT_151 582
#define OBJECT_150 581
#define OBJECT_149 580
#define OBJECT_148 579
#define OBJECT_147 578
#define OBJECT_146 577
#define OBJECT_145 576
#define OBJECT_144 575
#define OBJECT_143 574
#define OBJECT_142 573
#define OBJECT_141 572
#define OBJECT_140 571
#define OBJECT_139 570
#define OBJECT_138 569
#define OBJECT_137 568
#define OBJECT_136 567
#define OBJECT_135 566
#define OBJECT_134 565
#define OBJECT_133 564
#define OBJECT_132 563
#define OBJECT_131 562
#define OBJECT_130 561
#define OBJECT_129 560
#define OBJECT_128 559
#define OBJECT_127 558
#define OBJECT_126 557
#define OBJECT_125 556
#define OBJECT_124 555
#define OBJECT_123 554
#define OBJECT_122 553
#define OBJECT_121 552
#define OBJECT_120 551
#define OBJECT_119 550
#define OBJECT_118 549
#define OBJECT_117 548
#define OBJECT_116 547
#define OBJECT_115 546
#define OBJECT_114 545
#define OBJECT_113 544
#define OBJECT_112 543
#define OBJECT_111 542
#define OBJECT_110 541
#define OBJECT_109 540
#define OBJECT_108 539
#define OBJECT_107 538
#define OBJECT_106 537
#define OBJECT_105 536
#define OBJECT_104 535
#define OBJECT_103 534
#define OBJECT_102 533
#define OBJECT_101 532
#define OBJECT_100 531
#define OBJECT_99 530
#define OBJECT_98 529
#define OBJECT_97 528
#define OBJECT_96 527
#define OBJECT_95 526
#define OBJECT_94 525
#define OBJECT_93 524
#define OBJECT_92 523
#define OBJECT_91 522
#define OBJECT_90 521
#define OBJECT_89 520
#define OBJECT_88 519
#define OBJECT_87 518
#define OBJECT_86 517
#define OBJECT_85 516
#define OBJECT_84 515
#define OBJECT_83 514
#define OBJECT_82 513
#define OBJECT_81 512
#define OBJECT_80 511
#define OBJECT_79 510
#define OBJECT_78 509
#define OBJECT_77 508
#define OBJECT_76 507
#define OBJECT_75 506
#define OBJECT_74 505
#define OBJECT_73 504
#define OBJECT_72 503
#define OBJECT_71 502
#define OBJECT_70 501
#define OBJECT_69 500
#define OBJECT_68 499
#define OBJECT_67 498
#define OBJECT_66 497
#define OBJECT_65 496
#define OBJECT_64 495
#define OBJECT_63 494
#define OBJECT_62 493
#define OBJECT_61 492
#define OBJECT_60 491
#define OBJECT_59 490
#define OBJECT_58 489
#define OBJECT_57 488
#define OBJECT_56 487
#define OBJECT_55 486
#define OBJECT_54 485
#define OBJECT_53 484
#define OBJECT_52 483
#define OBJECT_51 482
#define OBJECT_50 481
#define OBJECT_49 480
#define OBJECT_48 479
#define OBJECT_47 478
#define OBJECT_46 477
#define OBJECT_45 476
#define OBJECT_44 475
#define OBJECT_43 474
#define OBJECT_42 473
#define OBJECT_41 472
#define OBJECT_40 471
#define OBJECT_39 470
#define OBJECT_38 469
#define OBJECT_37 468
#define OBJECT_36 467
#define OBJECT_35 466
#define OBJECT_34 465
#define OBJECT_33 464
#define OBJECT_32 463
#define OBJECT_31 462
#define OBJECT_30 461
#define OBJECT_29 460
#define OBJECT_28 459
#define OBJECT_27 458
#define OBJECT_26 457
#define OBJECT_25 456
#define OBJECT_24 455
#define OBJECT_23 454
#define OBJECT_22 453
#define OBJECT_21 452
#define OBJECT_20 451
#define OBJECT_19 450
#define OBJECT_18 449
#define OBJECT_17 448
#define OBJECT_16 447
#define OBJECT_15 446
#define OBJECT_14 445
#define OBJECT_13 444
#define OBJECT_12 443
#define OBJECT_11 442
#define OBJECT_10 441
#define OBJECT_9 440
#define OBJECT_8 439
#define OBJECT_7 438
#define OBJECT_6 437
#define OBJECT_5 436
#define OBJECT_4 435
#define OBJECT_3 434
#define OBJECT_2 433
#define OBJECT_1 432
#define OBJECT_0 431
#define EXECUTE_CACHE_35 407
#define FREE_REFERENCE_11 410
#define FREE_REFERENCE_10 411
#define FREE_REFERENCE_9 412
#define FREE_REFERENCE_8 413
#define FREE_REFERENCE_7 414
#define FREE_REFERENCE_6 415
#define FREE_REFERENCE_5 416
#define FREE_REFERENCE_4 417
#define FREE_REFERENCE_3 418
#define FREE_REFERENCE_2 419
#define FREE_REFERENCE_1 420
#define FREE_REFERENCE_0 421
#define GLOBAL_EXECUTE_CACHE_105 423
#define GLOBAL_EXECUTE_CACHE_72 425
#define GLOBAL_EXECUTE_CACHE_10 427
#define GLOBAL_EXECUTE_CACHE_6 429
#define FREE_REFERENCES_LABEL_0 406
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
port_so_3ee7bbfe21c54d89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd109;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd98;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd91;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd77;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd68;
  machine_word Wrd67;
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
      goto continuation_15;

    case 1:
      current_block = (Rpc - LABEL_9);
      goto label_220;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_14;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_20;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_16;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto continuation_21;

    case 6:
      current_block = (Rpc - LABEL_12);
      goto Z__make_port_type_239;

    case 7:
      current_block = (Rpc - LABEL_14);
      goto continuation_22;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto continuation_23;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_24;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto continuation_25;

    case 11:
      current_block = (Rpc - LABEL_18);
      goto continuation_26;

    case 12:
      current_block = (Rpc - LABEL_19);
      goto continuation_27;

    case 13:
      current_block = (Rpc - LABEL_20);
      goto continuation_28;

    case 14:
      current_block = (Rpc - LABEL_21);
      goto continuation_29;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto continuation_30;

    case 16:
      current_block = (Rpc - LABEL_23);
      goto continuation_31;

    case 17:
      current_block = (Rpc - LABEL_24);
      goto continuation_32;

    case 18:
      current_block = (Rpc - LABEL_25);
      goto continuation_33;

    case 19:
      current_block = (Rpc - LABEL_26);
      goto continuation_34;

    case 20:
      current_block = (Rpc - LABEL_27);
      goto continuation_35;

    case 21:
      current_block = (Rpc - LABEL_28);
      goto continuation_36;

    case 22:
      current_block = (Rpc - LABEL_31);
      goto label_221;

    case 23:
      current_block = (Rpc - LABEL_29);
      goto continuation_38;

    case 24:
      current_block = (Rpc - LABEL_30);
      goto continuation_37;

    case 25:
      current_block = (Rpc - LABEL_32);
      goto continuation_39;

    case 26:
      current_block = (Rpc - LABEL_34);
      goto label_222;

    case 27:
      current_block = (Rpc - LABEL_33);
      goto continuation_40;

    case 28:
      current_block = (Rpc - LABEL_36);
      goto continuation_41;

    case 29:
      current_block = (Rpc - LABEL_37);
      goto continuation_42;

    case 30:
      current_block = (Rpc - LABEL_38);
      goto continuation_43;

    case 31:
      current_block = (Rpc - LABEL_39);
      goto continuation_44;

    case 32:
      current_block = (Rpc - LABEL_40);
      goto continuation_45;

    case 33:
      current_block = (Rpc - LABEL_41);
      goto continuation_46;

    case 34:
      current_block = (Rpc - LABEL_42);
      goto continuation_47;

    case 35:
      current_block = (Rpc - LABEL_43);
      goto continuation_48;

    case 36:
      current_block = (Rpc - LABEL_44);
      goto continuation_49;

    case 37:
      current_block = (Rpc - LABEL_45);
      goto continuation_50;

    case 38:
      current_block = (Rpc - LABEL_46);
      goto continuation_51;

    case 39:
      current_block = (Rpc - LABEL_47);
      goto continuation_52;

    case 40:
      current_block = (Rpc - LABEL_48);
      goto continuation_53;

    case 41:
      current_block = (Rpc - LABEL_49);
      goto continuation_54;

    case 42:
      current_block = (Rpc - LABEL_50);
      goto continuation_55;

    case 43:
      current_block = (Rpc - LABEL_51);
      goto continuation_56;

    case 44:
      current_block = (Rpc - LABEL_52);
      goto continuation_57;

    case 45:
      current_block = (Rpc - LABEL_53);
      goto continuation_58;

    case 46:
      current_block = (Rpc - LABEL_54);
      goto continuation_59;

    case 47:
      current_block = (Rpc - LABEL_55);
      goto continuation_60;

    case 48:
      current_block = (Rpc - LABEL_56);
      goto continuation_61;

    case 49:
      current_block = (Rpc - LABEL_57);
      goto continuation_62;

    case 50:
      current_block = (Rpc - LABEL_58);
      goto continuation_63;

    case 51:
      current_block = (Rpc - LABEL_59);
      goto continuation_64;

    case 52:
      current_block = (Rpc - LABEL_60);
      goto continuation_65;

    case 53:
      current_block = (Rpc - LABEL_61);
      goto continuation_74;

    case 54:
      current_block = (Rpc - LABEL_65);
      goto label_223;

    case 55:
      current_block = (Rpc - LABEL_62);
      goto continuation_73;

    case 56:
      current_block = (Rpc - LABEL_63);
      goto continuation_81;

    case 57:
      current_block = (Rpc - LABEL_64);
      goto continuation_75;

    case 58:
      current_block = (Rpc - LABEL_66);
      goto continuation_82;

    case 59:
      current_block = (Rpc - LABEL_67);
      goto Z__make_port_240;

    case 60:
      current_block = (Rpc - LABEL_71);
      goto label_224;

    case 61:
      current_block = (Rpc - LABEL_69);
      goto continuation_83;

    case 62:
      current_block = (Rpc - LABEL_70);
      goto continuation_78;

    case 63:
      current_block = (Rpc - LABEL_75);
      goto label_225;

    case 64:
      current_block = (Rpc - LABEL_73);
      goto continuation_84;

    case 65:
      current_block = (Rpc - LABEL_74);
      goto continuation_77;

    case 66:
      current_block = (Rpc - LABEL_76);
      goto continuation_85;

    case 67:
      current_block = (Rpc - LABEL_77);
      goto continuation_86;

    case 68:
      current_block = (Rpc - LABEL_78);
      goto continuation_87;

    case 69:
      current_block = (Rpc - LABEL_79);
      goto continuation_88;

    case 70:
      current_block = (Rpc - LABEL_80);
      goto continuation_89;

    case 71:
      current_block = (Rpc - LABEL_81);
      goto continuation_90;

    case 72:
      current_block = (Rpc - LABEL_82);
      goto continuation_91;

    case 73:
      current_block = (Rpc - LABEL_83);
      goto continuation_92;

    case 74:
      current_block = (Rpc - LABEL_84);
      goto continuation_93;

    case 75:
      current_block = (Rpc - LABEL_85);
      goto continuation_94;

    case 76:
      current_block = (Rpc - LABEL_86);
      goto continuation_95;

    case 77:
      current_block = (Rpc - LABEL_89);
      goto label_226;

    case 78:
      current_block = (Rpc - LABEL_87);
      goto continuation_97;

    case 79:
      current_block = (Rpc - LABEL_88);
      goto continuation_96;

    case 80:
      current_block = (Rpc - LABEL_90);
      goto continuation_98;

    case 81:
      current_block = (Rpc - LABEL_91);
      goto continuation_99;

    case 82:
      current_block = (Rpc - LABEL_92);
      goto continuation_100;

    case 83:
      current_block = (Rpc - LABEL_93);
      goto continuation_101;

    case 84:
      current_block = (Rpc - LABEL_94);
      goto continuation_102;

    case 85:
      current_block = (Rpc - LABEL_95);
      goto continuation_103;

    case 86:
      current_block = (Rpc - LABEL_96);
      goto continuation_104;

    case 87:
      current_block = (Rpc - LABEL_97);
      goto continuation_105;

    case 88:
      current_block = (Rpc - LABEL_98);
      goto continuation_106;

    case 89:
      current_block = (Rpc - LABEL_99);
      goto continuation_107;

    case 90:
      current_block = (Rpc - LABEL_100);
      goto continuation_108;

    case 91:
      current_block = (Rpc - LABEL_101);
      goto continuation_109;

    case 92:
      current_block = (Rpc - LABEL_102);
      goto continuation_113;

    case 93:
      current_block = (Rpc - LABEL_103);
      goto continuation_112;

    case 94:
      current_block = (Rpc - LABEL_104);
      goto continuation_110;

    case 95:
      current_block = (Rpc - LABEL_106);
      goto continuation_114;

    case 96:
      current_block = (Rpc - LABEL_107);
      goto continuation_115;

    case 97:
      current_block = (Rpc - LABEL_108);
      goto continuation_116;

    case 98:
      current_block = (Rpc - LABEL_109);
      goto continuation_117;

    case 99:
      current_block = (Rpc - LABEL_110);
      goto continuation_118;

    case 100:
      current_block = (Rpc - LABEL_111);
      goto continuation_119;

    case 101:
      current_block = (Rpc - LABEL_112);
      goto continuation_120;

    case 102:
      current_block = (Rpc - LABEL_113);
      goto continuation_121;

    case 103:
      current_block = (Rpc - LABEL_114);
      goto continuation_122;

    case 104:
      current_block = (Rpc - LABEL_115);
      goto continuation_123;

    case 105:
      current_block = (Rpc - LABEL_116);
      goto continuation_124;

    case 106:
      current_block = (Rpc - LABEL_117);
      goto continuation_128;

    case 107:
      current_block = (Rpc - LABEL_118);
      goto continuation_127;

    case 108:
      current_block = (Rpc - LABEL_119);
      goto continuation_125;

    case 109:
      current_block = (Rpc - LABEL_120);
      goto continuation_129;

    case 110:
      current_block = (Rpc - LABEL_121);
      goto continuation_130;

    case 111:
      current_block = (Rpc - LABEL_122);
      goto continuation_131;

    case 112:
      current_block = (Rpc - LABEL_123);
      goto continuation_132;

    case 113:
      current_block = (Rpc - LABEL_124);
      goto continuation_133;

    case 114:
      current_block = (Rpc - LABEL_125);
      goto continuation_134;

    case 115:
      current_block = (Rpc - LABEL_127);
      goto label_227;

    case 116:
      current_block = (Rpc - LABEL_126);
      goto continuation_135;

    case 117:
      current_block = (Rpc - LABEL_128);
      goto continuation_136;

    case 118:
      current_block = (Rpc - LABEL_129);
      goto continuation_137;

    case 119:
      current_block = (Rpc - LABEL_130);
      goto continuation_138;

    case 120:
      current_block = (Rpc - LABEL_131);
      goto continuation_139;

    case 121:
      current_block = (Rpc - LABEL_132);
      goto continuation_140;

    case 122:
      current_block = (Rpc - LABEL_133);
      goto continuation_141;

    case 123:
      current_block = (Rpc - LABEL_134);
      goto continuation_142;

    case 124:
      current_block = (Rpc - LABEL_135);
      goto continuation_143;

    case 125:
      current_block = (Rpc - LABEL_136);
      goto continuation_144;

    case 126:
      current_block = (Rpc - LABEL_137);
      goto continuation_145;

    case 127:
      current_block = (Rpc - LABEL_138);
      goto continuation_146;

    case 128:
      current_block = (Rpc - LABEL_139);
      goto continuation_147;

    case 129:
      current_block = (Rpc - LABEL_140);
      goto continuation_148;

    case 130:
      current_block = (Rpc - LABEL_141);
      goto continuation_149;

    case 131:
      current_block = (Rpc - LABEL_142);
      goto continuation_150;

    case 132:
      current_block = (Rpc - LABEL_143);
      goto continuation_151;

    case 133:
      current_block = (Rpc - LABEL_144);
      goto continuation_152;

    case 134:
      current_block = (Rpc - LABEL_145);
      goto continuation_153;

    case 135:
      current_block = (Rpc - LABEL_146);
      goto continuation_154;

    case 136:
      current_block = (Rpc - LABEL_147);
      goto continuation_155;

    case 137:
      current_block = (Rpc - LABEL_148);
      goto continuation_156;

    case 138:
      current_block = (Rpc - LABEL_149);
      goto continuation_157;

    case 139:
      current_block = (Rpc - LABEL_150);
      goto continuation_158;

    case 140:
      current_block = (Rpc - LABEL_151);
      goto continuation_159;

    case 141:
      current_block = (Rpc - LABEL_152);
      goto continuation_160;

    case 142:
      current_block = (Rpc - LABEL_153);
      goto continuation_161;

    case 143:
      current_block = (Rpc - LABEL_154);
      goto continuation_162;

    case 144:
      current_block = (Rpc - LABEL_155);
      goto continuation_163;

    case 145:
      current_block = (Rpc - LABEL_156);
      goto continuation_164;

    case 146:
      current_block = (Rpc - LABEL_157);
      goto continuation_165;

    case 147:
      current_block = (Rpc - LABEL_158);
      goto continuation_166;

    case 148:
      current_block = (Rpc - LABEL_159);
      goto continuation_167;

    case 149:
      current_block = (Rpc - LABEL_160);
      goto continuation_168;

    case 150:
      current_block = (Rpc - LABEL_161);
      goto continuation_169;

    case 151:
      current_block = (Rpc - LABEL_162);
      goto continuation_170;

    case 152:
      current_block = (Rpc - LABEL_163);
      goto continuation_171;

    case 153:
      current_block = (Rpc - LABEL_164);
      goto continuation_172;

    case 154:
      current_block = (Rpc - LABEL_165);
      goto continuation_173;

    case 155:
      current_block = (Rpc - LABEL_166);
      goto continuation_174;

    case 156:
      current_block = (Rpc - LABEL_167);
      goto continuation_175;

    case 157:
      current_block = (Rpc - LABEL_168);
      goto continuation_176;

    case 158:
      current_block = (Rpc - LABEL_169);
      goto continuation_177;

    case 159:
      current_block = (Rpc - LABEL_170);
      goto continuation_178;

    case 160:
      current_block = (Rpc - LABEL_171);
      goto continuation_179;

    case 161:
      current_block = (Rpc - LABEL_172);
      goto continuation_180;

    case 162:
      current_block = (Rpc - LABEL_173);
      goto continuation_181;

    case 163:
      current_block = (Rpc - LABEL_174);
      goto continuation_182;

    case 164:
      current_block = (Rpc - LABEL_175);
      goto continuation_183;

    case 165:
      current_block = (Rpc - LABEL_176);
      goto continuation_184;

    case 166:
      current_block = (Rpc - LABEL_177);
      goto continuation_185;

    case 167:
      current_block = (Rpc - LABEL_178);
      goto continuation_186;

    case 168:
      current_block = (Rpc - LABEL_179);
      goto continuation_187;

    case 169:
      current_block = (Rpc - LABEL_180);
      goto continuation_188;

    case 170:
      current_block = (Rpc - LABEL_181);
      goto continuation_189;

    case 171:
      current_block = (Rpc - LABEL_182);
      goto continuation_190;

    case 172:
      current_block = (Rpc - LABEL_183);
      goto continuation_191;

    case 173:
      current_block = (Rpc - LABEL_184);
      goto continuation_192;

    case 174:
      current_block = (Rpc - LABEL_185);
      goto continuation_193;

    case 175:
      current_block = (Rpc - LABEL_186);
      goto continuation_194;

    case 176:
      current_block = (Rpc - LABEL_187);
      goto continuation_195;

    case 177:
      current_block = (Rpc - LABEL_188);
      goto continuation_196;

    case 178:
      current_block = (Rpc - LABEL_189);
      goto continuation_197;

    case 179:
      current_block = (Rpc - LABEL_190);
      goto continuation_198;

    case 180:
      current_block = (Rpc - LABEL_191);
      goto continuation_199;

    case 181:
      current_block = (Rpc - LABEL_192);
      goto continuation_200;

    case 182:
      current_block = (Rpc - LABEL_193);
      goto continuation_201;

    case 183:
      current_block = (Rpc - LABEL_194);
      goto continuation_202;

    case 184:
      current_block = (Rpc - LABEL_195);
      goto continuation_203;

    case 185:
      current_block = (Rpc - LABEL_196);
      goto continuation_204;

    case 186:
      current_block = (Rpc - LABEL_197);
      goto continuation_205;

    case 187:
      current_block = (Rpc - LABEL_198);
      goto continuation_206;

    case 188:
      current_block = (Rpc - LABEL_199);
      goto continuation_207;

    case 189:
      current_block = (Rpc - LABEL_200);
      goto label_228;

    case 190:
      current_block = (Rpc - LABEL_201);
      goto label_229;

    case 191:
      current_block = (Rpc - LABEL_202);
      goto label_230;

    case 192:
      current_block = (Rpc - LABEL_203);
      goto label_231;

    case 193:
      current_block = (Rpc - LABEL_204);
      goto label_232;

    case 194:
      current_block = (Rpc - LABEL_205);
      goto label_233;

    case 195:
      current_block = (Rpc - LABEL_206);
      goto label_234;

    case 196:
      current_block = (Rpc - LABEL_207);
      goto label_235;

    case 197:
      current_block = (Rpc - LABEL_208);
      goto label_236;

    case 198:
      current_block = (Rpc - LABEL_209);
      goto label_237;

    case 199:
      current_block = (Rpc - LABEL_210);
      goto label_242;

    case 200:
      current_block = (Rpc - LABEL_211);
      goto label_243;

    case 201:
      current_block = (Rpc - LABEL_212);
      goto expression_219;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_219)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_211])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_243)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_242)
  {
    static const short sections [] =
      {
	0,
	3,
	2,
	2,
	3,
	2,
	2,
	3,
	2,
	2,
	3,
	2,
	2,
	3,
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
	0,
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
	0,
	1,
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
	2,
	1,
	2,
	1,
	2,
	2,
	2,
	1,
	1,
	1,
	2,
	1,
	1,
	1,
	0,
	0,
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
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 156)
      goto label_241;
    blocks = (current_block [OBJECT_335]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_210])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_241)
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
  (Wrd67.pObj) = (& (Rhp [-2]));
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd67.pObj)));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd70.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd71.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_275;
  Wrd11 = Wrd15;

DEFLABEL (label_274)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0xf0f, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12])));
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

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_273;
  Wrd11 = Wrd15;

DEFLABEL (label_272)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_30);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_271;
  Wrd9 = Wrd13;

DEFLABEL (label_270)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_83]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_92]);
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
  (Wrd32.Obj) = (current_block [OBJECT_93]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_94]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_95]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_62);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_96]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_269;
  Wrd11 = Wrd15;

DEFLABEL (label_268)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_64);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_68);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_67])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_99]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_98]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_66);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_100]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_101]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_103]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_73);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_106]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_107]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_76);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_108]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_77);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_110]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_111]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_78);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_112]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_113]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_79);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_114]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_115]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_80);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_116]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_117]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_81);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_118]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_119]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_82);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_120]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_121]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_83);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_122]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_123]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_93)
  INTERRUPT_CHECK (27, LABEL_84);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_124]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_125]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_85);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_126]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_127]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_86);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_267;
  Wrd11 = Wrd15;

DEFLABEL (label_266)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_88);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_130]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_87);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_128]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_129]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_90);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_131]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_132]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_91);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_133]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_134]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_92);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_135]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_136]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_93);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_137]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_138]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_94);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_139]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_140]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_103)
  INTERRUPT_CHECK (27, LABEL_95);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_141]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_142]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_96);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_143]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_144]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_97);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_145]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_146]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_106)
  INTERRUPT_CHECK (27, LABEL_98);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_147]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_148]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_107)
  INTERRUPT_CHECK (27, LABEL_99);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_149]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_150]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_108)
  INTERRUPT_CHECK (27, LABEL_100);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_151]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_152]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_109)
  INTERRUPT_CHECK (27, LABEL_101);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_153]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_105]));

DEFLABEL (continuation_110)
  INTERRUPT_CHECK (27, LABEL_104);
  (Wrd9.Obj) = (current_block [OBJECT_157]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_158]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_159]), 2);

DEFLABEL (continuation_112)
  INTERRUPT_CHECK (27, LABEL_103);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_156]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_113)
  INTERRUPT_CHECK (27, LABEL_102);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_154]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_155]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_114)
  INTERRUPT_CHECK (27, LABEL_106);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_160]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_161]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_115)
  INTERRUPT_CHECK (27, LABEL_107);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_162]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_163]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_116)
  INTERRUPT_CHECK (27, LABEL_108);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_164]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_165]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_117)
  INTERRUPT_CHECK (27, LABEL_109);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_166]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_167]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_118)
  INTERRUPT_CHECK (27, LABEL_110);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_168]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_169]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_119)
  INTERRUPT_CHECK (27, LABEL_111);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_170]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_171]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_120)
  INTERRUPT_CHECK (27, LABEL_112);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_172]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_173]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_121)
  INTERRUPT_CHECK (27, LABEL_113);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_174]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_175]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_122)
  INTERRUPT_CHECK (27, LABEL_114);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_176]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_177]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_123)
  INTERRUPT_CHECK (27, LABEL_115);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_178]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_179]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_124)
  INTERRUPT_CHECK (27, LABEL_116);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_180]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_105]));

DEFLABEL (continuation_125)
  INTERRUPT_CHECK (27, LABEL_119);
  (Wrd9.Obj) = (current_block [OBJECT_157]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_158]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_159]), 2);

DEFLABEL (continuation_127)
  INTERRUPT_CHECK (27, LABEL_118);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_183]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_128)
  INTERRUPT_CHECK (27, LABEL_117);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_120]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_181]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_182]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_129)
  INTERRUPT_CHECK (27, LABEL_120);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_184]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_185]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_130)
  INTERRUPT_CHECK (27, LABEL_121);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_186]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_187]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_131)
  INTERRUPT_CHECK (27, LABEL_122);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_188]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_189]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_132)
  INTERRUPT_CHECK (27, LABEL_123);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_190]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_191]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_133)
  INTERRUPT_CHECK (27, LABEL_124);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_192]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_193]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_134)
  INTERRUPT_CHECK (27, LABEL_125);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_194]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_265;
  Wrd9 = Wrd13;

DEFLABEL (label_264)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35]));

DEFLABEL (continuation_135)
  INTERRUPT_CHECK (27, LABEL_126);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_195]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_196]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_136)
  INTERRUPT_CHECK (27, LABEL_128);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_197]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_198]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_137)
  INTERRUPT_CHECK (27, LABEL_129);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_199]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_200]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_138)
  INTERRUPT_CHECK (27, LABEL_130);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_201]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_202]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_139)
  INTERRUPT_CHECK (27, LABEL_131);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_132]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_203]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_204]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_140)
  INTERRUPT_CHECK (27, LABEL_132);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_205]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_206]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_141)
  INTERRUPT_CHECK (27, LABEL_133);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_134]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_207]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_208]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_142)
  INTERRUPT_CHECK (27, LABEL_134);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_135]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_209]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_210]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_143)
  INTERRUPT_CHECK (27, LABEL_135);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_136]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_211]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_212]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_144)
  INTERRUPT_CHECK (27, LABEL_136);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_137]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_213]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_214]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_145)
  INTERRUPT_CHECK (27, LABEL_137);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_138]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_215]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_216]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_146)
  INTERRUPT_CHECK (27, LABEL_138);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_139]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_217]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_218]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_147)
  INTERRUPT_CHECK (27, LABEL_139);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_140]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_219]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_220]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_148)
  INTERRUPT_CHECK (27, LABEL_140);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_141]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_221]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_222]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_149)
  INTERRUPT_CHECK (27, LABEL_141);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_142]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_223]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_224]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_150)
  INTERRUPT_CHECK (27, LABEL_142);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_143]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_225]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_226]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_151)
  INTERRUPT_CHECK (27, LABEL_143);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_144]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_227]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_228]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_152)
  INTERRUPT_CHECK (27, LABEL_144);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_145]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_229]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_230]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_153)
  INTERRUPT_CHECK (27, LABEL_145);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_146]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_231]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_232]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_154)
  INTERRUPT_CHECK (27, LABEL_146);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_147]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_233]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_234]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_155)
  INTERRUPT_CHECK (27, LABEL_147);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_148]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_235]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_236]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_156)
  INTERRUPT_CHECK (27, LABEL_148);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_149]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_237]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_238]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_157)
  INTERRUPT_CHECK (27, LABEL_149);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_150]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_239]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_240]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_158)
  INTERRUPT_CHECK (27, LABEL_150);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_151]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_241]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_242]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_159)
  INTERRUPT_CHECK (27, LABEL_151);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_152]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_243]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_244]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_160)
  INTERRUPT_CHECK (27, LABEL_152);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_153]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_245]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_246]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_161)
  INTERRUPT_CHECK (27, LABEL_153);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_154]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_247]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_248]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_162)
  INTERRUPT_CHECK (27, LABEL_154);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_155]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_249]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_250]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_163)
  INTERRUPT_CHECK (27, LABEL_155);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_156]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_251]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_252]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_164)
  INTERRUPT_CHECK (27, LABEL_156);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_157]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_253]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_254]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_165)
  INTERRUPT_CHECK (27, LABEL_157);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_158]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_255]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_256]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_166)
  INTERRUPT_CHECK (27, LABEL_158);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_159]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_257]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_258]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_167)
  INTERRUPT_CHECK (27, LABEL_159);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_160]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_259]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_260]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_168)
  INTERRUPT_CHECK (27, LABEL_160);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_161]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_261]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_262]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_169)
  INTERRUPT_CHECK (27, LABEL_161);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_162]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_263]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_264]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_170)
  INTERRUPT_CHECK (27, LABEL_162);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_163]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_265]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_266]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_171)
  INTERRUPT_CHECK (27, LABEL_163);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_164]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_267]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_268]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_172)
  INTERRUPT_CHECK (27, LABEL_164);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_165]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_269]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_270]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_173)
  INTERRUPT_CHECK (27, LABEL_165);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_166]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_271]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_272]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_174)
  INTERRUPT_CHECK (27, LABEL_166);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_167]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_273]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_274]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_175)
  INTERRUPT_CHECK (27, LABEL_167);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_168]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_275]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_276]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_176)
  INTERRUPT_CHECK (27, LABEL_168);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_169]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_277]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_278]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_177)
  INTERRUPT_CHECK (27, LABEL_169);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_170]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_279]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_280]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_178)
  INTERRUPT_CHECK (27, LABEL_170);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_171]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_281]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_282]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_179)
  INTERRUPT_CHECK (27, LABEL_171);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_172]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_283]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_284]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_180)
  INTERRUPT_CHECK (27, LABEL_172);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_173]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_285]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_286]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_181)
  INTERRUPT_CHECK (27, LABEL_173);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_174]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_287]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_288]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_182)
  INTERRUPT_CHECK (27, LABEL_174);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_289]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_290]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_183)
  INTERRUPT_CHECK (27, LABEL_175);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_176]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_291]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_292]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_184)
  INTERRUPT_CHECK (27, LABEL_176);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_177]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_293]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_294]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_185)
  INTERRUPT_CHECK (27, LABEL_177);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_178]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_295]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_296]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_186)
  INTERRUPT_CHECK (27, LABEL_178);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_179]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_297]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_298]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_187)
  INTERRUPT_CHECK (27, LABEL_179);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_180]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_299]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_188)
  INTERRUPT_CHECK (27, LABEL_180);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_181]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_300]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_189)
  INTERRUPT_CHECK (27, LABEL_181);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_182]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_301]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_190)
  INTERRUPT_CHECK (27, LABEL_182);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_183]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_302]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_191)
  INTERRUPT_CHECK (27, LABEL_183);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_184]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_303]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_192)
  INTERRUPT_CHECK (27, LABEL_184);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_185]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_304]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_305]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_193)
  INTERRUPT_CHECK (27, LABEL_185);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_186]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_306]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_307]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_194)
  INTERRUPT_CHECK (27, LABEL_186);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_187]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_308]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_309]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_195)
  INTERRUPT_CHECK (27, LABEL_187);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_188]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_310]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_311]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_196)
  INTERRUPT_CHECK (27, LABEL_188);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_189]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_312]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_313]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_197)
  INTERRUPT_CHECK (27, LABEL_189);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_190]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_314]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_315]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_198)
  INTERRUPT_CHECK (27, LABEL_190);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_191]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_316]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_317]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_199)
  INTERRUPT_CHECK (27, LABEL_191);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_192]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_318]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_319]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_200)
  INTERRUPT_CHECK (27, LABEL_192);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_193]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_320]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_321]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_201)
  INTERRUPT_CHECK (27, LABEL_193);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_194]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_322]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_323]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_202)
  INTERRUPT_CHECK (27, LABEL_194);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_195]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_324]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_325]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_203)
  INTERRUPT_CHECK (27, LABEL_195);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_196]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_326]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_327]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_204)
  INTERRUPT_CHECK (27, LABEL_196);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_197]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_328]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_329]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_205)
  INTERRUPT_CHECK (27, LABEL_197);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_198]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_330]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_331]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_206)
  INTERRUPT_CHECK (27, LABEL_198);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_199]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_332]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_333]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_207)
  INTERRUPT_CHECK (27, LABEL_199);
  (Wrd5.Obj) = (current_block [OBJECT_334]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_263;
  Wrd7 = Wrd11;

DEFLABEL (label_262)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_261;
  Wrd14 = Wrd18;

DEFLABEL (label_260)
  (Wrd20.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd27.Obj) = (current_block [OBJECT_0]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_259;
  Wrd28 = Wrd32;

DEFLABEL (label_258)
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_257;
  Wrd35 = Wrd39;

DEFLABEL (label_256)
  (Wrd41.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (Wrd45.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd50.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd53.Obj) = ((Wrd50.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_255;
  Wrd49 = Wrd53;

DEFLABEL (label_254)
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd57.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd60.Obj) = ((Wrd57.pObj) [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd61.uLng) == 50)
    goto label_253;
  Wrd56 = Wrd60;

DEFLABEL (label_252)
  (Wrd62.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd62.Obj);
  (Wrd65.pObj) = (& (Rhp [-2]));
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd65.pObj)));
  (Wrd66.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd63.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (Wrd68.pObj) = (& (Rhp [-2]));
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd68.pObj)));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd71.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd74.Obj) = ((Wrd71.pObj) [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd75.uLng) == 50)
    goto label_251;
  Wrd70 = Wrd74;

DEFLABEL (label_250)
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd78.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd81.Obj) = ((Wrd78.pObj) [0]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if ((Wrd82.uLng) == 50)
    goto label_249;
  Wrd77 = Wrd81;

DEFLABEL (label_248)
  (Wrd83.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd77.Obj);
  (* (Rhp++)) = (Wrd83.Obj);
  (Wrd86.pObj) = (& (Rhp [-2]));
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd86.pObj)));
  (Wrd87.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd84.Obj);
  (* (Rhp++)) = (Wrd87.Obj);
  (Wrd89.pObj) = (& (Rhp [-2]));
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd89.pObj)));
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd92.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd95.Obj) = ((Wrd92.pObj) [0]);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if ((Wrd96.uLng) == 50)
    goto label_247;
  Wrd91 = Wrd95;

DEFLABEL (label_246)
  (* (--Rsp)) = (Wrd91.Obj);
  (Wrd99.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd102.Obj) = ((Wrd99.pObj) [0]);
  (Wrd103.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if ((Wrd103.uLng) == 50)
    goto label_245;
  Wrd98 = Wrd102;

DEFLABEL (label_244)
  (Wrd104.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd98.Obj);
  (* (Rhp++)) = (Wrd104.Obj);
  (Wrd107.pObj) = (& (Rhp [-2]));
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd107.pObj)));
  (Wrd108.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd105.Obj);
  (* (Rhp++)) = (Wrd108.Obj);
  (Wrd111.pObj) = (& (Rhp [-2]));
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd111.pObj)));
  (Rsp [2]) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (label_245)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_209])), (Wrd99.pObj));

DEFLABEL (label_237)
  (Wrd98.Obj) = Rvl;
  goto label_244;

DEFLABEL (label_247)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_208])), (Wrd92.pObj));

DEFLABEL (label_236)
  (Wrd91.Obj) = Rvl;
  goto label_246;

DEFLABEL (label_249)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_207])), (Wrd78.pObj));

DEFLABEL (label_235)
  (Wrd77.Obj) = Rvl;
  goto label_248;

DEFLABEL (label_251)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_206])), (Wrd71.pObj));

DEFLABEL (label_234)
  (Wrd70.Obj) = Rvl;
  goto label_250;

DEFLABEL (label_253)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_205])), (Wrd57.pObj));

DEFLABEL (label_233)
  (Wrd56.Obj) = Rvl;
  goto label_252;

DEFLABEL (label_255)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_204])), (Wrd50.pObj));

DEFLABEL (label_232)
  (Wrd49.Obj) = Rvl;
  goto label_254;

DEFLABEL (label_257)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_203])), (Wrd36.pObj));

DEFLABEL (label_231)
  (Wrd35.Obj) = Rvl;
  goto label_256;

DEFLABEL (label_259)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_202])), (Wrd29.pObj));

DEFLABEL (label_230)
  (Wrd28.Obj) = Rvl;
  goto label_258;

DEFLABEL (label_261)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_201])), (Wrd15.pObj));

DEFLABEL (label_229)
  (Wrd14.Obj) = Rvl;
  goto label_260;

DEFLABEL (label_263)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_200])), (Wrd8.pObj));

DEFLABEL (label_228)
  (Wrd7.Obj) = Rvl;
  goto label_262;

DEFLABEL (label_265)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_127])), (Wrd10.pObj));

DEFLABEL (label_227)
  (Wrd9.Obj) = Rvl;
  goto label_264;

DEFLABEL (label_267)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_89])), (Wrd12.pObj));

DEFLABEL (label_226)
  (Wrd11.Obj) = Rvl;
  goto label_266;

DEFLABEL (label_269)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65])), (Wrd12.pObj));

DEFLABEL (label_223)
  (Wrd11.Obj) = Rvl;
  goto label_268;

DEFLABEL (label_271)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34])), (Wrd10.pObj));

DEFLABEL (label_222)
  (Wrd9.Obj) = Rvl;
  goto label_270;

DEFLABEL (label_273)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31])), (Wrd12.pObj));

DEFLABEL (label_221)
  (Wrd11.Obj) = Rvl;
  goto label_272;

DEFLABEL (label_275)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd12.pObj));

DEFLABEL (label_220)
  (Wrd11.Obj) = Rvl;
  goto label_274;

DEFLABEL (Z__make_port_type_239)
  CLOSURE_HEADER (LABEL_12);

DEFLABEL (Z__make_port_type_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd23.Obj) = (MAKE_OBJECT (0, 15));
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  (Wrd14.Obj) = (Rsp [8]);
  (Wrd15.Obj) = (Rsp [9]);
  (Wrd16.Obj) = (Rsp [10]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd9.Obj) = (Rsp [11]);
  (Wrd10.Obj) = (Rsp [12]);
  (Wrd11.Obj) = (Rsp [13]);
  (Wrd12.Obj) = (Rsp [14]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd7.pObj) = (& (Rhp [-16]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [15]));
  goto pop_return;

DEFLABEL (Z__make_port_240)
  CLOSURE_HEADER (LABEL_67);

DEFLABEL (Z__make_port_79)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_102]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_279;
  Wrd9 = Wrd13;

DEFLABEL (label_278)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_72]));

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_70);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_105]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_277;
  Wrd9 = Wrd13;

DEFLABEL (label_276)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_72]));

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_74);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd16.Obj) = (MAKE_OBJECT (0, 8));
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd9.pObj) = (& (Rhp [-9]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_277)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75])), (Wrd10.pObj));

DEFLABEL (label_225)
  (Wrd9.Obj) = Rvl;
  goto label_276;

DEFLABEL (label_279)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_71])), (Wrd10.pObj));

DEFLABEL (label_224)
  (Wrd9.Obj) = Rvl;
  goto label_278;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_port_so_3ee7bbfe21c54d89 [156] =
  {
    { "port_so_code_1", 1, port_so_code_1 },
    { "port_so_code_2", 1, port_so_code_2 },
    { "port_so_code_3", 1, port_so_code_3 },
    { "port_so_code_4", 1, port_so_code_4 },
    { "port_so_code_5", 1, port_so_code_5 },
    { "port_so_code_6", 1, port_so_code_6 },
    { "port_so_code_7", 1, port_so_code_7 },
    { "port_so_code_8", 1, port_so_code_8 },
    { "port_so_code_9", 1, port_so_code_9 },
    { "port_so_code_10", 1, port_so_code_10 },
    { "port_so_code_11", 1, port_so_code_11 },
    { "port_so_code_12", 1, port_so_code_12 },
    { "port_so_code_13", 1, port_so_code_13 },
    { "port_so_code_14", 1, port_so_code_14 },
    { "port_so_code_15", 1, port_so_code_15 },
    { "port_so_code_16", 1, port_so_code_16 },
    { "port_so_code_17", 4, port_so_code_17 },
    { "port_so_code_18", 5, port_so_code_18 },
    { "port_so_code_19", 3, port_so_code_19 },
    { "port_so_code_20", 1, port_so_code_20 },
    { "port_so_code_21", 1, port_so_code_21 },
    { "port_so_code_22", 3, port_so_code_22 },
    { "port_so_code_23", 3, port_so_code_23 },
    { "port_so_code_24", 4, port_so_code_24 },
    { "port_so_code_25", 8, port_so_code_25 },
    { "port_so_code_26", 12, port_so_code_26 },
    { "port_so_code_27", 5, port_so_code_27 },
    { "port_so_code_28", 2, port_so_code_28 },
    { "port_so_code_29", 45, port_so_code_29 },
    { "port_so_code_30", 13, port_so_code_30 },
    { "port_so_code_31", 20, port_so_code_31 },
    { "port_so_code_32", 2, port_so_code_32 },
    { "port_so_code_33", 12, port_so_code_33 },
    { "port_so_code_34", 14, port_so_code_34 },
    { "port_so_code_35", 9, port_so_code_35 },
    { "port_so_code_36", 1, port_so_code_36 },
    { "port_so_code_37", 9, port_so_code_37 },
    { "port_so_code_38", 20, port_so_code_38 },
    { "port_so_code_39", 2, port_so_code_39 },
    { "port_so_code_40", 6, port_so_code_40 },
    { "port_so_code_41", 28, port_so_code_41 },
    { "port_so_code_42", 1, port_so_code_42 },
    { "port_so_code_43", 1, port_so_code_43 },
    { "port_so_code_44", 1, port_so_code_44 },
    { "port_so_code_45", 1, port_so_code_45 },
    { "port_so_code_46", 1, port_so_code_46 },
    { "port_so_code_47", 1, port_so_code_47 },
    { "port_so_code_48", 1, port_so_code_48 },
    { "port_so_code_49", 1, port_so_code_49 },
    { "port_so_code_50", 1, port_so_code_50 },
    { "port_so_code_51", 1, port_so_code_51 },
    { "port_so_code_52", 1, port_so_code_52 },
    { "port_so_code_53", 1, port_so_code_53 },
    { "port_so_code_54", 1, port_so_code_54 },
    { "port_so_code_55", 1, port_so_code_55 },
    { "port_so_code_56", 1, port_so_code_56 },
    { "port_so_code_57", 1, port_so_code_57 },
    { "port_so_code_58", 4, port_so_code_58 },
    { "port_so_code_59", 2, port_so_code_59 },
    { "port_so_code_60", 3, port_so_code_60 },
    { "port_so_code_61", 4, port_so_code_61 },
    { "port_so_code_62", 3, port_so_code_62 },
    { "port_so_code_63", 3, port_so_code_63 },
    { "port_so_code_64", 3, port_so_code_64 },
    { "port_so_code_65", 1, port_so_code_65 },
    { "port_so_code_66", 5, port_so_code_66 },
    { "port_so_code_67", 2, port_so_code_67 },
    { "port_so_code_68", 2, port_so_code_68 },
    { "port_so_code_69", 4, port_so_code_69 },
    { "port_so_code_70", 6, port_so_code_70 },
    { "port_so_code_71", 2, port_so_code_71 },
    { "port_so_code_72", 2, port_so_code_72 },
    { "port_so_code_73", 2, port_so_code_73 },
    { "port_so_code_74", 2, port_so_code_74 },
    { "port_so_code_75", 2, port_so_code_75 },
    { "port_so_code_76", 2, port_so_code_76 },
    { "port_so_code_77", 2, port_so_code_77 },
    { "port_so_code_78", 2, port_so_code_78 },
    { "port_so_code_79", 2, port_so_code_79 },
    { "port_so_code_80", 2, port_so_code_80 },
    { "port_so_code_81", 2, port_so_code_81 },
    { "port_so_code_82", 6, port_so_code_82 },
    { "port_so_code_83", 2, port_so_code_83 },
    { "port_so_code_84", 2, port_so_code_84 },
    { "port_so_code_85", 2, port_so_code_85 },
    { "port_so_code_86", 2, port_so_code_86 },
    { "port_so_code_87", 3, port_so_code_87 },
    { "port_so_code_88", 3, port_so_code_88 },
    { "port_so_code_89", 7, port_so_code_89 },
    { "port_so_code_90", 5, port_so_code_90 },
    { "port_so_code_91", 3, port_so_code_91 },
    { "port_so_code_92", 2, port_so_code_92 },
    { "port_so_code_93", 2, port_so_code_93 },
    { "port_so_code_94", 5, port_so_code_94 },
    { "port_so_code_95", 2, port_so_code_95 },
    { "port_so_code_96", 3, port_so_code_96 },
    { "port_so_code_97", 2, port_so_code_97 },
    { "port_so_code_98", 3, port_so_code_98 },
    { "port_so_code_99", 2, port_so_code_99 },
    { "port_so_code_100", 2, port_so_code_100 },
    { "port_so_code_101", 4, port_so_code_101 },
    { "port_so_code_102", 4, port_so_code_102 },
    { "port_so_code_103", 6, port_so_code_103 },
    { "port_so_code_104", 4, port_so_code_104 },
    { "port_so_code_105", 2, port_so_code_105 },
    { "port_so_code_106", 2, port_so_code_106 },
    { "port_so_code_107", 2, port_so_code_107 },
    { "port_so_code_108", 2, port_so_code_108 },
    { "port_so_code_109", 4, port_so_code_109 },
    { "port_so_code_110", 4, port_so_code_110 },
    { "port_so_code_111", 5, port_so_code_111 },
    { "port_so_code_112", 3, port_so_code_112 },
    { "port_so_code_113", 1, port_so_code_113 },
    { "port_so_code_114", 3, port_so_code_114 },
    { "port_so_code_115", 1, port_so_code_115 },
    { "port_so_code_116", 3, port_so_code_116 },
    { "port_so_code_117", 1, port_so_code_117 },
    { "port_so_code_118", 3, port_so_code_118 },
    { "port_so_code_119", 1, port_so_code_119 },
    { "port_so_code_120", 2, port_so_code_120 },
    { "port_so_code_121", 3, port_so_code_121 },
    { "port_so_code_122", 3, port_so_code_122 },
    { "port_so_code_123", 3, port_so_code_123 },
    { "port_so_code_124", 3, port_so_code_124 },
    { "port_so_code_125", 3, port_so_code_125 },
    { "port_so_code_126", 3, port_so_code_126 },
    { "port_so_code_127", 3, port_so_code_127 },
    { "port_so_code_128", 3, port_so_code_128 },
    { "port_so_code_129", 2, port_so_code_129 },
    { "port_so_code_130", 2, port_so_code_130 },
    { "port_so_code_131", 1, port_so_code_131 },
    { "port_so_code_132", 2, port_so_code_132 },
    { "port_so_code_133", 2, port_so_code_133 },
    { "port_so_code_134", 1, port_so_code_134 },
    { "port_so_code_135", 2, port_so_code_135 },
    { "port_so_code_136", 2, port_so_code_136 },
    { "port_so_code_137", 1, port_so_code_137 },
    { "port_so_code_138", 2, port_so_code_138 },
    { "port_so_code_139", 2, port_so_code_139 },
    { "port_so_code_140", 1, port_so_code_140 },
    { "port_so_code_141", 10, port_so_code_141 },
    { "port_so_code_142", 2, port_so_code_142 },
    { "port_so_code_143", 4, port_so_code_143 },
    { "port_so_code_144", 8, port_so_code_144 },
    { "port_so_code_145", 2, port_so_code_145 },
    { "port_so_code_146", 4, port_so_code_146 },
    { "port_so_code_147", 8, port_so_code_147 },
    { "port_so_code_148", 2, port_so_code_148 },
    { "port_so_code_149", 4, port_so_code_149 },
    { "port_so_code_150", 8, port_so_code_150 },
    { "port_so_code_151", 2, port_so_code_151 },
    { "port_so_code_152", 4, port_so_code_152 },
    { "port_so_code_153", 8, port_so_code_153 },
    { "port_so_code_154", 2, port_so_code_154 },
    { "port_so_code_155", 4, port_so_code_155 },
    { "port_so_code_156", 8, port_so_code_156 }
  };

int
decl_port_so_3ee7bbfe21c54d89 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_port_so_3ee7bbfe21c54d89);
  return (0);
}

DECLARE_COMPILED_CODE ("port.so", 202, decl_port_so_3ee7bbfe21c54d89, port_so_3ee7bbfe21c54d89)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_port_so_data_3ee7bbfe21c54d89 [16672] =
  "\x82\x06\xfe\x01\xfb\x22\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\xb9"
  "\x81\x22\x29\x21\x9e\x2b\xba\x1d\xb0\x82\x88\xb1\x82\x22\x29\x21"
  "\x9e\x2b\xbb\x1d\xb0\x83\x88\xb1\x83\x22\x29\x21\x9e\x2b\xbc\x1d"
  "\xb0\x84\x88\xb1\x84\x22\x29\x21\x9e\x2b\xbd\x1d\xb0\x85\x88\xb1"
  "\x85\x22\x29\x21\x9e\x2b\xbe\x1d\xb0\x86\x88\xb1\x86\x22\x29\x21"
  "\x9e\x2b\xbf\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1"
  "\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1"
  "\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x1d\x82\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1d\x83\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\xb1\x80\xc1\x1c\x0e\x1c\x24\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x0d\x0d\x02\xb1"
  "\x85\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x85\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\xb1\x85\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb1\x02\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x02\xb1"
  "\x85\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x83\xb1\x82\x0d\x1c\x0d\x24\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x08"
  "\xc1\x1c\x83\xb1\x82\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x82"
  "\xb1\x83\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x08\x1b\x06\x07\x85\xc2\x02\x1b\x0c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x24\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x08\x1b\x0d\x1c\x0d"
  "\x1c\x24\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1b\x08\x1b\x1b\x24\x28\x1b\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\x1b\x1b\x0c\x1b\x1b\x1b\x0d\x1c\x24\x28\x0d\x1c\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x80\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1b\x1b\x1b\x0d\x1c\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x07\x1b\x84\x1b\x1b\x1b\x1b\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\xb1\x84\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb1\x84\x1d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\x0d\x1b\x1b\x1b\x80\x0f\xb1\x85\x1b\x1b\x1b\x1b\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x08\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\xb1\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x82"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x83\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\xb1\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\xb1\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x86"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x81\x22\x29\x21\x9f\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1d\x82\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1d\x83\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x84"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x85\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x86\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\xb1\x80\x1b\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x81\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1d\x81\x0d\x1c\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb1\x82\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x82\x0d\x1c\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb1\x83\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x83\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1"
  "\x81\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb1\x81\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x1c\x0d\x08"
  "\x1b\x1b\x08\x89\x0d\x1c\x1b\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb1\x84\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb1\x85\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb1\x86\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x28\x1b\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x28\x1b\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x28"
  "\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1b"
  "\x0d\x08\x0d\x1c\x1b\x08\x89\x1b\x1b\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x02\xb1\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x85\xb1\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x02\xb1\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x02\xb1\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1c\x0d\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x0d\x0d"
  "\x0d\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x1b\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x28"
  "\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0d"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\xb1\x81\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\xb1\x81\x0d\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb1\x86\x0d\x1c"
  "\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc2\x1b\x1d\xb1\x86\x0d\x1c\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1b\xb1\x86\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1d\xb1\x86\x0d\x1c\x28\x1b\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\xb1\x02\x28"
  "\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\xb1"
  "\x02\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\xb1\x02\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\xb1\x02\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\x85\xb1\x81\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x02\xb1\x81\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x02\x85\xb1\x81\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x02\x88\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1c\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1c\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x1c\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x28\x0d\x1c\x23\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x28\x1b\x23\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x28\x1b\x23"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x28"
  "\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x1b\x28"
  "\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\x0d\x1c\x1b\x25\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d"
  "\x1c\x1b\x25\x1b\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c\x1b\x25\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x0d\x1c\x1b\x25\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c\x1b\x25\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x0d\x1c\x1b\x25\x1b\x24\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c\x1b\x25"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c\x1b\x25\x1b\x24\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c"
  "\x1b\x25\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\xb8\x1b\x25\x1b\x24\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x0d\xb0\x1b"
  "\x2a\x1b\x1b\x2a\x0d\x1c\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1c"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1c\x1b\x2a\x1b\x1b\x2a\x1b"
  "\x1b\x2a\x0d\x1c\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1c\x1b\x2a"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a"
  "\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b"
  "\xb1\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x0d\x1b\x2a\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x1b\x1b\x2a\xc2\x02\x02\x0d\x1b\x1b\x2a\x1b\x2a\x1b"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x83\x0d\x1b\x2a\x86\x0d\x1b\x2a\x1b\x1b\x1b"
  "\x2a\x0d\x1c\x0c\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x08\x8e\x1b\x2a\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b"
  "\x1b\x1b\x1b\x1b\x08\x8b\x1b\x1b\x1b\x1b\x1b\x1b\x08\x8c\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x2a\x1b\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\xb7\x2a\x0d\xb6\x2a\x0d"
  "\xb5\x2a\x0d\xb4\x2a\x0d\xb3\x2a\x1b\x0d\xb2\x2a\xc3\x0d\x1c\x0c"
  "\x0d\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x08\x14"
  "\x08\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
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
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x02\x53\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66"
  "\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72"
  "\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x70\x6f\x72\x74"
  "\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0c\x25\x72\x65\x63\x6f"
  "\x72\x64\x2d\x72\x65\x66\xcb\x01\x04\x83\x04\x03\x02\xcc\x01\x04"
  "\x83\x04\x03\x02\xcd\x01\x04\x83\x04\x03\x02\xce\x01\x04\x83\x04"
  "\x03\x02\xcf\x01\x04\x83\x04\x03\x02\xd0\x01\x04\x83\x04\x03\x02"
  "\x08\x08\xd1\x01\x04\x83\x04\x03\x09\x02\x09\x09\xd2\x01\x04\x83"
  "\x04\x03\x0a\x02\x0a\x0a\xd3\x01\x04\x83\x04\x03\x0b\x02\x0b\x0b"
  "\xd4\x01\x04\x83\x04\x03\x0c\x02\x0c\x0c\xd5\x01\x04\x83\x04\x03"
  "\x0d\x02\x0d\x0d\xd6\x01\x04\x83\x04\x03\x0e\x02\x0e\x0e\xd7\x01"
  "\x04\x83\x04\x03\x0f\x02\x0f\x0f\xd8\x01\x04\x83\x04\x03\x10\x02"
  "\x10\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x11\x02"
  "\xd9\x01\x04\x84\x06\x03\x12\x02\x11\x11\x02\xda\x01\x04\x84\x06"
  "\x03\x13\x02\x12\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65\x6e"
  "\x67\x74\x68\x14\x07\x2e\x74\x61\x67\x2e\x31\x15\x02\xde\x01\x0a"
  "\x81\x85\x02\xdd\x01\x08\x81\x83\x02\xdc\x01\x06\x81\x83\x02\xdb"
  "\x01\x04\x83\x04\x09\x12\x16\x02\x13\x0e\x69\x2f\x6f\x2d\x70\x6f"
  "\x72\x74\x2d\x74\x79\x70\x65\x10\x69\x6e\x70\x75\x74\x2d\x70\x6f"
  "\x72\x74\x2d\x74\x79\x70\x65\x11\x6f\x75\x74\x70\x75\x74\x2d\x70"
  "\x6f\x72\x74\x2d\x74\x79\x70\x65\x0a\x70\x6f\x72\x74\x2d\x74\x79"
  "\x70\x65\x0a\x04\x19\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x75\x6e"
  "\x70\x61\x72\x73\x65\x72\x2d\x6d\x65\x74\x68\x6f\x64\x17\x02\xe3"
  "\x01\x0c\x81\x85\x02\xe2\x01\x0a\x81\x89\x02\xe1\x01\x08\x81\x89"
  "\x02\xe0\x01\x06\x81\x89\x02\xdf\x01\x04\x84\x06\x0b\x18\x18\x02"
  "\x14\x0a\x70\x6f\x72\x74\x20\x74\x79\x70\x65\x03\x0b\x70\x6f\x72"
  "\x74\x2d\x74\x79\x70\x65\x3f\x19\x05\x1a\x65\x72\x72\x6f\x72\x3a"
  "\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d"
  "\x65\x6e\x74\x1a\x03\xe6\x01\x08\x81\x85\x02\xe5\x01\x06\x81\x85"
  "\x02\xe4\x01\x04\x84\x06\x07\x10\x1b\x02\x15\xe7\x01\x04\x83\x04"
  "\x03\x1c\x02\x16\x0a\xe8\x01\x04\x83\x04\x03\x1d\x02\x17\x03\x19"
  "\x02\xeb\x01\x08\x81\x83\x02\xea\x01\x06\x81\x83\x02\xe9\x01\x04"
  "\x83\x04\x07\x10\x1e\x02\x18\x0a\x03\x19\x02\xee\x01\x08\x81\x83"
  "\x02\xed\x01\x06\x81\x83\x02\xec\x01\x04\x83\x04\x07\x10\x1f\x02"
  "\x19\x0a\x03\x19\x02\xf2\x01\x0a\x81\x83\x02\xf1\x01\x08\x81\x83"
  "\x02\xf0\x01\x06\x81\x83\x02\xef\x01\x04\x83\x04\x09\x13\x20\x02"
  "\x1a\x1a\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x2f\x6f\x70\x65\x72"
  "\x61\x74\x69\x6f\x6e\x2d\x6e\x61\x6d\x65\x73\x21\x04\x63\x61\x72"
  "\x02\x04\x14\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x70\x6f\x72"
  "\x74\x2d\x74\x79\x70\x65\x22\x04\x04\x6d\x61\x70\x23\x04\x07\x61"
  "\x70\x70\x65\x6e\x64\x24\x04\xfa\x01\x12\x81\x85\x02\xf9\x01\x10"
  "\x81\x89\x02\xf8\x01\x0e\x81\x87\x02\xf7\x01\x0c\x81\x83\x02\xf6"
  "\x01\x0a\x81\x87\x02\xf5\x01\x08\x81\x85\x02\xf4\x01\x06\x81\x83"
  "\x02\xf3\x01\x04\x83\x04\x11\x21\x25\x02\x1b\x04\x63\x61\x72\x26"
  "\x04\x63\x64\x72\x27\x15\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x2f"
  "\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x73\x28\x04\x22\x04\x23\x04"
  "\x08\x61\x70\x70\x65\x6e\x64\x21\x04\x86\x02\x1a\x81\x85\x02\x85"
  "\x02\x18\x81\x83\x02\x84\x02\x16\x83\x04\x83\x02\x14\x81\x85\x02"
  "\x82\x02\x12\x81\x85\x02\x81\x02\x10\x81\x83\x02\x80\x02\x0e\x83"
  "\x04\xff\x01\x0c\x81\x87\x02\xfe\x01\x0a\x81\x83\x02\xfd\x01\x08"
  "\x81\x85\x02\xfc\x01\x06\x81\x83\x02\xfb\x01\x04\x83\x04\x19\x2a"
  "\x23\x02\x1c\x27\x04\x05\x61\x73\x73\x71\x29\x02\x8b\x02\x0c\x81"
  "\x85\x02\x8a\x02\x0a\x81\x85\x02\x89\x02\x08\x81\x87\x02\x88\x02"
  "\x06\x81\x89\x02\x87\x02\x04\x84\x06\x0b\x15\x2a\x02\x1d\x14\x70"
  "\x6f\x72\x74\x2d\x74\x79\x70\x65\x2f\x6f\x70\x65\x72\x61\x74\x69"
  "\x6f\x6e\x2b\x04\x22\x04\x15\x70\x6f\x72\x74\x2d\x74\x79\x70\x65"
  "\x2f\x25\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2c\x03\x8d\x02\x06"
  "\x81\x85\x02\x8c\x02\x04\x84\x06\x05\x0e\x2d\x02\x1e\x0b\x66\x72"
  "\x65\x73\x68\x2d\x6c\x69\x6e\x65\x2e\x1b\x64\x69\x73\x63\x72\x65"
  "\x74\x69\x6f\x6e\x61\x72\x79\x2d\x66\x6c\x75\x73\x68\x2d\x6f\x75"
  "\x74\x70\x75\x74\x2f\x0d\x66\x6c\x75\x73\x68\x2d\x6f\x75\x74\x70"
  "\x75\x74\x30\x0c\x6c\x69\x6e\x65\x2d\x73\x74\x61\x72\x74\x3f\x31"
  "\x0c\x63\x68\x61\x72\x2d\x72\x65\x61\x64\x79\x3f\x32\x0c\x75\x6e"
  "\x72\x65\x61\x64\x2d\x63\x68\x61\x72\x33\x0a\x70\x65\x65\x6b\x2d"
  "\x63\x68\x61\x72\x34\x0f\x72\x65\x61\x64\x2d\x73\x75\x62\x73\x74"
  "\x72\x69\x6e\x67\x35\x0a\x72\x65\x61\x64\x2d\x63\x68\x61\x72\x36"
  "\x10\x77\x72\x69\x74\x65\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67"
  "\x37\x0b\x77\x72\x69\x74\x65\x2d\x63\x68\x61\x72\x38\x27\x0d\x6f"
  "\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x1e\x26\x10\x6f\x70"
  "\x65\x72\x61\x74\x69\x6f\x6e\x73\x20\x6c\x69\x73\x74\x0f\x6d\x61"
  "\x6b\x65\x2d\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x39\x21\x70\x72"
  "\x6f\x76\x69\x64\x65\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x69\x6e"
  "\x70\x75\x74\x2d\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x73\x3a\x18"
  "\x70\x72\x6f\x76\x69\x64\x65\x2d\x6f\x75\x74\x70\x75\x74\x2d\x66"
  "\x65\x61\x74\x75\x72\x65\x73\x3b\x17\x70\x72\x6f\x76\x69\x64\x65"
  "\x2d\x69\x6e\x70\x75\x74\x2d\x66\x65\x61\x74\x75\x72\x65\x73\x3c"
  "\x22\x70\x72\x6f\x76\x69\x64\x65\x2d\x64\x65\x66\x61\x75\x6c\x74"
  "\x2d\x6f\x75\x74\x70\x75\x74\x2d\x6f\x70\x65\x72\x61\x74\x69\x6f"
  "\x6e\x73\x3d\x05\x04\x0e\x6c\x69\x73\x74\x2d\x6f\x66\x2d\x74\x79"
  "\x70\x65\x3f\x05\x1a\x04\x16\x70\x61\x72\x73\x65\x2d\x6f\x70\x65"
  "\x72\x61\x74\x69\x6f\x6e\x73\x2d\x6c\x69\x73\x74\x3e\x04\x22\x03"
  "\x0b\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x04\x29\x10\x10\x25"
  "\x6d\x61\x6b\x65\x2d\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x3f\x08"
  "\xba\x02\x5c\x81\x9d\x02\xb9\x02\x5a\x81\x9d\x02\xb8\x02\x58\x81"
  "\x9d\x02\xb7\x02\x56\x81\x9d\x02\xb6\x02\x54\x81\x95\x02\xb5\x02"
  "\x52\x81\x93\x02\xb4\x02\x50\x81\x91\x02\xb3\x02\x4e\x81\x8f\x02"
  "\xb2\x02\x4c\x83\x04\xb1\x02\x4a\x81\x85\x02\xb0\x02\x48\x81\x8b"
  "\x02\xaf\x02\x46\x81\x89\x02\xae\x02\x44\x81\x87\x02\xad\x02\x42"
  "\x81\x8d\x02\xac\x02\x40\x81\x85\x02\xab\x02\x3e\x81\x8d\x02\xaa"
  "\x02\x3c\x81\x85\x02\xa9\x02\x3a\x81\x8d\x02\xa8\x02\x38\x81\x89"
  "\x02\xa7\x02\x36\x81\x8b\x02\xa6\x02\x34\x81\x87\x02\xa5\x02\x32"
  "\x81\x89\x02\xa4\x02\x30\x81\x85\x02\xa3\x02\x2e\x81\x8b\x02\xa2"
  "\x02\x2c\x81\x8f\x02\xa1\x02\x2a\x81\x8b\x02\xa0\x02\x28\x81\x89"
  "\x02\x9f\x02\x26\x81\x89\x02\x9e\x02\x24\x81\x87\x02\x9d\x02\x22"
  "\x81\x87\x02\x9c\x02\x20\x81\x83\x02\x9b\x02\x1e\x81\x83\x02\x9a"
  "\x02\x1c\x81\x83\x02\x99\x02\x1a\x81\x85\x02\x98\x02\x18\x81\x85"
  "\x02\x97\x02\x16\x81\x85\x02\x96\x02\x14\x81\x83\x02\x95\x02\x12"
  "\x81\x83\x02\x94\x02\x10\x81\x85\x02\x93\x02\x0e\x83\x04\x92\x02"
  "\x0c\x81\x83\x02\x91\x02\x0a\x81\x85\x02\x90\x02\x08\x81\x85\x02"
  "\x8f\x02\x06\x81\x85\x02\x8e\x02\x04\x84\x06\x5b\x87\x01\x40\x02"
  "\x1f\x26\x36\x38\x20\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x6f\x75"
  "\x74\x70\x75\x74\x2d\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2d\x6e"
  "\x61\x6d\x65\x73\x41\x1f\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x69"
  "\x6e\x70\x75\x74\x2d\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2d\x6e"
  "\x61\x6d\x65\x73\x42\x03\x03\x18\x70\x61\x72\x73\x65\x2d\x6f\x70"
  "\x65\x72\x61\x74\x69\x6f\x6e\x73\x2d\x6c\x69\x73\x74\x2d\x31\x43"
  "\x04\x29\x04\x24\x03\x28\x04\x16\x64\x65\x6c\x65\x74\x65\x2d\x6d"
  "\x61\x74\x63\x68\x69\x6e\x67\x2d\x69\x74\x65\x6d\x73\x04\x05\x6d"
  "\x65\x6d\x71\x24\x07\xc7\x02\x1c\x81\x89\x02\xc6\x02\x1a\x81\x85"
  "\x02\xc5\x02\x18\x81\x8d\x02\xc4\x02\x16\x81\x8d\x02\xc3\x02\x14"
  "\x81\x8b\x02\xc2\x02\x12\x81\x89\x02\xc1\x02\x10\x81\x85\x02\xc0"
  "\x02\x0e\x81\x8b\x02\xbf\x02\x0c\x81\x8b\x02\xbe\x02\x0a\x81\x89"
  "\x02\xbd\x02\x08\x81\x87\x02\xbc\x02\x06\x84\x06\xbb\x02\x04\x81"
  "\x85\x02\x1b\x32\x44\x02\x20\x27\x26\x42\x41\x03\x04\x24\x03\x09"
  "\x72\x65\x76\x65\x72\x73\x65\x21\x03\xdb\x02\x2a\x81\x85\x02\xda"
  "\x02\x28\x81\x87\x02\xd9\x02\x26\x81\x89\x02\xd8\x02\x24\x81\x8d"
  "\x02\xd7\x02\x22\x81\x8d\x02\xd6\x02\x20\x81\x8b\x02\xd5\x02\x1e"
  "\x81\x89\x02\xd4\x02\x1c\x81\x89\x02\xd3\x02\x1a\x81\x89\x02\xd2"
  "\x02\x18\x81\x87\x02\xd1\x02\x16\x81\x8d\x02\xd0\x02\x14\x81\x8d"
  "\x02\xcf\x02\x12\x81\x8b\x02\xce\x02\x10\x81\x89\x02\xcd\x02\x0e"
  "\x81\x89\x02\xcc\x02\x0c\x81\x87\x02\xcb\x02\x0a\x81\x87\x02\xca"
  "\x02\x08\x81\x87\x02\xc9\x02\x06\x81\x87\x02\xc8\x02\x04\x83\x04"
  "\x29\x37\x24\x02\x21\x02\x1c\x4d\x69\x73\x73\x69\x6e\x67\x20\x72"
  "\x65\x71\x75\x69\x72\x65\x64\x20\x6f\x70\x65\x72\x61\x74\x69\x6f"
  "\x6e\x3a\x04\x06\x65\x72\x72\x6f\x72\x45\x02\xdd\x02\x06\x81\x85"
  "\x02\xdc\x02\x04\x84\x06\x05\x0d\x46\x02\x22\x32\x34\x38\x4d\x75"
  "\x73\x74\x20\x70\x72\x6f\x76\x69\x64\x65\x20\x62\x6f\x74\x68\x20"
  "\x55\x4e\x52\x45\x41\x44\x2d\x43\x48\x41\x52\x20\x61\x6e\x64\x20"
  "\x50\x45\x45\x4b\x2d\x43\x48\x41\x52\x20\x6f\x70\x65\x72\x61\x74"
  "\x69\x6f\x6e\x73\x2e\x35\x33\x36\x26\x67\x65\x6e\x65\x72\x69\x63"
  "\x2d\x70\x6f\x72\x74\x2d\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x3a"
  "\x72\x65\x61\x64\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x47\x02"
  "\x04\x13\x72\x65\x71\x75\x69\x72\x65\x64\x2d\x6f\x70\x65\x72\x61"
  "\x74\x69\x6f\x6e\x48\x03\x45\x03\xe9\x02\x1a\x83\x04\xe8\x02\x18"
  "\x81\x85\x02\xe7\x02\x16\x81\x85\x02\xe6\x02\x14\x81\x85\x02\xe5"
  "\x02\x12\x81\x83\x02\xe4\x02\x10\x81\x83\x02\xe3\x02\x0e\x81\x83"
  "\x02\xe2\x02\x0c\x81\x83\x02\xe1\x02\x0a\x81\x83\x02\xe0\x02\x08"
  "\x81\x83\x02\xdf\x02\x06\x81\x83\x02\xde\x02\x04\x83\x04\x19\x2a"
  "\x45\x02\x23\x03\x19\x70\x6f\x72\x74\x2f\x6f\x70\x65\x72\x61\x74"
  "\x69\x6f\x6e\x2f\x72\x65\x61\x64\x2d\x63\x68\x61\x72\x49\x03\x1b"
  "\x70\x6f\x72\x74\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x63"
  "\x68\x61\x72\x2d\x72\x65\x61\x64\x79\x3f\x4a\x03\x0c\x65\x6f\x66"
  "\x2d\x6f\x62\x6a\x65\x63\x74\x3f\x05\x0d\x78\x73\x74\x72\x69\x6e"
  "\x67\x2d\x73\x65\x74\x21\x05\xf7\x02\x1e\x81\x91\x02\xf6\x02\x1c"
  "\x81\x91\x02\xf5\x02\x1a\x81\x8f\x02\xf4\x02\x18\x81\x91\x02\xf3"
  "\x02\x16\x81\x8f\x02\xf2\x02\x14\x81\x8f\x02\xf1\x02\x12\x81\x8f"
  "\x02\xf0\x02\x10\x81\x8f\x02\xef\x02\x0e\x81\x8f\x02\xee\x02\x0c"
  "\x81\x8f\x02\xed\x02\x0a\x81\x8d\x02\xec\x02\x08\x81\x8b\x02\xeb"
  "\x02\x06\x81\x89\x02\xea\x02\x04\x86\x0a\x1d\x2a\x4b\x02\x24\x37"
  "\x30\x2f\x38\x09\x6e\x6f\x2d\x66\x6c\x75\x73\x68\x4c\x27\x67\x65"
  "\x6e\x65\x72\x69\x63\x2d\x70\x6f\x72\x74\x2d\x6f\x70\x65\x72\x61"
  "\x74\x69\x6f\x6e\x3a\x77\x72\x69\x74\x65\x2d\x73\x75\x62\x73\x74"
  "\x72\x69\x6e\x67\x4d\x03\x04\x48\x02\x80\x03\x14\x81\x85\x02\xff"
  "\x02\x12\x81\x89\x02\xfe\x02\x10\x81\x87\x02\xfd\x02\x0e\x81\x87"
  "\x02\xfc\x02\x0c\x81\x85\x02\xfb\x02\x0a\x81\x85\x02\xfa\x02\x08"
  "\x81\x83\x02\xf9\x02\x06\x81\x83\x02\xf8\x02\x04\x83\x04\x13\x20"
  "\x4e\x02\x25\x02\x81\x03\x04\x83\x04\x03\x4f\x02\x26\x03\x1a\x70"
  "\x6f\x72\x74\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x77\x72"
  "\x69\x74\x65\x2d\x63\x68\x61\x72\x50\x04\x0c\x78\x73\x74\x72\x69"
  "\x6e\x67\x2d\x72\x65\x66\x51\x03\x8a\x03\x14\x81\x8f\x02\x89\x03"
  "\x12\x81\x8f\x02\x88\x03\x10\x81\x8f\x02\x87\x03\x0e\x81\x8f\x02"
  "\x86\x03\x0c\x81\x8d\x02\x85\x03\x0a\x81\x8d\x02\x84\x03\x08\x81"
  "\x8d\x02\x83\x03\x06\x81\x89\x02\x82\x03\x04\x86\x0a\x13\x1b\x52"
  "\x02\x27\x02\x11\x36\x33\x34\x35\x06\x1b\x74\x72\x61\x6e\x73\x63"
  "\x72\x69\x62\x65\x2d\x69\x6e\x70\x75\x74\x2d\x73\x75\x62\x73\x74"
  "\x72\x69\x6e\x67\x53\x04\x16\x74\x72\x61\x6e\x73\x63\x72\x69\x62"
  "\x65\x2d\x69\x6e\x70\x75\x74\x2d\x63\x68\x61\x72\x54\x03\x9e\x03"
  "\x2a\x81\x87\x02\x9d\x03\x28\x81\x87\x02\x9c\x03\x26\x81\x85\x02"
  "\x9b\x03\x24\x81\x85\x02\x9a\x03\x22\x81\x85\x02\x99\x03\x20\x81"
  "\x87\x02\x98\x03\x1e\x81\x87\x02\x97\x03\x1c\x81\x87\x02\x96\x03"
  "\x1a\x81\x89\x02\x95\x03\x18\x81\x87\x02\x94\x03\x16\x81\x85\x02"
  "\x93\x03\x14\x81\x8d\x02\x92\x03\x12\x81\x8d\x02\x91\x03\x10\x81"
  "\x87\x02\x90\x03\x0e\x81\x85\x02\x8f\x03\x0c\x81\x8b\x02\x8e\x03"
  "\x0a\x81\x85\x02\x8d\x03\x08\x81\x8b\x02\x8c\x03\x06\x81\x83\x02"
  "\x8b\x03\x04\x83\x04\x29\x39\x55\x02\x28\x02\x04\x10\x74\x72\x61"
  "\x6e\x73\x63\x72\x69\x62\x65\x2d\x63\x68\x61\x72\x56\x02\xa0\x03"
  "\x06\x81\x85\x02\x9f\x03\x04\x84\x06\x05\x0e\x57\x02\x29\x02\x06"
  "\x15\x74\x72\x61\x6e\x73\x63\x72\x69\x62\x65\x2d\x73\x75\x62\x73"
  "\x74\x72\x69\x6e\x67\x58\x02\xa6\x03\x0e\x81\x8b\x02\xa5\x03\x0c"
  "\x81\x8b\x02\xa4\x03\x0a\x81\x89\x02\xa3\x03\x08\x81\x89\x02\xa2"
  "\x03\x06\x86\x0a\xa1\x03\x04\x81\x89\x02\x0d\x16\x59\x02\x2a\x08"
  "\x75\x6e\x6b\x6e\x6f\x77\x6e\x11\x31\x2e\x01\x0b\x38\x37\x30\x2f"
  "\x03\x1f\x64\x69\x73\x63\x72\x65\x74\x69\x6f\x6e\x61\x72\x79\x2d"
  "\x66\x6c\x75\x73\x68\x2d\x74\x72\x61\x6e\x73\x63\x72\x69\x70\x74"
  "\x5a\x03\x11\x66\x6c\x75\x73\x68\x2d\x74\x72\x61\x6e\x73\x63\x72"
  "\x69\x70\x74\x5b\x04\x51\x06\x58\x04\x56\x06\xc2\x03\x3a\x81\x83"
  "\x02\xc1\x03\x38\x81\x83\x02\xc0\x03\x36\x83\x04\xbf\x03\x34\x81"
  "\x89\x02\xbe\x03\x32\x81\x87\x02\xbd\x03\x30\x81\x89\x02\xbc\x03"
  "\x2e\x81\x83\x02\xbb\x03\x2c\x81\x83\x02\xba\x03\x2a\x81\x85\x02"
  "\xb9\x03\x28\x81\x85\x02\xb8\x03\x26\x81\x85\x02\xb7\x03\x24\x81"
  "\x85\x02\xb6\x03\x22\x81\x87\x02\xb5\x03\x20\x81\x85\x02\xb4\x03"
  "\x1e\x81\x8f\x02\xb3\x03\x1c\x81\x8d\x02\xb2\x03\x1a\x81\x8b\x02"
  "\xb1\x03\x18\x81\x8d\x02\xb0\x03\x16\x81\x89\x02\xaf\x03\x14\x81"
  "\x8b\x02\xae\x03\x12\x81\x85\x02\xad\x03\x10\x81\x87\x02\xac\x03"
  "\x0e\x81\x85\x02\xab\x03\x0c\x81\x85\x02\xaa\x03\x0a\x81\x85\x02"
  "\xa9\x03\x08\x81\x85\x02\xa8\x03\x06\x81\x83\x02\xa7\x03\x04\x83"
  "\x04\x39\x54\x51\x02\x2b\x02\x12\x6d\x61\x6b\x65\x2d\x74\x68\x72"
  "\x65\x61\x64\x2d\x6d\x75\x74\x65\x78\x5c\x02\xc3\x03\x04\x82\x02"
  "\x03\x5d\x02\x2c\xc4\x03\x04\x82\x02\x03\x5e\x02\x2d\xc5\x03\x04"
  "\x83\x04\x03\x5f\x02\x2e\xc6\x03\x04\x83\x04\x03\x60\x02\x2f\xc7"
  "\x03\x04\x83\x04\x03\x61\x02\x30\xc8\x03\x04\x83\x04\x03\x62\x02"
  "\x31\xc9\x03\x04\x83\x04\x03\x63\x02\x32\xca\x03\x04\x83\x04\x03"
  "\x64\x02\x33\x08\xcb\x03\x04\x83\x04\x03\x65\x02\x34\x11\x02\xcc"
  "\x03\x04\x84\x06\x03\x66\x02\x35\x11\x02\xcd\x03\x04\x84\x06\x03"
  "\x67\x02\x36\x11\x02\xce\x03\x04\x84\x06\x03\x68\x02\x37\x11\x02"
  "\xcf\x03\x04\x84\x06\x03\x69\x02\x38\x11\x02\xd0\x03\x04\x84\x06"
  "\x03\x6a\x02\x39\x11\x02\xd1\x03\x04\x84\x06\x03\x6b\x02\x3a\x11"
  "\x02\x08\xd2\x03\x04\x84\x06\x03\x6c\x02\x3b\x14\x07\x2e\x74\x61"
  "\x67\x2e\x32\x14\x02\xd6\x03\x0a\x81\x85\x02\xd5\x03\x08\x81\x83"
  "\x02\xd4\x03\x06\x81\x83\x02\xd3\x03\x04\x83\x04\x09\x12\x6d\x02"
  "\x3c\x0a\x6d\x61\x6b\x65\x2d\x70\x6f\x72\x74\x6e\x04\x22\x04\x0b"
  "\x25\x6d\x61\x6b\x65\x2d\x70\x6f\x72\x74\x6f\x03\xd8\x03\x06\x81"
  "\x85\x02\xd7\x03\x04\x84\x06\x05\x0e\x70\x02\x3d\x0a\x70\x6f\x72"
  "\x74\x2f\x74\x79\x70\x65\x71\x03\x06\x70\x6f\x72\x74\x3f\x72\x04"
  "\x0f\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x70\x6f\x72\x74\x73"
  "\x03\xdb\x03\x08\x81\x83\x02\xda\x03\x06\x81\x83\x02\xd9\x03\x04"
  "\x83\x04\x07\x12\x74\x02\x3e\x11\x02\x0f\x73\x65\x74\x2d\x70\x6f"
  "\x72\x74\x2f\x74\x79\x70\x65\x21\x75\x03\x72\x04\x73\x04\x22\x04"
  "\xdf\x03\x0a\x81\x85\x02\xde\x03\x08\x81\x85\x02\xdd\x03\x06\x81"
  "\x85\x02\xdc\x03\x04\x84\x06\x09\x17\x76\x02\x3f\x0b\x70\x6f\x72"
  "\x74\x2f\x73\x74\x61\x74\x65\x77\x03\x72\x04\x73\x03\xe2\x03\x08"
  "\x81\x83\x02\xe1\x03\x06\x81\x83\x02\xe0\x03\x04\x83\x04\x07\x12"
  "\x78\x02\x40\x11\x02\x10\x73\x65\x74\x2d\x70\x6f\x72\x74\x2f\x73"
  "\x74\x61\x74\x65\x21\x79\x03\x72\x04\x73\x03\xe5\x03\x08\x81\x85"
  "\x02\xe4\x03\x06\x81\x85\x02\xe3\x03\x04\x84\x06\x07\x13\x7a\x02"
  "\x41\x12\x70\x6f\x72\x74\x2f\x74\x68\x72\x65\x61\x64\x2d\x6d\x75"
  "\x74\x65\x78\x7b\x03\x72\x04\x73\x03\xe8\x03\x08\x81\x83\x02\xe7"
  "\x03\x06\x81\x83\x02\xe6\x03\x04\x83\x04\x07\x12\x7c\x02\x42\x11"
  "\x02\xe9\x03\x04\x84\x06\x03\x7d\x02\x43\x07\x70\x6f\x72\x74\x3d"
  "\x3f\x7e\x03\x72\x04\x73\x03\xee\x03\x0c\x81\x85\x02\xed\x03\x0a"
  "\x81\x85\x02\xec\x03\x08\x81\x85\x02\xeb\x03\x06\x81\x85\x02\xea"
  "\x03\x04\x84\x06\x0b\x15\x7f\x02\x44\x03\x71\x03\x21\x03\xf0\x03"
  "\x06\x81\x83\x02\xef\x03\x04\x83\x04\x05\x0d\x80\x01\x02\x45\x04"
  "\x2c\x02\xf2\x03\x06\x81\x85\x02\xf1\x03\x04\x84\x06\x05\x0d\x81"
  "\x01\x02\x46\x0f\x70\x6f\x72\x74\x2f\x6f\x70\x65\x72\x61\x74\x69"
  "\x6f\x6e\x82\x01\x03\x72\x04\x73\x04\x2c\x04\xf6\x03\x0a\x81\x85"
  "\x02\xf5\x03\x08\x81\x85\x02\xf4\x03\x06\x81\x85\x02\xf3\x03\x04"
  "\x84\x06\x09\x16\x83\x01\x02\x47\x07\x64\x65\x66\x69\x6e\x65\x05"
  "\x70\x6f\x72\x74\x84\x01\x10\x70\x6f\x72\x74\x2f\x6f\x70\x65\x72"
  "\x61\x74\x69\x6f\x6e\x2f\x71\x84\x01\x0b\x70\x6f\x72\x74\x2d\x74"
  "\x79\x70\x65\x2f\x85\x01\x26\x27\x04\x0e\x73\x79\x6d\x62\x6f\x6c"
  "\x2d\x61\x70\x70\x65\x6e\x64\x86\x01\x04\x0d\x63\x6c\x6f\x73\x65"
  "\x2d\x73\x79\x6e\x74\x61\x78\x87\x01\x03\xfc\x03\x0e\x81\x89\x02"
  "\xfb\x03\x0c\x81\x8b\x02\xfa\x03\x0a\x81\x87\x02\xf9\x03\x08\x81"
  "\x85\x02\xf8\x03\x06\x81\x85\x02\xf7\x03\x04\x84\x06\x0d\x1d\x88"
  "\x01\x02\x48\x03\x71\x02\xfe\x03\x06\x81\x83\x02\xfd\x03\x04\x83"
  "\x04\x05\x0d\x89\x01\x02\x49\x03\x71\x02\x80\x04\x06\x81\x83\x02"
  "\xff\x03\x04\x83\x04\x05\x0d\x8a\x01\x02\x4a\x03\x71\x02\x82\x04"
  "\x06\x81\x83\x02\x81\x04\x04\x83\x04\x05\x0d\x8b\x01\x02\x4b\x08"
  "\x03\x71\x02\x84\x04\x06\x81\x83\x02\x83\x04\x04\x83\x04\x05\x0d"
  "\x8c\x01\x02\x4c\x09\x03\x71\x02\x86\x04\x06\x81\x83\x02\x85\x04"
  "\x04\x83\x04\x05\x0d\x8d\x01\x02\x4d\x0a\x03\x71\x02\x88\x04\x06"
  "\x81\x83\x02\x87\x04\x04\x83\x04\x05\x0d\x8e\x01\x02\x4e\x0b\x03"
  "\x71\x02\x8a\x04\x06\x81\x83\x02\x89\x04\x04\x83\x04\x05\x0d\x8f"
  "\x01\x02\x4f\x0c\x03\x71\x02\x8c\x04\x06\x81\x83\x02\x8b\x04\x04"
  "\x83\x04\x05\x0d\x90\x01\x02\x50\x0d\x03\x71\x02\x8e\x04\x06\x81"
  "\x83\x02\x8d\x04\x04\x83\x04\x05\x0d\x91\x01\x02\x51\x0e\x03\x71"
  "\x02\x90\x04\x06\x81\x83\x02\x8f\x04\x04\x83\x04\x05\x0d\x92\x01"
  "\x02\x52\x0f\x03\x71\x02\x92\x04\x06\x81\x83\x02\x91\x04\x04\x83"
  "\x04\x05\x0d\x93\x01\x02\x53\x12\x64\x65\x66\x69\x6e\x65\x2d\x69"
  "\x6e\x74\x65\x67\x72\x61\x62\x6c\x65\x84\x01\x11\x70\x6f\x72\x74"
  "\x2f\x25\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x0b\x70\x6f\x72"
  "\x74\x2f\x25\x74\x79\x70\x65\x94\x01\x84\x01\x85\x01\x26\x27\x04"
  "\x86\x01\x04\x87\x01\x03\x98\x04\x0e\x81\x89\x02\x97\x04\x0c\x81"
  "\x8b\x02\x96\x04\x0a\x81\x87\x02\x95\x04\x08\x81\x85\x02\x94\x04"
  "\x06\x81\x85\x02\x93\x04\x04\x84\x06\x0d\x1d\x87\x01\x02\x54\x0f"
  "\x9a\x04\x06\x81\x83\x02\x99\x04\x04\x83\x04\x05\x0b\x86\x01\x02"
  "\x55\x9c\x04\x06\x81\x83\x02\x9b\x04\x04\x83\x04\x05\x0b\x85\x01"
  "\x02\x56\x08\x9e\x04\x06\x81\x83\x02\x9d\x04\x04\x83\x04\x05\x0b"
  "\x26\x02\x57\x0a\xa0\x04\x06\x81\x83\x02\x9f\x04\x04\x83\x04\x05"
  "\x0b\x95\x01\x02\x58\x0e\x70\x6f\x72\x74\x2d\x70\x6f\x73\x69\x74"
  "\x69\x6f\x6e\x96\x01\x09\x70\x6f\x73\x69\x74\x69\x6f\x6e\x04\x82"
  "\x01\x04\x19\x65\x72\x72\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e"
  "\x67\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x97\x01\x03\xa3\x04"
  "\x08\x81\x83\x02\xa2\x04\x06\x81\x85\x02\xa1\x04\x04\x83\x04\x07"
  "\x11\x98\x01\x02\x59\x13\x73\x65\x74\x2d\x70\x6f\x72\x74\x2d\x70"
  "\x6f\x73\x69\x74\x69\x6f\x6e\x21\x99\x01\x0e\x73\x65\x74\x2d\x70"
  "\x6f\x73\x69\x74\x69\x6f\x6e\x21\x04\x82\x01\x04\x97\x01\x03\xa6"
  "\x04\x08\x81\x85\x02\xa5\x04\x06\x81\x87\x02\xa4\x04\x04\x84\x06"
  "\x07\x11\x9a\x01\x02\x5a\x0b\x70\x72\x69\x6e\x74\x2d\x73\x65\x6c"
  "\x66\x0b\x77\x72\x69\x74\x65\x2d\x73\x65\x6c\x66\x09\x69\x2f\x6f"
  "\x2d\x70\x6f\x72\x74\x0b\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72\x74"
  "\x0c\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x84\x01\x03\x0a"
  "\x69\x2f\x6f\x2d\x70\x6f\x72\x74\x3f\x84\x01\x03\x0d\x6f\x75\x74"
  "\x70\x75\x74\x2d\x70\x6f\x72\x74\x3f\x9b\x01\x03\x0c\x69\x6e\x70"
  "\x75\x74\x2d\x70\x6f\x72\x74\x3f\x9c\x01\x04\x82\x01\x04\x17\x04"
  "\x19\x75\x6e\x70\x61\x72\x73\x65\x72\x2f\x73\x74\x61\x6e\x64\x61"
  "\x72\x64\x2d\x6d\x65\x74\x68\x6f\x64\x07\xad\x04\x10\x81\x85\x02"
  "\xac\x04\x0e\x81\x83\x02\xab\x04\x0c\x81\x87\x02\xaa\x04\x0a\x81"
  "\x87\x02\xa9\x04\x08\x81\x87\x02\xa8\x04\x06\x81\x85\x02\xa7\x04"
  "\x04\x84\x06\x0f\x25\x17\x02\x5b\x03\x0c\x63\x6f\x70\x79\x2d\x72"
  "\x65\x63\x6f\x72\x64\x04\x79\x02\x5c\x04\x17\x73\x65\x74\x2d\x70"
  "\x6f\x72\x74\x2f\x74\x68\x72\x65\x61\x64\x2d\x6d\x75\x74\x65\x78"
  "\x21\x5c\x05\xb2\x04\x0c\x81\x89\x02\xb1\x04\x0a\x81\x87\x02\xb0"
  "\x04\x08\x81\x87\x02\xaf\x04\x06\x81\x85\x02\xae\x04\x04\x84\x06"
  "\x0b\x17\x9d\x01\x02\x5c\x06\x63\x6c\x6f\x73\x65\x04\x82\x01\x03"
  "\x12\x63\x6c\x6f\x73\x65\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f"
  "\x72\x74\x9e\x01\x03\x11\x63\x6c\x6f\x73\x65\x2d\x69\x6e\x70\x75"
  "\x74\x2d\x70\x6f\x72\x74\x9f\x01\x04\xb5\x04\x08\x81\x85\x02\xb4"
  "\x04\x06\x81\x83\x02\xb3\x04\x04\x83\x04\x07\x12\xa0\x01\x02\x5d"
  "\x02\x0c\x63\x6c\x6f\x73\x65\x2d\x69\x6e\x70\x75\x74\x04\x82\x01"
  "\x02\xb7\x04\x06\x81\x83\x02\xb6\x04\x04\x83\x04\x05\x0d\xa1\x01"
  "\x02\x5e\x02\x0d\x63\x6c\x6f\x73\x65\x2d\x6f\x75\x74\x70\x75\x74"
  "\x04\x82\x01\x02\xb9\x04\x06\x81\x83\x02\xb8\x04\x04\x83\x04\x05"
  "\x0d\xa2\x01\x02\x5f\x06\x6f\x70\x65\x6e\x3f\x04\x82\x01\x03\x9c"
  "\x01\x03\x9b\x01\x03\x0d\x25\x69\x6e\x70\x75\x74\x2d\x6f\x70\x65"
  "\x6e\x3f\xa3\x01\x03\x0e\x25\x6f\x75\x74\x70\x75\x74\x2d\x6f\x70"
  "\x65\x6e\x3f\xa4\x01\x06\xbe\x04\x0c\x81\x85\x02\xbd\x04\x0a\x81"
  "\x85\x02\xbc\x04\x08\x81\x85\x02\xbb\x04\x06\x81\x83\x02\xba\x04"
  "\x04\x83\x04\x0b\x1b\xa5\x01\x02\x60\x03\x9c\x01\x03\xa3\x01\x03"
  "\xc0\x04\x06\x81\x83\x02\xbf\x04\x04\x83\x04\x05\x0d\xa6\x01\x02"
  "\x61\x0c\x69\x6e\x70\x75\x74\x2d\x6f\x70\x65\x6e\x3f\x04\x2c\x02"
  "\xc3\x04\x08\x81\x83\x02\xc2\x04\x06\x81\x87\x02\xc1\x04\x04\x83"
  "\x04\x07\x11\xa7\x01\x02\x62\x03\x9b\x01\x03\xa4\x01\x03\xc5\x04"
  "\x06\x81\x83\x02\xc4\x04\x04\x83\x04\x05\x0d\xa8\x01\x02\x63\x0d"
  "\x6f\x75\x74\x70\x75\x74\x2d\x6f\x70\x65\x6e\x3f\x04\x2c\x02\xc8"
  "\x04\x08\x81\x83\x02\xc7\x04\x06\x81\x87\x02\xc6\x04\x04\x83\x04"
  "\x07\x11\xa9\x01\x02\x64\x0e\x69\x6e\x70\x75\x74\x2d\x63\x68\x61"
  "\x6e\x6e\x65\x6c\x04\x82\x01\x02\xca\x04\x06\x81\x83\x02\xc9\x04"
  "\x04\x83\x04\x05\x0c\xaa\x01\x02\x65\x0f\x6f\x75\x74\x70\x75\x74"
  "\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x04\x82\x01\x02\xcc\x04\x06\x81"
  "\x83\x02\xcb\x04\x04\x83\x04\x05\x0c\xab\x01\x02\x66\x27\x12\x70"
  "\x6f\x72\x74\x2f\x67\x65\x74\x2d\x70\x72\x6f\x70\x65\x72\x74\x79"
  "\xac\x01\x04\x11\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x73\x79"
  "\x6d\x62\x6f\x6c\xad\x01\x04\x29\x03\xd0\x04\x0a\x81\x87\x02\xcf"
  "\x04\x08\x81\x89\x02\xce\x04\x06\x81\x87\x02\xcd\x04\x04\x85\x08"
  "\x09\x15\xae\x01\x02\x67\x09\x73\x65\x74\x2d\x63\x64\x72\x21\x11"
  "\x02\x13\x70\x6f\x72\x74\x2f\x73\x65\x74\x2d\x70\x72\x6f\x70\x65"
  "\x72\x74\x79\x21\xaf\x01\x04\xad\x01\x04\x29\x03\xd4\x04\x0a\x81"
  "\x89\x02\xd3\x04\x08\x81\x87\x02\xd2\x04\x06\x81\x87\x02\xd1\x04"
  "\x04\x85\x08\x09\x17\xb0\x01\x02\x68\x11\x27\x16\x70\x6f\x72\x74"
  "\x2f\x69\x6e\x74\x65\x72\x6e\x2d\x70\x72\x6f\x70\x65\x72\x74\x79"
  "\x21\x27\x04\xad\x01\x04\x29\x03\xda\x04\x0e\x81\x8b\x02\xd9\x04"
  "\x0c\x81\x8b\x02\xd8\x04\x0a\x81\x89\x02\xd7\x04\x08\x81\x87\x02"
  "\xd6\x04\x06\x81\x87\x02\xd5\x04\x04\x85\x08\x0d\x1a\x29\x02\x69"
  "\x11\x02\x16\x70\x6f\x72\x74\x2f\x72\x65\x6d\x6f\x76\x65\x2d\x70"
  "\x72\x6f\x70\x65\x72\x74\x79\x21\x11\x04\xad\x01\x04\x0a\x64\x65"
  "\x6c\x2d\x61\x73\x73\x71\x21\x03\xde\x04\x0a\x81\x87\x02\xdd\x04"
  "\x08\x81\x89\x02\xdc\x04\x06\x81\x85\x02\xdb\x04\x04\x84\x06\x09"
  "\x16\xad\x01\x02\x6a\x02\x08\x04\x0c\x25\x77\x72\x69\x74\x65\x2d"
  "\x63\x68\x61\x72\x02\xe0\x04\x06\x81\x85\x02\xdf\x04\x04\x84\x06"
  "\x05\x0e\xb1\x01\x02\x6b\x02\x08\x06\x37\x02\xe2\x04\x06\x81\x89"
  "\x02\xe1\x04\x04\x86\x0a\x05\x0e\xb2\x01\x02\x6c\x02\x08\x03\x30"
  "\x02\xe4\x04\x06\x81\x83\x02\xe3\x04\x04\x83\x04\x05\x0e\xb3\x01"
  "\x02\x6d\x02\x08\x03\x20\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72"
  "\x74\x2f\x64\x69\x73\x63\x72\x65\x74\x69\x6f\x6e\x61\x72\x79\x2d"
  "\x66\x6c\x75\x73\x68\x02\xe6\x04\x06\x81\x83\x02\xe5\x04\x04\x83"
  "\x04\x05\x0e\xb4\x01\x02\x6e\x03\x72\x02\xea\x04\x0a\x81\x83\x02"
  "\xe9\x04\x08\x81\x83\x02\xe8\x04\x06\x81\x83\x02\xe7\x04\x04\x83"
  "\x04\x09\x13\xb5\x01\x02\x6f\x0a\x03\x72\x02\xee\x04\x0a\x81\x83"
  "\x02\xed\x04\x08\x81\x83\x02\xec\x04\x06\x81\x83\x02\xeb\x04\x04"
  "\x83\x04\x09\x13\xb6\x01\x02\x70\x0a\x03\x72\x02\xf3\x04\x0c\x81"
  "\x83\x02\xf2\x04\x0a\x81\x83\x02\xf1\x04\x08\x81\x83\x02\xf0\x04"
  "\x06\x81\x83\x02\xef\x04\x04\x83\x04\x0b\x16\x02\x71\x03\x72\x04"
  "\x73\x03\xf6\x04\x08\x81\x85\x02\xf5\x04\x06\x81\x85\x02\xf4\x04"
  "\x04\x84\x06\x07\x0f\xb7\x01\x02\x72\x05\x70\x6f\x72\x74\x05\x1a"
  "\x02\xf7\x04\x04\x84\x06\x03\x0a\xb8\x01\x02\x73\x03\x9c\x01\x04"
  "\x15\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x69\x6e\x70\x75\x74"
  "\x2d\x70\x6f\x72\x74\xb9\x01\x03\xfa\x04\x08\x81\x85\x02\xf9\x04"
  "\x06\x81\x85\x02\xf8\x04\x04\x84\x06\x07\x0f\xba\x01\x02\x74\x0b"
  "\x69\x6e\x70\x75\x74\x20\x70\x6f\x72\x74\x05\x1a\x02\xfb\x04\x04"
  "\x84\x06\x03\x0a\xbb\x01\x02\x75\x03\x9b\x01\x04\x16\x65\x72\x72"
  "\x6f\x72\x3a\x6e\x6f\x74\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f"
  "\x72\x74\xbc\x01\x03\xfe\x04\x08\x81\x85\x02\xfd\x04\x06\x81\x85"
  "\x02\xfc\x04\x04\x84\x06\x07\x0f\xbd\x01\x02\x76\x0c\x6f\x75\x74"
  "\x70\x75\x74\x20\x70\x6f\x72\x74\x05\x1a\x02\xff\x04\x04\x84\x06"
  "\x03\x0a\xbe\x01\x02\x77\x03\x84\x01\x04\x13\x65\x72\x72\x6f\x72"
  "\x3a\x6e\x6f\x74\x2d\x69\x2f\x6f\x2d\x70\x6f\x72\x74\xbf\x01\x03"
  "\x82\x05\x08\x81\x85\x02\x81\x05\x06\x81\x85\x02\x80\x05\x04\x84"
  "\x06\x07\x0f\xc0\x01\x02\x78\x09\x49\x2f\x4f\x20\x70\x6f\x72\x74"
  "\x05\x1a\x02\x83\x05\x04\x84\x06\x03\x0a\x1a\x02\x79\x11\x73\x75"
  "\x70\x70\x6f\x72\x74\x73\x2d\x63\x6f\x64\x69\x6e\x67\x3f\x04\x82"
  "\x01\x02\x85\x05\x06\x81\x83\x02\x84\x05\x04\x83\x04\x05\x0c\xc1"
  "\x01\x02\x7a\x0c\x70\x6f\x72\x74\x2f\x63\x6f\x64\x69\x6e\x67\xc2"
  "\x01\x07\x63\x6f\x64\x69\x6e\x67\x04\x82\x01\x04\x97\x01\x03\x88"
  "\x05\x08\x81\x83\x02\x87\x05\x06\x81\x85\x02\x86\x05\x04\x83\x04"
  "\x07\x11\xc3\x01\x02\x7b\x10\x70\x6f\x72\x74\x2f\x73\x65\x74\x2d"
  "\x63\x6f\x64\x69\x6e\x67\xc4\x01\x0b\x73\x65\x74\x2d\x63\x6f\x64"
  "\x69\x6e\x67\x04\x82\x01\x04\x97\x01\x03\x8b\x05\x08\x81\x85\x02"
  "\x8a\x05\x06\x81\x87\x02\x89\x05\x04\x84\x06\x07\x11\xc5\x01\x02"
  "\x7c\x13\x70\x6f\x72\x74\x2f\x6b\x6e\x6f\x77\x6e\x2d\x63\x6f\x64"
  "\x69\x6e\x67\x3f\xc6\x01\x0e\x6b\x6e\x6f\x77\x6e\x2d\x63\x6f\x64"
  "\x69\x6e\x67\x3f\x04\x82\x01\x04\x97\x01\x03\x8e\x05\x08\x81\x85"
  "\x02\x8d\x05\x06\x81\x87\x02\x8c\x05\x04\x84\x06\x07\x11\xc7\x01"
  "\x02\x7d\x13\x70\x6f\x72\x74\x2f\x6b\x6e\x6f\x77\x6e\x2d\x63\x6f"
  "\x64\x69\x6e\x67\x73\xc8\x01\x0e\x6b\x6e\x6f\x77\x6e\x2d\x63\x6f"
  "\x64\x69\x6e\x67\x73\x04\x82\x01\x04\x97\x01\x03\x91\x05\x08\x81"
  "\x83\x02\x90\x05\x06\x81\x85\x02\x8f\x05\x04\x83\x04\x07\x11\xc9"
  "\x01\x02\x7e\x11\x70\x6f\x72\x74\x2f\x6c\x69\x6e\x65\x2d\x65\x6e"
  "\x64\x69\x6e\x67\xca\x01\x0c\x6c\x69\x6e\x65\x2d\x65\x6e\x64\x69"
  "\x6e\x67\x04\x82\x01\x04\x97\x01\x03\x94\x05\x08\x81\x83\x02\x93"
  "\x05\x06\x81\x85\x02\x92\x05\x04\x83\x04\x07\x11\xcb\x01\x02\x7f"
  "\x15\x70\x6f\x72\x74\x2f\x73\x65\x74\x2d\x6c\x69\x6e\x65\x2d\x65"
  "\x6e\x64\x69\x6e\x67\xcc\x01\x10\x73\x65\x74\x2d\x6c\x69\x6e\x65"
  "\x2d\x65\x6e\x64\x69\x6e\x67\x04\x82\x01\x04\x97\x01\x03\x97\x05"
  "\x08\x81\x85\x02\x96\x05\x06\x81\x87\x02\x95\x05\x04\x84\x06\x07"
  "\x11\xcd\x01\x02\x80\x01\x18\x70\x6f\x72\x74\x2f\x6b\x6e\x6f\x77"
  "\x6e\x2d\x6c\x69\x6e\x65\x2d\x65\x6e\x64\x69\x6e\x67\x3f\xce\x01"
  "\x13\x6b\x6e\x6f\x77\x6e\x2d\x6c\x69\x6e\x65\x2d\x65\x6e\x64\x69"
  "\x6e\x67\x3f\x04\x82\x01\x04\x97\x01\x03\x9a\x05\x08\x81\x85\x02"
  "\x99\x05\x06\x81\x87\x02\x98\x05\x04\x84\x06\x07\x11\xcf\x01\x02"
  "\x81\x01\x18\x70\x6f\x72\x74\x2f\x6b\x6e\x6f\x77\x6e\x2d\x6c\x69"
  "\x6e\x65\x2d\x65\x6e\x64\x69\x6e\x67\x73\xd0\x01\x13\x6b\x6e\x6f"
  "\x77\x6e\x2d\x6c\x69\x6e\x65\x2d\x65\x6e\x64\x69\x6e\x67\x73\x04"
  "\x82\x01\x04\x97\x01\x03\x9d\x05\x08\x81\x83\x02\x9c\x05\x06\x81"
  "\x85\x02\x9b\x05\x04\x83\x04\x07\x11\x97\x01\x02\x82\x01\x14\x69"
  "\x6e\x70\x75\x74\x2d\x62\x6c\x6f\x63\x6b\x69\x6e\x67\x2d\x6d\x6f"
  "\x64\x65\xd1\x01\x04\x82\x01\x02\x9f\x05\x06\x81\x83\x02\x9e\x05"
  "\x04\x83\x04\x05\x0c\xd2\x01\x02\x83\x01\x02\x18\x73\x65\x74\x2d"
  "\x69\x6e\x70\x75\x74\x2d\x62\x6c\x6f\x63\x6b\x69\x6e\x67\x2d\x6d"
  "\x6f\x64\x65\xd3\x01\x04\x82\x01\x02\xa1\x05\x06\x81\x85\x02\xa0"
  "\x05\x04\x84\x06\x05\x0d\xd4\x01\x02\x84\x01\xd3\x01\xd1\x01\x07"
  "\x0a\x62\x69\x6e\x64\x2d\x6d\x6f\x64\x65\xd3\x01\x02\xa2\x05\x04"
  "\x85\x08\x03\x0b\xd1\x01\x02\x85\x01\x15\x6f\x75\x74\x70\x75\x74"
  "\x2d\x62\x6c\x6f\x63\x6b\x69\x6e\x67\x2d\x6d\x6f\x64\x65\xd5\x01"
  "\x04\x82\x01\x02\xa4\x05\x06\x81\x83\x02\xa3\x05\x04\x83\x04\x05"
  "\x0c\xd6\x01\x02\x86\x01\x02\x19\x73\x65\x74\x2d\x6f\x75\x74\x70"
  "\x75\x74\x2d\x62\x6c\x6f\x63\x6b\x69\x6e\x67\x2d\x6d\x6f\x64\x65"
  "\xd7\x01\x04\x82\x01\x02\xa6\x05\x06\x81\x85\x02\xa5\x05\x04\x84"
  "\x06\x05\x0d\xd8\x01\x02\x87\x01\xd7\x01\xd5\x01\x07\xd3\x01\x02"
  "\xa7\x05\x04\x85\x08\x03\x0b\xd7\x01\x02\x88\x01\x14\x69\x6e\x70"
  "\x75\x74\x2d\x74\x65\x72\x6d\x69\x6e\x61\x6c\x2d\x6d\x6f\x64\x65"
  "\xd5\x01\x04\x82\x01\x02\xa9\x05\x06\x81\x83\x02\xa8\x05\x04\x83"
  "\x04\x05\x0c\xd9\x01\x02\x89\x01\x02\x18\x73\x65\x74\x2d\x69\x6e"
  "\x70\x75\x74\x2d\x74\x65\x72\x6d\x69\x6e\x61\x6c\x2d\x6d\x6f\x64"
  "\x65\xda\x01\x04\x82\x01\x02\xab\x05\x06\x81\x85\x02\xaa\x05\x04"
  "\x84\x06\x05\x0d\xdb\x01\x02\x8a\x01\xda\x01\xd5\x01\x07\xd3\x01"
  "\x02\xac\x05\x04\x85\x08\x03\x0b\xda\x01\x02\x8b\x01\x15\x6f\x75"
  "\x74\x70\x75\x74\x2d\x74\x65\x72\x6d\x69\x6e\x61\x6c\x2d\x6d\x6f"
  "\x64\x65\xd5\x01\x04\x82\x01\x02\xae\x05\x06\x81\x83\x02\xad\x05"
  "\x04\x83\x04\x05\x0c\xdc\x01\x02\x8c\x01\x02\x19\x73\x65\x74\x2d"
  "\x6f\x75\x74\x70\x75\x74\x2d\x74\x65\x72\x6d\x69\x6e\x61\x6c\x2d"
  "\x6d\x6f\x64\x65\xdd\x01\x04\x82\x01\x02\xb0\x05\x06\x81\x85\x02"
  "\xaf\x05\x04\x84\x06\x05\x0d\xde\x01\x02\x8d\x01\xdd\x01\xd5\x01"
  "\x07\xd3\x01\x02\xb1\x05\x04\x85\x08\x03\x0b\xdd\x01\x02\x8e\x01"
  "\x02\x04\x82\x01\x05\x0d\x64\x79\x6e\x61\x6d\x69\x63\x2d\x77\x69"
  "\x6e\x64\x03\x0b\x70\x6f\x72\x74\x2f\x6f\x70\x65\x6e\x3f\xd5\x01"
  "\x04\xbb\x05\x16\x81\x83\x02\xba\x05\x14\x81\x83\x02\xb9\x05\x12"
  "\x81\x83\x02\xb8\x05\x10\x81\x83\x02\xb7\x05\x0e\x81\x83\x02\xb6"
  "\x05\x0c\x81\x83\x02\xb5\x05\x0a\x81\x8d\x02\xb4\x05\x08\x81\x8f"
  "\x02\xb3\x05\x06\x81\x8b\x02\xb2\x05\x04\x87\x0c\x15\x20\xdf\x01"
  "\x02\x8f\x01\x15\x2a\x63\x75\x72\x72\x65\x6e\x74\x2d\x69\x6e\x70"
  "\x75\x74\x2d\x70\x6f\x72\x74\x2a\xe0\x01\x02\x02\x12\x6e\x65\x61"
  "\x72\x65\x73\x74\x2d\x63\x6d\x64\x6c\x2f\x70\x6f\x72\x74\xe1\x01"
  "\x02\xbd\x05\x06\x81\x81\x02\xbc\x05\x04\x82\x02\x05\x0d\xe2\x01"
  "\x02\x90\x01\x02\x18\x73\x65\x74\x2d\x63\x75\x72\x72\x65\x6e\x74"
  "\x2d\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72\x74\x21\xe3\x01\xe0\x01"
  "\x02\x03\x9c\x01\x04\xb9\x01\x03\xc1\x05\x0a\x81\x83\x02\xc0\x05"
  "\x08\x81\x83\x02\xbf\x05\x06\x81\x83\x02\xbe\x05\x04\x83\x04\x09"
  "\x15\xe4\x01\x02\x91\x01\x02\x15\x77\x69\x74\x68\x2d\x69\x6e\x70"
  "\x75\x74\x2d\x66\x72\x6f\x6d\x2d\x70\x6f\x72\x74\xe5\x01\xe0\x01"
  "\x02\xe0\x01\x02\x03\x9c\x01\x04\xb9\x01\x05\x13\x73\x68\x61\x6c"
  "\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\xe6\x01"
  "\x04\xc9\x05\x12\x81\x83\x02\xc8\x05\x10\x81\x85\x02\xc7\x05\x0e"
  "\x81\x83\x02\xc6\x05\x0c\x81\x83\x02\xc5\x05\x0a\x81\x83\x02\xc4"
  "\x05\x08\x81\x85\x02\xc3\x05\x06\x81\x85\x02\xc2\x05\x04\x84\x06"
  "\x11\x21\xe7\x01\x02\x92\x01\x16\x2a\x63\x75\x72\x72\x65\x6e\x74"
  "\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x2a\xe8\x01\x02"
  "\x02\xe1\x01\x02\xcb\x05\x06\x81\x81\x02\xca\x05\x04\x82\x02\x05"
  "\x0d\xe9\x01\x02\x93\x01\x02\x19\x73\x65\x74\x2d\x63\x75\x72\x72"
  "\x65\x6e\x74\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x21"
  "\xea\x01\xe8\x01\x02\x03\x9b\x01\x04\xbc\x01\x03\xcf\x05\x0a\x81"
  "\x83\x02\xce\x05\x08\x81\x83\x02\xcd\x05\x06\x81\x83\x02\xcc\x05"
  "\x04\x83\x04\x09\x15\xeb\x01\x02\x94\x01\x02\x14\x77\x69\x74\x68"
  "\x2d\x6f\x75\x74\x70\x75\x74\x2d\x74\x6f\x2d\x70\x6f\x72\x74\xec"
  "\x01\xe8\x01\x02\xe8\x01\x02\x03\x9b\x01\x04\xbc\x01\x05\xe6\x01"
  "\x04\xd7\x05\x12\x81\x83\x02\xd6\x05\x10\x81\x85\x02\xd5\x05\x0e"
  "\x81\x83\x02\xd4\x05\x0c\x81\x83\x02\xd3\x05\x0a\x81\x83\x02\xd2"
  "\x05\x08\x81\x85\x02\xd1\x05\x06\x81\x85\x02\xd0\x05\x04\x84\x06"
  "\x11\x21\xed\x01\x02\x95\x01\x1b\x2a\x6e\x6f\x74\x69\x66\x69\x63"
  "\x61\x74\x69\x6f\x6e\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72"
  "\x74\x2a\xee\x01\x02\x02\xe1\x01\x02\xd9\x05\x06\x81\x81\x02\xd8"
  "\x05\x04\x82\x02\x05\x0d\xef\x01\x02\x96\x01\x02\x1e\x73\x65\x74"
  "\x2d\x6e\x6f\x74\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x6f\x75"
  "\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x21\xf0\x01\xee\x01\x02\x03"
  "\x9b\x01\x04\xbc\x01\x03\xdd\x05\x0a\x81\x83\x02\xdc\x05\x08\x81"
  "\x83\x02\xdb\x05\x06\x81\x83\x02\xda\x05\x04\x83\x04\x09\x15\xf1"
  "\x01\x02\x97\x01\x02\x1e\x77\x69\x74\x68\x2d\x6e\x6f\x74\x69\x66"
  "\x69\x63\x61\x74\x69\x6f\x6e\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70"
  "\x6f\x72\x74\xf2\x01\xee\x01\x02\xee\x01\x02\x03\x9b\x01\x04\xbc"
  "\x01\x05\xe6\x01\x04\xe5\x05\x12\x81\x83\x02\xe4\x05\x10\x81\x85"
  "\x02\xe3\x05\x0e\x81\x83\x02\xe2\x05\x0c\x81\x83\x02\xe1\x05\x0a"
  "\x81\x83\x02\xe0\x05\x08\x81\x85\x02\xdf\x05\x06\x81\x85\x02\xde"
  "\x05\x04\x84\x06\x11\x21\xf3\x01\x02\x98\x01\x14\x2a\x74\x72\x61"
  "\x63\x65\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x2a\xf4"
  "\x01\x02\x02\xe1\x01\x02\xe7\x05\x06\x81\x81\x02\xe6\x05\x04\x82"
  "\x02\x05\x0d\xf5\x01\x02\x99\x01\x02\x17\x73\x65\x74\x2d\x74\x72"
  "\x61\x63\x65\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x21"
  "\xf6\x01\xf4\x01\x02\x03\x9b\x01\x04\xbc\x01\x03\xeb\x05\x0a\x81"
  "\x83\x02\xea\x05\x08\x81\x83\x02\xe9\x05\x06\x81\x83\x02\xe8\x05"
  "\x04\x83\x04\x09\x15\xf7\x01\x02\x9a\x01\x02\x17\x77\x69\x74\x68"
  "\x2d\x74\x72\x61\x63\x65\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f"
  "\x72\x74\xf8\x01\xf4\x01\x02\xf4\x01\x02\x03\x9b\x01\x04\xbc\x01"
  "\x05\xe6\x01\x04\xf3\x05\x12\x81\x83\x02\xf2\x05\x10\x81\x85\x02"
  "\xf1\x05\x0e\x81\x83\x02\xf0\x05\x0c\x81\x83\x02\xef\x05\x0a\x81"
  "\x83\x02\xee\x05\x08\x81\x85\x02\xed\x05\x06\x81\x85\x02\xec\x05"
  "\x04\x84\x06\x11\x21\xf9\x01\x02\x9b\x01\x17\x2a\x69\x6e\x74\x65"
  "\x72\x61\x63\x74\x69\x6f\x6e\x2d\x69\x2f\x6f\x2d\x70\x6f\x72\x74"
  "\x2a\xfa\x01\x02\x02\xe1\x01\x02\xf5\x05\x06\x81\x81\x02\xf4\x05"
  "\x04\x82\x02\x05\x0d\xe1\x01\x02\x9c\x01\x02\x1a\x73\x65\x74\x2d"
  "\x69\x6e\x74\x65\x72\x61\x63\x74\x69\x6f\x6e\x2d\x69\x2f\x6f\x2d"
  "\x70\x6f\x72\x74\x21\xfb\x01\xfa\x01\x02\x03\x84\x01\x04\xbf\x01"
  "\x03\xf9\x05\x0a\x81\x83\x02\xf8\x05\x08\x81\x83\x02\xf7\x05\x06"
  "\x81\x83\x02\xf6\x05\x04\x83\x04\x09\x15\xfc\x01\x02\x9d\x01\x02"
  "\x1a\x77\x69\x74\x68\x2d\x69\x6e\x74\x65\x72\x61\x63\x74\x69\x6f"
  "\x6e\x2d\x69\x2f\x6f\x2d\x70\x6f\x72\x74\xfa\x01\x02\xfa\x01\x02"
  "\x03\x84\x01\x04\xbf\x01\x05\xe6\x01\x04\x81\x06\x12\x81\x83\x02"
  "\x80\x06\x10\x81\x85\x02\xff\x05\x0e\x81\x83\x02\xfe\x05\x0c\x81"
  "\x83\x02\xfd\x05\x0a\x81\x83\x02\xfc\x05\x08\x81\x85\x02\xfb\x05"
  "\x06\x81\x85\x02\xfa\x05\x04\x84\x06\x11\x21\xe6\x01\x9d\x01\xfd"
  "\x01\xfd\x01\x18\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x70\x6f\x72"
  "\x74\x2d\x61\x63\x63\x65\x73\x73\x6f\x72\x73\xe6\x01\x04\xfb\x01"
  "\xfc\x01\x04\x15\x69\x6e\x74\x65\x72\x61\x63\x74\x69\x6f\x6e\x2d"
  "\x69\x2f\x6f\x2d\x70\x6f\x72\x74\xfd\x01\xe1\x01\x04\xf8\x01\xf9"
  "\x01\x04\xf6\x01\xf7\x01\x04\x12\x74\x72\x61\x63\x65\x2d\x6f\x75"
  "\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\xfc\x01\xf5\x01\x04\xf2\x01"
  "\xf3\x01\x04\xf0\x01\xf1\x01\x04\x19\x6e\x6f\x74\x69\x66\x69\x63"
  "\x61\x74\x69\x6f\x6e\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72"
  "\x74\xf9\x01\xef\x01\x04\xec\x01\xed\x01\x04\xea\x01\xeb\x01\x04"
  "\x14\x63\x75\x72\x72\x65\x6e\x74\x2d\x6f\x75\x74\x70\x75\x74\x2d"
  "\x70\x6f\x72\x74\xf8\x01\xe9\x01\x04\xe5\x01\xe7\x01\x04\xe3\x01"
  "\xe4\x01\x04\x13\x63\x75\x72\x72\x65\x6e\x74\x2d\x69\x6e\x70\x75"
  "\x74\x2d\x70\x6f\x72\x74\xf7\x01\xe2\x01\x04\xfa\x01\xf4\x01\xee"
  "\x01\xe8\x01\xe0\x01\xd3\x01\xdf\x01\x04\x1f\x70\x6f\x72\x74\x2f"
  "\x77\x69\x74\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x74\x65\x72\x6d"
  "\x69\x6e\x61\x6c\x2d\x6d\x6f\x64\x65\xdd\x01\x04\x1e\x70\x6f\x72"
  "\x74\x2f\x73\x65\x74\x2d\x6f\x75\x74\x70\x75\x74\x2d\x74\x65\x72"
  "\x6d\x69\x6e\x61\x6c\x2d\x6d\x6f\x64\x65\xde\x01\x04\x1a\x70\x6f"
  "\x72\x74\x2f\x6f\x75\x74\x70\x75\x74\x2d\x74\x65\x72\x6d\x69\x6e"
  "\x61\x6c\x2d\x6d\x6f\x64\x65\xdc\x01\x04\x1e\x70\x6f\x72\x74\x2f"
  "\x77\x69\x74\x68\x2d\x69\x6e\x70\x75\x74\x2d\x74\x65\x72\x6d\x69"
  "\x6e\x61\x6c\x2d\x6d\x6f\x64\x65\xda\x01\x04\x1d\x70\x6f\x72\x74"
  "\x2f\x73\x65\x74\x2d\x69\x6e\x70\x75\x74\x2d\x74\x65\x72\x6d\x69"
  "\x6e\x61\x6c\x2d\x6d\x6f\x64\x65\xdb\x01\x04\x19\x70\x6f\x72\x74"
  "\x2f\x69\x6e\x70\x75\x74\x2d\x74\x65\x72\x6d\x69\x6e\x61\x6c\x2d"
  "\x6d\x6f\x64\x65\xd9\x01\x04\x1f\x70\x6f\x72\x74\x2f\x77\x69\x74"
  "\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x62\x6c\x6f\x63\x6b\x69\x6e"
  "\x67\x2d\x6d\x6f\x64\x65\xd7\x01\x04\x1e\x70\x6f\x72\x74\x2f\x73"
  "\x65\x74\x2d\x6f\x75\x74\x70\x75\x74\x2d\x62\x6c\x6f\x63\x6b\x69"
  "\x6e\x67\x2d\x6d\x6f\x64\x65\xd8\x01\x04\x1a\x70\x6f\x72\x74\x2f"
  "\x6f\x75\x74\x70\x75\x74\x2d\x62\x6c\x6f\x63\x6b\x69\x6e\x67\x2d"
  "\x6d\x6f\x64\x65\xd6\x01\x04\x1e\x70\x6f\x72\x74\x2f\x77\x69\x74"
  "\x68\x2d\x69\x6e\x70\x75\x74\x2d\x62\x6c\x6f\x63\x6b\x69\x6e\x67"
  "\x2d\x6d\x6f\x64\x65\xd1\x01\x04\x1d\x70\x6f\x72\x74\x2f\x73\x65"
  "\x74\x2d\x69\x6e\x70\x75\x74\x2d\x62\x6c\x6f\x63\x6b\x69\x6e\x67"
  "\x2d\x6d\x6f\x64\x65\xd4\x01\x04\x19\x70\x6f\x72\x74\x2f\x69\x6e"
  "\x70\x75\x74\x2d\x62\x6c\x6f\x63\x6b\x69\x6e\x67\x2d\x6d\x6f\x64"
  "\x65\xd2\x01\x04\xd0\x01\x97\x01\x04\xce\x01\xcf\x01\x04\xcc\x01"
  "\xcd\x01\x04\xca\x01\xcb\x01\x04\xc8\x01\xc9\x01\x04\xc6\x01\xc7"
  "\x01\x04\xc4\x01\xc5\x01\x04\xc2\x01\xc3\x01\x04\x16\x70\x6f\x72"
  "\x74\x2f\x73\x75\x70\x70\x6f\x72\x74\x73\x2d\x63\x6f\x64\x69\x6e"
  "\x67\x3f\xc1\x01\x04\xbf\x01\x1a\x04\x13\x67\x75\x61\x72\x61\x6e"
  "\x74\x65\x65\x2d\x69\x2f\x6f\x2d\x70\x6f\x72\x74\xc0\x01\x04\xbc"
  "\x01\xbe\x01\x04\x16\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x6f"
  "\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\xbd\x01\x04\xb9\x01\xbb"
  "\x01\x04\x15\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x69\x6e\x70"
  "\x75\x74\x2d\x70\x6f\x72\x74\xba\x01\x04\x73\xb8\x01\x04\x0f\x67"
  "\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x70\x6f\x72\x74\xb7\x01\x04"
  "\x84\x01\x04\x9b\x01\xb6\x01\x04\x9c\x01\xb5\x01\x04\x5a\xb4\x01"
  "\x04\x5b\xb3\x01\x04\x58\xb2\x01\x04\x56\xb1\x01\x04\x11\xad\x01"
  "\x04\x27\x29\x04\xaf\x01\xb0\x01\x04\xac\x01\xae\x01\x04\x14\x70"
  "\x6f\x72\x74\x2f\x6f\x75\x74\x70\x75\x74\x2d\x63\x68\x61\x6e\x6e"
  "\x65\x6c\xab\x01\x04\x13\x70\x6f\x72\x74\x2f\x69\x6e\x70\x75\x74"
  "\x2d\x63\x68\x61\x6e\x6e\x65\x6c\xaa\x01\x04\xa4\x01\xa9\x01\x04"
  "\x12\x70\x6f\x72\x74\x2f\x6f\x75\x74\x70\x75\x74\x2d\x6f\x70\x65"
  "\x6e\x3f\xa8\x01\x04\xa3\x01\xa7\x01\x04\x11\x70\x6f\x72\x74\x2f"
  "\x69\x6e\x70\x75\x74\x2d\x6f\x70\x65\x6e\x3f\xa6\x01\x04\xd5\x01"
  "\xa5\x01\x04\x9e\x01\xa2\x01\x04\x9f\x01\xa1\x01\x04\x0b\x63\x6c"
  "\x6f\x73\x65\x2d\x70\x6f\x72\x74\xa0\x01\x04\x0a\x70\x6f\x72\x74"
  "\x2f\x63\x6f\x70\x79\x9d\x01\x04\x17\x04\x99\x01\x9a\x01\x04\x96"
  "\x01\x98\x01\x04\x1b\x70\x6f\x72\x74\x2f\x25\x6f\x70\x65\x72\x61"
  "\x74\x69\x6f\x6e\x2f\x77\x72\x69\x74\x65\x2d\x63\x68\x61\x72\x95"
  "\x01\x04\x1a\x70\x6f\x72\x74\x2f\x25\x6f\x70\x65\x72\x61\x74\x69"
  "\x6f\x6e\x2f\x70\x65\x65\x6b\x2d\x63\x68\x61\x72\x26\x04\x1a\x70"
  "\x6f\x72\x74\x2f\x25\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x72"
  "\x65\x61\x64\x2d\x63\x68\x61\x72\x85\x01\x04\x1d\x64\x65\x66\x69"
  "\x6e\x65\x2d\x75\x6e\x73\x61\x66\x65\x2d\x70\x6f\x72\x74\x2d\x6f"
  "\x70\x65\x72\x61\x74\x69\x6f\x6e\x2b\x70\x6f\x72\x74\x2f\x25\x6f"
  "\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x64\x69\x73\x63\x72\x65\x74"
  "\x69\x6f\x6e\x61\x72\x79\x2d\x66\x6c\x75\x73\x68\x2d\x6f\x75\x74"
  "\x70\x75\x74\x86\x01\x04\x87\x01\x04\x2a\x70\x6f\x72\x74\x2f\x6f"
  "\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x64\x69\x73\x63\x72\x65\x74"
  "\x69\x6f\x6e\x61\x72\x79\x2d\x66\x6c\x75\x73\x68\x2d\x6f\x75\x74"
  "\x70\x75\x74\x93\x01\x04\x1c\x70\x6f\x72\x74\x2f\x6f\x70\x65\x72"
  "\x61\x74\x69\x6f\x6e\x2f\x66\x6c\x75\x73\x68\x2d\x6f\x75\x74\x70"
  "\x75\x74\x92\x01\x04\x1b\x70\x6f\x72\x74\x2f\x6f\x70\x65\x72\x61"
  "\x74\x69\x6f\x6e\x2f\x6c\x69\x6e\x65\x2d\x73\x74\x61\x72\x74\x3f"
  "\x91\x01\x04\x1a\x70\x6f\x72\x74\x2f\x6f\x70\x65\x72\x61\x74\x69"
  "\x6f\x6e\x2f\x66\x72\x65\x73\x68\x2d\x6c\x69\x6e\x65\x90\x01\x04"
  "\x1f\x70\x6f\x72\x74\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f"
  "\x77\x72\x69\x74\x65\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x8f"
  "\x01\x04\x50\x8e\x01\x04\x1e\x70\x6f\x72\x74\x2f\x6f\x70\x65\x72"
  "\x61\x74\x69\x6f\x6e\x2f\x72\x65\x61\x64\x2d\x73\x75\x62\x73\x74"
  "\x72\x69\x6e\x67\x8d\x01\x04\x19\x70\x6f\x72\x74\x2f\x6f\x70\x65"
  "\x72\x61\x74\x69\x6f\x6e\x2f\x70\x65\x65\x6b\x2d\x63\x68\x61\x72"
  "\x8c\x01\x04\x1b\x70\x6f\x72\x74\x2f\x6f\x70\x65\x72\x61\x74\x69"
  "\x6f\x6e\x2f\x75\x6e\x72\x65\x61\x64\x2d\x63\x68\x61\x72\x8b\x01"
  "\x04\x49\x8a\x01\x04\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d"
  "\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70\x65\x33"
  "\x10\x16\x64\x65\x66\x69\x6e\x65\x2d\x70\x6f\x72\x74\x2d\x6f\x70"
  "\x65\x72\x61\x74\x69\x6f\x6e\x4a\x89\x01\x04\x88\x01\x04\x82\x01"
  "\x83\x01\x04\x10\x70\x6f\x72\x74\x2f\x25\x6f\x70\x65\x72\x61\x74"
  "\x69\x6f\x6e\x81\x01\x04\x15\x70\x6f\x72\x74\x2f\x6f\x70\x65\x72"
  "\x61\x74\x69\x6f\x6e\x2d\x6e\x61\x6d\x65\x73\x80\x01\x04\x7e\x7f"
  "\x04\x5c\x7d\x04\x7b\x7c\x04\x79\x7a\x04\x77\x78\x04\x75\x76\x04"
  "\x71\x74\x04\x6e\x70\x04\x14\x72\x6d\x04\x15\x73\x65\x74\x2d\x70"
  "\x6f\x72\x74\x2f\x74\x72\x61\x6e\x73\x63\x72\x69\x70\x74\x21\x6c"
  "\x04\x15\x73\x65\x74\x2d\x70\x6f\x72\x74\x2f\x70\x72\x6f\x70\x65"
  "\x72\x74\x69\x65\x73\x21\x6b\x04\x13\x73\x65\x74\x2d\x70\x6f\x72"
  "\x74\x2f\x70\x72\x65\x76\x69\x6f\x75\x73\x21\x6a\x04\x12\x73\x65"
  "\x74\x2d\x70\x6f\x72\x74\x2f\x75\x6e\x72\x65\x61\x64\x3f\x21\x69"
  "\x04\x18\x73\x65\x74\x2d\x70\x6f\x72\x74\x2f\x25\x74\x68\x72\x65"
  "\x61\x64\x2d\x6d\x75\x74\x65\x78\x21\x68\x04\x11\x73\x65\x74\x2d"
  "\x70\x6f\x72\x74\x2f\x25\x73\x74\x61\x74\x65\x21\x67\x04\x10\x73"
  "\x65\x74\x2d\x70\x6f\x72\x74\x2f\x25\x74\x79\x70\x65\x21\x66\x04"
  "\x10\x70\x6f\x72\x74\x2f\x74\x72\x61\x6e\x73\x63\x72\x69\x70\x74"
  "\x65\x04\x10\x70\x6f\x72\x74\x2f\x70\x72\x6f\x70\x65\x72\x74\x69"
  "\x65\x73\x64\x04\x0e\x70\x6f\x72\x74\x2f\x70\x72\x65\x76\x69\x6f"
  "\x75\x73\x63\x04\x0d\x70\x6f\x72\x74\x2f\x75\x6e\x72\x65\x61\x64"
  "\x3f\x62\x04\x13\x70\x6f\x72\x74\x2f\x25\x74\x68\x72\x65\x61\x64"
  "\x2d\x6d\x75\x74\x65\x78\x61\x04\x0c\x70\x6f\x72\x74\x2f\x25\x73"
  "\x74\x61\x74\x65\x60\x04\x6f\x94\x01\x5f\x04\x07\x3c\x70\x6f\x72"
  "\x74\x3e\xfa\x01\x05\x70\x6f\x72\x74\x06\x25\x74\x79\x70\x65\x07"
  "\x25\x73\x74\x61\x74\x65\x0e\x25\x74\x68\x72\x65\x61\x64\x2d\x6d"
  "\x75\x74\x65\x78\x08\x75\x6e\x72\x65\x61\x64\x3f\x09\x70\x72\x65"
  "\x76\x69\x6f\x75\x73\x0b\x70\x72\x6f\x70\x65\x72\x74\x69\x65\x73"
  "\x0b\x74\x72\x61\x6e\x73\x63\x72\x69\x70\x74\x5d\x04\x5e\x04\x3b"
  "\x51\x04\x53\x59\x06\x54\x57\x04\x3c\x55\x04\x4d\x52\x04\x4c\x4f"
  "\x04\x3d\x4e\x04\x47\x4b\x04\x3a\x45\x04\x48\x46\x04\x41\x38\x37"
  "\x30\x2f\x42\x32\x34\x36\x35\x33\x43\x24\x04\x3e\x44\x06\x39\x40"
  "\x04\x2b\x2d\x04\x2c\x2a\x04\x28\x23\x04\x21\x25\x04\x0f\x69\x2f"
  "\x6f\x2d\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x3f\x20\x04\x12\x6f"
  "\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x3f"
  "\x1f\x04\x11\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72\x74\x2d\x74\x79"
  "\x70\x65\x3f\x1e\x04\x1b\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x2f"
  "\x73\x75\x70\x70\x6f\x72\x74\x73\x2d\x6f\x75\x74\x70\x75\x74\x3f"
  "\x1d\x04\x1a\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x2f\x73\x75\x70"
  "\x70\x6f\x72\x74\x73\x2d\x69\x6e\x70\x75\x74\x3f\x1c\x04\x22\x1b"
  "\x04\x18\x04\x15\x19\x16\x04\x21\x73\x65\x74\x2d\x70\x6f\x72\x74"
  "\x2d\x74\x79\x70\x65\x2f\x63\x75\x73\x74\x6f\x6d\x2d\x6f\x70\x65"
  "\x72\x61\x74\x69\x6f\x6e\x73\x21\x13\x04\x23\x73\x65\x74\x2d\x70"
  "\x6f\x72\x74\x2d\x74\x79\x70\x65\x2f\x73\x74\x61\x6e\x64\x61\x72"
  "\x64\x2d\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x73\x21\x12\x04\x25"
  "\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x2f\x64\x69\x73\x63\x72\x65"
  "\x74\x69\x6f\x6e\x61\x72\x79\x2d\x66\x6c\x75\x73\x68\x2d\x6f\x75"
  "\x74\x70\x75\x74\x10\x04\x17\x70\x6f\x72\x74\x2d\x74\x79\x70\x65"
  "\x2f\x66\x6c\x75\x73\x68\x2d\x6f\x75\x74\x70\x75\x74\x0f\x04\x16"
  "\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x2f\x6c\x69\x6e\x65\x2d\x73"
  "\x74\x61\x72\x74\x3f\x0e\x04\x15\x70\x6f\x72\x74\x2d\x74\x79\x70"
  "\x65\x2f\x66\x72\x65\x73\x68\x2d\x6c\x69\x6e\x65\x0d\x04\x1a\x70"
  "\x6f\x72\x74\x2d\x74\x79\x70\x65\x2f\x77\x72\x69\x74\x65\x2d\x73"
  "\x75\x62\x73\x74\x72\x69\x6e\x67\x0c\x04\x15\x70\x6f\x72\x74\x2d"
  "\x74\x79\x70\x65\x2f\x77\x72\x69\x74\x65\x2d\x63\x68\x61\x72\x0b"
  "\x04\x19\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x2f\x72\x65\x61\x64"
  "\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x0a\x04\x14\x70\x6f\x72"
  "\x74\x2d\x74\x79\x70\x65\x2f\x70\x65\x65\x6b\x2d\x63\x68\x61\x72"
  "\x09\x04\x16\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x2f\x75\x6e\x72"
  "\x65\x61\x64\x2d\x63\x68\x61\x72\x04\x14\x70\x6f\x72\x74\x2d\x74"
  "\x79\x70\x65\x2f\x72\x65\x61\x64\x2d\x63\x68\x61\x72\x04\x16\x70"
  "\x6f\x72\x74\x2d\x74\x79\x70\x65\x2f\x63\x68\x61\x72\x2d\x72\x65"
  "\x61\x64\x79\x3f\x04\x1c\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x2f"
  "\x63\x75\x73\x74\x6f\x6d\x2d\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e"
  "\x73\x04\x1e\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x2f\x73\x74\x61"
  "\x6e\x64\x61\x72\x64\x2d\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x73"
  "\x04\x3f\x11\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x2f\x70\x61\x72"
  "\x65\x6e\x74\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67"
  "\x6e\x6d\x65\x6e\x74\x0c\x3c\x70\x6f\x72\x74\x2d\x74\x79\x70\x65"
  "\x3e\xf5\x01\x0a\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x07\x70\x61"
  "\x72\x65\x6e\x74\x14\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x6f\x70"
  "\x65\x72\x61\x74\x69\x6f\x6e\x73\x12\x63\x75\x73\x74\x6f\x6d\x2d"
  "\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x73\x32\x36\x33\x34\x35\x38"
  "\x37\x2e\x31\x30\x2f\x0e\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63"
  "\x6f\x72\x64\x2d\x74\x79\x70\x65\x03\x19\x72\x65\x63\x6f\x72\x64"
  "\x2d\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74"
  "\x61\x67\x04\x23\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d"
  "\x64\x65\x66\x61\x75\x6c\x74\x2d\x76\x61\x6c\x75\x65\x2d\x62\x79"
  "\x2d\x69\x6e\x64\x65\x78\x04\x1f\x73\x63\x2d\x6d\x61\x63\x72\x6f"
  "\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65\x78"
  "\x70\x61\x6e\x64\x65\x72\x05\xf5\x01\xfa\x01\xfb\x01\xfd\x01\xf6"
  "\x01\xfc\x01\xf0\x01\xf9\x01\xea\x01\xf8\x01\xe3\x01\xf7\x01\x0d"
  "\x04\x21\x73\x65\x74\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70"
  "\x65\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x6d\x65\x74\x68\x6f"
  "\x64\x21\x02\xca\x01\x96\x03\x80\x80\x04\xc9\x01\x94\x03\x81\x81"
  "\x02\xc8\x01\x92\x03\x81\x81\x02\xc7\x01\x90\x03\x81\x8b\x02\xc6"
  "\x01\x8e\x03\x81\x89\x02\xc5\x01\x8c\x03\x81\x8b\x02\xc4\x01\x8a"
  "\x03\x81\x89\x02\xc3\x01\x88\x03\x81\x8b\x02\xc2\x01\x86\x03\x81"
  "\x89\x02\xc1\x01\x84\x03\x81\x8b\x02\xc0\x01\x82\x03\x81\x89\x02"
  "\xbf\x01\x80\x03\x81\x89\x02\xbe\x01\xfe\x02\x81\x87\x02\xbd\x01"
  "\xfc\x02\x81\x83\x02\xbc\x01\xfa\x02\x81\x83\x02\xbb\x01\xf8\x02"
  "\x81\x83\x02\xba\x01\xf6\x02\x81\x83\x02\xb9\x01\xf4\x02\x81\x83"
  "\x02\xb8\x01\xf2\x02\x81\x83\x02\xb7\x01\xf0\x02\x81\x83\x02\xb6"
  "\x01\xee\x02\x81\x83\x02\xb5\x01\xec\x02\x81\x83\x02\xb4\x01\xea"
  "\x02\x81\x83\x02\xb3\x01\xe8\x02\x81\x83\x02\xb2\x01\xe6\x02\x81"
  "\x83\x02\xb1\x01\xe4\x02\x81\x83\x02\xb0\x01\xe2\x02\x81\x83\x02"
  "\xaf\x01\xe0\x02\x81\x83\x02\xae\x01\xde\x02\x81\x83\x02\xad\x01"
  "\xdc\x02\x81\x83\x02\xac\x01\xda\x02\x81\x83\x02\xab\x01\xd8\x02"
  "\x81\x83\x02\xaa\x01\xd6\x02\x81\x83\x02\xa9\x01\xd4\x02\x81\x83"
  "\x02\xa8\x01\xd2\x02\x81\x83\x02\xa7\x01\xd0\x02\x81\x83\x02\xa6"
  "\x01\xce\x02\x81\x83\x02\xa5\x01\xcc\x02\x81\x83\x02\xa4\x01\xca"
  "\x02\x81\x83\x02\xa3\x01\xc8\x02\x81\x83\x02\xa2\x01\xc6\x02\x81"
  "\x83\x02\xa1\x01\xc4\x02\x81\x83\x02\xa0\x01\xc2\x02\x81\x83\x02"
  "\x9f\x01\xc0\x02\x81\x83\x02\x9e\x01\xbe\x02\x81\x83\x02\x9d\x01"
  "\xbc\x02\x81\x83\x02\x9c\x01\xba\x02\x81\x83\x02\x9b\x01\xb8\x02"
  "\x81\x83\x02\x9a\x01\xb6\x02\x81\x83\x02\x99\x01\xb4\x02\x81\x83"
  "\x02\x98\x01\xb2\x02\x81\x83\x02\x97\x01\xb0\x02\x81\x83\x02\x96"
  "\x01\xae\x02\x81\x83\x02\x95\x01\xac\x02\x81\x83\x02\x94\x01\xaa"
  "\x02\x81\x83\x02\x93\x01\xa8\x02\x81\x83\x02\x92\x01\xa6\x02\x81"
  "\x83\x02\x91\x01\xa4\x02\x81\x83\x02\x90\x01\xa2\x02\x81\x83\x02"
  "\x8f\x01\xa0\x02\x81\x83\x02\x8e\x01\x9e\x02\x81\x83\x02\x8d\x01"
  "\x9c\x02\x81\x83\x02\x8c\x01\x9a\x02\x81\x83\x02\x8b\x01\x98\x02"
  "\x81\x83\x02\x8a\x01\x96\x02\x81\x83\x02\x89\x01\x94\x02\x81\x83"
  "\x02\x88\x01\x92\x02\x81\x83\x02\x87\x01\x90\x02\x81\x83\x02\x86"
  "\x01\x8e\x02\x81\x83\x02\x85\x01\x8c\x02\x81\x83\x02\x84\x01\x8a"
  "\x02\x81\x83\x02\x83\x01\x88\x02\x81\x83\x02\x82\x01\x86\x02\x81"
  "\x83\x02\x81\x01\x84\x02\x81\x83\x02\x80\x01\x82\x02\x81\x83\x02"
  "\x7f\x80\x02\x81\x83\x02\x7e\xfe\x01\x81\x83\x02\x7d\xfc\x01\x81"
  "\x83\x02\x7c\xfa\x01\x81\x83\x02\x7b\xf8\x01\x81\x83\x02\x7a\xf6"
  "\x01\x81\x83\x02\x79\xf4\x01\x81\x83\x02\x78\xf2\x01\x81\x83\x02"
  "\x77\xf0\x01\x81\x83\x02\x76\xee\x01\x81\x83\x02\x75\xec\x01\x81"
  "\x83\x02\x74\xea\x01\x81\x87\x02\x73\xe8\x01\x81\x83\x02\x72\xe6"
  "\x01\x81\x83\x02\x71\xe4\x01\x81\x83\x02\x70\xe2\x01\x81\x83\x02"
  "\x6f\xe0\x01\x81\x83\x02\x6e\xde\x01\x81\x83\x02\x6d\xdc\x01\x81"
  "\x87\x02\x6c\xda\x01\x81\x85\x02\x6b\xd8\x01\x81\x83\x02\x6a\xd6"
  "\x01\x81\x83\x02\x69\xd4\x01\x81\x83\x02\x68\xd2\x01\x81\x83\x02"
  "\x67\xd0\x01\x81\x83\x02\x66\xce\x01\x81\x83\x02\x65\xcc\x01\x81"
  "\x83\x02\x64\xca\x01\x81\x83\x02\x63\xc8\x01\x81\x83\x02\x62\xc6"
  "\x01\x81\x83\x02\x61\xc4\x01\x81\x83\x02\x60\xc2\x01\x81\x83\x02"
  "\x5f\xc0\x01\x81\x87\x02\x5e\xbe\x01\x81\x85\x02\x5d\xbc\x01\x81"
  "\x83\x02\x5c\xba\x01\x81\x83\x02\x5b\xb8\x01\x81\x83\x02\x5a\xb6"
  "\x01\x81\x83\x02\x59\xb4\x01\x81\x83\x02\x58\xb2\x01\x81\x83\x02"
  "\x57\xb0\x01\x81\x83\x02\x56\xae\x01\x81\x83\x02\x55\xac\x01\x81"
  "\x83\x02\x54\xaa\x01\x81\x83\x02\x53\xa8\x01\x81\x83\x02\x52\xa6"
  "\x01\x81\x83\x02\x51\xa4\x01\x81\x83\x02\x50\xa2\x01\x81\x85\x02"
  "\x4f\xa0\x01\x81\x83\x02\x4e\x9e\x01\x81\x87\x02\x4d\x9c\x01\x81"
  "\x83\x02\x4c\x9a\x01\x81\x83\x02\x4b\x98\x01\x81\x83\x02\x4a\x96"
  "\x01\x81\x83\x02\x49\x94\x01\x81\x83\x02\x48\x92\x01\x81\x83\x02"
  "\x47\x90\x01\x81\x83\x02\x46\x8e\x01\x81\x83\x02\x45\x8c\x01\x81"
  "\x83\x02\x44\x8a\x01\x81\x83\x02\x43\x88\x01\x81\x83\x02\x42\x86"
  "\x01\x81\x89\x02\x41\x84\x01\x81\x83\x02\x40\x82\x01\x81\x8d\x02"
  "\x3f\x80\x01\x81\x87\x02\x3e\x7e\x81\x83\x02\x3d\x7c\x81\x8b\x02"
  "\x3c\x7a\x81\x87\x02\x3b\x78\x81\x83\x02\x3a\x76\x81\x85\x02\x39"
  "\x74\x81\x83\x02\x38\x72\x81\x85\x02\x37\x70\x81\x87\x02\x36\x6e"
  "\x81\x83\x02\x35\x6c\x81\x83\x02\x34\x6a\x81\x83\x02\x33\x68\x81"
  "\x83\x02\x32\x66\x81\x83\x02\x31\x64\x81\x83\x02\x30\x62\x81\x83"
  "\x02\x2f\x60\x81\x83\x02\x2e\x5e\x81\x83\x02\x2d\x5c\x81\x83\x02"
  "\x2c\x5a\x81\x83\x02\x2b\x58\x81\x83\x02\x2a\x56\x81\x83\x02\x29"
  "\x54\x81\x83\x02\x28\x52\x81\x83\x02\x27\x50\x81\x83\x02\x26\x4e"
  "\x81\x83\x02\x25\x4c\x81\x83\x02\x24\x4a\x81\x83\x02\x23\x48\x81"
  "\x83\x02\x22\x46\x81\x83\x02\x21\x44\x81\x83\x02\x20\x42\x81\x83"
  "\x02\x1f\x40\x81\x83\x02\x1e\x3e\x81\x83\x02\x1d\x3c\x81\x83\x02"
  "\x1c\x3a\x81\x83\x02\x1b\x38\x81\x87\x02\x1a\x36\x81\x83\x02\x19"
  "\x34\x81\x85\x02\x18\x32\x81\x83\x02\x17\x30\x81\x87\x02\x16\x2e"
  "\x81\x83\x02\x15\x2c\x81\x83\x02\x14\x2a\x81\x83\x02\x13\x28\x81"
  "\x83\x02\x12\x26\x81\x83\x02\x11\x24\x81\x83\x02\x10\x22\x81\x83"
  "\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x83\x02"
  "\x0c\x1a\x81\x83\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x83\x02\x09"
  "\x14\x81\x83\x02\x08\x12\x81\x83\x02\x07\x10\x81\x9f\x02\x06\x0e"
  "\x81\x83\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x83\x02\x03\x08\x81"
  "\x85\x02\x02\x06\x81\x87\x02\x01\x04\x81\x83\x02\x95\x03\x82\x06";

SCHEME_OBJECT *
port_so_data_3ee7bbfe21c54d89 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_port_so_data_3ee7bbfe21c54d89 [0]))), (sizeof (prog_port_so_data_3ee7bbfe21c54d89)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_212]));
}

DECLARE_COMPILED_DATA_NS ("port.so", port_so_data_3ee7bbfe21c54d89)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("port.so", "26cb6dd7931599fd")
