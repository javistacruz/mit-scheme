/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:36-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 8
#define DEBUGGING_LABEL_1_2 7
#define EXECUTE_CACHE_1_5 5
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
#define LABEL_2_5 5
#define LABEL_2_7 7
#define ENVIRONMENT_LABEL_2_3 17
#define DEBUGGING_LABEL_2_2 16
#define OBJECT_2_2 15
#define OBJECT_2_1 14
#define OBJECT_2_0 13
#define EXECUTE_CACHE_2_8 9
#define EXECUTE_CACHE_2_6 11
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

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
graphics_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto graphics_device_type_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_type_name_3)
DEFLABEL (graphics_device_type_name_0)
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
graphics_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto graphics_device_type_operation_availableP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_type_operation_availableP_3)
DEFLABEL (graphics_device_type_operation_availableP_0)
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
graphics_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto graphics_device_type_operation_clear_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_type_operation_clear_3)
DEFLABEL (graphics_device_type_operation_clear_0)
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
graphics_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto graphics_device_type_operation_close_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_type_operation_close_3)
DEFLABEL (graphics_device_type_operation_close_0)
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
graphics_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto graphics_device_type_operation_coordinate_limits_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_type_operation_coordinate_limits_3)
DEFLABEL (graphics_device_type_operation_coordinate_limits_0)
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
graphics_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto graphics_device_type_operation_device_coordinate_limits_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_type_operation_device_coordinate_limits_3)
DEFLABEL (graphics_device_type_operation_device_coordinate_limits_0)
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
graphics_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto graphics_device_type_operation_drag_cursor_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_type_operation_drag_cursor_3)
DEFLABEL (graphics_device_type_operation_drag_cursor_0)
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
graphics_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto graphics_device_type_operation_draw_line_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_type_operation_draw_line_3)
DEFLABEL (graphics_device_type_operation_draw_line_0)
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
graphics_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto graphics_device_type_operation_draw_point_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_type_operation_draw_point_3)
DEFLABEL (graphics_device_type_operation_draw_point_0)
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
graphics_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto graphics_device_type_operation_draw_text_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_type_operation_draw_text_3)
DEFLABEL (graphics_device_type_operation_draw_text_0)
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
#define ENVIRONMENT_LABEL_13_3 7
#define DEBUGGING_LABEL_13_2 6
#define OBJECT_13_1 5
#define OBJECT_13_0 4
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto graphics_device_type_operation_flush_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_type_operation_flush_3)
DEFLABEL (graphics_device_type_operation_flush_0)
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
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [12]);
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
graphics_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto graphics_device_type_operation_move_cursor_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_type_operation_move_cursor_3)
DEFLABEL (graphics_device_type_operation_move_cursor_0)
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
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [13]);
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
graphics_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto graphics_device_type_operation_open_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_type_operation_open_3)
DEFLABEL (graphics_device_type_operation_open_0)
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
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [14]);
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
graphics_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto graphics_device_type_operation_reset_clip_rectangle_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_type_operation_reset_clip_rectangle_3)
DEFLABEL (graphics_device_type_operation_reset_clip_rectangle_0)
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
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [15]);
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
graphics_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto graphics_device_type_operation_set_clip_rectangle_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_type_operation_set_clip_rectangle_3)
DEFLABEL (graphics_device_type_operation_set_clip_rectangle_0)
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
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [16]);
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
graphics_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto graphics_device_type_operation_set_coordinate_limits_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_type_operation_set_coordinate_limits_3)
DEFLABEL (graphics_device_type_operation_set_coordinate_limits_0)
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
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [17]);
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
graphics_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto graphics_device_type_operation_set_drawing_mode_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_type_operation_set_drawing_mode_3)
DEFLABEL (graphics_device_type_operation_set_drawing_mode_0)
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
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [18]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
graphics_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto graphics_device_type_operation_set_line_style_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_type_operation_set_line_style_3)
DEFLABEL (graphics_device_type_operation_set_line_style_0)
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
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [19]);
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
graphics_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto graphics_device_type_custom_operations_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_type_custom_operations_3)
DEFLABEL (graphics_device_type_custom_operations_0)
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
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [20]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 7
#define DEBUGGING_LABEL_22_2 6
#define OBJECT_22_1 5
#define OBJECT_22_0 4
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto graphics_device_type_properties_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_type_properties_3)
DEFLABEL (graphics_device_type_properties_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_22_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 20L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [21]);
  Rsp = (& (Rsp [2]));
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
graphics_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto graphics_device_typeP_4;

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

DEFLABEL (graphics_device_typeP_10)
DEFLABEL (graphics_device_typeP_4)
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
#define LABEL_24_9 7
#define LABEL_24_10 9
#define LABEL_24_11 11
#define LABEL_24_12 13
#define LABEL_24_13 15
#define LABEL_24_14 17
#define LABEL_24_15 19
#define LABEL_24_16 21
#define LABEL_24_6 23
#define LABEL_24_17 25
#define LABEL_24_18 27
#define LABEL_24_19 29
#define LABEL_24_20 31
#define LABEL_24_21 33
#define LABEL_24_8 35
#define LABEL_24_25 37
#define LABEL_24_24 39
#define LABEL_24_29 41
#define LABEL_24_26 43
#define LABEL_24_28 45
#define LABEL_24_30 47
#define LABEL_24_32 49
#define LABEL_24_33 51
#define LABEL_24_34 53
#define LABEL_24_35 55
#define LABEL_24_36 57
#define LABEL_24_37 59
#define LABEL_24_38 61
#define LABEL_24_39 63
#define LABEL_24_40 65
#define LABEL_24_41 67
#define LABEL_24_42 69
#define LABEL_24_43 71
#define LABEL_24_44 73
#define LABEL_24_45 75
#define LABEL_24_46 77
#define LABEL_24_48 79
#define ENVIRONMENT_LABEL_24_3 123
#define DEBUGGING_LABEL_24_2 122
#define OBJECT_24_26 121
#define OBJECT_24_25 120
#define OBJECT_24_24 119
#define OBJECT_24_23 118
#define OBJECT_24_22 117
#define OBJECT_24_21 116
#define OBJECT_24_20 115
#define OBJECT_24_19 114
#define OBJECT_24_18 113
#define OBJECT_24_17 112
#define OBJECT_24_16 111
#define OBJECT_24_15 110
#define OBJECT_24_14 109
#define OBJECT_24_13 108
#define OBJECT_24_12 107
#define OBJECT_24_11 106
#define OBJECT_24_10 105
#define OBJECT_24_9 104
#define OBJECT_24_8 103
#define OBJECT_24_7 102
#define OBJECT_24_6 101
#define OBJECT_24_5 100
#define OBJECT_24_4 99
#define OBJECT_24_3 98
#define OBJECT_24_2 97
#define OBJECT_24_1 96
#define OBJECT_24_0 95
#define EXECUTE_CACHE_24_49 81
#define EXECUTE_CACHE_24_47 83
#define EXECUTE_CACHE_24_31 85
#define EXECUTE_CACHE_24_27 87
#define EXECUTE_CACHE_24_23 89
#define EXECUTE_CACHE_24_22 91
#define EXECUTE_CACHE_24_7 93
#define FREE_REFERENCES_LABEL_24_0 80
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd68;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd28;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd96;
  machine_word Wrd98;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd95;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd80;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd129;
  machine_word Wrd123;
  machine_word Wrd124;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd114;
  machine_word Wrd116;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_24_4);
      goto make_graphics_device_type_47;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_18;

    case 2:
      current_block = (Rpc - LABEL_24_9);
      goto continuation_9;

    case 3:
      current_block = (Rpc - LABEL_24_10);
      goto label_57;

    case 4:
      current_block = (Rpc - LABEL_24_11);
      goto label_58;

    case 5:
      current_block = (Rpc - LABEL_24_12);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_24_13);
      goto continuation_13;

    case 7:
      current_block = (Rpc - LABEL_24_14);
      goto label_54;

    case 8:
      current_block = (Rpc - LABEL_24_15);
      goto label_55;

    case 9:
      current_block = (Rpc - LABEL_24_16);
      goto label_56;

    case 10:
      current_block = (Rpc - LABEL_24_6);
      goto lambda_17;

    case 11:
      current_block = (Rpc - LABEL_24_17);
      goto label_49;

    case 12:
      current_block = (Rpc - LABEL_24_18);
      goto label_53;

    case 13:
      current_block = (Rpc - LABEL_24_19);
      goto label_50;

    case 14:
      current_block = (Rpc - LABEL_24_20);
      goto label_51;

    case 15:
      current_block = (Rpc - LABEL_24_21);
      goto label_52;

    case 16:
      current_block = (Rpc - LABEL_24_8);
      goto continuation_40;

    case 17:
      current_block = (Rpc - LABEL_24_25);
      goto lambda_23;

    case 18:
      current_block = (Rpc - LABEL_24_24);
      goto continuation_39;

    case 19:
      current_block = (Rpc - LABEL_24_29);
      goto continuation_20;

    case 20:
      current_block = (Rpc - LABEL_24_26);
      goto continuation_19;

    case 21:
      current_block = (Rpc - LABEL_24_28);
      goto continuation_38;

    case 22:
      current_block = (Rpc - LABEL_24_30);
      goto continuation_21;

    case 23:
      current_block = (Rpc - LABEL_24_32);
      goto continuation_37;

    case 24:
      current_block = (Rpc - LABEL_24_33);
      goto continuation_36;

    case 25:
      current_block = (Rpc - LABEL_24_34);
      goto continuation_35;

    case 26:
      current_block = (Rpc - LABEL_24_35);
      goto continuation_34;

    case 27:
      current_block = (Rpc - LABEL_24_36);
      goto continuation_33;

    case 28:
      current_block = (Rpc - LABEL_24_37);
      goto continuation_32;

    case 29:
      current_block = (Rpc - LABEL_24_38);
      goto continuation_31;

    case 30:
      current_block = (Rpc - LABEL_24_39);
      goto continuation_30;

    case 31:
      current_block = (Rpc - LABEL_24_40);
      goto continuation_29;

    case 32:
      current_block = (Rpc - LABEL_24_41);
      goto continuation_28;

    case 33:
      current_block = (Rpc - LABEL_24_42);
      goto continuation_27;

    case 34:
      current_block = (Rpc - LABEL_24_43);
      goto continuation_26;

    case 35:
      current_block = (Rpc - LABEL_24_44);
      goto continuation_25;

    case 36:
      current_block = (Rpc - LABEL_24_45);
      goto continuation_24;

    case 37:
      current_block = (Rpc - LABEL_24_46);
      goto continuation_41;

    case 38:
      current_block = (Rpc - LABEL_24_48);
      goto continuation_42;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_graphics_device_type_60)
DEFLABEL (make_graphics_device_type_47)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = Rvl;
  (Wrd13.pObj) = (& (Rhp [-1]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd13.pObj)));
  (Rsp [0]) = (Wrd14.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_23;

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_24_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_23;

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_24_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [3]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24_11]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_23;

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_24_28);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [4]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24_13]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_23;

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_24_32);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [5]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24_14]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_23;

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_24_33);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [6]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24_15]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_23;

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_24_34);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [7]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24_16]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_23;

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_24_35);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [8]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24_17]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_23;

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_24_36);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [9]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24_18]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_23;

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_24_37);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [10]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24_19]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_23;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_24_38);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [11]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24_20]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_23;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_24_39);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [12]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24_21]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_23;

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_24_40);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [13]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24_22]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_23;

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_24_41);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [14]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24_23]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_23;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_24_42);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [15]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24_24]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_23;

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_24_43);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [16]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24_25]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_23;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_24_44);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [17]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24_26]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_23;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_24_45);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [18]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [18]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [18]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [18]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [18]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [18]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [18]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [18]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [18]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [18]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [18]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [18]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [18]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [18]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [18]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [18]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [18]);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd28.Obj) = (Rsp [37]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_47]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_24_46);
  (Rsp [19]) = Rvl;
  Rsp = (& (Rsp [19]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_48]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_49]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_24_48);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_61)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_24_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_71;

DEFLABEL (label_70)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24_9]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_23]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_24_13);

DEFLABEL (label_69)
  (Wrd83.Obj) = (Rsp [0]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 1))
    goto label_68;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd80.Obj) = ((Wrd82.pObj) [1]);

DEFLABEL (label_67)
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd91.uLng) == 1))
    goto label_66;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd90.Obj) = ((Wrd89.pObj) [0]);
  (* (--Rsp)) = (Wrd90.Obj);

DEFLABEL (label_65)
  (Wrd99.Obj) = (Rsp [1]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if (! ((Wrd100.uLng) == 1))
    goto label_64;
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd96.Obj) = ((Wrd98.pObj) [0]);

DEFLABEL (label_63)
  (Wrd105.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd96.Obj);
  (* (Rhp++)) = (Wrd105.Obj);
  (Wrd108.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd108.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_16]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 1);

DEFLABEL (label_56)
  (Wrd96.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_15]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 1);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_14]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 1);

DEFLABEL (label_54)
  (Wrd80.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_71)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_91;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_90)
  (Wrd70.Obj) = (current_block [OBJECT_24_4]);
  (Wrd73.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd73.Lng))))
    goto label_89;
  (Wrd25.uLng) = (OBJECT_DATUM (Wrd70.Obj));
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd25.Obj) == (Wrd27.Obj))
    goto label_88;

DEFLABEL (label_87)
  (Wrd28.Obj) = (current_block [OBJECT_24_6]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd38.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd38.Lng)))
    goto label_72;
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_5]), 2);

DEFLABEL (label_72)
  (Wrd32.uLng) = (OBJECT_DATUM (Wrd28.Obj));
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd32.Obj) == (Wrd34.Obj))
    goto label_74;
  (Wrd30.Obj) = (current_block [OBJECT_24_8]);
  goto label_73;

DEFLABEL (label_74)
  (Wrd30.Obj) = (current_block [OBJECT_24_7]);

DEFLABEL (label_73)
DEFLABEL (label_86)
  Rsp = (& (Rsp [3]));
  if ((Wrd30.Obj) == ((SCHEME_OBJECT) 0))
    goto label_70;

DEFLABEL (label_85)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_84;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [1]);

DEFLABEL (label_83)
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_70;
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_82;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd53.Obj) = ((Wrd55.pObj) [1]);

DEFLABEL (label_81)
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_80;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (* (--Rsp)) = (Wrd63.Obj);

DEFLABEL (label_79)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_22]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_24_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_70;
  (Wrd117.Obj) = (Rsp [0]);
  (Wrd118.uLng) = (OBJECT_TYPE (Wrd117.Obj));
  if (! ((Wrd118.uLng) == 1))
    goto label_78;
  (Wrd116.pObj) = (OBJECT_ADDRESS (Wrd117.Obj));
  (Wrd114.Obj) = ((Wrd116.pObj) [1]);

DEFLABEL (label_77)
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd114.Obj));
  if (! ((Wrd125.uLng) == 1))
    goto label_76;
  (Wrd124.pObj) = (OBJECT_ADDRESS (Wrd114.Obj));
  (Wrd123.Obj) = ((Wrd124.pObj) [1]);

DEFLABEL (label_75)
  if ((Wrd123.Obj) == (current_block [OBJECT_24_2]))
    goto label_69;
  goto label_70;

DEFLABEL (label_76)
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_11]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 1);

DEFLABEL (label_58)
  (Wrd123.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd117.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 1);

DEFLABEL (label_57)
  (Wrd114.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_21]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 1);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_20]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 1);

DEFLABEL (label_51)
  (Wrd53.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_19]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 1);

DEFLABEL (label_50)
  (Wrd40.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_88)
  Rsp = (& (Rsp [2]));
  goto label_85;

DEFLABEL (label_89)
  (Wrd75.Obj) = (Rsp [0]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_18]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_5]), 2);

DEFLABEL (label_53)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_87;
  goto label_88;

DEFLABEL (label_91)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_17]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 1);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_90;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_70;
  goto label_85;

DEFLABEL (lambda_62)
DEFLABEL (lambda_23)
  INTERRUPT_CHECK (26, LABEL_24_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_27]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_24_26);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_94;

DEFLABEL (label_93)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_30]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_31]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_24_30);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  ((Wrd9.pObj) [0]) = Rvl;
  (Wrd10.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_92;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  Rvl = ((Wrd13.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_92)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 1);

DEFLABEL (label_94)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_29]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_24_12]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_23]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_24_29);
  goto label_93;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_6 5
#define LABEL_25_8 7
#define LABEL_25_5 9
#define ENVIRONMENT_LABEL_25_3 50
#define DEBUGGING_LABEL_25_2 49
#define OBJECT_25_33 48
#define OBJECT_25_32 47
#define OBJECT_25_31 46
#define OBJECT_25_30 45
#define OBJECT_25_29 44
#define OBJECT_25_28 43
#define OBJECT_25_27 42
#define OBJECT_25_26 41
#define OBJECT_25_25 40
#define OBJECT_25_24 39
#define OBJECT_25_23 38
#define OBJECT_25_22 37
#define OBJECT_25_21 36
#define OBJECT_25_20 35
#define OBJECT_25_19 34
#define OBJECT_25_18 33
#define OBJECT_25_17 32
#define OBJECT_25_16 31
#define OBJECT_25_15 30
#define OBJECT_25_14 29
#define OBJECT_25_13 28
#define OBJECT_25_12 27
#define OBJECT_25_11 26
#define OBJECT_25_10 25
#define OBJECT_25_9 24
#define OBJECT_25_8 23
#define OBJECT_25_7 22
#define OBJECT_25_6 21
#define OBJECT_25_5 20
#define OBJECT_25_4 19
#define OBJECT_25_3 18
#define OBJECT_25_2 17
#define OBJECT_25_1 16
#define OBJECT_25_0 15
#define EXECUTE_CACHE_25_9 11
#define EXECUTE_CACHE_25_7 13
#define FREE_REFERENCES_LABEL_25_0 10
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd54;
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
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd55;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd68;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd81;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd94;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd107;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd120;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd133;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd146;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd159;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd180;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd172;
  machine_word Wrd195;
  machine_word Wrd194;
  machine_word Wrd193;
  machine_word Wrd197;
  machine_word Wrd196;
  machine_word Wrd185;
  machine_word Wrd208;
  machine_word Wrd207;
  machine_word Wrd206;
  machine_word Wrd210;
  machine_word Wrd209;
  machine_word Wrd198;
  machine_word Wrd221;
  machine_word Wrd220;
  machine_word Wrd219;
  machine_word Wrd223;
  machine_word Wrd222;
  machine_word Wrd211;
  machine_word Wrd234;
  machine_word Wrd233;
  machine_word Wrd232;
  machine_word Wrd236;
  machine_word Wrd235;
  machine_word Wrd224;
  machine_word Wrd247;
  machine_word Wrd246;
  machine_word Wrd245;
  machine_word Wrd249;
  machine_word Wrd248;
  machine_word Wrd237;
  machine_word Wrd5;
  INVOKE_INTERFACE_DECLS
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
      goto graphics_device_type_operation_20;

    case 1:
      current_block = (Rpc - LABEL_25_6);
      goto label_22;

    case 2:
      current_block = (Rpc - LABEL_25_8);
      goto continuation_17;

    case 3:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_type_operation_24)
DEFLABEL (graphics_device_type_operation_20)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_25_0]))
    goto label_46;
  if ((Wrd5.Obj) == (current_block [OBJECT_25_2]))
    goto label_45;
  if ((Wrd5.Obj) == (current_block [OBJECT_25_4]))
    goto label_44;
  if ((Wrd5.Obj) == (current_block [OBJECT_25_6]))
    goto label_43;
  if ((Wrd5.Obj) == (current_block [OBJECT_25_8]))
    goto label_42;
  if ((Wrd5.Obj) == (current_block [OBJECT_25_10]))
    goto label_41;
  if ((Wrd5.Obj) == (current_block [OBJECT_25_12]))
    goto label_40;
  if ((Wrd5.Obj) == (current_block [OBJECT_25_14]))
    goto label_39;
  if ((Wrd5.Obj) == (current_block [OBJECT_25_16]))
    goto label_38;
  if ((Wrd5.Obj) == (current_block [OBJECT_25_18]))
    goto label_37;
  if ((Wrd5.Obj) == (current_block [OBJECT_25_20]))
    goto label_36;
  if ((Wrd5.Obj) == (current_block [OBJECT_25_22]))
    goto label_35;
  if ((Wrd5.Obj) == (current_block [OBJECT_25_24]))
    goto label_34;
  if ((Wrd5.Obj) == (current_block [OBJECT_25_26]))
    goto label_33;
  if ((Wrd5.Obj) == (current_block [OBJECT_25_28]))
    goto label_29;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 62))
    goto label_28;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd46.Lng))))
    goto label_28;
  (Wrd40.Obj) = ((Wrd44.pObj) [20]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_27)
  (Wrd54.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_26;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_25_32]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_9]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_25_8);

DEFLABEL (label_26)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_25;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_25)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_33]), 1);

DEFLABEL (label_28)
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.Obj) = (current_block [OBJECT_25_31]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_30]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_29)
  (Wrd55.Obj) = (current_block [OBJECT_25_29]);
  (Rsp [1]) = (Wrd55.Obj);
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if ((Wrd67.uLng) == 62)
    goto label_31;

DEFLABEL (label_30)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_30]), 2);

DEFLABEL (label_31)
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd65.Lng))))
    goto label_30;
  Rvl = ((Wrd63.pObj) [19]);

DEFLABEL (label_32)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd68.Obj) = (current_block [OBJECT_25_27]);
  (Rsp [1]) = (Wrd68.Obj);
  (Wrd79.Obj) = (Rsp [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd80.uLng) == 62))
    goto label_30;
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd77.Obj) = ((Wrd76.pObj) [0]);
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd77.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd78.Lng))))
    goto label_30;
  Rvl = ((Wrd76.pObj) [18]);
  goto label_32;

DEFLABEL (label_34)
  (Wrd81.Obj) = (current_block [OBJECT_25_25]);
  (Rsp [1]) = (Wrd81.Obj);
  (Wrd92.Obj) = (Rsp [0]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd93.uLng) == 62))
    goto label_30;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd90.Obj) = ((Wrd89.pObj) [0]);
  (Wrd91.Lng) = (FIXNUM_TO_LONG (Wrd90.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd91.Lng))))
    goto label_30;
  Rvl = ((Wrd89.pObj) [17]);
  goto label_32;

DEFLABEL (label_35)
  (Wrd94.Obj) = (current_block [OBJECT_25_23]);
  (Rsp [1]) = (Wrd94.Obj);
  (Wrd105.Obj) = (Rsp [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if (! ((Wrd106.uLng) == 62))
    goto label_30;
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd103.Obj) = ((Wrd102.pObj) [0]);
  (Wrd104.Lng) = (FIXNUM_TO_LONG (Wrd103.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd104.Lng))))
    goto label_30;
  Rvl = ((Wrd102.pObj) [16]);
  goto label_32;

DEFLABEL (label_36)
  (Wrd107.Obj) = (current_block [OBJECT_25_21]);
  (Rsp [1]) = (Wrd107.Obj);
  (Wrd118.Obj) = (Rsp [0]);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if (! ((Wrd119.uLng) == 62))
    goto label_30;
  (Wrd115.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd116.Obj) = ((Wrd115.pObj) [0]);
  (Wrd117.Lng) = (FIXNUM_TO_LONG (Wrd116.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd117.Lng))))
    goto label_30;
  Rvl = ((Wrd115.pObj) [15]);
  goto label_32;

DEFLABEL (label_37)
  (Wrd120.Obj) = (current_block [OBJECT_25_19]);
  (Rsp [1]) = (Wrd120.Obj);
  (Wrd131.Obj) = (Rsp [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if (! ((Wrd132.uLng) == 62))
    goto label_30;
  (Wrd128.pObj) = (OBJECT_ADDRESS (Wrd131.Obj));
  (Wrd129.Obj) = ((Wrd128.pObj) [0]);
  (Wrd130.Lng) = (FIXNUM_TO_LONG (Wrd129.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd130.Lng))))
    goto label_30;
  Rvl = ((Wrd128.pObj) [13]);
  goto label_32;

DEFLABEL (label_38)
  (Wrd133.Obj) = (current_block [OBJECT_25_17]);
  (Rsp [1]) = (Wrd133.Obj);
  (Wrd144.Obj) = (Rsp [0]);
  (Wrd145.uLng) = (OBJECT_TYPE (Wrd144.Obj));
  if (! ((Wrd145.uLng) == 62))
    goto label_30;
  (Wrd141.pObj) = (OBJECT_ADDRESS (Wrd144.Obj));
  (Wrd142.Obj) = ((Wrd141.pObj) [0]);
  (Wrd143.Lng) = (FIXNUM_TO_LONG (Wrd142.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd143.Lng))))
    goto label_30;
  Rvl = ((Wrd141.pObj) [12]);
  goto label_32;

DEFLABEL (label_39)
  (Wrd146.Obj) = (current_block [OBJECT_25_15]);
  (Rsp [1]) = (Wrd146.Obj);
  (Wrd157.Obj) = (Rsp [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if (! ((Wrd158.uLng) == 62))
    goto label_30;
  (Wrd154.pObj) = (OBJECT_ADDRESS (Wrd157.Obj));
  (Wrd155.Obj) = ((Wrd154.pObj) [0]);
  (Wrd156.Lng) = (FIXNUM_TO_LONG (Wrd155.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd156.Lng))))
    goto label_30;
  Rvl = ((Wrd154.pObj) [11]);
  goto label_32;

DEFLABEL (label_40)
  (Wrd159.Obj) = (current_block [OBJECT_25_13]);
  (Rsp [1]) = (Wrd159.Obj);
  (Wrd170.Obj) = (Rsp [0]);
  (Wrd171.uLng) = (OBJECT_TYPE (Wrd170.Obj));
  if (! ((Wrd171.uLng) == 62))
    goto label_30;
  (Wrd167.pObj) = (OBJECT_ADDRESS (Wrd170.Obj));
  (Wrd168.Obj) = ((Wrd167.pObj) [0]);
  (Wrd169.Lng) = (FIXNUM_TO_LONG (Wrd168.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd169.Lng))))
    goto label_30;
  Rvl = ((Wrd167.pObj) [10]);
  goto label_32;

DEFLABEL (label_41)
  (Wrd172.Obj) = (current_block [OBJECT_25_11]);
  (Rsp [1]) = (Wrd172.Obj);
  (Wrd183.Obj) = (Rsp [0]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if (! ((Wrd184.uLng) == 62))
    goto label_30;
  (Wrd180.pObj) = (OBJECT_ADDRESS (Wrd183.Obj));
  (Wrd181.Obj) = ((Wrd180.pObj) [0]);
  (Wrd182.Lng) = (FIXNUM_TO_LONG (Wrd181.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd182.Lng))))
    goto label_30;
  Rvl = ((Wrd180.pObj) [9]);
  goto label_32;

DEFLABEL (label_42)
  (Wrd185.Obj) = (current_block [OBJECT_25_9]);
  (Rsp [1]) = (Wrd185.Obj);
  (Wrd196.Obj) = (Rsp [0]);
  (Wrd197.uLng) = (OBJECT_TYPE (Wrd196.Obj));
  if (! ((Wrd197.uLng) == 62))
    goto label_30;
  (Wrd193.pObj) = (OBJECT_ADDRESS (Wrd196.Obj));
  (Wrd194.Obj) = ((Wrd193.pObj) [0]);
  (Wrd195.Lng) = (FIXNUM_TO_LONG (Wrd194.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd195.Lng))))
    goto label_30;
  Rvl = ((Wrd193.pObj) [8]);
  goto label_32;

DEFLABEL (label_43)
  (Wrd198.Obj) = (current_block [OBJECT_25_7]);
  (Rsp [1]) = (Wrd198.Obj);
  (Wrd209.Obj) = (Rsp [0]);
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd209.Obj));
  if (! ((Wrd210.uLng) == 62))
    goto label_30;
  (Wrd206.pObj) = (OBJECT_ADDRESS (Wrd209.Obj));
  (Wrd207.Obj) = ((Wrd206.pObj) [0]);
  (Wrd208.Lng) = (FIXNUM_TO_LONG (Wrd207.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd208.Lng))))
    goto label_30;
  Rvl = ((Wrd206.pObj) [7]);
  goto label_32;

DEFLABEL (label_44)
  (Wrd211.Obj) = (current_block [OBJECT_25_5]);
  (Rsp [1]) = (Wrd211.Obj);
  (Wrd222.Obj) = (Rsp [0]);
  (Wrd223.uLng) = (OBJECT_TYPE (Wrd222.Obj));
  if (! ((Wrd223.uLng) == 62))
    goto label_30;
  (Wrd219.pObj) = (OBJECT_ADDRESS (Wrd222.Obj));
  (Wrd220.Obj) = ((Wrd219.pObj) [0]);
  (Wrd221.Lng) = (FIXNUM_TO_LONG (Wrd220.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd221.Lng))))
    goto label_30;
  Rvl = ((Wrd219.pObj) [6]);
  goto label_32;

