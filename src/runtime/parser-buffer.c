/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:47-07 by Liar version 4.118. */

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
parser_buffer_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto parser_buffer_string_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_buffer_string_3)
DEFLABEL (parser_buffer_string_0)
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
parser_buffer_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto parser_buffer_start_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_buffer_start_3)
DEFLABEL (parser_buffer_start_0)
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
parser_buffer_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto parser_buffer_end_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_buffer_end_3)
DEFLABEL (parser_buffer_end_0)
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
parser_buffer_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto parser_buffer_base_offset_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_buffer_base_offset_3)
DEFLABEL (parser_buffer_base_offset_0)
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
parser_buffer_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto parser_buffer_index_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_buffer_index_3)
DEFLABEL (parser_buffer_index_0)
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
parser_buffer_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto parser_buffer_port_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_buffer_port_3)
DEFLABEL (parser_buffer_port_0)
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
parser_buffer_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto parser_buffer_at_endP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_buffer_at_endP_3)
DEFLABEL (parser_buffer_at_endP_0)
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
parser_buffer_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto parser_buffer_line_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_buffer_line_3)
DEFLABEL (parser_buffer_line_0)
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
#define ENVIRONMENT_LABEL_9_3 8
#define DEBUGGING_LABEL_9_2 7
#define OBJECT_9_2 6
#define OBJECT_9_1 5
#define OBJECT_9_0 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_parser_buffer_stringB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_parser_buffer_stringB_3)
DEFLABEL (set_parser_buffer_stringB_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
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
parser_buffer_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_parser_buffer_startB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_parser_buffer_startB_3)
DEFLABEL (set_parser_buffer_startB_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
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
parser_buffer_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_parser_buffer_endB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_parser_buffer_endB_3)
DEFLABEL (set_parser_buffer_endB_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
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
parser_buffer_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_parser_buffer_base_offsetB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_parser_buffer_base_offsetB_3)
DEFLABEL (set_parser_buffer_base_offsetB_0)
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
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
parser_buffer_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_parser_buffer_indexB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_parser_buffer_indexB_3)
DEFLABEL (set_parser_buffer_indexB_0)
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
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
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
parser_buffer_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_parser_buffer_portB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_parser_buffer_portB_3)
DEFLABEL (set_parser_buffer_portB_0)
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
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [7]) = (Wrd10.Obj);
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
parser_buffer_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_parser_buffer_at_endPB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_parser_buffer_at_endPB_3)
DEFLABEL (set_parser_buffer_at_endPB_0)
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
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [8]) = (Wrd10.Obj);
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
parser_buffer_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_parser_buffer_lineB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_parser_buffer_lineB_3)
DEFLABEL (set_parser_buffer_lineB_0)
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
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [9]) = (Wrd10.Obj);
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
parser_buffer_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto parser_bufferP_4;

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

DEFLABEL (parser_bufferP_10)
DEFLABEL (parser_bufferP_4)
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
#define LABEL_18_7 5
#define LABEL_18_5 7
#define LABEL_18_13 9
#define LABEL_18_9 11
#define LABEL_18_11 13
#define LABEL_18_12 15
#define ENVIRONMENT_LABEL_18_3 34
#define DEBUGGING_LABEL_18_2 33
#define OBJECT_18_3 32
#define OBJECT_18_2 31
#define OBJECT_18_1 30
#define OBJECT_18_0 29
#define EXECUTE_CACHE_18_16 17
#define EXECUTE_CACHE_18_15 19
#define EXECUTE_CACHE_18_14 21
#define EXECUTE_CACHE_18_10 23
#define EXECUTE_CACHE_18_8 25
#define EXECUTE_CACHE_18_6 27
#define FREE_REFERENCES_LABEL_18_0 16
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_18_4);
      goto string__parser_buffer_12;

    case 1:
      current_block = (Rpc - LABEL_18_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_9;

    case 3:
      current_block = (Rpc - LABEL_18_13);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_18_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_18_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_18_12);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string__parser_buffer_15)
DEFLABEL (string__parser_buffer_12)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_20;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_18_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  if (! ((Wrd8.Obj) == (current_block [OBJECT_18_1])))
    goto label_19;

DEFLABEL (label_18)
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_18_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  if ((Wrd8.Obj) == (current_block [OBJECT_18_1]))
    goto label_17;
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd12.Obj) = (current_block [OBJECT_18_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_18_13);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_16)
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_18_3]);
  (Rsp [3]) = (Wrd20.Obj);
  (Rsp [4]) = (Wrd20.Obj);
  (Rsp [5]) = ((SCHEME_OBJECT) 0);
  (Wrd23.Obj) = (current_block [OBJECT_18_2]);
  (Rsp [6]) = (Wrd23.Obj);
  (Rsp [7]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_14]));

DEFLABEL (label_17)
  (Wrd16.Obj) = (current_block [OBJECT_18_3]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd16.Obj);
  goto label_16;

DEFLABEL (label_19)
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd12.Obj) = (current_block [OBJECT_18_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_18_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_16]));

DEFLABEL (label_20)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd6.Obj) = (current_block [OBJECT_18_2]);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd8.Obj) = (current_block [OBJECT_18_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_12]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_18_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_18_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [7]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_14]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_7 7
#define ENVIRONMENT_LABEL_19_3 18
#define DEBUGGING_LABEL_19_2 17
#define OBJECT_19_1 16
#define OBJECT_19_0 15
#define EXECUTE_CACHE_19_9 9
#define EXECUTE_CACHE_19_8 11
#define EXECUTE_CACHE_19_6 13
#define FREE_REFERENCES_LABEL_19_0 8
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_19_4);
      goto utf8_string__parser_buffer_3;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf8_string__parser_buffer_6)
DEFLABEL (utf8_string__parser_buffer_3)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd6.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd8.Obj) = (current_block [OBJECT_19_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_19_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [7]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_7 5
#define LABEL_20_8 7
#define LABEL_20_9 9
#define LABEL_20_5 11
#define LABEL_20_13 13
#define LABEL_20_10 15
#define LABEL_20_17 17
#define LABEL_20_18 19
#define LABEL_20_19 21
#define ENVIRONMENT_LABEL_20_3 44
#define DEBUGGING_LABEL_20_2 43
#define OBJECT_20_3 42
#define OBJECT_20_2 41
#define OBJECT_20_1 40
#define OBJECT_20_0 39
#define EXECUTE_CACHE_20_21 23
#define EXECUTE_CACHE_20_20 25
#define EXECUTE_CACHE_20_16 27
#define EXECUTE_CACHE_20_15 29
#define EXECUTE_CACHE_20_14 31
#define EXECUTE_CACHE_20_12 33
#define EXECUTE_CACHE_20_11 35
#define EXECUTE_CACHE_20_6 37
#define FREE_REFERENCES_LABEL_20_0 22
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd34;
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
      goto input_port__parser_buffer_11;

    case 1:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_20_8);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_20_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_20_13);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_20_10);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_20_17);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_20_18);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_20_19);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (input_port__parser_buffer_15)
DEFLABEL (input_port__parser_buffer_11)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_20_1])))
    goto label_17;

DEFLABEL (label_16)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_20_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_20_3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_14]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_20_13);
  (* (--Rsp)) = Rvl;
  (Rsp [6]) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (current_block [OBJECT_20_2]);
  (Rsp [7]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_16]));

DEFLABEL (label_17)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_20_7);
  (Wrd34.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd34.uLng) == 26))
    goto label_19;
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd40.Lng) == 0)
    goto label_16;

DEFLABEL (label_18)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_20_0]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_20_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_20_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_20_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_18]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_19]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd16.Obj) = (current_block [OBJECT_20_3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_20_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_20_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (Rsp [5]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_20_2]);
  (Rsp [7]) = (Wrd6.Obj);
  (Rsp [6]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_16]));

DEFLABEL (label_19)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_16;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define ENVIRONMENT_LABEL_21_3 13
#define DEBUGGING_LABEL_21_2 12
#define OBJECT_21_0 11
#define EXECUTE_CACHE_21_7 9
#define FREE_REFERENCES_LABEL_21_0 8
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto complete__match_2;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (complete__match_5)
DEFLABEL (complete__match_2)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
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
  INTERRUPT_CHECK (27, LABEL_21_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_21_0]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define ENVIRONMENT_LABEL_22_3 12
#define DEBUGGING_LABEL_22_2 11
#define EXECUTE_CACHE_22_7 7
#define EXECUTE_CACHE_22_6 9
#define FREE_REFERENCES_LABEL_22_0 6
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_22_4);
      goto Z__match_string_1;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__match_string_4)
DEFLABEL (Z__match_string_1)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define ENVIRONMENT_LABEL_23_3 12
#define DEBUGGING_LABEL_23_2 11
#define EXECUTE_CACHE_23_7 7
#define EXECUTE_CACHE_23_6 9
#define FREE_REFERENCES_LABEL_23_0 6
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_23_4);
      goto Z__match_utf8_string_1;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__match_utf8_string_4)
DEFLABEL (Z__match_utf8_string_1)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define ENVIRONMENT_LABEL_24_3 12
#define DEBUGGING_LABEL_24_2 11
#define EXECUTE_CACHE_24_7 7
#define EXECUTE_CACHE_24_6 9
#define FREE_REFERENCES_LABEL_24_0 6
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_24_4);
      goto Z__match_symbol_1;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__match_symbol_4)
DEFLABEL (Z__match_symbol_1)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_6 7
#define ENVIRONMENT_LABEL_25_3 12
#define DEBUGGING_LABEL_25_2 11
#define EXECUTE_CACHE_25_7 9
#define FREE_REFERENCES_LABEL_25_0 8
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_25_4);
      goto complete__parse_3;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (complete__parse_6)
DEFLABEL (complete__parse_3)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
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
  INTERRUPT_CHECK (27, LABEL_25_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  Rvl = (Rsp [0]);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define ENVIRONMENT_LABEL_26_3 12
#define DEBUGGING_LABEL_26_2 11
#define EXECUTE_CACHE_26_7 7
#define EXECUTE_CACHE_26_6 9
#define FREE_REFERENCES_LABEL_26_0 6
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_26_4);
      goto Z__parse_string_1;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__parse_string_4)
DEFLABEL (Z__parse_string_1)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define ENVIRONMENT_LABEL_27_3 12
#define DEBUGGING_LABEL_27_2 11
#define EXECUTE_CACHE_27_7 7
#define EXECUTE_CACHE_27_6 9
#define FREE_REFERENCES_LABEL_27_0 6
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_27_4);
      goto Z__parse_utf8_string_1;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__parse_utf8_string_4)
DEFLABEL (Z__parse_utf8_string_1)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define ENVIRONMENT_LABEL_28_3 12
#define DEBUGGING_LABEL_28_2 11
#define EXECUTE_CACHE_28_7 7
#define EXECUTE_CACHE_28_6 9
#define FREE_REFERENCES_LABEL_28_0 6
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto Z__parse_symbol_1;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__parse_symbol_4)
DEFLABEL (Z__parse_symbol_1)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_7]));

INVOKE_INTERFACE_TARGET_1
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
parser_buffer_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto parser_buffer_pointer_index_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_buffer_pointer_index_3)
DEFLABEL (parser_buffer_pointer_index_0)
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
parser_buffer_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto parser_buffer_pointer_line_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_buffer_pointer_line_3)
DEFLABEL (parser_buffer_pointer_line_0)
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
#define LABEL_31_5 5
#define LABEL_31_6 7
#define LABEL_31_7 9
#define ENVIRONMENT_LABEL_31_3 17
#define DEBUGGING_LABEL_31_2 16
#define OBJECT_31_3 15
#define OBJECT_31_2 14
#define OBJECT_31_1 13
#define OBJECT_31_0 12
#define FREE_REFERENCE_31_0 11
#define FREE_REFERENCES_LABEL_31_0 10
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_31_4);
      goto parser_buffer_pointerP_4;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_31_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_31_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_buffer_pointerP_10)
DEFLABEL (parser_buffer_pointerP_4)
  INTERRUPT_CHECK (26, LABEL_31_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
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
  Rvl = (current_block [OBJECT_31_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_31_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_6 7
#define LABEL_32_7 9
#define LABEL_32_8 11
#define ENVIRONMENT_LABEL_32_3 20
#define DEBUGGING_LABEL_32_2 19
#define OBJECT_32_3 18
#define OBJECT_32_2 17
#define OBJECT_32_1 16
#define OBJECT_32_0 15
#define EXECUTE_CACHE_32_9 13
#define FREE_REFERENCES_LABEL_32_0 12
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd49;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd43;
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
      current_block = (Rpc - LABEL_32_4);
      goto get_parser_buffer_pointer_4;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_32_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_32_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_32_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_parser_buffer_pointer_11)
DEFLABEL (get_parser_buffer_pointer_4)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_19;
  (Wrd7.Obj) = ((Wrd11.pObj) [6]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_18)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_17;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd29.Lng))))
    goto label_17;
  (Wrd21.Obj) = ((Wrd27.pObj) [5]);

DEFLABEL (label_16)
  (Wrd37.Obj) = (* (Rsp++));
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd43.uLng) == 26))
    goto label_15;
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd44.uLng) == 26))
    goto label_15;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd45.Lng) = ((Wrd46.Lng) + (Wrd47.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd45.Lng)))
    goto label_15;
  (Wrd48.Obj) = (LONG_TO_FIXNUM (Wrd45.Lng));
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_14)
  (Wrd58.Obj) = (Rsp [1]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 62))
    goto label_13;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd57.Lng))))
    goto label_13;
  (Wrd49.Obj) = ((Wrd55.pObj) [9]);

DEFLABEL (label_12)
  (Rsp [1]) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_9]));

DEFLABEL (label_13)
  (Wrd60.Obj) = (Rsp [1]);
  (Wrd61.Obj) = (current_block [OBJECT_32_3]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_9)
  (Wrd49.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_32_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_7)
  (Wrd21.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_32_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_7 7
#define LABEL_33_8 9
#define ENVIRONMENT_LABEL_33_3 20
#define DEBUGGING_LABEL_33_2 19
#define OBJECT_33_5 18
#define OBJECT_33_4 17
#define OBJECT_33_3 16
#define OBJECT_33_2 15
#define OBJECT_33_1 14
#define OBJECT_33_0 13
#define EXECUTE_CACHE_33_6 11
#define FREE_REFERENCES_LABEL_33_0 10
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd45;
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
      current_block = (Rpc - LABEL_33_4);
      goto set_parser_buffer_pointerB_3;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_33_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_33_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_parser_buffer_pointerB_8)
DEFLABEL (set_parser_buffer_pointerB_3)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (Wrd5.Obj) = Rvl;
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 62))
    goto label_14;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd44.Lng))))
    goto label_14;
  ((Wrd42.pObj) [6]) = Rvl;

DEFLABEL (label_13)
  (Wrd6.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_33_2]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_12;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_12;
  (Wrd8.Obj) = ((Wrd14.pObj) [3]);

DEFLABEL (label_11)
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 62)
    goto label_10;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 3);

DEFLABEL (label_10)
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd34.Lng))))
    goto label_9;
  ((Wrd32.pObj) [9]) = (Wrd8.Obj);
  Rvl = (current_block [OBJECT_33_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_33_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_4]), 2);

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.Obj) = (current_block [OBJECT_33_0]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 3);

DEFLABEL (label_6)
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define ENVIRONMENT_LABEL_34_3 12
#define DEBUGGING_LABEL_34_2 11
#define EXECUTE_CACHE_34_6 7
#define FREE_REFERENCE_34_0 10
#define FREE_REFERENCES_LABEL_34_0 6
#define NUMBER_OF_LINKER_SECTIONS_34_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_34_4);
      goto get_parser_buffer_tail_0;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_parser_buffer_tail_4)
DEFLABEL (get_parser_buffer_tail_0)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_6;
  Wrd8 = Wrd12;

DEFLABEL (label_5)
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_5])), (Wrd9.pObj));

DEFLABEL (label_2)
  (Wrd8.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_7 7
#define LABEL_35_8 9
#define ENVIRONMENT_LABEL_35_3 17
#define DEBUGGING_LABEL_35_2 16
#define OBJECT_35_2 15
#define OBJECT_35_1 14
#define OBJECT_35_0 13
#define EXECUTE_CACHE_35_6 11
#define FREE_REFERENCES_LABEL_35_0 10
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd22;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_35_4);
      goto call_with_parser_buffer_tail_3;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_35_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_35_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_with_parser_buffer_tail_8)
DEFLABEL (call_with_parser_buffer_tail_3)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (Rsp [2]) = Rvl;
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_12;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd14.Lng))))
    goto label_12;
  (Wrd6.Obj) = ((Wrd12.pObj) [6]);

DEFLABEL (label_11)
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_10;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd30.Lng))))
    goto label_10;
  (Wrd22.Obj) = ((Wrd28.pObj) [2]);

DEFLABEL (label_9)
  (Rsp [1]) = (Wrd22.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_10)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.Obj) = (current_block [OBJECT_35_2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_8]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_6)
  (Wrd22.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_35_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_5)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_8 7
#define LABEL_36_9 9
#define LABEL_36_10 11
#define LABEL_36_12 13
#define LABEL_36_13 15
#define LABEL_36_11 17
#define ENVIRONMENT_LABEL_36_3 35
#define DEBUGGING_LABEL_36_2 34
#define OBJECT_36_6 33
#define OBJECT_36_5 32
#define OBJECT_36_4 31
#define OBJECT_36_3 30
#define OBJECT_36_2 29
#define OBJECT_36_1 28
#define OBJECT_36_0 27
#define EXECUTE_CACHE_36_15 19
#define EXECUTE_CACHE_36_14 21
#define EXECUTE_CACHE_36_7 23
#define EXECUTE_CACHE_36_6 25
#define FREE_REFERENCES_LABEL_36_0 18
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd73;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd70;
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
  machine_word Wrd44;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd45;
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
  machine_word Wrd16;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
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
      current_block = (Rpc - LABEL_36_4);
      goto pointer__index_8;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_36_8);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_36_9);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_36_10);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_36_12);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_36_13);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_36_11);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pointer__index_16)
DEFLABEL (pointer__index_8)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;
  (Wrd87.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd88.Obj) = (current_block [OBJECT_36_0]);
  (Rsp [1]) = (Wrd88.Obj);
  (Wrd89.Obj) = (current_block [OBJECT_36_1]);
  (Rsp [2]) = (Wrd89.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_7]));

DEFLABEL (label_17)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_28;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd15.Lng))))
    goto label_28;
  (Wrd9.Obj) = ((Wrd13.pObj) [5]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_27)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_26;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd31.Lng))))
    goto label_26;
  (Wrd23.Obj) = ((Wrd29.pObj) [2]);

DEFLABEL (label_25)
  (Wrd39.Obj) = (* (Rsp++));
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd45.uLng) == 26))
    goto label_24;
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_24;
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd47.Lng) = ((Wrd48.Lng) - (Wrd49.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd47.Lng)))
    goto label_24;
  (Wrd50.Obj) = (LONG_TO_FIXNUM (Wrd47.Lng));
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_23)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_11]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd63.Obj) = (Rsp [3]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 62))
    goto label_22;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd62.Lng))))
    goto label_22;
  (Wrd56.Obj) = ((Wrd60.pObj) [6]);
  (* (--Rsp)) = (Wrd56.Obj);

DEFLABEL (label_21)
  (Wrd70.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd80.Obj) = (Rsp [5]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 62))
    goto label_20;
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd78.Obj) = ((Wrd77.pObj) [0]);
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd78.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd79.Lng))))
    goto label_20;
  (Wrd73.Obj) = ((Wrd77.pObj) [3]);
  (* (--Rsp)) = (Wrd73.Obj);

DEFLABEL (label_19)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_36_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd9.Obj) = (current_block [OBJECT_36_1]);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_15]));

DEFLABEL (label_20)
  (Wrd82.Obj) = (Rsp [5]);
  (Wrd83.Obj) = (current_block [OBJECT_36_6]);
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_13]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd65.Obj) = (Rsp [3]);
  (Wrd66.Obj) = (current_block [OBJECT_36_5]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_12]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_10]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_36_4]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_9]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 2);

DEFLABEL (label_11)
  (Wrd23.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_36_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_6 5
#define LABEL_37_5 7
#define LABEL_37_10 9
#define LABEL_37_11 11
#define LABEL_37_9 13
#define LABEL_37_14 15
#define LABEL_37_15 17
#define LABEL_37_13 19
#define ENVIRONMENT_LABEL_37_3 35
#define DEBUGGING_LABEL_37_2 34
#define OBJECT_37_4 33
#define OBJECT_37_3 32
#define OBJECT_37_2 31
#define OBJECT_37_1 30
#define OBJECT_37_0 29
#define EXECUTE_CACHE_37_16 21
#define EXECUTE_CACHE_37_12 23
#define EXECUTE_CACHE_37_8 25
#define EXECUTE_CACHE_37_7 27
#define FREE_REFERENCES_LABEL_37_0 20
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd37;
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
      current_block = (Rpc - LABEL_37_4);
      goto parser_buffer_position_string_9;

    case 1:
      current_block = (Rpc - LABEL_37_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_37_10);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_37_11);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_37_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_37_14);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_37_15);
      goto label_14;

    case 8:
      current_block = (Rpc - LABEL_37_13);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_buffer_position_string_16)
DEFLABEL (parser_buffer_position_string_9)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_26;
  (Wrd37.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_25)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_37_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_24;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_24;
  (Wrd10.Obj) = ((Wrd16.pObj) [3]);

DEFLABEL (label_23)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_22;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd31.Lng) = ((Wrd32.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd31.Lng)))
    goto label_22;
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd31.Lng));
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_37_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_37_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_20;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_20;
  (Wrd9.Obj) = ((Wrd15.pObj) [2]);

DEFLABEL (label_19)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_18;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd30.Lng) = ((Wrd31.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd30.Lng)))
    goto label_18;
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd30.Lng));
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_17)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_37_13);
  (Rsp [3]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_16]));

DEFLABEL (label_18)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_15]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.Obj) = (current_block [OBJECT_37_4]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_14]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 2);

DEFLABEL (label_13)
  (Wrd9.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_11]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_37_1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 2);

DEFLABEL (label_11)
  (Wrd10.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd5.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [1]));
  goto label_25;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_8 7
#define LABEL_38_6 9
#define ENVIRONMENT_LABEL_38_3 22
#define DEBUGGING_LABEL_38_2 21
#define OBJECT_38_3 20
#define OBJECT_38_2 19
#define OBJECT_38_1 18
#define OBJECT_38_0 17
#define EXECUTE_CACHE_38_9 11
#define EXECUTE_CACHE_38_7 13
#define FREE_REFERENCE_38_0 16
#define FREE_REFERENCES_LABEL_38_0 10
#define NUMBER_OF_LINKER_SECTIONS_38_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_38_4);
      goto parser_buffer_error_5;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_38_8);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_38_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_buffer_error_9)
DEFLABEL (parser_buffer_error_5)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd9.uLng) == 1)
    goto label_11;
  (Wrd10.Obj) = (current_block [OBJECT_38_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto label_10;

DEFLABEL (label_11)
  (Wrd15.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_10)
DEFLABEL (label_14)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_38_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_38_5);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_13;
  Wrd11 = Wrd15;

DEFLABEL (label_12)
  (Rsp [1]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 2);

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_8])), (Wrd12.pObj));

DEFLABEL (label_7)
  (Wrd11.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_5 3
#define LABEL_39_4 5
#define LABEL_39_6 7
#define LABEL_39_7 9
#define LABEL_39_10 11
#define LABEL_39_11 13
#define LABEL_39_9 15
#define LABEL_39_13 17
#define LABEL_39_14 19
#define LABEL_39_15 21
#define LABEL_39_16 23
#define ENVIRONMENT_LABEL_39_3 37
#define DEBUGGING_LABEL_39_2 36
#define OBJECT_39_6 35
#define OBJECT_39_5 34
#define OBJECT_39_4 33
#define OBJECT_39_3 32
#define OBJECT_39_2 31
#define OBJECT_39_1 30
#define OBJECT_39_0 29
#define EXECUTE_CACHE_39_12 25
#define EXECUTE_CACHE_39_8 27
#define FREE_REFERENCES_LABEL_39_0 24
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd62;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd24;
  machine_word Wrd78;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd5;
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
  machine_word Wrd45;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_39_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_39_4);
      goto read_parser_buffer_char_16;

    case 2:
      current_block = (Rpc - LABEL_39_6);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_39_7);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_39_10);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_39_11);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_39_9);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_39_13);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_39_14);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_39_15);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_39_16);
      goto label_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_parser_buffer_char_27)
DEFLABEL (read_parser_buffer_char_16)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_45;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_45;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_44)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_43;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_43;
  (Wrd21.Obj) = ((Wrd27.pObj) [6]);

DEFLABEL (label_42)
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd39.Lng) = ((Wrd38.Lng) + 1L);
  (Wrd40.Obj) = (* (Rsp++));
  Wrd41 = Wrd39;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! ((Wrd41.Lng) > (Wrd42.Lng)))
    goto label_28;
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = (current_block [OBJECT_39_3]);
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd82.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_39_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_28;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_41;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd54.Lng))))
    goto label_41;
  (Wrd48.Obj) = ((Wrd52.pObj) [6]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_40)
  (Wrd71.Obj) = (Rsp [2]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 62))
    goto label_39;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd70.Lng))))
    goto label_39;
  (Wrd64.Obj) = ((Wrd68.pObj) [2]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_38)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_39_9);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_37;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_37;
  (Wrd5.Obj) = ((Wrd11.pObj) [6]);

DEFLABEL (label_36)
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd23.Lng) = ((Wrd22.Lng) + 1L);
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));
  (Wrd71.Obj) = (Rsp [1]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 62))
    goto label_35;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd70.Lng))))
    goto label_35;
  ((Wrd68.pObj) [6]) = (Wrd21.Obj);

DEFLABEL (label_34)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == (current_block [OBJECT_39_5]))
    goto label_30;

DEFLABEL (label_29)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_33;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd36.Lng))))
    goto label_33;
  (Wrd28.Obj) = ((Wrd34.pObj) [9]);

DEFLABEL (label_32)
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd46.Lng) = ((Wrd45.Lng) + 1L);
  (Wrd44.Obj) = (LONG_TO_FIXNUM (Wrd46.Lng));
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_31;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd54.Lng))))
    goto label_31;
  ((Wrd52.pObj) [9]) = (Wrd44.Obj);
  goto label_29;

DEFLABEL (label_31)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (current_block [OBJECT_39_6]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_16]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_4]), 3);

DEFLABEL (label_24)
  goto label_29;

DEFLABEL (label_33)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (current_block [OBJECT_39_6]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_15]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_23)
  (Wrd28.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd73.Obj) = (Rsp [1]);
  (Wrd74.Obj) = (current_block [OBJECT_39_2]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_14]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_4]), 3);

DEFLABEL (label_25)
  goto label_34;

DEFLABEL (label_37)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_39_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_22)
  (Wrd5.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd73.Obj) = (Rsp [2]);
  (Wrd74.Obj) = (current_block [OBJECT_39_3]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_11]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (current_block [OBJECT_39_2]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_10]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_39_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_19)
  (Wrd21.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_39_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_44;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_5 3
#define LABEL_40_4 5
#define LABEL_40_6 7
#define LABEL_40_7 9
#define LABEL_40_9 11
#define LABEL_40_10 13
#define ENVIRONMENT_LABEL_40_3 24
#define DEBUGGING_LABEL_40_2 23
#define OBJECT_40_3 22
#define OBJECT_40_2 21
#define OBJECT_40_1 20
#define OBJECT_40_0 19
#define EXECUTE_CACHE_40_11 15
#define EXECUTE_CACHE_40_8 17
#define FREE_REFERENCES_LABEL_40_0 14
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd45;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_40_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_40_4);
      goto peek_parser_buffer_char_7;

    case 2:
      current_block = (Rpc - LABEL_40_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_40_7);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_40_9);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_40_10);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (peek_parser_buffer_char_14)
DEFLABEL (peek_parser_buffer_char_7)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_23;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_23;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_22)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_21;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_21;
  (Wrd21.Obj) = ((Wrd27.pObj) [6]);

DEFLABEL (label_20)
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd39.Lng) = ((Wrd38.Lng) + 1L);
  (Wrd40.Obj) = (* (Rsp++));
  Wrd41 = Wrd39;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! ((Wrd41.Lng) > (Wrd42.Lng)))
    goto label_15;
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd78.Obj) = (current_block [OBJECT_40_3]);
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd79.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd79.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_40_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 62))
    goto label_19;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd51.Lng))))
    goto label_19;
  (Wrd45.Obj) = ((Wrd49.pObj) [2]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_18)
  (Wrd68.Obj) = (Rsp [1]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 62))
    goto label_17;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [0]);
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd67.Lng))))
    goto label_17;
  (Wrd59.Obj) = ((Wrd65.pObj) [6]);

DEFLABEL (label_16)
  (Rsp [1]) = (Wrd59.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_11]));

DEFLABEL (label_17)
  (Wrd70.Obj) = (Rsp [1]);
  (Wrd71.Obj) = (current_block [OBJECT_40_2]);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_10]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 2);

DEFLABEL (label_12)
  (Wrd59.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.Obj) = (current_block [OBJECT_40_3]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_9]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_40_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 2);

DEFLABEL (label_10)
  (Wrd21.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_40_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_5 3
#define LABEL_41_6 5
#define LABEL_41_4 7
#define LABEL_41_7 9
#define LABEL_41_8 11
#define LABEL_41_10 13
#define LABEL_41_11 15
#define ENVIRONMENT_LABEL_41_3 30
#define DEBUGGING_LABEL_41_2 29
#define OBJECT_41_5 28
#define OBJECT_41_4 27
#define OBJECT_41_3 26
#define OBJECT_41_2 25
#define OBJECT_41_1 24
#define OBJECT_41_0 23
#define EXECUTE_CACHE_41_13 17
#define EXECUTE_CACHE_41_12 19
#define EXECUTE_CACHE_41_9 21
#define FREE_REFERENCES_LABEL_41_0 16
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd76;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd71;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd55;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd99;
  machine_word Wrd94;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd5;
  INVOKE_INTERFACE_DECLS
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
      goto continuation_8;

    case 1:
      current_block = (Rpc - LABEL_41_6);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_41_4);
      goto parser_buffer_ref_12;

    case 3:
      current_block = (Rpc - LABEL_41_7);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_41_8);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_41_10);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_41_11);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_buffer_ref_19)
DEFLABEL (parser_buffer_ref_12)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd5.Obj) = (Rsp [1]);
  if (INDEX_FIXNUM_P (Wrd5.Obj))
    goto label_29;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_6]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_41_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_41_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_41_6);

DEFLABEL (label_29)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_28;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd20.Lng))))
    goto label_28;
  (Wrd14.Obj) = ((Wrd18.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_27)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_26;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd36.Lng))))
    goto label_26;
  (Wrd28.Obj) = ((Wrd34.pObj) [6]);

DEFLABEL (label_25)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd47.Lng) = ((Wrd46.Lng) + 1L);
  (Wrd44.Obj) = (LONG_TO_FIXNUM (Wrd47.Lng));
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd51.Lng) = ((Wrd49.Lng) + (Wrd47.Lng));
  (Wrd52.Obj) = (* (Rsp++));
  Wrd53 = Wrd51;
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! ((Wrd53.Lng) > (Wrd54.Lng)))
    goto label_20;
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd99.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd99.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_41_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_20;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd64.Obj) = (Rsp [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 62))
    goto label_24;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd63.Lng))))
    goto label_24;
  (Wrd55.Obj) = ((Wrd61.pObj) [6]);

DEFLABEL (label_23)
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  (Wrd73.Obj) = (Rsp [1]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  (Wrd75.Lng) = ((Wrd72.Lng) + (Wrd74.Lng));
  (Wrd71.Obj) = (LONG_TO_FIXNUM (Wrd75.Lng));
  (Rsp [1]) = (Wrd71.Obj);
  (Wrd85.Obj) = (Rsp [0]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 62))
    goto label_22;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [0]);
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd83.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd84.Lng))))
    goto label_22;
  (Wrd76.Obj) = ((Wrd82.pObj) [2]);

DEFLABEL (label_21)
  (Rsp [0]) = (Wrd76.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_12]));

DEFLABEL (label_22)
  (Wrd87.Obj) = (Rsp [0]);
  (Wrd88.Obj) = (current_block [OBJECT_41_3]);
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_11]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_17)
  (Wrd76.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd67.Obj) = (current_block [OBJECT_41_2]);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_10]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_16)
  (Wrd55.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (current_block [OBJECT_41_2]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_15)
  (Wrd28.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_41_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_5 3
#define LABEL_42_4 5
#define LABEL_42_6 7
#define LABEL_42_7 9
#define LABEL_42_10 11
#define LABEL_42_11 13
#define LABEL_42_9 15
#define LABEL_42_13 17
#define LABEL_42_14 19
#define LABEL_42_15 21
#define LABEL_42_16 23
#define ENVIRONMENT_LABEL_42_3 38
#define DEBUGGING_LABEL_42_2 37
#define OBJECT_42_7 36
#define OBJECT_42_6 35
#define OBJECT_42_5 34
#define OBJECT_42_4 33
#define OBJECT_42_3 32
#define OBJECT_42_2 31
#define OBJECT_42_1 30
#define OBJECT_42_0 29
#define EXECUTE_CACHE_42_12 25
#define EXECUTE_CACHE_42_8 27
#define FREE_REFERENCES_LABEL_42_0 24
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd78;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd6;
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
  machine_word Wrd45;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_42_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_42_4);
      goto match_parser_buffer_char_17;

    case 2:
      current_block = (Rpc - LABEL_42_6);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_42_7);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_42_10);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_42_11);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_42_9);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_42_13);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_42_14);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_42_15);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_42_16);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_parser_buffer_char_28)
DEFLABEL (match_parser_buffer_char_17)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_48;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_48;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_47)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_46;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_46;
  (Wrd21.Obj) = ((Wrd27.pObj) [6]);

DEFLABEL (label_45)
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd39.Lng) = ((Wrd38.Lng) + 1L);
  (Wrd40.Obj) = (* (Rsp++));
  Wrd41 = Wrd39;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! ((Wrd41.Lng) > (Wrd42.Lng)))
    goto label_29;
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = (current_block [OBJECT_42_3]);
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd82.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_42_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_44;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd54.Lng))))
    goto label_44;
  (Wrd48.Obj) = ((Wrd52.pObj) [6]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_43)
  (Wrd71.Obj) = (Rsp [2]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 62))
    goto label_42;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd70.Lng))))
    goto label_42;
  (Wrd64.Obj) = ((Wrd68.pObj) [2]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_41)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_42_9);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  if (Rvl == (Wrd6.Obj))
    goto label_31;
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_30)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_40;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_40;
  (Wrd9.Obj) = ((Wrd15.pObj) [6]);

DEFLABEL (label_39)
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd27.Lng) = ((Wrd26.Lng) + 1L);
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));
  (Wrd75.Obj) = (Rsp [1]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 62))
    goto label_38;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd74.Lng))))
    goto label_38;
  ((Wrd72.pObj) [6]) = (Wrd25.Obj);

DEFLABEL (label_37)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd28.Obj) == (current_block [OBJECT_42_5]))
    goto label_33;

DEFLABEL (label_32)
  Rvl = (current_block [OBJECT_42_7]);
  goto label_30;

DEFLABEL (label_33)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_36;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd40.Lng))))
    goto label_36;
  (Wrd32.Obj) = ((Wrd38.pObj) [9]);

DEFLABEL (label_35)
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd50.Lng) = ((Wrd49.Lng) + 1L);
  (Wrd48.Obj) = (LONG_TO_FIXNUM (Wrd50.Lng));
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 62))
    goto label_34;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd58.Lng))))
    goto label_34;
  ((Wrd56.pObj) [9]) = (Wrd48.Obj);
  goto label_32;

DEFLABEL (label_34)
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd62.Obj) = (current_block [OBJECT_42_6]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_16]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_4]), 3);

DEFLABEL (label_25)
  goto label_32;

DEFLABEL (label_36)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (current_block [OBJECT_42_6]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_15]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_24)
  (Wrd32.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd77.Obj) = (Rsp [1]);
  (Wrd78.Obj) = (current_block [OBJECT_42_2]);
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_14]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_4]), 3);

DEFLABEL (label_26)
  goto label_37;

DEFLABEL (label_40)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_42_2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_13]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_23)
  (Wrd9.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd73.Obj) = (Rsp [2]);
  (Wrd74.Obj) = (current_block [OBJECT_42_3]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_11]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (current_block [OBJECT_42_2]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_10]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_42_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_20)
  (Wrd21.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_42_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_47;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_5 3
#define LABEL_43_4 5
#define LABEL_43_6 7
#define LABEL_43_7 9
#define LABEL_43_10 11
#define LABEL_43_11 13
#define LABEL_43_9 15
#define LABEL_43_13 17
#define LABEL_43_14 19
#define LABEL_43_15 21
#define LABEL_43_16 23
#define ENVIRONMENT_LABEL_43_3 38
#define DEBUGGING_LABEL_43_2 37
#define OBJECT_43_7 36
#define OBJECT_43_6 35
#define OBJECT_43_5 34
#define OBJECT_43_4 33
#define OBJECT_43_3 32
#define OBJECT_43_2 31
#define OBJECT_43_1 30
#define OBJECT_43_0 29
#define EXECUTE_CACHE_43_12 25
#define EXECUTE_CACHE_43_8 27
#define FREE_REFERENCES_LABEL_43_0 24
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd6;
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
  machine_word Wrd45;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_43_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_43_4);
      goto match_parser_buffer_not_char_17;

    case 2:
      current_block = (Rpc - LABEL_43_6);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_43_7);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_43_10);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_43_11);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_43_9);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_43_13);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_43_14);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_43_15);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_43_16);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_parser_buffer_not_char_28)
DEFLABEL (match_parser_buffer_not_char_17)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_48;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_48;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_47)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_46;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_46;
  (Wrd21.Obj) = ((Wrd27.pObj) [6]);

DEFLABEL (label_45)
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd39.Lng) = ((Wrd38.Lng) + 1L);
  (Wrd40.Obj) = (* (Rsp++));
  Wrd41 = Wrd39;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! ((Wrd41.Lng) > (Wrd42.Lng)))
    goto label_29;
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = (current_block [OBJECT_43_3]);
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd82.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_43_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_44;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd54.Lng))))
    goto label_44;
  (Wrd48.Obj) = ((Wrd52.pObj) [6]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_43)
  (Wrd71.Obj) = (Rsp [2]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 62))
    goto label_42;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd70.Lng))))
    goto label_42;
  (Wrd64.Obj) = ((Wrd68.pObj) [2]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_41)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_43_9);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  if (Rvl == (Wrd6.Obj))
    goto label_40;
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_39;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd15.Lng))))
    goto label_39;
  (Wrd7.Obj) = ((Wrd13.pObj) [6]);