DEFLABEL (label_45)
  (Wrd224.Obj) = (current_block [OBJECT_25_3]);
  (Rsp [1]) = (Wrd224.Obj);
  (Wrd235.Obj) = (Rsp [0]);
  (Wrd236.uLng) = (OBJECT_TYPE (Wrd235.Obj));
  if (! ((Wrd236.uLng) == 62))
    goto label_30;
  (Wrd232.pObj) = (OBJECT_ADDRESS (Wrd235.Obj));
  (Wrd233.Obj) = ((Wrd232.pObj) [0]);
  (Wrd234.Lng) = (FIXNUM_TO_LONG (Wrd233.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd234.Lng))))
    goto label_30;
  Rvl = ((Wrd232.pObj) [5]);
  goto label_32;

DEFLABEL (label_46)
  (Wrd237.Obj) = (current_block [OBJECT_25_1]);
  (Rsp [1]) = (Wrd237.Obj);
  (Wrd248.Obj) = (Rsp [0]);
  (Wrd249.uLng) = (OBJECT_TYPE (Wrd248.Obj));
  if (! ((Wrd249.uLng) == 62))
    goto label_30;
  (Wrd245.pObj) = (OBJECT_ADDRESS (Wrd248.Obj));
  (Wrd246.Obj) = ((Wrd245.pObj) [0]);
  (Wrd247.Lng) = (FIXNUM_TO_LONG (Wrd246.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd247.Lng))))
    goto label_30;
  Rvl = ((Wrd245.pObj) [4]);
  goto label_32;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define LABEL_26_7 9
#define LABEL_26_8 11
#define LABEL_26_9 13
#define LABEL_26_10 15
#define LABEL_26_11 17
#define LABEL_26_12 19
#define ENVIRONMENT_LABEL_26_3 32
#define DEBUGGING_LABEL_26_2 31
#define OBJECT_26_6 30
#define OBJECT_26_5 29
#define OBJECT_26_4 28
#define OBJECT_26_3 27
#define OBJECT_26_2 26
#define OBJECT_26_1 25
#define OBJECT_26_0 24
#define FREE_REFERENCE_26_0 21
#define FREE_ASSIGNMENT_26_0 23
#define FREE_REFERENCES_LABEL_26_0 20
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd9;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd49;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_26_4);
      goto add_graphics_type_11;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_26_7);
      goto loop_8;

    case 4:
      current_block = (Rpc - LABEL_26_8);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_26_9);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_26_10);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_26_11);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_26_12);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_graphics_type_21)
DEFLABEL (add_graphics_type_11)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_26;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_26;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_25)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_24;
  Wrd21 = Wrd25;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd21.Obj);
  goto loop_8;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_6])), (Wrd22.pObj));

DEFLABEL (label_14)
  (Wrd21.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_26_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (loop_22)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_26_7);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_26_2]))
    goto label_35;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_34;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_33)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_32;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_32;
  (Wrd16.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_31)
  (Wrd29.Obj) = (Rsp [1]);
  if ((Wrd29.Obj) == (Wrd16.Obj))
    goto label_29;
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_28;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_27)
  (Rsp [0]) = (Wrd30.Obj);
  goto loop_8;

DEFLABEL (label_28)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_12]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_6]), 1);

DEFLABEL (label_17)
  (Wrd30.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_29)
  (Wrd39.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd39.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_30;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = (Rsp [1]);
  ((Wrd42.pObj) [0]) = (Wrd43.Obj);
  Rvl = (current_block [OBJECT_26_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_5]), 2);

DEFLABEL (label_32)
  (Wrd25.Obj) = (current_block [OBJECT_26_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_11]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_16)
  (Wrd16.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_4]), 1);

DEFLABEL (label_15)
  (Wrd7.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_35)
  (Wrd50.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd53.Obj) = ((Wrd50.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_40;
  Wrd49 = Wrd53;

DEFLABEL (label_39)
  (Wrd58.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd57.pObj) = (& (Rhp [-2]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd57.pObj)));
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_26_0]));
  (Wrd67.Obj) = ((Wrd59.pObj) [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if ((Wrd68.uLng) == 50)
    goto label_38;

DEFLABEL (label_37)
  ((Wrd59.pObj) [0]) = (Wrd55.Obj);

DEFLABEL (label_36)
  Rvl = (current_block [OBJECT_26_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_38)
  if ((Wrd67.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_37;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_26_9])), (Wrd59.pObj), (Wrd55.Obj));

DEFLABEL (label_19)
  goto label_36;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_8])), (Wrd50.pObj));

DEFLABEL (label_18)
  (Wrd49.Obj) = Rvl;
  goto label_39;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_9 7
#define LABEL_27_7 9
#define LABEL_27_13 11
#define LABEL_27_14 13
#define LABEL_27_19 15
#define LABEL_27_20 17
#define LABEL_27_10 19
#define LABEL_27_16 21
#define LABEL_27_17 23
#define TAG_27_18 10
#define LABEL_27_22 25
#define LABEL_27_12 27
#define ENVIRONMENT_LABEL_27_3 53
#define DEBUGGING_LABEL_27_2 52
#define OBJECT_27_7 51
#define OBJECT_27_6 50
#define OBJECT_27_5 49
#define OBJECT_27_4 48
#define OBJECT_27_3 47
#define OBJECT_27_2 46
#define OBJECT_27_1 45
#define OBJECT_27_0 44
#define EXECUTE_CACHE_27_23 29
#define EXECUTE_CACHE_27_21 31
#define EXECUTE_CACHE_27_15 33
#define EXECUTE_CACHE_27_11 35
#define EXECUTE_CACHE_27_8 37
#define EXECUTE_CACHE_27_6 39
#define FREE_REFERENCE_27_1 42
#define FREE_REFERENCE_27_0 43
#define FREE_REFERENCES_LABEL_27_0 28
#define NUMBER_OF_LINKER_SECTIONS_27_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd41;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd23;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_27_4);
      goto graphics_type_17;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_27_9);
      goto lambda_5;

    case 3:
      current_block = (Rpc - LABEL_27_7);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_27_13);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_27_14);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_27_19);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_27_20);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_27_10);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_27_16);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_27_17);
      goto lambda_27;

    case 11:
      current_block = (Rpc - LABEL_27_22);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_27_12);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_type_25)
DEFLABEL (graphics_type_17)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_27_0]))
    goto label_29;
  Wrd7 = Wrd5;
  goto label_28;

DEFLABEL (label_29)
  (Wrd7.Obj) = (current_block [OBJECT_27_1]);

DEFLABEL (label_28)
DEFLABEL (label_49)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_27_0]))
    goto label_31;
  Wrd10 = Wrd8;
  goto label_30;

DEFLABEL (label_31)
  (Wrd10.Obj) = (current_block [OBJECT_27_2]);

DEFLABEL (label_30)
DEFLABEL (label_48)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_27_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto lambda_5;

DEFLABEL (label_32)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_8]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_27_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_34;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_34;
  (Wrd9.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_33)
  goto lambda_5;

DEFLABEL (label_34)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_27_3]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_20]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_4]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_35)
  (Wrd23.Obj) = (Rsp [0]);
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_16]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_17])));
  Rhp += 1;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  ((Wrd29.pObj) [2]) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_1]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_39;
  Wrd32 = Wrd36;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_27_16);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  goto lambda_5;

DEFLABEL (label_36)
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_27_6]);
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_21]));

DEFLABEL (label_37)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_19])), (Wrd33.pObj));

DEFLABEL (label_20)
  (Wrd32.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_40)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_12]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd45.Obj) = ((Wrd42.pObj) [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 50)
    goto label_47;
  Wrd41 = Wrd45;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_1]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_45;
  Wrd47 = Wrd51;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_15]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_27_12);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  Rvl = Rvl;

DEFLABEL (label_41)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd9.Obj) = (Rsp [2]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd11.Obj) = (current_block [OBJECT_27_7]);
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_23]));

DEFLABEL (label_43)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_41;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_14])), (Wrd48.pObj));

DEFLABEL (label_22)
  (Wrd47.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_13])), (Wrd42.pObj));

DEFLABEL (label_21)
  (Wrd41.Obj) = Rvl;
  goto label_46;

DEFLABEL (lambda_26)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_27_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_27_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  Rvl = (Rsp [0]);

DEFLABEL (label_50)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd9.Obj) = (Rsp [2]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_52;
  (Wrd11.Obj) = (current_block [OBJECT_27_5]);
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_21]));

DEFLABEL (label_52)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_50;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_27_17);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_57;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_57;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_56)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  if ((Wrd24.Obj) == (Wrd5.Obj))
    goto label_54;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_53;

DEFLABEL (label_54)
  Rvl = (current_block [OBJECT_27_2]);

DEFLABEL (label_53)
DEFLABEL (label_55)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_27_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_22]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_4]), 2);

DEFLABEL (label_23)
  (Wrd5.Obj) = Rvl;
  goto label_56;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define ENVIRONMENT_LABEL_28_3 8
#define DEBUGGING_LABEL_28_2 7
#define EXECUTE_CACHE_28_5 5
#define FREE_REFERENCES_LABEL_28_0 4
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto graphics_type_availableP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_type_availableP_3)
DEFLABEL (graphics_type_availableP_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_6 7
#define ENVIRONMENT_LABEL_29_3 15
#define DEBUGGING_LABEL_29_2 14
#define EXECUTE_CACHE_29_7 9
#define FREE_REFERENCE_29_1 12
#define FREE_REFERENCE_29_0 13
#define FREE_REFERENCES_LABEL_29_0 8
#define NUMBER_OF_LINKER_SECTIONS_29_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_29_4);
      goto enumerate_graphics_types_0;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_29_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (enumerate_graphics_types_5)
DEFLABEL (enumerate_graphics_types_0)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_7;
  Wrd11 = Wrd15;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_6])), (Wrd12.pObj));

DEFLABEL (label_3)
  (Wrd11.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define ENVIRONMENT_LABEL_30_3 9
#define DEBUGGING_LABEL_30_2 8
#define OBJECT_30_1 7
#define OBJECT_30_0 6
#define FREE_REFERENCES_LABEL_30_0 6
#define NUMBER_OF_LINKER_SECTIONS_30_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_30_4);
      goto graphics_device_type_availableP_1;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_type_availableP_5)
DEFLABEL (graphics_device_type_availableP_1)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_30_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define ENVIRONMENT_LABEL_31_3 13
#define DEBUGGING_LABEL_31_2 12
#define OBJECT_31_2 11
#define OBJECT_31_1 10
#define OBJECT_31_0 9
#define EXECUTE_CACHE_31_6 7
#define FREE_REFERENCES_LABEL_31_0 6
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto graphics_type_name_1;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_type_name_4)
DEFLABEL (graphics_type_name_1)
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
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_31_1]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 2);

DEFLABEL (label_6)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_5;
  Rvl = ((Wrd14.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define ENVIRONMENT_LABEL_32_3 13
#define DEBUGGING_LABEL_32_2 12
#define OBJECT_32_2 11
#define OBJECT_32_1 10
#define OBJECT_32_0 9
#define EXECUTE_CACHE_32_6 7
#define FREE_REFERENCES_LABEL_32_0 6
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_32_4);
      goto graphics_type_properties_1;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_type_properties_4)
DEFLABEL (graphics_type_properties_1)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_32_1]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 2);

DEFLABEL (label_6)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 20L) < ((unsigned long) (Wrd16.Lng))))
    goto label_5;
  Rvl = ((Wrd14.pObj) [21]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define ENVIRONMENT_LABEL_33_3 14
#define DEBUGGING_LABEL_33_2 13
#define OBJECT_33_1 12
#define OBJECT_33_0 11
#define EXECUTE_CACHE_33_7 7
#define EXECUTE_CACHE_33_6 9
#define FREE_REFERENCES_LABEL_33_0 6
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_33_4);
      goto guarantee_graphics_type_1;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_graphics_type_4)
DEFLABEL (guarantee_graphics_type_1)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_33_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  (Wrd9.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_33_0]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define ENVIRONMENT_LABEL_34_3 6
#define DEBUGGING_LABEL_34_2 5
#define OBJECT_34_0 4
#define FREE_REFERENCES_LABEL_34_0 4
#define NUMBER_OF_LINKER_SECTIONS_34_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_34_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_34_4);
  Rvl = (current_block [OBJECT_34_0]);
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
graphics_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_35_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_35_4);
  Rvl = (current_block [OBJECT_35_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define ENVIRONMENT_LABEL_36_3 8
#define DEBUGGING_LABEL_36_2 7
#define EXECUTE_CACHE_36_5 5
#define FREE_REFERENCES_LABEL_36_0 4
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_36_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_5]));

INVOKE_INTERFACE_TARGET_1
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
graphics_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto graphics_device_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_type_3)
DEFLABEL (graphics_device_type_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
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
graphics_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto graphics_device_descriptor_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_descriptor_3)
DEFLABEL (graphics_device_descriptor_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define ENVIRONMENT_LABEL_39_3 7
#define DEBUGGING_LABEL_39_2 6
#define OBJECT_39_1 5
#define OBJECT_39_0 4
#define FREE_REFERENCES_LABEL_39_0 4
#define NUMBER_OF_LINKER_SECTIONS_39_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_39_4);
      goto graphics_device_drawing_mode_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_drawing_mode_3)
DEFLABEL (graphics_device_drawing_mode_0)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_39_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

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

#define LABEL_40_4 3
#define ENVIRONMENT_LABEL_40_3 7
#define DEBUGGING_LABEL_40_2 6
#define OBJECT_40_1 5
#define OBJECT_40_0 4
#define FREE_REFERENCES_LABEL_40_0 4
#define NUMBER_OF_LINKER_SECTIONS_40_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_40_4);
      goto graphics_device_line_style_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_line_style_3)
DEFLABEL (graphics_device_line_style_0)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_40_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 2);

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

#define LABEL_41_4 3
#define ENVIRONMENT_LABEL_41_3 7
#define DEBUGGING_LABEL_41_2 6
#define OBJECT_41_1 5
#define OBJECT_41_0 4
#define FREE_REFERENCES_LABEL_41_0 4
#define NUMBER_OF_LINKER_SECTIONS_41_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_41_4);
      goto graphics_device_bufferP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_bufferP_3)
DEFLABEL (graphics_device_bufferP_0)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_41_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

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

#define LABEL_42_4 3
#define ENVIRONMENT_LABEL_42_3 7
#define DEBUGGING_LABEL_42_2 6
#define OBJECT_42_1 5
#define OBJECT_42_0 4
#define FREE_REFERENCES_LABEL_42_0 4
#define NUMBER_OF_LINKER_SECTIONS_42_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_42_4);
      goto graphics_device_properties_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_properties_3)
DEFLABEL (graphics_device_properties_0)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_42_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

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

#define LABEL_43_4 3
#define ENVIRONMENT_LABEL_43_3 8
#define DEBUGGING_LABEL_43_2 7
#define OBJECT_43_2 6
#define OBJECT_43_1 5
#define OBJECT_43_0 4
#define FREE_REFERENCES_LABEL_43_0 4
#define NUMBER_OF_LINKER_SECTIONS_43_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_43_4);
      goto set_graphics_device_descriptorB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_graphics_device_descriptorB_3)
DEFLABEL (set_graphics_device_descriptorB_0)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_43_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_43_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define ENVIRONMENT_LABEL_44_3 8
#define DEBUGGING_LABEL_44_2 7
#define OBJECT_44_2 6
#define OBJECT_44_1 5
#define OBJECT_44_0 4
#define FREE_REFERENCES_LABEL_44_0 4
#define NUMBER_OF_LINKER_SECTIONS_44_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_44_4);
      goto set_graphics_device_drawing_modeB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_graphics_device_drawing_modeB_3)
DEFLABEL (set_graphics_device_drawing_modeB_0)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_44_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_44_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define ENVIRONMENT_LABEL_45_3 8
#define DEBUGGING_LABEL_45_2 7
#define OBJECT_45_2 6
#define OBJECT_45_1 5
#define OBJECT_45_0 4
#define FREE_REFERENCES_LABEL_45_0 4
#define NUMBER_OF_LINKER_SECTIONS_45_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_45_4);
      goto set_graphics_device_line_styleB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_graphics_device_line_styleB_3)
DEFLABEL (set_graphics_device_line_styleB_0)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_45_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_45_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define ENVIRONMENT_LABEL_46_3 8
#define DEBUGGING_LABEL_46_2 7
#define OBJECT_46_2 6
#define OBJECT_46_1 5
#define OBJECT_46_0 4
#define FREE_REFERENCES_LABEL_46_0 4
#define NUMBER_OF_LINKER_SECTIONS_46_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_46_4);
      goto set_graphics_device_bufferPB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_graphics_device_bufferPB_3)
DEFLABEL (set_graphics_device_bufferPB_0)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_46_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_46_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_6 7
#define LABEL_47_7 9
#define ENVIRONMENT_LABEL_47_3 17
#define DEBUGGING_LABEL_47_2 16
#define OBJECT_47_3 15
#define OBJECT_47_2 14
#define OBJECT_47_1 13
#define OBJECT_47_0 12
#define FREE_REFERENCE_47_0 11
#define FREE_REFERENCES_LABEL_47_0 10
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_47_4);
      goto graphics_deviceP_4;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_47_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_47_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_deviceP_10)
DEFLABEL (graphics_deviceP_4)
  INTERRUPT_CHECK (26, LABEL_47_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47_0]));
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
  Rvl = (current_block [OBJECT_47_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_47_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_7 7
#define LABEL_48_8 9
#define TAG_48_9 3
#define ENVIRONMENT_LABEL_48_3 20
#define DEBUGGING_LABEL_48_2 19
#define OBJECT_48_3 18
#define OBJECT_48_2 17
#define OBJECT_48_1 16
#define OBJECT_48_0 15
#define EXECUTE_CACHE_48_10 11
#define EXECUTE_CACHE_48_6 13
#define FREE_REFERENCES_LABEL_48_0 10
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_48_4);
      goto make_graphics_device_7;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_48_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_48_8);
      goto lambda_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_graphics_device_11)
DEFLABEL (make_graphics_device_7)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_48_0]))
    goto label_14;
  (* (--Rsp)) = (Wrd8.Obj);
  goto label_13;

DEFLABEL (label_14)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_13)
DEFLABEL (label_17)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_48_5);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 62))
    goto label_16;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd13.Lng))))
    goto label_16;
  (Wrd5.Obj) = ((Wrd11.pObj) [14]);

DEFLABEL (label_15)
  (Rsp [1]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_8])));
  Rhp += 1;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd24 = Wrd23;
  (Wrd25.Obj) = (Rsp [0]);
  ((Wrd24.pObj) [2]) = (Wrd25.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Rsp [2]) = (Wrd26.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_3]), 2);

DEFLABEL (label_16)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_48_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_2]), 2);

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_15;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_48_8);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_10]));

DEFLABEL (label_18)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_6 7
#define LABEL_49_7 9
#define LABEL_49_8 11
#define LABEL_49_10 13
#define ENVIRONMENT_LABEL_49_3 28
#define DEBUGGING_LABEL_49_2 27
#define OBJECT_49_7 26
#define OBJECT_49_6 25
#define OBJECT_49_5 24
#define OBJECT_49_4 23
#define OBJECT_49_3 22
#define OBJECT_49_2 21
#define OBJECT_49_1 20
#define OBJECT_49_0 19
#define EXECUTE_CACHE_49_11 15
#define EXECUTE_CACHE_49_9 17
#define FREE_REFERENCES_LABEL_49_0 14
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_49_4);
      goto lambda_12;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_49_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_49_7);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_49_8);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_49_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_17)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_49_4);
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
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_49_2]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_49_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_49_7);
  (Wrd8.Obj) = (current_block [OBJECT_49_3]);
  (Wrd9.Obj) = (current_block [OBJECT_49_4]);
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
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_49_5]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_49_10);
  (Wrd8.Obj) = (current_block [OBJECT_49_6]);
  (Wrd9.Obj) = (current_block [OBJECT_49_4]);
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
  (Wrd22.Obj) = (current_block [OBJECT_49_7]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_0]), 1);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define ENVIRONMENT_LABEL_50_3 10
#define DEBUGGING_LABEL_50_2 9
#define OBJECT_50_2 8
#define OBJECT_50_1 7
#define OBJECT_50_0 6
#define FREE_REFERENCES_LABEL_50_0 6
#define NUMBER_OF_LINKER_SECTIONS_50_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_50_4);
      goto graphics_device_operation_clear_1;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_operation_clear_5)
DEFLABEL (graphics_device_operation_clear_1)
  INTERRUPT_CHECK (26, LABEL_50_4);
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
  (Wrd21.Obj) = (current_block [OBJECT_50_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

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
  (Wrd17.Obj) = (current_block [OBJECT_50_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define ENVIRONMENT_LABEL_51_3 10
#define DEBUGGING_LABEL_51_2 9
#define OBJECT_51_2 8
#define OBJECT_51_1 7
#define OBJECT_51_0 6
#define FREE_REFERENCES_LABEL_51_0 6
#define NUMBER_OF_LINKER_SECTIONS_51_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_51_4);
      goto graphics_device_operation_close_1;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_operation_close_5)
DEFLABEL (graphics_device_operation_close_1)
  INTERRUPT_CHECK (26, LABEL_51_4);
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
  (Wrd21.Obj) = (current_block [OBJECT_51_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_7)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd31.Lng))))
    goto label_6;
  Rvl = ((Wrd29.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_51_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define ENVIRONMENT_LABEL_52_3 10
#define DEBUGGING_LABEL_52_2 9
#define OBJECT_52_2 8
#define OBJECT_52_1 7
#define OBJECT_52_0 6
#define FREE_REFERENCES_LABEL_52_0 6
#define NUMBER_OF_LINKER_SECTIONS_52_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_52_4);
      goto graphics_device_operation_coordinate_limits_1;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_operation_coordinate_limits_5)
DEFLABEL (graphics_device_operation_coordinate_limits_1)
  INTERRUPT_CHECK (26, LABEL_52_4);
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
  (Wrd21.Obj) = (current_block [OBJECT_52_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

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
  (Wrd17.Obj) = (current_block [OBJECT_52_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define ENVIRONMENT_LABEL_53_3 10
#define DEBUGGING_LABEL_53_2 9
#define OBJECT_53_2 8
#define OBJECT_53_1 7
#define OBJECT_53_0 6
#define FREE_REFERENCES_LABEL_53_0 6
#define NUMBER_OF_LINKER_SECTIONS_53_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_53_4);
      goto graphics_device_operation_device_coordinate_limits_1;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_operation_device_coordinate_limits_5)
DEFLABEL (graphics_device_operation_device_coordinate_limits_1)
  INTERRUPT_CHECK (26, LABEL_53_4);
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
  (Wrd21.Obj) = (current_block [OBJECT_53_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_7)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd31.Lng))))
    goto label_6;
  Rvl = ((Wrd29.pObj) [7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_53_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define ENVIRONMENT_LABEL_54_3 10
#define DEBUGGING_LABEL_54_2 9
#define OBJECT_54_2 8
#define OBJECT_54_1 7
#define OBJECT_54_0 6
#define FREE_REFERENCES_LABEL_54_0 6
#define NUMBER_OF_LINKER_SECTIONS_54_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_54_4);
      goto graphics_device_operation_drag_cursor_1;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_operation_drag_cursor_5)
DEFLABEL (graphics_device_operation_drag_cursor_1)
  INTERRUPT_CHECK (26, LABEL_54_4);
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
  (Wrd21.Obj) = (current_block [OBJECT_54_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 2);

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
  (Wrd17.Obj) = (current_block [OBJECT_54_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define ENVIRONMENT_LABEL_55_3 10
#define DEBUGGING_LABEL_55_2 9
#define OBJECT_55_2 8
#define OBJECT_55_1 7
#define OBJECT_55_0 6
#define FREE_REFERENCES_LABEL_55_0 6
#define NUMBER_OF_LINKER_SECTIONS_55_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_55_4);
      goto graphics_device_operation_draw_line_1;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_operation_draw_line_5)
DEFLABEL (graphics_device_operation_draw_line_1)
  INTERRUPT_CHECK (26, LABEL_55_4);
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
  (Wrd21.Obj) = (current_block [OBJECT_55_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_7)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd31.Lng))))
    goto label_6;
  Rvl = ((Wrd29.pObj) [9]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_55_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_5 5
#define ENVIRONMENT_LABEL_56_3 10
#define DEBUGGING_LABEL_56_2 9
#define OBJECT_56_2 8
#define OBJECT_56_1 7
#define OBJECT_56_0 6
#define FREE_REFERENCES_LABEL_56_0 6
#define NUMBER_OF_LINKER_SECTIONS_56_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_56_4);
      goto graphics_device_operation_draw_point_1;

    case 1:
      current_block = (Rpc - LABEL_56_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_operation_draw_point_5)
DEFLABEL (graphics_device_operation_draw_point_1)
  INTERRUPT_CHECK (26, LABEL_56_4);
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
  (Wrd21.Obj) = (current_block [OBJECT_56_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_1]), 2);

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
  (Wrd17.Obj) = (current_block [OBJECT_56_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define ENVIRONMENT_LABEL_57_3 10
#define DEBUGGING_LABEL_57_2 9
#define OBJECT_57_2 8
#define OBJECT_57_1 7
#define OBJECT_57_0 6
#define FREE_REFERENCES_LABEL_57_0 6
#define NUMBER_OF_LINKER_SECTIONS_57_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_57_4);
      goto graphics_device_operation_draw_text_1;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_operation_draw_text_5)
DEFLABEL (graphics_device_operation_draw_text_1)
  INTERRUPT_CHECK (26, LABEL_57_4);
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
  (Wrd21.Obj) = (current_block [OBJECT_57_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_7)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd31.Lng))))
    goto label_6;
  Rvl = ((Wrd29.pObj) [11]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_57_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define ENVIRONMENT_LABEL_58_3 10
#define DEBUGGING_LABEL_58_2 9
#define OBJECT_58_2 8
#define OBJECT_58_1 7
#define OBJECT_58_0 6
#define FREE_REFERENCES_LABEL_58_0 6
#define NUMBER_OF_LINKER_SECTIONS_58_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_58_4);
      goto graphics_device_operation_flush_1;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_operation_flush_5)
DEFLABEL (graphics_device_operation_flush_1)
  INTERRUPT_CHECK (26, LABEL_58_4);
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
  (Wrd21.Obj) = (current_block [OBJECT_58_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

DEFLABEL (label_7)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd31.Lng))))
    goto label_6;
  Rvl = ((Wrd29.pObj) [12]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_58_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define ENVIRONMENT_LABEL_59_3 10
#define DEBUGGING_LABEL_59_2 9
#define OBJECT_59_2 8
#define OBJECT_59_1 7
#define OBJECT_59_0 6
#define FREE_REFERENCES_LABEL_59_0 6
#define NUMBER_OF_LINKER_SECTIONS_59_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_59_4);
      goto graphics_device_operation_move_cursor_1;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_operation_move_cursor_5)
DEFLABEL (graphics_device_operation_move_cursor_1)
  INTERRUPT_CHECK (26, LABEL_59_4);
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
  (Wrd21.Obj) = (current_block [OBJECT_59_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_7)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd31.Lng))))
    goto label_6;
  Rvl = ((Wrd29.pObj) [13]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_59_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_5 5
#define ENVIRONMENT_LABEL_60_3 10
#define DEBUGGING_LABEL_60_2 9
#define OBJECT_60_2 8
#define OBJECT_60_1 7
#define OBJECT_60_0 6
#define FREE_REFERENCES_LABEL_60_0 6
#define NUMBER_OF_LINKER_SECTIONS_60_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_60_4);
      goto graphics_device_operation_reset_clip_rectangle_1;

    case 1:
      current_block = (Rpc - LABEL_60_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_operation_reset_clip_rectangle_5)
DEFLABEL (graphics_device_operation_reset_clip_rectangle_1)
  INTERRUPT_CHECK (26, LABEL_60_4);
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
  (Wrd21.Obj) = (current_block [OBJECT_60_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 2);

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
  (Wrd17.Obj) = (current_block [OBJECT_60_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define ENVIRONMENT_LABEL_61_3 10
#define DEBUGGING_LABEL_61_2 9
#define OBJECT_61_2 8
#define OBJECT_61_1 7
#define OBJECT_61_0 6
#define FREE_REFERENCES_LABEL_61_0 6
#define NUMBER_OF_LINKER_SECTIONS_61_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_61_4);
      goto graphics_device_operation_set_clip_rectangle_1;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_operation_set_clip_rectangle_5)
DEFLABEL (graphics_device_operation_set_clip_rectangle_1)
  INTERRUPT_CHECK (26, LABEL_61_4);
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
  (Wrd21.Obj) = (current_block [OBJECT_61_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 2);

DEFLABEL (label_7)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd31.Lng))))
    goto label_6;
  Rvl = ((Wrd29.pObj) [16]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_61_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_5 5
#define ENVIRONMENT_LABEL_62_3 10
#define DEBUGGING_LABEL_62_2 9
#define OBJECT_62_2 8
#define OBJECT_62_1 7
#define OBJECT_62_0 6
#define FREE_REFERENCES_LABEL_62_0 6
#define NUMBER_OF_LINKER_SECTIONS_62_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_62_4);
      goto graphics_device_operation_set_coordinate_limits_1;

    case 1:
      current_block = (Rpc - LABEL_62_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_operation_set_coordinate_limits_5)
DEFLABEL (graphics_device_operation_set_coordinate_limits_1)
  INTERRUPT_CHECK (26, LABEL_62_4);
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
  (Wrd21.Obj) = (current_block [OBJECT_62_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

DEFLABEL (label_7)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd31.Lng))))
    goto label_6;
  Rvl = ((Wrd29.pObj) [17]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_62_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define ENVIRONMENT_LABEL_63_3 10
#define DEBUGGING_LABEL_63_2 9
#define OBJECT_63_2 8
#define OBJECT_63_1 7
#define OBJECT_63_0 6
#define FREE_REFERENCES_LABEL_63_0 6
#define NUMBER_OF_LINKER_SECTIONS_63_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_63_4);
      goto graphics_device_operation_set_drawing_mode_1;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_operation_set_drawing_mode_5)
DEFLABEL (graphics_device_operation_set_drawing_mode_1)
  INTERRUPT_CHECK (26, LABEL_63_4);
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
  (Wrd21.Obj) = (current_block [OBJECT_63_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_1]), 2);

DEFLABEL (label_7)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd31.Lng))))
    goto label_6;
  Rvl = ((Wrd29.pObj) [18]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_63_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define ENVIRONMENT_LABEL_64_3 10
#define DEBUGGING_LABEL_64_2 9
#define OBJECT_64_2 8
#define OBJECT_64_1 7
#define OBJECT_64_0 6
#define FREE_REFERENCES_LABEL_64_0 6
#define NUMBER_OF_LINKER_SECTIONS_64_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_64_4);
      goto graphics_device_operation_set_line_style_1;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_operation_set_line_style_5)
DEFLABEL (graphics_device_operation_set_line_style_1)
  INTERRUPT_CHECK (26, LABEL_64_4);
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
  (Wrd21.Obj) = (current_block [OBJECT_64_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 2);

DEFLABEL (label_7)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd31.Lng))))
    goto label_6;
  Rvl = ((Wrd29.pObj) [19]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_64_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_7 5
#define LABEL_65_9 7
#define LABEL_65_5 9
#define LABEL_65_10 11
#define LABEL_65_11 13
#define LABEL_65_12 15
#define LABEL_65_6 17
#define ENVIRONMENT_LABEL_65_3 27
#define DEBUGGING_LABEL_65_2 26
#define OBJECT_65_4 25
#define OBJECT_65_3 24
#define OBJECT_65_2 23
#define OBJECT_65_1 22
#define OBJECT_65_0 21
#define EXECUTE_CACHE_65_8 19
#define FREE_REFERENCES_LABEL_65_0 18
#define NUMBER_OF_LINKER_SECTIONS_65_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_65_4);
      goto graphics_operation_9;

    case 1:
      current_block = (Rpc - LABEL_65_7);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_65_9);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_65_5);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_65_10);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_65_11);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_65_12);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_65_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_operation_16)
DEFLABEL (graphics_operation_9)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd27.uLng) == 62))
    goto label_25;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd25.Lng))))
    goto label_25;
  (Wrd19.Obj) = ((Wrd23.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_24)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_65_6);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_4]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_65_5);
  (* (--Rsp)) = Rvl;
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 62))
    goto label_23;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd49.Lng))))
    goto label_23;
  (Wrd7.Obj) = ((Wrd47.pObj) [6]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;

DEFLABEL (label_17)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_22;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd21.Lng))))
    goto label_22;
  (Wrd13.Obj) = ((Wrd19.pObj) [2]);

DEFLABEL (label_21)
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_20;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd35.Lng))))
    goto label_20;
  (Wrd30.Obj) = ((Wrd33.pObj) [12]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_19)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_65_9);
  goto label_17;

DEFLABEL (label_20)
  (Wrd38.Obj) = (current_block [OBJECT_65_3]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_12]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.Obj) = (current_block [OBJECT_65_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_11]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_12)
  (Wrd13.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_23)
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.Obj) = (current_block [OBJECT_65_2]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_10]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_17;

DEFLABEL (label_25)
  (Wrd28.Obj) = (Rsp [4]);
  (Wrd29.Obj) = (current_block [OBJECT_65_0]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_7]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define ENVIRONMENT_LABEL_66_3 9
#define DEBUGGING_LABEL_66_2 8
#define OBJECT_66_3 7
#define OBJECT_66_2 6
#define OBJECT_66_1 5
#define OBJECT_66_0 4
#define FREE_REFERENCES_LABEL_66_0 4
#define NUMBER_OF_LINKER_SECTIONS_66_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_66_4);
      goto graphics_enable_buffering_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_enable_buffering_3)
DEFLABEL (graphics_enable_buffering_0)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd5.Obj) = (current_block [OBJECT_66_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_66_1]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_3]), 3);

DEFLABEL (label_5)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd18.Lng))))
    goto label_4;
  ((Wrd16.pObj) [6]) = (Wrd7.Obj);
  Rvl = (current_block [OBJECT_66_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_5 3
#define LABEL_67_4 5
#define LABEL_67_6 7
#define LABEL_67_7 9
#define LABEL_67_8 11
#define ENVIRONMENT_LABEL_67_3 19
#define DEBUGGING_LABEL_67_2 18
#define OBJECT_67_5 17
#define OBJECT_67_4 16
#define OBJECT_67_3 15
#define OBJECT_67_2 14
#define OBJECT_67_1 13
#define OBJECT_67_0 12
#define FREE_REFERENCES_LABEL_67_0 12
#define NUMBER_OF_LINKER_SECTIONS_67_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd7;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd65;
  machine_word Wrd64;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_67_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_67_4);
      goto graphics_disable_buffering_4;

    case 2:
      current_block = (Rpc - LABEL_67_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_67_7);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_67_8);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_disable_buffering_10)
DEFLABEL (graphics_disable_buffering_4)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd64.Obj) = (Rsp [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 62))
    goto label_19;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd63.Lng))))
    goto label_19;
  (Wrd7.Obj) = ((Wrd61.pObj) [6]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;

DEFLABEL (label_18)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_5]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd39.uLng) == 62))
    goto label_17;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd37.Lng))))
    goto label_17;
  (Wrd29.Obj) = ((Wrd35.pObj) [2]);

DEFLABEL (label_16)
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd52.uLng) == 62))
    goto label_15;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd51.Lng))))
    goto label_15;
  (Wrd46.Obj) = ((Wrd49.pObj) [12]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_14)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_67_5);

DEFLABEL (label_13)
  (Wrd9.Obj) = (current_block [OBJECT_67_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd24.uLng) == 62)
    goto label_12;

DEFLABEL (label_11)
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_3]), 3);

DEFLABEL (label_12)
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd22.Lng))))
    goto label_11;
  ((Wrd20.pObj) [6]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_67_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd54.Obj) = (current_block [OBJECT_67_5]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_8]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.Obj) = (current_block [OBJECT_67_4]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_7]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 2);

DEFLABEL (label_6)
  (Wrd29.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd67.Obj) = (current_block [OBJECT_67_0]);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_6]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_5 5
#define LABEL_68_6 7
#define LABEL_68_7 9
#define ENVIRONMENT_LABEL_68_3 16
#define DEBUGGING_LABEL_68_2 15
#define OBJECT_68_4 14
#define OBJECT_68_3 13
#define OBJECT_68_2 12
#define OBJECT_68_1 11
#define OBJECT_68_0 10
#define FREE_REFERENCES_LABEL_68_0 10
#define NUMBER_OF_LINKER_SECTIONS_68_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd7;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  INVOKE_INTERFACE_DECLS
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
      goto maybe_flush_3;

    case 1:
      current_block = (Rpc - LABEL_68_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_68_6);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_68_7);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (maybe_flush_9)
DEFLABEL (maybe_flush_3)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_16;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd45.Lng))))
    goto label_16;
  (Wrd7.Obj) = ((Wrd43.pObj) [6]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_68_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_15;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_15;
  (Wrd9.Obj) = ((Wrd15.pObj) [2]);

DEFLABEL (label_14)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_13;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd31.Lng))))
    goto label_13;
  (Wrd26.Obj) = ((Wrd29.pObj) [12]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_12)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_13)
  (Wrd34.Obj) = (current_block [OBJECT_68_3]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_7]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_68_2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 2);

DEFLABEL (label_5)
  (Wrd9.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_16)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.Obj) = (current_block [OBJECT_68_0]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 2);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_5 5
#define LABEL_69_6 7
#define ENVIRONMENT_LABEL_69_3 12
#define DEBUGGING_LABEL_69_2 11
#define OBJECT_69_2 10
#define OBJECT_69_1 9
#define OBJECT_69_0 8
#define FREE_REFERENCES_LABEL_69_0 8
#define NUMBER_OF_LINKER_SECTIONS_69_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_69_4);
      goto graphics_close_2;

    case 1:
      current_block = (Rpc - LABEL_69_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_69_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_close_7)
DEFLABEL (graphics_close_2)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_10)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_9;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd27.Lng))))
    goto label_9;
  (Wrd22.Obj) = ((Wrd25.pObj) [5]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_8)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_9)
  (Wrd30.Obj) = (current_block [OBJECT_69_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_69_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_5 5
#define LABEL_70_6 7
#define ENVIRONMENT_LABEL_70_3 12
#define DEBUGGING_LABEL_70_2 11
#define OBJECT_70_2 10
#define OBJECT_70_1 9
#define OBJECT_70_0 8
#define FREE_REFERENCES_LABEL_70_0 8
#define NUMBER_OF_LINKER_SECTIONS_70_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_70_4);
      goto graphics_flush_2;

    case 1:
      current_block = (Rpc - LABEL_70_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_70_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_flush_7)
DEFLABEL (graphics_flush_2)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_10)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_9;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd27.Lng))))
    goto label_9;
  (Wrd22.Obj) = ((Wrd25.pObj) [12]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_8)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_9)
  (Wrd30.Obj) = (current_block [OBJECT_70_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_70_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_5 5
#define LABEL_71_6 7
#define ENVIRONMENT_LABEL_71_3 12
#define DEBUGGING_LABEL_71_2 11
#define OBJECT_71_2 10
#define OBJECT_71_1 9
#define OBJECT_71_0 8
#define FREE_REFERENCES_LABEL_71_0 8
#define NUMBER_OF_LINKER_SECTIONS_71_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto graphics_device_coordinate_limits_2;

    case 1:
      current_block = (Rpc - LABEL_71_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_71_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_device_coordinate_limits_7)
DEFLABEL (graphics_device_coordinate_limits_2)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_10)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_9;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd27.Lng))))
    goto label_9;
  (Wrd22.Obj) = ((Wrd25.pObj) [7]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_8)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_9)
  (Wrd30.Obj) = (current_block [OBJECT_71_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_71_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define LABEL_72_5 5
#define LABEL_72_6 7
#define ENVIRONMENT_LABEL_72_3 12
#define DEBUGGING_LABEL_72_2 11
#define OBJECT_72_2 10
#define OBJECT_72_1 9
#define OBJECT_72_0 8
#define FREE_REFERENCES_LABEL_72_0 8
#define NUMBER_OF_LINKER_SECTIONS_72_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto graphics_coordinate_limits_2;

    case 1:
      current_block = (Rpc - LABEL_72_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_72_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_coordinate_limits_7)
DEFLABEL (graphics_coordinate_limits_2)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_10)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_9;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd27.Lng))))
    goto label_9;
  (Wrd22.Obj) = ((Wrd25.pObj) [6]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_8)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_9)
  (Wrd30.Obj) = (current_block [OBJECT_72_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_72_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define LABEL_73_5 5
#define LABEL_73_6 7
#define ENVIRONMENT_LABEL_73_3 12
#define DEBUGGING_LABEL_73_2 11
#define OBJECT_73_2 10
#define OBJECT_73_1 9
#define OBJECT_73_0 8
#define FREE_REFERENCES_LABEL_73_0 8
#define NUMBER_OF_LINKER_SECTIONS_73_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_73_4);
      goto graphics_set_coordinate_limits_2;

    case 1:
      current_block = (Rpc - LABEL_73_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_73_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_set_coordinate_limits_7)
DEFLABEL (graphics_set_coordinate_limits_2)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_10)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_9;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd27.Lng))))
    goto label_9;
  (Wrd22.Obj) = ((Wrd25.pObj) [17]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_8)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (label_9)
  (Wrd30.Obj) = (current_block [OBJECT_73_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_73_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define LABEL_74_5 5
#define LABEL_74_6 7
#define ENVIRONMENT_LABEL_74_3 12
#define DEBUGGING_LABEL_74_2 11
#define OBJECT_74_2 10
#define OBJECT_74_1 9
#define OBJECT_74_0 8
#define FREE_REFERENCES_LABEL_74_0 8
#define NUMBER_OF_LINKER_SECTIONS_74_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_74_4);
      goto graphics_set_clip_rectangle_2;

    case 1:
      current_block = (Rpc - LABEL_74_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_74_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_set_clip_rectangle_7)
DEFLABEL (graphics_set_clip_rectangle_2)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_10)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_9;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd27.Lng))))
    goto label_9;
  (Wrd22.Obj) = ((Wrd25.pObj) [16]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_8)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (label_9)
  (Wrd30.Obj) = (current_block [OBJECT_74_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_74_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define LABEL_75_5 5
#define LABEL_75_6 7
#define ENVIRONMENT_LABEL_75_3 12
#define DEBUGGING_LABEL_75_2 11
#define OBJECT_75_2 10
#define OBJECT_75_1 9
#define OBJECT_75_0 8
#define FREE_REFERENCES_LABEL_75_0 8
#define NUMBER_OF_LINKER_SECTIONS_75_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_75_4);
      goto graphics_reset_clip_rectangle_2;

    case 1:
      current_block = (Rpc - LABEL_75_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_75_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_reset_clip_rectangle_7)
DEFLABEL (graphics_reset_clip_rectangle_2)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_10)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_9;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd27.Lng))))
    goto label_9;
  (Wrd22.Obj) = ((Wrd25.pObj) [15]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_8)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_9)
  (Wrd30.Obj) = (current_block [OBJECT_75_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_75_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define LABEL_76_5 5
#define LABEL_76_6 7
#define TAG_76_7 2
#define LABEL_76_8 9
#define TAG_76_9 3
#define ENVIRONMENT_LABEL_76_3 18
#define DEBUGGING_LABEL_76_2 17
#define OBJECT_76_1 16
#define OBJECT_76_0 15
#define EXECUTE_CACHE_76_11 11
#define EXECUTE_CACHE_76_10 13
#define FREE_REFERENCES_LABEL_76_0 10
#define NUMBER_OF_LINKER_SECTIONS_76_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_76_4);
      goto graphics_bind_drawing_mode_4;

    case 1:
      current_block = (Rpc - LABEL_76_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_76_6);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_76_8);
      goto lambda_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_bind_drawing_mode_8)
DEFLABEL (graphics_bind_drawing_mode_4)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_12;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_12;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_11)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_76_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_76_6])));
  Rhp += 2;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd26 = Wrd23;
  (Wrd27.Obj) = (Rsp [2]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  ((Wrd26.pObj) [3]) = (Wrd25.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd28.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd31.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_76_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_76_8])));
  Rhp += 2;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd31.pObj)));
  Wrd34 = Wrd31;
  ((Wrd34.pObj) [2]) = (Wrd25.Obj);
  (Wrd33.Obj) = (Rsp [0]);
  ((Wrd34.pObj) [3]) = (Wrd33.Obj);
  (Rsp [3]) = (Wrd30.Obj);
  (Rsp [1]) = (Wrd22.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_10]));

DEFLABEL (label_12)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_76_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_76_6);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_11]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_76_8);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_11]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define LABEL_77_6 5
#define LABEL_77_7 7
#define LABEL_77_5 9
#define ENVIRONMENT_LABEL_77_3 17
#define DEBUGGING_LABEL_77_2 16
#define OBJECT_77_5 15
#define OBJECT_77_4 14
#define OBJECT_77_3 13
#define OBJECT_77_2 12
#define OBJECT_77_1 11
#define OBJECT_77_0 10
#define FREE_REFERENCES_LABEL_77_0 10
#define NUMBER_OF_LINKER_SECTIONS_77_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_77_4);
      goto graphics_set_drawing_mode_3;

    case 1:
      current_block = (Rpc - LABEL_77_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_77_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_77_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_set_drawing_mode_8)
DEFLABEL (graphics_set_drawing_mode_3)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_14;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_14;
  (Wrd10.Obj) = ((Wrd16.pObj) [2]);

DEFLABEL (label_13)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_12;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd32.Lng))))
    goto label_12;
  (Wrd27.Obj) = ((Wrd30.pObj) [18]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_11)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_77_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_77_3]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_10;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_5]), 3);

DEFLABEL (label_10)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_9;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_77_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd35.Obj) = (current_block [OBJECT_77_2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_7]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.Obj) = (current_block [OBJECT_77_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 2);

DEFLABEL (label_5)
  (Wrd10.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define LABEL_78_5 5
#define LABEL_78_6 7
#define TAG_78_7 2
#define LABEL_78_8 9
#define TAG_78_9 3
#define ENVIRONMENT_LABEL_78_3 18
#define DEBUGGING_LABEL_78_2 17
#define OBJECT_78_1 16
#define OBJECT_78_0 15
#define EXECUTE_CACHE_78_11 11
#define EXECUTE_CACHE_78_10 13
#define FREE_REFERENCES_LABEL_78_0 10
#define NUMBER_OF_LINKER_SECTIONS_78_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_78_4);
      goto graphics_bind_line_style_4;

    case 1:
      current_block = (Rpc - LABEL_78_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_78_6);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_78_8);
      goto lambda_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_bind_line_style_8)
DEFLABEL (graphics_bind_line_style_4)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_12;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_12;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_11)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_78_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_78_6])));
  Rhp += 2;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd26 = Wrd23;
  (Wrd27.Obj) = (Rsp [2]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  ((Wrd26.pObj) [3]) = (Wrd25.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd28.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd31.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_78_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_78_8])));
  Rhp += 2;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd31.pObj)));
  Wrd34 = Wrd31;
  ((Wrd34.pObj) [2]) = (Wrd25.Obj);
  (Wrd33.Obj) = (Rsp [0]);
  ((Wrd34.pObj) [3]) = (Wrd33.Obj);
  (Rsp [3]) = (Wrd30.Obj);
  (Rsp [1]) = (Wrd22.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_10]));

DEFLABEL (label_12)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_78_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_78_6);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_11]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_78_8);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_11]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define LABEL_79_6 5
#define LABEL_79_7 7
#define LABEL_79_5 9
#define ENVIRONMENT_LABEL_79_3 17
#define DEBUGGING_LABEL_79_2 16
#define OBJECT_79_5 15
#define OBJECT_79_4 14
#define OBJECT_79_3 13
#define OBJECT_79_2 12
#define OBJECT_79_1 11
#define OBJECT_79_0 10
#define FREE_REFERENCES_LABEL_79_0 10
#define NUMBER_OF_LINKER_SECTIONS_79_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
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
      goto graphics_set_line_style_3;

    case 1:
      current_block = (Rpc - LABEL_79_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_79_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_79_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_set_line_style_8)
DEFLABEL (graphics_set_line_style_3)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_14;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_14;
  (Wrd10.Obj) = ((Wrd16.pObj) [2]);

DEFLABEL (label_13)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_12;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd32.Lng))))
    goto label_12;
  (Wrd27.Obj) = ((Wrd30.pObj) [19]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_11)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_79_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_79_3]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_10;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_5]), 3);

DEFLABEL (label_10)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_9;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_79_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd35.Obj) = (current_block [OBJECT_79_2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_7]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.Obj) = (current_block [OBJECT_79_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 2);

DEFLABEL (label_5)
  (Wrd10.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define LABEL_80_6 5
#define LABEL_80_7 7
#define LABEL_80_5 9
#define LABEL_80_8 11
#define LABEL_80_9 13
#define LABEL_80_10 15
#define ENVIRONMENT_LABEL_80_3 23
#define DEBUGGING_LABEL_80_2 22
#define OBJECT_80_5 21
#define OBJECT_80_4 20
#define OBJECT_80_3 19
#define OBJECT_80_2 18
#define OBJECT_80_1 17
#define OBJECT_80_0 16
#define FREE_REFERENCES_LABEL_80_0 16
#define NUMBER_OF_LINKER_SECTIONS_80_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      goto graphics_clear_6;

    case 1:
      current_block = (Rpc - LABEL_80_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_80_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_80_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_80_8);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_80_9);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_80_10);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_clear_14)
DEFLABEL (graphics_clear_6)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_25;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_25;
  (Wrd9.Obj) = ((Wrd15.pObj) [2]);

DEFLABEL (label_24)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_23;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd31.Lng))))
    goto label_23;
  (Wrd26.Obj) = ((Wrd29.pObj) [4]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_22)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_80_5);
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_21;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd45.Lng))))
    goto label_21;
  (Wrd7.Obj) = ((Wrd43.pObj) [6]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_80_5]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd18.Obj) = (Rsp [0]);
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
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_18;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd31.Lng))))
    goto label_18;
  (Wrd26.Obj) = ((Wrd29.pObj) [12]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_17)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_18)
  (Wrd34.Obj) = (current_block [OBJECT_80_4]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_10]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_80_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 2);

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.Obj) = (current_block [OBJECT_80_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_8]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 2);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_15;

DEFLABEL (label_23)
  (Wrd34.Obj) = (current_block [OBJECT_80_2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_7]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_80_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 2);

DEFLABEL (label_8)
  (Wrd9.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define LABEL_81_6 5
#define LABEL_81_7 7
#define LABEL_81_5 9
#define LABEL_81_8 11
#define LABEL_81_9 13
#define LABEL_81_10 15
#define ENVIRONMENT_LABEL_81_3 23
#define DEBUGGING_LABEL_81_2 22
#define OBJECT_81_5 21
#define OBJECT_81_4 20
#define OBJECT_81_3 19
#define OBJECT_81_2 18
#define OBJECT_81_1 17
#define OBJECT_81_0 16
#define FREE_REFERENCES_LABEL_81_0 16
#define NUMBER_OF_LINKER_SECTIONS_81_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd34;
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
      goto graphics_draw_point_6;

    case 1:
      current_block = (Rpc - LABEL_81_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_81_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_81_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_81_8);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_81_9);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_81_10);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_draw_point_14)
DEFLABEL (graphics_draw_point_6)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_25;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd19.Lng))))
    goto label_25;
  (Wrd11.Obj) = ((Wrd17.pObj) [2]);

DEFLABEL (label_24)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_23;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd33.Lng))))
    goto label_23;
  (Wrd28.Obj) = ((Wrd31.pObj) [10]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_22)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_81_5);
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 62))
    goto label_21;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd47.Lng))))
    goto label_21;
  (Wrd7.Obj) = ((Wrd45.pObj) [6]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_81_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd18.Obj) = (Rsp [0]);
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
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_18;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd31.Lng))))
    goto label_18;
  (Wrd25.Obj) = ((Wrd29.pObj) [12]);

DEFLABEL (label_17)
  (Rsp [1]) = (Wrd25.Obj);
  (Wrd38.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd38.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_18)
  (Wrd34.Obj) = (current_block [OBJECT_81_4]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_10]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_1]), 2);

DEFLABEL (label_11)
  (Wrd25.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_81_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_1]), 2);

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.Obj) = (current_block [OBJECT_81_3]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_8]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_1]), 2);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_15;

DEFLABEL (label_23)
  (Wrd36.Obj) = (current_block [OBJECT_81_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.Obj) = (current_block [OBJECT_81_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_1]), 2);

DEFLABEL (label_8)
  (Wrd11.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define LABEL_82_5 5
#define TAG_82_6 1
#define ENVIRONMENT_LABEL_82_3 13
#define DEBUGGING_LABEL_82_2 12
#define OBJECT_82_0 11
#define EXECUTE_CACHE_82_8 7
#define EXECUTE_CACHE_82_7 9
#define FREE_REFERENCES_LABEL_82_0 6
#define NUMBER_OF_LINKER_SECTIONS_82_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_82_4);
      goto graphics_erase_point_1;

    case 1:
      current_block = (Rpc - LABEL_82_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_erase_point_4)
DEFLABEL (graphics_erase_point_1)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_82_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_82_5])));
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
  (Wrd14.Obj) = (current_block [OBJECT_82_0]);
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_82_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [2]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define LABEL_83_6 5
#define LABEL_83_7 7
#define LABEL_83_5 9
#define LABEL_83_8 11
#define LABEL_83_9 13
#define LABEL_83_10 15
#define ENVIRONMENT_LABEL_83_3 23
#define DEBUGGING_LABEL_83_2 22
#define OBJECT_83_5 21
#define OBJECT_83_4 20
#define OBJECT_83_3 19
#define OBJECT_83_2 18
#define OBJECT_83_1 17
#define OBJECT_83_0 16
#define FREE_REFERENCES_LABEL_83_0 16
#define NUMBER_OF_LINKER_SECTIONS_83_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd25;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_83_4);
      goto graphics_draw_text_6;

    case 1:
      current_block = (Rpc - LABEL_83_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_83_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_83_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_83_8);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_83_9);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_83_10);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_draw_text_14)
DEFLABEL (graphics_draw_text_6)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_25;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_25;
  (Wrd12.Obj) = ((Wrd18.pObj) [2]);

DEFLABEL (label_24)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_23;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd34.Lng))))
    goto label_23;
  (Wrd29.Obj) = ((Wrd32.pObj) [11]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_22)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_83_5);
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 62))
    goto label_21;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd47.Lng))))
    goto label_21;
  (Wrd7.Obj) = ((Wrd45.pObj) [6]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_83_5]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd18.Obj) = (Rsp [0]);
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
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_18;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd31.Lng))))
    goto label_18;
  (Wrd25.Obj) = ((Wrd29.pObj) [12]);

DEFLABEL (label_17)
  (Rsp [2]) = (Wrd25.Obj);
  (Wrd38.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd38.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_18)
  (Wrd34.Obj) = (current_block [OBJECT_83_4]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_10]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 2);

DEFLABEL (label_11)
  (Wrd25.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_83_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 2);

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.Obj) = (current_block [OBJECT_83_3]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_8]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 2);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_15;

DEFLABEL (label_23)
  (Wrd37.Obj) = (current_block [OBJECT_83_2]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_7]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd23.Obj) = (Rsp [5]);
  (Wrd24.Obj) = (current_block [OBJECT_83_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 2);

DEFLABEL (label_8)
  (Wrd12.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define LABEL_84_6 5
#define LABEL_84_7 7
#define LABEL_84_5 9
#define LABEL_84_8 11
#define LABEL_84_9 13
#define LABEL_84_10 15
#define ENVIRONMENT_LABEL_84_3 23
#define DEBUGGING_LABEL_84_2 22
#define OBJECT_84_5 21
#define OBJECT_84_4 20
#define OBJECT_84_3 19
#define OBJECT_84_2 18
#define OBJECT_84_1 17
#define OBJECT_84_0 16
#define FREE_REFERENCES_LABEL_84_0 16
#define NUMBER_OF_LINKER_SECTIONS_84_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_84_4);
      goto graphics_draw_line_6;

    case 1:
      current_block = (Rpc - LABEL_84_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_84_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_84_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_84_8);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_84_9);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_84_10);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_draw_line_14)
DEFLABEL (graphics_draw_line_6)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_5]))));
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
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_25;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd21.Lng))))
    goto label_25;
  (Wrd13.Obj) = ((Wrd19.pObj) [2]);

DEFLABEL (label_24)
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_23;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd35.Lng))))
    goto label_23;
  (Wrd30.Obj) = ((Wrd33.pObj) [9]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_22)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_84_5);
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 62))
    goto label_21;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd47.Lng))))
    goto label_21;
  (Wrd7.Obj) = ((Wrd45.pObj) [6]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_84_5]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd18.Obj) = (Rsp [0]);
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
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_18;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd31.Lng))))
    goto label_18;
  (Wrd25.Obj) = ((Wrd29.pObj) [12]);

DEFLABEL (label_17)
  (Rsp [3]) = (Wrd25.Obj);
  (Wrd38.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd38.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_18)
  (Wrd34.Obj) = (current_block [OBJECT_84_4]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_10]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_1]), 2);

DEFLABEL (label_11)
  (Wrd25.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_84_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_1]), 2);

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.Obj) = (current_block [OBJECT_84_3]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_8]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_1]), 2);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_15;

DEFLABEL (label_23)
  (Wrd38.Obj) = (current_block [OBJECT_84_2]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_7]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd24.Obj) = (Rsp [6]);
  (Wrd25.Obj) = (current_block [OBJECT_84_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_6]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_1]), 2);

DEFLABEL (label_8)
  (Wrd13.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define LABEL_85_5 5
#define LABEL_85_6 7
#define ENVIRONMENT_LABEL_85_3 12
#define DEBUGGING_LABEL_85_2 11
#define OBJECT_85_2 10
#define OBJECT_85_1 9
#define OBJECT_85_0 8
#define FREE_REFERENCES_LABEL_85_0 8
#define NUMBER_OF_LINKER_SECTIONS_85_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_85_4);
      goto graphics_move_cursor_2;

    case 1:
      current_block = (Rpc - LABEL_85_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_85_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_move_cursor_7)
DEFLABEL (graphics_move_cursor_2)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_10)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_9;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd27.Lng))))
    goto label_9;
  (Wrd22.Obj) = ((Wrd25.pObj) [13]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_8)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_9)
  (Wrd30.Obj) = (current_block [OBJECT_85_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_85_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define LABEL_86_6 5
#define LABEL_86_7 7
#define LABEL_86_5 9
#define LABEL_86_8 11
#define LABEL_86_9 13
#define LABEL_86_10 15
#define ENVIRONMENT_LABEL_86_3 23
#define DEBUGGING_LABEL_86_2 22
#define OBJECT_86_5 21
#define OBJECT_86_4 20
#define OBJECT_86_3 19
#define OBJECT_86_2 18
#define OBJECT_86_1 17
#define OBJECT_86_0 16
#define FREE_REFERENCES_LABEL_86_0 16
#define NUMBER_OF_LINKER_SECTIONS_86_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd34;
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
      current_block = (Rpc - LABEL_86_4);
      goto graphics_drag_cursor_6;

    case 1:
      current_block = (Rpc - LABEL_86_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_86_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_86_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_86_8);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_86_9);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_86_10);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (graphics_drag_cursor_14)