DEFLABEL (label_38)
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd25.Lng) = ((Wrd24.Lng) + 1L);
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));
  (Wrd73.Obj) = (Rsp [1]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 62))
    goto label_37;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [0]);
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd72.Lng))))
    goto label_37;
  ((Wrd70.pObj) [6]) = (Wrd23.Obj);

DEFLABEL (label_36)
  (Wrd26.Obj) = (Rsp [0]);
  if ((Wrd26.Obj) == (current_block [OBJECT_43_5]))
    goto label_32;

DEFLABEL (label_31)
  Rvl = (current_block [OBJECT_43_7]);

DEFLABEL (label_30)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_35;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd38.Lng))))
    goto label_35;
  (Wrd30.Obj) = ((Wrd36.pObj) [9]);

DEFLABEL (label_34)
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd48.Lng) = ((Wrd47.Lng) + 1L);
  (Wrd46.Obj) = (LONG_TO_FIXNUM (Wrd48.Lng));
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 62))
    goto label_33;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd56.Lng))))
    goto label_33;
  ((Wrd54.pObj) [9]) = (Wrd46.Obj);
  goto label_31;

DEFLABEL (label_33)
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.Obj) = (current_block [OBJECT_43_6]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_16]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_4]), 3);

DEFLABEL (label_25)
  goto label_31;

DEFLABEL (label_35)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_43_6]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_15]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_24)
  (Wrd30.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd75.Obj) = (Rsp [1]);
  (Wrd76.Obj) = (current_block [OBJECT_43_2]);
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_14]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_4]), 3);

DEFLABEL (label_26)
  goto label_36;

DEFLABEL (label_39)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_43_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_13]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_23)
  (Wrd7.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_40)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_30;

DEFLABEL (label_42)
  (Wrd73.Obj) = (Rsp [2]);
  (Wrd74.Obj) = (current_block [OBJECT_43_3]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_11]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (current_block [OBJECT_43_2]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_10]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_43_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_20)
  (Wrd21.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_43_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_47;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_5 3
#define LABEL_44_4 5
#define LABEL_44_6 7
#define LABEL_44_7 9
#define LABEL_44_10 11
#define LABEL_44_11 13
#define LABEL_44_9 15
#define ENVIRONMENT_LABEL_44_3 27
#define DEBUGGING_LABEL_44_2 26
#define OBJECT_44_4 25
#define OBJECT_44_3 24
#define OBJECT_44_2 23
#define OBJECT_44_1 22
#define OBJECT_44_0 21
#define EXECUTE_CACHE_44_12 17
#define EXECUTE_CACHE_44_8 19
#define FREE_REFERENCES_LABEL_44_0 16
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
  machine_word Wrd45;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
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
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_44_4);
      goto match_parser_buffer_char_no_advance_8;

    case 2:
      current_block = (Rpc - LABEL_44_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_44_7);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_44_10);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_44_11);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_44_9);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_parser_buffer_char_no_advance_15)
DEFLABEL (match_parser_buffer_char_no_advance_8)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_27;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_27;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_26)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_25;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_25;
  (Wrd21.Obj) = ((Wrd27.pObj) [6]);

DEFLABEL (label_24)
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd39.Lng) = ((Wrd38.Lng) + 1L);
  (Wrd40.Obj) = (* (Rsp++));
  Wrd41 = Wrd39;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! ((Wrd41.Lng) > (Wrd42.Lng)))
    goto label_16;
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = (current_block [OBJECT_44_3]);
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd82.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_44_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_16;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_23;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd54.Lng))))
    goto label_23;
  (Wrd48.Obj) = ((Wrd52.pObj) [6]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_22)
  (Wrd71.Obj) = (Rsp [2]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 62))
    goto label_21;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd70.Lng))))
    goto label_21;
  (Wrd64.Obj) = ((Wrd68.pObj) [2]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_20)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_44_9);
  (Wrd7.Obj) = (Rsp [1]);
  if (Rvl == (Wrd7.Obj))
    goto label_18;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_17;

DEFLABEL (label_18)
  Rvl = (current_block [OBJECT_44_4]);

DEFLABEL (label_17)
DEFLABEL (label_19)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd73.Obj) = (Rsp [2]);
  (Wrd74.Obj) = (current_block [OBJECT_44_3]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_11]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (current_block [OBJECT_44_2]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_10]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_44_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_11)
  (Wrd21.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_44_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_5 3
#define LABEL_45_4 5
#define LABEL_45_6 7
#define LABEL_45_7 9
#define LABEL_45_10 11
#define LABEL_45_11 13
#define LABEL_45_9 15
#define ENVIRONMENT_LABEL_45_3 27
#define DEBUGGING_LABEL_45_2 26
#define OBJECT_45_4 25
#define OBJECT_45_3 24
#define OBJECT_45_2 23
#define OBJECT_45_1 22
#define OBJECT_45_0 21
#define EXECUTE_CACHE_45_12 17
#define EXECUTE_CACHE_45_8 19
#define FREE_REFERENCES_LABEL_45_0 16
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
  machine_word Wrd45;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_45_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_45_4);
      goto match_parser_buffer_not_char_no_advance_9;

    case 2:
      current_block = (Rpc - LABEL_45_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_45_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_45_10);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_45_11);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_45_9);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_parser_buffer_not_char_no_advance_16)
DEFLABEL (match_parser_buffer_not_char_no_advance_9)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_28;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_28;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_27)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_26;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_26;
  (Wrd21.Obj) = ((Wrd27.pObj) [6]);

DEFLABEL (label_25)
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd39.Lng) = ((Wrd38.Lng) + 1L);
  (Wrd40.Obj) = (* (Rsp++));
  Wrd41 = Wrd39;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! ((Wrd41.Lng) > (Wrd42.Lng)))
    goto label_17;
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = (current_block [OBJECT_45_3]);
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd82.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_45_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_24;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd54.Lng))))
    goto label_24;
  (Wrd48.Obj) = ((Wrd52.pObj) [6]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_23)
  (Wrd71.Obj) = (Rsp [2]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 62))
    goto label_22;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd70.Lng))))
    goto label_22;
  (Wrd64.Obj) = ((Wrd68.pObj) [2]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_45_9);
  (Wrd6.Obj) = (Rsp [1]);
  if (Rvl == (Wrd6.Obj))
    goto label_19;
  Rvl = (current_block [OBJECT_45_4]);
  goto label_18;

DEFLABEL (label_19)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_18)
DEFLABEL (label_20)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd73.Obj) = (Rsp [2]);
  (Wrd74.Obj) = (current_block [OBJECT_45_3]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_11]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (current_block [OBJECT_45_2]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_10]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_45_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 2);

DEFLABEL (label_12)
  (Wrd21.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_45_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_5 3
#define LABEL_46_4 5
#define LABEL_46_6 7
#define LABEL_46_7 9
#define LABEL_46_10 11
#define LABEL_46_11 13
#define LABEL_46_9 15
#define LABEL_46_13 17
#define LABEL_46_15 19
#define LABEL_46_16 21
#define LABEL_46_17 23
#define LABEL_46_18 25
#define ENVIRONMENT_LABEL_46_3 42
#define DEBUGGING_LABEL_46_2 41
#define OBJECT_46_7 40
#define OBJECT_46_6 39
#define OBJECT_46_5 38
#define OBJECT_46_4 37
#define OBJECT_46_3 36
#define OBJECT_46_2 35
#define OBJECT_46_1 34
#define OBJECT_46_0 33
#define EXECUTE_CACHE_46_14 27
#define EXECUTE_CACHE_46_12 29
#define EXECUTE_CACHE_46_8 31
#define FREE_REFERENCES_LABEL_46_0 26
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd8;
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
  machine_word Wrd45;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_46_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_46_4);
      goto match_parser_buffer_char_ci_17;

    case 2:
      current_block = (Rpc - LABEL_46_6);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_46_7);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_46_10);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_46_11);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_46_9);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_46_13);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_46_15);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_46_16);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_46_17);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_46_18);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_parser_buffer_char_ci_28)
DEFLABEL (match_parser_buffer_char_ci_17)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_48;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_48;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_47)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_46;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_46;
  (Wrd21.Obj) = ((Wrd27.pObj) [6]);

DEFLABEL (label_45)
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd39.Lng) = ((Wrd38.Lng) + 1L);
  (Wrd40.Obj) = (* (Rsp++));
  Wrd41 = Wrd39;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! ((Wrd41.Lng) > (Wrd42.Lng)))
    goto label_29;
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = (current_block [OBJECT_46_3]);
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd82.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_46_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_44;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd54.Lng))))
    goto label_44;
  (Wrd48.Obj) = ((Wrd52.pObj) [6]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_43)
  (Wrd71.Obj) = (Rsp [2]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 62))
    goto label_42;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd70.Lng))))
    goto label_42;
  (Wrd64.Obj) = ((Wrd68.pObj) [2]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_41)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_46_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_46_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_39;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd15.Lng))))
    goto label_39;
  (Wrd7.Obj) = ((Wrd13.pObj) [6]);

DEFLABEL (label_38)
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd25.Lng) = ((Wrd24.Lng) + 1L);
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));
  (Wrd73.Obj) = (Rsp [1]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 62))
    goto label_37;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [0]);
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd72.Lng))))
    goto label_37;
  ((Wrd70.pObj) [6]) = (Wrd23.Obj);

DEFLABEL (label_36)
  (Wrd26.Obj) = (Rsp [0]);
  if ((Wrd26.Obj) == (current_block [OBJECT_46_5]))
    goto label_32;

DEFLABEL (label_31)
  Rvl = (current_block [OBJECT_46_7]);

DEFLABEL (label_30)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_35;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd38.Lng))))
    goto label_35;
  (Wrd30.Obj) = ((Wrd36.pObj) [9]);

DEFLABEL (label_34)
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd48.Lng) = ((Wrd47.Lng) + 1L);
  (Wrd46.Obj) = (LONG_TO_FIXNUM (Wrd48.Lng));
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 62))
    goto label_33;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd56.Lng))))
    goto label_33;
  ((Wrd54.pObj) [9]) = (Wrd46.Obj);
  goto label_31;

DEFLABEL (label_33)
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.Obj) = (current_block [OBJECT_46_6]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_18]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 3);

DEFLABEL (label_25)
  goto label_31;

DEFLABEL (label_35)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_46_6]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_17]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_24)
  (Wrd30.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd75.Obj) = (Rsp [1]);
  (Wrd76.Obj) = (current_block [OBJECT_46_2]);
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_16]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 3);

DEFLABEL (label_26)
  goto label_36;

DEFLABEL (label_39)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_46_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_15]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_23)
  (Wrd7.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_40)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_30;

DEFLABEL (label_42)
  (Wrd73.Obj) = (Rsp [2]);
  (Wrd74.Obj) = (current_block [OBJECT_46_3]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_11]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (current_block [OBJECT_46_2]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_10]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_46_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_20)
  (Wrd21.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_46_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_47;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_5 3
#define LABEL_47_4 5
#define LABEL_47_6 7
#define LABEL_47_7 9
#define LABEL_47_10 11
#define LABEL_47_11 13
#define LABEL_47_9 15
#define LABEL_47_13 17
#define LABEL_47_15 19
#define LABEL_47_16 21
#define LABEL_47_17 23
#define LABEL_47_18 25
#define ENVIRONMENT_LABEL_47_3 42
#define DEBUGGING_LABEL_47_2 41
#define OBJECT_47_7 40
#define OBJECT_47_6 39
#define OBJECT_47_5 38
#define OBJECT_47_4 37
#define OBJECT_47_3 36
#define OBJECT_47_2 35
#define OBJECT_47_1 34
#define OBJECT_47_0 33
#define EXECUTE_CACHE_47_14 27
#define EXECUTE_CACHE_47_12 29
#define EXECUTE_CACHE_47_8 31
#define FREE_REFERENCES_LABEL_47_0 26
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd78;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd8;
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
  machine_word Wrd45;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_47_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_47_4);
      goto match_parser_buffer_not_char_ci_17;

    case 2:
      current_block = (Rpc - LABEL_47_6);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_47_7);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_47_10);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_47_11);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_47_9);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_47_13);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_47_15);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_47_16);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_47_17);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_47_18);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_parser_buffer_not_char_ci_28)
DEFLABEL (match_parser_buffer_not_char_ci_17)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_48;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_48;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_47)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_46;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_46;
  (Wrd21.Obj) = ((Wrd27.pObj) [6]);

DEFLABEL (label_45)
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd39.Lng) = ((Wrd38.Lng) + 1L);
  (Wrd40.Obj) = (* (Rsp++));
  Wrd41 = Wrd39;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! ((Wrd41.Lng) > (Wrd42.Lng)))
    goto label_29;
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = (current_block [OBJECT_47_3]);
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd82.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_47_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_44;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd54.Lng))))
    goto label_44;
  (Wrd48.Obj) = ((Wrd52.pObj) [6]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_43)
  (Wrd71.Obj) = (Rsp [2]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 62))
    goto label_42;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd70.Lng))))
    goto label_42;
  (Wrd64.Obj) = ((Wrd68.pObj) [2]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_41)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_47_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_47_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_30)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_40;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_40;
  (Wrd9.Obj) = ((Wrd15.pObj) [6]);

DEFLABEL (label_39)
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd27.Lng) = ((Wrd26.Lng) + 1L);
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));
  (Wrd75.Obj) = (Rsp [1]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 62))
    goto label_38;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd74.Lng))))
    goto label_38;
  ((Wrd72.pObj) [6]) = (Wrd25.Obj);

DEFLABEL (label_37)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd28.Obj) == (current_block [OBJECT_47_5]))
    goto label_33;

DEFLABEL (label_32)
  Rvl = (current_block [OBJECT_47_7]);
  goto label_30;

DEFLABEL (label_33)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_36;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd40.Lng))))
    goto label_36;
  (Wrd32.Obj) = ((Wrd38.pObj) [9]);

DEFLABEL (label_35)
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd50.Lng) = ((Wrd49.Lng) + 1L);
  (Wrd48.Obj) = (LONG_TO_FIXNUM (Wrd50.Lng));
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 62))
    goto label_34;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd58.Lng))))
    goto label_34;
  ((Wrd56.pObj) [9]) = (Wrd48.Obj);
  goto label_32;

DEFLABEL (label_34)
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd62.Obj) = (current_block [OBJECT_47_6]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_18]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_4]), 3);

DEFLABEL (label_25)
  goto label_32;

DEFLABEL (label_36)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (current_block [OBJECT_47_6]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_17]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 2);

DEFLABEL (label_24)
  (Wrd32.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd77.Obj) = (Rsp [1]);
  (Wrd78.Obj) = (current_block [OBJECT_47_2]);
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_16]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_4]), 3);

DEFLABEL (label_26)
  goto label_37;

DEFLABEL (label_40)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_47_2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_15]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 2);

DEFLABEL (label_23)
  (Wrd9.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd73.Obj) = (Rsp [2]);
  (Wrd74.Obj) = (current_block [OBJECT_47_3]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_11]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (current_block [OBJECT_47_2]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_10]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_47_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 2);

DEFLABEL (label_20)
  (Wrd21.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_47_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_47;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_5 3
#define LABEL_48_4 5
#define LABEL_48_6 7
#define LABEL_48_7 9
#define LABEL_48_10 11
#define LABEL_48_11 13
#define LABEL_48_9 15
#define ENVIRONMENT_LABEL_48_3 28
#define DEBUGGING_LABEL_48_2 27
#define OBJECT_48_3 26
#define OBJECT_48_2 25
#define OBJECT_48_1 24
#define OBJECT_48_0 23
#define EXECUTE_CACHE_48_13 17
#define EXECUTE_CACHE_48_12 19
#define EXECUTE_CACHE_48_8 21
#define FREE_REFERENCES_LABEL_48_0 16
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
  machine_word Wrd45;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_48_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_48_4);
      goto match_parser_buffer_char_ci_no_advance_8;

    case 2:
      current_block = (Rpc - LABEL_48_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_48_7);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_48_10);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_48_11);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_48_9);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_parser_buffer_char_ci_no_advance_15)
DEFLABEL (match_parser_buffer_char_ci_no_advance_8)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_24;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_24;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_23)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_22;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_22;
  (Wrd21.Obj) = ((Wrd27.pObj) [6]);

DEFLABEL (label_21)
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd39.Lng) = ((Wrd38.Lng) + 1L);
  (Wrd40.Obj) = (* (Rsp++));
  Wrd41 = Wrd39;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! ((Wrd41.Lng) > (Wrd42.Lng)))
    goto label_16;
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = (current_block [OBJECT_48_3]);
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd82.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_48_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_16;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_20;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd54.Lng))))
    goto label_20;
  (Wrd48.Obj) = ((Wrd52.pObj) [6]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_19)
  (Wrd71.Obj) = (Rsp [2]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 62))
    goto label_18;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd70.Lng))))
    goto label_18;
  (Wrd64.Obj) = ((Wrd68.pObj) [2]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_17)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_48_9);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_13]));

DEFLABEL (label_18)
  (Wrd73.Obj) = (Rsp [2]);
  (Wrd74.Obj) = (current_block [OBJECT_48_3]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_11]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (current_block [OBJECT_48_2]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_10]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_48_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 2);

DEFLABEL (label_11)
  (Wrd21.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_48_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_5 3
#define LABEL_49_4 5
#define LABEL_49_6 7
#define LABEL_49_7 9
#define LABEL_49_11 11
#define LABEL_49_12 13
#define LABEL_49_9 15
#define LABEL_49_10 17
#define ENVIRONMENT_LABEL_49_3 31
#define DEBUGGING_LABEL_49_2 30
#define OBJECT_49_4 29
#define OBJECT_49_3 28
#define OBJECT_49_2 27
#define OBJECT_49_1 26
#define OBJECT_49_0 25
#define EXECUTE_CACHE_49_14 19
#define EXECUTE_CACHE_49_13 21
#define EXECUTE_CACHE_49_8 23
#define FREE_REFERENCES_LABEL_49_0 18
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd52;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_49_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_49_4);
      goto match_parser_buffer_not_char_ci_no_advance_9;

    case 2:
      current_block = (Rpc - LABEL_49_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_49_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_49_11);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_49_12);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_49_9);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_49_10);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_parser_buffer_not_char_ci_no_advance_16)
DEFLABEL (match_parser_buffer_not_char_ci_no_advance_9)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_28;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_28;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_27)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_26;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_26;
  (Wrd21.Obj) = ((Wrd27.pObj) [6]);

DEFLABEL (label_25)
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd39.Lng) = ((Wrd38.Lng) + 1L);
  (Wrd40.Obj) = (* (Rsp++));
  Wrd41 = Wrd39;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! ((Wrd41.Lng) > (Wrd42.Lng)))
    goto label_17;
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (current_block [OBJECT_49_3]);
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd86.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd86.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_49_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_10]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd59.Obj) = (Rsp [3]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 62))
    goto label_24;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd58.Lng))))
    goto label_24;
  (Wrd52.Obj) = ((Wrd56.pObj) [6]);
  (* (--Rsp)) = (Wrd52.Obj);

DEFLABEL (label_23)
  (Wrd75.Obj) = (Rsp [4]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 62))
    goto label_22;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd74.Lng))))
    goto label_22;
  (Wrd68.Obj) = ((Wrd72.pObj) [2]);
  (* (--Rsp)) = (Wrd68.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_49_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_49_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_18;

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_49_4]);

DEFLABEL (label_18)
DEFLABEL (label_20)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd77.Obj) = (Rsp [4]);
  (Wrd78.Obj) = (current_block [OBJECT_49_3]);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_12]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd61.Obj) = (Rsp [3]);
  (Wrd62.Obj) = (current_block [OBJECT_49_2]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_11]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_49_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 2);

DEFLABEL (label_12)
  (Wrd21.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_49_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_5 3
#define LABEL_50_4 5
#define LABEL_50_6 7
#define LABEL_50_7 9
#define LABEL_50_10 11
#define LABEL_50_11 13
#define LABEL_50_9 15
#define LABEL_50_13 17
#define LABEL_50_15 19
#define LABEL_50_16 21
#define LABEL_50_17 23
#define LABEL_50_18 25
#define ENVIRONMENT_LABEL_50_3 42
#define DEBUGGING_LABEL_50_2 41
#define OBJECT_50_7 40
#define OBJECT_50_6 39
#define OBJECT_50_5 38
#define OBJECT_50_4 37
#define OBJECT_50_3 36
#define OBJECT_50_2 35
#define OBJECT_50_1 34
#define OBJECT_50_0 33
#define EXECUTE_CACHE_50_14 27
#define EXECUTE_CACHE_50_12 29
#define EXECUTE_CACHE_50_8 31
#define FREE_REFERENCES_LABEL_50_0 26
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
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
  machine_word Wrd45;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_50_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_50_4);
      goto match_parser_buffer_char_in_set_17;

    case 2:
      current_block = (Rpc - LABEL_50_6);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_50_7);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_50_10);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_50_11);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_50_9);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_50_13);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_50_15);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_50_16);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_50_17);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_50_18);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_parser_buffer_char_in_set_28)
DEFLABEL (match_parser_buffer_char_in_set_17)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_48;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_48;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_47)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_46;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_46;
  (Wrd21.Obj) = ((Wrd27.pObj) [6]);

DEFLABEL (label_45)
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd39.Lng) = ((Wrd38.Lng) + 1L);
  (Wrd40.Obj) = (* (Rsp++));
  Wrd41 = Wrd39;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! ((Wrd41.Lng) > (Wrd42.Lng)))
    goto label_29;
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = (current_block [OBJECT_50_3]);
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd82.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_50_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_44;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd54.Lng))))
    goto label_44;
  (Wrd48.Obj) = ((Wrd52.pObj) [6]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_43)
  (Wrd71.Obj) = (Rsp [2]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 62))
    goto label_42;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd70.Lng))))
    goto label_42;
  (Wrd64.Obj) = ((Wrd68.pObj) [2]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_41)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_50_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_50_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_39;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd15.Lng))))
    goto label_39;
  (Wrd7.Obj) = ((Wrd13.pObj) [6]);

DEFLABEL (label_38)
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd25.Lng) = ((Wrd24.Lng) + 1L);
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));
  (Wrd73.Obj) = (Rsp [1]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 62))
    goto label_37;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [0]);
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd72.Lng))))
    goto label_37;
  ((Wrd70.pObj) [6]) = (Wrd23.Obj);

DEFLABEL (label_36)
  (Wrd26.Obj) = (Rsp [0]);
  if ((Wrd26.Obj) == (current_block [OBJECT_50_5]))
    goto label_32;

DEFLABEL (label_31)
  Rvl = (current_block [OBJECT_50_7]);

DEFLABEL (label_30)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_35;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd38.Lng))))
    goto label_35;
  (Wrd30.Obj) = ((Wrd36.pObj) [9]);

DEFLABEL (label_34)
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd48.Lng) = ((Wrd47.Lng) + 1L);
  (Wrd46.Obj) = (LONG_TO_FIXNUM (Wrd48.Lng));
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 62))
    goto label_33;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd56.Lng))))
    goto label_33;
  ((Wrd54.pObj) [9]) = (Wrd46.Obj);
  goto label_31;

DEFLABEL (label_33)
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.Obj) = (current_block [OBJECT_50_6]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_18]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_4]), 3);

DEFLABEL (label_25)
  goto label_31;

DEFLABEL (label_35)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_50_6]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_17]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_24)
  (Wrd30.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd75.Obj) = (Rsp [1]);
  (Wrd76.Obj) = (current_block [OBJECT_50_2]);
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_16]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_4]), 3);

DEFLABEL (label_26)
  goto label_36;

DEFLABEL (label_39)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_50_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_15]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_23)
  (Wrd7.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_40)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_30;

DEFLABEL (label_42)
  (Wrd73.Obj) = (Rsp [2]);
  (Wrd74.Obj) = (current_block [OBJECT_50_3]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_11]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (current_block [OBJECT_50_2]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_10]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_50_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_20)
  (Wrd21.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_50_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_47;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_5 3
#define LABEL_51_4 5
#define LABEL_51_6 7
#define LABEL_51_7 9
#define LABEL_51_10 11
#define LABEL_51_11 13
#define LABEL_51_9 15
#define LABEL_51_13 17
#define LABEL_51_15 19
#define LABEL_51_16 21
#define LABEL_51_17 23
#define LABEL_51_18 25
#define ENVIRONMENT_LABEL_51_3 42
#define DEBUGGING_LABEL_51_2 41
#define OBJECT_51_7 40
#define OBJECT_51_6 39
#define OBJECT_51_5 38
#define OBJECT_51_4 37
#define OBJECT_51_3 36
#define OBJECT_51_2 35
#define OBJECT_51_1 34
#define OBJECT_51_0 33
#define EXECUTE_CACHE_51_14 27
#define EXECUTE_CACHE_51_12 29
#define EXECUTE_CACHE_51_8 31
#define FREE_REFERENCES_LABEL_51_0 26
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd78;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
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
  machine_word Wrd45;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_51_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_51_4);
      goto match_parser_buffer_char_not_in_set_17;

    case 2:
      current_block = (Rpc - LABEL_51_6);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_51_7);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_51_10);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_51_11);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_51_9);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_51_13);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_51_15);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_51_16);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_51_17);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_51_18);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_parser_buffer_char_not_in_set_28)
DEFLABEL (match_parser_buffer_char_not_in_set_17)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_48;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_48;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_47)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_46;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_46;
  (Wrd21.Obj) = ((Wrd27.pObj) [6]);

DEFLABEL (label_45)
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd39.Lng) = ((Wrd38.Lng) + 1L);
  (Wrd40.Obj) = (* (Rsp++));
  Wrd41 = Wrd39;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! ((Wrd41.Lng) > (Wrd42.Lng)))
    goto label_29;
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = (current_block [OBJECT_51_3]);
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd82.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_51_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_44;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd54.Lng))))
    goto label_44;
  (Wrd48.Obj) = ((Wrd52.pObj) [6]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_43)
  (Wrd71.Obj) = (Rsp [2]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 62))
    goto label_42;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd70.Lng))))
    goto label_42;
  (Wrd64.Obj) = ((Wrd68.pObj) [2]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_41)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_51_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_51_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_30)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_40;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_40;
  (Wrd9.Obj) = ((Wrd15.pObj) [6]);

DEFLABEL (label_39)
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd27.Lng) = ((Wrd26.Lng) + 1L);
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));
  (Wrd75.Obj) = (Rsp [1]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 62))
    goto label_38;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd74.Lng))))
    goto label_38;
  ((Wrd72.pObj) [6]) = (Wrd25.Obj);

DEFLABEL (label_37)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd28.Obj) == (current_block [OBJECT_51_5]))
    goto label_33;

DEFLABEL (label_32)
  Rvl = (current_block [OBJECT_51_7]);
  goto label_30;

DEFLABEL (label_33)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_36;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd40.Lng))))
    goto label_36;
  (Wrd32.Obj) = ((Wrd38.pObj) [9]);

DEFLABEL (label_35)
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd50.Lng) = ((Wrd49.Lng) + 1L);
  (Wrd48.Obj) = (LONG_TO_FIXNUM (Wrd50.Lng));
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 62))
    goto label_34;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd58.Lng))))
    goto label_34;
  ((Wrd56.pObj) [9]) = (Wrd48.Obj);
  goto label_32;

DEFLABEL (label_34)
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd62.Obj) = (current_block [OBJECT_51_6]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_18]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_4]), 3);

DEFLABEL (label_25)
  goto label_32;

DEFLABEL (label_36)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (current_block [OBJECT_51_6]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_17]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_24)
  (Wrd32.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd77.Obj) = (Rsp [1]);
  (Wrd78.Obj) = (current_block [OBJECT_51_2]);
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_16]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_4]), 3);

DEFLABEL (label_26)
  goto label_37;

DEFLABEL (label_40)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_51_2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_15]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_23)
  (Wrd9.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd73.Obj) = (Rsp [2]);
  (Wrd74.Obj) = (current_block [OBJECT_51_3]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_11]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (current_block [OBJECT_51_2]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_10]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_51_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_20)
  (Wrd21.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_51_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_47;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_5 3
#define LABEL_52_4 5
#define LABEL_52_6 7
#define LABEL_52_7 9
#define LABEL_52_10 11
#define LABEL_52_11 13
#define LABEL_52_9 15
#define ENVIRONMENT_LABEL_52_3 28
#define DEBUGGING_LABEL_52_2 27
#define OBJECT_52_3 26
#define OBJECT_52_2 25
#define OBJECT_52_1 24
#define OBJECT_52_0 23
#define EXECUTE_CACHE_52_13 17
#define EXECUTE_CACHE_52_12 19
#define EXECUTE_CACHE_52_8 21
#define FREE_REFERENCES_LABEL_52_0 16
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
  machine_word Wrd45;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_52_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_52_4);
      goto match_parser_buffer_char_in_set_no_advance_8;

    case 2:
      current_block = (Rpc - LABEL_52_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_52_7);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_52_10);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_52_11);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_52_9);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_parser_buffer_char_in_set_no_advance_15)
DEFLABEL (match_parser_buffer_char_in_set_no_advance_8)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_24;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_24;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_23)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_22;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_22;
  (Wrd21.Obj) = ((Wrd27.pObj) [6]);

DEFLABEL (label_21)
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd39.Lng) = ((Wrd38.Lng) + 1L);
  (Wrd40.Obj) = (* (Rsp++));
  Wrd41 = Wrd39;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! ((Wrd41.Lng) > (Wrd42.Lng)))
    goto label_16;
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = (current_block [OBJECT_52_3]);
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd82.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_52_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_16;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_20;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd54.Lng))))
    goto label_20;
  (Wrd48.Obj) = ((Wrd52.pObj) [6]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_19)
  (Wrd71.Obj) = (Rsp [2]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 62))
    goto label_18;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd70.Lng))))
    goto label_18;
  (Wrd64.Obj) = ((Wrd68.pObj) [2]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_17)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_52_9);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_13]));

DEFLABEL (label_18)
  (Wrd73.Obj) = (Rsp [2]);
  (Wrd74.Obj) = (current_block [OBJECT_52_3]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_11]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (current_block [OBJECT_52_2]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_10]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_52_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_11)
  (Wrd21.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_52_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_5 3
#define LABEL_53_4 5
#define LABEL_53_6 7
#define LABEL_53_7 9
#define LABEL_53_11 11
#define LABEL_53_12 13
#define LABEL_53_9 15
#define LABEL_53_10 17
#define ENVIRONMENT_LABEL_53_3 31
#define DEBUGGING_LABEL_53_2 30
#define OBJECT_53_4 29
#define OBJECT_53_3 28
#define OBJECT_53_2 27
#define OBJECT_53_1 26
#define OBJECT_53_0 25
#define EXECUTE_CACHE_53_14 19
#define EXECUTE_CACHE_53_13 21
#define EXECUTE_CACHE_53_8 23
#define FREE_REFERENCES_LABEL_53_0 18
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd67;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd51;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_53_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_53_4);
      goto match_parser_buffer_char_not_in_set_no_advance_9;

    case 2:
      current_block = (Rpc - LABEL_53_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_53_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_53_11);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_53_12);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_53_9);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_53_10);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_parser_buffer_char_not_in_set_no_advance_16)
DEFLABEL (match_parser_buffer_char_not_in_set_no_advance_9)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_28;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_28;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_27)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_26;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_26;
  (Wrd21.Obj) = ((Wrd27.pObj) [6]);

DEFLABEL (label_25)
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd39.Lng) = ((Wrd38.Lng) + 1L);
  (Wrd40.Obj) = (* (Rsp++));
  Wrd41 = Wrd39;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! ((Wrd41.Lng) > (Wrd42.Lng)))
    goto label_17;
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd84.Obj) = (current_block [OBJECT_53_3]);
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd85.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_53_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_10]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd58.Obj) = (Rsp [2]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 62))
    goto label_24;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd57.Lng))))
    goto label_24;
  (Wrd51.Obj) = ((Wrd55.pObj) [6]);
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_23)
  (Wrd74.Obj) = (Rsp [3]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 62))
    goto label_22;
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd72.Obj) = ((Wrd71.pObj) [0]);
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd72.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd73.Lng))))
    goto label_22;
  (Wrd67.Obj) = ((Wrd71.pObj) [2]);
  (* (--Rsp)) = (Wrd67.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_53_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_53_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_18;

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_53_4]);

DEFLABEL (label_18)
DEFLABEL (label_20)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd76.Obj) = (Rsp [3]);
  (Wrd77.Obj) = (current_block [OBJECT_53_3]);
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_12]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd60.Obj) = (Rsp [2]);
  (Wrd61.Obj) = (current_block [OBJECT_53_2]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_11]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_53_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_12)
  (Wrd21.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_53_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
parser_buffer_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_54_4);
      goto char_in_setP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_in_setP_3)
DEFLABEL (char_in_setP_0)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_5 3
#define LABEL_55_4 5
#define LABEL_55_6 7
#define LABEL_55_7 9
#define LABEL_55_10 11
#define LABEL_55_11 13
#define LABEL_55_9 15
#define LABEL_55_13 17
#define LABEL_55_14 19
#define LABEL_55_15 21
#define LABEL_55_16 23
#define LABEL_55_17 25
#define ENVIRONMENT_LABEL_55_3 40
#define DEBUGGING_LABEL_55_2 39
#define OBJECT_55_7 38
#define OBJECT_55_6 37
#define OBJECT_55_5 36
#define OBJECT_55_4 35
#define OBJECT_55_3 34
#define OBJECT_55_2 33
#define OBJECT_55_1 32
#define OBJECT_55_0 31
#define EXECUTE_CACHE_55_12 27
#define EXECUTE_CACHE_55_8 29
#define FREE_REFERENCES_LABEL_55_0 26
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd8;
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
  machine_word Wrd45;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_55_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_55_4);
      goto match_char_17;

    case 2:
      current_block = (Rpc - LABEL_55_6);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_55_7);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_55_10);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_55_11);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_55_9);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_55_13);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_55_14);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_55_15);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_55_16);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_55_17);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_char_28)
DEFLABEL (match_char_17)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_48;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_48;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_47)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_46;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_46;
  (Wrd21.Obj) = ((Wrd27.pObj) [6]);

DEFLABEL (label_45)
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd39.Lng) = ((Wrd38.Lng) + 1L);
  (Wrd40.Obj) = (* (Rsp++));
  Wrd41 = Wrd39;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! ((Wrd41.Lng) > (Wrd42.Lng)))
    goto label_29;
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = (current_block [OBJECT_55_3]);
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd82.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_55_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_44;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd54.Lng))))
    goto label_44;
  (Wrd48.Obj) = ((Wrd52.pObj) [6]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_43)
  (Wrd71.Obj) = (Rsp [2]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 62))
    goto label_42;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd70.Lng))))
    goto label_42;
  (Wrd64.Obj) = ((Wrd68.pObj) [2]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_41)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_55_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_55_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_39;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd15.Lng))))
    goto label_39;
  (Wrd7.Obj) = ((Wrd13.pObj) [6]);

DEFLABEL (label_38)
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd25.Lng) = ((Wrd24.Lng) + 1L);
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));
  (Wrd73.Obj) = (Rsp [1]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 62))
    goto label_37;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [0]);
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd72.Lng))))
    goto label_37;
  ((Wrd70.pObj) [6]) = (Wrd23.Obj);

DEFLABEL (label_36)
  (Wrd26.Obj) = (Rsp [0]);
  if ((Wrd26.Obj) == (current_block [OBJECT_55_5]))
    goto label_32;

DEFLABEL (label_31)
  Rvl = (current_block [OBJECT_55_7]);

DEFLABEL (label_30)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_35;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd38.Lng))))
    goto label_35;
  (Wrd30.Obj) = ((Wrd36.pObj) [9]);

DEFLABEL (label_34)
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd48.Lng) = ((Wrd47.Lng) + 1L);
  (Wrd46.Obj) = (LONG_TO_FIXNUM (Wrd48.Lng));
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 62))
    goto label_33;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd56.Lng))))
    goto label_33;
  ((Wrd54.pObj) [9]) = (Wrd46.Obj);
  goto label_31;

DEFLABEL (label_33)
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.Obj) = (current_block [OBJECT_55_6]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_17]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_4]), 3);

DEFLABEL (label_25)
  goto label_31;

DEFLABEL (label_35)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_55_6]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_16]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_24)
  (Wrd30.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd75.Obj) = (Rsp [1]);
  (Wrd76.Obj) = (current_block [OBJECT_55_2]);
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_15]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_4]), 3);

DEFLABEL (label_26)
  goto label_36;

DEFLABEL (label_39)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_55_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_14]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_23)
  (Wrd7.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_40)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_30;

DEFLABEL (label_42)
  (Wrd73.Obj) = (Rsp [2]);
  (Wrd74.Obj) = (current_block [OBJECT_55_3]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_11]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (current_block [OBJECT_55_2]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_10]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_55_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_20)
  (Wrd21.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_55_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_47;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_5 3
#define LABEL_56_4 5
#define LABEL_56_6 7
#define LABEL_56_7 9
#define LABEL_56_10 11
#define LABEL_56_11 13
#define LABEL_56_9 15
#define ENVIRONMENT_LABEL_56_3 26
#define DEBUGGING_LABEL_56_2 25
#define OBJECT_56_3 24
#define OBJECT_56_2 23
#define OBJECT_56_1 22
#define OBJECT_56_0 21
#define EXECUTE_CACHE_56_12 17
#define EXECUTE_CACHE_56_8 19
#define FREE_REFERENCES_LABEL_56_0 16
#define NUMBER_OF_LINKER_SECTIONS_56_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_56_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_56_4);
      goto match_char_no_advance_8;

    case 2:
      current_block = (Rpc - LABEL_56_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_56_7);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_56_10);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_56_11);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_56_9);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_char_no_advance_15)
DEFLABEL (match_char_no_advance_8)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_24;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_24;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_23)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_22;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_22;
  (Wrd21.Obj) = ((Wrd27.pObj) [6]);

DEFLABEL (label_21)
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd39.Lng) = ((Wrd38.Lng) + 1L);
  (Wrd40.Obj) = (* (Rsp++));
  Wrd41 = Wrd39;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! ((Wrd41.Lng) > (Wrd42.Lng)))
    goto label_16;
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_5]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (Wrd83.Obj) = (current_block [OBJECT_56_3]);
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd84.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd84.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_56_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_16;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd43.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd44.Obj);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_9]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd57.Obj) = (Rsp [2]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 62))
    goto label_20;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd56.Lng))))
    goto label_20;
  (Wrd50.Obj) = ((Wrd54.pObj) [6]);
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_19)
  (Wrd73.Obj) = (Rsp [3]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 62))
    goto label_18;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [0]);
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd72.Lng))))
    goto label_18;
  (Wrd66.Obj) = ((Wrd70.pObj) [2]);
  (* (--Rsp)) = (Wrd66.Obj);

DEFLABEL (label_17)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_56_9);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_18)
  (Wrd75.Obj) = (Rsp [3]);
  (Wrd76.Obj) = (current_block [OBJECT_56_3]);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_11]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd59.Obj) = (Rsp [2]);
  (Wrd60.Obj) = (current_block [OBJECT_56_2]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_10]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_56_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_1]), 2);