DEFLABEL (graphics_drag_cursor_6)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_25;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd19.Lng))))
    goto label_25;
  (Wrd11.Obj) = ((Wrd17.pObj) [2]);

DEFLABEL (label_24)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_23;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd33.Lng))))
    goto label_23;
  (Wrd28.Obj) = ((Wrd31.pObj) [8]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_22)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_86_5);
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 62))
    goto label_21;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd47.Lng))))
    goto label_21;
  (Wrd7.Obj) = ((Wrd45.pObj) [6]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_86_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd18.Obj) = (Rsp [0]);
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
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_18;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd31.Lng))))
    goto label_18;
  (Wrd25.Obj) = ((Wrd29.pObj) [12]);

DEFLABEL (label_17)
  (Rsp [1]) = (Wrd25.Obj);
  (Wrd38.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd38.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_18)
  (Wrd34.Obj) = (current_block [OBJECT_86_4]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_10]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_11)
  (Wrd25.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_86_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.Obj) = (current_block [OBJECT_86_3]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_8]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_15;

DEFLABEL (label_23)
  (Wrd36.Obj) = (current_block [OBJECT_86_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.Obj) = (current_block [OBJECT_86_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_8)
  (Wrd11.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define ENVIRONMENT_LABEL_87_3 7
#define DEBUGGING_LABEL_87_2 6
#define OBJECT_87_1 5
#define OBJECT_87_0 4
#define FREE_REFERENCES_LABEL_87_0 4
#define NUMBER_OF_LINKER_SECTIONS_87_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_87_4);
      goto image_type_operation_create_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (image_type_operation_create_3)
DEFLABEL (image_type_operation_create_0)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_87_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_1]), 2);

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

#define LABEL_88_4 3
#define ENVIRONMENT_LABEL_88_3 7
#define DEBUGGING_LABEL_88_2 6
#define OBJECT_88_1 5
#define OBJECT_88_0 4
#define FREE_REFERENCES_LABEL_88_0 4
#define NUMBER_OF_LINKER_SECTIONS_88_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_88_4);
      goto image_type_operation_destroy_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (image_type_operation_destroy_3)
DEFLABEL (image_type_operation_destroy_0)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_88_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_1]), 2);

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

#define LABEL_89_4 3
#define ENVIRONMENT_LABEL_89_3 7
#define DEBUGGING_LABEL_89_2 6
#define OBJECT_89_1 5
#define OBJECT_89_0 4
#define FREE_REFERENCES_LABEL_89_0 4
#define NUMBER_OF_LINKER_SECTIONS_89_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_89_4);
      goto image_type_operation_width_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (image_type_operation_width_3)
DEFLABEL (image_type_operation_width_0)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_89_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

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

#define LABEL_90_4 3
#define ENVIRONMENT_LABEL_90_3 7
#define DEBUGGING_LABEL_90_2 6
#define OBJECT_90_1 5
#define OBJECT_90_0 4
#define FREE_REFERENCES_LABEL_90_0 4
#define NUMBER_OF_LINKER_SECTIONS_90_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_90_4);
      goto image_type_operation_height_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (image_type_operation_height_3)
DEFLABEL (image_type_operation_height_0)
  INTERRUPT_CHECK (26, LABEL_90_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_90_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 2);

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

#define LABEL_91_4 3
#define ENVIRONMENT_LABEL_91_3 7
#define DEBUGGING_LABEL_91_2 6
#define OBJECT_91_1 5
#define OBJECT_91_0 4
#define FREE_REFERENCES_LABEL_91_0 4
#define NUMBER_OF_LINKER_SECTIONS_91_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_91_4);
      goto image_type_operation_draw_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (image_type_operation_draw_3)
DEFLABEL (image_type_operation_draw_0)
  INTERRUPT_CHECK (26, LABEL_91_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_91_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_1]), 2);

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

#define LABEL_92_4 3
#define ENVIRONMENT_LABEL_92_3 7
#define DEBUGGING_LABEL_92_2 6
#define OBJECT_92_1 5
#define OBJECT_92_0 4
#define FREE_REFERENCES_LABEL_92_0 4
#define NUMBER_OF_LINKER_SECTIONS_92_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_92_4);
      goto image_type_operation_draw_subimage_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (image_type_operation_draw_subimage_3)
DEFLABEL (image_type_operation_draw_subimage_0)
  INTERRUPT_CHECK (26, LABEL_92_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_92_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_1]), 2);

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

#define LABEL_93_4 3
#define ENVIRONMENT_LABEL_93_3 7
#define DEBUGGING_LABEL_93_2 6
#define OBJECT_93_1 5
#define OBJECT_93_0 4
#define FREE_REFERENCES_LABEL_93_0 4
#define NUMBER_OF_LINKER_SECTIONS_93_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_93 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_93_4);
      goto image_type_operation_fill_from_byte_vector_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (image_type_operation_fill_from_byte_vector_3)
DEFLABEL (image_type_operation_fill_from_byte_vector_0)
  INTERRUPT_CHECK (26, LABEL_93_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_93_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 2);

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

#define LABEL_94_4 3
#define LABEL_94_5 5
#define LABEL_94_6 7
#define LABEL_94_7 9
#define ENVIRONMENT_LABEL_94_3 17
#define DEBUGGING_LABEL_94_2 16
#define OBJECT_94_3 15
#define OBJECT_94_2 14
#define OBJECT_94_1 13
#define OBJECT_94_0 12
#define FREE_REFERENCE_94_0 11
#define FREE_REFERENCES_LABEL_94_0 10
#define NUMBER_OF_LINKER_SECTIONS_94_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_94 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_94_4);
      goto image_typeP_4;

    case 1:
      current_block = (Rpc - LABEL_94_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_94_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_94_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (image_typeP_10)
DEFLABEL (image_typeP_4)
  INTERRUPT_CHECK (26, LABEL_94_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_94_0]));
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
  Rvl = (current_block [OBJECT_94_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_94_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_95_4 3
#define LABEL_95_5 5
#define LABEL_95_7 7
#define LABEL_95_9 9
#define LABEL_95_10 11
#define ENVIRONMENT_LABEL_95_3 29
#define DEBUGGING_LABEL_95_2 28
#define OBJECT_95_4 27
#define OBJECT_95_3 26
#define OBJECT_95_2 25
#define OBJECT_95_1 24
#define OBJECT_95_0 23
#define EXECUTE_CACHE_95_13 13
#define EXECUTE_CACHE_95_12 15
#define EXECUTE_CACHE_95_11 17
#define EXECUTE_CACHE_95_8 19
#define EXECUTE_CACHE_95_6 21
#define FREE_REFERENCES_LABEL_95_0 12
#define NUMBER_OF_LINKER_SECTIONS_95_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_95 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_95_4);
      goto image_type_11;

    case 1:
      current_block = (Rpc - LABEL_95_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_95_7);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_95_9);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_95_10);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (image_type_14)
DEFLABEL (image_type_11)
  INTERRUPT_CHECK (26, LABEL_95_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_95_0]))
    goto label_16;
  Wrd7 = Wrd5;
  goto label_15;

DEFLABEL (label_16)
  (Wrd7.Obj) = (current_block [OBJECT_95_1]);

DEFLABEL (label_15)
DEFLABEL (label_25)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_95_0]))
    goto label_18;
  Wrd10 = Wrd8;
  goto label_17;

DEFLABEL (label_18)
  (Wrd10.Obj) = (current_block [OBJECT_95_2]);

DEFLABEL (label_17)
DEFLABEL (label_24)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_95_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_95_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_20;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (current_block [OBJECT_95_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_10]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_95_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_95_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  Rvl = Rvl;

DEFLABEL (label_21)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd9.Obj) = (Rsp [3]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd11.Obj) = (current_block [OBJECT_95_4]);
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_12]));

DEFLABEL (label_23)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_21;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_96_4 3
#define LABEL_96_5 5
#define LABEL_96_9 7
#define LABEL_96_10 9
#define LABEL_96_11 11
#define LABEL_96_12 13
#define LABEL_96_13 15
#define LABEL_96_14 17
#define LABEL_96_15 19
#define LABEL_96_16 21
#define LABEL_96_6 23
#define LABEL_96_17 25
#define LABEL_96_18 27
#define LABEL_96_19 29
#define LABEL_96_20 31
#define LABEL_96_21 33
#define LABEL_96_8 35
#define LABEL_96_25 37
#define LABEL_96_24 39
#define LABEL_96_29 41
#define LABEL_96_26 43
#define LABEL_96_28 45
#define LABEL_96_30 47
#define LABEL_96_32 49
#define LABEL_96_33 51
#define LABEL_96_34 53
#define LABEL_96_35 55
#define ENVIRONMENT_LABEL_96_3 88
#define DEBUGGING_LABEL_96_2 87
#define OBJECT_96_17 86
#define OBJECT_96_16 85
#define OBJECT_96_15 84
#define OBJECT_96_14 83
#define OBJECT_96_13 82
#define OBJECT_96_12 81
#define OBJECT_96_11 80
#define OBJECT_96_10 79
#define OBJECT_96_9 78
#define OBJECT_96_8 77
#define OBJECT_96_7 76
#define OBJECT_96_6 75
#define OBJECT_96_5 74
#define OBJECT_96_4 73
#define OBJECT_96_3 72
#define OBJECT_96_2 71
#define OBJECT_96_1 70
#define OBJECT_96_0 69
#define EXECUTE_CACHE_96_36 57
#define EXECUTE_CACHE_96_31 59
#define EXECUTE_CACHE_96_27 61
#define EXECUTE_CACHE_96_23 63
#define EXECUTE_CACHE_96_22 65
#define EXECUTE_CACHE_96_7 67
#define FREE_REFERENCES_LABEL_96_0 56
#define NUMBER_OF_LINKER_SECTIONS_96_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_96 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd68;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd28;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd96;
  machine_word Wrd98;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd95;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd80;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd129;
  machine_word Wrd123;
  machine_word Wrd124;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd114;
  machine_word Wrd116;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_96_4);
      goto make_image_type_35;

    case 1:
      current_block = (Rpc - LABEL_96_5);
      goto continuation_18;

    case 2:
      current_block = (Rpc - LABEL_96_9);
      goto continuation_9;

    case 3:
      current_block = (Rpc - LABEL_96_10);
      goto label_45;

    case 4:
      current_block = (Rpc - LABEL_96_11);
      goto label_46;

    case 5:
      current_block = (Rpc - LABEL_96_12);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_96_13);
      goto continuation_13;

    case 7:
      current_block = (Rpc - LABEL_96_14);
      goto label_42;

    case 8:
      current_block = (Rpc - LABEL_96_15);
      goto label_43;

    case 9:
      current_block = (Rpc - LABEL_96_16);
      goto label_44;

    case 10:
      current_block = (Rpc - LABEL_96_6);
      goto lambda_17;

    case 11:
      current_block = (Rpc - LABEL_96_17);
      goto label_37;

    case 12:
      current_block = (Rpc - LABEL_96_18);
      goto label_41;

    case 13:
      current_block = (Rpc - LABEL_96_19);
      goto label_38;

    case 14:
      current_block = (Rpc - LABEL_96_20);
      goto label_39;

    case 15:
      current_block = (Rpc - LABEL_96_21);
      goto label_40;

    case 16:
      current_block = (Rpc - LABEL_96_8);
      goto continuation_30;

    case 17:
      current_block = (Rpc - LABEL_96_25);
      goto lambda_23;

    case 18:
      current_block = (Rpc - LABEL_96_24);
      goto continuation_29;

    case 19:
      current_block = (Rpc - LABEL_96_29);
      goto continuation_20;

    case 20:
      current_block = (Rpc - LABEL_96_26);
      goto continuation_19;

    case 21:
      current_block = (Rpc - LABEL_96_28);
      goto continuation_28;

    case 22:
      current_block = (Rpc - LABEL_96_30);
      goto continuation_21;

    case 23:
      current_block = (Rpc - LABEL_96_32);
      goto continuation_27;

    case 24:
      current_block = (Rpc - LABEL_96_33);
      goto continuation_26;

    case 25:
      current_block = (Rpc - LABEL_96_34);
      goto continuation_25;

    case 26:
      current_block = (Rpc - LABEL_96_35);
      goto continuation_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_image_type_48)
DEFLABEL (make_image_type_35)
  INTERRUPT_CHECK (26, LABEL_96_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_7]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_96_5);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = Rvl;
  (Wrd14.pObj) = (& (Rhp [-1]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd14.pObj)));
  (Rsp [0]) = (Wrd15.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.pObj) = (& (Rsp [1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_96_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_23;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_96_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_96_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_23;

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_96_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [3]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_96_11]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_23;

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_96_28);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [4]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_96_13]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_23;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_96_32);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [5]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_96_14]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_23;

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_96_33);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [6]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_96_15]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_23;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_96_34);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [7]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_96_16]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_23;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_96_35);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  if ((Wrd7.Obj) == (current_block [OBJECT_96_2]))
    goto label_51;
  (Wrd9.Obj) = (current_block [OBJECT_96_17]);
  (Rsp [6]) = (Wrd9.Obj);
  (Rsp [7]) = (Wrd7.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_23]));

DEFLABEL (label_51)
  (Wrd14.Obj) = (Rsp [6]);
  (Rsp [7]) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (Wrd16.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd18.Obj);
  (Rsp [1]) = Rvl;
  (Wrd20.Obj) = (Rsp [5]);
  (Rsp [6]) = (Wrd20.Obj);
  (Rsp [5]) = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_36]));

DEFLABEL (lambda_49)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_96_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_60;

DEFLABEL (label_59)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_96_9]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_23]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_96_13);

DEFLABEL (label_58)
  (Wrd83.Obj) = (Rsp [0]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 1))
    goto label_57;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd80.Obj) = ((Wrd82.pObj) [1]);

DEFLABEL (label_56)
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd91.uLng) == 1))
    goto label_55;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd90.Obj) = ((Wrd89.pObj) [0]);
  (* (--Rsp)) = (Wrd90.Obj);

DEFLABEL (label_54)
  (Wrd99.Obj) = (Rsp [1]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if (! ((Wrd100.uLng) == 1))
    goto label_53;
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd96.Obj) = ((Wrd98.pObj) [0]);

DEFLABEL (label_52)
  (Wrd105.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd96.Obj);
  (* (Rhp++)) = (Wrd105.Obj);
  (Wrd108.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd108.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_53)
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_16]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_3]), 1);

DEFLABEL (label_44)
  (Wrd96.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_15]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_3]), 1);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_14]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_1]), 1);

DEFLABEL (label_42)
  (Wrd80.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_60)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_80;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_79)
  (Wrd70.Obj) = (current_block [OBJECT_96_4]);
  (Wrd73.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd73.Lng))))
    goto label_78;
  (Wrd25.uLng) = (OBJECT_DATUM (Wrd70.Obj));
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd25.Obj) == (Wrd27.Obj))
    goto label_77;

DEFLABEL (label_76)
  (Wrd28.Obj) = (current_block [OBJECT_96_6]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd38.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd38.Lng)))
    goto label_61;
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_5]), 2);

DEFLABEL (label_61)
  (Wrd32.uLng) = (OBJECT_DATUM (Wrd28.Obj));
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd32.Obj) == (Wrd34.Obj))
    goto label_63;
  (Wrd30.Obj) = (current_block [OBJECT_96_8]);
  goto label_62;

DEFLABEL (label_63)
  (Wrd30.Obj) = (current_block [OBJECT_96_7]);

DEFLABEL (label_62)
DEFLABEL (label_75)
  Rsp = (& (Rsp [3]));
  if ((Wrd30.Obj) == ((SCHEME_OBJECT) 0))
    goto label_59;

DEFLABEL (label_74)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_73;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [1]);

DEFLABEL (label_72)
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_59;
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_9]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_71;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd53.Obj) = ((Wrd55.pObj) [1]);

DEFLABEL (label_70)
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_69;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (* (--Rsp)) = (Wrd63.Obj);

DEFLABEL (label_68)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_22]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_96_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  (Wrd117.Obj) = (Rsp [0]);
  (Wrd118.uLng) = (OBJECT_TYPE (Wrd117.Obj));
  if (! ((Wrd118.uLng) == 1))
    goto label_67;
  (Wrd116.pObj) = (OBJECT_ADDRESS (Wrd117.Obj));
  (Wrd114.Obj) = ((Wrd116.pObj) [1]);

DEFLABEL (label_66)
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd114.Obj));
  if (! ((Wrd125.uLng) == 1))
    goto label_65;
  (Wrd124.pObj) = (OBJECT_ADDRESS (Wrd114.Obj));
  (Wrd123.Obj) = ((Wrd124.pObj) [1]);

DEFLABEL (label_64)
  if ((Wrd123.Obj) == (current_block [OBJECT_96_2]))
    goto label_58;
  goto label_59;

DEFLABEL (label_65)
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_11]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_1]), 1);

DEFLABEL (label_46)
  (Wrd123.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_10]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd117.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_1]), 1);

DEFLABEL (label_45)
  (Wrd114.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_21]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_3]), 1);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_20]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_1]), 1);

DEFLABEL (label_39)
  (Wrd53.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_19]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_1]), 1);

DEFLABEL (label_38)
  (Wrd40.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_77)
  Rsp = (& (Rsp [2]));
  goto label_74;

DEFLABEL (label_78)
  (Wrd75.Obj) = (Rsp [0]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_18]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_5]), 2);

DEFLABEL (label_41)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_76;
  goto label_77;

DEFLABEL (label_80)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_17]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_3]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_96_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  goto label_74;

DEFLABEL (lambda_50)
DEFLABEL (lambda_23)
  INTERRUPT_CHECK (26, LABEL_96_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_27]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_96_26);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_83;

DEFLABEL (label_82)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_30]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_31]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_96_30);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  ((Wrd9.pObj) [0]) = Rvl;
  (Wrd10.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_81;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  Rvl = ((Wrd13.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_81)
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_1]), 1);

DEFLABEL (label_83)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_29]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_96_12]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_23]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_96_29);
  goto label_82;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_97_4 3
#define ENVIRONMENT_LABEL_97_3 7
#define DEBUGGING_LABEL_97_2 6
#define OBJECT_97_1 5
#define OBJECT_97_0 4
#define FREE_REFERENCES_LABEL_97_0 4
#define NUMBER_OF_LINKER_SECTIONS_97_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_97 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_97_4);
      goto image_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (image_type_3)
DEFLABEL (image_type_0)
  INTERRUPT_CHECK (26, LABEL_97_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_97_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_97_1]), 2);

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

#define LABEL_98_4 3
#define ENVIRONMENT_LABEL_98_3 7
#define DEBUGGING_LABEL_98_2 6
#define OBJECT_98_1 5
#define OBJECT_98_0 4
#define FREE_REFERENCES_LABEL_98_0 4
#define NUMBER_OF_LINKER_SECTIONS_98_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_98 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_98_4);
      goto image_descriptor_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (image_descriptor_3)
DEFLABEL (image_descriptor_0)
  INTERRUPT_CHECK (26, LABEL_98_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_98_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_1]), 2);

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

#define LABEL_99_4 3
#define ENVIRONMENT_LABEL_99_3 8
#define DEBUGGING_LABEL_99_2 7
#define OBJECT_99_2 6
#define OBJECT_99_1 5
#define OBJECT_99_0 4
#define FREE_REFERENCES_LABEL_99_0 4
#define NUMBER_OF_LINKER_SECTIONS_99_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_99 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_99_4);
      goto set_image_typeB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_image_typeB_3)
DEFLABEL (set_image_typeB_0)
  INTERRUPT_CHECK (26, LABEL_99_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_99_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_99_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_100_4 3
#define ENVIRONMENT_LABEL_100_3 8
#define DEBUGGING_LABEL_100_2 7
#define OBJECT_100_2 6
#define OBJECT_100_1 5
#define OBJECT_100_0 4
#define FREE_REFERENCES_LABEL_100_0 4
#define NUMBER_OF_LINKER_SECTIONS_100_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_100 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_100_4);
      goto set_image_descriptorB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_image_descriptorB_3)
DEFLABEL (set_image_descriptorB_0)
  INTERRUPT_CHECK (26, LABEL_100_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_100_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_100_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_101_4 3
#define LABEL_101_5 5
#define LABEL_101_6 7
#define LABEL_101_7 9
#define ENVIRONMENT_LABEL_101_3 17
#define DEBUGGING_LABEL_101_2 16
#define OBJECT_101_3 15
#define OBJECT_101_2 14
#define OBJECT_101_1 13
#define OBJECT_101_0 12
#define FREE_REFERENCE_101_0 11
#define FREE_REFERENCES_LABEL_101_0 10
#define NUMBER_OF_LINKER_SECTIONS_101_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_101 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_101_4);
      goto imageP_4;

    case 1:
      current_block = (Rpc - LABEL_101_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_101_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_101_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (imageP_10)
DEFLABEL (imageP_4)
  INTERRUPT_CHECK (26, LABEL_101_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_101_0]));
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
  Rvl = (current_block [OBJECT_101_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_101_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_102_4 3
#define LABEL_102_5 5
#define LABEL_102_8 7
#define LABEL_102_7 9
#define ENVIRONMENT_LABEL_102_3 18
#define DEBUGGING_LABEL_102_2 17
#define OBJECT_102_1 16
#define OBJECT_102_0 15
#define EXECUTE_CACHE_102_9 11
#define EXECUTE_CACHE_102_6 13
#define FREE_REFERENCES_LABEL_102_0 10
#define NUMBER_OF_LINKER_SECTIONS_102_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_102 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_102_4);
      goto image_create_4;

    case 1:
      current_block = (Rpc - LABEL_102_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_102_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_102_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (image_create_8)
DEFLABEL (image_create_4)
  INTERRUPT_CHECK (26, LABEL_102_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_102_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 62))
    goto label_10;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd19.Lng))))
    goto label_10;
  (Wrd13.Obj) = ((Wrd17.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_9)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_102_7);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_9]));

DEFLABEL (label_10)
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.Obj) = (current_block [OBJECT_102_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_103_4 3
#define LABEL_103_6 5
#define LABEL_103_7 7
#define LABEL_103_5 9
#define LABEL_103_8 11
#define LABEL_103_9 13
#define ENVIRONMENT_LABEL_103_3 22
#define DEBUGGING_LABEL_103_2 21
#define OBJECT_103_4 20
#define OBJECT_103_3 19
#define OBJECT_103_2 18
#define OBJECT_103_1 17
#define OBJECT_103_0 16
#define FREE_REFERENCE_103_0 15
#define FREE_REFERENCES_LABEL_103_0 14
#define NUMBER_OF_LINKER_SECTIONS_103_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_103 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      goto image_destroy_4;

    case 1:
      current_block = (Rpc - LABEL_103_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_103_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_103_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_103_8);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_103_9);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (image_destroy_11)
DEFLABEL (image_destroy_4)
  INTERRUPT_CHECK (26, LABEL_103_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_21;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_21;
  (Wrd9.Obj) = ((Wrd15.pObj) [2]);

DEFLABEL (label_20)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_19;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd31.Lng))))
    goto label_19;
  (Wrd26.Obj) = ((Wrd29.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_18)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_103_5);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_103_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_17;
  Wrd6 = Wrd10;

DEFLABEL (label_16)
  Wrd5 = Wrd6;
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_15;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_15;
  ((Wrd33.pObj) [2]) = (Wrd6.Obj);

DEFLABEL (label_14)
  (Wrd12.Obj) = (current_block [OBJECT_103_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd27.uLng) == 62)
    goto label_13;

DEFLABEL (label_12)
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_3]), 3);

DEFLABEL (label_13)
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd25.Lng))))
    goto label_12;
  ((Wrd23.pObj) [3]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_103_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.Obj) = (current_block [OBJECT_103_0]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_9]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_3]), 3);

DEFLABEL (label_9)
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_103_8])), (Wrd7.pObj));

DEFLABEL (label_8)
  (Wrd6.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd34.Obj) = (current_block [OBJECT_103_2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_7]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_103_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_1]), 2);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_104_4 3
#define LABEL_104_5 5
#define LABEL_104_6 7
#define ENVIRONMENT_LABEL_104_3 12
#define DEBUGGING_LABEL_104_2 11
#define OBJECT_104_2 10
#define OBJECT_104_1 9
#define OBJECT_104_0 8
#define FREE_REFERENCES_LABEL_104_0 8
#define NUMBER_OF_LINKER_SECTIONS_104_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_104 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_104_4);
      goto image_width_2;

    case 1:
      current_block = (Rpc - LABEL_104_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_104_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (image_width_7)
DEFLABEL (image_width_2)
  INTERRUPT_CHECK (26, LABEL_104_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_10)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_9;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd27.Lng))))
    goto label_9;
  (Wrd22.Obj) = ((Wrd25.pObj) [4]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_8)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_9)
  (Wrd30.Obj) = (current_block [OBJECT_104_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_104_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_105_4 3
#define LABEL_105_5 5
#define LABEL_105_6 7
#define ENVIRONMENT_LABEL_105_3 12
#define DEBUGGING_LABEL_105_2 11
#define OBJECT_105_2 10
#define OBJECT_105_1 9
#define OBJECT_105_0 8
#define FREE_REFERENCES_LABEL_105_0 8
#define NUMBER_OF_LINKER_SECTIONS_105_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_105 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_105_4);
      goto image_height_2;

    case 1:
      current_block = (Rpc - LABEL_105_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_105_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (image_height_7)
DEFLABEL (image_height_2)
  INTERRUPT_CHECK (26, LABEL_105_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_10)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_9;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd27.Lng))))
    goto label_9;
  (Wrd22.Obj) = ((Wrd25.pObj) [5]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_8)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_9)
  (Wrd30.Obj) = (current_block [OBJECT_105_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_105_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_106_4 3
#define LABEL_106_5 5
#define LABEL_106_6 7
#define ENVIRONMENT_LABEL_106_3 12
#define DEBUGGING_LABEL_106_2 11
#define OBJECT_106_2 10
#define OBJECT_106_1 9
#define OBJECT_106_0 8
#define FREE_REFERENCES_LABEL_106_0 8
#define NUMBER_OF_LINKER_SECTIONS_106_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_106 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_106_4);
      goto image_draw_2;

    case 1:
      current_block = (Rpc - LABEL_106_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_106_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (image_draw_7)
DEFLABEL (image_draw_2)
  INTERRUPT_CHECK (26, LABEL_106_4);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_10)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_9;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd27.Lng))))
    goto label_9;
  (Wrd22.Obj) = ((Wrd25.pObj) [6]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_8)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (label_9)
  (Wrd30.Obj) = (current_block [OBJECT_106_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_106_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_107_4 3
#define LABEL_107_5 5
#define LABEL_107_6 7
#define ENVIRONMENT_LABEL_107_3 12
#define DEBUGGING_LABEL_107_2 11
#define OBJECT_107_2 10
#define OBJECT_107_1 9
#define OBJECT_107_0 8
#define FREE_REFERENCES_LABEL_107_0 8
#define NUMBER_OF_LINKER_SECTIONS_107_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_107 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_107_4);
      goto image_draw_subimage_2;

    case 1:
      current_block = (Rpc - LABEL_107_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_107_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (image_draw_subimage_7)
DEFLABEL (image_draw_subimage_2)
  INTERRUPT_CHECK (26, LABEL_107_4);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_10)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_9;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd27.Lng))))
    goto label_9;
  (Wrd22.Obj) = ((Wrd25.pObj) [7]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_8)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 9);
  }