DEFLABEL (label_11)
  (Wrd21.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_56_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_5 3
#define LABEL_57_4 5
#define LABEL_57_6 7
#define LABEL_57_7 9
#define LABEL_57_10 11
#define LABEL_57_11 13
#define LABEL_57_9 15
#define LABEL_57_13 17
#define LABEL_57_14 19
#define LABEL_57_15 21
#define LABEL_57_16 23
#define LABEL_57_17 25
#define ENVIRONMENT_LABEL_57_3 40
#define DEBUGGING_LABEL_57_2 39
#define OBJECT_57_7 38
#define OBJECT_57_6 37
#define OBJECT_57_5 36
#define OBJECT_57_4 35
#define OBJECT_57_3 34
#define OBJECT_57_2 33
#define OBJECT_57_1 32
#define OBJECT_57_0 31
#define EXECUTE_CACHE_57_12 27
#define EXECUTE_CACHE_57_8 29
#define FREE_REFERENCES_LABEL_57_0 26
#define NUMBER_OF_LINKER_SECTIONS_57_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd78;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd8;
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
  machine_word Wrd45;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_57_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_57_4);
      goto match_char_not_17;

    case 2:
      current_block = (Rpc - LABEL_57_6);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_57_7);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_57_10);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_57_11);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_57_9);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_57_13);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_57_14);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_57_15);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_57_16);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_57_17);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_char_not_28)
DEFLABEL (match_char_not_17)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_48;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_48;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_47)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_46;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_46;
  (Wrd21.Obj) = ((Wrd27.pObj) [6]);

DEFLABEL (label_45)
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd39.Lng) = ((Wrd38.Lng) + 1L);
  (Wrd40.Obj) = (* (Rsp++));
  Wrd41 = Wrd39;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! ((Wrd41.Lng) > (Wrd42.Lng)))
    goto label_29;
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = (current_block [OBJECT_57_3]);
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd82.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_57_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_44;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd54.Lng))))
    goto label_44;
  (Wrd48.Obj) = ((Wrd52.pObj) [6]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_43)
  (Wrd71.Obj) = (Rsp [2]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 62))
    goto label_42;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd70.Lng))))
    goto label_42;
  (Wrd64.Obj) = ((Wrd68.pObj) [2]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_41)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_57_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_57_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_30)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_40;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_40;
  (Wrd9.Obj) = ((Wrd15.pObj) [6]);

DEFLABEL (label_39)
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd27.Lng) = ((Wrd26.Lng) + 1L);
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));
  (Wrd75.Obj) = (Rsp [1]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 62))
    goto label_38;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd74.Lng))))
    goto label_38;
  ((Wrd72.pObj) [6]) = (Wrd25.Obj);

DEFLABEL (label_37)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd28.Obj) == (current_block [OBJECT_57_5]))
    goto label_33;

DEFLABEL (label_32)
  Rvl = (current_block [OBJECT_57_7]);
  goto label_30;

DEFLABEL (label_33)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_36;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd40.Lng))))
    goto label_36;
  (Wrd32.Obj) = ((Wrd38.pObj) [9]);

DEFLABEL (label_35)
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd50.Lng) = ((Wrd49.Lng) + 1L);
  (Wrd48.Obj) = (LONG_TO_FIXNUM (Wrd50.Lng));
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 62))
    goto label_34;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd58.Lng))))
    goto label_34;
  ((Wrd56.pObj) [9]) = (Wrd48.Obj);
  goto label_32;

DEFLABEL (label_34)
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd62.Obj) = (current_block [OBJECT_57_6]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_17]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_4]), 3);

DEFLABEL (label_25)
  goto label_32;

DEFLABEL (label_36)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (current_block [OBJECT_57_6]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_16]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_24)
  (Wrd32.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd77.Obj) = (Rsp [1]);
  (Wrd78.Obj) = (current_block [OBJECT_57_2]);
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_15]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_4]), 3);

DEFLABEL (label_26)
  goto label_37;

DEFLABEL (label_40)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_57_2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_14]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_23)
  (Wrd9.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd73.Obj) = (Rsp [2]);
  (Wrd74.Obj) = (current_block [OBJECT_57_3]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_11]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (current_block [OBJECT_57_2]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_10]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_57_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_20)
  (Wrd21.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_57_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_47;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_5 3
#define LABEL_58_4 5
#define LABEL_58_6 7
#define LABEL_58_7 9
#define LABEL_58_11 11
#define LABEL_58_12 13
#define LABEL_58_9 15
#define LABEL_58_10 17
#define ENVIRONMENT_LABEL_58_3 29
#define DEBUGGING_LABEL_58_2 28
#define OBJECT_58_4 27
#define OBJECT_58_3 26
#define OBJECT_58_2 25
#define OBJECT_58_1 24
#define OBJECT_58_0 23
#define EXECUTE_CACHE_58_13 19
#define EXECUTE_CACHE_58_8 21
#define FREE_REFERENCES_LABEL_58_0 18
#define NUMBER_OF_LINKER_SECTIONS_58_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd52;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_58_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_58_4);
      goto match_char_not_no_advance_9;

    case 2:
      current_block = (Rpc - LABEL_58_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_58_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_58_11);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_58_12);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_58_9);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_58_10);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_char_not_no_advance_16)
DEFLABEL (match_char_not_no_advance_9)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_28;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_28;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_27)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_26;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_26;
  (Wrd21.Obj) = ((Wrd27.pObj) [6]);

DEFLABEL (label_25)
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd39.Lng) = ((Wrd38.Lng) + 1L);
  (Wrd40.Obj) = (* (Rsp++));
  Wrd41 = Wrd39;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! ((Wrd41.Lng) > (Wrd42.Lng)))
    goto label_17;
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (current_block [OBJECT_58_3]);
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd86.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd86.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_58_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_10]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd59.Obj) = (Rsp [3]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 62))
    goto label_24;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd58.Lng))))
    goto label_24;
  (Wrd52.Obj) = ((Wrd56.pObj) [6]);
  (* (--Rsp)) = (Wrd52.Obj);

DEFLABEL (label_23)
  (Wrd75.Obj) = (Rsp [4]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 62))
    goto label_22;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd74.Lng))))
    goto label_22;
  (Wrd68.Obj) = ((Wrd72.pObj) [2]);
  (* (--Rsp)) = (Wrd68.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_58_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_58_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_18;

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_58_4]);

DEFLABEL (label_18)
DEFLABEL (label_20)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd77.Obj) = (Rsp [4]);
  (Wrd78.Obj) = (current_block [OBJECT_58_3]);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_12]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd61.Obj) = (Rsp [3]);
  (Wrd62.Obj) = (current_block [OBJECT_58_2]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_11]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_58_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

DEFLABEL (label_12)
  (Wrd21.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_58_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_7 5
#define LABEL_59_5 7
#define LABEL_59_8 9
#define LABEL_59_9 11
#define LABEL_59_10 13
#define LABEL_59_11 15
#define LABEL_59_13 17
#define LABEL_59_14 19
#define LABEL_59_15 21
#define LABEL_59_17 23
#define LABEL_59_20 25
#define LABEL_59_18 27
#define LABEL_59_21 29
#define LABEL_59_23 31
#define LABEL_59_24 33
#define LABEL_59_25 35
#define LABEL_59_26 37
#define LABEL_59_27 39
#define LABEL_59_30 41
#define LABEL_59_31 43
#define LABEL_59_32 45
#define LABEL_59_22 47
#define LABEL_59_28 49
#define LABEL_59_34 51
#define LABEL_59_33 53
#define LABEL_59_37 55
#define LABEL_59_38 57
#define LABEL_59_35 59
#define LABEL_59_36 61
#define LABEL_59_39 63
#define LABEL_59_40 65
#define ENVIRONMENT_LABEL_59_3 90
#define DEBUGGING_LABEL_59_2 89
#define OBJECT_59_11 88
#define OBJECT_59_10 87
#define OBJECT_59_9 86
#define OBJECT_59_8 85
#define OBJECT_59_7 84
#define OBJECT_59_6 83
#define OBJECT_59_5 82
#define OBJECT_59_4 81
#define OBJECT_59_3 80
#define OBJECT_59_2 79
#define OBJECT_59_1 78
#define OBJECT_59_0 77
#define EXECUTE_CACHE_59_29 67
#define EXECUTE_CACHE_59_19 69
#define EXECUTE_CACHE_59_16 71
#define EXECUTE_CACHE_59_12 73
#define EXECUTE_CACHE_59_6 75
#define FREE_REFERENCES_LABEL_59_0 66
#define NUMBER_OF_LINKER_SECTIONS_59_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd20;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd73;
  machine_word Wrd64;
  machine_word Wrd72;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd45;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd84;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd30;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd117;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd101;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd85;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd135;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd134;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd75;
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
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd34;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd28;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_59_4);
      goto match_parser_buffer_string_58;

    case 1:
      current_block = (Rpc - LABEL_59_7);
      goto continuation_10;

    case 2:
      current_block = (Rpc - LABEL_59_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_59_8);
      goto label_61;

    case 4:
      current_block = (Rpc - LABEL_59_9);
      goto label_62;

    case 5:
      current_block = (Rpc - LABEL_59_10);
      goto label_63;

    case 6:
      current_block = (Rpc - LABEL_59_11);
      goto label_67;

    case 7:
      current_block = (Rpc - LABEL_59_13);
      goto label_64;

    case 8:
      current_block = (Rpc - LABEL_59_14);
      goto label_65;

    case 9:
      current_block = (Rpc - LABEL_59_15);
      goto label_66;

    case 10:
      current_block = (Rpc - LABEL_59_17);
      goto label_60;

    case 11:
      current_block = (Rpc - LABEL_59_20);
      goto continuation_38;

    case 12:
      current_block = (Rpc - LABEL_59_18);
      goto continuation_31;

    case 13:
      current_block = (Rpc - LABEL_59_21);
      goto label_68;

    case 14:
      current_block = (Rpc - LABEL_59_23);
      goto label_69;

    case 15:
      current_block = (Rpc - LABEL_59_24);
      goto label_70;

    case 16:
      current_block = (Rpc - LABEL_59_25);
      goto label_71;

    case 17:
      current_block = (Rpc - LABEL_59_26);
      goto loop_27;

    case 18:
      current_block = (Rpc - LABEL_59_27);
      goto label_72;

    case 19:
      current_block = (Rpc - LABEL_59_30);
      goto label_74;

    case 20:
      current_block = (Rpc - LABEL_59_31);
      goto label_73;

    case 21:
      current_block = (Rpc - LABEL_59_32);
      goto loop_55;

    case 22:
      current_block = (Rpc - LABEL_59_22);
      goto continuation_36;

    case 23:
      current_block = (Rpc - LABEL_59_28);
      goto continuation_20;

    case 24:
      current_block = (Rpc - LABEL_59_34);
      goto label_75;

    case 25:
      current_block = (Rpc - LABEL_59_33);
      goto continuation_43;

    case 26:
      current_block = (Rpc - LABEL_59_37);
      goto label_77;

    case 27:
      current_block = (Rpc - LABEL_59_38);
      goto label_76;

    case 28:
      current_block = (Rpc - LABEL_59_35);
      goto continuation_24;

    case 29:
      current_block = (Rpc - LABEL_59_36);
      goto continuation_48;

    case 30:
      current_block = (Rpc - LABEL_59_39);
      goto continuation_47;

    case 31:
      current_block = (Rpc - LABEL_59_40);
      goto continuation_52;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_parser_buffer_string_79)
DEFLABEL (match_parser_buffer_string_58)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_59_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_93;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_92;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_92;
  (Wrd9.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_91)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_18]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_19]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_59_18);
  (* (--Rsp)) = Rvl;
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_90;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd14.Lng))))
    goto label_90;
  (Wrd6.Obj) = ((Wrd12.pObj) [6]);

DEFLABEL (label_89)
  (Wrd22.Obj) = (* (Rsp++));
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd26.Lng) = ((Wrd24.Lng) + (Wrd25.Lng));
  (Wrd27.Obj) = (* (Rsp++));
  Wrd28 = Wrd26;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! ((Wrd28.Lng) > (Wrd29.Lng)))
    goto label_82;
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_20]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_22]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd85.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_19]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_59_22);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_12]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_59_20);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_82;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_88;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd38.Lng))))
    goto label_88;
  (Wrd32.Obj) = ((Wrd36.pObj) [2]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_87)
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_86;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd54.Lng))))
    goto label_86;
  (Wrd48.Obj) = ((Wrd52.pObj) [9]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_85)
  (Wrd71.Obj) = (Rsp [2]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 62))
    goto label_84;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd70.Lng))))
    goto label_84;
  (Wrd64.Obj) = ((Wrd68.pObj) [6]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_83)
  (Wrd78.Obj) = (current_block [OBJECT_59_6]);
  (* (--Rsp)) = (Wrd78.Obj);
  goto loop_55;

DEFLABEL (label_84)
  (Wrd73.Obj) = (Rsp [2]);
  (Wrd74.Obj) = (current_block [OBJECT_59_3]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_25]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_71)
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (current_block [OBJECT_59_5]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_24]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_70)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (current_block [OBJECT_59_4]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_23]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_69)
  (* (--Rsp)) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.Obj) = (current_block [OBJECT_59_3]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_21]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_68)
  (Wrd6.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_59_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_17]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_91;

DEFLABEL (label_93)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 30)
    goto label_94;
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_59_7]);
  (Rsp [1]) = (Wrd30.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_16]));

DEFLABEL (label_94)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_110;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd40.Lng))))
    goto label_110;
  (Wrd34.Obj) = ((Wrd38.pObj) [4]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_109)
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 30))
    goto label_108;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [1]);
  (Wrd48.Obj) = (MAKE_OBJECT (26, (Wrd52.uLng)));

DEFLABEL (label_107)
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd68.Obj) = (Rsp [2]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 62))
    goto label_106;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [0]);
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd67.Lng))))
    goto label_106;
  (Wrd59.Obj) = ((Wrd65.pObj) [6]);

DEFLABEL (label_105)
  (Wrd75.Obj) = (* (Rsp++));
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  (Wrd79.Lng) = ((Wrd77.Lng) + (Wrd78.Lng));
  (Wrd80.Obj) = (* (Rsp++));
  Wrd81 = Wrd79;
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  if ((Wrd81.Lng) > (Wrd82.Lng))
    goto label_102;

DEFLABEL (label_101)
  (Wrd92.Obj) = (Rsp [0]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd93.uLng) == 62))
    goto label_100;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd90.Obj) = ((Wrd89.pObj) [0]);
  (Wrd91.Lng) = (FIXNUM_TO_LONG (Wrd90.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd91.Lng))))
    goto label_100;
  (Wrd85.Obj) = ((Wrd89.pObj) [2]);
  (* (--Rsp)) = (Wrd85.Obj);

DEFLABEL (label_99)
  (Wrd108.Obj) = (Rsp [1]);
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if (! ((Wrd109.uLng) == 62))
    goto label_98;
  (Wrd105.pObj) = (OBJECT_ADDRESS (Wrd108.Obj));
  (Wrd106.Obj) = ((Wrd105.pObj) [0]);
  (Wrd107.Lng) = (FIXNUM_TO_LONG (Wrd106.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd107.Lng))))
    goto label_98;
  (Wrd101.Obj) = ((Wrd105.pObj) [9]);
  (* (--Rsp)) = (Wrd101.Obj);

DEFLABEL (label_97)
  (Wrd124.Obj) = (Rsp [2]);
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd124.Obj));
  if (! ((Wrd125.uLng) == 62))
    goto label_96;
  (Wrd121.pObj) = (OBJECT_ADDRESS (Wrd124.Obj));
  (Wrd122.Obj) = ((Wrd121.pObj) [0]);
  (Wrd123.Lng) = (FIXNUM_TO_LONG (Wrd122.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd123.Lng))))
    goto label_96;
  (Wrd117.Obj) = ((Wrd121.pObj) [6]);
  (* (--Rsp)) = (Wrd117.Obj);

DEFLABEL (label_95)
  (Wrd131.Obj) = (current_block [OBJECT_59_6]);
  (* (--Rsp)) = (Wrd131.Obj);
  goto loop_27;

DEFLABEL (label_96)
  (Wrd126.Obj) = (Rsp [2]);
  (Wrd127.Obj) = (current_block [OBJECT_59_3]);
  (Wrd130.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_15]))));
  (* (--Rsp)) = (Wrd130.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_66)
  (* (--Rsp)) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd110.Obj) = (Rsp [1]);
  (Wrd111.Obj) = (current_block [OBJECT_59_5]);
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_14]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_65)
  (* (--Rsp)) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd94.Obj) = (Rsp [0]);
  (Wrd95.Obj) = (current_block [OBJECT_59_4]);
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_13]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_64)
  (* (--Rsp)) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd134.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_7]))));
  (* (--Rsp)) = (Wrd134.Obj);
  (Wrd140.Obj) = (Rsp [2]);
  (Wrd141.uLng) = (OBJECT_TYPE (Wrd140.Obj));
  if (! ((Wrd141.uLng) == 30))
    goto label_104;
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd140.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [1]);
  (Wrd135.Obj) = (MAKE_OBJECT (26, (Wrd139.uLng)));

DEFLABEL (label_103)
  (* (--Rsp)) = (Wrd135.Obj);
  (Wrd146.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd146.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_59_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_101;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_104)
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_11]))));
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd140.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_2]), 1);

DEFLABEL (label_67)
  (Wrd135.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd70.Obj) = (Rsp [2]);
  (Wrd71.Obj) = (current_block [OBJECT_59_3]);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_10]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_63)
  (Wrd59.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_9]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_2]), 1);

DEFLABEL (label_62)
  (Wrd48.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.Obj) = (current_block [OBJECT_59_0]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_8]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_109;

DEFLABEL (loop_80)
DEFLABEL (loop_27)
  INTERRUPT_CHECK (26, LABEL_59_26);
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_123;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_122)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd17.Lng) < (Wrd18.Lng)))
    goto label_117;
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_28]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd59.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_29]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_59_28);
  (* (--Rsp)) = Rvl;
  (Wrd21.Obj) = (Rsp [6]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 30))
    goto label_116;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_116;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_116;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd11.pChr) = (& ((Wrd18.pChr) [(Wrd8.Lng)]));
  (Wrd12.uLng) = ((unsigned long) (((unsigned char *) (Wrd11.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd5.Obj) = (MAKE_OBJECT (2, (Wrd12.uLng)));

DEFLABEL (label_115)
  (Wrd28.Obj) = (* (Rsp++));
  if ((Wrd5.Obj) == (Wrd28.Obj))
    goto label_111;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_111)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd34.Lng) = ((Wrd33.Lng) + 1L);
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd34.Lng));
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_35]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_29]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_59_35);
  if (Rvl == (current_block [OBJECT_59_11]))
    goto label_113;
  (Wrd7.Obj) = (Rsp [2]);
  goto label_112;

DEFLABEL (label_113)
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd13.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));

DEFLABEL (label_112)
DEFLABEL (label_114)
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd10.Lng) + 1L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (Rsp [1]) = (Wrd8.Obj);
  goto loop_27;

DEFLABEL (label_116)
  (Wrd23.Obj) = (Rsp [6]);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_34]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_10]), 2);

DEFLABEL (label_75)
  (Wrd5.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_117)
  (Wrd47.Obj) = (Rsp [4]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 62))
    goto label_121;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd46.Lng))))
    goto label_121;
  (Wrd40.Obj) = (Rsp [1]);
  ((Wrd44.pObj) [6]) = (Wrd40.Obj);

DEFLABEL (label_120)
  (Wrd30.Obj) = (Rsp [4]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_119;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd29.Lng))))
    goto label_119;
  (Wrd23.Obj) = (Rsp [2]);
  ((Wrd27.pObj) [9]) = (Wrd23.Obj);

DEFLABEL (label_118)
  Rvl = (current_block [OBJECT_59_9]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_119)
  (Wrd32.Obj) = (Rsp [4]);
  (Wrd33.Obj) = (current_block [OBJECT_59_5]);
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_31]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_8]), 3);

DEFLABEL (label_73)
  goto label_118;

DEFLABEL (label_121)
  (Wrd49.Obj) = (Rsp [4]);
  (Wrd50.Obj) = (current_block [OBJECT_59_3]);
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_30]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_8]), 3);

DEFLABEL (label_74)
  goto label_120;

DEFLABEL (label_123)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_27]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_2]), 1);

DEFLABEL (label_72)
  (Wrd5.Obj) = Rvl;
  goto label_122;

DEFLABEL (loop_81)
DEFLABEL (loop_55)
  INTERRUPT_CHECK (26, LABEL_59_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_19]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_59_33);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd7.Lng) < (Wrd8.Lng)))
    goto label_128;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_36]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_29]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_59_36);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_29]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_59_39);
  (Wrd5.Obj) = (* (Rsp++));
  if (Rvl == (Wrd5.Obj))
    goto label_124;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_124)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd11.Lng) + 1L);
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_40]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_29]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_59_40);
  if (Rvl == (current_block [OBJECT_59_11]))
    goto label_126;
  (Wrd7.Obj) = (Rsp [2]);
  goto label_125;

DEFLABEL (label_126)
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd13.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));

DEFLABEL (label_125)
DEFLABEL (label_127)
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd10.Lng) + 1L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (Rsp [1]) = (Wrd8.Obj);
  goto loop_55;

DEFLABEL (label_128)
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_132;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd36.Lng))))
    goto label_132;
  (Wrd30.Obj) = (Rsp [1]);
  ((Wrd34.pObj) [6]) = (Wrd30.Obj);

DEFLABEL (label_131)
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_130;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd19.Lng))))
    goto label_130;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [9]) = (Wrd13.Obj);

DEFLABEL (label_129)
  Rvl = (current_block [OBJECT_59_9]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_130)
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.Obj) = (current_block [OBJECT_59_5]);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_38]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_8]), 3);

DEFLABEL (label_76)
  goto label_129;

DEFLABEL (label_132)
  (Wrd39.Obj) = (Rsp [4]);
  (Wrd40.Obj) = (current_block [OBJECT_59_3]);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_37]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_8]), 3);

DEFLABEL (label_77)
  goto label_131;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_7 5
#define LABEL_60_5 7
#define LABEL_60_8 9
#define LABEL_60_9 11
#define LABEL_60_10 13
#define LABEL_60_11 15
#define LABEL_60_13 17
#define LABEL_60_14 19
#define LABEL_60_15 21
#define LABEL_60_17 23
#define LABEL_60_20 25
#define LABEL_60_18 27
#define LABEL_60_21 29
#define LABEL_60_23 31
#define LABEL_60_24 33
#define LABEL_60_25 35
#define LABEL_60_26 37
#define LABEL_60_27 39
#define LABEL_60_31 41
#define LABEL_60_32 43
#define LABEL_60_33 45
#define LABEL_60_22 47
#define LABEL_60_28 49
#define LABEL_60_29 51
#define LABEL_60_36 53
#define LABEL_60_34 55
#define LABEL_60_40 57
#define LABEL_60_41 59
#define LABEL_60_35 61
#define LABEL_60_38 63
#define LABEL_60_39 65
#define LABEL_60_42 67
#define LABEL_60_43 69
#define ENVIRONMENT_LABEL_60_3 96
#define DEBUGGING_LABEL_60_2 95
#define OBJECT_60_11 94
#define OBJECT_60_10 93
#define OBJECT_60_9 92
#define OBJECT_60_8 91
#define OBJECT_60_7 90
#define OBJECT_60_6 89
#define OBJECT_60_5 88
#define OBJECT_60_4 87
#define OBJECT_60_3 86
#define OBJECT_60_2 85
#define OBJECT_60_1 84
#define OBJECT_60_0 83
#define EXECUTE_CACHE_60_37 71
#define EXECUTE_CACHE_60_30 73
#define EXECUTE_CACHE_60_19 75
#define EXECUTE_CACHE_60_16 77
#define EXECUTE_CACHE_60_12 79
#define EXECUTE_CACHE_60_6 81
#define FREE_REFERENCES_LABEL_60_0 70
#define NUMBER_OF_LINKER_SECTIONS_60_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd20;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd62;
  machine_word Wrd60;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd73;
  machine_word Wrd64;
  machine_word Wrd72;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd45;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd84;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd30;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd117;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd101;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd85;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd135;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd134;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd75;
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
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd34;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd28;
  machine_word Wrd27;
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
      goto match_parser_buffer_string_ci_58;

    case 1:
      current_block = (Rpc - LABEL_60_7);
      goto continuation_10;

    case 2:
      current_block = (Rpc - LABEL_60_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_60_8);
      goto label_61;

    case 4:
      current_block = (Rpc - LABEL_60_9);
      goto label_62;

    case 5:
      current_block = (Rpc - LABEL_60_10);
      goto label_63;

    case 6:
      current_block = (Rpc - LABEL_60_11);
      goto label_67;

    case 7:
      current_block = (Rpc - LABEL_60_13);
      goto label_64;

    case 8:
      current_block = (Rpc - LABEL_60_14);
      goto label_65;

    case 9:
      current_block = (Rpc - LABEL_60_15);
      goto label_66;

    case 10:
      current_block = (Rpc - LABEL_60_17);
      goto label_60;

    case 11:
      current_block = (Rpc - LABEL_60_20);
      goto continuation_38;

    case 12:
      current_block = (Rpc - LABEL_60_18);
      goto continuation_31;

    case 13:
      current_block = (Rpc - LABEL_60_21);
      goto label_68;

    case 14:
      current_block = (Rpc - LABEL_60_23);
      goto label_69;

    case 15:
      current_block = (Rpc - LABEL_60_24);
      goto label_70;

    case 16:
      current_block = (Rpc - LABEL_60_25);
      goto label_71;

    case 17:
      current_block = (Rpc - LABEL_60_26);
      goto loop_27;

    case 18:
      current_block = (Rpc - LABEL_60_27);
      goto label_72;

    case 19:
      current_block = (Rpc - LABEL_60_31);
      goto label_74;

    case 20:
      current_block = (Rpc - LABEL_60_32);
      goto label_73;

    case 21:
      current_block = (Rpc - LABEL_60_33);
      goto loop_55;

    case 22:
      current_block = (Rpc - LABEL_60_22);
      goto continuation_36;

    case 23:
      current_block = (Rpc - LABEL_60_28);
      goto continuation_21;

    case 24:
      current_block = (Rpc - LABEL_60_29);
      goto continuation_20;

    case 25:
      current_block = (Rpc - LABEL_60_36);
      goto label_75;

    case 26:
      current_block = (Rpc - LABEL_60_34);
      goto continuation_43;

    case 27:
      current_block = (Rpc - LABEL_60_40);
      goto label_77;

    case 28:
      current_block = (Rpc - LABEL_60_41);
      goto label_76;

    case 29:
      current_block = (Rpc - LABEL_60_35);
      goto continuation_24;

    case 30:
      current_block = (Rpc - LABEL_60_38);
      goto continuation_49;

    case 31:
      current_block = (Rpc - LABEL_60_39);
      goto continuation_48;

    case 32:
      current_block = (Rpc - LABEL_60_42);
      goto continuation_52;

    case 33:
      current_block = (Rpc - LABEL_60_43);
      goto continuation_47;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_parser_buffer_string_ci_79)
DEFLABEL (match_parser_buffer_string_ci_58)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_60_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_93;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_92;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_92;
  (Wrd9.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_91)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_18]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_19]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_60_18);
  (* (--Rsp)) = Rvl;
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_90;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd14.Lng))))
    goto label_90;
  (Wrd6.Obj) = ((Wrd12.pObj) [6]);

DEFLABEL (label_89)
  (Wrd22.Obj) = (* (Rsp++));
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd26.Lng) = ((Wrd24.Lng) + (Wrd25.Lng));
  (Wrd27.Obj) = (* (Rsp++));
  Wrd28 = Wrd26;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! ((Wrd28.Lng) > (Wrd29.Lng)))
    goto label_82;
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_20]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_22]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd85.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_19]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_60_22);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_12]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_60_20);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_82;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_88;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd38.Lng))))
    goto label_88;
  (Wrd32.Obj) = ((Wrd36.pObj) [2]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_87)
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_86;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd54.Lng))))
    goto label_86;
  (Wrd48.Obj) = ((Wrd52.pObj) [9]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_85)
  (Wrd71.Obj) = (Rsp [2]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 62))
    goto label_84;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd70.Lng))))
    goto label_84;
  (Wrd64.Obj) = ((Wrd68.pObj) [6]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_83)
  (Wrd78.Obj) = (current_block [OBJECT_60_6]);
  (* (--Rsp)) = (Wrd78.Obj);
  goto loop_55;

DEFLABEL (label_84)
  (Wrd73.Obj) = (Rsp [2]);
  (Wrd74.Obj) = (current_block [OBJECT_60_3]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_25]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 2);

DEFLABEL (label_71)
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (current_block [OBJECT_60_5]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_24]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 2);

DEFLABEL (label_70)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (current_block [OBJECT_60_4]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_23]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 2);

DEFLABEL (label_69)
  (* (--Rsp)) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.Obj) = (current_block [OBJECT_60_3]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_21]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 2);

DEFLABEL (label_68)
  (Wrd6.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_60_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_17]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 2);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_91;

DEFLABEL (label_93)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 30)
    goto label_94;
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_60_7]);
  (Rsp [1]) = (Wrd30.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_16]));

DEFLABEL (label_94)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_110;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd40.Lng))))
    goto label_110;
  (Wrd34.Obj) = ((Wrd38.pObj) [4]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_109)
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 30))
    goto label_108;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [1]);
  (Wrd48.Obj) = (MAKE_OBJECT (26, (Wrd52.uLng)));

DEFLABEL (label_107)
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd68.Obj) = (Rsp [2]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 62))
    goto label_106;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [0]);
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd67.Lng))))
    goto label_106;
  (Wrd59.Obj) = ((Wrd65.pObj) [6]);

DEFLABEL (label_105)
  (Wrd75.Obj) = (* (Rsp++));
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  (Wrd79.Lng) = ((Wrd77.Lng) + (Wrd78.Lng));
  (Wrd80.Obj) = (* (Rsp++));
  Wrd81 = Wrd79;
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  if ((Wrd81.Lng) > (Wrd82.Lng))
    goto label_102;

DEFLABEL (label_101)
  (Wrd92.Obj) = (Rsp [0]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd93.uLng) == 62))
    goto label_100;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd90.Obj) = ((Wrd89.pObj) [0]);
  (Wrd91.Lng) = (FIXNUM_TO_LONG (Wrd90.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd91.Lng))))
    goto label_100;
  (Wrd85.Obj) = ((Wrd89.pObj) [2]);
  (* (--Rsp)) = (Wrd85.Obj);

DEFLABEL (label_99)
  (Wrd108.Obj) = (Rsp [1]);
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if (! ((Wrd109.uLng) == 62))
    goto label_98;
  (Wrd105.pObj) = (OBJECT_ADDRESS (Wrd108.Obj));
  (Wrd106.Obj) = ((Wrd105.pObj) [0]);
  (Wrd107.Lng) = (FIXNUM_TO_LONG (Wrd106.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd107.Lng))))
    goto label_98;
  (Wrd101.Obj) = ((Wrd105.pObj) [9]);
  (* (--Rsp)) = (Wrd101.Obj);

DEFLABEL (label_97)
  (Wrd124.Obj) = (Rsp [2]);
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd124.Obj));
  if (! ((Wrd125.uLng) == 62))
    goto label_96;
  (Wrd121.pObj) = (OBJECT_ADDRESS (Wrd124.Obj));
  (Wrd122.Obj) = ((Wrd121.pObj) [0]);
  (Wrd123.Lng) = (FIXNUM_TO_LONG (Wrd122.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd123.Lng))))
    goto label_96;
  (Wrd117.Obj) = ((Wrd121.pObj) [6]);
  (* (--Rsp)) = (Wrd117.Obj);

DEFLABEL (label_95)
  (Wrd131.Obj) = (current_block [OBJECT_60_6]);
  (* (--Rsp)) = (Wrd131.Obj);
  goto loop_27;

DEFLABEL (label_96)
  (Wrd126.Obj) = (Rsp [2]);
  (Wrd127.Obj) = (current_block [OBJECT_60_3]);
  (Wrd130.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_15]))));
  (* (--Rsp)) = (Wrd130.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 2);

DEFLABEL (label_66)
  (* (--Rsp)) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd110.Obj) = (Rsp [1]);
  (Wrd111.Obj) = (current_block [OBJECT_60_5]);
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_14]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 2);

DEFLABEL (label_65)
  (* (--Rsp)) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd94.Obj) = (Rsp [0]);
  (Wrd95.Obj) = (current_block [OBJECT_60_4]);
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_13]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 2);

DEFLABEL (label_64)
  (* (--Rsp)) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd134.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_7]))));
  (* (--Rsp)) = (Wrd134.Obj);
  (Wrd140.Obj) = (Rsp [2]);
  (Wrd141.uLng) = (OBJECT_TYPE (Wrd140.Obj));
  if (! ((Wrd141.uLng) == 30))
    goto label_104;
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd140.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [1]);
  (Wrd135.Obj) = (MAKE_OBJECT (26, (Wrd139.uLng)));

DEFLABEL (label_103)
  (* (--Rsp)) = (Wrd135.Obj);
  (Wrd146.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd146.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_60_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_101;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_104)
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_11]))));
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd140.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_2]), 1);

DEFLABEL (label_67)
  (Wrd135.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd70.Obj) = (Rsp [2]);
  (Wrd71.Obj) = (current_block [OBJECT_60_3]);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_10]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 2);

DEFLABEL (label_63)
  (Wrd59.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_9]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_2]), 1);

DEFLABEL (label_62)
  (Wrd48.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.Obj) = (current_block [OBJECT_60_0]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_8]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 2);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_109;

DEFLABEL (loop_80)
DEFLABEL (loop_27)
  INTERRUPT_CHECK (26, LABEL_60_26);
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_123;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_122)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd17.Lng) < (Wrd18.Lng)))
    goto label_117;
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_28]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_29]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd62.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd62.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_30]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_60_29);
  (* (--Rsp)) = Rvl;
  (Wrd21.Obj) = (Rsp [7]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 30))
    goto label_116;
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_116;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_116;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd10.pChr) = (& ((Wrd18.pChr) [(Wrd7.Lng)]));
  (Wrd11.uLng) = ((unsigned long) (((unsigned char *) (Wrd10.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd12.Obj) = (MAKE_OBJECT (2, (Wrd11.uLng)));
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_115)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_37]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_60_28);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_111;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_111)
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_35]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_30]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_60_35);
  if (Rvl == (current_block [OBJECT_60_11]))
    goto label_113;
  (Wrd7.Obj) = (Rsp [2]);
  goto label_112;

DEFLABEL (label_113)
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd13.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));

DEFLABEL (label_112)
DEFLABEL (label_114)
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd10.Lng) + 1L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (Rsp [1]) = (Wrd8.Obj);
  goto loop_27;

DEFLABEL (label_116)
  (Wrd23.Obj) = (Rsp [7]);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_36]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_10]), 2);

DEFLABEL (label_75)
  (* (--Rsp)) = Rvl;
  goto label_115;

DEFLABEL (label_117)
  (Wrd47.Obj) = (Rsp [4]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 62))
    goto label_121;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd46.Lng))))
    goto label_121;
  (Wrd40.Obj) = (Rsp [1]);
  ((Wrd44.pObj) [6]) = (Wrd40.Obj);

DEFLABEL (label_120)
  (Wrd30.Obj) = (Rsp [4]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_119;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd29.Lng))))
    goto label_119;
  (Wrd23.Obj) = (Rsp [2]);
  ((Wrd27.pObj) [9]) = (Wrd23.Obj);

DEFLABEL (label_118)
  Rvl = (current_block [OBJECT_60_9]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_119)
  (Wrd32.Obj) = (Rsp [4]);
  (Wrd33.Obj) = (current_block [OBJECT_60_5]);
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_32]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_8]), 3);

DEFLABEL (label_73)
  goto label_118;

DEFLABEL (label_121)
  (Wrd49.Obj) = (Rsp [4]);
  (Wrd50.Obj) = (current_block [OBJECT_60_3]);
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_31]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_8]), 3);

DEFLABEL (label_74)
  goto label_120;

DEFLABEL (label_123)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_27]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_2]), 1);

DEFLABEL (label_72)
  (Wrd5.Obj) = Rvl;
  goto label_122;

DEFLABEL (loop_81)
DEFLABEL (loop_55)
  INTERRUPT_CHECK (26, LABEL_60_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_19]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_60_34);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd7.Lng) < (Wrd8.Lng)))
    goto label_128;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_38]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_39]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_30]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_60_39);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_30]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_60_43);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_37]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_60_38);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_124;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_124)
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_42]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_30]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_60_42);
  if (Rvl == (current_block [OBJECT_60_11]))
    goto label_126;
  (Wrd7.Obj) = (Rsp [2]);
  goto label_125;

DEFLABEL (label_126)
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd13.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));

DEFLABEL (label_125)
DEFLABEL (label_127)
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd10.Lng) + 1L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (Rsp [1]) = (Wrd8.Obj);
  goto loop_55;

DEFLABEL (label_128)
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_132;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd36.Lng))))
    goto label_132;
  (Wrd30.Obj) = (Rsp [1]);
  ((Wrd34.pObj) [6]) = (Wrd30.Obj);

DEFLABEL (label_131)
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_130;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd19.Lng))))
    goto label_130;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [9]) = (Wrd13.Obj);

DEFLABEL (label_129)
  Rvl = (current_block [OBJECT_60_9]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_130)
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.Obj) = (current_block [OBJECT_60_5]);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_41]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_8]), 3);

DEFLABEL (label_76)
  goto label_129;

DEFLABEL (label_132)
  (Wrd39.Obj) = (Rsp [4]);
  (Wrd40.Obj) = (current_block [OBJECT_60_3]);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_40]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_8]), 3);

DEFLABEL (label_77)
  goto label_131;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_7 5
#define LABEL_61_5 7
#define LABEL_61_8 9
#define LABEL_61_9 11
#define LABEL_61_10 13
#define LABEL_61_11 15
#define LABEL_61_13 17
#define LABEL_61_14 19
#define LABEL_61_16 21
#define LABEL_61_19 23
#define LABEL_61_17 25
#define LABEL_61_20 27
#define LABEL_61_22 29
#define LABEL_61_23 31
#define LABEL_61_24 33
#define LABEL_61_25 35
#define LABEL_61_28 37
#define LABEL_61_21 39
#define LABEL_61_26 41
#define LABEL_61_30 43
#define LABEL_61_29 45
#define LABEL_61_31 47
#define LABEL_61_32 49
#define ENVIRONMENT_LABEL_61_3 71
#define DEBUGGING_LABEL_61_2 70
#define OBJECT_61_8 69
#define OBJECT_61_7 68
#define OBJECT_61_6 67
#define OBJECT_61_5 66
#define OBJECT_61_4 65
#define OBJECT_61_3 64
#define OBJECT_61_2 63
#define OBJECT_61_1 62
#define OBJECT_61_0 61
#define EXECUTE_CACHE_61_27 51
#define EXECUTE_CACHE_61_18 53
#define EXECUTE_CACHE_61_15 55
#define EXECUTE_CACHE_61_12 57
#define EXECUTE_CACHE_61_6 59
#define FREE_REFERENCES_LABEL_61_0 50
#define NUMBER_OF_LINKER_SECTIONS_61_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd45;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd30;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd101;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd85;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd119;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd118;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd75;
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
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd34;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd28;
  machine_word Wrd27;
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
      goto match_parser_buffer_string_no_advance_46;

    case 1:
      current_block = (Rpc - LABEL_61_7);
      goto continuation_10;

    case 2:
      current_block = (Rpc - LABEL_61_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_61_8);
      goto label_49;

    case 4:
      current_block = (Rpc - LABEL_61_9);
      goto label_50;

    case 5:
      current_block = (Rpc - LABEL_61_10);
      goto label_51;

    case 6:
      current_block = (Rpc - LABEL_61_11);
      goto label_54;

    case 7:
      current_block = (Rpc - LABEL_61_13);
      goto label_52;

    case 8:
      current_block = (Rpc - LABEL_61_14);
      goto label_53;

    case 9:
      current_block = (Rpc - LABEL_61_16);
      goto label_48;

    case 10:
      current_block = (Rpc - LABEL_61_19);
      goto continuation_32;

    case 11:
      current_block = (Rpc - LABEL_61_17);
      goto continuation_25;

    case 12:
      current_block = (Rpc - LABEL_61_20);
      goto label_55;

    case 13:
      current_block = (Rpc - LABEL_61_22);
      goto label_56;

    case 14:
      current_block = (Rpc - LABEL_61_23);
      goto label_57;

    case 15:
      current_block = (Rpc - LABEL_61_24);
      goto loop_21;

    case 16:
      current_block = (Rpc - LABEL_61_25);
      goto label_58;

    case 17:
      current_block = (Rpc - LABEL_61_28);
      goto loop_43;

    case 18:
      current_block = (Rpc - LABEL_61_21);
      goto continuation_30;

    case 19:
      current_block = (Rpc - LABEL_61_26);
      goto continuation_17;

    case 20:
      current_block = (Rpc - LABEL_61_30);
      goto label_59;

    case 21:
      current_block = (Rpc - LABEL_61_29);
      goto continuation_36;

    case 22:
      current_block = (Rpc - LABEL_61_31);
      goto continuation_39;

    case 23:
      current_block = (Rpc - LABEL_61_32);
      goto continuation_38;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_parser_buffer_string_no_advance_61)
DEFLABEL (match_parser_buffer_string_no_advance_46)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_61_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_73;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_72;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_72;
  (Wrd9.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_71)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_17]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_18]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_61_17);
  (* (--Rsp)) = Rvl;
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_70;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd14.Lng))))
    goto label_70;
  (Wrd6.Obj) = ((Wrd12.pObj) [6]);

DEFLABEL (label_69)
  (Wrd22.Obj) = (* (Rsp++));
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd26.Lng) = ((Wrd24.Lng) + (Wrd25.Lng));
  (Wrd27.Obj) = (* (Rsp++));
  Wrd28 = Wrd26;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! ((Wrd28.Lng) > (Wrd29.Lng)))
    goto label_64;
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_19]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_21]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd69.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd69.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_18]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_61_21);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_12]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_61_19);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_64;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_68;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd38.Lng))))
    goto label_68;
  (Wrd32.Obj) = ((Wrd36.pObj) [2]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_67)
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_66;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd54.Lng))))
    goto label_66;
  (Wrd48.Obj) = ((Wrd52.pObj) [6]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_65)
  (Wrd62.Obj) = (current_block [OBJECT_61_5]);
  (* (--Rsp)) = (Wrd62.Obj);
  goto loop_43;

DEFLABEL (label_66)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (current_block [OBJECT_61_3]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_23]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 2);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (current_block [OBJECT_61_4]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_22]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 2);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.Obj) = (current_block [OBJECT_61_3]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_20]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 2);

DEFLABEL (label_55)
  (Wrd6.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_61_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_16]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 2);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (label_73)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 30)
    goto label_74;
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_61_6]);
  (Rsp [1]) = (Wrd30.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_15]));

DEFLABEL (label_74)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_88;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd40.Lng))))
    goto label_88;
  (Wrd34.Obj) = ((Wrd38.pObj) [4]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_87)
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 30))
    goto label_86;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [1]);
  (Wrd48.Obj) = (MAKE_OBJECT (26, (Wrd52.uLng)));

DEFLABEL (label_85)
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd68.Obj) = (Rsp [2]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 62))
    goto label_84;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [0]);
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd67.Lng))))
    goto label_84;
  (Wrd59.Obj) = ((Wrd65.pObj) [6]);

DEFLABEL (label_83)
  (Wrd75.Obj) = (* (Rsp++));
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  (Wrd79.Lng) = ((Wrd77.Lng) + (Wrd78.Lng));
  (Wrd80.Obj) = (* (Rsp++));
  Wrd81 = Wrd79;
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  if ((Wrd81.Lng) > (Wrd82.Lng))
    goto label_80;

DEFLABEL (label_79)
  (Wrd92.Obj) = (Rsp [0]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd93.uLng) == 62))
    goto label_78;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd90.Obj) = ((Wrd89.pObj) [0]);
  (Wrd91.Lng) = (FIXNUM_TO_LONG (Wrd90.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd91.Lng))))
    goto label_78;
  (Wrd85.Obj) = ((Wrd89.pObj) [2]);
  (* (--Rsp)) = (Wrd85.Obj);

DEFLABEL (label_77)
  (Wrd108.Obj) = (Rsp [1]);
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if (! ((Wrd109.uLng) == 62))
    goto label_76;
  (Wrd105.pObj) = (OBJECT_ADDRESS (Wrd108.Obj));
  (Wrd106.Obj) = ((Wrd105.pObj) [0]);
  (Wrd107.Lng) = (FIXNUM_TO_LONG (Wrd106.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd107.Lng))))
    goto label_76;
  (Wrd101.Obj) = ((Wrd105.pObj) [6]);
  (* (--Rsp)) = (Wrd101.Obj);

DEFLABEL (label_75)
  (Wrd115.Obj) = (current_block [OBJECT_61_5]);
  (* (--Rsp)) = (Wrd115.Obj);
  goto loop_21;

DEFLABEL (label_76)
  (Wrd110.Obj) = (Rsp [1]);
  (Wrd111.Obj) = (current_block [OBJECT_61_3]);
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_14]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 2);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd94.Obj) = (Rsp [0]);
  (Wrd95.Obj) = (current_block [OBJECT_61_4]);
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_13]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 2);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_7]))));
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd124.Obj) = (Rsp [2]);
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd124.Obj));
  if (! ((Wrd125.uLng) == 30))
    goto label_82;
  (Wrd122.pObj) = (OBJECT_ADDRESS (Wrd124.Obj));
  (Wrd123.Obj) = ((Wrd122.pObj) [1]);
  (Wrd119.Obj) = (MAKE_OBJECT (26, (Wrd123.uLng)));

DEFLABEL (label_81)
  (* (--Rsp)) = (Wrd119.Obj);
  (Wrd130.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd130.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_61_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_79;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_11]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd124.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 1);

DEFLABEL (label_54)
  (Wrd119.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd70.Obj) = (Rsp [2]);
  (Wrd71.Obj) = (current_block [OBJECT_61_3]);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_10]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 2);

DEFLABEL (label_51)
  (Wrd59.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_9]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 1);

DEFLABEL (label_50)
  (Wrd48.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.Obj) = (current_block [OBJECT_61_0]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_8]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 2);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_87;

DEFLABEL (loop_62)
DEFLABEL (loop_21)
  INTERRUPT_CHECK (26, LABEL_61_24);
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_94;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_93)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd17.Lng) < (Wrd18.Lng))
    goto label_89;
  Rvl = (current_block [OBJECT_61_7]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_89)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_26]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_27]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_61_26);
  (* (--Rsp)) = Rvl;
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 30))
    goto label_92;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_92;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_92;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd11.pChr) = (& ((Wrd18.pChr) [(Wrd8.Lng)]));
  (Wrd12.uLng) = ((unsigned long) (((unsigned char *) (Wrd11.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd5.Obj) = (MAKE_OBJECT (2, (Wrd12.uLng)));

DEFLABEL (label_91)
  (Wrd28.Obj) = (* (Rsp++));
  if ((Wrd5.Obj) == (Wrd28.Obj))
    goto label_90;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_90)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd34.Lng) = ((Wrd33.Lng) + 1L);
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd34.Lng));
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  (Wrd38.Lng) = ((Wrd37.Lng) + 1L);
  (Wrd35.Obj) = (LONG_TO_FIXNUM (Wrd38.Lng));
  (Rsp [1]) = (Wrd35.Obj);
  goto loop_21;

DEFLABEL (label_92)
  (Wrd23.Obj) = (Rsp [5]);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_30]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_8]), 2);

DEFLABEL (label_59)
  (Wrd5.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_25]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 1);

DEFLABEL (label_58)
  (Wrd5.Obj) = Rvl;
  goto label_93;

DEFLABEL (loop_63)
DEFLABEL (loop_43)
  INTERRUPT_CHECK (26, LABEL_61_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_18]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_61_29);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd7.Lng) < (Wrd8.Lng))
    goto label_95;
  Rvl = (current_block [OBJECT_61_7]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_95)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_31]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_27]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_61_31);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_27]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_61_32);
  (Wrd5.Obj) = (* (Rsp++));
  if (Rvl == (Wrd5.Obj))
    goto label_96;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_96)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd11.Lng) + 1L);
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd16.Lng) = ((Wrd15.Lng) + 1L);
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  (Rsp [1]) = (Wrd13.Obj);
  goto loop_43;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_7 5
#define LABEL_62_5 7
#define LABEL_62_8 9
#define LABEL_62_9 11
#define LABEL_62_10 13
#define LABEL_62_11 15
#define LABEL_62_13 17
#define LABEL_62_14 19
#define LABEL_62_16 21
#define LABEL_62_19 23
#define LABEL_62_17 25
#define LABEL_62_20 27
#define LABEL_62_22 29
#define LABEL_62_23 31
#define LABEL_62_24 33
#define LABEL_62_25 35
#define LABEL_62_29 37
#define LABEL_62_21 39
#define LABEL_62_26 41
#define LABEL_62_27 43
#define LABEL_62_31 45
#define LABEL_62_30 47
#define LABEL_62_33 49
#define LABEL_62_34 51
#define LABEL_62_35 53
#define ENVIRONMENT_LABEL_62_3 77
#define DEBUGGING_LABEL_62_2 76
#define OBJECT_62_8 75
#define OBJECT_62_7 74
#define OBJECT_62_6 73
#define OBJECT_62_5 72
#define OBJECT_62_4 71
#define OBJECT_62_3 70
#define OBJECT_62_2 69
#define OBJECT_62_1 68
#define OBJECT_62_0 67
#define EXECUTE_CACHE_62_32 55
#define EXECUTE_CACHE_62_28 57
#define EXECUTE_CACHE_62_18 59
#define EXECUTE_CACHE_62_15 61
#define EXECUTE_CACHE_62_12 63
#define EXECUTE_CACHE_62_6 65
#define FREE_REFERENCES_LABEL_62_0 54
#define NUMBER_OF_LINKER_SECTIONS_62_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd45;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd30;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd101;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd85;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd119;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd118;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd75;
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
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd34;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd28;
  machine_word Wrd27;
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
      goto match_parser_buffer_string_ci_no_advance_46;

    case 1:
      current_block = (Rpc - LABEL_62_7);
      goto continuation_10;

    case 2:
      current_block = (Rpc - LABEL_62_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_62_8);
      goto label_49;

    case 4:
      current_block = (Rpc - LABEL_62_9);
      goto label_50;

    case 5:
      current_block = (Rpc - LABEL_62_10);
      goto label_51;

    case 6:
      current_block = (Rpc - LABEL_62_11);
      goto label_54;

    case 7:
      current_block = (Rpc - LABEL_62_13);
      goto label_52;

    case 8:
      current_block = (Rpc - LABEL_62_14);
      goto label_53;

    case 9:
      current_block = (Rpc - LABEL_62_16);
      goto label_48;

    case 10:
      current_block = (Rpc - LABEL_62_19);
      goto continuation_32;

    case 11:
      current_block = (Rpc - LABEL_62_17);
      goto continuation_25;

    case 12:
      current_block = (Rpc - LABEL_62_20);
      goto label_55;

    case 13:
      current_block = (Rpc - LABEL_62_22);
      goto label_56;

    case 14:
      current_block = (Rpc - LABEL_62_23);
      goto label_57;

    case 15:
      current_block = (Rpc - LABEL_62_24);
      goto loop_21;

    case 16:
      current_block = (Rpc - LABEL_62_25);
      goto label_58;

    case 17:
      current_block = (Rpc - LABEL_62_29);
      goto loop_43;

    case 18:
      current_block = (Rpc - LABEL_62_21);
      goto continuation_30;

    case 19:
      current_block = (Rpc - LABEL_62_26);
      goto continuation_18;

    case 20:
      current_block = (Rpc - LABEL_62_27);
      goto continuation_17;

    case 21:
      current_block = (Rpc - LABEL_62_31);
      goto label_59;

    case 22:
      current_block = (Rpc - LABEL_62_30);
      goto continuation_36;

    case 23:
      current_block = (Rpc - LABEL_62_33);
      goto continuation_40;

    case 24:
      current_block = (Rpc - LABEL_62_34);
      goto continuation_39;

    case 25:
      current_block = (Rpc - LABEL_62_35);
      goto continuation_38;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_parser_buffer_string_ci_no_advance_61)
DEFLABEL (match_parser_buffer_string_ci_no_advance_46)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_62_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_73;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_72;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_72;
  (Wrd9.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_71)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_17]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_18]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_62_17);
  (* (--Rsp)) = Rvl;
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_70;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd14.Lng))))
    goto label_70;
  (Wrd6.Obj) = ((Wrd12.pObj) [6]);

DEFLABEL (label_69)
  (Wrd22.Obj) = (* (Rsp++));
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd26.Lng) = ((Wrd24.Lng) + (Wrd25.Lng));
  (Wrd27.Obj) = (* (Rsp++));
  Wrd28 = Wrd26;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! ((Wrd28.Lng) > (Wrd29.Lng)))
    goto label_64;
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_19]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_21]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd69.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd69.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_18]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_62_21);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_12]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_62_19);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_64;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_68;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd38.Lng))))
    goto label_68;
  (Wrd32.Obj) = ((Wrd36.pObj) [2]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_67)
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_66;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd54.Lng))))
    goto label_66;
  (Wrd48.Obj) = ((Wrd52.pObj) [6]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_65)
  (Wrd62.Obj) = (current_block [OBJECT_62_5]);
  (* (--Rsp)) = (Wrd62.Obj);
  goto loop_43;

DEFLABEL (label_66)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (current_block [OBJECT_62_3]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_23]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (current_block [OBJECT_62_4]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_22]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.Obj) = (current_block [OBJECT_62_3]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_20]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

DEFLABEL (label_55)
  (Wrd6.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_62_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_16]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (label_73)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 30)
    goto label_74;
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_62_6]);
  (Rsp [1]) = (Wrd30.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_15]));

DEFLABEL (label_74)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_88;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd40.Lng))))
    goto label_88;
  (Wrd34.Obj) = ((Wrd38.pObj) [4]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_87)
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 30))
    goto label_86;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [1]);
  (Wrd48.Obj) = (MAKE_OBJECT (26, (Wrd52.uLng)));

DEFLABEL (label_85)
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd68.Obj) = (Rsp [2]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 62))
    goto label_84;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [0]);
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd67.Lng))))
    goto label_84;
  (Wrd59.Obj) = ((Wrd65.pObj) [6]);

DEFLABEL (label_83)
  (Wrd75.Obj) = (* (Rsp++));
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  (Wrd79.Lng) = ((Wrd77.Lng) + (Wrd78.Lng));
  (Wrd80.Obj) = (* (Rsp++));
  Wrd81 = Wrd79;
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  if ((Wrd81.Lng) > (Wrd82.Lng))
    goto label_80;

DEFLABEL (label_79)
  (Wrd92.Obj) = (Rsp [0]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd93.uLng) == 62))
    goto label_78;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd90.Obj) = ((Wrd89.pObj) [0]);
  (Wrd91.Lng) = (FIXNUM_TO_LONG (Wrd90.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd91.Lng))))
    goto label_78;
  (Wrd85.Obj) = ((Wrd89.pObj) [2]);
  (* (--Rsp)) = (Wrd85.Obj);

DEFLABEL (label_77)
  (Wrd108.Obj) = (Rsp [1]);
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if (! ((Wrd109.uLng) == 62))
    goto label_76;
  (Wrd105.pObj) = (OBJECT_ADDRESS (Wrd108.Obj));
  (Wrd106.Obj) = ((Wrd105.pObj) [0]);
  (Wrd107.Lng) = (FIXNUM_TO_LONG (Wrd106.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd107.Lng))))
    goto label_76;
  (Wrd101.Obj) = ((Wrd105.pObj) [6]);
  (* (--Rsp)) = (Wrd101.Obj);

DEFLABEL (label_75)
  (Wrd115.Obj) = (current_block [OBJECT_62_5]);
  (* (--Rsp)) = (Wrd115.Obj);
  goto loop_21;

DEFLABEL (label_76)
  (Wrd110.Obj) = (Rsp [1]);
  (Wrd111.Obj) = (current_block [OBJECT_62_3]);
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_14]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd94.Obj) = (Rsp [0]);
  (Wrd95.Obj) = (current_block [OBJECT_62_4]);
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_13]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_7]))));
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd124.Obj) = (Rsp [2]);
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd124.Obj));
  if (! ((Wrd125.uLng) == 30))
    goto label_82;
  (Wrd122.pObj) = (OBJECT_ADDRESS (Wrd124.Obj));
  (Wrd123.Obj) = ((Wrd122.pObj) [1]);
  (Wrd119.Obj) = (MAKE_OBJECT (26, (Wrd123.uLng)));

DEFLABEL (label_81)
  (* (--Rsp)) = (Wrd119.Obj);
  (Wrd130.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd130.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_62_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_79;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_11]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd124.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_2]), 1);

DEFLABEL (label_54)
  (Wrd119.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd70.Obj) = (Rsp [2]);
  (Wrd71.Obj) = (current_block [OBJECT_62_3]);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_10]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

DEFLABEL (label_51)
  (Wrd59.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_9]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_2]), 1);

DEFLABEL (label_50)
  (Wrd48.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.Obj) = (current_block [OBJECT_62_0]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_8]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_87;

DEFLABEL (loop_62)
DEFLABEL (loop_21)
  INTERRUPT_CHECK (26, LABEL_62_24);
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_94;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_93)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd17.Lng) < (Wrd18.Lng))
    goto label_89;
  Rvl = (current_block [OBJECT_62_7]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_89)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_26]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_27]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_28]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_62_27);
  (* (--Rsp)) = Rvl;
  (Wrd21.Obj) = (Rsp [6]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 30))
    goto label_92;
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_92;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_92;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd10.pChr) = (& ((Wrd18.pChr) [(Wrd7.Lng)]));
  (Wrd11.uLng) = ((unsigned long) (((unsigned char *) (Wrd10.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd12.Obj) = (MAKE_OBJECT (2, (Wrd11.uLng)));
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_91)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_32]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_62_26);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_90;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd13.Lng) + 1L);
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (Rsp [1]) = (Wrd11.Obj);
  goto loop_21;

DEFLABEL (label_90)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_92)
  (Wrd23.Obj) = (Rsp [6]);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_31]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_8]), 2);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_25]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_2]), 1);

DEFLABEL (label_58)
  (Wrd5.Obj) = Rvl;
  goto label_93;

DEFLABEL (loop_63)
DEFLABEL (loop_43)
  INTERRUPT_CHECK (26, LABEL_62_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_18]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_62_30);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd7.Lng) < (Wrd8.Lng))
    goto label_95;
  Rvl = (current_block [OBJECT_62_7]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_95)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_33]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_34]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_28]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_62_34);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_28]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_62_35);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_32]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_62_33);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_96;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd13.Lng) + 1L);
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (Rsp [1]) = (Wrd11.Obj);
  goto loop_43;

DEFLABEL (label_96)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define LABEL_63_7 7
#define LABEL_63_8 9
#define LABEL_63_10 11
#define LABEL_63_12 13
#define ENVIRONMENT_LABEL_63_3 28
#define DEBUGGING_LABEL_63_2 27
#define OBJECT_63_2 26
#define OBJECT_63_1 25
#define OBJECT_63_0 24
#define EXECUTE_CACHE_63_11 15
#define EXECUTE_CACHE_63_9 17
#define EXECUTE_CACHE_63_6 19
#define FREE_REFERENCE_63_1 22
#define FREE_REFERENCE_63_0 23
#define FREE_REFERENCES_LABEL_63_0 14
#define NUMBER_OF_LINKER_SECTIONS_63_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd15;
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
      goto match_string_4;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_63_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_63_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_63_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_63_12);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_string_10)
DEFLABEL (match_string_4)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_63_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_63_0]);
  (Rsp [3]) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_63_10);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (Rsp [6]);
  (Rsp [5]) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_12;
  Wrd8 = Wrd12;

DEFLABEL (label_11)
  (Rsp [6]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 7);
  }

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_12])), (Wrd9.pObj));

DEFLABEL (label_8)
  (Wrd8.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_13)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 30)
    goto label_14;
  (Wrd17.Obj) = (current_block [OBJECT_63_2]);
  (Rsp [2]) = (Wrd17.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_9]));

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_63_0]);
  (Rsp [3]) = (Wrd23.Obj);
  if (! ((Wrd16.uLng) == 30))
    goto label_18;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [1]);
  (Wrd24.Obj) = (MAKE_OBJECT (26, (Wrd28.uLng)));

DEFLABEL (label_17)
  (Rsp [4]) = (Wrd24.Obj);
  (Wrd35.Obj) = (Rsp [6]);
  (Rsp [5]) = (Wrd35.Obj);
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd41.Obj) = ((Wrd38.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_16;
  Wrd37 = Wrd41;

DEFLABEL (label_15)
  (Rsp [6]) = (Wrd37.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 7);
  }

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_8])), (Wrd38.pObj));

DEFLABEL (label_7)
  (Wrd37.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_7]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_1]), 1);

DEFLABEL (label_6)
  (Wrd24.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_7 5
#define LABEL_64_8 7
#define LABEL_64_5 9
#define LABEL_64_9 11
#define LABEL_64_10 13
#define LABEL_64_11 15
#define LABEL_64_12 17
#define LABEL_64_13 19
#define LABEL_64_15 21
#define LABEL_64_16 23
#define LABEL_64_18 25
#define LABEL_64_19 27
#define LABEL_64_20 29
#define LABEL_64_21 31
#define LABEL_64_24 33
#define LABEL_64_25 35
#define LABEL_64_26 37
#define LABEL_64_28 39
#define LABEL_64_29 41
#define LABEL_64_22 43
#define LABEL_64_27 45
#define LABEL_64_31 47
#define LABEL_64_30 49
#define LABEL_64_32 51
#define LABEL_64_33 53
#define ENVIRONMENT_LABEL_64_3 74
#define DEBUGGING_LABEL_64_2 73
#define OBJECT_64_9 72
#define OBJECT_64_8 71
#define OBJECT_64_7 70
#define OBJECT_64_6 69
#define OBJECT_64_5 68
#define OBJECT_64_4 67
#define OBJECT_64_3 66
#define OBJECT_64_2 65
#define OBJECT_64_1 64
#define OBJECT_64_0 63
#define EXECUTE_CACHE_64_23 55
#define EXECUTE_CACHE_64_17 57
#define EXECUTE_CACHE_64_14 59
#define EXECUTE_CACHE_64_6 61
#define FREE_REFERENCES_LABEL_64_0 54
#define NUMBER_OF_LINKER_SECTIONS_64_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd28;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd47;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd86;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd70;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd54;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd219;
  machine_word Wrd103;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
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
  machine_word Wrd16;
  machine_word Wrd113;
  machine_word Wrd209;
  machine_word Wrd208;
  machine_word Wrd205;
  machine_word Wrd204;
  machine_word Wrd195;
  machine_word Wrd201;
  machine_word Wrd200;
  machine_word Wrd199;
  machine_word Wrd203;
  machine_word Wrd202;
  machine_word Wrd192;
  machine_word Wrd189;
  machine_word Wrd188;
  machine_word Wrd179;
  machine_word Wrd185;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd187;
  machine_word Wrd186;
  machine_word Wrd176;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd163;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd212;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd155;
  machine_word Wrd148;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd147;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd132;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd131;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd118;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd112;
  machine_word Wrd111;
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
      goto match_parser_buffer_substring_52;

    case 1:
      current_block = (Rpc - LABEL_64_7);
      goto continuation_8;

    case 2:
      current_block = (Rpc - LABEL_64_8);
      goto continuation_33;

    case 3:
      current_block = (Rpc - LABEL_64_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_64_9);
      goto label_59;

    case 5:
      current_block = (Rpc - LABEL_64_10);
      goto label_60;

    case 6:
      current_block = (Rpc - LABEL_64_11);
      goto label_61;

    case 7:
      current_block = (Rpc - LABEL_64_12);
      goto label_62;

    case 8:
      current_block = (Rpc - LABEL_64_13);
      goto label_63;

    case 9:
      current_block = (Rpc - LABEL_64_15);
      goto label_54;

    case 10:
      current_block = (Rpc - LABEL_64_16);
      goto label_55;

    case 11:
      current_block = (Rpc - LABEL_64_18);
      goto label_56;

    case 12:
      current_block = (Rpc - LABEL_64_19);
      goto label_57;

    case 13:
      current_block = (Rpc - LABEL_64_20);
      goto label_58;

    case 14:
      current_block = (Rpc - LABEL_64_21);
      goto loop_49;

    case 15:
      current_block = (Rpc - LABEL_64_24);
      goto label_65;

    case 16:
      current_block = (Rpc - LABEL_64_25);
      goto label_64;

    case 17:
      current_block = (Rpc - LABEL_64_26);
      goto loop_24;

    case 18:
      current_block = (Rpc - LABEL_64_28);
      goto label_67;

    case 19:
      current_block = (Rpc - LABEL_64_29);
      goto label_66;

    case 20:
      current_block = (Rpc - LABEL_64_22);
      goto continuation_42;

    case 21:
      current_block = (Rpc - LABEL_64_27);
      goto continuation_17;

    case 22:
      current_block = (Rpc - LABEL_64_31);
      goto label_68;

    case 23:
      current_block = (Rpc - LABEL_64_30);
      goto continuation_41;

    case 24:
      current_block = (Rpc - LABEL_64_32);
      goto continuation_21;

    case 25:
      current_block = (Rpc - LABEL_64_33);
      goto continuation_46;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_parser_buffer_substring_70)
DEFLABEL (match_parser_buffer_substring_52)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_64_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_86;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_85;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_85;
  (Wrd9.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_84)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_83;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd31.Lng))))
    goto label_83;
  (Wrd23.Obj) = ((Wrd29.pObj) [6]);

DEFLABEL (label_82)
  (Wrd40.Obj) = (Rsp [4]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd44.Lng) = ((Wrd41.Lng) - (Wrd43.Lng));
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd44.Lng));
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd48.Lng) = ((Wrd46.Lng) + (Wrd44.Lng));
  (Wrd49.Obj) = (* (Rsp++));
  Wrd50 = Wrd48;
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if ((Wrd50.Lng) > (Wrd51.Lng))
    goto label_80;

DEFLABEL (label_79)
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 62))
    goto label_78;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd60.Lng))))
    goto label_78;
  (Wrd54.Obj) = ((Wrd58.pObj) [2]);
  (* (--Rsp)) = (Wrd54.Obj);

DEFLABEL (label_77)
  (Wrd77.Obj) = (Rsp [1]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd78.uLng) == 62))
    goto label_76;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [0]);
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd76.Lng))))
    goto label_76;
  (Wrd70.Obj) = ((Wrd74.pObj) [9]);
  (* (--Rsp)) = (Wrd70.Obj);

DEFLABEL (label_75)
  (Wrd93.Obj) = (Rsp [2]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd94.uLng) == 62))
    goto label_74;
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd91.Obj) = ((Wrd90.pObj) [0]);
  (Wrd92.Lng) = (FIXNUM_TO_LONG (Wrd91.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd92.Lng))))
    goto label_74;
  (Wrd86.Obj) = ((Wrd90.pObj) [6]);
  (* (--Rsp)) = (Wrd86.Obj);

DEFLABEL (label_73)
  (Wrd100.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd100.Obj);
  goto loop_49;

DEFLABEL (label_74)
  (Wrd95.Obj) = (Rsp [2]);
  (Wrd96.Obj) = (current_block [OBJECT_64_2]);
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_20]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 2);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd79.Obj) = (Rsp [1]);
  (Wrd80.Obj) = (current_block [OBJECT_64_4]);
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_19]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 2);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd63.Obj) = (Rsp [0]);
  (Wrd64.Obj) = (current_block [OBJECT_64_3]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_18]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 2);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_8]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_81)
  (Wrd219.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd219.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_17]));

DEFLABEL (label_83)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_64_2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_16]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 2);

DEFLABEL (label_55)
  (Wrd23.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_64_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_15]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 2);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (label_86)
  (Wrd111.Obj) = (Rsp [1]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if ((Wrd112.uLng) == 30)
    goto label_87;
  (Wrd113.Obj) = (current_block [OBJECT_64_5]);
  (Rsp [2]) = (Wrd113.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_14]));

DEFLABEL (label_87)
  (Wrd125.Obj) = (Rsp [0]);
  (Wrd126.uLng) = (OBJECT_TYPE (Wrd125.Obj));
  if (! ((Wrd126.uLng) == 62))
    goto label_99;
  (Wrd122.pObj) = (OBJECT_ADDRESS (Wrd125.Obj));
  (Wrd123.Obj) = ((Wrd122.pObj) [0]);
  (Wrd124.Lng) = (FIXNUM_TO_LONG (Wrd123.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd124.Lng))))
    goto label_99;
  (Wrd118.Obj) = ((Wrd122.pObj) [4]);
  (* (--Rsp)) = (Wrd118.Obj);

DEFLABEL (label_98)
  (Wrd141.Obj) = (Rsp [1]);
  (Wrd142.uLng) = (OBJECT_TYPE (Wrd141.Obj));
  if (! ((Wrd142.uLng) == 62))
    goto label_97;
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd141.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [0]);
  (Wrd140.Lng) = (FIXNUM_TO_LONG (Wrd139.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd140.Lng))))
    goto label_97;
  (Wrd132.Obj) = ((Wrd138.pObj) [6]);

DEFLABEL (label_96)
  (Wrd149.Obj) = (Rsp [4]);
  (Wrd150.Lng) = (FIXNUM_TO_LONG (Wrd149.Obj));
  (Wrd151.Obj) = (Rsp [3]);
  (Wrd152.Lng) = (FIXNUM_TO_LONG (Wrd151.Obj));
  (Wrd153.Lng) = ((Wrd150.Lng) - (Wrd152.Lng));
  (Wrd148.Obj) = (LONG_TO_FIXNUM (Wrd153.Lng));
  (Wrd155.Lng) = (FIXNUM_TO_LONG (Wrd132.Obj));
  (Wrd157.Lng) = ((Wrd155.Lng) + (Wrd153.Lng));
  (Wrd158.Obj) = (* (Rsp++));
  Wrd159 = Wrd157;
  (Wrd160.Lng) = (FIXNUM_TO_LONG (Wrd158.Obj));
  if ((Wrd159.Lng) > (Wrd160.Lng))
    goto label_95;

DEFLABEL (label_94)
  (Wrd170.Obj) = (Rsp [0]);
  (Wrd171.uLng) = (OBJECT_TYPE (Wrd170.Obj));
  if (! ((Wrd171.uLng) == 62))
    goto label_93;
  (Wrd167.pObj) = (OBJECT_ADDRESS (Wrd170.Obj));
  (Wrd168.Obj) = ((Wrd167.pObj) [0]);
  (Wrd169.Lng) = (FIXNUM_TO_LONG (Wrd168.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd169.Lng))))
    goto label_93;
  (Wrd163.Obj) = ((Wrd167.pObj) [2]);
  (* (--Rsp)) = (Wrd163.Obj);

DEFLABEL (label_92)
  (Wrd186.Obj) = (Rsp [1]);
  (Wrd187.uLng) = (OBJECT_TYPE (Wrd186.Obj));
  if (! ((Wrd187.uLng) == 62))
    goto label_91;
  (Wrd183.pObj) = (OBJECT_ADDRESS (Wrd186.Obj));
  (Wrd184.Obj) = ((Wrd183.pObj) [0]);
  (Wrd185.Lng) = (FIXNUM_TO_LONG (Wrd184.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd185.Lng))))
    goto label_91;
  (Wrd179.Obj) = ((Wrd183.pObj) [9]);
  (* (--Rsp)) = (Wrd179.Obj);

DEFLABEL (label_90)
  (Wrd202.Obj) = (Rsp [2]);
  (Wrd203.uLng) = (OBJECT_TYPE (Wrd202.Obj));
  if (! ((Wrd203.uLng) == 62))
    goto label_89;
  (Wrd199.pObj) = (OBJECT_ADDRESS (Wrd202.Obj));
  (Wrd200.Obj) = ((Wrd199.pObj) [0]);
  (Wrd201.Lng) = (FIXNUM_TO_LONG (Wrd200.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd201.Lng))))
    goto label_89;
  (Wrd195.Obj) = ((Wrd199.pObj) [6]);
  (* (--Rsp)) = (Wrd195.Obj);

DEFLABEL (label_88)
  (Wrd209.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd209.Obj);
  goto loop_24;

DEFLABEL (label_89)
  (Wrd204.Obj) = (Rsp [2]);
  (Wrd205.Obj) = (current_block [OBJECT_64_2]);
  (Wrd208.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_13]))));
  (* (--Rsp)) = (Wrd208.Obj);
  (* (--Rsp)) = (Wrd205.Obj);
  (* (--Rsp)) = (Wrd204.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 2);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd188.Obj) = (Rsp [1]);
  (Wrd189.Obj) = (current_block [OBJECT_64_4]);
  (Wrd192.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_12]))));
  (* (--Rsp)) = (Wrd192.Obj);
  (* (--Rsp)) = (Wrd189.Obj);
  (* (--Rsp)) = (Wrd188.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 2);

DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd172.Obj) = (Rsp [0]);
  (Wrd173.Obj) = (current_block [OBJECT_64_3]);
  (Wrd176.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_11]))));
  (* (--Rsp)) = (Wrd176.Obj);
  (* (--Rsp)) = (Wrd173.Obj);
  (* (--Rsp)) = (Wrd172.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 2);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd212.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_7]))));
  (* (--Rsp)) = (Wrd212.Obj);
  (* (--Rsp)) = (Wrd148.Obj);
  goto label_81;

DEFLABEL (label_97)
  (Wrd143.Obj) = (Rsp [1]);
  (Wrd144.Obj) = (current_block [OBJECT_64_2]);
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_10]))));
  (* (--Rsp)) = (Wrd147.Obj);
  (* (--Rsp)) = (Wrd144.Obj);
  (* (--Rsp)) = (Wrd143.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 2);

DEFLABEL (label_60)
  (Wrd132.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd127.Obj) = (Rsp [0]);
  (Wrd128.Obj) = (current_block [OBJECT_64_0]);
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_9]))));
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 2);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_98;

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_64_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_79;

DEFLABEL (label_100)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_64_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_100;
  goto label_94;

DEFLABEL (loop_71)
DEFLABEL (loop_49)
  INTERRUPT_CHECK (26, LABEL_64_21);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [7]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd6.Lng) < (Wrd8.Lng)))
    goto label_105;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_22]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_23]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_64_22);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_23]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_64_30);
  (Wrd5.Obj) = (* (Rsp++));
  if (Rvl == (Wrd5.Obj))
    goto label_101;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_101)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd11.Lng) + 1L);
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_33]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_23]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_64_33);
  if (Rvl == (current_block [OBJECT_64_9]))
    goto label_103;
  (Wrd7.Obj) = (Rsp [2]);
  goto label_102;

DEFLABEL (label_103)
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd13.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));

DEFLABEL (label_102)
DEFLABEL (label_104)
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd10.Lng) + 1L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (Rsp [1]) = (Wrd8.Obj);
  goto loop_49;

DEFLABEL (label_105)
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_109;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd36.Lng))))
    goto label_109;
  (Wrd30.Obj) = (Rsp [1]);
  ((Wrd34.pObj) [6]) = (Wrd30.Obj);

DEFLABEL (label_108)
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_107;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd19.Lng))))
    goto label_107;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [9]) = (Wrd13.Obj);

DEFLABEL (label_106)
  Rvl = (current_block [OBJECT_64_7]);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_107)
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.Obj) = (current_block [OBJECT_64_4]);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_25]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_6]), 3);

DEFLABEL (label_64)
  goto label_106;

DEFLABEL (label_109)
  (Wrd39.Obj) = (Rsp [4]);
  (Wrd40.Obj) = (current_block [OBJECT_64_2]);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_24]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_6]), 3);

DEFLABEL (label_65)
  goto label_108;

DEFLABEL (loop_72)
DEFLABEL (loop_24)
  INTERRUPT_CHECK (26, LABEL_64_26);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [7]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd6.Lng) < (Wrd8.Lng)))
    goto label_116;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_27]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_23]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_64_27);
  (* (--Rsp)) = Rvl;
  (Wrd21.Obj) = (Rsp [6]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 30))
    goto label_115;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_115;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_115;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd11.pChr) = (& ((Wrd18.pChr) [(Wrd8.Lng)]));
  (Wrd12.uLng) = ((unsigned long) (((unsigned char *) (Wrd11.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd5.Obj) = (MAKE_OBJECT (2, (Wrd12.uLng)));

DEFLABEL (label_114)
  (Wrd28.Obj) = (* (Rsp++));
  if ((Wrd5.Obj) == (Wrd28.Obj))
    goto label_110;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_110)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd34.Lng) = ((Wrd33.Lng) + 1L);
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd34.Lng));
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_32]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_23]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_64_32);
  if (Rvl == (current_block [OBJECT_64_9]))
    goto label_112;
  (Wrd7.Obj) = (Rsp [2]);
  goto label_111;

DEFLABEL (label_112)
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd13.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));

DEFLABEL (label_111)
DEFLABEL (label_113)
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd10.Lng) + 1L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (Rsp [1]) = (Wrd8.Obj);
  goto loop_24;

DEFLABEL (label_115)
  (Wrd23.Obj) = (Rsp [6]);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_31]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_8]), 2);