DEFLABEL (label_9)
  (Wrd30.Obj) = (current_block [OBJECT_107_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_107_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_108_4 3
#define LABEL_108_5 5
#define LABEL_108_6 7
#define ENVIRONMENT_LABEL_108_3 12
#define DEBUGGING_LABEL_108_2 11
#define OBJECT_108_2 10
#define OBJECT_108_1 9
#define OBJECT_108_0 8
#define FREE_REFERENCES_LABEL_108_0 8
#define NUMBER_OF_LINKER_SECTIONS_108_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
graphics_so_code_108 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_108_4);
      goto image_fill_from_byte_vector_2;

    case 1:
      current_block = (Rpc - LABEL_108_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_108_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (image_fill_from_byte_vector_7)
DEFLABEL (image_fill_from_byte_vector_2)
  INTERRUPT_CHECK (26, LABEL_108_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_10)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_9;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd27.Lng))))
    goto label_9;
  (Wrd22.Obj) = ((Wrd25.pObj) [8]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_8)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_9)
  (Wrd30.Obj) = (current_block [OBJECT_108_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_108_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
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
#define LABEL_14 17
#define TAG_15 7
#define LABEL_18 19
#define LABEL_16 21
#define LABEL_17 23
#define LABEL_20 25
#define LABEL_21 27
#define LABEL_22 29
#define LABEL_23 31
#define LABEL_24 33
#define LABEL_25 35
#define LABEL_26 37
#define LABEL_27 39
#define LABEL_28 41
#define LABEL_29 43
#define LABEL_30 45
#define LABEL_31 47
#define LABEL_32 49
#define LABEL_33 51
#define LABEL_34 53
#define LABEL_35 55
#define LABEL_36 57
#define LABEL_37 59
#define LABEL_40 61
#define LABEL_38 63
#define LABEL_39 65
#define LABEL_41 67
#define LABEL_42 69
#define LABEL_43 71
#define LABEL_44 73
#define LABEL_45 75
#define LABEL_46 77
#define LABEL_47 79
#define LABEL_48 81
#define LABEL_49 83
#define LABEL_50 85
#define LABEL_51 87
#define LABEL_52 89
#define LABEL_53 91
#define LABEL_57 93
#define LABEL_54 95
#define LABEL_55 97
#define LABEL_56 99
#define LABEL_58 101
#define LABEL_59 103
#define TAG_60 50
#define LABEL_63 105
#define LABEL_61 107
#define LABEL_62 109
#define LABEL_64 111
#define LABEL_65 113
#define LABEL_66 115
#define LABEL_67 117
#define LABEL_68 119
#define LABEL_69 121
#define LABEL_70 123
#define LABEL_71 125
#define LABEL_74 127
#define LABEL_72 129
#define LABEL_73 131
#define LABEL_75 133
#define LABEL_76 135
#define LABEL_77 137
#define LABEL_78 139
#define LABEL_79 141
#define LABEL_81 143
#define LABEL_82 145
#define LABEL_83 147
#define LABEL_84 149
#define LABEL_85 151
#define LABEL_86 153
#define LABEL_87 155
#define LABEL_88 157
#define LABEL_89 159
#define LABEL_90 161
#define LABEL_91 163
#define LABEL_92 165
#define LABEL_93 167
#define LABEL_94 169
#define LABEL_95 171
#define LABEL_96 173
#define LABEL_97 175
#define LABEL_98 177
#define LABEL_99 179
#define LABEL_100 181
#define LABEL_101 183
#define LABEL_102 185
#define LABEL_103 187
#define LABEL_104 189
#define LABEL_105 191
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
#define LABEL_126 233
#define LABEL_127 235
#define LABEL_128 237
#define LABEL_129 239
#define LABEL_130 241
#define LABEL_134 243
#define LABEL_131 245
#define LABEL_132 247
#define LABEL_133 249
#define LABEL_135 251
#define LABEL_136 253
#define TAG_137 125
#define LABEL_138 255
#define LABEL_139 257
#define LABEL_140 259
#define LABEL_141 261
#define LABEL_142 263
#define LABEL_143 265
#define LABEL_146 267
#define LABEL_144 269
#define LABEL_145 271
#define LABEL_147 273
#define LABEL_148 275
#define LABEL_149 277
#define LABEL_150 279
#define LABEL_154 281
#define LABEL_151 283
#define LABEL_152 285
#define LABEL_153 287
#define LABEL_155 289
#define LABEL_156 291
#define TAG_157 144
#define LABEL_158 293
#define LABEL_159 295
#define LABEL_160 297
#define LABEL_163 299
#define LABEL_161 301
#define LABEL_162 303
#define LABEL_164 305
#define LABEL_165 307
#define LABEL_166 309
#define LABEL_167 311
#define LABEL_168 313
#define LABEL_169 315
#define LABEL_170 317
#define LABEL_171 319
#define LABEL_172 321
#define LABEL_173 323
#define LABEL_174 325
#define ENVIRONMENT_LABEL_3 605
#define DEBUGGING_LABEL_2 604
#define PURIFICATION_ROOT 603
#define OBJECT_259 602
#define OBJECT_258 601
#define OBJECT_257 600
#define OBJECT_256 599
#define OBJECT_255 598
#define OBJECT_254 597
#define OBJECT_253 596
#define OBJECT_252 595
#define OBJECT_251 594
#define OBJECT_250 593
#define OBJECT_249 592
#define OBJECT_248 591
#define OBJECT_247 590
#define OBJECT_246 589
#define OBJECT_245 588
#define OBJECT_244 587
#define OBJECT_243 586
#define OBJECT_242 585
#define OBJECT_241 584
#define OBJECT_240 583
#define OBJECT_239 582
#define OBJECT_238 581
#define OBJECT_237 580
#define OBJECT_236 579
#define OBJECT_235 578
#define OBJECT_234 577
#define OBJECT_233 576
#define OBJECT_232 575
#define OBJECT_231 574
#define OBJECT_230 573
#define OBJECT_229 572
#define OBJECT_228 571
#define OBJECT_227 570
#define OBJECT_226 569
#define OBJECT_225 568
#define OBJECT_224 567
#define OBJECT_223 566
#define OBJECT_222 565
#define OBJECT_221 564
#define OBJECT_220 563
#define OBJECT_219 562
#define OBJECT_218 561
#define OBJECT_217 560
#define OBJECT_216 559
#define OBJECT_215 558
#define OBJECT_214 557
#define OBJECT_213 556
#define OBJECT_212 555
#define OBJECT_211 554
#define OBJECT_210 553
#define OBJECT_209 552
#define OBJECT_208 551
#define OBJECT_207 550
#define OBJECT_206 549
#define OBJECT_205 548
#define OBJECT_204 547
#define OBJECT_203 546
#define OBJECT_202 545
#define OBJECT_201 544
#define OBJECT_200 543
#define OBJECT_199 542
#define OBJECT_198 541
#define OBJECT_197 540
#define OBJECT_196 539
#define OBJECT_195 538
#define OBJECT_194 537
#define OBJECT_193 536
#define OBJECT_192 535
#define OBJECT_191 534
#define OBJECT_190 533
#define OBJECT_189 532
#define OBJECT_188 531
#define OBJECT_187 530
#define OBJECT_186 529
#define OBJECT_185 528
#define OBJECT_184 527
#define OBJECT_183 526
#define OBJECT_182 525
#define OBJECT_181 524
#define OBJECT_180 523
#define OBJECT_179 522
#define OBJECT_178 521
#define OBJECT_177 520
#define OBJECT_176 519
#define OBJECT_175 518
#define OBJECT_174 517
#define OBJECT_173 516
#define OBJECT_172 515
#define OBJECT_171 514
#define OBJECT_170 513
#define OBJECT_169 512
#define OBJECT_168 511
#define OBJECT_167 510
#define OBJECT_166 509
#define OBJECT_165 508
#define OBJECT_164 507
#define OBJECT_163 506
#define OBJECT_162 505
#define OBJECT_161 504
#define OBJECT_160 503
#define OBJECT_159 502
#define OBJECT_158 501
#define OBJECT_157 500
#define OBJECT_156 499
#define OBJECT_155 498
#define OBJECT_154 497
#define OBJECT_153 496
#define OBJECT_152 495
#define OBJECT_151 494
#define OBJECT_150 493
#define OBJECT_149 492
#define OBJECT_148 491
#define OBJECT_147 490
#define OBJECT_146 489
#define OBJECT_145 488
#define OBJECT_144 487
#define OBJECT_143 486
#define OBJECT_142 485
#define OBJECT_141 484
#define OBJECT_140 483
#define OBJECT_139 482
#define OBJECT_138 481
#define OBJECT_137 480
#define OBJECT_136 479
#define OBJECT_135 478
#define OBJECT_134 477
#define OBJECT_133 476
#define OBJECT_132 475
#define OBJECT_131 474
#define OBJECT_130 473
#define OBJECT_129 472
#define OBJECT_128 471
#define OBJECT_127 470
#define OBJECT_126 469
#define OBJECT_125 468
#define OBJECT_124 467
#define OBJECT_123 466
#define OBJECT_122 465
#define OBJECT_121 464
#define OBJECT_120 463
#define OBJECT_119 462
#define OBJECT_118 461
#define OBJECT_117 460
#define OBJECT_116 459
#define OBJECT_115 458
#define OBJECT_114 457
#define OBJECT_113 456
#define OBJECT_112 455
#define OBJECT_111 454
#define OBJECT_110 453
#define OBJECT_109 452
#define OBJECT_108 451
#define OBJECT_107 450
#define OBJECT_106 449
#define OBJECT_105 448
#define OBJECT_104 447
#define OBJECT_103 446
#define OBJECT_102 445
#define OBJECT_101 444
#define OBJECT_100 443
#define OBJECT_99 442
#define OBJECT_98 441
#define OBJECT_97 440
#define OBJECT_96 439
#define OBJECT_95 438
#define OBJECT_94 437
#define OBJECT_93 436
#define OBJECT_92 435
#define OBJECT_91 434
#define OBJECT_90 433
#define OBJECT_89 432
#define OBJECT_88 431
#define OBJECT_87 430
#define OBJECT_86 429
#define OBJECT_85 428
#define OBJECT_84 427
#define OBJECT_83 426
#define OBJECT_82 425
#define OBJECT_81 424
#define OBJECT_80 423
#define OBJECT_79 422
#define OBJECT_78 421
#define OBJECT_77 420
#define OBJECT_76 419
#define OBJECT_75 418
#define OBJECT_74 417
#define OBJECT_73 416
#define OBJECT_72 415
#define OBJECT_71 414
#define OBJECT_70 413
#define OBJECT_69 412
#define OBJECT_68 411
#define OBJECT_67 410
#define OBJECT_66 409
#define OBJECT_65 408
#define OBJECT_64 407
#define OBJECT_63 406
#define OBJECT_62 405
#define OBJECT_61 404
#define OBJECT_60 403
#define OBJECT_59 402
#define OBJECT_58 401
#define OBJECT_57 400
#define OBJECT_56 399
#define OBJECT_55 398
#define OBJECT_54 397
#define OBJECT_53 396
#define OBJECT_52 395
#define OBJECT_51 394
#define OBJECT_50 393
#define OBJECT_49 392
#define OBJECT_48 391
#define OBJECT_47 390
#define OBJECT_46 389
#define OBJECT_45 388
#define OBJECT_44 387
#define OBJECT_43 386
#define OBJECT_42 385
#define OBJECT_41 384
#define OBJECT_40 383
#define OBJECT_39 382
#define OBJECT_38 381
#define OBJECT_37 380
#define OBJECT_36 379
#define OBJECT_35 378
#define OBJECT_34 377
#define OBJECT_33 376
#define OBJECT_32 375
#define OBJECT_31 374
#define OBJECT_30 373
#define OBJECT_29 372
#define OBJECT_28 371
#define OBJECT_27 370
#define OBJECT_26 369
#define OBJECT_25 368
#define OBJECT_24 367
#define OBJECT_23 366
#define OBJECT_22 365
#define OBJECT_21 364
#define OBJECT_20 363
#define OBJECT_19 362
#define OBJECT_18 361
#define OBJECT_17 360
#define OBJECT_16 359
#define OBJECT_15 358
#define OBJECT_14 357
#define OBJECT_13 356
#define OBJECT_12 355
#define OBJECT_11 354
#define OBJECT_10 353
#define OBJECT_9 352
#define OBJECT_8 351
#define OBJECT_7 350
#define OBJECT_6 349
#define OBJECT_5 348
#define OBJECT_4 347
#define OBJECT_3 346
#define OBJECT_2 345
#define OBJECT_1 344
#define OBJECT_0 343
#define EXECUTE_CACHE_7 327
#define FREE_REFERENCE_3 330
#define FREE_REFERENCE_2 331
#define FREE_REFERENCE_1 332
#define FREE_REFERENCE_0 333
#define GLOBAL_EXECUTE_CACHE_80 335
#define GLOBAL_EXECUTE_CACHE_19 337
#define GLOBAL_EXECUTE_CACHE_12 339
#define GLOBAL_EXECUTE_CACHE_11 341
#define FREE_REFERENCES_LABEL_0 326
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
graphics_so_d68554971a20edd6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd13;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd84;
  machine_word Wrd83;
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
      goto continuation_22;

    case 1:
      current_block = (Rpc - LABEL_10);
      goto label_195;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_21;

    case 3:
      current_block = (Rpc - LABEL_6);
      goto continuation_20;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_28;

    case 5:
      current_block = (Rpc - LABEL_9);
      goto continuation_23;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_29;

    case 7:
      current_block = (Rpc - LABEL_14);
      goto Z__make_graphics_device_type_206;

    case 8:
      current_block = (Rpc - LABEL_18);
      goto label_196;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_30;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto continuation_25;

    case 11:
      current_block = (Rpc - LABEL_20);
      goto continuation_31;

    case 12:
      current_block = (Rpc - LABEL_21);
      goto continuation_32;

    case 13:
      current_block = (Rpc - LABEL_22);
      goto continuation_33;

    case 14:
      current_block = (Rpc - LABEL_23);
      goto continuation_34;

    case 15:
      current_block = (Rpc - LABEL_24);
      goto continuation_35;

    case 16:
      current_block = (Rpc - LABEL_25);
      goto continuation_36;

    case 17:
      current_block = (Rpc - LABEL_26);
      goto continuation_37;

    case 18:
      current_block = (Rpc - LABEL_27);
      goto continuation_38;

    case 19:
      current_block = (Rpc - LABEL_28);
      goto continuation_39;

    case 20:
      current_block = (Rpc - LABEL_29);
      goto continuation_40;

    case 21:
      current_block = (Rpc - LABEL_30);
      goto continuation_41;

    case 22:
      current_block = (Rpc - LABEL_31);
      goto continuation_42;

    case 23:
      current_block = (Rpc - LABEL_32);
      goto continuation_43;

    case 24:
      current_block = (Rpc - LABEL_33);
      goto continuation_44;

    case 25:
      current_block = (Rpc - LABEL_34);
      goto continuation_45;

    case 26:
      current_block = (Rpc - LABEL_35);
      goto continuation_46;

    case 27:
      current_block = (Rpc - LABEL_36);
      goto continuation_47;

    case 28:
      current_block = (Rpc - LABEL_37);
      goto continuation_48;

    case 29:
      current_block = (Rpc - LABEL_40);
      goto label_197;

    case 30:
      current_block = (Rpc - LABEL_38);
      goto continuation_50;

    case 31:
      current_block = (Rpc - LABEL_39);
      goto continuation_49;

    case 32:
      current_block = (Rpc - LABEL_41);
      goto continuation_51;

    case 33:
      current_block = (Rpc - LABEL_42);
      goto continuation_52;

    case 34:
      current_block = (Rpc - LABEL_43);
      goto continuation_53;

    case 35:
      current_block = (Rpc - LABEL_44);
      goto continuation_54;

    case 36:
      current_block = (Rpc - LABEL_45);
      goto continuation_55;

    case 37:
      current_block = (Rpc - LABEL_46);
      goto continuation_56;

    case 38:
      current_block = (Rpc - LABEL_47);
      goto continuation_57;

    case 39:
      current_block = (Rpc - LABEL_48);
      goto continuation_58;

    case 40:
      current_block = (Rpc - LABEL_49);
      goto continuation_59;

    case 41:
      current_block = (Rpc - LABEL_50);
      goto continuation_60;

    case 42:
      current_block = (Rpc - LABEL_51);
      goto continuation_61;

    case 43:
      current_block = (Rpc - LABEL_52);
      goto continuation_62;

    case 44:
      current_block = (Rpc - LABEL_53);
      goto continuation_70;

    case 45:
      current_block = (Rpc - LABEL_57);
      goto label_198;

    case 46:
      current_block = (Rpc - LABEL_54);
      goto continuation_69;

    case 47:
      current_block = (Rpc - LABEL_55);
      goto continuation_76;

    case 48:
      current_block = (Rpc - LABEL_56);
      goto continuation_71;

    case 49:
      current_block = (Rpc - LABEL_58);
      goto continuation_77;

    case 50:
      current_block = (Rpc - LABEL_59);
      goto Z__make_graphics_device_207;

    case 51:
      current_block = (Rpc - LABEL_63);
      goto label_199;

    case 52:
      current_block = (Rpc - LABEL_61);
      goto continuation_78;

    case 53:
      current_block = (Rpc - LABEL_62);
      goto continuation_73;

    case 54:
      current_block = (Rpc - LABEL_64);
      goto continuation_79;

    case 55:
      current_block = (Rpc - LABEL_65);
      goto continuation_80;

    case 56:
      current_block = (Rpc - LABEL_66);
      goto continuation_81;

    case 57:
      current_block = (Rpc - LABEL_67);
      goto continuation_82;

    case 58:
      current_block = (Rpc - LABEL_68);
      goto continuation_83;

    case 59:
      current_block = (Rpc - LABEL_69);
      goto continuation_84;

    case 60:
      current_block = (Rpc - LABEL_70);
      goto continuation_85;

    case 61:
      current_block = (Rpc - LABEL_71);
      goto continuation_86;

    case 62:
      current_block = (Rpc - LABEL_74);
      goto label_200;

    case 63:
      current_block = (Rpc - LABEL_72);
      goto continuation_88;

    case 64:
      current_block = (Rpc - LABEL_73);
      goto continuation_87;

    case 65:
      current_block = (Rpc - LABEL_75);
      goto continuation_89;

    case 66:
      current_block = (Rpc - LABEL_76);
      goto continuation_90;

    case 67:
      current_block = (Rpc - LABEL_77);
      goto continuation_94;

    case 68:
      current_block = (Rpc - LABEL_78);
      goto continuation_93;

    case 69:
      current_block = (Rpc - LABEL_79);
      goto continuation_91;

    case 70:
      current_block = (Rpc - LABEL_81);
      goto continuation_95;

    case 71:
      current_block = (Rpc - LABEL_82);
      goto continuation_96;

    case 72:
      current_block = (Rpc - LABEL_83);
      goto continuation_97;

    case 73:
      current_block = (Rpc - LABEL_84);
      goto continuation_98;

    case 74:
      current_block = (Rpc - LABEL_85);
      goto continuation_99;

    case 75:
      current_block = (Rpc - LABEL_86);
      goto continuation_100;

    case 76:
      current_block = (Rpc - LABEL_87);
      goto continuation_101;

    case 77:
      current_block = (Rpc - LABEL_88);
      goto continuation_102;

    case 78:
      current_block = (Rpc - LABEL_89);
      goto continuation_103;

    case 79:
      current_block = (Rpc - LABEL_90);
      goto continuation_104;

    case 80:
      current_block = (Rpc - LABEL_91);
      goto continuation_105;

    case 81:
      current_block = (Rpc - LABEL_92);
      goto continuation_106;

    case 82:
      current_block = (Rpc - LABEL_93);
      goto continuation_107;

    case 83:
      current_block = (Rpc - LABEL_94);
      goto continuation_108;

    case 84:
      current_block = (Rpc - LABEL_95);
      goto continuation_109;

    case 85:
      current_block = (Rpc - LABEL_96);
      goto continuation_110;

    case 86:
      current_block = (Rpc - LABEL_97);
      goto continuation_111;

    case 87:
      current_block = (Rpc - LABEL_98);
      goto continuation_112;

    case 88:
      current_block = (Rpc - LABEL_99);
      goto continuation_113;

    case 89:
      current_block = (Rpc - LABEL_100);
      goto continuation_114;

    case 90:
      current_block = (Rpc - LABEL_101);
      goto continuation_115;

    case 91:
      current_block = (Rpc - LABEL_102);
      goto continuation_116;

    case 92:
      current_block = (Rpc - LABEL_103);
      goto continuation_117;

    case 93:
      current_block = (Rpc - LABEL_104);
      goto continuation_118;

    case 94:
      current_block = (Rpc - LABEL_105);
      goto continuation_119;

    case 95:
      current_block = (Rpc - LABEL_106);
      goto continuation_120;

    case 96:
      current_block = (Rpc - LABEL_107);
      goto continuation_121;

    case 97:
      current_block = (Rpc - LABEL_108);
      goto continuation_122;

    case 98:
      current_block = (Rpc - LABEL_109);
      goto continuation_123;

    case 99:
      current_block = (Rpc - LABEL_110);
      goto continuation_124;

    case 100:
      current_block = (Rpc - LABEL_111);
      goto continuation_125;

    case 101:
      current_block = (Rpc - LABEL_112);
      goto continuation_126;

    case 102:
      current_block = (Rpc - LABEL_113);
      goto continuation_127;

    case 103:
      current_block = (Rpc - LABEL_114);
      goto continuation_128;

    case 104:
      current_block = (Rpc - LABEL_115);
      goto continuation_129;

    case 105:
      current_block = (Rpc - LABEL_116);
      goto continuation_130;

    case 106:
      current_block = (Rpc - LABEL_117);
      goto continuation_131;

    case 107:
      current_block = (Rpc - LABEL_118);
      goto continuation_132;

    case 108:
      current_block = (Rpc - LABEL_119);
      goto continuation_133;

    case 109:
      current_block = (Rpc - LABEL_120);
      goto continuation_134;

    case 110:
      current_block = (Rpc - LABEL_121);
      goto continuation_135;

    case 111:
      current_block = (Rpc - LABEL_122);
      goto continuation_136;

    case 112:
      current_block = (Rpc - LABEL_123);
      goto continuation_137;

    case 113:
      current_block = (Rpc - LABEL_124);
      goto continuation_138;

    case 114:
      current_block = (Rpc - LABEL_125);
      goto continuation_139;

    case 115:
      current_block = (Rpc - LABEL_126);
      goto continuation_140;

    case 116:
      current_block = (Rpc - LABEL_127);
      goto continuation_141;

    case 117:
      current_block = (Rpc - LABEL_128);
      goto continuation_142;

    case 118:
      current_block = (Rpc - LABEL_129);
      goto continuation_143;

    case 119:
      current_block = (Rpc - LABEL_130);
      goto continuation_152;

    case 120:
      current_block = (Rpc - LABEL_134);
      goto label_201;

    case 121:
      current_block = (Rpc - LABEL_131);
      goto continuation_151;

    case 122:
      current_block = (Rpc - LABEL_132);
      goto continuation_157;

    case 123:
      current_block = (Rpc - LABEL_133);
      goto continuation_153;

    case 124:
      current_block = (Rpc - LABEL_135);
      goto continuation_158;

    case 125:
      current_block = (Rpc - LABEL_136);
      goto Z__make_image_type_208;

    case 126:
      current_block = (Rpc - LABEL_138);
      goto continuation_159;

    case 127:
      current_block = (Rpc - LABEL_139);
      goto continuation_160;

    case 128:
      current_block = (Rpc - LABEL_140);
      goto continuation_161;

    case 129:
      current_block = (Rpc - LABEL_141);
      goto continuation_162;

    case 130:
      current_block = (Rpc - LABEL_142);
      goto continuation_163;

    case 131:
      current_block = (Rpc - LABEL_143);
      goto continuation_164;

    case 132:
      current_block = (Rpc - LABEL_146);
      goto label_202;

    case 133:
      current_block = (Rpc - LABEL_144);
      goto continuation_166;

    case 134:
      current_block = (Rpc - LABEL_145);
      goto continuation_165;

    case 135:
      current_block = (Rpc - LABEL_147);
      goto continuation_167;

    case 136:
      current_block = (Rpc - LABEL_148);
      goto continuation_168;

    case 137:
      current_block = (Rpc - LABEL_149);
      goto continuation_169;

    case 138:
      current_block = (Rpc - LABEL_150);
      goto continuation_173;

    case 139:
      current_block = (Rpc - LABEL_154);
      goto label_203;

    case 140:
      current_block = (Rpc - LABEL_151);
      goto continuation_172;

    case 141:
      current_block = (Rpc - LABEL_152);
      goto continuation_178;

    case 142:
      current_block = (Rpc - LABEL_153);
      goto continuation_174;

    case 143:
      current_block = (Rpc - LABEL_155);
      goto continuation_179;

    case 144:
      current_block = (Rpc - LABEL_156);
      goto Z__make_image_209;

    case 145:
      current_block = (Rpc - LABEL_158);
      goto continuation_180;

    case 146:
      current_block = (Rpc - LABEL_159);
      goto continuation_181;

    case 147:
      current_block = (Rpc - LABEL_160);
      goto continuation_182;

    case 148:
      current_block = (Rpc - LABEL_163);
      goto label_204;

    case 149:
      current_block = (Rpc - LABEL_161);
      goto continuation_184;

    case 150:
      current_block = (Rpc - LABEL_162);
      goto continuation_183;

    case 151:
      current_block = (Rpc - LABEL_164);
      goto continuation_185;

    case 152:
      current_block = (Rpc - LABEL_165);
      goto continuation_186;

    case 153:
      current_block = (Rpc - LABEL_166);
      goto continuation_187;

    case 154:
      current_block = (Rpc - LABEL_167);
      goto continuation_188;

    case 155:
      current_block = (Rpc - LABEL_168);
      goto continuation_189;

    case 156:
      current_block = (Rpc - LABEL_169);
      goto continuation_190;

    case 157:
      current_block = (Rpc - LABEL_170);
      goto continuation_191;

    case 158:
      current_block = (Rpc - LABEL_171);
      goto continuation_192;

    case 159:
      current_block = (Rpc - LABEL_172);
      goto label_211;

    case 160:
      current_block = (Rpc - LABEL_173);
      goto label_212;

    case 161:
      current_block = (Rpc - LABEL_174);
      goto expression_194;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_194)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_173])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_212)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_211)
  {
    static const short sections [] =
      {
	0,
	0,
	0,
	0,
	0,
	0,
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
	1,
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
	1,
	1,
	1,
	0,
	2,
	1,
	2,
	2,
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
	0,
	0,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 108)
      goto label_210;
    blocks = (current_block [OBJECT_259]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_172])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_210)
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

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_6);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (current_block [OBJECT_4]);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd8.Obj);
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
  (Wrd83.pObj) = (& (Rhp [-2]));
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd83.pObj)));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd86.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd87.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_228;
  Wrd11 = Wrd15;

DEFLABEL (label_227)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_9);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x1414, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_226;
  Wrd11 = Wrd15;

DEFLABEL (label_225)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_39);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd15.Obj) = (current_block [OBJECT_73]);
  (Wrd16.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_74]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_75]);
  (* (Rhp++)) = (Wrd28.Obj);
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
  (Wrd37.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_54);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_224;
  Wrd11 = Wrd15;

DEFLABEL (label_223)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_56);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_60);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_59])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_83]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_92]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_66);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_93]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_94]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_95]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_96]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_98]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_99]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_100]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_101]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_102]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_71);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_222;
  Wrd11 = Wrd15;

DEFLABEL (label_221)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_73);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_105]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_72);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_103]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_75);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_106]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_107]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_76);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_108]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_80]));

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_79);
  (Wrd9.Obj) = (current_block [OBJECT_112]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_113]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_114]), 2);

DEFLABEL (continuation_93)
  INTERRUPT_CHECK (27, LABEL_78);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_111]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_77);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_110]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_81);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_115]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_116]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_82);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_117]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_118]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_83);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_119]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_120]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_84);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_121]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_122]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_85);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_123]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_124]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_86);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_125]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_126]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_87);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_127]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_128]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_88);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_129]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_130]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_103)
  INTERRUPT_CHECK (27, LABEL_89);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_131]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_132]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_90);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_133]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_134]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_91);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_135]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_136]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_106)
  INTERRUPT_CHECK (27, LABEL_92);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_137]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_138]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_107)
  INTERRUPT_CHECK (27, LABEL_93);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_139]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_140]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_108)
  INTERRUPT_CHECK (27, LABEL_94);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_141]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_142]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_109)
  INTERRUPT_CHECK (27, LABEL_95);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_143]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_144]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_110)
  INTERRUPT_CHECK (27, LABEL_96);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_145]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_146]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_111)
  INTERRUPT_CHECK (27, LABEL_97);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_147]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_148]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_112)
  INTERRUPT_CHECK (27, LABEL_98);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_149]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_150]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_113)
  INTERRUPT_CHECK (27, LABEL_99);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_151]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_152]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_114)
  INTERRUPT_CHECK (27, LABEL_100);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_153]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_154]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_115)
  INTERRUPT_CHECK (27, LABEL_101);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_155]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_156]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_116)
  INTERRUPT_CHECK (27, LABEL_102);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_157]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_158]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_117)
  INTERRUPT_CHECK (27, LABEL_103);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_159]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_160]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_118)
  INTERRUPT_CHECK (27, LABEL_104);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_161]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_162]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_119)
  INTERRUPT_CHECK (27, LABEL_105);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_163]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_164]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_120)
  INTERRUPT_CHECK (27, LABEL_106);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_165]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_121)
  INTERRUPT_CHECK (27, LABEL_107);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_166]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_167]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_122)
  INTERRUPT_CHECK (27, LABEL_108);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_168]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_169]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_123)
  INTERRUPT_CHECK (27, LABEL_109);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_170]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_124)
  INTERRUPT_CHECK (27, LABEL_110);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_171]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_172]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_125)
  INTERRUPT_CHECK (27, LABEL_111);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_173]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_174]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_126)
  INTERRUPT_CHECK (27, LABEL_112);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_175]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_127)
  INTERRUPT_CHECK (27, LABEL_113);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_166]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_176]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_128)
  INTERRUPT_CHECK (27, LABEL_114);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_168]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_177]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_129)
  INTERRUPT_CHECK (27, LABEL_115);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_178]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_130)
  INTERRUPT_CHECK (27, LABEL_116);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_179]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_180]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_131)
  INTERRUPT_CHECK (27, LABEL_117);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_181]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_182]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_132)
  INTERRUPT_CHECK (27, LABEL_118);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_183]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_133)
  INTERRUPT_CHECK (27, LABEL_119);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_120]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_184]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_185]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_134)
  INTERRUPT_CHECK (27, LABEL_120);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_186]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_187]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_135)
  INTERRUPT_CHECK (27, LABEL_121);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_188]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_189]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_136)
  INTERRUPT_CHECK (27, LABEL_122);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_190]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_191]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_137)
  INTERRUPT_CHECK (27, LABEL_123);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_192]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_193]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_138)
  INTERRUPT_CHECK (27, LABEL_124);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_194]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_195]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_139)
  INTERRUPT_CHECK (27, LABEL_125);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_196]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_197]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_140)
  INTERRUPT_CHECK (27, LABEL_126);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_127]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_198]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_199]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_141)
  INTERRUPT_CHECK (27, LABEL_127);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_200]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_201]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_142)
  INTERRUPT_CHECK (27, LABEL_128);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_202]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_203]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_143)
  INTERRUPT_CHECK (27, LABEL_129);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_5]);
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
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_204]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_205]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_151)
  INTERRUPT_CHECK (27, LABEL_131);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_206]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_152)
  INTERRUPT_CHECK (27, LABEL_130);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_132]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_220;
  Wrd11 = Wrd15;