DEFLABEL (label_68)
  (Wrd5.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_116)
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_120;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd36.Lng))))
    goto label_120;
  (Wrd30.Obj) = (Rsp [1]);
  ((Wrd34.pObj) [6]) = (Wrd30.Obj);

DEFLABEL (label_119)
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_118;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd19.Lng))))
    goto label_118;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [9]) = (Wrd13.Obj);

DEFLABEL (label_117)
  Rvl = (current_block [OBJECT_64_7]);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_118)
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.Obj) = (current_block [OBJECT_64_4]);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_29]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_6]), 3);

DEFLABEL (label_66)
  goto label_117;

DEFLABEL (label_120)
  (Wrd39.Obj) = (Rsp [4]);
  (Wrd40.Obj) = (current_block [OBJECT_64_2]);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_28]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_6]), 3);

DEFLABEL (label_67)
  goto label_119;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_7 5
#define LABEL_65_8 7
#define LABEL_65_5 9
#define LABEL_65_9 11
#define LABEL_65_10 13
#define LABEL_65_11 15
#define LABEL_65_12 17
#define LABEL_65_13 19
#define LABEL_65_15 21
#define LABEL_65_16 23
#define LABEL_65_18 25
#define LABEL_65_19 27
#define LABEL_65_20 29
#define LABEL_65_21 31
#define LABEL_65_25 33
#define LABEL_65_26 35
#define LABEL_65_27 37
#define LABEL_65_30 39
#define LABEL_65_31 41
#define LABEL_65_22 43
#define LABEL_65_23 45
#define LABEL_65_28 47
#define LABEL_65_29 49
#define LABEL_65_35 51
#define LABEL_65_32 53
#define LABEL_65_33 55
#define LABEL_65_34 57
#define ENVIRONMENT_LABEL_65_3 80
#define DEBUGGING_LABEL_65_2 79
#define OBJECT_65_9 78
#define OBJECT_65_8 77
#define OBJECT_65_7 76
#define OBJECT_65_6 75
#define OBJECT_65_5 74
#define OBJECT_65_4 73
#define OBJECT_65_3 72
#define OBJECT_65_2 71
#define OBJECT_65_1 70
#define OBJECT_65_0 69
#define EXECUTE_CACHE_65_36 59
#define EXECUTE_CACHE_65_24 61
#define EXECUTE_CACHE_65_17 63
#define EXECUTE_CACHE_65_14 65
#define EXECUTE_CACHE_65_6 67
#define FREE_REFERENCES_LABEL_65_0 58
#define NUMBER_OF_LINKER_SECTIONS_65_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd52;
  machine_word Wrd47;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd86;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd70;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd54;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd219;
  machine_word Wrd103;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
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
  machine_word Wrd16;
  machine_word Wrd113;
  machine_word Wrd209;
  machine_word Wrd208;
  machine_word Wrd205;
  machine_word Wrd204;
  machine_word Wrd195;
  machine_word Wrd201;
  machine_word Wrd200;
  machine_word Wrd199;
  machine_word Wrd203;
  machine_word Wrd202;
  machine_word Wrd192;
  machine_word Wrd189;
  machine_word Wrd188;
  machine_word Wrd179;
  machine_word Wrd185;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd187;
  machine_word Wrd186;
  machine_word Wrd176;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd163;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd212;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd155;
  machine_word Wrd148;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd147;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd132;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd131;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd118;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd112;
  machine_word Wrd111;
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
      goto match_parser_buffer_substring_ci_52;

    case 1:
      current_block = (Rpc - LABEL_65_7);
      goto continuation_8;

    case 2:
      current_block = (Rpc - LABEL_65_8);
      goto continuation_33;

    case 3:
      current_block = (Rpc - LABEL_65_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_65_9);
      goto label_59;

    case 5:
      current_block = (Rpc - LABEL_65_10);
      goto label_60;

    case 6:
      current_block = (Rpc - LABEL_65_11);
      goto label_61;

    case 7:
      current_block = (Rpc - LABEL_65_12);
      goto label_62;

    case 8:
      current_block = (Rpc - LABEL_65_13);
      goto label_63;

    case 9:
      current_block = (Rpc - LABEL_65_15);
      goto label_54;

    case 10:
      current_block = (Rpc - LABEL_65_16);
      goto label_55;

    case 11:
      current_block = (Rpc - LABEL_65_18);
      goto label_56;

    case 12:
      current_block = (Rpc - LABEL_65_19);
      goto label_57;

    case 13:
      current_block = (Rpc - LABEL_65_20);
      goto label_58;

    case 14:
      current_block = (Rpc - LABEL_65_21);
      goto loop_49;

    case 15:
      current_block = (Rpc - LABEL_65_25);
      goto label_65;

    case 16:
      current_block = (Rpc - LABEL_65_26);
      goto label_64;

    case 17:
      current_block = (Rpc - LABEL_65_27);
      goto loop_24;

    case 18:
      current_block = (Rpc - LABEL_65_30);
      goto label_67;

    case 19:
      current_block = (Rpc - LABEL_65_31);
      goto label_66;

    case 20:
      current_block = (Rpc - LABEL_65_22);
      goto continuation_43;

    case 21:
      current_block = (Rpc - LABEL_65_23);
      goto continuation_42;

    case 22:
      current_block = (Rpc - LABEL_65_28);
      goto continuation_18;

    case 23:
      current_block = (Rpc - LABEL_65_29);
      goto continuation_17;

    case 24:
      current_block = (Rpc - LABEL_65_35);
      goto label_68;

    case 25:
      current_block = (Rpc - LABEL_65_32);
      goto continuation_46;

    case 26:
      current_block = (Rpc - LABEL_65_33);
      goto continuation_41;

    case 27:
      current_block = (Rpc - LABEL_65_34);
      goto continuation_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_parser_buffer_substring_ci_70)
DEFLABEL (match_parser_buffer_substring_ci_52)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_65_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_86;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_85;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_85;
  (Wrd9.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_84)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_83;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd31.Lng))))
    goto label_83;
  (Wrd23.Obj) = ((Wrd29.pObj) [6]);

DEFLABEL (label_82)
  (Wrd40.Obj) = (Rsp [4]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd44.Lng) = ((Wrd41.Lng) - (Wrd43.Lng));
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd44.Lng));
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd48.Lng) = ((Wrd46.Lng) + (Wrd44.Lng));
  (Wrd49.Obj) = (* (Rsp++));
  Wrd50 = Wrd48;
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if ((Wrd50.Lng) > (Wrd51.Lng))
    goto label_80;

DEFLABEL (label_79)
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 62))
    goto label_78;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd60.Lng))))
    goto label_78;
  (Wrd54.Obj) = ((Wrd58.pObj) [2]);
  (* (--Rsp)) = (Wrd54.Obj);

DEFLABEL (label_77)
  (Wrd77.Obj) = (Rsp [1]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd78.uLng) == 62))
    goto label_76;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [0]);
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd76.Lng))))
    goto label_76;
  (Wrd70.Obj) = ((Wrd74.pObj) [9]);
  (* (--Rsp)) = (Wrd70.Obj);

DEFLABEL (label_75)
  (Wrd93.Obj) = (Rsp [2]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd94.uLng) == 62))
    goto label_74;
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd91.Obj) = ((Wrd90.pObj) [0]);
  (Wrd92.Lng) = (FIXNUM_TO_LONG (Wrd91.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd92.Lng))))
    goto label_74;
  (Wrd86.Obj) = ((Wrd90.pObj) [6]);
  (* (--Rsp)) = (Wrd86.Obj);

DEFLABEL (label_73)
  (Wrd100.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd100.Obj);
  goto loop_49;

DEFLABEL (label_74)
  (Wrd95.Obj) = (Rsp [2]);
  (Wrd96.Obj) = (current_block [OBJECT_65_2]);
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_20]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd79.Obj) = (Rsp [1]);
  (Wrd80.Obj) = (current_block [OBJECT_65_4]);
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_19]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd63.Obj) = (Rsp [0]);
  (Wrd64.Obj) = (current_block [OBJECT_65_3]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_18]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_8]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_81)
  (Wrd219.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd219.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_17]));

DEFLABEL (label_83)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_65_2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_16]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_55)
  (Wrd23.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_65_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_15]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (label_86)
  (Wrd111.Obj) = (Rsp [1]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if ((Wrd112.uLng) == 30)
    goto label_87;
  (Wrd113.Obj) = (current_block [OBJECT_65_5]);
  (Rsp [2]) = (Wrd113.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_14]));

DEFLABEL (label_87)
  (Wrd125.Obj) = (Rsp [0]);
  (Wrd126.uLng) = (OBJECT_TYPE (Wrd125.Obj));
  if (! ((Wrd126.uLng) == 62))
    goto label_99;
  (Wrd122.pObj) = (OBJECT_ADDRESS (Wrd125.Obj));
  (Wrd123.Obj) = ((Wrd122.pObj) [0]);
  (Wrd124.Lng) = (FIXNUM_TO_LONG (Wrd123.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd124.Lng))))
    goto label_99;
  (Wrd118.Obj) = ((Wrd122.pObj) [4]);
  (* (--Rsp)) = (Wrd118.Obj);

DEFLABEL (label_98)
  (Wrd141.Obj) = (Rsp [1]);
  (Wrd142.uLng) = (OBJECT_TYPE (Wrd141.Obj));
  if (! ((Wrd142.uLng) == 62))
    goto label_97;
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd141.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [0]);
  (Wrd140.Lng) = (FIXNUM_TO_LONG (Wrd139.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd140.Lng))))
    goto label_97;
  (Wrd132.Obj) = ((Wrd138.pObj) [6]);

DEFLABEL (label_96)
  (Wrd149.Obj) = (Rsp [4]);
  (Wrd150.Lng) = (FIXNUM_TO_LONG (Wrd149.Obj));
  (Wrd151.Obj) = (Rsp [3]);
  (Wrd152.Lng) = (FIXNUM_TO_LONG (Wrd151.Obj));
  (Wrd153.Lng) = ((Wrd150.Lng) - (Wrd152.Lng));
  (Wrd148.Obj) = (LONG_TO_FIXNUM (Wrd153.Lng));
  (Wrd155.Lng) = (FIXNUM_TO_LONG (Wrd132.Obj));
  (Wrd157.Lng) = ((Wrd155.Lng) + (Wrd153.Lng));
  (Wrd158.Obj) = (* (Rsp++));
  Wrd159 = Wrd157;
  (Wrd160.Lng) = (FIXNUM_TO_LONG (Wrd158.Obj));
  if ((Wrd159.Lng) > (Wrd160.Lng))
    goto label_95;

DEFLABEL (label_94)
  (Wrd170.Obj) = (Rsp [0]);
  (Wrd171.uLng) = (OBJECT_TYPE (Wrd170.Obj));
  if (! ((Wrd171.uLng) == 62))
    goto label_93;
  (Wrd167.pObj) = (OBJECT_ADDRESS (Wrd170.Obj));
  (Wrd168.Obj) = ((Wrd167.pObj) [0]);
  (Wrd169.Lng) = (FIXNUM_TO_LONG (Wrd168.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd169.Lng))))
    goto label_93;
  (Wrd163.Obj) = ((Wrd167.pObj) [2]);
  (* (--Rsp)) = (Wrd163.Obj);

DEFLABEL (label_92)
  (Wrd186.Obj) = (Rsp [1]);
  (Wrd187.uLng) = (OBJECT_TYPE (Wrd186.Obj));
  if (! ((Wrd187.uLng) == 62))
    goto label_91;
  (Wrd183.pObj) = (OBJECT_ADDRESS (Wrd186.Obj));
  (Wrd184.Obj) = ((Wrd183.pObj) [0]);
  (Wrd185.Lng) = (FIXNUM_TO_LONG (Wrd184.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd185.Lng))))
    goto label_91;
  (Wrd179.Obj) = ((Wrd183.pObj) [9]);
  (* (--Rsp)) = (Wrd179.Obj);

DEFLABEL (label_90)
  (Wrd202.Obj) = (Rsp [2]);
  (Wrd203.uLng) = (OBJECT_TYPE (Wrd202.Obj));
  if (! ((Wrd203.uLng) == 62))
    goto label_89;
  (Wrd199.pObj) = (OBJECT_ADDRESS (Wrd202.Obj));
  (Wrd200.Obj) = ((Wrd199.pObj) [0]);
  (Wrd201.Lng) = (FIXNUM_TO_LONG (Wrd200.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd201.Lng))))
    goto label_89;
  (Wrd195.Obj) = ((Wrd199.pObj) [6]);
  (* (--Rsp)) = (Wrd195.Obj);

DEFLABEL (label_88)
  (Wrd209.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd209.Obj);
  goto loop_24;

DEFLABEL (label_89)
  (Wrd204.Obj) = (Rsp [2]);
  (Wrd205.Obj) = (current_block [OBJECT_65_2]);
  (Wrd208.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_13]))));
  (* (--Rsp)) = (Wrd208.Obj);
  (* (--Rsp)) = (Wrd205.Obj);
  (* (--Rsp)) = (Wrd204.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd188.Obj) = (Rsp [1]);
  (Wrd189.Obj) = (current_block [OBJECT_65_4]);
  (Wrd192.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_12]))));
  (* (--Rsp)) = (Wrd192.Obj);
  (* (--Rsp)) = (Wrd189.Obj);
  (* (--Rsp)) = (Wrd188.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd172.Obj) = (Rsp [0]);
  (Wrd173.Obj) = (current_block [OBJECT_65_3]);
  (Wrd176.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_11]))));
  (* (--Rsp)) = (Wrd176.Obj);
  (* (--Rsp)) = (Wrd173.Obj);
  (* (--Rsp)) = (Wrd172.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd212.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_7]))));
  (* (--Rsp)) = (Wrd212.Obj);
  (* (--Rsp)) = (Wrd148.Obj);
  goto label_81;

DEFLABEL (label_97)
  (Wrd143.Obj) = (Rsp [1]);
  (Wrd144.Obj) = (current_block [OBJECT_65_2]);
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_10]))));
  (* (--Rsp)) = (Wrd147.Obj);
  (* (--Rsp)) = (Wrd144.Obj);
  (* (--Rsp)) = (Wrd143.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_60)
  (Wrd132.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd127.Obj) = (Rsp [0]);
  (Wrd128.Obj) = (current_block [OBJECT_65_0]);
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_9]))));
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_98;

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_65_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_79;

DEFLABEL (label_100)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_65_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_100;
  goto label_94;

DEFLABEL (loop_71)
DEFLABEL (loop_49)
  INTERRUPT_CHECK (26, LABEL_65_21);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [7]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd6.Lng) < (Wrd8.Lng)))
    goto label_105;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_22]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_23]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_24]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_65_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_24]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_65_33);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_36]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_65_22);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_101;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_101)
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_32]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_24]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_65_32);
  if (Rvl == (current_block [OBJECT_65_9]))
    goto label_103;
  (Wrd7.Obj) = (Rsp [2]);
  goto label_102;

DEFLABEL (label_103)
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd13.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));

DEFLABEL (label_102)
DEFLABEL (label_104)
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd10.Lng) + 1L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (Rsp [1]) = (Wrd8.Obj);
  goto loop_49;

DEFLABEL (label_105)
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_109;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd36.Lng))))
    goto label_109;
  (Wrd30.Obj) = (Rsp [1]);
  ((Wrd34.pObj) [6]) = (Wrd30.Obj);

DEFLABEL (label_108)
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_107;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd19.Lng))))
    goto label_107;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [9]) = (Wrd13.Obj);

DEFLABEL (label_106)
  Rvl = (current_block [OBJECT_65_7]);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_107)
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.Obj) = (current_block [OBJECT_65_4]);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_26]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_6]), 3);

DEFLABEL (label_64)
  goto label_106;

DEFLABEL (label_109)
  (Wrd39.Obj) = (Rsp [4]);
  (Wrd40.Obj) = (current_block [OBJECT_65_2]);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_25]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_6]), 3);

DEFLABEL (label_65)
  goto label_108;

DEFLABEL (loop_72)
DEFLABEL (loop_24)
  INTERRUPT_CHECK (26, LABEL_65_27);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [7]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd6.Lng) < (Wrd8.Lng)))
    goto label_116;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_28]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_29]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_24]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_65_29);
  (* (--Rsp)) = Rvl;
  (Wrd21.Obj) = (Rsp [7]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 30))
    goto label_115;
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_115;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_115;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd10.pChr) = (& ((Wrd18.pChr) [(Wrd7.Lng)]));
  (Wrd11.uLng) = ((unsigned long) (((unsigned char *) (Wrd10.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd12.Obj) = (MAKE_OBJECT (2, (Wrd11.uLng)));
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_114)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_36]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_65_28);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_110;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_110)
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_34]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_24]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_65_34);
  if (Rvl == (current_block [OBJECT_65_9]))
    goto label_112;
  (Wrd7.Obj) = (Rsp [2]);
  goto label_111;

DEFLABEL (label_112)
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd13.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));

DEFLABEL (label_111)
DEFLABEL (label_113)
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd10.Lng) + 1L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (Rsp [1]) = (Wrd8.Obj);
  goto loop_24;

DEFLABEL (label_115)
  (Wrd23.Obj) = (Rsp [7]);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_35]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_8]), 2);

DEFLABEL (label_68)
  (* (--Rsp)) = Rvl;
  goto label_114;

DEFLABEL (label_116)
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_120;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd36.Lng))))
    goto label_120;
  (Wrd30.Obj) = (Rsp [1]);
  ((Wrd34.pObj) [6]) = (Wrd30.Obj);

DEFLABEL (label_119)
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_118;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd19.Lng))))
    goto label_118;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [9]) = (Wrd13.Obj);

DEFLABEL (label_117)
  Rvl = (current_block [OBJECT_65_7]);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_118)
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.Obj) = (current_block [OBJECT_65_4]);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_31]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_6]), 3);

DEFLABEL (label_66)
  goto label_117;

DEFLABEL (label_120)
  (Wrd39.Obj) = (Rsp [4]);
  (Wrd40.Obj) = (current_block [OBJECT_65_2]);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_30]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_6]), 3);

DEFLABEL (label_67)
  goto label_119;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_7 5
#define LABEL_66_8 7
#define LABEL_66_5 9
#define LABEL_66_9 11
#define LABEL_66_10 13
#define LABEL_66_11 15
#define LABEL_66_12 17
#define LABEL_66_14 19
#define LABEL_66_15 21
#define LABEL_66_17 23
#define LABEL_66_18 25
#define LABEL_66_19 27
#define LABEL_66_22 29
#define LABEL_66_20 31
#define LABEL_66_23 33
#define LABEL_66_25 35
#define LABEL_66_24 37
#define ENVIRONMENT_LABEL_66_3 55
#define DEBUGGING_LABEL_66_2 54
#define OBJECT_66_6 53
#define OBJECT_66_5 52
#define OBJECT_66_4 51
#define OBJECT_66_3 50
#define OBJECT_66_2 49
#define OBJECT_66_1 48
#define OBJECT_66_0 47
#define EXECUTE_CACHE_66_21 39
#define EXECUTE_CACHE_66_16 41
#define EXECUTE_CACHE_66_13 43
#define EXECUTE_CACHE_66_6 45
#define FREE_REFERENCES_LABEL_66_0 38
#define NUMBER_OF_LINKER_SECTIONS_66_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd70;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd54;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd187;
  machine_word Wrd87;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
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
  machine_word Wrd16;
  machine_word Wrd97;
  machine_word Wrd177;
  machine_word Wrd176;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd163;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd160;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd147;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd180;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd139;
  machine_word Wrd132;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd131;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd116;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd102;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd96;
  machine_word Wrd95;
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
      current_block = (Rpc - LABEL_66_4);
      goto match_parser_buffer_substring_no_advance_40;

    case 1:
      current_block = (Rpc - LABEL_66_7);
      goto continuation_8;

    case 2:
      current_block = (Rpc - LABEL_66_8);
      goto continuation_27;

    case 3:
      current_block = (Rpc - LABEL_66_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_66_9);
      goto label_46;

    case 5:
      current_block = (Rpc - LABEL_66_10);
      goto label_47;

    case 6:
      current_block = (Rpc - LABEL_66_11);
      goto label_48;

    case 7:
      current_block = (Rpc - LABEL_66_12);
      goto label_49;

    case 8:
      current_block = (Rpc - LABEL_66_14);
      goto label_42;

    case 9:
      current_block = (Rpc - LABEL_66_15);
      goto label_43;

    case 10:
      current_block = (Rpc - LABEL_66_17);
      goto label_44;

    case 11:
      current_block = (Rpc - LABEL_66_18);
      goto label_45;

    case 12:
      current_block = (Rpc - LABEL_66_19);
      goto loop_37;

    case 13:
      current_block = (Rpc - LABEL_66_22);
      goto loop_18;

    case 14:
      current_block = (Rpc - LABEL_66_20);
      goto continuation_33;

    case 15:
      current_block = (Rpc - LABEL_66_23);
      goto continuation_14;

    case 16:
      current_block = (Rpc - LABEL_66_25);
      goto label_50;

    case 17:
      current_block = (Rpc - LABEL_66_24);
      goto continuation_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_parser_buffer_substring_no_advance_52)
DEFLABEL (match_parser_buffer_substring_no_advance_40)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_66_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_65;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_65;
  (Wrd9.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_64)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_63;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd31.Lng))))
    goto label_63;
  (Wrd23.Obj) = ((Wrd29.pObj) [6]);

DEFLABEL (label_62)
  (Wrd40.Obj) = (Rsp [4]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd44.Lng) = ((Wrd41.Lng) - (Wrd43.Lng));
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd44.Lng));
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd48.Lng) = ((Wrd46.Lng) + (Wrd44.Lng));
  (Wrd49.Obj) = (* (Rsp++));
  Wrd50 = Wrd48;
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if ((Wrd50.Lng) > (Wrd51.Lng))
    goto label_60;

DEFLABEL (label_59)
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 62))
    goto label_58;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd60.Lng))))
    goto label_58;
  (Wrd54.Obj) = ((Wrd58.pObj) [2]);
  (* (--Rsp)) = (Wrd54.Obj);

DEFLABEL (label_57)
  (Wrd77.Obj) = (Rsp [1]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd78.uLng) == 62))
    goto label_56;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [0]);
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd76.Lng))))
    goto label_56;
  (Wrd70.Obj) = ((Wrd74.pObj) [6]);
  (* (--Rsp)) = (Wrd70.Obj);

DEFLABEL (label_55)
  (Wrd84.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd84.Obj);
  goto loop_37;

DEFLABEL (label_56)
  (Wrd79.Obj) = (Rsp [1]);
  (Wrd80.Obj) = (current_block [OBJECT_66_2]);
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_18]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 2);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd63.Obj) = (Rsp [0]);
  (Wrd64.Obj) = (current_block [OBJECT_66_3]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_17]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_8]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_61)
  (Wrd187.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd187.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_16]));

DEFLABEL (label_63)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_66_2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_15]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 2);

DEFLABEL (label_43)
  (Wrd23.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_66_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_14]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 2);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_66)
  (Wrd95.Obj) = (Rsp [1]);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if ((Wrd96.uLng) == 30)
    goto label_67;
  (Wrd97.Obj) = (current_block [OBJECT_66_4]);
  (Rsp [2]) = (Wrd97.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_13]));

DEFLABEL (label_67)
  (Wrd109.Obj) = (Rsp [0]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if (! ((Wrd110.uLng) == 62))
    goto label_77;
  (Wrd106.pObj) = (OBJECT_ADDRESS (Wrd109.Obj));
  (Wrd107.Obj) = ((Wrd106.pObj) [0]);
  (Wrd108.Lng) = (FIXNUM_TO_LONG (Wrd107.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd108.Lng))))
    goto label_77;
  (Wrd102.Obj) = ((Wrd106.pObj) [4]);
  (* (--Rsp)) = (Wrd102.Obj);

DEFLABEL (label_76)
  (Wrd125.Obj) = (Rsp [1]);
  (Wrd126.uLng) = (OBJECT_TYPE (Wrd125.Obj));
  if (! ((Wrd126.uLng) == 62))
    goto label_75;
  (Wrd122.pObj) = (OBJECT_ADDRESS (Wrd125.Obj));
  (Wrd123.Obj) = ((Wrd122.pObj) [0]);
  (Wrd124.Lng) = (FIXNUM_TO_LONG (Wrd123.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd124.Lng))))
    goto label_75;
  (Wrd116.Obj) = ((Wrd122.pObj) [6]);

DEFLABEL (label_74)
  (Wrd133.Obj) = (Rsp [4]);
  (Wrd134.Lng) = (FIXNUM_TO_LONG (Wrd133.Obj));
  (Wrd135.Obj) = (Rsp [3]);
  (Wrd136.Lng) = (FIXNUM_TO_LONG (Wrd135.Obj));
  (Wrd137.Lng) = ((Wrd134.Lng) - (Wrd136.Lng));
  (Wrd132.Obj) = (LONG_TO_FIXNUM (Wrd137.Lng));
  (Wrd139.Lng) = (FIXNUM_TO_LONG (Wrd116.Obj));
  (Wrd141.Lng) = ((Wrd139.Lng) + (Wrd137.Lng));
  (Wrd142.Obj) = (* (Rsp++));
  Wrd143 = Wrd141;
  (Wrd144.Lng) = (FIXNUM_TO_LONG (Wrd142.Obj));
  if ((Wrd143.Lng) > (Wrd144.Lng))
    goto label_73;

DEFLABEL (label_72)
  (Wrd154.Obj) = (Rsp [0]);
  (Wrd155.uLng) = (OBJECT_TYPE (Wrd154.Obj));
  if (! ((Wrd155.uLng) == 62))
    goto label_71;
  (Wrd151.pObj) = (OBJECT_ADDRESS (Wrd154.Obj));
  (Wrd152.Obj) = ((Wrd151.pObj) [0]);
  (Wrd153.Lng) = (FIXNUM_TO_LONG (Wrd152.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd153.Lng))))
    goto label_71;
  (Wrd147.Obj) = ((Wrd151.pObj) [2]);
  (* (--Rsp)) = (Wrd147.Obj);

DEFLABEL (label_70)
  (Wrd170.Obj) = (Rsp [1]);
  (Wrd171.uLng) = (OBJECT_TYPE (Wrd170.Obj));
  if (! ((Wrd171.uLng) == 62))
    goto label_69;
  (Wrd167.pObj) = (OBJECT_ADDRESS (Wrd170.Obj));
  (Wrd168.Obj) = ((Wrd167.pObj) [0]);
  (Wrd169.Lng) = (FIXNUM_TO_LONG (Wrd168.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd169.Lng))))
    goto label_69;
  (Wrd163.Obj) = ((Wrd167.pObj) [6]);
  (* (--Rsp)) = (Wrd163.Obj);

DEFLABEL (label_68)
  (Wrd177.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd177.Obj);
  goto loop_18;

DEFLABEL (label_69)
  (Wrd172.Obj) = (Rsp [1]);
  (Wrd173.Obj) = (current_block [OBJECT_66_2]);
  (Wrd176.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_12]))));
  (* (--Rsp)) = (Wrd176.Obj);
  (* (--Rsp)) = (Wrd173.Obj);
  (* (--Rsp)) = (Wrd172.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 2);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd156.Obj) = (Rsp [0]);
  (Wrd157.Obj) = (current_block [OBJECT_66_3]);
  (Wrd160.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_11]))));
  (* (--Rsp)) = (Wrd160.Obj);
  (* (--Rsp)) = (Wrd157.Obj);
  (* (--Rsp)) = (Wrd156.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 2);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd180.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_7]))));
  (* (--Rsp)) = (Wrd180.Obj);
  (* (--Rsp)) = (Wrd132.Obj);
  goto label_61;

DEFLABEL (label_75)
  (Wrd127.Obj) = (Rsp [1]);
  (Wrd128.Obj) = (current_block [OBJECT_66_2]);
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_10]))));
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 2);

DEFLABEL (label_47)
  (Wrd116.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd111.Obj) = (Rsp [0]);
  (Wrd112.Obj) = (current_block [OBJECT_66_0]);
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_9]))));
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 2);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_66_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_59;

DEFLABEL (label_78)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_66_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_78;
  goto label_72;

DEFLABEL (loop_53)
DEFLABEL (loop_37)
  INTERRUPT_CHECK (26, LABEL_66_19);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [6]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_79;
  Rvl = (current_block [OBJECT_66_5]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_79)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_21]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_66_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_21]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_66_24);
  (Wrd5.Obj) = (* (Rsp++));
  if (Rvl == (Wrd5.Obj))
    goto label_80;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd11.Lng) + 1L);
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd16.Lng) = ((Wrd15.Lng) + 1L);
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  (Rsp [1]) = (Wrd13.Obj);
  goto loop_37;

DEFLABEL (loop_54)
DEFLABEL (loop_18)
  INTERRUPT_CHECK (26, LABEL_66_22);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [6]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_81;
  Rvl = (current_block [OBJECT_66_5]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_81)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_23]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_21]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_66_23);
  (* (--Rsp)) = Rvl;
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 30))
    goto label_84;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_84;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_84;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd11.pChr) = (& ((Wrd18.pChr) [(Wrd8.Lng)]));
  (Wrd12.uLng) = ((unsigned long) (((unsigned char *) (Wrd11.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd5.Obj) = (MAKE_OBJECT (2, (Wrd12.uLng)));

DEFLABEL (label_83)
  (Wrd28.Obj) = (* (Rsp++));
  if ((Wrd5.Obj) == (Wrd28.Obj))
    goto label_82;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd34.Lng) = ((Wrd33.Lng) + 1L);
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd34.Lng));
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  (Wrd38.Lng) = ((Wrd37.Lng) + 1L);
  (Wrd35.Obj) = (LONG_TO_FIXNUM (Wrd38.Lng));
  (Rsp [1]) = (Wrd35.Obj);
  goto loop_18;

DEFLABEL (label_84)
  (Wrd23.Obj) = (Rsp [5]);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_25]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_6]), 2);

DEFLABEL (label_50)
  (Wrd5.Obj) = Rvl;
  goto label_83;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_7 5
#define LABEL_67_8 7
#define LABEL_67_5 9
#define LABEL_67_9 11
#define LABEL_67_10 13
#define LABEL_67_11 15
#define LABEL_67_12 17
#define LABEL_67_14 19
#define LABEL_67_15 21
#define LABEL_67_17 23
#define LABEL_67_18 25
#define LABEL_67_19 27
#define LABEL_67_23 29
#define LABEL_67_20 31
#define LABEL_67_21 33
#define LABEL_67_24 35
#define LABEL_67_25 37
#define LABEL_67_27 39
#define LABEL_67_26 41
#define ENVIRONMENT_LABEL_67_3 61
#define DEBUGGING_LABEL_67_2 60
#define OBJECT_67_6 59
#define OBJECT_67_5 58
#define OBJECT_67_4 57
#define OBJECT_67_3 56
#define OBJECT_67_2 55
#define OBJECT_67_1 54
#define OBJECT_67_0 53
#define EXECUTE_CACHE_67_28 43
#define EXECUTE_CACHE_67_22 45
#define EXECUTE_CACHE_67_16 47
#define EXECUTE_CACHE_67_13 49
#define EXECUTE_CACHE_67_6 51
#define FREE_REFERENCES_LABEL_67_0 42
#define NUMBER_OF_LINKER_SECTIONS_67_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd70;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd54;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd187;
  machine_word Wrd87;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
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
  machine_word Wrd16;
  machine_word Wrd97;
  machine_word Wrd177;
  machine_word Wrd176;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd163;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd160;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd147;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd180;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd139;
  machine_word Wrd132;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd131;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd116;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd102;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd96;
  machine_word Wrd95;
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
      current_block = (Rpc - LABEL_67_4);
      goto match_parser_buffer_substring_ci_no_advance_40;

    case 1:
      current_block = (Rpc - LABEL_67_7);
      goto continuation_8;

    case 2:
      current_block = (Rpc - LABEL_67_8);
      goto continuation_27;

    case 3:
      current_block = (Rpc - LABEL_67_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_67_9);
      goto label_46;

    case 5:
      current_block = (Rpc - LABEL_67_10);
      goto label_47;

    case 6:
      current_block = (Rpc - LABEL_67_11);
      goto label_48;

    case 7:
      current_block = (Rpc - LABEL_67_12);
      goto label_49;

    case 8:
      current_block = (Rpc - LABEL_67_14);
      goto label_42;

    case 9:
      current_block = (Rpc - LABEL_67_15);
      goto label_43;

    case 10:
      current_block = (Rpc - LABEL_67_17);
      goto label_44;

    case 11:
      current_block = (Rpc - LABEL_67_18);
      goto label_45;

    case 12:
      current_block = (Rpc - LABEL_67_19);
      goto loop_37;

    case 13:
      current_block = (Rpc - LABEL_67_23);
      goto loop_18;

    case 14:
      current_block = (Rpc - LABEL_67_20);
      goto continuation_34;

    case 15:
      current_block = (Rpc - LABEL_67_21);
      goto continuation_33;

    case 16:
      current_block = (Rpc - LABEL_67_24);
      goto continuation_15;

    case 17:
      current_block = (Rpc - LABEL_67_25);
      goto continuation_14;

    case 18:
      current_block = (Rpc - LABEL_67_27);
      goto label_50;

    case 19:
      current_block = (Rpc - LABEL_67_26);
      goto continuation_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_parser_buffer_substring_ci_no_advance_52)
DEFLABEL (match_parser_buffer_substring_ci_no_advance_40)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_67_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_65;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_65;
  (Wrd9.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_64)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_63;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd31.Lng))))
    goto label_63;
  (Wrd23.Obj) = ((Wrd29.pObj) [6]);

DEFLABEL (label_62)
  (Wrd40.Obj) = (Rsp [4]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd44.Lng) = ((Wrd41.Lng) - (Wrd43.Lng));
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd44.Lng));
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd48.Lng) = ((Wrd46.Lng) + (Wrd44.Lng));
  (Wrd49.Obj) = (* (Rsp++));
  Wrd50 = Wrd48;
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if ((Wrd50.Lng) > (Wrd51.Lng))
    goto label_60;

DEFLABEL (label_59)
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 62))
    goto label_58;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd60.Lng))))
    goto label_58;
  (Wrd54.Obj) = ((Wrd58.pObj) [2]);
  (* (--Rsp)) = (Wrd54.Obj);

DEFLABEL (label_57)
  (Wrd77.Obj) = (Rsp [1]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd78.uLng) == 62))
    goto label_56;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [0]);
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd76.Lng))))
    goto label_56;
  (Wrd70.Obj) = ((Wrd74.pObj) [6]);
  (* (--Rsp)) = (Wrd70.Obj);

DEFLABEL (label_55)
  (Wrd84.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd84.Obj);
  goto loop_37;

DEFLABEL (label_56)
  (Wrd79.Obj) = (Rsp [1]);
  (Wrd80.Obj) = (current_block [OBJECT_67_2]);
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_18]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 2);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd63.Obj) = (Rsp [0]);
  (Wrd64.Obj) = (current_block [OBJECT_67_3]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_17]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_8]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_61)
  (Wrd187.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd187.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_16]));

DEFLABEL (label_63)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_67_2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_15]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 2);

DEFLABEL (label_43)
  (Wrd23.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_67_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_14]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 2);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_66)
  (Wrd95.Obj) = (Rsp [1]);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if ((Wrd96.uLng) == 30)
    goto label_67;
  (Wrd97.Obj) = (current_block [OBJECT_67_4]);
  (Rsp [2]) = (Wrd97.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_13]));

DEFLABEL (label_67)
  (Wrd109.Obj) = (Rsp [0]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if (! ((Wrd110.uLng) == 62))
    goto label_77;
  (Wrd106.pObj) = (OBJECT_ADDRESS (Wrd109.Obj));
  (Wrd107.Obj) = ((Wrd106.pObj) [0]);
  (Wrd108.Lng) = (FIXNUM_TO_LONG (Wrd107.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd108.Lng))))
    goto label_77;
  (Wrd102.Obj) = ((Wrd106.pObj) [4]);
  (* (--Rsp)) = (Wrd102.Obj);

DEFLABEL (label_76)
  (Wrd125.Obj) = (Rsp [1]);
  (Wrd126.uLng) = (OBJECT_TYPE (Wrd125.Obj));
  if (! ((Wrd126.uLng) == 62))
    goto label_75;
  (Wrd122.pObj) = (OBJECT_ADDRESS (Wrd125.Obj));
  (Wrd123.Obj) = ((Wrd122.pObj) [0]);
  (Wrd124.Lng) = (FIXNUM_TO_LONG (Wrd123.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd124.Lng))))
    goto label_75;
  (Wrd116.Obj) = ((Wrd122.pObj) [6]);

DEFLABEL (label_74)
  (Wrd133.Obj) = (Rsp [4]);
  (Wrd134.Lng) = (FIXNUM_TO_LONG (Wrd133.Obj));
  (Wrd135.Obj) = (Rsp [3]);
  (Wrd136.Lng) = (FIXNUM_TO_LONG (Wrd135.Obj));
  (Wrd137.Lng) = ((Wrd134.Lng) - (Wrd136.Lng));
  (Wrd132.Obj) = (LONG_TO_FIXNUM (Wrd137.Lng));
  (Wrd139.Lng) = (FIXNUM_TO_LONG (Wrd116.Obj));
  (Wrd141.Lng) = ((Wrd139.Lng) + (Wrd137.Lng));
  (Wrd142.Obj) = (* (Rsp++));
  Wrd143 = Wrd141;
  (Wrd144.Lng) = (FIXNUM_TO_LONG (Wrd142.Obj));
  if ((Wrd143.Lng) > (Wrd144.Lng))
    goto label_73;

DEFLABEL (label_72)
  (Wrd154.Obj) = (Rsp [0]);
  (Wrd155.uLng) = (OBJECT_TYPE (Wrd154.Obj));
  if (! ((Wrd155.uLng) == 62))
    goto label_71;
  (Wrd151.pObj) = (OBJECT_ADDRESS (Wrd154.Obj));
  (Wrd152.Obj) = ((Wrd151.pObj) [0]);
  (Wrd153.Lng) = (FIXNUM_TO_LONG (Wrd152.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd153.Lng))))
    goto label_71;
  (Wrd147.Obj) = ((Wrd151.pObj) [2]);
  (* (--Rsp)) = (Wrd147.Obj);

DEFLABEL (label_70)
  (Wrd170.Obj) = (Rsp [1]);
  (Wrd171.uLng) = (OBJECT_TYPE (Wrd170.Obj));
  if (! ((Wrd171.uLng) == 62))
    goto label_69;
  (Wrd167.pObj) = (OBJECT_ADDRESS (Wrd170.Obj));
  (Wrd168.Obj) = ((Wrd167.pObj) [0]);
  (Wrd169.Lng) = (FIXNUM_TO_LONG (Wrd168.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd169.Lng))))
    goto label_69;
  (Wrd163.Obj) = ((Wrd167.pObj) [6]);
  (* (--Rsp)) = (Wrd163.Obj);

DEFLABEL (label_68)
  (Wrd177.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd177.Obj);
  goto loop_18;

DEFLABEL (label_69)
  (Wrd172.Obj) = (Rsp [1]);
  (Wrd173.Obj) = (current_block [OBJECT_67_2]);
  (Wrd176.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_12]))));
  (* (--Rsp)) = (Wrd176.Obj);
  (* (--Rsp)) = (Wrd173.Obj);
  (* (--Rsp)) = (Wrd172.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 2);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd156.Obj) = (Rsp [0]);
  (Wrd157.Obj) = (current_block [OBJECT_67_3]);
  (Wrd160.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_11]))));
  (* (--Rsp)) = (Wrd160.Obj);
  (* (--Rsp)) = (Wrd157.Obj);
  (* (--Rsp)) = (Wrd156.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 2);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd180.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_7]))));
  (* (--Rsp)) = (Wrd180.Obj);
  (* (--Rsp)) = (Wrd132.Obj);
  goto label_61;

DEFLABEL (label_75)
  (Wrd127.Obj) = (Rsp [1]);
  (Wrd128.Obj) = (current_block [OBJECT_67_2]);
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_10]))));
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 2);

DEFLABEL (label_47)
  (Wrd116.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd111.Obj) = (Rsp [0]);
  (Wrd112.Obj) = (current_block [OBJECT_67_0]);
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_9]))));
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 2);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_67_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_59;

DEFLABEL (label_78)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_67_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_78;
  goto label_72;

DEFLABEL (loop_53)
DEFLABEL (loop_37)
  INTERRUPT_CHECK (26, LABEL_67_19);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [6]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_79;
  Rvl = (current_block [OBJECT_67_5]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_79)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_21]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_22]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_67_21);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_22]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_67_26);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_28]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_67_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_80;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd13.Lng) + 1L);
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (Rsp [1]) = (Wrd11.Obj);
  goto loop_37;

DEFLABEL (label_80)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (loop_54)
DEFLABEL (loop_18)
  INTERRUPT_CHECK (26, LABEL_67_23);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [6]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_81;
  Rvl = (current_block [OBJECT_67_5]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_81)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_24]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_25]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_22]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_67_25);
  (* (--Rsp)) = Rvl;
  (Wrd21.Obj) = (Rsp [6]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 30))
    goto label_84;
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_84;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_84;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd10.pChr) = (& ((Wrd18.pChr) [(Wrd7.Lng)]));
  (Wrd11.uLng) = ((unsigned long) (((unsigned char *) (Wrd10.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd12.Obj) = (MAKE_OBJECT (2, (Wrd11.uLng)));
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_83)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_28]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_67_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd13.Lng) + 1L);
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (Rsp [1]) = (Wrd11.Obj);
  goto loop_18;

DEFLABEL (label_82)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_84)
  (Wrd23.Obj) = (Rsp [6]);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_27]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_6]), 2);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_83;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_5 5
#define LABEL_68_7 7
#define LABEL_68_9 9
#define ENVIRONMENT_LABEL_68_3 20
#define DEBUGGING_LABEL_68_2 19
#define OBJECT_68_0 18
#define EXECUTE_CACHE_68_8 11
#define EXECUTE_CACHE_68_6 13
#define FREE_REFERENCE_68_1 16
#define FREE_REFERENCE_68_0 17
#define FREE_REFERENCES_LABEL_68_0 10
#define NUMBER_OF_LINKER_SECTIONS_68_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd16;
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
      goto match_substring_2;

    case 1:
      current_block = (Rpc - LABEL_68_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_68_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_68_9);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_substring_7)
DEFLABEL (match_substring_2)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_68_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd7.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (Rsp [5]) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_68_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_9;
  Wrd10 = Wrd14;

DEFLABEL (label_8)
  (Rsp [6]) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 7);
  }

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68_9])), (Wrd11.pObj));

DEFLABEL (label_4)
  (Wrd10.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_10)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 30)
    goto label_11;
  (Rsp [3]) = (Wrd16.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_68_0]);
  (Rsp [4]) = (Wrd19.Obj);
  (Rsp [5]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_8]));

DEFLABEL (label_11)
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [6]);
  (Rsp [5]) = (Wrd23.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_68_0]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_13;
  Wrd25 = Wrd29;

DEFLABEL (label_12)
  (Rsp [6]) = (Wrd25.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 7);
  }

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68_7])), (Wrd26.pObj));

DEFLABEL (label_5)
  (Wrd25.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_5 3
#define LABEL_69_4 5
#define LABEL_69_6 7
#define LABEL_69_7 9
#define LABEL_69_9 11
#define LABEL_69_10 13
#define LABEL_69_11 15
#define LABEL_69_12 17
#define LABEL_69_16 19
#define LABEL_69_17 21
#define LABEL_69_13 23
#define LABEL_69_14 25
#define LABEL_69_18 27
#define LABEL_69_19 29
#define ENVIRONMENT_LABEL_69_3 44
#define DEBUGGING_LABEL_69_2 43
#define OBJECT_69_7 42
#define OBJECT_69_6 41
#define OBJECT_69_5 40
#define OBJECT_69_4 39
#define OBJECT_69_3 38
#define OBJECT_69_2 37
#define OBJECT_69_1 36
#define OBJECT_69_0 35
#define EXECUTE_CACHE_69_15 31
#define EXECUTE_CACHE_69_8 33
#define FREE_REFERENCES_LABEL_69_0 30
#define NUMBER_OF_LINKER_SECTIONS_69_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd84;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd92;
  machine_word Wrd91;
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
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd52;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd108;
  machine_word Wrd101;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_69_5);
      goto continuation_6;

    case 1:
      current_block = (Rpc - LABEL_69_4);
      goto match_substring_loop_25;

    case 2:
      current_block = (Rpc - LABEL_69_6);
      goto label_27;

    case 3:
      current_block = (Rpc - LABEL_69_7);
      goto label_28;

    case 4:
      current_block = (Rpc - LABEL_69_9);
      goto label_29;

    case 5:
      current_block = (Rpc - LABEL_69_10);
      goto label_30;

    case 6:
      current_block = (Rpc - LABEL_69_11);
      goto label_31;

    case 7:
      current_block = (Rpc - LABEL_69_12);
      goto loop_22;

    case 8:
      current_block = (Rpc - LABEL_69_16);
      goto label_33;

    case 9:
      current_block = (Rpc - LABEL_69_17);
      goto label_32;

    case 10:
      current_block = (Rpc - LABEL_69_13);
      goto continuation_16;

    case 11:
      current_block = (Rpc - LABEL_69_14);
      goto continuation_15;

    case 12:
      current_block = (Rpc - LABEL_69_18);
      goto continuation_19;

    case 13:
      current_block = (Rpc - LABEL_69_19);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_substring_loop_35)
DEFLABEL (match_substring_loop_25)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_47;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_47;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_46)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_45;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_45;
  (Wrd21.Obj) = ((Wrd27.pObj) [6]);

DEFLABEL (label_44)
  (Wrd38.Obj) = (Rsp [4]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd40.Obj) = (Rsp [3]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Lng) = ((Wrd39.Lng) - (Wrd41.Lng));
  (Wrd37.Obj) = (LONG_TO_FIXNUM (Wrd42.Lng));
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd46.Lng) = ((Wrd44.Lng) + (Wrd42.Lng));
  (Wrd47.Obj) = (* (Rsp++));
  Wrd48 = Wrd46;
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! ((Wrd48.Lng) > (Wrd49.Lng)))
    goto label_37;
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_5]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd108.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd108.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_8]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_69_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_37;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 62))
    goto label_43;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd58.Lng))))
    goto label_43;
  (Wrd52.Obj) = ((Wrd56.pObj) [2]);
  (* (--Rsp)) = (Wrd52.Obj);

DEFLABEL (label_42)
  (Wrd75.Obj) = (Rsp [1]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 62))
    goto label_41;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd74.Lng))))
    goto label_41;
  (Wrd68.Obj) = ((Wrd72.pObj) [9]);
  (* (--Rsp)) = (Wrd68.Obj);

DEFLABEL (label_40)
  (Wrd91.Obj) = (Rsp [2]);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if (! ((Wrd92.uLng) == 62))
    goto label_39;
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd91.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (Wrd90.Lng) = (FIXNUM_TO_LONG (Wrd89.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd90.Lng))))
    goto label_39;
  (Wrd84.Obj) = ((Wrd88.pObj) [6]);
  (* (--Rsp)) = (Wrd84.Obj);

DEFLABEL (label_38)
  (Wrd98.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd98.Obj);
  goto loop_22;

DEFLABEL (label_39)
  (Wrd93.Obj) = (Rsp [2]);
  (Wrd94.Obj) = (current_block [OBJECT_69_2]);
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_11]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd77.Obj) = (Rsp [1]);
  (Wrd78.Obj) = (current_block [OBJECT_69_4]);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_10]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.Obj) = (current_block [OBJECT_69_3]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_9]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_69_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

DEFLABEL (label_28)
  (Wrd21.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_69_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (loop_36)
DEFLABEL (loop_22)
  INTERRUPT_CHECK (26, LABEL_69_12);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [7]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd6.Lng) < (Wrd8.Lng)))
    goto label_52;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_13]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_14]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_15]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_69_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [14]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_69_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_69_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_48;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_15]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_69_18);
  if (Rvl == (current_block [OBJECT_69_7]))
    goto label_50;
  (Wrd7.Obj) = (Rsp [2]);
  goto label_49;

DEFLABEL (label_50)
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd13.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));

DEFLABEL (label_49)
DEFLABEL (label_51)
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd10.Lng) + 1L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (Rsp [1]) = (Wrd8.Obj);
  goto loop_22;

DEFLABEL (label_52)
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_56;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd36.Lng))))
    goto label_56;
  (Wrd30.Obj) = (Rsp [1]);
  ((Wrd34.pObj) [6]) = (Wrd30.Obj);

DEFLABEL (label_55)
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_54;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd19.Lng))))
    goto label_54;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [9]) = (Wrd13.Obj);

DEFLABEL (label_53)
  Rvl = (current_block [OBJECT_69_6]);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.Obj) = (current_block [OBJECT_69_4]);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_17]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_5]), 3);

DEFLABEL (label_32)
  goto label_53;

DEFLABEL (label_56)
  (Wrd39.Obj) = (Rsp [4]);
  (Wrd40.Obj) = (current_block [OBJECT_69_2]);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_16]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_5]), 3);

DEFLABEL (label_33)
  goto label_55;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_5 3
#define LABEL_70_4 5
#define LABEL_70_6 7
#define LABEL_70_7 9
#define LABEL_70_9 11
#define LABEL_70_10 13
#define LABEL_70_11 15
#define LABEL_70_12 17
#define LABEL_70_13 19
#define LABEL_70_15 21
#define ENVIRONMENT_LABEL_70_3 33
#define DEBUGGING_LABEL_70_2 32
#define OBJECT_70_4 31
#define OBJECT_70_3 30
#define OBJECT_70_2 29
#define OBJECT_70_1 28
#define OBJECT_70_0 27
#define EXECUTE_CACHE_70_14 23
#define EXECUTE_CACHE_70_8 25
#define FREE_REFERENCES_LABEL_70_0 22
#define NUMBER_OF_LINKER_SECTIONS_70_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd82;
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
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd52;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd92;
  machine_word Wrd85;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_70_5);
      goto continuation_6;

    case 1:
      current_block = (Rpc - LABEL_70_4);
      goto match_substring_loop_na_19;

    case 2:
      current_block = (Rpc - LABEL_70_6);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_70_7);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_70_9);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_70_10);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_70_11);
      goto loop_16;

    case 7:
      current_block = (Rpc - LABEL_70_12);
      goto continuation_13;

    case 8:
      current_block = (Rpc - LABEL_70_13);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_70_15);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_substring_loop_na_26)
DEFLABEL (match_substring_loop_na_19)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_36;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_36;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_35)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_34;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_34;
  (Wrd21.Obj) = ((Wrd27.pObj) [6]);

DEFLABEL (label_33)
  (Wrd38.Obj) = (Rsp [4]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd40.Obj) = (Rsp [3]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Lng) = ((Wrd39.Lng) - (Wrd41.Lng));
  (Wrd37.Obj) = (LONG_TO_FIXNUM (Wrd42.Lng));
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd46.Lng) = ((Wrd44.Lng) + (Wrd42.Lng));
  (Wrd47.Obj) = (* (Rsp++));
  Wrd48 = Wrd46;
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! ((Wrd48.Lng) > (Wrd49.Lng)))
    goto label_28;
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_5]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd92.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd92.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_8]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_70_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_28;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 62))
    goto label_32;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd58.Lng))))
    goto label_32;
  (Wrd52.Obj) = ((Wrd56.pObj) [2]);
  (* (--Rsp)) = (Wrd52.Obj);

DEFLABEL (label_31)
  (Wrd75.Obj) = (Rsp [1]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 62))
    goto label_30;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd74.Lng))))
    goto label_30;
  (Wrd68.Obj) = ((Wrd72.pObj) [6]);
  (* (--Rsp)) = (Wrd68.Obj);

DEFLABEL (label_29)
  (Wrd82.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd82.Obj);
  goto loop_16;

DEFLABEL (label_30)
  (Wrd77.Obj) = (Rsp [1]);
  (Wrd78.Obj) = (current_block [OBJECT_70_2]);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_10]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.Obj) = (current_block [OBJECT_70_3]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_9]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_70_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 2);

DEFLABEL (label_22)
  (Wrd21.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_70_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (loop_27)
DEFLABEL (loop_16)
  INTERRUPT_CHECK (26, LABEL_70_11);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [6]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_37;
  Rvl = (current_block [OBJECT_70_4]);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_14]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_70_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_70_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_70_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd13.Lng) + 1L);
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (Rsp [1]) = (Wrd11.Obj);
  goto loop_16;

DEFLABEL (label_38)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_5 5
#define LABEL_71_6 7
#define LABEL_71_7 9
#define ENVIRONMENT_LABEL_71_3 17
#define DEBUGGING_LABEL_71_2 16
#define OBJECT_71_5 15
#define OBJECT_71_4 14
#define OBJECT_71_3 13
#define OBJECT_71_2 12
#define OBJECT_71_1 11
#define OBJECT_71_0 10
#define FREE_REFERENCES_LABEL_71_0 10
#define NUMBER_OF_LINKER_SECTIONS_71_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_71_4);
      goto increment_buffer_indexB_6;

    case 1:
      current_block = (Rpc - LABEL_71_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_71_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_71_7);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (increment_buffer_indexB_12)
DEFLABEL (increment_buffer_indexB_6)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_21;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_21;
  (Wrd5.Obj) = ((Wrd11.pObj) [6]);

DEFLABEL (label_20)
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd23.Lng) = ((Wrd22.Lng) + 1L);
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 62))
    goto label_19;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd69.Lng))))
    goto label_19;
  ((Wrd67.pObj) [6]) = (Wrd21.Obj);

DEFLABEL (label_18)
  (Wrd24.Obj) = (Rsp [1]);
  if ((Wrd24.Obj) == (current_block [OBJECT_71_3]))
    goto label_13;
  Rvl = (current_block [OBJECT_71_5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd28.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd39.uLng) == 62))
    goto label_17;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd37.Lng))))
    goto label_17;
  (Wrd29.Obj) = ((Wrd35.pObj) [9]);

DEFLABEL (label_16)
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd47.Lng) = ((Wrd46.Lng) + 1L);
  (Wrd45.Obj) = (LONG_TO_FIXNUM (Wrd47.Lng));
  (Rsp [2]) = (Wrd45.Obj);
  (Wrd48.Obj) = (current_block [OBJECT_71_4]);
  (Rsp [1]) = (Wrd48.Obj);
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd61.uLng) == 62)
    goto label_15;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_2]), 3);

DEFLABEL (label_15)
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd59.Lng))))
    goto label_14;
  ((Wrd57.pObj) [9]) = (Wrd45.Obj);
  Rvl = (current_block [OBJECT_71_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_71_4]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_7]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_1]), 2);

DEFLABEL (label_9)
  (Wrd29.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd72.Obj) = (Rsp [0]);
  (Wrd73.Obj) = (current_block [OBJECT_71_0]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_6]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_2]), 3);

DEFLABEL (label_10)
  goto label_18;

DEFLABEL (label_21)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_71_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_1]), 2);

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define LABEL_72_5 5
#define LABEL_72_6 7
#define LABEL_72_8 9
#define LABEL_72_9 11
#define LABEL_72_7 13
#define LABEL_72_10 15
#define ENVIRONMENT_LABEL_72_3 27
#define DEBUGGING_LABEL_72_2 26
#define OBJECT_72_6 25
#define OBJECT_72_5 24
#define OBJECT_72_4 23
#define OBJECT_72_3 22
#define OBJECT_72_2 21
#define OBJECT_72_1 20
#define OBJECT_72_0 19
#define EXECUTE_CACHE_72_11 17
#define FREE_REFERENCES_LABEL_72_0 16
#define NUMBER_OF_LINKER_SECTIONS_72_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd44;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd48;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
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
      current_block = (Rpc - LABEL_72_4);
      goto buffer_index_nB_15;

    case 1:
      current_block = (Rpc - LABEL_72_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_72_6);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_72_8);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_72_9);
      goto loop_11;

    case 5:
      current_block = (Rpc - LABEL_72_7);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_72_10);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (buffer_index_nB_21)
DEFLABEL (buffer_index_nB_15)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_31;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_31;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_30)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_29;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_29;
  (Wrd23.Obj) = ((Wrd27.pObj) [6]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_28)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd39.Obj) = (Rsp [3]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd41.Lng) = ((Wrd38.Lng) + (Wrd40.Lng));
  (Wrd42.Obj) = (LONG_TO_FIXNUM (Wrd41.Lng));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd55.Obj) = (Rsp [4]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_27;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd54.Lng))))
    goto label_27;
  (Wrd48.Obj) = ((Wrd52.pObj) [9]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_26)
  (Wrd62.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd62.Obj);
  goto loop_11;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_72_7);

DEFLABEL (label_25)
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_72_2]);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_24;

DEFLABEL (label_23)
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_5]), 3);

DEFLABEL (label_24)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd18.Lng))))
    goto label_23;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [6]) = (Wrd11.Obj);
  Rvl = (current_block [OBJECT_72_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd57.Obj) = (Rsp [4]);
  (Wrd58.Obj) = (current_block [OBJECT_72_3]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_8]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_72_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_72_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (loop_22)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_72_9);
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! ((Wrd23.Lng) < (Wrd25.Lng)))
    goto label_35;
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_10]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd44.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_11]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_72_10);
  if (Rvl == (current_block [OBJECT_72_6]))
    goto label_33;
  (Wrd7.Obj) = (Rsp [1]);
  goto label_32;

DEFLABEL (label_33)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd13.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));

DEFLABEL (label_32)
DEFLABEL (label_34)
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd10.Lng) + 1L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (Rsp [0]) = (Wrd8.Obj);
  goto loop_11;

DEFLABEL (label_35)
  (Wrd26.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_72_3]);
  (Rsp [1]) = (Wrd27.Obj);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd39.uLng) == 62))
    goto label_23;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd37.Lng))))
    goto label_23;
  (Wrd31.Obj) = (Rsp [2]);
  ((Wrd35.pObj) [9]) = (Wrd31.Obj);
  Rsp = (& (Rsp [4]));
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define LABEL_73_5 5
#define LABEL_73_6 7
#define LABEL_73_7 9
#define LABEL_73_8 11
#define LABEL_73_9 13
#define LABEL_73_11 15
#define LABEL_73_10 17
#define LABEL_73_14 19
#define TAG_73_15 8
#define LABEL_73_17 21
#define LABEL_73_21 23
#define LABEL_73_22 25
#define LABEL_73_23 27
#define LABEL_73_24 29
#define LABEL_73_25 31
#define LABEL_73_18 33
#define LABEL_73_19 35
#define ENVIRONMENT_LABEL_73_3 59
#define DEBUGGING_LABEL_73_2 58
#define OBJECT_73_10 57
#define OBJECT_73_9 56
#define OBJECT_73_8 55
#define OBJECT_73_7 54
#define OBJECT_73_6 53
#define OBJECT_73_5 52
#define OBJECT_73_4 51
#define OBJECT_73_3 50
#define OBJECT_73_2 49
#define OBJECT_73_1 48
#define OBJECT_73_0 47
#define EXECUTE_CACHE_73_26 37
#define EXECUTE_CACHE_73_20 39
#define EXECUTE_CACHE_73_16 41
#define EXECUTE_CACHE_73_13 43
#define EXECUTE_CACHE_73_12 45
#define FREE_REFERENCES_LABEL_73_0 36
#define NUMBER_OF_LINKER_SECTIONS_73_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd73;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd56;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd16;
  machine_word Wrd98;
  machine_word Wrd94;
  machine_word Wrd95;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd128;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd121;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd157;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd148;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd135;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd160;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd88;
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
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd7;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd112;
  machine_word Wrd111;
  INVOKE_INTERFACE_DECLS
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
      goto discard_parser_buffer_headB_34;

    case 1:
      current_block = (Rpc - LABEL_73_5);
      goto label_40;

    case 2:
      current_block = (Rpc - LABEL_73_6);
      goto label_36;

    case 3:
      current_block = (Rpc - LABEL_73_7);
      goto label_37;

    case 4:
      current_block = (Rpc - LABEL_73_8);
      goto label_38;

    case 5:
      current_block = (Rpc - LABEL_73_9);
      goto label_39;

    case 6:
      current_block = (Rpc - LABEL_73_11);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_73_10);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_73_14);
      goto lambda_48;

    case 9:
      current_block = (Rpc - LABEL_73_17);
      goto do_loop_23;

    case 10:
      current_block = (Rpc - LABEL_73_21);
      goto label_45;

    case 11:
      current_block = (Rpc - LABEL_73_22);
      goto label_44;

    case 12:
      current_block = (Rpc - LABEL_73_23);
      goto label_43;

    case 13:
      current_block = (Rpc - LABEL_73_24);
      goto label_41;

    case 14:
      current_block = (Rpc - LABEL_73_25);
      goto label_42;

    case 15:
      current_block = (Rpc - LABEL_73_18);
      goto continuation_19;

    case 16:
      current_block = (Rpc - LABEL_73_19);
      goto continuation_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (discard_parser_buffer_headB_47)
DEFLABEL (discard_parser_buffer_headB_34)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd111.Obj) = (Rsp [0]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd112.uLng) == 62))
    goto label_66;
  (Wrd108.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd109.Obj) = ((Wrd108.pObj) [0]);
  (Wrd110.Lng) = (FIXNUM_TO_LONG (Wrd109.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd110.Lng))))
    goto label_66;
  (Wrd7.Obj) = ((Wrd108.pObj) [7]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_61;

DEFLABEL (label_60)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 62))
    goto label_59;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd48.Lng))))
    goto label_59;
  (Wrd42.Obj) = ((Wrd46.pObj) [4]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_58)
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 62))
    goto label_57;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd64.Lng))))
    goto label_57;
  (Wrd58.Obj) = ((Wrd62.pObj) [6]);
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_56)
  (Wrd81.Obj) = (Rsp [2]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd82.uLng) == 62))
    goto label_55;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd79.Obj) = ((Wrd78.pObj) [0]);
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd80.Lng))))
    goto label_55;
  (Wrd74.Obj) = ((Wrd78.pObj) [2]);
  (* (--Rsp)) = (Wrd74.Obj);

DEFLABEL (label_54)
  (Wrd88.Obj) = (Rsp [1]);
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd88.Obj));
  if ((Wrd89.Lng) > 0)
    goto label_50;
  Rvl = (current_block [OBJECT_73_4]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd92.Obj) = (Rsp [2]);
  (Wrd93.Lng) = (FIXNUM_TO_LONG (Wrd92.Obj));
  (Wrd96.Lng) = ((Wrd93.Lng) - (Wrd89.Lng));
  (Wrd97.Obj) = (LONG_TO_FIXNUM (Wrd96.Lng));
  (* (--Rsp)) = (Wrd97.Obj);
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_10]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_11]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (Wrd104.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd104.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_73_11);
  (* (--Rsp)) = Rvl;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd22.Lng) > 256L)
    goto label_53;

DEFLABEL (label_52)
  (Wrd26.Obj) = (Rsp [3]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_51)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_73_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_73_14])));
  Rhp += 6;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd18 = Wrd7;
  (Wrd19.Obj) = (Rsp [5]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd18.pObj) [4]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [5]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd18.pObj) [6]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd18.pObj) [7]) = (Wrd9.Obj);
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_16]));

DEFLABEL (label_53)
  (Wrd32.Lng) = (((Wrd22.Lng) < 0) ? (RIGHT_SHIFT (((Wrd22.Lng) + 3), 2)) : (RIGHT_SHIFT ((Wrd22.Lng), 2)));
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if ((Wrd34.Lng) > (Wrd32.Lng))
    goto label_52;
  (Wrd41.Lng) = (((Wrd22.Lng) < 0) ? (RIGHT_SHIFT (((Wrd22.Lng) + 1), 1)) : (RIGHT_SHIFT ((Wrd22.Lng), 1)));
  (Wrd36.Obj) = (LONG_TO_FIXNUM (Wrd41.Lng));
  (Rsp [0]) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_13]));

DEFLABEL (label_55)
  (Wrd83.Obj) = (Rsp [2]);
  (Wrd84.Obj) = (current_block [OBJECT_73_7]);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_9]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_1]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.Obj) = (current_block [OBJECT_73_3]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_8]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_1]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.Obj) = (current_block [OBJECT_73_6]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_7]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_1]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd9.Obj) = (current_block [OBJECT_73_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_65;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd19.Lng))))
    goto label_65;
  (Wrd11.Obj) = ((Wrd17.pObj) [6]);

DEFLABEL (label_64)
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 62)
    goto label_63;

DEFLABEL (label_62)
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_5]), 3);

DEFLABEL (label_63)
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd37.Lng))))
    goto label_62;
  ((Wrd35.pObj) [3]) = (Wrd11.Obj);
  Rvl = (current_block [OBJECT_73_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_65)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_73_3]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_1]), 2);

DEFLABEL (label_36)
  (Wrd11.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_66)
  (Wrd113.Obj) = (Rsp [0]);
  (Wrd114.Obj) = (current_block [OBJECT_73_0]);
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_5]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_1]), 2);

DEFLABEL (label_40)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  goto label_60;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_73_10);
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_73_14);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_73_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto do_loop_23;

DEFLABEL (do_loop_49)
DEFLABEL (do_loop_23)
  INTERRUPT_CHECK (26, LABEL_73_17);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd6.Lng) < (Wrd10.Lng))
    goto label_68;
  (Wrd11.Obj) = (current_block [OBJECT_73_9]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto label_67;

DEFLABEL (label_68)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_67)
DEFLABEL (label_82)
  (Wrd12.Obj) = (Rsp [0]);
  if (! ((Wrd12.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_69;
  (Wrd160.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_18]))));
  (* (--Rsp)) = (Wrd160.Obj);
  (Wrd163.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_19]))));
  (* (--Rsp)) = (Wrd163.Obj);
  (Wrd164.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd164.Obj);
  (Wrd165.Obj) = (Rsp [6]);
  (Wrd166.pObj) = (OBJECT_ADDRESS (Wrd165.Obj));
  (Wrd167.Obj) = ((Wrd166.pObj) [5]);
  (* (--Rsp)) = (Wrd167.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_20]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_73_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [6]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_26]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_73_18);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd11.Lng) + 1L);
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_23;

DEFLABEL (label_69)
  Rsp = (& (Rsp [3]));
  (Wrd144.Obj) = (Rsp [0]);
  (Wrd145.pObj) = (OBJECT_ADDRESS (Wrd144.Obj));
  (Wrd146.Obj) = ((Wrd145.pObj) [2]);
  (Wrd147.uLng) = (OBJECT_TYPE (Wrd146.Obj));
  if (! ((Wrd147.uLng) == 62))
    goto label_81;
  (Wrd141.pObj) = (OBJECT_ADDRESS (Wrd146.Obj));
  (Wrd142.Obj) = ((Wrd141.pObj) [0]);
  (Wrd143.Lng) = (FIXNUM_TO_LONG (Wrd142.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd143.Lng))))
    goto label_81;
  (Wrd135.Obj) = ((Wrd145.pObj) [7]);
  ((Wrd141.pObj) [2]) = (Wrd135.Obj);

DEFLABEL (label_80)
  (Wrd117.Obj) = (Rsp [0]);
  (Wrd118.pObj) = (OBJECT_ADDRESS (Wrd117.Obj));
  (Wrd119.Obj) = ((Wrd118.pObj) [2]);
  (Wrd120.uLng) = (OBJECT_TYPE (Wrd119.Obj));
  if (! ((Wrd120.uLng) == 62))
    goto label_79;
  (Wrd114.pObj) = (OBJECT_ADDRESS (Wrd119.Obj));
  (Wrd115.Obj) = ((Wrd114.pObj) [0]);
  (Wrd116.Lng) = (FIXNUM_TO_LONG (Wrd115.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd116.Lng))))
    goto label_79;
  (Wrd108.Obj) = (current_block [OBJECT_73_8]);
  ((Wrd114.pObj) [6]) = (Wrd108.Obj);

DEFLABEL (label_78)
  (Wrd90.Obj) = (Rsp [0]);
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd92.Obj) = ((Wrd91.pObj) [2]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd93.uLng) == 62))
    goto label_77;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd88.Obj) = ((Wrd87.pObj) [0]);
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd88.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd89.Lng))))
    goto label_77;
  (Wrd81.Obj) = ((Wrd91.pObj) [6]);
  ((Wrd87.pObj) [4]) = (Wrd81.Obj);

DEFLABEL (label_76)
  (Wrd15.Obj) = (current_block [OBJECT_73_10]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_75;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd31.Lng))))
    goto label_75;
  (Wrd19.Obj) = ((Wrd29.pObj) [5]);

DEFLABEL (label_74)
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd51.uLng) == 26))
    goto label_73;
  (Wrd52.Obj) = (Rsp [2]);
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [4]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 26))
    goto label_73;
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  (Wrd56.Lng) = ((Wrd57.Lng) + (Wrd61.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd56.Lng)))
    goto label_73;
  (Wrd50.Obj) = (LONG_TO_FIXNUM (Wrd56.Lng));

DEFLABEL (label_72)
  (Rsp [2]) = (Wrd50.Obj);
  (Wrd73.Obj) = (Rsp [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd74.uLng) == 62)
    goto label_71;

DEFLABEL (label_70)
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_5]), 3);

DEFLABEL (label_71)
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [0]);
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd72.Lng))))
    goto label_70;
  ((Wrd70.pObj) [5]) = (Wrd50.Obj);
  Rvl = (current_block [OBJECT_73_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_73)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd44.Obj) = ((Wrd46.pObj) [4]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_25]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_42)
  (Wrd50.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [2]);
  (Wrd39.Obj) = (current_block [OBJECT_73_10]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_24]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_1]), 2);

DEFLABEL (label_41)
  (Wrd19.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd95.Obj) = (Rsp [0]);
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd94.Obj) = ((Wrd96.pObj) [2]);
  (Wrd97.Obj) = (current_block [OBJECT_73_6]);
  (Wrd98.Obj) = ((Wrd96.pObj) [6]);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_23]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_5]), 3);

DEFLABEL (label_43)
  goto label_76;

DEFLABEL (label_79)
  (Wrd122.Obj) = (Rsp [0]);
  (Wrd123.pObj) = (OBJECT_ADDRESS (Wrd122.Obj));
  (Wrd121.Obj) = ((Wrd123.pObj) [2]);
  (Wrd124.Obj) = (current_block [OBJECT_73_3]);
  (Wrd125.Obj) = (current_block [OBJECT_73_8]);
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_22]))));
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_5]), 3);

DEFLABEL (label_44)
  goto label_78;

DEFLABEL (label_81)
  (Wrd149.Obj) = (Rsp [0]);
  (Wrd150.pObj) = (OBJECT_ADDRESS (Wrd149.Obj));
  (Wrd148.Obj) = ((Wrd150.pObj) [2]);
  (Wrd151.Obj) = (current_block [OBJECT_73_7]);
  (Wrd152.Obj) = ((Wrd150.pObj) [7]);
  (Wrd157.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_21]))));
  (* (--Rsp)) = (Wrd157.Obj);
  (* (--Rsp)) = (Wrd152.Obj);
  (* (--Rsp)) = (Wrd151.Obj);
  (* (--Rsp)) = (Wrd148.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_5]), 3);

DEFLABEL (label_45)
  goto label_80;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define LABEL_74_5 5
#define LABEL_74_6 7
#define ENVIRONMENT_LABEL_74_3 16
#define DEBUGGING_LABEL_74_2 15
#define OBJECT_74_3 14
#define OBJECT_74_2 13
#define OBJECT_74_1 12
#define OBJECT_74_0 11
#define EXECUTE_CACHE_74_7 9
#define FREE_REFERENCES_LABEL_74_0 8
#define NUMBER_OF_LINKER_SECTIONS_74_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_74_4);
      goto guarantee_buffer_chars_6;

    case 1:
      current_block = (Rpc - LABEL_74_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_74_6);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_buffer_chars_11)
DEFLABEL (guarantee_buffer_chars_6)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_19;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_18)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_17;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_17;
  (Wrd21.Obj) = ((Wrd27.pObj) [6]);

DEFLABEL (label_16)
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd41.Lng) = ((Wrd38.Lng) + (Wrd40.Lng));
  (Wrd42.Obj) = (* (Rsp++));
  Wrd43 = Wrd41;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if ((Wrd43.Lng) > (Wrd44.Lng))
    goto label_13;
  (Wrd45.Obj) = (current_block [OBJECT_74_3]);
  (* (--Rsp)) = (Wrd45.Obj);
  goto label_12;

DEFLABEL (label_13)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_12)
DEFLABEL (label_15)
  (Wrd46.Obj) = (Rsp [0]);
  if ((Wrd46.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = (Wrd46.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_7]));

DEFLABEL (label_17)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_74_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 2);

DEFLABEL (label_9)
  (Wrd21.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_74_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define LABEL_75_5 5
#define LABEL_75_6 7
#define LABEL_75_7 9
#define LABEL_75_8 11
#define LABEL_75_10 13
#define LABEL_75_13 15
#define LABEL_75_11 17
#define LABEL_75_14 19
#define LABEL_75_9 21
#define LABEL_75_16 23
#define LABEL_75_17 25
#define LABEL_75_18 27
#define TAG_75_19 12
#define LABEL_75_21 29
#define LABEL_75_22 31
#define LABEL_75_23 33
#define LABEL_75_25 35
#define LABEL_75_26 37
#define LABEL_75_27 39
#define LABEL_75_28 41
#define ENVIRONMENT_LABEL_75_3 61
#define DEBUGGING_LABEL_75_2 60
#define OBJECT_75_8 59
#define OBJECT_75_7 58
#define OBJECT_75_6 57
#define OBJECT_75_5 56
#define OBJECT_75_4 55
#define OBJECT_75_3 54
#define OBJECT_75_2 53
#define OBJECT_75_1 52
#define OBJECT_75_0 51
#define EXECUTE_CACHE_75_24 43
#define EXECUTE_CACHE_75_20 45
#define EXECUTE_CACHE_75_15 47
#define EXECUTE_CACHE_75_12 49
#define FREE_REFERENCES_LABEL_75_0 42
#define NUMBER_OF_LINKER_SECTIONS_75_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd78;
  machine_word Wrd58;
  machine_word Wrd44;
  machine_word Wrd81;
  machine_word Wrd26;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd59;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd56;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd52;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd25;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd7;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd86;
  machine_word Wrd85;
  INVOKE_INTERFACE_DECLS
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
      goto guarantee_buffer_chars_1_26;

    case 1:
      current_block = (Rpc - LABEL_75_5);
      goto label_32;

    case 2:
      current_block = (Rpc - LABEL_75_6);
      goto label_28;

    case 3:
      current_block = (Rpc - LABEL_75_7);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_75_8);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_75_10);
      goto label_31;

    case 6:
      current_block = (Rpc - LABEL_75_13);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_75_11);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_75_14);
      goto label_35;

    case 9:
      current_block = (Rpc - LABEL_75_9);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_75_16);
      goto label_33;

    case 11:
      current_block = (Rpc - LABEL_75_17);
      goto label_34;

    case 12:
      current_block = (Rpc - LABEL_75_18);
      goto lambda_43;

    case 13:
      current_block = (Rpc - LABEL_75_21);
      goto loop_21;

    case 14:
      current_block = (Rpc - LABEL_75_22);
      goto label_36;

    case 15:
      current_block = (Rpc - LABEL_75_23);
      goto continuation_14;

    case 16:
      current_block = (Rpc - LABEL_75_25);
      goto label_37;

    case 17:
      current_block = (Rpc - LABEL_75_26);
      goto label_38;

    case 18:
      current_block = (Rpc - LABEL_75_27);
      goto label_39;

    case 19:
      current_block = (Rpc - LABEL_75_28);
      goto label_40;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_buffer_chars_1_42)
DEFLABEL (guarantee_buffer_chars_1_26)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd85.Obj) = (Rsp [0]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 62))
    goto label_65;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [0]);
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd83.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd84.Lng))))
    goto label_65;
  (Wrd7.Obj) = ((Wrd82.pObj) [8]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_46;

DEFLABEL (label_45)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_64;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_64;
  (Wrd11.Obj) = ((Wrd15.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_63)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_62;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd33.Lng))))
    goto label_62;
  (Wrd25.Obj) = ((Wrd31.pObj) [6]);

DEFLABEL (label_61)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_60;
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 26))
    goto label_60;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  (Wrd49.Lng) = ((Wrd50.Lng) + (Wrd52.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd49.Lng)))
    goto label_60;
  (Wrd53.Obj) = (LONG_TO_FIXNUM (Wrd49.Lng));
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_59)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_9]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd66.Obj) = (Rsp [3]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 62))
    goto label_58;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd65.Lng))))
    goto label_58;
  (Wrd59.Obj) = ((Wrd63.pObj) [2]);
  (* (--Rsp)) = (Wrd59.Obj);

DEFLABEL (label_57)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_11]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd76.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd76.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_75_11);
  (Wrd53.Obj) = Rvl;
  (Wrd54.Obj) = (Rsp [2]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 26))
    goto label_56;
  (Wrd56.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd56.uLng) == 26))
    goto label_56;
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd73.Lng) > (Wrd74.Lng)))
    goto label_55;

DEFLABEL (label_54)
  (Wrd64.Obj) = (current_block [OBJECT_75_4]);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd65.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_13]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd69.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd71.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_75_13);
  (Rsp [2]) = Rvl;
  (Wrd86.Obj) = (Rsp [0]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if ((Wrd87.uLng) == 62)
    goto label_48;

DEFLABEL (label_47)
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_5]), 3);

DEFLABEL (label_48)
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [0]);
  (Wrd85.Lng) = (FIXNUM_TO_LONG (Wrd84.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd85.Lng))))
    goto label_47;
  ((Wrd83.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [4]));