DEFLABEL (label_219)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_153)
  INTERRUPT_CHECK (27, LABEL_133);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x808, 2);
  (* (Rhp++)) = (dispatch_base + TAG_137);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_136])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_209]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_157)
  INTERRUPT_CHECK (27, LABEL_132);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_135]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_207]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_208]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_158)
  INTERRUPT_CHECK (27, LABEL_135);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_138]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_210]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_211]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_159)
  INTERRUPT_CHECK (27, LABEL_138);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_139]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_212]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_213]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_160)
  INTERRUPT_CHECK (27, LABEL_139);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_140]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_214]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_215]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_161)
  INTERRUPT_CHECK (27, LABEL_140);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_141]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_216]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_217]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_162)
  INTERRUPT_CHECK (27, LABEL_141);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_142]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_218]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_219]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_163)
  INTERRUPT_CHECK (27, LABEL_142);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_143]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_220]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_221]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_164)
  INTERRUPT_CHECK (27, LABEL_143);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_144]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_145]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_218;
  Wrd11 = Wrd15;

DEFLABEL (label_217)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_165)
  INTERRUPT_CHECK (27, LABEL_145);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_224]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_166)
  INTERRUPT_CHECK (27, LABEL_144);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_147]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_222]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_223]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_167)
  INTERRUPT_CHECK (27, LABEL_147);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_148]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_225]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_226]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_168)
  INTERRUPT_CHECK (27, LABEL_148);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_149]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_227]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_228]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_169)
  INTERRUPT_CHECK (27, LABEL_149);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_150]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_151]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_229]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_230]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_172)
  INTERRUPT_CHECK (27, LABEL_151);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_231]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_173)
  INTERRUPT_CHECK (27, LABEL_150);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_152]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_153]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_216;
  Wrd11 = Wrd15;

DEFLABEL (label_215)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_174)
  INTERRUPT_CHECK (27, LABEL_153);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_157);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_156])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_234]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_178)
  INTERRUPT_CHECK (27, LABEL_152);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_155]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_232]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_233]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_179)
  INTERRUPT_CHECK (27, LABEL_155);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_158]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_235]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_236]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_180)
  INTERRUPT_CHECK (27, LABEL_158);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_159]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_237]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_238]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_181)
  INTERRUPT_CHECK (27, LABEL_159);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_160]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_239]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_240]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_182)
  INTERRUPT_CHECK (27, LABEL_160);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_161]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_162]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_214;
  Wrd11 = Wrd15;

DEFLABEL (label_213)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_183)
  INTERRUPT_CHECK (27, LABEL_162);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_243]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_184)
  INTERRUPT_CHECK (27, LABEL_161);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_164]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_241]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_242]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_185)
  INTERRUPT_CHECK (27, LABEL_164);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_165]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_244]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_186)
  INTERRUPT_CHECK (27, LABEL_165);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_166]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_245]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_246]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_187)
  INTERRUPT_CHECK (27, LABEL_166);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_167]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_247]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_248]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_188)
  INTERRUPT_CHECK (27, LABEL_167);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_168]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_249]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_250]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_189)
  INTERRUPT_CHECK (27, LABEL_168);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_169]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_251]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_252]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_190)
  INTERRUPT_CHECK (27, LABEL_169);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_170]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_253]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_254]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_191)
  INTERRUPT_CHECK (27, LABEL_170);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_171]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_255]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_256]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_192)
  INTERRUPT_CHECK (27, LABEL_171);
  (Wrd5.Obj) = (current_block [OBJECT_257]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_258]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (label_214)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_163])), (Wrd12.pObj));

DEFLABEL (label_204)
  (Wrd11.Obj) = Rvl;
  goto label_213;

DEFLABEL (label_216)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_154])), (Wrd12.pObj));

DEFLABEL (label_203)
  (Wrd11.Obj) = Rvl;
  goto label_215;

DEFLABEL (label_218)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_146])), (Wrd12.pObj));

DEFLABEL (label_202)
  (Wrd11.Obj) = Rvl;
  goto label_217;

DEFLABEL (label_220)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_134])), (Wrd12.pObj));

DEFLABEL (label_201)
  (Wrd11.Obj) = Rvl;
  goto label_219;

DEFLABEL (label_222)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_74])), (Wrd12.pObj));

DEFLABEL (label_200)
  (Wrd11.Obj) = Rvl;
  goto label_221;

DEFLABEL (label_224)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57])), (Wrd12.pObj));

DEFLABEL (label_198)
  (Wrd11.Obj) = Rvl;
  goto label_223;

DEFLABEL (label_226)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40])), (Wrd12.pObj));

DEFLABEL (label_197)
  (Wrd11.Obj) = Rvl;
  goto label_225;

DEFLABEL (label_228)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10])), (Wrd12.pObj));

DEFLABEL (label_195)
  (Wrd11.Obj) = Rvl;
  goto label_227;

DEFLABEL (Z__make_graphics_device_type_206)
  CLOSURE_HEADER (LABEL_14);

DEFLABEL (Z__make_graphics_device_type_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_230;
  Wrd9 = Wrd13;

DEFLABEL (label_229)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_19]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd29.Obj) = (MAKE_OBJECT (0, 21));
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [2]);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.Obj) = (Rsp [5]);
  (Wrd26.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd19.Obj) = (Rsp [7]);
  (Wrd20.Obj) = (Rsp [8]);
  (Wrd21.Obj) = (Rsp [9]);
  (Wrd22.Obj) = (Rsp [10]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd15.Obj) = (Rsp [11]);
  (Wrd16.Obj) = (Rsp [12]);
  (Wrd17.Obj) = (Rsp [13]);
  (Wrd18.Obj) = (Rsp [14]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd11.Obj) = (Rsp [15]);
  (Wrd12.Obj) = (Rsp [16]);
  (Wrd13.Obj) = (Rsp [17]);
  (Wrd14.Obj) = (Rsp [18]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd10.Obj) = (Rsp [19]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-22]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd8.pObj)));
  Rsp = (& (Rsp [20]));
  goto pop_return;

DEFLABEL (label_230)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd10.pObj));

DEFLABEL (label_196)
  (Wrd9.Obj) = Rvl;
  goto label_229;

DEFLABEL (Z__make_graphics_device_207)
  CLOSURE_HEADER (LABEL_59);

DEFLABEL (Z__make_graphics_device_74)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_232;
  Wrd9 = Wrd13;

DEFLABEL (label_231)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_19]));

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_62);
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
  (Wrd10.Obj) = (current_block [OBJECT_87]);
  (Wrd11.Obj) = (current_block [OBJECT_88]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-8]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_232)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63])), (Wrd10.pObj));

DEFLABEL (label_199)
  (Wrd9.Obj) = Rvl;
  goto label_231;

DEFLABEL (Z__make_image_type_208)
  CLOSURE_HEADER (LABEL_136);

DEFLABEL (Z__make_image_type_155)
  CLOSURE_INTERRUPT_CHECK (24);
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
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd13.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-9]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (Z__make_image_209)
  CLOSURE_HEADER (LABEL_156);

DEFLABEL (Z__make_image_176)
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

static const struct liarc_code_S arr_decl_graphics_so_d68554971a20edd6 [108] =
  {
    { "graphics_so_code_1", 1, graphics_so_code_1 },
    { "graphics_so_code_2", 3, graphics_so_code_2 },
    { "graphics_so_code_3", 1, graphics_so_code_3 },
    { "graphics_so_code_4", 1, graphics_so_code_4 },
    { "graphics_so_code_5", 1, graphics_so_code_5 },
    { "graphics_so_code_6", 1, graphics_so_code_6 },
    { "graphics_so_code_7", 1, graphics_so_code_7 },
    { "graphics_so_code_8", 1, graphics_so_code_8 },
    { "graphics_so_code_9", 1, graphics_so_code_9 },
    { "graphics_so_code_10", 1, graphics_so_code_10 },
    { "graphics_so_code_11", 1, graphics_so_code_11 },
    { "graphics_so_code_12", 1, graphics_so_code_12 },
    { "graphics_so_code_13", 1, graphics_so_code_13 },
    { "graphics_so_code_14", 1, graphics_so_code_14 },
    { "graphics_so_code_15", 1, graphics_so_code_15 },
    { "graphics_so_code_16", 1, graphics_so_code_16 },
    { "graphics_so_code_17", 1, graphics_so_code_17 },
    { "graphics_so_code_18", 1, graphics_so_code_18 },
    { "graphics_so_code_19", 1, graphics_so_code_19 },
    { "graphics_so_code_20", 1, graphics_so_code_20 },
    { "graphics_so_code_21", 1, graphics_so_code_21 },
    { "graphics_so_code_22", 1, graphics_so_code_22 },
    { "graphics_so_code_23", 4, graphics_so_code_23 },
    { "graphics_so_code_24", 39, graphics_so_code_24 },
    { "graphics_so_code_25", 4, graphics_so_code_25 },
    { "graphics_so_code_26", 9, graphics_so_code_26 },
    { "graphics_so_code_27", 13, graphics_so_code_27 },
    { "graphics_so_code_28", 1, graphics_so_code_28 },
    { "graphics_so_code_29", 3, graphics_so_code_29 },
    { "graphics_so_code_30", 2, graphics_so_code_30 },
    { "graphics_so_code_31", 2, graphics_so_code_31 },
    { "graphics_so_code_32", 2, graphics_so_code_32 },
    { "graphics_so_code_33", 2, graphics_so_code_33 },
    { "graphics_so_code_34", 1, graphics_so_code_34 },
    { "graphics_so_code_35", 1, graphics_so_code_35 },
    { "graphics_so_code_36", 1, graphics_so_code_36 },
    { "graphics_so_code_37", 1, graphics_so_code_37 },
    { "graphics_so_code_38", 1, graphics_so_code_38 },
    { "graphics_so_code_39", 1, graphics_so_code_39 },
    { "graphics_so_code_40", 1, graphics_so_code_40 },
    { "graphics_so_code_41", 1, graphics_so_code_41 },
    { "graphics_so_code_42", 1, graphics_so_code_42 },
    { "graphics_so_code_43", 1, graphics_so_code_43 },
    { "graphics_so_code_44", 1, graphics_so_code_44 },
    { "graphics_so_code_45", 1, graphics_so_code_45 },
    { "graphics_so_code_46", 1, graphics_so_code_46 },
    { "graphics_so_code_47", 4, graphics_so_code_47 },
    { "graphics_so_code_48", 4, graphics_so_code_48 },
    { "graphics_so_code_49", 6, graphics_so_code_49 },
    { "graphics_so_code_50", 2, graphics_so_code_50 },
    { "graphics_so_code_51", 2, graphics_so_code_51 },
    { "graphics_so_code_52", 2, graphics_so_code_52 },
    { "graphics_so_code_53", 2, graphics_so_code_53 },
    { "graphics_so_code_54", 2, graphics_so_code_54 },
    { "graphics_so_code_55", 2, graphics_so_code_55 },
    { "graphics_so_code_56", 2, graphics_so_code_56 },
    { "graphics_so_code_57", 2, graphics_so_code_57 },
    { "graphics_so_code_58", 2, graphics_so_code_58 },
    { "graphics_so_code_59", 2, graphics_so_code_59 },
    { "graphics_so_code_60", 2, graphics_so_code_60 },
    { "graphics_so_code_61", 2, graphics_so_code_61 },
    { "graphics_so_code_62", 2, graphics_so_code_62 },
    { "graphics_so_code_63", 2, graphics_so_code_63 },
    { "graphics_so_code_64", 2, graphics_so_code_64 },
    { "graphics_so_code_65", 8, graphics_so_code_65 },
    { "graphics_so_code_66", 1, graphics_so_code_66 },
    { "graphics_so_code_67", 5, graphics_so_code_67 },
    { "graphics_so_code_68", 4, graphics_so_code_68 },
    { "graphics_so_code_69", 3, graphics_so_code_69 },
    { "graphics_so_code_70", 3, graphics_so_code_70 },
    { "graphics_so_code_71", 3, graphics_so_code_71 },
    { "graphics_so_code_72", 3, graphics_so_code_72 },
    { "graphics_so_code_73", 3, graphics_so_code_73 },
    { "graphics_so_code_74", 3, graphics_so_code_74 },
    { "graphics_so_code_75", 3, graphics_so_code_75 },
    { "graphics_so_code_76", 4, graphics_so_code_76 },
    { "graphics_so_code_77", 4, graphics_so_code_77 },
    { "graphics_so_code_78", 4, graphics_so_code_78 },
    { "graphics_so_code_79", 4, graphics_so_code_79 },
    { "graphics_so_code_80", 7, graphics_so_code_80 },
    { "graphics_so_code_81", 7, graphics_so_code_81 },
    { "graphics_so_code_82", 2, graphics_so_code_82 },
    { "graphics_so_code_83", 7, graphics_so_code_83 },
    { "graphics_so_code_84", 7, graphics_so_code_84 },
    { "graphics_so_code_85", 3, graphics_so_code_85 },
    { "graphics_so_code_86", 7, graphics_so_code_86 },
    { "graphics_so_code_87", 1, graphics_so_code_87 },
    { "graphics_so_code_88", 1, graphics_so_code_88 },
    { "graphics_so_code_89", 1, graphics_so_code_89 },
    { "graphics_so_code_90", 1, graphics_so_code_90 },
    { "graphics_so_code_91", 1, graphics_so_code_91 },
    { "graphics_so_code_92", 1, graphics_so_code_92 },
    { "graphics_so_code_93", 1, graphics_so_code_93 },
    { "graphics_so_code_94", 4, graphics_so_code_94 },
    { "graphics_so_code_95", 5, graphics_so_code_95 },
    { "graphics_so_code_96", 27, graphics_so_code_96 },
    { "graphics_so_code_97", 1, graphics_so_code_97 },
    { "graphics_so_code_98", 1, graphics_so_code_98 },
    { "graphics_so_code_99", 1, graphics_so_code_99 },
    { "graphics_so_code_100", 1, graphics_so_code_100 },
    { "graphics_so_code_101", 4, graphics_so_code_101 },
    { "graphics_so_code_102", 4, graphics_so_code_102 },
    { "graphics_so_code_103", 6, graphics_so_code_103 },
    { "graphics_so_code_104", 3, graphics_so_code_104 },
    { "graphics_so_code_105", 3, graphics_so_code_105 },
    { "graphics_so_code_106", 3, graphics_so_code_106 },
    { "graphics_so_code_107", 3, graphics_so_code_107 },
    { "graphics_so_code_108", 3, graphics_so_code_108 }
  };

int
decl_graphics_so_d68554971a20edd6 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_graphics_so_d68554971a20edd6);
  return (0);
}