DEFLABEL (label_53)
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_52;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_52;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_51)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_50;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd29.Lng))))
    goto label_50;
  (Wrd23.Obj) = ((Wrd27.pObj) [7]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_49)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd39.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_75_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_75_18])));
  Rhp += 5;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd39.pObj)));
  Wrd48 = Wrd39;
  (Wrd49.Obj) = (Rsp [4]);
  ((Wrd48.pObj) [2]) = (Wrd49.Obj);
  (Wrd47.Obj) = (Rsp [3]);
  ((Wrd48.pObj) [3]) = (Wrd47.Obj);
  (Wrd45.Obj) = (Rsp [2]);
  ((Wrd48.pObj) [4]) = (Wrd45.Obj);
  (Wrd43.Obj) = (Rsp [1]);
  ((Wrd48.pObj) [5]) = (Wrd43.Obj);
  (Wrd41.Obj) = (Rsp [0]);
  ((Wrd48.pObj) [6]) = (Wrd41.Obj);
  (Rsp [5]) = (Wrd38.Obj);
  (Rsp [3]) = (Wrd41.Obj);
  (Wrd51.Obj) = (current_block [OBJECT_75_7]);
  (Rsp [4]) = (Wrd51.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_20]));

DEFLABEL (label_50)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.Obj) = (current_block [OBJECT_75_6]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_17]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_75_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_55)
  Rsp = (& (Rsp [2]));
  goto label_53;

DEFLABEL (label_56)
  (Wrd57.Obj) = (Rsp [2]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_14]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_35)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  goto label_54;

DEFLABEL (label_58)
  (Wrd68.Obj) = (Rsp [3]);
  (Wrd69.Obj) = (current_block [OBJECT_75_4]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_10]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_8]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.Obj) = (current_block [OBJECT_75_3]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_7]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_29)
  (Wrd25.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_75_2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_65)
  (Wrd87.Obj) = (Rsp [0]);
  (Wrd88.Obj) = (current_block [OBJECT_75_0]);
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_5]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_32)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  goto label_45;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_75_9);
  goto label_53;

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_75_18);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto loop_21;

DEFLABEL (loop_44)
DEFLABEL (loop_21)
  INTERRUPT_CHECK (26, LABEL_75_21);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_77;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_77;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd35.Lng) < (Wrd39.Lng))
    goto label_67;

DEFLABEL (label_66)
  Rvl = (current_block [OBJECT_75_8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_67)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_23]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [4]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = ((Wrd25.pObj) [5]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = ((Wrd25.pObj) [6]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_24]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_75_23);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_76;
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd81.Lng) > 0)
    goto label_71;

DEFLABEL (label_70)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [2]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_69;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd26.Lng))))
    goto label_69;
  (Wrd18.Obj) = (current_block [OBJECT_75_8]);
  ((Wrd24.pObj) [8]) = (Wrd18.Obj);

DEFLABEL (label_68)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_69)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [2]);
  (Wrd34.Obj) = (current_block [OBJECT_75_0]);
  (Wrd35.Obj) = (current_block [OBJECT_75_8]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_26]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_5]), 3);

DEFLABEL (label_38)
  goto label_68;

DEFLABEL (label_71)
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_75;
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 26))
    goto label_75;
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  (Wrd49.Lng) = ((Wrd51.Lng) + (Wrd53.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd49.Lng)))
    goto label_75;
  (Wrd44.Obj) = (LONG_TO_FIXNUM (Wrd49.Lng));

DEFLABEL (label_74)
  (Rsp [1]) = (Wrd44.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [2]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 62))
    goto label_73;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd66.Lng))))
    goto label_73;
  (Wrd58.Obj) = (Rsp [0]);
  ((Wrd64.pObj) [4]) = (Wrd58.Obj);

DEFLABEL (label_72)
  goto loop_21;

DEFLABEL (label_73)
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd71.Obj) = ((Wrd73.pObj) [2]);
  (Wrd74.Obj) = (current_block [OBJECT_75_2]);
  (Wrd75.Obj) = (Rsp [0]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_28]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_5]), 3);

DEFLABEL (label_40)
  goto label_72;

DEFLABEL (label_75)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_27]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_39)
  (Wrd44.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_76)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_37)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_70;
  goto label_71;

DEFLABEL (label_77)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [4]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_22]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_36)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  goto label_67;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define LABEL_76_5 5
#define LABEL_76_6 7
#define LABEL_76_8 9
#define LABEL_76_9 11
#define LABEL_76_13 13
#define LABEL_76_14 15
#define LABEL_76_16 17
#define LABEL_76_10 19
#define LABEL_76_17 21
#define LABEL_76_11 23
#define ENVIRONMENT_LABEL_76_3 37
#define DEBUGGING_LABEL_76_2 36
#define OBJECT_76_2 35
#define OBJECT_76_1 34
#define OBJECT_76_0 33
#define EXECUTE_CACHE_76_18 25
#define EXECUTE_CACHE_76_15 27
#define EXECUTE_CACHE_76_12 29
#define EXECUTE_CACHE_76_7 31
#define FREE_REFERENCES_LABEL_76_0 24
#define NUMBER_OF_LINKER_SECTIONS_76_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
parser_buffer_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_76_4);
      goto Z__grow_buffer_19;

    case 1:
      current_block = (Rpc - LABEL_76_5);
      goto continuation_7;

    case 2:
      current_block = (Rpc - LABEL_76_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_76_8);
      goto do_loop_16;

    case 4:
      current_block = (Rpc - LABEL_76_9);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_76_13);
      goto loop_5;

    case 6:
      current_block = (Rpc - LABEL_76_14);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_76_16);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_76_10);
      goto continuation_13;

    case 9:
      current_block = (Rpc - LABEL_76_17);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_76_11);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__grow_buffer_26)
DEFLABEL (Z__grow_buffer_19)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_76_6);
  (* (--Rsp)) = Rvl;
  goto loop_5;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_76_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_76_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_16;

DEFLABEL (do_loop_27)
DEFLABEL (do_loop_16)
  INTERRUPT_CHECK (26, LABEL_76_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_36;
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_36;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd31.Lng) < (Wrd33.Lng))
    goto label_30;

DEFLABEL (label_31)
  (Wrd15.Obj) = (current_block [OBJECT_76_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto label_29;

DEFLABEL (label_30)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_29)
DEFLABEL (label_35)
  (Wrd16.Obj) = (Rsp [0]);
  if ((Wrd16.Obj) == ((SCHEME_OBJECT) 0))
    goto label_32;
  Rsp = (& (Rsp [2]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_12]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_76_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_18]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_76_10);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_34;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_34;
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_33)
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_16;

DEFLABEL (label_34)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_17]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_24)
  (Wrd9.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  goto label_30;

DEFLABEL (loop_28)
DEFLABEL (loop_5)
  INTERRUPT_CHECK (26, LABEL_76_13);
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_41;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_41;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd31.Lng) > (Wrd33.Lng))
    goto label_38;

DEFLABEL (label_37)
  (Wrd16.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_15]));

DEFLABEL (label_38)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_40;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (multiply_with_overflow ((Wrd27.Lng), 2, (& (Wrd25.Lng))))
    goto label_40;
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));

DEFLABEL (label_39)
  (Rsp [0]) = (Wrd22.Obj);
  goto loop_5;

DEFLABEL (label_40)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Obj) = (current_block [OBJECT_76_2]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_16]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_23)
  (Wrd22.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  (Wrd9.Obj) = (Rsp [4]);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_38;

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
#define LABEL_15 19
#define LABEL_16 21
#define LABEL_18 23
#define LABEL_19 25
#define LABEL_23 27
#define LABEL_20 29
#define LABEL_21 31
#define LABEL_22 33
#define LABEL_24 35
#define LABEL_29 37
#define LABEL_25 39
#define TAG_26 18
#define LABEL_27 41
#define LABEL_28 43
#define LABEL_30 45
#define LABEL_31 47
#define LABEL_32 49
#define ENVIRONMENT_LABEL_3 83
#define DEBUGGING_LABEL_2 82
#define PURIFICATION_ROOT 81
#define OBJECT_20 80
#define OBJECT_19 79
#define OBJECT_18 78
#define OBJECT_17 77
#define OBJECT_16 76
#define OBJECT_15 75
#define OBJECT_14 74
#define OBJECT_13 73
#define OBJECT_12 72
#define OBJECT_11 71
#define OBJECT_10 70
#define OBJECT_9 69
#define OBJECT_8 68
#define OBJECT_7 67
#define OBJECT_6 66
#define OBJECT_5 65
#define OBJECT_4 64
#define OBJECT_3 63
#define OBJECT_2 62
#define OBJECT_1 61
#define OBJECT_0 60
#define FREE_REFERENCE_1 51
#define FREE_REFERENCE_0 52
#define GLOBAL_EXECUTE_CACHE_12 54
#define GLOBAL_EXECUTE_CACHE_10 56
#define GLOBAL_EXECUTE_CACHE_6 58
#define FREE_REFERENCES_LABEL_0 50
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
parser_buffer_so_033fb56ec8a561d8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd43;
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
      goto continuation_9;

    case 1:
      current_block = (Rpc - LABEL_9);
      goto label_33;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_14;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_10;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto continuation_15;

    case 6:
      current_block = (Rpc - LABEL_17);
      goto label_34;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto make_parser_buffer_38;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto continuation_17;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_16;

    case 10:
      current_block = (Rpc - LABEL_18);
      goto continuation_18;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto continuation_22;

    case 12:
      current_block = (Rpc - LABEL_23);
      goto label_35;

    case 13:
      current_block = (Rpc - LABEL_20);
      goto continuation_21;

    case 14:
      current_block = (Rpc - LABEL_21);
      goto continuation_27;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto continuation_23;

    case 16:
      current_block = (Rpc - LABEL_24);
      goto continuation_28;

    case 17:
      current_block = (Rpc - LABEL_29);
      goto label_36;

    case 18:
      current_block = (Rpc - LABEL_25);
      goto make_parser_buffer_pointer_39;

    case 19:
      current_block = (Rpc - LABEL_27);
      goto continuation_30;

    case 20:
      current_block = (Rpc - LABEL_28);
      goto continuation_29;

    case 21:
      current_block = (Rpc - LABEL_30);
      goto label_41;

    case 22:
      current_block = (Rpc - LABEL_31);
      goto label_42;

    case 23:
      current_block = (Rpc - LABEL_32);
      goto expression_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_32)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_31])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_42)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_41)
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
	1,
	2,
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
    if (counter > 76)
      goto label_40;
    blocks = (current_block [OBJECT_20]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_30])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_40)
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
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd46.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_50;
  Wrd11 = Wrd15;

DEFLABEL (label_49)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x909, 2);
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

DEFLABEL (continuation_14)
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

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_48;
  Wrd11 = Wrd15;

DEFLABEL (label_47)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_46;
  Wrd11 = Wrd15;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_22);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_44;
  Wrd11 = Wrd15;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd5.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_18]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29])), (Wrd12.pObj));

DEFLABEL (label_36)
  (Wrd11.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd12.pObj));

DEFLABEL (label_35)
  (Wrd11.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd12.pObj));

DEFLABEL (label_34)
  (Wrd11.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd12.pObj));

DEFLABEL (label_33)
  (Wrd11.Obj) = Rvl;
  goto label_49;

DEFLABEL (make_parser_buffer_38)
  CLOSURE_HEADER (LABEL_13);

DEFLABEL (make_parser_buffer_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd17.Obj) = (MAKE_OBJECT (0, 9));
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.Obj) = (Rsp [5]);
  (Wrd14.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (Wrd10.Obj) = (Rsp [8]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd7.pObj) = (& (Rhp [-10]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (make_parser_buffer_pointer_39)
  CLOSURE_HEADER (LABEL_25);

DEFLABEL (make_parser_buffer_pointer_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd7.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_parser_buffer_so_033fb56ec8a561d8 [76] =
  {
    { "parser_buffer_so_code_1", 1, parser_buffer_so_code_1 },
    { "parser_buffer_so_code_2", 1, parser_buffer_so_code_2 },
    { "parser_buffer_so_code_3", 1, parser_buffer_so_code_3 },
    { "parser_buffer_so_code_4", 1, parser_buffer_so_code_4 },
    { "parser_buffer_so_code_5", 1, parser_buffer_so_code_5 },
    { "parser_buffer_so_code_6", 1, parser_buffer_so_code_6 },
    { "parser_buffer_so_code_7", 1, parser_buffer_so_code_7 },
    { "parser_buffer_so_code_8", 1, parser_buffer_so_code_8 },
    { "parser_buffer_so_code_9", 1, parser_buffer_so_code_9 },
    { "parser_buffer_so_code_10", 1, parser_buffer_so_code_10 },
    { "parser_buffer_so_code_11", 1, parser_buffer_so_code_11 },
    { "parser_buffer_so_code_12", 1, parser_buffer_so_code_12 },
    { "parser_buffer_so_code_13", 1, parser_buffer_so_code_13 },
    { "parser_buffer_so_code_14", 1, parser_buffer_so_code_14 },
    { "parser_buffer_so_code_15", 1, parser_buffer_so_code_15 },
    { "parser_buffer_so_code_16", 1, parser_buffer_so_code_16 },
    { "parser_buffer_so_code_17", 4, parser_buffer_so_code_17 },
    { "parser_buffer_so_code_18", 7, parser_buffer_so_code_18 },
    { "parser_buffer_so_code_19", 3, parser_buffer_so_code_19 },
    { "parser_buffer_so_code_20", 10, parser_buffer_so_code_20 },
    { "parser_buffer_so_code_21", 3, parser_buffer_so_code_21 },
    { "parser_buffer_so_code_22", 2, parser_buffer_so_code_22 },
    { "parser_buffer_so_code_23", 2, parser_buffer_so_code_23 },
    { "parser_buffer_so_code_24", 2, parser_buffer_so_code_24 },
    { "parser_buffer_so_code_25", 3, parser_buffer_so_code_25 },
    { "parser_buffer_so_code_26", 2, parser_buffer_so_code_26 },
    { "parser_buffer_so_code_27", 2, parser_buffer_so_code_27 },
    { "parser_buffer_so_code_28", 2, parser_buffer_so_code_28 },
    { "parser_buffer_so_code_29", 1, parser_buffer_so_code_29 },
    { "parser_buffer_so_code_30", 1, parser_buffer_so_code_30 },
    { "parser_buffer_so_code_31", 4, parser_buffer_so_code_31 },
    { "parser_buffer_so_code_32", 5, parser_buffer_so_code_32 },
    { "parser_buffer_so_code_33", 4, parser_buffer_so_code_33 },
    { "parser_buffer_so_code_34", 2, parser_buffer_so_code_34 },
    { "parser_buffer_so_code_35", 4, parser_buffer_so_code_35 },
    { "parser_buffer_so_code_36", 8, parser_buffer_so_code_36 },
    { "parser_buffer_so_code_37", 9, parser_buffer_so_code_37 },
    { "parser_buffer_so_code_38", 4, parser_buffer_so_code_38 },
    { "parser_buffer_so_code_39", 11, parser_buffer_so_code_39 },
    { "parser_buffer_so_code_40", 6, parser_buffer_so_code_40 },
    { "parser_buffer_so_code_41", 7, parser_buffer_so_code_41 },
    { "parser_buffer_so_code_42", 11, parser_buffer_so_code_42 },
    { "parser_buffer_so_code_43", 11, parser_buffer_so_code_43 },
    { "parser_buffer_so_code_44", 7, parser_buffer_so_code_44 },
    { "parser_buffer_so_code_45", 7, parser_buffer_so_code_45 },
    { "parser_buffer_so_code_46", 12, parser_buffer_so_code_46 },
    { "parser_buffer_so_code_47", 12, parser_buffer_so_code_47 },
    { "parser_buffer_so_code_48", 7, parser_buffer_so_code_48 },
    { "parser_buffer_so_code_49", 8, parser_buffer_so_code_49 },
    { "parser_buffer_so_code_50", 12, parser_buffer_so_code_50 },
    { "parser_buffer_so_code_51", 12, parser_buffer_so_code_51 },
    { "parser_buffer_so_code_52", 7, parser_buffer_so_code_52 },
    { "parser_buffer_so_code_53", 8, parser_buffer_so_code_53 },
    { "parser_buffer_so_code_54", 1, parser_buffer_so_code_54 },
    { "parser_buffer_so_code_55", 12, parser_buffer_so_code_55 },
    { "parser_buffer_so_code_56", 7, parser_buffer_so_code_56 },
    { "parser_buffer_so_code_57", 12, parser_buffer_so_code_57 },
    { "parser_buffer_so_code_58", 8, parser_buffer_so_code_58 },
    { "parser_buffer_so_code_59", 32, parser_buffer_so_code_59 },
    { "parser_buffer_so_code_60", 34, parser_buffer_so_code_60 },
    { "parser_buffer_so_code_61", 24, parser_buffer_so_code_61 },
    { "parser_buffer_so_code_62", 26, parser_buffer_so_code_62 },
    { "parser_buffer_so_code_63", 6, parser_buffer_so_code_63 },
    { "parser_buffer_so_code_64", 26, parser_buffer_so_code_64 },
    { "parser_buffer_so_code_65", 28, parser_buffer_so_code_65 },
    { "parser_buffer_so_code_66", 18, parser_buffer_so_code_66 },
    { "parser_buffer_so_code_67", 20, parser_buffer_so_code_67 },
    { "parser_buffer_so_code_68", 4, parser_buffer_so_code_68 },
    { "parser_buffer_so_code_69", 14, parser_buffer_so_code_69 },
    { "parser_buffer_so_code_70", 10, parser_buffer_so_code_70 },
    { "parser_buffer_so_code_71", 4, parser_buffer_so_code_71 },
    { "parser_buffer_so_code_72", 7, parser_buffer_so_code_72 },
    { "parser_buffer_so_code_73", 17, parser_buffer_so_code_73 },
    { "parser_buffer_so_code_74", 3, parser_buffer_so_code_74 },
    { "parser_buffer_so_code_75", 20, parser_buffer_so_code_75 },
    { "parser_buffer_so_code_76", 11, parser_buffer_so_code_76 }
  };

int
decl_parser_buffer_so_033fb56ec8a561d8 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_parser_buffer_so_033fb56ec8a561d8);
  return (0);
}

DECLARE_COMPILED_CODE ("parser-buffer.so", 24, decl_parser_buffer_so_033fb56ec8a561d8, parser_buffer_so_033fb56ec8a561d8)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_parser_buffer_so_data_033fb56ec8a561d8 [10264] =
  "\x9f\x01\x66\xb8\x16\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\xb9\x81"
  "\x22\x29\x21\x9e\x2b\xba\x1d\xb0\x82\x88\xb1\x82\x22\x29\x21\x9e"
  "\x2b\xbb\x1d\xb0\x83\x88\xb1\x83\x22\x29\x21\x9e\x2b\xbc\x1d\xb0"
  "\x84\x88\xb1\x84\x22\x29\x21\x9e\x2b\xbd\x1d\xb0\x85\x88\xb1\x85"
  "\x22\x29\x21\x9e\x2b\xbe\x1d\xb0\x86\x88\xb1\x86\x22\x29\x21\x9e"
  "\x2b\xbf\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c"
  "\x1d\x81\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x82\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x83\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x84\x22\x29\x21\x9f\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1d\x85\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1d\x86\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x02"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\xb1\x80\xc1\x1c\x0e\x1c\x24\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80"
  "\x07\x1d\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x07\x28\x0d\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x02\x80\x1d\x0d\x1c\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x1b\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb1\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\xb1\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x07\xb1"
  "\x80\x1b\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x02\x84\xb1\x85\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\xb1\x82\x02\x1b\x85\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x24\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\xb1\x85\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x82\x85\x81\xb1\x84\x1b\x0c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x0c\xb1\x82\x0c"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\xc2\x0c\x0c\x0d\x24\x28\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x02\x0f\x1b\x81\x85\xb1\x83\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x85\xb1"
  "\x83\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0d\x1c\x81\x85\xb1"
  "\x83\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x02"
  "\x0f\x1b\x81\x85\xb1\x83\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x02\x0f\x1b\x81\x85\xb1"
  "\x83\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\x81\x85\xb1\x83\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\x81\x85\xb1\x83\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\x02\x0f\x1b\x81\x85\xb1\x83\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\x02\x0f\x1b\x81\x85\xb1\x83\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x81\x85\xb1\x83\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\x81\x85\xb1\x83\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x02\x0f\x1b\x81\x85\xb1\x83"
  "\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x02\x0f\x1b\x81\x85\xb1\x83"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x85\xb1\x83\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x81\x85\xb1\x83\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\x02\x0f\x1b\x81\x85\xb1"
  "\x83\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x81\x85\xb1\x83\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\x02\x0f\x1b\x81\x85\xb1\x83\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x81\x85\xb1\x83\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0f\xc2\x1c\x07\x1b\x0c\x1c\x80\x02\x81\x85\xc1"
  "\x1c\xb1\x83\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0f\x1b\x07\x1b\x1b\x80\x02\x81\x85\x1b"
  "\xb1\x83\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x07\x1b\x80\x81"
  "\x85\x1b\xb1\x83\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x07\x1b\x80\x81\x85\x1b\xb1\x83"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x80\x0d\x1c\x1b\x24"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x1b\x07\x1b\x0c"
  "\x1c\x02\x81\x85\xb1\x83\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x1b\x07\x1b\x1b"
  "\x02\x81\x85\xb1\x83\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x07\x1b\x81\x85\xb1\x83\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x07\x1b\x81"
  "\x85\xb1\x83\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b"
  "\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x07\x1b\x02\x81\x85\xb1\x83\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x81\x85\xb1\x83\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x02"
  "\x0f\x1b\xb1\x85\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0f\x1b\x1d\x02\x85\xb1\x81\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x84\x07\x80\x81\x83\x1b\x1d\x85\x82\xb1\x86\x28"
  "\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\x85\xb1\x83\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0d\x86\x1b\x81\x85"
  "\x83\xb1\x02\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x07\x80\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x17\x1c\x88\x1b\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x17\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x0d\x0d\x1b\x1b\x1b\x0d\x0d"
  "\x1b\x1b\x17\x1b\x0d\x0d\x99\x1b\x2a\x1b\x2a\x99\x0d\x1c\x0c\x0d"
  "\x1c\x0d\x1c\x08\x89\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b"
  "\x1b\x1b\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x02\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x17"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\xb7\x2a\xb6\x2a\xb5\x2a\xb4\x2a\xb3\x2a\xb2\x2a"
  "\x17\xc3\x0d\x1c\x0c\x0d\x0d\x0d\x0d\x1b\x0d\x0d\x1b\x08\x8f\x08"
  "\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x1b\x24\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5c\x2f\x55"
  "\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72"
  "\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c"
  "\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75"
  "\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x70\x61\x72\x73\x65\x72\x2d\x62"
  "\x75\x66\x66\x65\x72\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0c"
  "\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x19\x04\x83\x04\x03"
  "\x02\x1a\x04\x83\x04\x03\x02\x1b\x04\x83\x04\x03\x02\x1c\x04\x83"
  "\x04\x03\x02\x1d\x04\x83\x04\x03\x02\x1e\x04\x83\x04\x03\x02\x08"
  "\x08\x1f\x04\x83\x04\x03\x09\x02\x09\x09\x20\x04\x83\x04\x03\x0a"
  "\x02\x0a\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x0b"
  "\x02\x21\x04\x84\x06\x03\x0c\x02\x0b\x0b\x02\x22\x04\x84\x06\x03"
  "\x0d\x02\x0c\x0b\x02\x23\x04\x84\x06\x03\x0e\x02\x0d\x0b\x02\x24"
  "\x04\x84\x06\x03\x0f\x02\x0e\x0b\x02\x25\x04\x84\x06\x03\x10\x02"
  "\x0f\x0b\x02\x26\x04\x84\x06\x03\x11\x02\x10\x0b\x02\x08\x27\x04"
  "\x84\x06\x03\x12\x02\x11\x0b\x02\x09\x28\x04\x84\x06\x03\x13\x02"
  "\x12\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68"
  "\x14\x07\x2e\x74\x61\x67\x2e\x31\x15\x02\x2c\x0a\x81\x85\x02\x2b"
  "\x08\x81\x83\x02\x2a\x06\x81\x83\x02\x29\x04\x83\x04\x09\x12\x16"
  "\x02\x13\x08\x16\x73\x74\x72\x69\x6e\x67\x2d\x3e\x70\x61\x72\x73"
  "\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x17\x05\x14\x73\x74\x72\x69"
  "\x6e\x67\x2d\x3e\x77\x69\x64\x65\x2d\x73\x74\x72\x69\x6e\x67\x04"
  "\x16\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x77\x69\x64\x65\x2d"
  "\x73\x74\x72\x69\x6e\x67\x18\x03\x13\x77\x69\x64\x65\x2d\x73\x74"
  "\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x19\x0a\x13\x6d\x61"
  "\x6b\x65\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72"
  "\x1a\x05\x20\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x73\x75\x62"
  "\x73\x74\x72\x69\x6e\x67\x2d\x73\x74\x61\x72\x74\x2d\x69\x6e\x64"
  "\x65\x78\x05\x1e\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x73\x75"
  "\x62\x73\x74\x72\x69\x6e\x67\x2d\x65\x6e\x64\x2d\x69\x6e\x64\x65"
  "\x78\x07\x33\x10\x81\x8b\x02\x32\x0e\x81\x8b\x02\x31\x0c\x81\x87"
  "\x02\x30\x0a\x81\x89\x02\x2f\x08\x81\x87\x02\x2e\x06\x81\x87\x02"
  "\x2d\x04\x85\x04\x0f\x23\x1b\x02\x14\x05\x19\x75\x74\x66\x38\x2d"
  "\x73\x74\x72\x69\x6e\x67\x2d\x3e\x77\x69\x64\x65\x2d\x73\x74\x72"
  "\x69\x6e\x67\x03\x19\x0a\x1a\x04\x36\x08\x81\x8b\x02\x35\x06\x81"
  "\x87\x02\x34\x04\x85\x04\x07\x13\x1c\x02\x15\x81\x02\x08\x1a\x69"
  "\x6e\x70\x75\x74\x2d\x70\x6f\x72\x74\x2d\x3e\x70\x61\x72\x73\x65"
  "\x72\x2d\x62\x75\x66\x66\x65\x72\x1d\x04\x15\x67\x75\x61\x72\x61"
  "\x6e\x74\x65\x65\x2d\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72\x74\x04"
  "\x18\x03\x19\x03\x11\x6d\x61\x6b\x65\x2d\x77\x69\x64\x65\x2d\x73"
  "\x74\x72\x69\x6e\x67\x18\x03\x0d\x77\x69\x64\x65\x2d\x73\x74\x72"
  "\x69\x6e\x67\x3f\x1e\x0a\x1a\x04\x04\x6d\x61\x78\x05\x0d\x25\x67"
  "\x72\x6f\x77\x2d\x62\x75\x66\x66\x65\x72\x1f\x09\x40\x16\x81\x91"
  "\x02\x3f\x14\x81\x8f\x02\x3e\x12\x81\x85\x02\x3d\x10\x81\x85\x02"
  "\x3c\x0e\x81\x8f\x02\x3b\x0c\x81\x85\x02\x3a\x0a\x81\x85\x02\x39"
  "\x08\x81\x85\x02\x38\x06\x81\x85\x02\x37\x04\x84\x04\x15\x2d\x20"
  "\x02\x16\x03\x18\x70\x65\x65\x6b\x2d\x70\x61\x72\x73\x65\x72\x2d"
  "\x62\x75\x66\x66\x65\x72\x2d\x63\x68\x61\x72\x21\x02\x43\x08\x81"
  "\x85\x02\x42\x06\x81\x85\x02\x41\x04\x84\x06\x07\x0e\x22\x02\x17"
  "\x05\x17\x04\x10\x63\x6f\x6d\x70\x6c\x65\x74\x65\x2d\x2a\x6d\x61"
  "\x74\x63\x68\x23\x03\x45\x06\x81\x89\x02\x44\x04\x86\x06\x05\x0d"
  "\x24\x02\x18\x05\x1b\x75\x74\x66\x38\x2d\x73\x74\x72\x69\x6e\x67"
  "\x2d\x3e\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x25"
  "\x04\x23\x03\x47\x06\x81\x89\x02\x46\x04\x86\x06\x05\x0d\x26\x02"
  "\x19\x03\x0c\x73\x79\x6d\x62\x6f\x6c\x2d\x6e\x61\x6d\x65\x27\x04"
  "\x13\x2a\x6d\x61\x74\x63\x68\x2d\x75\x74\x66\x38\x2d\x73\x74\x72"
  "\x69\x6e\x67\x28\x03\x49\x06\x81\x85\x02\x48\x04\x84\x06\x05\x0d"
  "\x29\x02\x1a\x03\x21\x02\x4c\x08\x81\x87\x02\x4b\x06\x81\x85\x02"
  "\x4a\x04\x84\x06\x07\x0d\x2a\x02\x1b\x05\x17\x04\x10\x63\x6f\x6d"
  "\x70\x6c\x65\x74\x65\x2d\x2a\x70\x61\x72\x73\x65\x2b\x03\x4e\x06"
  "\x81\x89\x02\x4d\x04\x86\x06\x05\x0d\x2c\x02\x1c\x05\x25\x04\x2b"
  "\x03\x50\x06\x81\x89\x02\x4f\x04\x86\x06\x05\x0d\x2d\x02\x1d\x03"
  "\x27\x04\x13\x2a\x70\x61\x72\x73\x65\x2d\x75\x74\x66\x38\x2d\x73"
  "\x74\x72\x69\x6e\x67\x27\x03\x52\x06\x81\x85\x02\x51\x04\x84\x06"
  "\x05\x0d\x2e\x02\x1e\x53\x04\x83\x04\x03\x2f\x02\x1f\x54\x04\x83"
  "\x04\x03\x30\x02\x20\x14\x07\x2e\x74\x61\x67\x2e\x32\x14\x02\x58"
  "\x0a\x81\x85\x02\x57\x08\x81\x83\x02\x56\x06\x81\x83\x02\x55\x04"
  "\x83\x04\x09\x12\x31\x02\x21\x09\x04\x1b\x6d\x61\x6b\x65\x2d\x70"
  "\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x70\x6f\x69"
  "\x6e\x74\x65\x72\x32\x02\x5d\x0c\x81\x85\x02\x5c\x0a\x81\x83\x02"
  "\x5b\x08\x81\x85\x02\x5a\x06\x81\x83\x02\x59\x04\x83\x04\x0b\x15"
  "\x33\x02\x22\x02\x09\x0b\x04\x0f\x70\x6f\x69\x6e\x74\x65\x72\x2d"
  "\x3e\x69\x6e\x64\x65\x78\x34\x02\x61\x0a\x81\x87\x02\x60\x08\x81"
  "\x85\x02\x5f\x06\x81\x85\x02\x5e\x04\x84\x06\x09\x15\x35\x02\x23"
  "\x19\x77\x69\x64\x65\x2d\x73\x74\x72\x69\x6e\x67\x2d\x3e\x75\x74"
  "\x66\x38\x2d\x73\x74\x72\x69\x6e\x67\x02\x05\x1d\x63\x61\x6c\x6c"
  "\x2d\x77\x69\x74\x68\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66"
  "\x66\x65\x72\x2d\x74\x61\x69\x6c\x36\x02\x63\x06\x81\x87\x02\x62"
  "\x04\x84\x06\x05\x0d\x37\x02\x24\x04\x34\x02\x67\x0a\x81\x89\x02"
  "\x66\x08\x81\x89\x02\x65\x06\x81\x89\x02\x64\x04\x85\x08\x09\x12"
  "\x38\x02\x25\x34\x16\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66"
  "\x65\x72\x20\x70\x6f\x69\x6e\x74\x65\x72\x03\x17\x70\x61\x72\x73"
  "\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x70\x6f\x69\x6e\x74\x65"
  "\x72\x3f\x39\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67"
  "\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x3a\x05"
  "\x03\x3c\x3d\x04\x19\x65\x72\x72\x6f\x72\x3a\x62\x61\x64\x2d\x72"
  "\x61\x6e\x67\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x05\x6f\x12"
  "\x81\x87\x02\x6e\x10\x81\x8d\x02\x6d\x0e\x81\x89\x02\x6c\x0c\x81"
  "\x85\x02\x6b\x0a\x81\x87\x02\x6a\x08\x81\x85\x02\x69\x06\x81\x85"
  "\x02\x68\x04\x84\x06\x11\x24\x3b\x02\x26\x06\x6c\x69\x6e\x65\x20"
  "\x08\x2c\x20\x63\x68\x61\x72\x20\x03\x39\x03\x1a\x67\x65\x74\x2d"
  "\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x70\x6f"
  "\x69\x6e\x74\x65\x72\x3c\x03\x0f\x6e\x75\x6d\x62\x65\x72\x2d\x3e"
  "\x73\x74\x72\x69\x6e\x67\x06\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61"
  "\x70\x70\x65\x6e\x64\x3d\x05\x78\x14\x81\x89\x02\x77\x12\x81\x8b"
  "\x02\x76\x10\x81\x8b\x02\x75\x0e\x81\x85\x02\x74\x0c\x81\x87\x02"
  "\x73\x0a\x81\x87\x02\x72\x08\x81\x83\x02\x71\x06\x81\x85\x02\x70"
  "\x04\x83\x04\x13\x24\x3e\x02\x27\x05\x20\x61\x74\x20\x06\x61\x70"
  "\x70\x6c\x79\x02\x2e\x02\x3a\x06\x65\x72\x72\x6f\x72\x02\x03\x1e"
  "\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x70\x6f"
  "\x73\x69\x74\x69\x6f\x6e\x2d\x73\x74\x72\x69\x6e\x67\x3f\x06\x3d"
  "\x03\x7c\x0a\x81\x8b\x02\x7b\x08\x81\x87\x02\x7a\x06\x81\x87\x02"
  "\x79\x04\xfd\x07\x09\x17\x3d\x02\x28\x09\x01\x0b\x0b\x04\x19\x67"
  "\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x62\x75\x66\x66\x65\x72\x2d"
  "\x63\x68\x61\x72\x73\x2d\x31\x40\x04\x10\x77\x69\x64\x65\x2d\x73"
  "\x74\x72\x69\x6e\x67\x2d\x72\x65\x66\x41\x03\x87\x01\x18\x81\x85"
  "\x02\x86\x01\x16\x81\x85\x02\x85\x01\x14\x81\x85\x02\x84\x01\x12"
  "\x81\x85\x02\x83\x01\x10\x81\x83\x02\x82\x01\x0e\x81\x87\x02\x81"
  "\x01\x0c\x81\x85\x02\x80\x01\x0a\x81\x85\x02\x7f\x08\x81\x83\x02"
  "\x7e\x06\x83\x04\x7d\x04\x81\x83\x02\x17\x26\x42\x02\x29\x04\x40"
  "\x04\x41\x03\x8d\x01\x0e\x81\x85\x02\x8c\x01\x0c\x81\x83\x02\x8b"
  "\x01\x0a\x81\x85\x02\x8a\x01\x08\x81\x83\x02\x89\x01\x06\x83\x04"
  "\x88\x01\x04\x81\x83\x02\x0d\x19\x43\x02\x2a\x06\x69\x6e\x64\x65"
  "\x78\x12\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d"
  "\x72\x65\x66\x44\x04\x40\x04\x41\x05\x3a\x04\x94\x01\x10\x81\x85"
  "\x02\x93\x01\x0e\x81\x85\x02\x92\x01\x0c\x81\x87\x02\x91\x01\x0a"
  "\x81\x85\x02\x90\x01\x08\x84\x06\x8f\x01\x06\x81\x85\x02\x8e\x01"
  "\x04\x81\x85\x02\x0f\x1f\x45\x02\x2b\x09\x01\x0b\x0b\x04\x40\x04"
  "\x41\x03\x9f\x01\x18\x81\x87\x02\x9e\x01\x16\x81\x87\x02\x9d\x01"
  "\x14\x81\x87\x02\x9c\x01\x12\x81\x87\x02\x9b\x01\x10\x81\x85\x02"
  "\x9a\x01\x0e\x81\x89\x02\x99\x01\x0c\x81\x87\x02\x98\x01\x0a\x81"
  "\x87\x02\x97\x01\x08\x81\x85\x02\x96\x01\x06\x84\x06\x95\x01\x04"
  "\x81\x85\x02\x17\x27\x46\x02\x2c\x09\x01\x0b\x0b\x04\x40\x04\x41"
  "\x03\xaa\x01\x18\x81\x87\x02\xa9\x01\x16\x81\x87\x02\xa8\x01\x14"
  "\x81\x87\x02\xa7\x01\x12\x81\x87\x02\xa6\x01\x10\x81\x85\x02\xa5"
  "\x01\x0e\x81\x89\x02\xa4\x01\x0c\x81\x87\x02\xa3\x01\x0a\x81\x87"
  "\x02\xa2\x01\x08\x81\x85\x02\xa1\x01\x06\x84\x06\xa0\x01\x04\x81"
  "\x85\x02\x17\x27\x47\x02\x2d\x04\x40\x04\x41\x03\xb1\x01\x10\x81"
  "\x85\x02\xb0\x01\x0e\x81\x89\x02\xaf\x01\x0c\x81\x87\x02\xae\x01"
  "\x0a\x81\x87\x02\xad\x01\x08\x81\x85\x02\xac\x01\x06\x84\x06\xab"
  "\x01\x04\x81\x85\x02\x0f\x1c\x48\x02\x2e\x04\x40\x04\x41\x03\xb8"
  "\x01\x10\x81\x85\x02\xb7\x01\x0e\x81\x89\x02\xb6\x01\x0c\x81\x87"
  "\x02\xb5\x01\x0a\x81\x87\x02\xb4\x01\x08\x81\x85\x02\xb3\x01\x06"
  "\x84\x06\xb2\x01\x04\x81\x85\x02\x0f\x1c\x49\x02\x2f\x09\x01\x0b"
  "\x0b\x04\x40\x04\x41\x04\x0a\x63\x68\x61\x72\x2d\x63\x69\x3d\x3f"
  "\x4a\x04\xc4\x01\x1a\x81\x87\x02\xc3\x01\x18\x81\x87\x02\xc2\x01"
  "\x16\x81\x87\x02\xc1\x01\x14\x81\x87\x02\xc0\x01\x12\x81\x87\x02"
  "\xbf\x01\x10\x81\x85\x02\xbe\x01\x0e\x81\x89\x02\xbd\x01\x0c\x81"
  "\x87\x02\xbc\x01\x0a\x81\x87\x02\xbb\x01\x08\x81\x85\x02\xba\x01"
  "\x06\x84\x06\xb9\x01\x04\x81\x85\x02\x19\x2b\x4b\x02\x30\x09\x01"
  "\x0b\x0b\x04\x40\x04\x41\x04\x4a\x04\xd0\x01\x1a\x81\x87\x02\xcf"
  "\x01\x18\x81\x87\x02\xce\x01\x16\x81\x87\x02\xcd\x01\x14\x81\x87"
  "\x02\xcc\x01\x12\x81\x87\x02\xcb\x01\x10\x81\x85\x02\xca\x01\x0e"
  "\x81\x89\x02\xc9\x01\x0c\x81\x87\x02\xc8\x01\x0a\x81\x87\x02\xc7"
  "\x01\x08\x81\x85\x02\xc6\x01\x06\x84\x06\xc5\x01\x04\x81\x85\x02"
  "\x19\x2b\x4c\x02\x31\x04\x40\x04\x41\x04\x4a\x04\xd7\x01\x10\x81"
  "\x85\x02\xd6\x01\x0e\x81\x89\x02\xd5\x01\x0c\x81\x87\x02\xd4\x01"
  "\x0a\x81\x87\x02\xd3\x01\x08\x81\x85\x02\xd2\x01\x06\x84\x06\xd1"
  "\x01\x04\x81\x85\x02\x0f\x1d\x4d\x02\x32\x04\x40\x04\x41\x04\x4a"
  "\x04\xdf\x01\x12\x81\x89\x02\xde\x01\x10\x81\x85\x02\xdd\x01\x0e"
  "\x81\x8d\x02\xdc\x01\x0c\x81\x8b\x02\xdb\x01\x0a\x81\x87\x02\xda"
  "\x01\x08\x81\x85\x02\xd9\x01\x06\x84\x06\xd8\x01\x04\x81\x85\x02"
  "\x11\x20\x4e\x02\x33\x09\x01\x0b\x0b\x04\x40\x04\x41\x04\x11\x63"
  "\x68\x61\x72\x2d\x73\x65\x74\x2d\x6d\x65\x6d\x62\x65\x72\x3f\x4f"
  "\x04\xeb\x01\x1a\x81\x87\x02\xea\x01\x18\x81\x87\x02\xe9\x01\x16"
  "\x81\x87\x02\xe8\x01\x14\x81\x87\x02\xe7\x01\x12\x81\x87\x02\xe6"
  "\x01\x10\x81\x85\x02\xe5\x01\x0e\x81\x89\x02\xe4\x01\x0c\x81\x87"
  "\x02\xe3\x01\x0a\x81\x87\x02\xe2\x01\x08\x81\x85\x02\xe1\x01\x06"
  "\x84\x06\xe0\x01\x04\x81\x85\x02\x19\x2b\x50\x02\x34\x09\x01\x0b"
  "\x0b\x04\x40\x04\x41\x04\x4f\x04\xf7\x01\x1a\x81\x87\x02\xf6\x01"
  "\x18\x81\x87\x02\xf5\x01\x16\x81\x87\x02\xf4\x01\x14\x81\x87\x02"
  "\xf3\x01\x12\x81\x87\x02\xf2\x01\x10\x81\x85\x02\xf1\x01\x0e\x81"
  "\x89\x02\xf0\x01\x0c\x81\x87\x02\xef\x01\x0a\x81\x87\x02\xee\x01"
  "\x08\x81\x85\x02\xed\x01\x06\x84\x06\xec\x01\x04\x81\x85\x02\x19"
  "\x2b\x51\x02\x35\x04\x40\x04\x41\x04\x4f\x04\xfe\x01\x10\x81\x85"
  "\x02\xfd\x01\x0e\x81\x89\x02\xfc\x01\x0c\x81\x87\x02\xfb\x01\x0a"
  "\x81\x87\x02\xfa\x01\x08\x81\x85\x02\xf9\x01\x06\x84\x06\xf8\x01"
  "\x04\x81\x85\x02\x0f\x1d\x52\x02\x36\x04\x40\x04\x41\x04\x4f\x04"
  "\x86\x02\x12\x81\x87\x02\x85\x02\x10\x81\x85\x02\x84\x02\x0e\x81"
  "\x8b\x02\x83\x02\x0c\x81\x89\x02\x82\x02\x0a\x81\x87\x02\x81\x02"
  "\x08\x81\x85\x02\x80\x02\x06\x84\x06\xff\x01\x04\x81\x85\x02\x11"
  "\x20\x53\x02\x37\x04\x4f\x02\x87\x02\x04\x84\x06\x03\x4f\x02\x38"
  "\x09\x01\x0b\x0b\x04\x40\x04\x41\x03\x93\x02\x1a\x81\x89\x02\x92"
  "\x02\x18\x81\x89\x02\x91\x02\x16\x81\x89\x02\x90\x02\x14\x81\x89"
  "\x02\x8f\x02\x12\x81\x89\x02\x8e\x02\x10\x81\x87\x02\x8d\x02\x0e"
  "\x81\x8b\x02\x8c\x02\x0c\x81\x89\x02\x8b\x02\x0a\x81\x89\x02\x8a"
  "\x02\x08\x81\x87\x02\x89\x02\x06\x85\x08\x88\x02\x04\x81\x87\x02"
  "\x19\x29\x54\x02\x39\x04\x40\x04\x41\x03\x9a\x02\x10\x81\x89\x02"
  "\x99\x02\x0e\x81\x8d\x02\x98\x02\x0c\x81\x8b\x02\x97\x02\x0a\x81"
  "\x89\x02\x96\x02\x08\x81\x87\x02\x95\x02\x06\x85\x08\x94\x02\x04"
  "\x81\x87\x02\x0f\x1b\x55\x02\x3a\x09\x01\x0b\x0b\x04\x40\x04\x41"
  "\x03\xa6\x02\x1a\x81\x89\x02\xa5\x02\x18\x81\x89\x02\xa4\x02\x16"
  "\x81\x89\x02\xa3\x02\x14\x81\x89\x02\xa2\x02\x12\x81\x89\x02\xa1"
  "\x02\x10\x81\x87\x02\xa0\x02\x0e\x81\x8b\x02\x9f\x02\x0c\x81\x89"
  "\x02\x9e\x02\x0a\x81\x89\x02\x9d\x02\x08\x81\x87\x02\x9c\x02\x06"
  "\x85\x08\x9b\x02\x04\x81\x87\x02\x19\x29\x56\x02\x3b\x04\x40\x04"
  "\x41\x03\xae\x02\x12\x81\x8b\x02\xad\x02\x10\x81\x87\x02\xac\x02"
  "\x0e\x81\x8f\x02\xab\x02\x0c\x81\x8d\x02\xaa\x02\x0a\x81\x89\x02"
  "\xa9\x02\x08\x81\x87\x02\xa8\x02\x06\x85\x08\xa7\x02\x04\x81\x87"
  "\x02\x11\x1e\x57\x02\x3c\x01\x0b\x0b\x73\x74\x72\x69\x6e\x67\x2d"
  "\x72\x65\x66\x58\x0b\x07\x73\x74\x72\x69\x6e\x67\x59\x09\x0e\x73"
  "\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x5a\x03\x1e\x04"
  "\x40\x05\x3a\x03\x19\x04\x41\x06\xce\x02\x42\x81\x8d\x02\xcd\x02"
  "\x40\x81\x8f\x02\xcc\x02\x3e\x81\x8d\x02\xcb\x02\x3c\x81\x8d\x02"
  "\xca\x02\x3a\x81\x8d\x02\xc9\x02\x38\x81\x8d\x02\xc8\x02\x36\x81"
  "\x8d\x02\xc7\x02\x34\x81\x8f\x02\xc6\x02\x32\x81\x8d\x02\xc5\x02"
  "\x30\x81\x87\x02\xc4\x02\x2e\x81\x8d\x02\xc3\x02\x2c\x81\x8d\x02"
  "\xc2\x02\x2a\x81\x8d\x02\xc1\x02\x28\x81\x8d\x02\xc0\x02\x26\x81"
  "\x8d\x02\xbf\x02\x24\x81\x89\x02\xbe\x02\x22\x81\x87\x02\xbd\x02"
  "\x20\x81\x85\x02\xbc\x02\x1e\x81\x89\x02\xbb\x02\x1c\x81\x87\x02"
  "\xba\x02\x1a\x81\x85\x02\xb9\x02\x18\x81\x85\x02\xb8\x02\x16\x81"
  "\x89\x02\xb7\x02\x14\x81\x87\x02\xb6\x02\x12\x81\x85\x02\xb5\x02"
  "\x10\x81\x87\x02\xb4\x02\x0e\x81\x89\x02\xb3\x02\x0c\x81\x87\x02"
  "\xb2\x02\x0a\x81\x85\x02\xb1\x02\x08\x81\x85\x02\xb0\x02\x06\x81"
  "\x85\x02\xaf\x02\x04\x84\x06\x41\x5b\x5b\x02\x3d\x01\x0b\x58\x0b"
  "\x59\x09\x5a\x03\x1e\x04\x40\x05\x3a\x03\x19\x04\x41\x04\x4a\x07"
  "\xf0\x02\x46\x81\x91\x02\xef\x02\x44\x81\x8d\x02\xee\x02\x42\x81"
  "\x8f\x02\xed\x02\x40\x81\x8d\x02\xec\x02\x3e\x81\x8d\x02\xeb\x02"
  "\x3c\x81\x8d\x02\xea\x02\x3a\x81\x8d\x02\xe9\x02\x38\x81\x8d\x02"
  "\xe8\x02\x36\x81\x91\x02\xe7\x02\x34\x81\x8f\x02\xe6\x02\x32\x81"
  "\x8d\x02\xe5\x02\x30\x81\x87\x02\xe4\x02\x2e\x81\x8d\x02\xe3\x02"
  "\x2c\x81\x8d\x02\xe2\x02\x2a\x81\x8d\x02\xe1\x02\x28\x81\x8d\x02"
  "\xe0\x02\x26\x81\x8d\x02\xdf\x02\x24\x81\x89\x02\xde\x02\x22\x81"
  "\x87\x02\xdd\x02\x20\x81\x85\x02\xdc\x02\x1e\x81\x89\x02\xdb\x02"
  "\x1c\x81\x87\x02\xda\x02\x1a\x81\x85\x02\xd9\x02\x18\x81\x85\x02"
  "\xd8\x02\x16\x81\x89\x02\xd7\x02\x14\x81\x87\x02\xd6\x02\x12\x81"
  "\x85\x02\xd5\x02\x10\x81\x87\x02\xd4\x02\x0e\x81\x89\x02\xd3\x02"
  "\x0c\x81\x87\x02\xd2\x02\x0a\x81\x85\x02\xd1\x02\x08\x81\x85\x02"
  "\xd0\x02\x06\x81\x85\x02\xcf\x02\x04\x84\x06\x45\x61\x5c\x02\x3e"
  "\x58\x59\x5a\x03\x1e\x04\x40\x05\x3a\x03\x19\x04\x41\x06\x88\x03"
  "\x32\x81\x8d\x02\x87\x03\x30\x81\x8b\x02\x86\x03\x2e\x81\x8b\x02"
  "\x85\x03\x2c\x81\x8d\x02\x84\x03\x2a\x81\x8b\x02\x83\x03\x28\x81"
  "\x87\x02\x82\x03\x26\x81\x8b\x02\x81\x03\x24\x81\x8b\x02\x80\x03"
  "\x22\x81\x8b\x02\xff\x02\x20\x81\x87\x02\xfe\x02\x1e\x81\x85\x02"
  "\xfd\x02\x1c\x81\x89\x02\xfc\x02\x1a\x81\x87\x02\xfb\x02\x18\x81"
  "\x85\x02\xfa\x02\x16\x81\x85\x02\xf9\x02\x14\x81\x87\x02\xf8\x02"
  "\x12\x81\x85\x02\xf7\x02\x10\x81\x87\x02\xf6\x02\x0e\x81\x89\x02"
  "\xf5\x02\x0c\x81\x87\x02\xf4\x02\x0a\x81\x85\x02\xf3\x02\x08\x81"
  "\x85\x02\xf2\x02\x06\x81\x85\x02\xf1\x02\x04\x84\x06\x31\x48\x5d"
  "\x02\x3f\x58\x59\x5a\x03\x1e\x04\x40\x05\x3a\x03\x19\x04\x41\x04"
  "\x4a\x07\xa2\x03\x36\x81\x8f\x02\xa1\x03\x34\x81\x8d\x02\xa0\x03"
  "\x32\x81\x8b\x02\x9f\x03\x30\x81\x8b\x02\x9e\x03\x2e\x81\x8f\x02"
  "\x9d\x03\x2c\x81\x8d\x02\x9c\x03\x2a\x81\x8b\x02\x9b\x03\x28\x81"
  "\x87\x02\x9a\x03\x26\x81\x8b\x02\x99\x03\x24\x81\x8b\x02\x98\x03"
  "\x22\x81\x8b\x02\x97\x03\x20\x81\x87\x02\x96\x03\x1e\x81\x85\x02"
  "\x95\x03\x1c\x81\x89\x02\x94\x03\x1a\x81\x87\x02\x93\x03\x18\x81"
  "\x85\x02\x92\x03\x16\x81\x85\x02\x91\x03\x14\x81\x87\x02\x90\x03"
  "\x12\x81\x85\x02\x8f\x03\x10\x81\x87\x02\x8e\x03\x0e\x81\x89\x02"
  "\x8d\x03\x0c\x81\x87\x02\x8c\x03\x0a\x81\x85\x02\x8b\x03\x08\x81"
  "\x85\x02\x8a\x03\x06\x81\x85\x02\x89\x03\x04\x84\x06\x35\x4e\x5e"
  "\x02\x40\x59\x5a\x0b\x73\x74\x72\x69\x6e\x67\x2d\x72\x65\x66\x5a"
  "\x41\x03\x03\x1e\x05\x3a\x03\x19\x04\xa8\x03\x0e\x81\x8f\x02\xa7"
  "\x03\x0c\x81\x8f\x02\xa6\x03\x0a\x81\x8f\x02\xa5\x03\x08\x81\x8f"
  "\x02\xa4\x03\x06\x81\x89\x02\xa3\x03\x04\x86\x0a\x0d\x1d\x59\x02"
  "\x41\x01\x0b\x58\x0b\x07\x73\x74\x72\x69\x6e\x67\x5f\x09\x03\x1e"
  "\x05\x3a\x04\x40\x04\x41\x05\xc2\x03\x36\x81\x91\x02\xc1\x03\x34"
  "\x81\x91\x02\xc0\x03\x32\x81\x93\x02\xbf\x03\x30\x81\x93\x02\xbe"
  "\x03\x2e\x81\x91\x02\xbd\x03\x2c\x81\x91\x02\xbc\x03\x2a\x81\x91"
  "\x02\xbb\x03\x28\x81\x91\x02\xba\x03\x26\x81\x91\x02\xb9\x03\x24"
  "\x81\x91\x02\xb8\x03\x22\x81\x91\x02\xb7\x03\x20\x81\x91\x02\xb6"
  "\x03\x1e\x81\x8d\x02\xb5\x03\x1c\x81\x8b\x02\xb4\x03\x1a\x81\x89"
  "\x02\xb3\x03\x18\x81\x8b\x02\xb2\x03\x16\x81\x89\x02\xb1\x03\x14"
  "\x81\x8d\x02\xb0\x03\x12\x81\x8b\x02\xaf\x03\x10\x81\x89\x02\xae"
  "\x03\x0e\x81\x8b\x02\xad\x03\x0c\x81\x89\x02\xac\x03\x0a\x81\x89"
  "\x02\xab\x03\x08\x81\x89\x02\xaa\x03\x06\x81\x89\x02\xa9\x03\x04"
  "\x86\x0a\x35\x4b\x60\x02\x42\x01\x0b\x58\x0b\x5f\x09\x03\x1e\x05"
  "\x3a\x04\x40\x04\x41\x04\x4a\x06\xde\x03\x3a\x81\x91\x02\xdd\x03"
  "\x38\x81\x95\x02\xdc\x03\x36\x81\x91\x02\xdb\x03\x34\x81\x95\x02"
  "\xda\x03\x32\x81\x93\x02\xd9\x03\x30\x81\x91\x02\xd8\x03\x2e\x81"
  "\x93\x02\xd7\x03\x2c\x81\x91\x02\xd6\x03\x2a\x81\x91\x02\xd5\x03"
  "\x28\x81\x91\x02\xd4\x03\x26\x81\x91\x02\xd3\x03\x24\x81\x91\x02"
  "\xd2\x03\x22\x81\x91\x02\xd1\x03\x20\x81\x91\x02\xd0\x03\x1e\x81"
  "\x8d\x02\xcf\x03\x1c\x81\x8b\x02\xce\x03\x1a\x81\x89\x02\xcd\x03"
  "\x18\x81\x8b\x02\xcc\x03\x16\x81\x89\x02\xcb\x03\x14\x81\x8d\x02"
  "\xca\x03\x12\x81\x8b\x02\xc9\x03\x10\x81\x89\x02\xc8\x03\x0e\x81"
  "\x8b\x02\xc7\x03\x0c\x81\x89\x02\xc6\x03\x0a\x81\x89\x02\xc5\x03"
  "\x08\x81\x89\x02\xc4\x03\x06\x81\x89\x02\xc3\x03\x04\x86\x0a\x39"
  "\x51\x61\x02\x43\x58\x5f\x03\x1e\x05\x3a\x04\x40\x04\x41\x05\xf0"
  "\x03\x26\x81\x91\x02\xef\x03\x24\x81\x91\x02\xee\x03\x22\x81\x8f"
  "\x02\xed\x03\x20\x81\x8f\x02\xec\x03\x1e\x81\x8f\x02\xeb\x03\x1c"
  "\x81\x8f\x02\xea\x03\x1a\x81\x8b\x02\xe9\x03\x18\x81\x89\x02\xe8"
  "\x03\x16\x81\x8b\x02\xe7\x03\x14\x81\x89\x02\xe6\x03\x12\x81\x8b"
  "\x02\xe5\x03\x10\x81\x89\x02\xe4\x03\x0e\x81\x8b\x02\xe3\x03\x0c"
  "\x81\x89\x02\xe2\x03\x0a\x81\x89\x02\xe1\x03\x08\x81\x89\x02\xe0"
  "\x03\x06\x81\x89\x02\xdf\x03\x04\x86\x0a\x25\x38\x62\x02\x44\x58"
  "\x5f\x03\x1e\x05\x3a\x04\x40\x04\x41\x04\x4a\x06\x84\x04\x2a\x81"
  "\x93\x02\x83\x04\x28\x81\x93\x02\x82\x04\x26\x81\x91\x02\x81\x04"
  "\x24\x81\x8f\x02\x80\x04\x22\x81\x91\x02\xff\x03\x20\x81\x8f\x02"
  "\xfe\x03\x1e\x81\x8f\x02\xfd\x03\x1c\x81\x8f\x02\xfc\x03\x1a\x81"
  "\x8b\x02\xfb\x03\x18\x81\x89\x02\xfa\x03\x16\x81\x8b\x02\xf9\x03"
  "\x14\x81\x89\x02\xf8\x03\x12\x81\x8b\x02\xf7\x03\x10\x81\x89\x02"
  "\xf6\x03\x0e\x81\x8b\x02\xf5\x03\x0c\x81\x89\x02\xf4\x03\x0a\x81"
  "\x89\x02\xf3\x03\x08\x81\x89\x02\xf2\x03\x06\x81\x89\x02\xf1\x03"
  "\x04\x86\x0a\x29\x3e\x58\x02\x45\x5f\x5a\x41\x03\x03\x1e\x05\x3a"
  "\x03\x88\x04\x0a\x81\x8f\x02\x87\x04\x08\x81\x8f\x02\x86\x04\x06"
  "\x81\x8d\x02\x85\x04\x04\x88\x0e\x09\x15\x5f\x02\x46\x01\x0b\x0b"
  "\x09\x04\x40\x04\x41\x03\x96\x04\x1e\x81\x99\x02\x95\x04\x1c\x81"
  "\x95\x02\x94\x04\x1a\x81\x97\x02\x93\x04\x18\x81\x95\x02\x92\x04"
  "\x16\x81\x95\x02\x91\x04\x14\x81\x95\x02\x90\x04\x12\x81\x95\x02"
  "\x8f\x04\x10\x81\x91\x02\x8e\x04\x0e\x81\x8f\x02\x8d\x04\x0c\x81"
  "\x8d\x02\x8c\x04\x0a\x81\x8f\x02\x8b\x04\x08\x81\x8d\x02\x8a\x04"
  "\x06\x88\x0e\x89\x04\x04\x81\x8d\x02\x1d\x2d\x5a\x02\x47\x04\x40"
  "\x04\x41\x03\xa0\x04\x16\x81\x97\x02\x9f\x04\x14\x81\x95\x02\x9e"
  "\x04\x12\x81\x93\x02\x9d\x04\x10\x81\x93\x02\x9c\x04\x0e\x81\x8f"
  "\x02\x9b\x04\x0c\x81\x8d\x02\x9a\x04\x0a\x81\x8f\x02\x99\x04\x08"
  "\x81\x8d\x02\x98\x04\x06\x88\x0e\x97\x04\x04\x81\x8d\x02\x15\x22"
  "\x4a\x02\x48\x02\x09\x01\x0b\x0b\xa4\x04\x0a\x81\x87\x02\xa3\x04"
  "\x08\x81\x85\x02\xa2\x04\x06\x81\x85\x02\xa1\x04\x04\x84\x06\x09"
  "\x12\x3a\x02\x49\x01\x0b\x0b\x02\x09\x04\x41\x02\xab\x04\x10\x81"
  "\x85\x02\xaa\x04\x0e\x81\x8b\x02\xa9\x04\x0c\x81\x85\x02\xa8\x04"
  "\x0a\x81\x8d\x02\xa7\x04\x08\x81\x87\x02\xa6\x04\x06\x81\x85\x02"
  "\xa5\x04\x04\x84\x06\x0f\x1c\x1e\x02\x4a\x0b\x02\x03\x19\x03\x18"
  "\x03\x13\x77\x69\x74\x68\x6f\x75\x74\x2d\x69\x6e\x74\x65\x72\x72"
  "\x75\x70\x74\x73\x04\x41\x05\x11\x77\x69\x64\x65\x2d\x73\x74\x72"
  "\x69\x6e\x67\x2d\x73\x65\x74\x21\x63\x06\xbc\x04\x24\x81\x8b\x02"
  "\xbb\x04\x22\x81\x89\x02\xba\x04\x20\x81\x87\x02\xb9\x04\x1e\x81"
  "\x87\x02\xb8\x04\x1c\x81\x83\x02\xb7\x04\x1a\x81\x83\x02\xb6\x04"
  "\x18\x81\x83\x02\xb5\x04\x16\x81\x87\x02\xb4\x04\x14\x81\x83\x02"
  "\xb3\x04\x12\x81\x8b\x02\xb2\x04\x10\x81\x8d\x02\xb1\x04\x0e\x81"
  "\x87\x02\xb0\x04\x0c\x81\x85\x02\xaf\x04\x0a\x81\x83\x02\xae\x04"
  "\x08\x81\x87\x02\xad\x04\x06\x81\x83\x02\xac\x04\x04\x83\x04\x23"
  "\x3c\x64\x02\x4b\x04\x40\x02\xbf\x04\x08\x81\x87\x02\xbe\x04\x06"
  "\x81\x85\x02\xbd\x04\x04\x84\x06\x07\x11\x65\x02\x4c\x09\x62\x6c"
  "\x6f\x63\x6b\x69\x6e\x67\x0b\x08\x03\x19\x05\x1f\x05\x1e\x70\x6f"
  "\x72\x74\x2f\x77\x69\x74\x68\x2d\x69\x6e\x70\x75\x74\x2d\x62\x6c"
  "\x6f\x63\x6b\x69\x6e\x67\x2d\x6d\x6f\x64\x65\x06\x1b\x69\x6e\x70"
  "\x75\x74\x2d\x70\x6f\x72\x74\x2f\x72\x65\x61\x64\x2d\x73\x75\x62"
  "\x73\x74\x72\x69\x6e\x67\x21\x05\xd3\x04\x2a\x81\x85\x02\xd2\x04"
  "\x28\x81\x87\x02\xd1\x04\x26\x81\x87\x02\xd0\x04\x24\x81\x87\x02"
  "\xcf\x04\x22\x81\x85\x02\xce\x04\x20\x81\x85\x02\xcd\x04\x1e\x81"
  "\x85\x02\xcc\x04\x1c\x81\x83\x02\xcb\x04\x1a\x81\x8b\x02\xca\x04"
  "\x18\x81\x89\x02\xc9\x04\x16\x81\x89\x02\xc8\x04\x14\x81\x83\x02"
  "\xc7\x04\x12\x81\x83\x02\xc6\x04\x10\x81\x87\x02\xc5\x04\x0e\x81"
  "\x8b\x02\xc4\x04\x0c\x81\x87\x02\xc3\x04\x0a\x81\x87\x02\xc2\x04"
  "\x08\x81\x85\x02\xc1\x04\x06\x81\x85\x02\xc0\x04\x04\x84\x06\x29"
  "\x3e\x0b\x02\x4d\x03\x19\x04\x41\x03\x18\x05\x63\x05\xde\x04\x18"
  "\x81\x8f\x02\xdd\x04\x16\x81\x8d\x02\xdc\x04\x14\x81\x8d\x02\xdb"
  "\x04\x12\x81\x8b\x02\xda\x04\x10\x81\x8b\x02\xd9\x04\x0e\x81\x8b"
  "\x02\xd8\x04\x0c\x81\x8b\x02\xd7\x04\x0a\x81\x8b\x02\xd6\x04\x08"
  "\x81\x89\x02\xd5\x04\x06\x81\x87\x02\xd4\x04\x04\x85\x08\x17\x26"
  "\x63\x4d\x41\x41\x14\x63\x04\x0b\x04\x65\x04\x64\x04\x1e\x04\x3a"
  "\x04\x4a\x06\x5a\x06\x5f\x04\x58\x04\x62\x04\x61\x04\x60\x04\x59"
  "\x04\x5e\x04\x5d\x04\x5c\x04\x5b\x04\x57\x06\x56\x06\x55\x06\x54"
  "\x06\x4f\x04\x53\x06\x52\x06\x51\x06\x50\x06\x4e\x06\x4d\x06\x4c"
  "\x06\x4b\x06\x49\x06\x48\x06\x47\x06\x46\x06\x45\x08\x43\x06\x42"
  "\x06\x3d\x04\x3e\x04\x3b\x04\x38\x04\x37\x04\x35\x04\x33\x04\x31"
  "\x04\x2f\x1f\x40\x17\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x62"
  "\x75\x66\x66\x65\x72\x2d\x63\x68\x61\x72\x73\x1c\x64\x69\x73\x63"
  "\x61\x72\x64\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65"
  "\x72\x2d\x68\x65\x61\x64\x21\x10\x62\x75\x66\x66\x65\x72\x2d\x69"
  "\x6e\x64\x65\x78\x2b\x6e\x21\x18\x69\x6e\x63\x72\x65\x6d\x65\x6e"
  "\x74\x2d\x62\x75\x66\x66\x65\x72\x2d\x69\x6e\x64\x65\x78\x21\x18"
  "\x6d\x61\x74\x63\x68\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d"
  "\x6c\x6f\x6f\x70\x2d\x6e\x61\x15\x6d\x61\x74\x63\x68\x2d\x73\x75"
  "\x62\x73\x74\x72\x69\x6e\x67\x2d\x6c\x6f\x6f\x70\x10\x6d\x61\x74"
  "\x63\x68\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2c\x6d\x61\x74"
  "\x63\x68\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72"
  "\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x63\x69\x2d\x6e\x6f"
  "\x2d\x61\x64\x76\x61\x6e\x63\x65\x29\x6d\x61\x74\x63\x68\x2d\x70"
  "\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x73\x75\x62"
  "\x73\x74\x72\x69\x6e\x67\x2d\x6e\x6f\x2d\x61\x64\x76\x61\x6e\x63"
  "\x65\x21\x6d\x61\x74\x63\x68\x2d\x70\x61\x72\x73\x65\x72\x2d\x62"
  "\x75\x66\x66\x65\x72\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d"
  "\x63\x69\x1e\x6d\x61\x74\x63\x68\x2d\x70\x61\x72\x73\x65\x72\x2d"
  "\x62\x75\x66\x66\x65\x72\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67"
  "\x0d\x6d\x61\x74\x63\x68\x2d\x73\x74\x72\x69\x6e\x67\x29\x6d\x61"
  "\x74\x63\x68\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65"
  "\x72\x2d\x73\x74\x72\x69\x6e\x67\x2d\x63\x69\x2d\x6e\x6f\x2d\x61"
  "\x64\x76\x61\x6e\x63\x65\x26\x6d\x61\x74\x63\x68\x2d\x70\x61\x72"
  "\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x73\x74\x72\x69\x6e"
  "\x67\x2d\x6e\x6f\x2d\x61\x64\x76\x61\x6e\x63\x65\x1e\x6d\x61\x74"
  "\x63\x68\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72"
  "\x2d\x73\x74\x72\x69\x6e\x67\x2d\x63\x69\x1b\x6d\x61\x74\x63\x68"
  "\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x73"
  "\x74\x72\x69\x6e\x67\x1a\x6d\x61\x74\x63\x68\x2d\x63\x68\x61\x72"
  "\x2d\x6e\x6f\x74\x2d\x6e\x6f\x2d\x61\x64\x76\x61\x6e\x63\x65\x0f"
  "\x6d\x61\x74\x63\x68\x2d\x63\x68\x61\x72\x2d\x6e\x6f\x74\x16\x6d"
  "\x61\x74\x63\x68\x2d\x63\x68\x61\x72\x2d\x6e\x6f\x2d\x61\x64\x76"
  "\x61\x6e\x63\x65\x0b\x6d\x61\x74\x63\x68\x2d\x63\x68\x61\x72\x0d"
  "\x63\x68\x61\x72\x2d\x69\x6e\x2d\x73\x65\x74\x3f\x2f\x6d\x61\x74"
  "\x63\x68\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72"
  "\x2d\x63\x68\x61\x72\x2d\x6e\x6f\x74\x2d\x69\x6e\x2d\x73\x65\x74"
  "\x2d\x6e\x6f\x2d\x61\x64\x76\x61\x6e\x63\x65\x2b\x6d\x61\x74\x63"
  "\x68\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d"
  "\x63\x68\x61\x72\x2d\x69\x6e\x2d\x73\x65\x74\x2d\x6e\x6f\x2d\x61"
  "\x64\x76\x61\x6e\x63\x65\x24\x6d\x61\x74\x63\x68\x2d\x70\x61\x72"
  "\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x63\x68\x61\x72\x2d"
  "\x6e\x6f\x74\x2d\x69\x6e\x2d\x73\x65\x74\x20\x6d\x61\x74\x63\x68"
  "\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x63"
  "\x68\x61\x72\x2d\x69\x6e\x2d\x73\x65\x74\x2b\x6d\x61\x74\x63\x68"
  "\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x6e"
  "\x6f\x74\x2d\x63\x68\x61\x72\x2d\x63\x69\x2d\x6e\x6f\x2d\x61\x64"
  "\x76\x61\x6e\x63\x65\x27\x6d\x61\x74\x63\x68\x2d\x70\x61\x72\x73"
  "\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x63\x68\x61\x72\x2d\x63"
  "\x69\x2d\x6e\x6f\x2d\x61\x64\x76\x61\x6e\x63\x65\x20\x6d\x61\x74"
  "\x63\x68\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72"
  "\x2d\x6e\x6f\x74\x2d\x63\x68\x61\x72\x2d\x63\x69\x1c\x6d\x61\x74"
  "\x63\x68\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72"
  "\x2d\x63\x68\x61\x72\x2d\x63\x69\x28\x6d\x61\x74\x63\x68\x2d\x70"
  "\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x6e\x6f\x74"
  "\x2d\x63\x68\x61\x72\x2d\x6e\x6f\x2d\x61\x64\x76\x61\x6e\x63\x65"
  "\x24\x6d\x61\x74\x63\x68\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75"
  "\x66\x66\x65\x72\x2d\x63\x68\x61\x72\x2d\x6e\x6f\x2d\x61\x64\x76"
  "\x61\x6e\x63\x65\x1d\x6d\x61\x74\x63\x68\x2d\x70\x61\x72\x73\x65"
  "\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x6e\x6f\x74\x2d\x63\x68\x61"
  "\x72\x19\x6d\x61\x74\x63\x68\x2d\x70\x61\x72\x73\x65\x72\x2d\x62"
  "\x75\x66\x66\x65\x72\x2d\x63\x68\x61\x72\x44\x21\x18\x72\x65\x61"
  "\x64\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d"
  "\x63\x68\x61\x72\x14\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66"
  "\x65\x72\x2d\x65\x72\x72\x6f\x72\x3f\x34\x36\x17\x67\x65\x74\x2d"
  "\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x74\x61"
  "\x69\x6c\x1b\x73\x65\x74\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75"
  "\x66\x66\x65\x72\x2d\x70\x6f\x69\x6e\x74\x65\x72\x21\x3c\x39\x2f"
  "\x32\x1b\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d"
  "\x70\x6f\x69\x6e\x74\x65\x72\x2d\x6c\x69\x6e\x65\x1c\x70\x61\x72"
  "\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x70\x6f\x69\x6e\x74"
  "\x65\x72\x2d\x69\x6e\x64\x65\x78\x30\x04\x2f\x04\x1a\x72\x74\x64"
  "\x3a\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x70"
  "\x6f\x69\x6e\x74\x65\x72\x65\x16\x70\x61\x72\x73\x65\x72\x2d\x62"
  "\x75\x66\x66\x65\x72\x2d\x70\x6f\x69\x6e\x74\x65\x72\x06\x69\x6e"
  "\x64\x65\x78\x64\x05\x6c\x69\x6e\x65\x63\x15\x0e\x2a\x70\x61\x72"
  "\x73\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x27\x0e\x2a\x70\x61\x72\x73"
  "\x65\x2d\x73\x74\x72\x69\x6e\x67\x2b\x0e\x2a\x6d\x61\x74\x63\x68"
  "\x2d\x73\x79\x6d\x62\x6f\x6c\x28\x0e\x2a\x6d\x61\x74\x63\x68\x2d"
  "\x73\x74\x72\x69\x6e\x67\x23\x0b\x6d\x69\x6e\x2d\x6c\x65\x6e\x67"
  "\x74\x68\x1d\x25\x17\x0f\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66"
  "\x66\x65\x72\x3f\x0e\x2e\x04\x2d\x04\x2c\x04\x2a\x04\x29\x04\x26"
  "\x04\x24\x04\x22\x04\x81\x02\x20\x04\x1c\x04\x1b\x04\x16\x04\x0e"
  "\x1a\x18\x73\x65\x74\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66"
  "\x66\x65\x72\x2d\x6c\x69\x6e\x65\x21\x1b\x73\x65\x74\x2d\x70\x61"
  "\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x61\x74\x2d\x65"
  "\x6e\x64\x3f\x21\x18\x73\x65\x74\x2d\x70\x61\x72\x73\x65\x72\x2d"
  "\x62\x75\x66\x66\x65\x72\x2d\x70\x6f\x72\x74\x21\x19\x73\x65\x74"
  "\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x69"
  "\x6e\x64\x65\x78\x21\x1f\x73\x65\x74\x2d\x70\x61\x72\x73\x65\x72"
  "\x2d\x62\x75\x66\x66\x65\x72\x2d\x62\x61\x73\x65\x2d\x6f\x66\x66"
  "\x73\x65\x74\x21\x17\x73\x65\x74\x2d\x70\x61\x72\x73\x65\x72\x2d"
  "\x62\x75\x66\x66\x65\x72\x2d\x65\x6e\x64\x21\x19\x73\x65\x74\x2d"
  "\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x73\x74"
  "\x61\x72\x74\x21\x1a\x73\x65\x74\x2d\x70\x61\x72\x73\x65\x72\x2d"
  "\x62\x75\x66\x66\x65\x72\x2d\x73\x74\x72\x69\x6e\x67\x21\x13\x70"
  "\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x6c\x69\x6e"
  "\x65\x16\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d"
  "\x61\x74\x2d\x65\x6e\x64\x3f\x13\x70\x61\x72\x73\x65\x72\x2d\x62"
  "\x75\x66\x66\x65\x72\x2d\x70\x6f\x72\x74\x14\x70\x61\x72\x73\x65"
  "\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x69\x6e\x64\x65\x78\x1a\x70"
  "\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x62\x61\x73"
  "\x65\x2d\x6f\x66\x66\x73\x65\x74\x12\x70\x61\x72\x73\x65\x72\x2d"
  "\x62\x75\x66\x66\x65\x72\x2d\x65\x6e\x64\x14\x70\x61\x72\x73\x65"
  "\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x73\x74\x61\x72\x74\x15\x70"
  "\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x73\x74\x72"
  "\x69\x6e\x67\x11\x13\x04\x12\x04\x11\x04\x10\x04\x0f\x04\x0e\x04"
  "\x0d\x04\x0c\x04\x0a\x04\x09\x04\x04\x04\x04\x04\x04\x04\x11\x11"
  "\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74"
  "\x12\x72\x74\x64\x3a\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66"
  "\x65\x72\x62\x0e\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65"
  "\x72\x07\x73\x74\x72\x69\x6e\x67\x06\x73\x74\x61\x72\x74\x04\x65"
  "\x6e\x64\x0c\x62\x61\x73\x65\x2d\x6f\x66\x66\x73\x65\x74\x64\x05"
  "\x70\x6f\x72\x74\x08\x61\x74\x2d\x65\x6e\x64\x3f\x63\x06\x11\x6d"
  "\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x03"
  "\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x69\x73"
  "\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x05\x10\x64\x65\x66\x69\x6e"
  "\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x04\x62\x65\x03\x18\x32"
  "\x80\x80\x04\x17\x30\x81\x81\x02\x16\x2e\x81\x81\x02\x15\x2c\x81"
  "\x85\x02\x14\x2a\x81\x83\x02\x13\x28\x81\x87\x02\x12\x26\x81\x87"
  "\x02\x11\x24\x81\x83\x02\x10\x22\x81\x85\x02\x0f\x20\x81\x83\x02"
  "\x0e\x1e\x81\x85\x02\x0d\x1c\x81\x87\x02\x0c\x1a\x81\x83\x02\x0b"
  "\x18\x81\x83\x02\x0a\x16\x81\x85\x02\x09\x14\x81\x83\x02\x08\x12"
  "\x81\x93\x02\x07\x10\x81\x87\x02\x06\x0e\x81\x83\x02\x05\x0c\x81"
  "\x85\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x85\x02\x02\x06\x81\x87"
  "\x02\x01\x04\x81\x83\x02\x31\x54";

SCHEME_OBJECT *
parser_buffer_so_data_033fb56ec8a561d8 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_parser_buffer_so_data_033fb56ec8a561d8 [0]))), (sizeof (prog_parser_buffer_so_data_033fb56ec8a561d8)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_32]));
}

DECLARE_COMPILED_DATA_NS ("parser-buffer.so", parser_buffer_so_data_033fb56ec8a561d8)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("parser-buffer.so", "a3b500e33e4477fc")