DECLARE_COMPILED_CODE ("graphics.so", 162, decl_graphics_so_d68554971a20edd6, graphics_so_d68554971a20edd6)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_graphics_so_data_d68554971a20edd6 [12151] =
  "\xde\x04\x88\x01\xc0\x16\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d"
  "\xb9\x23\x22\x29\x21\x9f\x2b\xba\x1d\xb0\x82\x88\xc2\xbb\x81\x0f"
  "\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d"
  "\xb0\x83\x88\xb3\x81\x22\x29\x21\x9e\x2b\xbd\x1d\xb0\x84\x88\xb3"
  "\x82\x22\x29\x21\x9e\x2b\xbe\x1d\xb0\x85\x88\xb3\x83\x22\x29\x21"
  "\x9e\x2b\xbf\x1d\xb0\x86\x88\xb3\x84\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\xb3\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3"
  "\x86\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x02\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x02\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\xb3\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3"
  "\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x02\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x02\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\xb3\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3"
  "\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x02\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x02\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\xb3\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3"
  "\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x02\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x02\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x07\xb3\x80\xc1\x1c\x0e\x1c\x24\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x0d\x1c\x0d\x1c\x0c\x0d\x1c\x0d\x1c\x0c\x06\x07\x85\xc2\x1c"
  "\x02\xc1\x1c\x08\xc1\x1c\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x0c\x02\xb3\x02\x1b\x02\x1b\x02\x1b\x02\x1b"
  "\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x02\x1b\x86\x1b"
  "\x85\x1b\x84\x1b\x83\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xc2\x1b\x1d\x08"
  "\xb3\x81\x0d\x1c\x25\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x0c\x0c\xb3\x81\x07\x06\x1d\x0d\x1c\x1b\x24\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d"
  "\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x24\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb3\x82\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x81"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb3\x02\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x0c\x28\x1b\x28\x0d\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\x80\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x28\xb1"
  "\x23\x22\x29\x21\x9f\x2b\xb9\x1d\xb0\x02\x88\xb3\x81\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x82\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\xb3\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3"
  "\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x85\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x86\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\xc3\x1c\x1d\x82\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1d\x83\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d"
  "\x84\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x85\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\xb3\x80\x1b\x0e\x1c\x24\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2"
  "\x1c\xb3\x02\x1d\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x1c\x0d\x08\x0d"
  "\x1c\x1b\x08\x89\x0d\x1b\x1b\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x83\xb3\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x84"
  "\xb3\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x85\xb3"
  "\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x86\xb3\x81"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\xb3\x81\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\xb3\x81\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\xb3\x81\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\xb3\x81\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\xb3\x81\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x02\xb3\x81\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x02\xb3\x81\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x02\xb3\x81\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x02\xb3\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x02\xb3\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x02\xb3\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x02\x85\xb3\x81\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1d\x07\x85\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x02\x81\x1b\x1d\xb3\x85\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x02\x81\xb3\x85\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x84\xb3\x81"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\xb3"
  "\x81\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x86"
  "\xb3\x81\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x85\xb3\x81\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x02\xb3\x81\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x02\xb3\x81\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x02\xb3\x81\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb3\x83\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x83"
  "\x02\xb3\x81\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb3\x84\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x84\x02\xb3"
  "\x81\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x02\x85\x83\xb3\x81\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x02\x85"
  "\x02\xb3\x81\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x02\x85"
  "\x02\xb3\x81\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x02\x85\x02\xb3\x81\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x02\xb3\x81\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x02\x85\x02\xb3\x81\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb3\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x82"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x83\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\xb3\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\xb3\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x86"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x02\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\xb3\x80\x1b\x0e\x1c\x24\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0d\x1c"
  "\x07\x06\x1d\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x0d\x0d\x0d\x0d\x0c\x0d\x0d\x0c\x06\x07\x85\x1b\x02\x1b"
  "\x08\x1b\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3"
  "\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x82\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x81\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1d\x82\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\xb3\x80\x1b\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x81\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\x1b\x82\xb3\x81\x0d\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83\xb3\x81\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x84\xb3\x81"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x85\xb3"
  "\x81\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x86"
  "\xb3\x81\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x02\xb3\x81\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x17\xb8\x88"
  "\xb0\xb3\x2a\x0d\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x1b\x0d\x1b\x2a\x0d\x1c\x0c\x0d\x1c\x0d\x1c\x08"
  "\x89\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x0d\x1b"
  "\x2a\x0d\x1c\x0c\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x08\x8e\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d"
  "\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x02\x0d\x0d\x85\x0d\x84\x0d"
  "\x0d\x0d\x0d\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x0d\x82\x0d\x81\x0d\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\xc2\x02\x02\x0d\x0d\x1b"
  "\x2a\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x80"
  "\x83\x0d\x1b\x2a\x86\x0d\x1b\x2a\x1b\x1b\x1b\x2a\x0d\x1c\x0c\x1b"
  "\x1b\x0d\x0d\x0d\x0d\x1c\x08\x8d\x1b\x2a\x1b\x2a\xb1\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x0d\xb7\x2a\x02\x0d\xb6\x2a\x1b\x0d\xb5\x2a\x0c\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x1b\x08\x14\x08\xb2\x2a\xc3\x0d\x1c\x1b\xb4\x2a\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x1b\x1b\x1b\x24\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x02\x57\x2f\x55\x73\x65\x72\x73\x2f\x63\x70"
  "\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e"
  "\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39"
  "\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e"
  "\x2f\x67\x72\x61\x70\x68\x69\x63\x73\x2e\x69\x6e\x66\x15\x23\x5b"
  "\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f"
  "\x74\x5d\x02\x02\x0e\x6d\x61\x6b\x65\x2d\x31\x64\x2d\x74\x61\x62"
  "\x6c\x65\x02\xa3\x01\x04\x82\x02\x03\x02\x0c\x25\x72\x65\x63\x6f"
  "\x72\x64\x2d\x72\x65\x66\x01\x21\x04\x0b\x77\x72\x69\x74\x65\x2d"
  "\x63\x68\x61\x72\x04\x06\x77\x72\x69\x74\x65\x03\xa6\x01\x08\x81"
  "\x85\x02\xa5\x01\x06\x81\x85\x02\xa4\x01\x04\x84\x06\x07\x12\x02"
  "\xa7\x01\x04\x83\x04\x03\x02\xa8\x01\x04\x83\x04\x03\x02\xa9\x01"
  "\x04\x83\x04\x03\x02\xaa\x01\x04\x83\x04\x03\x09\x02\x08\xab\x01"
  "\x04\x83\x04\x03\x0a\x02\x09\xac\x01\x04\x83\x04\x03\x0b\x02\x0a"
  "\x08\xad\x01\x04\x83\x04\x03\x0c\x02\x0b\x09\xae\x01\x04\x83\x04"
  "\x03\x0d\x02\x0c\x0a\xaf\x01\x04\x83\x04\x03\x0e\x02\x0d\x0b\xb0"
  "\x01\x04\x83\x04\x03\x0f\x02\x0e\x0c\xb1\x01\x04\x83\x04\x03\x10"
  "\x02\x0f\x0d\xb2\x01\x04\x83\x04\x03\x11\x02\x10\x0e\xb3\x01\x04"
  "\x83\x04\x03\x12\x02\x11\x0f\xb4\x01\x04\x83\x04\x03\x13\x02\x12"
  "\x10\xb5\x01\x04\x83\x04\x03\x14\x02\x13\x11\xb6\x01\x04\x83\x04"
  "\x03\x15\x02\x14\x12\xb7\x01\x04\x83\x04\x03\x16\x02\x15\x13\xb8"
  "\x01\x04\x83\x04\x03\x17\x02\x16\x14\xb9\x01\x04\x83\x04\x03\x18"
  "\x02\x17\x15\xba\x01\x04\x83\x04\x03\x19\x02\x18\x0f\x25\x72\x65"
  "\x63\x6f\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68\x1a\x07\x2e\x74\x61"
  "\x67\x2e\x31\x1b\x02\xbe\x01\x0a\x81\x85\x02\xbd\x01\x08\x81\x83"
  "\x02\xbc\x01\x06\x81\x83\x02\xbb\x01\x04\x83\x04\x09\x12\x1c\x02"
  "\x19\x0b\x61\x76\x61\x69\x6c\x61\x62\x6c\x65\x3f\x06\x63\x6c\x65"
  "\x61\x72\x1d\x06\x63\x6c\x6f\x73\x65\x1e\x12\x63\x6f\x6f\x72\x64"
  "\x69\x6e\x61\x74\x65\x2d\x6c\x69\x6d\x69\x74\x73\x1f\x19\x64\x65"
  "\x76\x69\x63\x65\x2d\x63\x6f\x6f\x72\x64\x69\x6e\x61\x74\x65\x2d"
  "\x6c\x69\x6d\x69\x74\x73\x20\x0c\x64\x72\x61\x67\x2d\x63\x75\x72"
  "\x73\x6f\x72\x21\x0a\x64\x72\x61\x77\x2d\x6c\x69\x6e\x65\x22\x0b"
  "\x64\x72\x61\x77\x2d\x70\x6f\x69\x6e\x74\x23\x0a\x64\x72\x61\x77"
  "\x2d\x74\x65\x78\x74\x24\x06\x66\x6c\x75\x73\x68\x25\x0c\x6d\x6f"
  "\x76\x65\x2d\x63\x75\x72\x73\x6f\x72\x26\x05\x6f\x70\x65\x6e\x15"
  "\x72\x65\x73\x65\x74\x2d\x63\x6c\x69\x70\x2d\x72\x65\x63\x74\x61"
  "\x6e\x67\x6c\x65\x27\x13\x73\x65\x74\x2d\x63\x6c\x69\x70\x2d\x72"
  "\x65\x63\x74\x61\x6e\x67\x6c\x65\x28\x12\x4d\x69\x73\x73\x69\x6e"
  "\x67\x20\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x16\x73\x65\x74\x2d"
  "\x63\x6f\x6f\x72\x64\x69\x6e\x61\x74\x65\x2d\x6c\x69\x6d\x69\x74"
  "\x73\x29\x11\x73\x65\x74\x2d\x64\x72\x61\x77\x69\x6e\x67\x2d\x6d"
  "\x6f\x64\x65\x2a\x20\x4d\x61\x6c\x66\x6f\x72\x6d\x65\x64\x20\x6f"
  "\x70\x65\x72\x61\x74\x69\x6f\x6e\x20\x61\x6c\x69\x73\x74\x20\x65"
  "\x6e\x74\x72\x79\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65"
  "\x3f\x2b\x1e\x04\x63\x61\x72\x2c\x04\x63\x64\x72\x2d\x0f\x73\x65"
  "\x74\x2d\x6c\x69\x6e\x65\x2d\x73\x74\x79\x6c\x65\x2e\x04\x04\x6d"
  "\x61\x70\x2f\x03\x0b\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x30"
  "\x04\x06\x65\x72\x72\x6f\x72\x31\x04\x05\x61\x73\x73\x71\x32\x04"
  "\x06\x64\x65\x6c\x71\x21\x33\x15\x1b\x25\x6d\x61\x6b\x65\x2d\x67"
  "\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2d\x74"
  "\x79\x70\x65\x34\x03\x12\x61\x64\x64\x2d\x67\x72\x61\x70\x68\x69"
  "\x63\x73\x2d\x74\x79\x70\x65\x35\x08\xe5\x01\x50\x81\x83\x02\xe4"
  "\x01\x4e\x81\xa9\x02\xe3\x01\x4c\x81\xa7\x02\xe2\x01\x4a\x81\xa5"
  "\x02\xe1\x01\x48\x81\xa3\x02\xe0\x01\x46\x81\xa1\x02\xdf\x01\x44"
  "\x81\x9f\x02\xde\x01\x42\x81\x9d\x02\xdd\x01\x40\x81\x9b\x02\xdc"
  "\x01\x3e\x81\x99\x02\xdb\x01\x3c\x81\x97\x02\xda\x01\x3a\x81\x95"
  "\x02\xd9\x01\x38\x81\x93\x02\xd8\x01\x36\x81\x91\x02\xd7\x01\x34"
  "\x81\x8f\x02\xd6\x01\x32\x81\x8d\x02\xd5\x01\x30\x81\x87\x02\xd4"
  "\x01\x2e\x81\x8b\x02\xd3\x01\x2c\x81\x85\x02\xd2\x01\x2a\x81\x87"
  "\x02\xd1\x01\x28\x81\x89\x02\xd0\x01\x26\x81\x85\x02\xcf\x01\x24"
  "\x81\x87\x02\xce\x01\x22\x81\x85\x02\xcd\x01\x20\x81\x85\x02\xcc"
  "\x01\x1e\x81\x83\x02\xcb\x01\x1c\x81\x83\x02\xca\x01\x1a\x81\x85"
  "\x02\xc9\x01\x18\x83\x04\xc8\x01\x16\x81\x85\x02\xc7\x01\x14\x81"
  "\x83\x02\xc6\x01\x12\x81\x83\x02\xc5\x01\x10\x81\x83\x02\xc4\x01"
  "\x0e\x81\x83\x02\xc3\x01\x0c\x81\x83\x02\xc2\x01\x0a\x81\x83\x02"
  "\xc1\x01\x08\x81\x83\x02\xc0\x01\x06\x81\x85\x02\xbf\x01\x04\x84"
  "\x06\x4f\x7c\x36\x02\x1a\x2d\x1b\x55\x6e\x6b\x6e\x6f\x77\x6e\x20"
  "\x67\x72\x61\x70\x68\x69\x63\x73\x20\x6f\x70\x65\x72\x61\x74\x69"
  "\x6f\x6e\x14\x13\x2e\x12\x2a\x11\x29\x10\x28\x0f\x27\x0d\x26\x0c"
  "\x25\x0b\x24\x0a\x23\x09\x22\x08\x21\x20\x1f\x1e\x1d\x04\x32\x05"
  "\x31\x03\xe9\x01\x0a\x81\x85\x02\xe8\x01\x08\x81\x87\x02\xe7\x01"
  "\x06\x81\x87\x02\xe6\x01\x04\x84\x06\x09\x33\x2e\x02\x1b\x2d\x09"
  "\x73\x65\x74\x2d\x63\x61\x72\x21\x2c\x02\x0f\x67\x72\x61\x70\x68"
  "\x69\x63\x73\x2d\x74\x79\x70\x65\x73\x2a\x02\x2a\x02\xf2\x01\x14"
  "\x81\x87\x02\xf1\x01\x12\x81\x87\x02\xf0\x01\x10\x81\x87\x02\xef"
  "\x01\x0e\x81\x87\x02\xee\x01\x0c\x81\x87\x02\xed\x01\x0a\x81\x87"
  "\x02\xec\x01\x08\x81\x85\x02\xeb\x01\x06\x81\x83\x02\xea\x01\x04"
  "\x83\x04\x13\x21\x29\x02\x1c\x1d\x4e\x6f\x20\x67\x72\x61\x70\x68"
  "\x69\x63\x73\x20\x74\x79\x70\x65\x73\x20\x73\x75\x70\x70\x6f\x72"
  "\x74\x65\x64\x2e\x17\x47\x72\x61\x70\x68\x69\x63\x73\x20\x74\x79"
  "\x70\x65\x20\x75\x6e\x6b\x6e\x6f\x77\x6e\x3a\x1d\x47\x72\x61\x70"
  "\x68\x69\x63\x73\x20\x74\x79\x70\x65\x20\x6e\x6f\x74\x20\x73\x75"
  "\x70\x70\x6f\x72\x74\x65\x64\x3a\x08\x20\x67\x72\x61\x70\x68\x69"
  "\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2d\x74\x79\x70\x65\x2f\x61"
  "\x76\x61\x69\x6c\x61\x62\x6c\x65\x3f\x28\x2a\x03\x03\x16\x67\x72"
  "\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2d\x74\x79"
  "\x70\x65\x3f\x27\x03\x11\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64"
  "\x65\x76\x69\x63\x65\x3f\x26\x03\x28\x04\x15\x6c\x69\x73\x74\x2d"
  "\x73\x65\x61\x72\x63\x68\x2d\x70\x6f\x73\x69\x74\x69\x76\x65\x04"
  "\x31\x03\x31\x07\xff\x01\x1c\x81\x85\x02\xfe\x01\x1a\x81\x85\x02"
  "\xfd\x01\x18\x81\x85\x02\xfc\x01\x16\x81\x85\x02\xfb\x01\x14\x81"
  "\x87\x02\xfa\x01\x12\x81\x85\x02\xf9\x01\x10\x81\x89\x02\xf8\x01"
  "\x0e\x81\x89\x02\xf7\x01\x0c\x81\x87\x02\xf6\x01\x0a\x81\x85\x02"
  "\xf5\x01\x08\x81\x87\x02\xf4\x01\x06\x81\x85\x02\xf3\x01\x04\x84"
  "\x02\x1b\x36\x25\x02\x1d\x04\x0e\x67\x72\x61\x70\x68\x69\x63\x73"
  "\x2d\x74\x79\x70\x65\x24\x02\x80\x02\x04\x83\x04\x03\x23\x02\x1e"
  "\x28\x2a\x03\x04\x18\x6c\x69\x73\x74\x2d\x74\x72\x61\x6e\x73\x66"
  "\x6f\x72\x6d\x2d\x70\x6f\x73\x69\x74\x69\x76\x65\x02\x83\x02\x08"
  "\x81\x83\x02\x82\x02\x06\x81\x81\x02\x81\x02\x04\x82\x02\x07\x10"
  "\x22\x02\x1f\x85\x02\x06\x81\x83\x02\x84\x02\x04\x83\x04\x05\x0a"
  "\x21\x02\x20\x13\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x74\x79\x70"
  "\x65\x2d\x6e\x61\x6d\x65\x20\x04\x18\x67\x75\x61\x72\x61\x6e\x74"
  "\x65\x65\x2d\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x74\x79\x70\x65"
  "\x1f\x02\x87\x02\x06\x81\x83\x02\x86\x02\x04\x83\x04\x05\x0e\x1e"
  "\x02\x21\x15\x19\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x74\x79\x70"
  "\x65\x2d\x70\x72\x6f\x70\x65\x72\x74\x69\x65\x73\x1d\x04\x1f\x02"
  "\x89\x02\x06\x81\x83\x02\x88\x02\x04\x83\x04\x05\x0e\x37\x02\x22"
  "\x02\x0e\x67\x72\x61\x70\x68\x69\x63\x73\x20\x74\x79\x70\x65\x03"
  "\x27\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74"
  "\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x03\x8b\x02\x06"
  "\x81\x85\x02\x8a\x02\x04\x84\x06\x05\x0f\x38\x02\x23\x8c\x02\x04"
  "\x82\x02\x03\x39\x02\x24\x8d\x02\x04\x82\x02\x03\x3a\x02\x25\x02"
  "\x02\x8e\x02\x04\x82\x02\x03\x02\x26\x8f\x02\x04\x83\x04\x03\x3b"
  "\x02\x27\x90\x02\x04\x83\x04\x03\x3c\x02\x28\x91\x02\x04\x83\x04"
  "\x03\x3d\x02\x29\x92\x02\x04\x83\x04\x03\x3e\x02\x2a\x93\x02\x04"
  "\x83\x04\x03\x3f\x02\x2b\x94\x02\x04\x83\x04\x03\x40\x02\x2c\x0d"
  "\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x41\x02\x95\x02"
  "\x04\x84\x06\x03\x42\x02\x2d\x41\x02\x96\x02\x04\x84\x06\x03\x43"
  "\x02\x2e\x41\x02\x97\x02\x04\x84\x06\x03\x44\x02\x2f\x41\x02\x98"
  "\x02\x04\x84\x06\x03\x45\x02\x30\x1a\x07\x2e\x74\x61\x67\x2e\x32"
  "\x46\x02\x9c\x02\x0a\x81\x85\x02\x9b\x02\x08\x81\x83\x02\x9a\x02"
  "\x06\x81\x83\x02\x99\x02\x04\x83\x04\x09\x12\x47\x02\x31\x06\x61"
  "\x70\x70\x6c\x79\x48\x0e\x08\x03\x24\x04\x16\x25\x6d\x61\x6b\x65"
  "\x2d\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63\x65"
  "\x49\x03\xa0\x02\x0a\x81\x85\x02\x9f\x02\x08\x81\x87\x02\x9e\x02"
  "\x06\x81\x85\x02\x9d\x02\x04\xfe\x03\x09\x15\x4a\x02\x32\x12\x64"
  "\x65\x66\x69\x6e\x65\x2d\x69\x6e\x74\x65\x67\x72\x61\x62\x6c\x65"
  "\x07\x64\x65\x76\x69\x63\x65\x4b\x1b\x67\x72\x61\x70\x68\x69\x63"
  "\x73\x2d\x64\x65\x76\x69\x63\x65\x2f\x6f\x70\x65\x72\x61\x74\x69"
  "\x6f\x6e\x2f\x15\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76"
  "\x69\x63\x65\x2f\x74\x79\x70\x65\x4c\x4b\x20\x67\x72\x61\x70\x68"
  "\x69\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2d\x74\x79\x70\x65\x2f"
  "\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x2c\x2d\x04\x0e\x73\x79"
  "\x6d\x62\x6f\x6c\x2d\x61\x70\x70\x65\x6e\x64\x04\x0d\x63\x6c\x6f"
  "\x73\x65\x2d\x73\x79\x6e\x74\x61\x78\x03\xa6\x02\x0e\x81\x89\x02"
  "\xa5\x02\x0c\x81\x8b\x02\xa4\x02\x0a\x81\x87\x02\xa3\x02\x08\x81"
  "\x85\x02\xa2\x02\x06\x81\x85\x02\xa1\x02\x04\x84\x06\x0d\x1d\x4b"
  "\x02\x33\xa8\x02\x06\x81\x83\x02\xa7\x02\x04\x83\x04\x05\x0b\x4d"
  "\x02\x34\xaa\x02\x06\x81\x83\x02\xa9\x02\x04\x83\x04\x05\x0b\x4e"
  "\x02\x35\xac\x02\x06\x81\x83\x02\xab\x02\x04\x83\x04\x05\x0b\x4f"
  "\x02\x36\xae\x02\x06\x81\x83\x02\xad\x02\x04\x83\x04\x05\x0b\x50"
  "\x02\x37\x08\xb0\x02\x06\x81\x83\x02\xaf\x02\x04\x83\x04\x05\x0b"
  "\x51\x02\x38\x09\xb2\x02\x06\x81\x83\x02\xb1\x02\x04\x83\x04\x05"
  "\x0b\x52\x02\x39\x0a\xb4\x02\x06\x81\x83\x02\xb3\x02\x04\x83\x04"
  "\x05\x0b\x53\x02\x3a\x0b\xb6\x02\x06\x81\x83\x02\xb5\x02\x04\x83"
  "\x04\x05\x0b\x54\x02\x3b\x0c\xb8\x02\x06\x81\x83\x02\xb7\x02\x04"
  "\x83\x04\x05\x0b\x55\x02\x3c\x0d\xba\x02\x06\x81\x83\x02\xb9\x02"
  "\x04\x83\x04\x05\x0b\x56\x02\x3d\x0f\xbc\x02\x06\x81\x83\x02\xbb"
  "\x02\x04\x83\x04\x05\x0b\x57\x02\x3e\x10\xbe\x02\x06\x81\x83\x02"
  "\xbd\x02\x04\x83\x04\x05\x0b\x58\x02\x3f\x11\xc0\x02\x06\x81\x83"
  "\x02\xbf\x02\x04\x83\x04\x05\x0b\x59\x02\x40\x12\xc2\x02\x06\x81"
  "\x83\x02\xc1\x02\x04\x83\x04\x05\x0b\x5a\x02\x41\x13\xc4\x02\x06"
  "\x81\x83\x02\xc3\x02\x04\x83\x04\x05\x0b\x5b\x02\x42\x48\x0c\x04"
  "\x1f\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63\x65"
  "\x2d\x74\x79\x70\x65\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x48"
  "\x02\xcc\x02\x12\x81\x8b\x02\xcb\x02\x10\x81\x8d\x02\xca\x02\x0e"
  "\x81\x8d\x02\xc9\x02\x0c\x81\x89\x02\xc8\x02\x0a\x81\x87\x02\xc7"
  "\x02\x08\x81\x89\x02\xc6\x02\x06\x81\x8f\x02\xc5\x02\x04\xfd\x07"
  "\x11\x1c\x5c\x02\x43\x41\x02\xcd\x02\x04\x83\x04\x03\x0a\x5d\x02"
  "\x44\x0c\x41\x02\xd2\x02\x0c\x81\x87\x02\xd1\x02\x0a\x81\x87\x02"
  "\xd0\x02\x08\x81\x83\x02\xcf\x02\x06\x83\x04\xce\x02\x04\x81\x83"
  "\x02\x0b\x14\x5e\x02\x45\x02\x0c\xd6\x02\x0a\x81\x83\x02\xd5\x02"
  "\x08\x81\x83\x02\xd4\x02\x06\x81\x83\x02\xd3\x02\x04\x83\x04\x09"
  "\x11\x5f\x02\x46\xd9\x02\x08\x81\x83\x02\xd8\x02\x06\x81\x83\x02"
  "\xd7\x02\x04\x83\x04\x07\x0d\x60\x02\x47\x0c\xdc\x02\x08\x81\x83"
  "\x02\xdb\x02\x06\x81\x83\x02\xda\x02\x04\x83\x04\x07\x0d\x61\x02"
  "\x48\xdf\x02\x08\x81\x83\x02\xde\x02\x06\x81\x83\x02\xdd\x02\x04"
  "\x83\x04\x07\x0d\x62\x02\x49\xe2\x02\x08\x81\x83\x02\xe1\x02\x06"
  "\x81\x83\x02\xe0\x02\x04\x83\x04\x07\x0d\x63\x02\x4a\x11\xe5\x02"
  "\x08\x81\x8b\x02\xe4\x02\x06\x81\x8b\x02\xe3\x02\x04\x87\x0c\x07"
  "\x0d\x64\x02\x4b\x10\xe8\x02\x08\x81\x8b\x02\xe7\x02\x06\x81\x8b"
  "\x02\xe6\x02\x04\x87\x0c\x07\x0d\x65\x02\x4c\x0f\xeb\x02\x08\x81"
  "\x83\x02\xea\x02\x06\x81\x83\x02\xe9\x02\x04\x83\x04\x07\x0d\x66"
  "\x02\x4d\x05\x0d\x64\x79\x6e\x61\x6d\x69\x63\x2d\x77\x69\x6e\x64"
  "\x67\x04\x1a\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x73\x65\x74\x2d"
  "\x64\x72\x61\x77\x69\x6e\x67\x2d\x6d\x6f\x64\x65\x68\x03\xef\x02"
  "\x0a\x81\x83\x02\xee\x02\x08\x81\x83\x02\xed\x02\x06\x81\x87\x02"
  "\xec\x02\x04\x85\x08\x09\x13\x69\x02\x4e\x41\x02\x12\xf3\x02\x0a"
  "\x81\x85\x02\xf2\x02\x08\x81\x8b\x02\xf1\x02\x06\x81\x8b\x02\xf0"
  "\x02\x04\x84\x06\x09\x12\x6a\x02\x4f\x05\x67\x04\x18\x67\x72\x61"
  "\x70\x68\x69\x63\x73\x2d\x73\x65\x74\x2d\x6c\x69\x6e\x65\x2d\x73"
  "\x74\x79\x6c\x65\x67\x03\xf7\x02\x0a\x81\x83\x02\xf6\x02\x08\x81"
  "\x83\x02\xf5\x02\x06\x81\x87\x02\xf4\x02\x04\x85\x08\x09\x13\x6b"
  "\x02\x50\x41\x02\x13\xfb\x02\x0a\x81\x85\x02\xfa\x02\x08\x81\x8b"
  "\x02\xf9\x02\x06\x81\x8b\x02\xf8\x02\x04\x84\x06\x09\x12\x6c\x02"
  "\x51\x02\x0c\x82\x03\x10\x81\x83\x02\x81\x03\x0e\x81\x83\x02\x80"
  "\x03\x0c\x81\x83\x02\xff\x02\x0a\x81\x83\x02\xfe\x02\x08\x81\x87"
  "\x02\xfd\x02\x06\x81\x87\x02\xfc\x02\x04\x83\x04\x0f\x18\x6d\x02"
  "\x52\x02\x0c\x0a\x89\x03\x10\x81\x87\x02\x88\x03\x0e\x81\x87\x02"
  "\x87\x03\x0c\x81\x87\x02\x86\x03\x0a\x81\x87\x02\x85\x03\x08\x81"
  "\x8f\x02\x84\x03\x06\x81\x8f\x02\x83\x03\x04\x85\x08\x0f\x18\x6e"
  "\x02\x53\x05\x1b\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x62\x69\x6e"
  "\x64\x2d\x64\x72\x61\x77\x69\x6e\x67\x2d\x6d\x6f\x64\x65\x6f\x05"
  "\x14\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x72\x61\x77\x2d\x70"
  "\x6f\x69\x6e\x74\x70\x03\x8b\x03\x06\x81\x83\x02\x8a\x03\x04\x85"
  "\x08\x05\x0e\x71\x02\x54\x02\x0c\x0b\x92\x03\x10\x81\x89\x02\x91"
  "\x03\x0e\x81\x89\x02\x90\x03\x0c\x81\x89\x02\x8f\x03\x0a\x81\x89"
  "\x02\x8e\x03\x08\x81\x93\x02\x8d\x03\x06\x81\x93\x02\x8c\x03\x04"
  "\x86\x0a\x0f\x18\x72\x02\x55\x02\x0c\x09\x99\x03\x10\x81\x8b\x02"
  "\x98\x03\x0e\x81\x8b\x02\x97\x03\x0c\x81\x8b\x02\x96\x03\x0a\x81"
  "\x8b\x02\x95\x03\x08\x81\x97\x02\x94\x03\x06\x81\x97\x02\x93\x03"
  "\x04\x87\x0c\x0f\x18\x73\x02\x56\x0d\x9c\x03\x08\x81\x87\x02\x9b"
  "\x03\x06\x81\x87\x02\x9a\x03\x04\x85\x08\x07\x0d\x74\x02\x57\x02"
  "\x0c\x08\xa3\x03\x10\x81\x87\x02\xa2\x03\x0e\x81\x87\x02\xa1\x03"
  "\x0c\x81\x87\x02\xa0\x03\x0a\x81\x87\x02\x9f\x03\x08\x81\x8f\x02"
  "\x9e\x03\x06\x81\x8f\x02\x9d\x03\x04\x85\x08\x0f\x18\x75\x02\x58"
  "\xa4\x03\x04\x83\x04\x03\x76\x02\x59\xa5\x03\x04\x83\x04\x03\x77"
  "\x02\x5a\xa6\x03\x04\x83\x04\x03\x78\x02\x5b\xa7\x03\x04\x83\x04"
  "\x03\x79\x02\x5c\xa8\x03\x04\x83\x04\x03\x7a\x02\x5d\xa9\x03\x04"
  "\x83\x04\x03\x7b\x02\x5e\x08\xaa\x03\x04\x83\x04\x03\x7c\x02\x5f"
  "\x1a\x07\x2e\x74\x61\x67\x2e\x33\x7d\x02\xae\x03\x0a\x81\x85\x02"
  "\xad\x03\x08\x81\x83\x02\xac\x03\x06\x81\x83\x02\xab\x03\x04\x83"
  "\x04\x09\x12\x7e\x02\x60\x2c\x47\x72\x61\x70\x68\x69\x63\x73\x20"
  "\x74\x79\x70\x65\x20\x68\x61\x73\x20\x6e\x6f\x20\x61\x73\x73\x6f"
  "\x63\x69\x61\x74\x65\x64\x20\x69\x6d\x61\x67\x65\x20\x74\x79\x70"
  "\x65\x3a\x0b\x69\x6d\x61\x67\x65\x2d\x74\x79\x70\x65\x7f\x08\x03"
  "\x0c\x69\x6d\x61\x67\x65\x2d\x74\x79\x70\x65\x3f\x80\x01\x04\x24"
  "\x03\x1d\x04\x31\x05\x0d\x31\x64\x2d\x74\x61\x62\x6c\x65\x2f\x67"
  "\x65\x74\x06\xb3\x03\x0c\x81\x8d\x02\xb2\x03\x0a\x81\x87\x02\xb1"
  "\x03\x08\x81\x85\x02\xb0\x03\x06\x81\x85\x02\xaf\x03\x04\x84\x02"
  "\x0b\x1e\x81\x01\x02\x61\x1e\x45\x78\x74\x72\x61\x20\x69\x6d\x61"
  "\x67\x65\x20\x74\x79\x70\x65\x20\x6f\x70\x65\x72\x61\x74\x69\x6f"
  "\x6e\x73\x3a\x20\x07\x63\x72\x65\x61\x74\x65\x08\x64\x65\x73\x74"
  "\x72\x6f\x79\x06\x77\x69\x64\x74\x68\x07\x68\x65\x69\x67\x68\x74"
  "\x12\x4d\x69\x73\x73\x69\x6e\x67\x20\x6f\x70\x65\x72\x61\x74\x69"
  "\x6f\x6e\x05\x64\x72\x61\x77\x0e\x64\x72\x61\x77\x2d\x73\x75\x62"
  "\x69\x6d\x61\x67\x65\x20\x4d\x61\x6c\x66\x6f\x72\x6d\x65\x64\x20"
  "\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x20\x61\x6c\x69\x73\x74\x20"
  "\x65\x6e\x74\x72\x79\x2b\x1e\x2c\x2d\x16\x66\x69\x6c\x6c\x2d\x66"
  "\x72\x6f\x6d\x2d\x62\x79\x74\x65\x2d\x76\x65\x63\x74\x6f\x72\x04"
  "\x2f\x03\x30\x04\x31\x04\x32\x04\x33\x09\x11\x25\x6d\x61\x6b\x65"
  "\x2d\x69\x6d\x61\x67\x65\x2d\x74\x79\x70\x65\x33\x07\xce\x03\x38"
  "\x81\x8f\x02\xcd\x03\x36\x81\x8d\x02\xcc\x03\x34\x81\x8b\x02\xcb"
  "\x03\x32\x81\x89\x02\xca\x03\x30\x81\x87\x02\xc9\x03\x2e\x81\x87"
  "\x02\xc8\x03\x2c\x81\x85\x02\xc7\x03\x2a\x81\x87\x02\xc6\x03\x28"
  "\x81\x85\x02\xc5\x03\x26\x81\x85\x02\xc4\x03\x24\x81\x83\x02\xc3"
  "\x03\x22\x81\x85\x02\xc2\x03\x20\x81\x85\x02\xc1\x03\x1e\x81\x83"
  "\x02\xc0\x03\x1c\x81\x83\x02\xbf\x03\x1a\x81\x85\x02\xbe\x03\x18"
  "\x83\x04\xbd\x03\x16\x81\x85\x02\xbc\x03\x14\x81\x83\x02\xbb\x03"
  "\x12\x81\x83\x02\xba\x03\x10\x81\x83\x02\xb9\x03\x0e\x81\x83\x02"
  "\xb8\x03\x0c\x81\x83\x02\xb7\x03\x0a\x81\x83\x02\xb6\x03\x08\x81"
  "\x83\x02\xb5\x03\x06\x81\x83\x02\xb4\x03\x04\x83\x04\x37\x59\x32"
  "\x02\x62\xcf\x03\x04\x83\x04\x03\x31\x02\x63\xd0\x03\x04\x83\x04"
  "\x03\x30\x02\x64\x41\x02\xd1\x03\x04\x84\x06\x03\x2f\x02\x65\x41"
  "\x02\xd2\x03\x04\x84\x06\x03\x2d\x02\x66\x1a\x07\x2e\x74\x61\x67"
  "\x2e\x34\x2c\x02\xd6\x03\x0a\x81\x85\x02\xd5\x03\x08\x81\x83\x02"
  "\xd4\x03\x06\x81\x83\x02\xd3\x03\x04\x83\x04\x09\x12\x2b\x02\x67"
  "\x03\x7f\x04\x0c\x25\x6d\x61\x6b\x65\x2d\x69\x6d\x61\x67\x65\x1a"
  "\x03\xda\x03\x0a\x81\x89\x02\xd9\x03\x08\x81\x91\x02\xd8\x03\x06"
  "\x81\x87\x02\xd7\x03\x04\x85\x08\x09\x13\x82\x01\x02\x68\x02\x41"
  "\x19\x74\x68\x65\x2d\x64\x65\x73\x74\x72\x6f\x79\x65\x64\x2d\x69"
  "\x6d\x61\x67\x65\x2d\x74\x79\x70\x65\x41\x02\xe0\x03\x0e\x81\x83"
  "\x02\xdf\x03\x0c\x81\x83\x02\xde\x03\x0a\x81\x83\x02\xdd\x03\x08"
  "\x81\x87\x02\xdc\x03\x06\x81\x87\x02\xdb\x03\x04\x83\x04\x0d\x17"
  "\x83\x01\x02\x69\xe3\x03\x08\x81\x83\x02\xe2\x03\x06\x81\x83\x02"
  "\xe1\x03\x04\x83\x04\x07\x0d\x84\x01\x02\x6a\xe6\x03\x08\x81\x83"
  "\x02\xe5\x03\x06\x81\x83\x02\xe4\x03\x04\x83\x04\x07\x0d\x85\x01"
  "\x02\x6b\xe9\x03\x08\x81\x89\x02\xe8\x03\x06\x81\x89\x02\xe7\x03"
  "\x04\x86\x0a\x07\x0d\x86\x01\x02\x6c\xec\x03\x08\x81\x91\x02\xeb"
  "\x03\x06\x81\x91\x02\xea\x03\x04\x8a\x12\x07\x0d\x87\x01\x02\x6d"
  "\x08\xef\x03\x08\x81\x85\x02\xee\x03\x06\x81\x85\x02\xed\x03\x04"
  "\x84\x06\x07\x0d\x6d\x04\x1c\x69\x6d\x61\x67\x65\x2f\x66\x69\x6c"
  "\x6c\x2d\x66\x72\x6f\x6d\x2d\x62\x79\x74\x65\x2d\x76\x65\x63\x74"
  "\x6f\x72\x14\x69\x6d\x61\x67\x65\x2f\x64\x72\x61\x77\x2d\x73\x75"
  "\x62\x69\x6d\x61\x67\x65\x87\x01\x04\x0b\x69\x6d\x61\x67\x65\x2f"
  "\x64\x72\x61\x77\x86\x01\x04\x0d\x69\x6d\x61\x67\x65\x2f\x68\x65"
  "\x69\x67\x68\x74\x85\x01\x04\x0c\x69\x6d\x61\x67\x65\x2f\x77\x69"
  "\x64\x74\x68\x84\x01\x04\x0e\x69\x6d\x61\x67\x65\x2f\x64\x65\x73"
  "\x74\x72\x6f\x79\x83\x01\x04\x0d\x69\x6d\x61\x67\x65\x2f\x63\x72"
  "\x65\x61\x74\x65\x82\x01\x04\x41\x2c\x07\x69\x6d\x61\x67\x65\x3f"
  "\x2b\x04\x16\x73\x65\x74\x2d\x69\x6d\x61\x67\x65\x2f\x64\x65\x73"
  "\x63\x72\x69\x70\x74\x6f\x72\x21\x2d\x04\x10\x73\x65\x74\x2d\x69"
  "\x6d\x61\x67\x65\x2f\x74\x79\x70\x65\x21\x2f\x04\x11\x69\x6d\x61"
  "\x67\x65\x2f\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x30\x04\x1a"
  "\x0b\x69\x6d\x61\x67\x65\x2f\x74\x79\x70\x65\x31\x04\x0a\x72\x74"
  "\x64\x3a\x69\x6d\x61\x67\x65\x87\x01\x06\x69\x6d\x61\x67\x65\x05"
  "\x74\x79\x70\x65\x86\x01\x0b\x64\x65\x73\x63\x72\x69\x70\x74\x6f"
  "\x72\x85\x01\x10\x6d\x61\x6b\x65\x2d\x69\x6d\x61\x67\x65\x2d\x74"
  "\x79\x70\x65\x32\x04\x7f\x81\x01\x04\x7d\x80\x01\x7e\x04\x2b\x69"
  "\x6d\x61\x67\x65\x2d\x74\x79\x70\x65\x2f\x6f\x70\x65\x72\x61\x74"
  "\x69\x6f\x6e\x2f\x66\x69\x6c\x6c\x2d\x66\x72\x6f\x6d\x2d\x62\x79"
  "\x74\x65\x2d\x76\x65\x63\x74\x6f\x72\x7c\x04\x23\x69\x6d\x61\x67"
  "\x65\x2d\x74\x79\x70\x65\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e"
  "\x2f\x64\x72\x61\x77\x2d\x73\x75\x62\x69\x6d\x61\x67\x65\x7b\x04"
  "\x1a\x69\x6d\x61\x67\x65\x2d\x74\x79\x70\x65\x2f\x6f\x70\x65\x72"
  "\x61\x74\x69\x6f\x6e\x2f\x64\x72\x61\x77\x7a\x04\x1c\x69\x6d\x61"
  "\x67\x65\x2d\x74\x79\x70\x65\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f"
  "\x6e\x2f\x68\x65\x69\x67\x68\x74\x79\x04\x1b\x69\x6d\x61\x67\x65"
  "\x2d\x74\x79\x70\x65\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f"
  "\x77\x69\x64\x74\x68\x78\x04\x1d\x69\x6d\x61\x67\x65\x2d\x74\x79"
  "\x70\x65\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x64\x65\x73"
  "\x74\x72\x6f\x79\x77\x04\x33\x1c\x69\x6d\x61\x67\x65\x2d\x74\x79"
  "\x70\x65\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x63\x72\x65"
  "\x61\x74\x65\x76\x04\x16\x72\x74\x64\x3a\x69\x6d\x61\x67\x65\x2d"
  "\x64\x65\x76\x69\x63\x65\x2d\x74\x79\x70\x65\x84\x01\x12\x69\x6d"
  "\x61\x67\x65\x2d\x64\x65\x76\x69\x63\x65\x2d\x74\x79\x70\x65\x11"
  "\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x63\x72\x65\x61\x74\x65"
  "\x12\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x64\x65\x73\x74\x72"
  "\x6f\x79\x10\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x77\x69\x64"
  "\x74\x68\x11\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x68\x65\x69"
  "\x67\x68\x74\x0f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x64\x72"
  "\x61\x77\x18\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x64\x72\x61"
  "\x77\x2d\x73\x75\x62\x69\x6d\x61\x67\x65\x20\x6f\x70\x65\x72\x61"
  "\x74\x69\x6f\x6e\x2f\x66\x69\x6c\x6c\x2d\x66\x72\x6f\x6d\x2d\x62"
  "\x79\x74\x65\x2d\x76\x65\x63\x74\x6f\x72\x15\x67\x72\x61\x70\x68"
  "\x69\x63\x73\x2d\x64\x72\x61\x67\x2d\x63\x75\x72\x73\x6f\x72\x75"
  "\x04\x15\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x6d\x6f\x76\x65\x2d"
  "\x63\x75\x72\x73\x6f\x72\x74\x04\x13\x67\x72\x61\x70\x68\x69\x63"
  "\x73\x2d\x64\x72\x61\x77\x2d\x6c\x69\x6e\x65\x73\x04\x13\x67\x72"
  "\x61\x70\x68\x69\x63\x73\x2d\x64\x72\x61\x77\x2d\x74\x65\x78\x74"
  "\x72\x04\x15\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x65\x72\x61\x73"
  "\x65\x2d\x70\x6f\x69\x6e\x74\x71\x04\x70\x6e\x04\x0f\x67\x72\x61"
  "\x70\x68\x69\x63\x73\x2d\x63\x6c\x65\x61\x72\x6d\x04\x67\x6c\x04"
  "\x19\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x62\x69\x6e\x64\x2d\x6c"
  "\x69\x6e\x65\x2d\x73\x74\x79\x6c\x65\x6b\x04\x1c\x6c\x69\x6e\x65"
  "\x2d\x73\x74\x79\x6c\x65\x3a\x63\x65\x6e\x74\x65\x72\x2d\x64\x61"
  "\x73\x68\x2d\x64\x61\x73\x68\x08\x17\x6c\x69\x6e\x65\x2d\x73\x74"
  "\x79\x6c\x65\x3a\x63\x65\x6e\x74\x65\x72\x2d\x64\x61\x73\x68\x15"
  "\x6c\x69\x6e\x65\x2d\x73\x74\x79\x6c\x65\x3a\x6c\x6f\x6e\x67\x2d"
  "\x64\x61\x73\x68\x18\x6c\x69\x6e\x65\x2d\x73\x74\x79\x6c\x65\x3a"
  "\x64\x61\x73\x68\x2d\x64\x6f\x74\x2d\x64\x6f\x74\x14\x6c\x69\x6e"
  "\x65\x2d\x73\x74\x79\x6c\x65\x3a\x64\x61\x73\x68\x2d\x64\x6f\x74"
  "\x0f\x6c\x69\x6e\x65\x2d\x73\x74\x79\x6c\x65\x3a\x64\x6f\x74\x10"
  "\x6c\x69\x6e\x65\x2d\x73\x74\x79\x6c\x65\x3a\x64\x61\x73\x68\x11"
  "\x6c\x69\x6e\x65\x2d\x73\x74\x79\x6c\x65\x3a\x73\x6f\x6c\x69\x64"
  "\x68\x6a\x04\x6f\x69\x04\x16\x64\x72\x61\x77\x69\x6e\x67\x2d\x6d"
  "\x6f\x64\x65\x3a\x64\x6f\x6d\x69\x6e\x61\x6e\x74\x18\x64\x72\x61"
  "\x77\x69\x6e\x67\x2d\x6d\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x6c\x65"
  "\x6d\x65\x6e\x74\x1a\x64\x72\x61\x77\x69\x6e\x67\x2d\x6d\x6f\x64"
  "\x65\x3a\x6e\x6f\x6e\x2d\x64\x6f\x6d\x69\x6e\x61\x6e\x74\x13\x64"
  "\x72\x61\x77\x69\x6e\x67\x2d\x6d\x6f\x64\x65\x3a\x65\x72\x61\x73"
  "\x65\x1e\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x72\x65\x73\x65\x74"
  "\x2d\x63\x6c\x69\x70\x2d\x72\x65\x63\x74\x61\x6e\x67\x6c\x65\x66"
  "\x04\x1c\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x73\x65\x74\x2d\x63"
  "\x6c\x69\x70\x2d\x72\x65\x63\x74\x61\x6e\x67\x6c\x65\x65\x04\x1f"
  "\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x73\x65\x74\x2d\x63\x6f\x6f"
  "\x72\x64\x69\x6e\x61\x74\x65\x2d\x6c\x69\x6d\x69\x74\x73\x64\x04"
  "\x1b\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x63\x6f\x6f\x72\x64\x69"
  "\x6e\x61\x74\x65\x2d\x6c\x69\x6d\x69\x74\x73\x63\x04\x22\x67\x72"
  "\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2d\x63\x6f"
  "\x6f\x72\x64\x69\x6e\x61\x74\x65\x2d\x6c\x69\x6d\x69\x74\x73\x62"
  "\x04\x0f\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x66\x6c\x75\x73\x68"
  "\x61\x04\x0f\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x63\x6c\x6f\x73"
  "\x65\x60\x04\x0c\x6d\x61\x79\x62\x65\x2d\x66\x6c\x75\x73\x68\x5f"
  "\x04\x1b\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x69\x73\x61\x62"
  "\x6c\x65\x2d\x62\x75\x66\x66\x65\x72\x69\x6e\x67\x5e\x06\x1a\x67"
  "\x72\x61\x70\x68\x69\x63\x73\x2d\x65\x6e\x61\x62\x6c\x65\x2d\x62"
  "\x75\x66\x66\x65\x72\x69\x6e\x67\x5d\x04\x13\x67\x72\x61\x70\x68"
  "\x69\x63\x73\x2d\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x5c\x04\x29"
  "\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2f"
  "\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x73\x65\x74\x2d\x6c\x69"
  "\x6e\x65\x2d\x73\x74\x79\x6c\x65\x5b\x04\x2b\x67\x72\x61\x70\x68"
  "\x69\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2f\x6f\x70\x65\x72\x61"
  "\x74\x69\x6f\x6e\x2f\x73\x65\x74\x2d\x64\x72\x61\x77\x69\x6e\x67"
  "\x2d\x6d\x6f\x64\x65\x5a\x04\x30\x67\x72\x61\x70\x68\x69\x63\x73"
  "\x2d\x64\x65\x76\x69\x63\x65\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f"
  "\x6e\x2f\x73\x65\x74\x2d\x63\x6f\x6f\x72\x64\x69\x6e\x61\x74\x65"
  "\x2d\x6c\x69\x6d\x69\x74\x73\x59\x04\x2d\x67\x72\x61\x70\x68\x69"
  "\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2f\x6f\x70\x65\x72\x61\x74"
  "\x69\x6f\x6e\x2f\x73\x65\x74\x2d\x63\x6c\x69\x70\x2d\x72\x65\x63"
  "\x74\x61\x6e\x67\x6c\x65\x58\x04\x2f\x67\x72\x61\x70\x68\x69\x63"
  "\x73\x2d\x64\x65\x76\x69\x63\x65\x2f\x6f\x70\x65\x72\x61\x74\x69"
  "\x6f\x6e\x2f\x72\x65\x73\x65\x74\x2d\x63\x6c\x69\x70\x2d\x72\x65"
  "\x63\x74\x61\x6e\x67\x6c\x65\x57\x04\x26\x67\x72\x61\x70\x68\x69"
  "\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2f\x6f\x70\x65\x72\x61\x74"
  "\x69\x6f\x6e\x2f\x6d\x6f\x76\x65\x2d\x63\x75\x72\x73\x6f\x72\x56"
  "\x04\x20\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63"
  "\x65\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x66\x6c\x75\x73"
  "\x68\x55\x04\x24\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76"
  "\x69\x63\x65\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x64\x72"
  "\x61\x77\x2d\x74\x65\x78\x74\x54\x04\x25\x67\x72\x61\x70\x68\x69"
  "\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2f\x6f\x70\x65\x72\x61\x74"
  "\x69\x6f\x6e\x2f\x64\x72\x61\x77\x2d\x70\x6f\x69\x6e\x74\x53\x04"
  "\x24\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63\x65"
  "\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x64\x72\x61\x77\x2d"
  "\x6c\x69\x6e\x65\x52\x04\x26\x67\x72\x61\x70\x68\x69\x63\x73\x2d"
  "\x64\x65\x76\x69\x63\x65\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e"
  "\x2f\x64\x72\x61\x67\x2d\x63\x75\x72\x73\x6f\x72\x51\x04\x33\x67"
  "\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2f\x6f"
  "\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x64\x65\x76\x69\x63\x65\x2d"
  "\x63\x6f\x6f\x72\x64\x69\x6e\x61\x74\x65\x2d\x6c\x69\x6d\x69\x74"
  "\x73\x50\x04\x2c\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76"
  "\x69\x63\x65\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x63\x6f"
  "\x6f\x72\x64\x69\x6e\x61\x74\x65\x2d\x6c\x69\x6d\x69\x74\x73\x4f"
  "\x04\x20\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63"
  "\x65\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x63\x6c\x6f\x73"
  "\x65\x4e\x04\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62"
  "\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70\x65\x33\x10\x1a"
  "\x64\x65\x66\x69\x6e\x65\x2d\x67\x72\x61\x70\x68\x69\x63\x73\x2d"
  "\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x20\x67\x72\x61\x70\x68\x69"
  "\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2f\x6f\x70\x65\x72\x61\x74"
  "\x69\x6f\x6e\x2f\x63\x6c\x65\x61\x72\x4d\x04\x4b\x04\x15\x6d\x61"
  "\x6b\x65\x2d\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69"
  "\x63\x65\x4a\x04\x46\x26\x47\x04\x1d\x73\x65\x74\x2d\x67\x72\x61"
  "\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2f\x62\x75\x66"
  "\x66\x65\x72\x3f\x21\x45\x04\x20\x73\x65\x74\x2d\x67\x72\x61\x70"
  "\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2f\x6c\x69\x6e\x65"
  "\x2d\x73\x74\x79\x6c\x65\x21\x44\x04\x22\x73\x65\x74\x2d\x67\x72"
  "\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2f\x64\x72"
  "\x61\x77\x69\x6e\x67\x2d\x6d\x6f\x64\x65\x21\x43\x04\x20\x73\x65"
  "\x74\x2d\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63"
  "\x65\x2f\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x21\x42\x04\x1b"
  "\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2f"
  "\x70\x72\x6f\x70\x65\x72\x74\x69\x65\x73\x40\x04\x18\x67\x72\x61"
  "\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2f\x62\x75\x66"
  "\x66\x65\x72\x3f\x3f\x04\x1b\x67\x72\x61\x70\x68\x69\x63\x73\x2d"
  "\x64\x65\x76\x69\x63\x65\x2f\x6c\x69\x6e\x65\x2d\x73\x74\x79\x6c"
  "\x65\x3e\x04\x1d\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76"
  "\x69\x63\x65\x2f\x64\x72\x61\x77\x69\x6e\x67\x2d\x6d\x6f\x64\x65"
  "\x3d\x04\x1b\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69"
  "\x63\x65\x2f\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x3c\x04\x49"
  "\x4c\x3b\x04\x14\x72\x74\x64\x3a\x67\x72\x61\x70\x68\x69\x63\x73"
  "\x2d\x64\x65\x76\x69\x63\x65\x83\x01\x10\x67\x72\x61\x70\x68\x69"
  "\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x86\x01\x85\x01\x0d\x64\x72"
  "\x61\x77\x69\x6e\x67\x2d\x6d\x6f\x64\x65\x0b\x6c\x69\x6e\x65\x2d"
  "\x73\x74\x79\x6c\x65\x08\x62\x75\x66\x66\x65\x72\x3f\x0b\x70\x72"
  "\x6f\x70\x65\x72\x74\x69\x65\x73\x86\x01\x39\x04\x3a\x04\x04\x1f"
  "\x38\x04\x1d\x37\x04\x20\x1e\x04\x28\x21\x04\x19\x65\x6e\x75\x6d"
  "\x65\x72\x61\x74\x65\x2d\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x74"
  "\x79\x70\x65\x73\x22\x04\x19\x67\x72\x61\x70\x68\x69\x63\x73\x2d"
  "\x74\x79\x70\x65\x2d\x61\x76\x61\x69\x6c\x61\x62\x6c\x65\x3f\x23"
  "\x04\x25\x04\x35\x29\x04\x2a\x48\x2e\x04\x1a\x6d\x61\x6b\x65\x2d"
  "\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2d"
  "\x74\x79\x70\x65\x36\x04\x1b\x27\x1c\x04\x20\x67\x72\x61\x70\x68"
  "\x69\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2d\x74\x79\x70\x65\x2f"
  "\x70\x72\x6f\x70\x65\x72\x74\x69\x65\x73\x19\x04\x27\x67\x72\x61"
  "\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2d\x74\x79\x70"
  "\x65\x2f\x63\x75\x73\x74\x6f\x6d\x2d\x6f\x70\x65\x72\x61\x74\x69"
  "\x6f\x6e\x73\x18\x04\x2e\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64"
  "\x65\x76\x69\x63\x65\x2d\x74\x79\x70\x65\x2f\x6f\x70\x65\x72\x61"
  "\x74\x69\x6f\x6e\x2f\x73\x65\x74\x2d\x6c\x69\x6e\x65\x2d\x73\x74"
  "\x79\x6c\x65\x17\x04\x30\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64"
  "\x65\x76\x69\x63\x65\x2d\x74\x79\x70\x65\x2f\x6f\x70\x65\x72\x61"
  "\x74\x69\x6f\x6e\x2f\x73\x65\x74\x2d\x64\x72\x61\x77\x69\x6e\x67"
  "\x2d\x6d\x6f\x64\x65\x16\x04\x35\x67\x72\x61\x70\x68\x69\x63\x73"
  "\x2d\x64\x65\x76\x69\x63\x65\x2d\x74\x79\x70\x65\x2f\x6f\x70\x65"
  "\x72\x61\x74\x69\x6f\x6e\x2f\x73\x65\x74\x2d\x63\x6f\x6f\x72\x64"
  "\x69\x6e\x61\x74\x65\x2d\x6c\x69\x6d\x69\x74\x73\x15\x04\x32\x67"
  "\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2d\x74"
  "\x79\x70\x65\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x73\x65"
  "\x74\x2d\x63\x6c\x69\x70\x2d\x72\x65\x63\x74\x61\x6e\x67\x6c\x65"
  "\x14\x04\x34\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69"
  "\x63\x65\x2d\x74\x79\x70\x65\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f"
  "\x6e\x2f\x72\x65\x73\x65\x74\x2d\x63\x6c\x69\x70\x2d\x72\x65\x63"
  "\x74\x61\x6e\x67\x6c\x65\x13\x04\x24\x67\x72\x61\x70\x68\x69\x63"
  "\x73\x2d\x64\x65\x76\x69\x63\x65\x2d\x74\x79\x70\x65\x2f\x6f\x70"
  "\x65\x72\x61\x74\x69\x6f\x6e\x2f\x6f\x70\x65\x6e\x12\x04\x2b\x67"
  "\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2d\x74"
  "\x79\x70\x65\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x6d\x6f"
  "\x76\x65\x2d\x63\x75\x72\x73\x6f\x72\x11\x04\x25\x67\x72\x61\x70"
  "\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2d\x74\x79\x70\x65"
  "\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x66\x6c\x75\x73\x68"
  "\x10\x04\x29\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69"
  "\x63\x65\x2d\x74\x79\x70\x65\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f"
  "\x6e\x2f\x64\x72\x61\x77\x2d\x74\x65\x78\x74\x0f\x04\x2a\x67\x72"
  "\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2d\x74\x79"
  "\x70\x65\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x64\x72\x61"
  "\x77\x2d\x70\x6f\x69\x6e\x74\x0e\x04\x29\x67\x72\x61\x70\x68\x69"
  "\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2d\x74\x79\x70\x65\x2f\x6f"
  "\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x64\x72\x61\x77\x2d\x6c\x69"
  "\x6e\x65\x0d\x04\x2b\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65"
  "\x76\x69\x63\x65\x2d\x74\x79\x70\x65\x2f\x6f\x70\x65\x72\x61\x74"
  "\x69\x6f\x6e\x2f\x64\x72\x61\x67\x2d\x63\x75\x72\x73\x6f\x72\x0c"
  "\x04\x38\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63"
  "\x65\x2d\x74\x79\x70\x65\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e"
  "\x2f\x64\x65\x76\x69\x63\x65\x2d\x63\x6f\x6f\x72\x64\x69\x6e\x61"
  "\x74\x65\x2d\x6c\x69\x6d\x69\x74\x73\x0b\x04\x31\x67\x72\x61\x70"
  "\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2d\x74\x79\x70\x65"
  "\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x63\x6f\x6f\x72\x64"
  "\x69\x6e\x61\x74\x65\x2d\x6c\x69\x6d\x69\x74\x73\x0a\x04\x25\x67"
  "\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2d\x74"
  "\x79\x70\x65\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x63\x6c"
  "\x6f\x73\x65\x09\x04\x25\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64"
  "\x65\x76\x69\x63\x65\x2d\x74\x79\x70\x65\x2f\x6f\x70\x65\x72\x61"
  "\x74\x69\x6f\x6e\x2f\x63\x6c\x65\x61\x72\x04\x15\x2a\x67\x72\x61"
  "\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2d\x74\x79\x70"
  "\x65\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x61\x76\x61\x69"
  "\x6c\x61\x62\x6c\x65\x3f\x04\x34\x1a\x67\x72\x61\x70\x68\x69\x63"
  "\x73\x2d\x64\x65\x76\x69\x63\x65\x2d\x74\x79\x70\x65\x2f\x6e\x61"
  "\x6d\x65\x04\x15\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76"
  "\x69\x63\x65\x2d\x74\x79\x70\x65\x05\x6e\x61\x6d\x65\x15\x6f\x70"
  "\x65\x72\x61\x74\x69\x6f\x6e\x2f\x61\x76\x61\x69\x6c\x61\x62\x6c"
  "\x65\x3f\x10\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x63\x6c\x65"
  "\x61\x72\x10\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x63\x6c\x6f"
  "\x73\x65\x1c\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x63\x6f\x6f"
  "\x72\x64\x69\x6e\x61\x74\x65\x2d\x6c\x69\x6d\x69\x74\x73\x23\x6f"
  "\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x64\x65\x76\x69\x63\x65\x2d"
  "\x63\x6f\x6f\x72\x64\x69\x6e\x61\x74\x65\x2d\x6c\x69\x6d\x69\x74"
  "\x73\x16\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x64\x72\x61\x67"
  "\x2d\x63\x75\x72\x73\x6f\x72\x14\x6f\x70\x65\x72\x61\x74\x69\x6f"
  "\x6e\x2f\x64\x72\x61\x77\x2d\x6c\x69\x6e\x65\x15\x6f\x70\x65\x72"
  "\x61\x74\x69\x6f\x6e\x2f\x64\x72\x61\x77\x2d\x70\x6f\x69\x6e\x74"
  "\x14\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x64\x72\x61\x77\x2d"
  "\x74\x65\x78\x74\x10\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x66"
  "\x6c\x75\x73\x68\x16\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x6d"
  "\x6f\x76\x65\x2d\x63\x75\x72\x73\x6f\x72\x0f\x6f\x70\x65\x72\x61"
  "\x74\x69\x6f\x6e\x2f\x6f\x70\x65\x6e\x1f\x6f\x70\x65\x72\x61\x74"
  "\x69\x6f\x6e\x2f\x72\x65\x73\x65\x74\x2d\x63\x6c\x69\x70\x2d\x72"
  "\x65\x63\x74\x61\x6e\x67\x6c\x65\x1d\x6f\x70\x65\x72\x61\x74\x69"
  "\x6f\x6e\x2f\x73\x65\x74\x2d\x63\x6c\x69\x70\x2d\x72\x65\x63\x74"
  "\x61\x6e\x67\x6c\x65\x20\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f"
  "\x73\x65\x74\x2d\x63\x6f\x6f\x72\x64\x69\x6e\x61\x74\x65\x2d\x6c"
  "\x69\x6d\x69\x74\x73\x1b\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f"
  "\x73\x65\x74\x2d\x64\x72\x61\x77\x69\x6e\x67\x2d\x6d\x6f\x64\x65"
  "\x19\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x73\x65\x74\x2d\x6c"
  "\x69\x6e\x65\x2d\x73\x74\x79\x6c\x65\x12\x63\x75\x73\x74\x6f\x6d"
  "\x2d\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x73\x86\x01\x14\x04\x11"
  "\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74"
  "\x19\x72\x74\x64\x3a\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65"
  "\x76\x69\x63\x65\x2d\x74\x79\x70\x65\x86\x01\x24\x04\x03\x19\x72"
  "\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61"
  "\x74\x63\x68\x2d\x74\x61\x67\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65"
  "\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x04\x23\x72\x65\x63\x6f\x72"
  "\x64\x2d\x74\x79\x70\x65\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x76"
  "\x61\x6c\x75\x65\x2d\x62\x79\x2d\x69\x6e\x64\x65\x78\x04\x1f\x73"
  "\x63\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72"
  "\x6d\x65\x72\x2d\x3e\x65\x78\x70\x61\x6e\x64\x65\x72\x05\x86\x01"
  "\x83\x01\x84\x01\x87\x01\x05\x04\x19\x73\x74\x61\x6e\x64\x61\x72"
  "\x64\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x6d\x65\x74\x68\x6f"
  "\x64\x02\xa2\x01\xc6\x02\x80\x80\x04\xa1\x01\xc4\x02\x81\x81\x02"
  "\xa0\x01\xc2\x02\x81\x81\x02\x9f\x01\xc0\x02\x81\x83\x02\x9e\x01"
  "\xbe\x02\x81\x83\x02\x9d\x01\xbc\x02\x81\x83\x02\x9c\x01\xba\x02"
  "\x81\x83\x02\x9b\x01\xb8\x02\x81\x83\x02\x9a\x01\xb6\x02\x81\x83"
  "\x02\x99\x01\xb4\x02\x81\x83\x02\x98\x01\xb2\x02\x81\x83\x02\x97"
  "\x01\xb0\x02\x81\x85\x02\x96\x01\xae\x02\x81\x83\x02\x95\x01\xac"
  "\x02\x81\x87\x02\x94\x01\xaa\x02\x81\x83\x02\x93\x01\xa8\x02\x81"
  "\x83\x02\x92\x01\xa6\x02\x81\x83\x02\x91\x01\xa4\x02\x81\x87\x02"
  "\x90\x01\xa2\x02\x81\x83\x02\x8f\x01\xa0\x02\x81\x85\x02\x8e\x01"
  "\x9e\x02\x81\x83\x02\x8d\x01\x9c\x02\x81\x85\x02\x8c\x01\x9a\x02"
  "\x81\x87\x02\x8b\x01\x98\x02\x81\x83\x02\x8a\x01\x96\x02\x81\x83"
  "\x02\x89\x01\x94\x02\x81\x83\x02\x88\x01\x92\x02\x81\x83\x02\x87"
  "\x01\x90\x02\x81\x85\x02\x86\x01\x8e\x02\x81\x83\x02\x85\x01\x8c"
  "\x02\x81\x87\x02\x84\x01\x8a\x02\x81\x83\x02\x83\x01\x88\x02\x81"
  "\x83\x02\x82\x01\x86\x02\x81\x83\x02\x81\x01\x84\x02\x81\x83\x02"
  "\x80\x01\x82\x02\x81\x83\x02\x7f\x80\x02\x81\x83\x02\x7e\xfe\x01"
  "\x81\x91\x02\x7d\xfc\x01\x81\x83\x02\x7c\xfa\x01\x81\x85\x02\x7b"
  "\xf8\x01\x81\x83\x02\x7a\xf6\x01\x81\x85\x02\x79\xf4\x01\x81\x87"
  "\x02\x78\xf2\x01\x81\x83\x02\x77\xf0\x01\x81\x83\x02\x76\xee\x01"
  "\x81\x83\x02\x75\xec\x01\x81\x83\x02\x74\xea\x01\x81\x83\x02\x73"
  "\xe8\x01\x81\x83\x02\x72\xe6\x01\x81\x83\x02\x71\xe4\x01\x81\x83"
  "\x02\x70\xe2\x01\x81\x83\x02\x6f\xe0\x01\x81\x83\x02\x6e\xde\x01"
  "\x81\x83\x02\x6d\xdc\x01\x81\x83\x02\x6c\xda\x01\x81\x83\x02\x6b"
  "\xd8\x01\x81\x83\x02\x6a\xd6\x01\x81\x83\x02\x69\xd4\x01\x81\x83"
  "\x02\x68\xd2\x01\x81\x83\x02\x67\xd0\x01\x81\x83\x02\x66\xce\x01"
  "\x81\x83\x02\x65\xcc\x01\x81\x83\x02\x64\xca\x01\x81\x83\x02\x63"
  "\xc8\x01\x81\x83\x02\x62\xc6\x01\x81\x83\x02\x61\xc4\x01\x81\x83"
  "\x02\x60\xc2\x01\x81\x83\x02\x5f\xc0\x01\x81\x83\x02\x5e\xbe\x01"
  "\x81\x83\x02\x5d\xbc\x01\x81\x83\x02\x5c\xba\x01\x81\x83\x02\x5b"
  "\xb8\x01\x81\x83\x02\x5a\xb6\x01\x81\x83\x02\x59\xb4\x01\x81\x83"
  "\x02\x58\xb2\x01\x81\x83\x02\x57\xb0\x01\x81\x83\x02\x56\xae\x01"
  "\x81\x83\x02\x55\xac\x01\x81\x83\x02\x54\xaa\x01\x81\x83\x02\x53"
  "\xa8\x01\x81\x83\x02\x52\xa6\x01\x81\x83\x02\x51\xa4\x01\x81\x83"
  "\x02\x50\xa2\x01\x81\x83\x02\x4f\xa0\x01\x81\x83\x02\x4e\x9e\x01"
  "\x81\x83\x02\x4d\x9c\x01\x81\x83\x02\x4c\x9a\x01\x81\x83\x02\x4b"
  "\x98\x01\x81\x83\x02\x4a\x96\x01\x81\x83\x02\x49\x94\x01\x81\x83"
  "\x02\x48\x92\x01\x81\x83\x02\x47\x90\x01\x81\x83\x02\x46\x8e\x01"
  "\x81\x87\x02\x45\x8c\x01\x81\x85\x02\x44\x8a\x01\x81\x83\x02\x43"
  "\x88\x01\x81\x83\x02\x42\x86\x01\x81\x83\x02\x41\x84\x01\x81\x85"
  "\x02\x40\x82\x01\x81\x83\x02\x3f\x80\x01\x81\x87\x02\x3e\x7e\x81"
  "\x83\x02\x3d\x7c\x81\x83\x02\x3c\x7a\x81\x83\x02\x3b\x78\x81\x83"
  "\x02\x3a\x76\x81\x83\x02\x39\x74\x81\x83\x02\x38\x72\x81\x83\x02"
  "\x37\x70\x81\x83\x02\x36\x6e\x81\x87\x02\x35\x6c\x81\x83\x02\x34"
  "\x6a\x81\x8b\x02\x33\x68\x81\x87\x02\x32\x66\x81\x83\x02\x31\x64"
  "\x81\x85\x02\x30\x62\x81\x83\x02\x2f\x60\x81\x85\x02\x2e\x5e\x81"
  "\x87\x02\x2d\x5c\x81\x83\x02\x2c\x5a\x81\x83\x02\x2b\x58\x81\x83"
  "\x02\x2a\x56\x81\x83\x02\x29\x54\x81\x83\x02\x28\x52\x81\x83\x02"
  "\x27\x50\x81\x83\x02\x26\x4e\x81\x83\x02\x25\x4c\x81\x83\x02\x24"
  "\x4a\x81\x83\x02\x23\x48\x81\x83\x02\x22\x46\x81\x83\x02\x21\x44"
  "\x81\x83\x02\x20\x42\x81\x85\x02\x1f\x40\x81\x83\x02\x1e\x3e\x81"
  "\x87\x02\x1d\x3c\x81\x83\x02\x1c\x3a\x81\x83\x02\x1b\x38\x81\x83"
  "\x02\x1a\x36\x81\x83\x02\x19\x34\x81\x83\x02\x18\x32\x81\x83\x02"
  "\x17\x30\x81\x83\x02\x16\x2e\x81\x83\x02\x15\x2c\x81\x83\x02\x14"
  "\x2a\x81\x83\x02\x13\x28\x81\x83\x02\x12\x26\x81\x83\x02\x11\x24"
  "\x81\x83\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81"
  "\x83\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\xa9"
  "\x02\x0a\x16\x81\x83\x02\x09\x14\x81\xad\x02\x08\x12\x81\xa9\x02"
  "\x07\x10\x81\x83\x02\x06\x0e\x81\x85\x02\x05\x0c\x81\x83\x02\x04"
  "\x0a\x81\x87\x02\x03\x08\x81\x85\x02\x02\x06\x81\x87\x02\x01\x04"
  "\x81\x83\x02\xc5\x02\xde\x04";

SCHEME_OBJECT *
graphics_so_data_d68554971a20edd6 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_graphics_so_data_d68554971a20edd6 [0]))), (sizeof (prog_graphics_so_data_d68554971a20edd6)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_174]));
}

DECLARE_COMPILED_DATA_NS ("graphics.so", graphics_so_data_d68554971a20edd6)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("graphics.so", "1f7b5549b93c2e57")
