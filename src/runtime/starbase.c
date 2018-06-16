/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:53-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 6
#define DEBUGGING_LABEL_1_2 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto starbase_open_device_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_open_device_3)
DEFLABEL (starbase_open_device_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
starbase_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto starbase_close_device_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_close_device_3)
DEFLABEL (starbase_close_device_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
starbase_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto starbase_flush_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_flush_3)
DEFLABEL (starbase_flush_0)
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
starbase_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto starbase_clear_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_clear_3)
DEFLABEL (starbase_clear_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

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
starbase_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto starbase_move_cursor_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_move_cursor_3)
DEFLABEL (starbase_move_cursor_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 3);

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
starbase_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto starbase_drag_cursor_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_drag_cursor_3)
DEFLABEL (starbase_drag_cursor_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 3);

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
starbase_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto starbase_draw_line_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_draw_line_3)
DEFLABEL (starbase_draw_line_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 5);

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
starbase_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto starbase_draw_point_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_draw_point_3)
DEFLABEL (starbase_draw_point_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 3);

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
starbase_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto starbase_set_line_style_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_set_line_style_3)
DEFLABEL (starbase_set_line_style_0)
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
starbase_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto starbase_set_drawing_mode_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_set_drawing_mode_3)
DEFLABEL (starbase_set_drawing_mode_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 2);

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
starbase_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto starbase_device_coordinates_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_device_coordinates_3)
DEFLABEL (starbase_device_coordinates_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

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
starbase_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto starbase_set_vdc_extent_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_set_vdc_extent_3)
DEFLABEL (starbase_set_vdc_extent_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 5);

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
starbase_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto starbase_reset_clip_rectangle_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_reset_clip_rectangle_3)
DEFLABEL (starbase_reset_clip_rectangle_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

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
starbase_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto starbase_set_clip_rectangle_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_set_clip_rectangle_3)
DEFLABEL (starbase_set_clip_rectangle_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 5);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define ENVIRONMENT_LABEL_15_3 6
#define DEBUGGING_LABEL_15_2 5
#define OBJECT_15_0 4
#define FREE_REFERENCES_LABEL_15_0 4
#define NUMBER_OF_LINKER_SECTIONS_15_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto starbase_draw_text_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_draw_text_3)
DEFLABEL (starbase_draw_text_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 4);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
starbase_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto starbase_set_text_height_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_set_text_height_3)
DEFLABEL (starbase_set_text_height_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 6
#define DEBUGGING_LABEL_17_2 5
#define OBJECT_17_0 4
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto starbase_set_text_aspect_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_set_text_aspect_3)
DEFLABEL (starbase_set_text_aspect_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 2);

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
starbase_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto starbase_set_text_slant_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_set_text_slant_3)
DEFLABEL (starbase_set_text_slant_0)
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
starbase_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto starbase_set_text_rotation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_set_text_rotation_3)
DEFLABEL (starbase_set_text_rotation_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 2);

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
starbase_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto starbase_color_map_size_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_color_map_size_3)
DEFLABEL (starbase_color_map_size_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
starbase_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto starbase_define_color_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_define_color_3)
DEFLABEL (starbase_define_color_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 5);

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
starbase_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto starbase_set_line_color_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_set_line_color_3)
DEFLABEL (starbase_set_line_color_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 2);

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
starbase_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto starbase_write_image_file_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_write_image_file_3)
DEFLABEL (starbase_write_image_file_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_6 5
#define LABEL_24_7 7
#define LABEL_24_8 9
#define LABEL_24_9 11
#define LABEL_24_10 13
#define LABEL_24_11 15
#define LABEL_24_12 17
#define LABEL_24_13 19
#define LABEL_24_14 21
#define LABEL_24_15 23
#define LABEL_24_16 25
#define LABEL_24_17 27
#define LABEL_24_18 29
#define LABEL_24_19 31
#define LABEL_24_20 33
#define LABEL_24_21 35
#define LABEL_24_22 37
#define LABEL_24_23 39
#define LABEL_24_24 41
#define LABEL_24_25 43
#define LABEL_24_26 45
#define LABEL_24_27 47
#define LABEL_24_28 49
#define LABEL_24_29 51
#define LABEL_24_30 53
#define LABEL_24_31 55
#define LABEL_24_32 57
#define LABEL_24_33 59
#define LABEL_24_34 61
#define LABEL_24_5 63
#define LABEL_24_36 65
#define ENVIRONMENT_LABEL_24_3 134
#define DEBUGGING_LABEL_24_2 133
#define OBJECT_24_31 132
#define OBJECT_24_30 131
#define OBJECT_24_29 130
#define OBJECT_24_28 129
#define OBJECT_24_27 128
#define OBJECT_24_26 127
#define OBJECT_24_25 126
#define OBJECT_24_24 125
#define OBJECT_24_23 124
#define OBJECT_24_22 123
#define OBJECT_24_21 122
#define OBJECT_24_20 121
#define OBJECT_24_19 120
#define OBJECT_24_18 119
#define OBJECT_24_17 118
#define OBJECT_24_16 117
#define OBJECT_24_15 116
#define OBJECT_24_14 115
#define OBJECT_24_13 114
#define OBJECT_24_12 113
#define OBJECT_24_11 112
#define OBJECT_24_10 111
#define OBJECT_24_9 110
#define OBJECT_24_8 109
#define OBJECT_24_7 108
#define OBJECT_24_6 107
#define OBJECT_24_5 106
#define OBJECT_24_4 105
#define OBJECT_24_3 104
#define OBJECT_24_2 103
#define OBJECT_24_1 102
#define OBJECT_24_0 101
#define EXECUTE_CACHE_24_35 67
#define FREE_REFERENCE_24_28 70
#define FREE_REFERENCE_24_27 71
#define FREE_REFERENCE_24_26 72
#define FREE_REFERENCE_24_25 73
#define FREE_REFERENCE_24_24 74
#define FREE_REFERENCE_24_23 75
#define FREE_REFERENCE_24_22 76
#define FREE_REFERENCE_24_21 77
#define FREE_REFERENCE_24_20 78
#define FREE_REFERENCE_24_19 79
#define FREE_REFERENCE_24_18 80
#define FREE_REFERENCE_24_17 81
#define FREE_REFERENCE_24_16 82
#define FREE_REFERENCE_24_15 83
#define FREE_REFERENCE_24_14 84
#define FREE_REFERENCE_24_13 85
#define FREE_REFERENCE_24_12 86
#define FREE_REFERENCE_24_11 87
#define FREE_REFERENCE_24_10 88
#define FREE_REFERENCE_24_9 89
#define FREE_REFERENCE_24_8 90
#define FREE_REFERENCE_24_7 91
#define FREE_REFERENCE_24_6 92
#define FREE_REFERENCE_24_5 93
#define FREE_REFERENCE_24_4 94
#define FREE_REFERENCE_24_3 95
#define FREE_REFERENCE_24_2 96
#define FREE_REFERENCE_24_1 97
#define FREE_REFERENCE_24_0 98
#define FREE_ASSIGNMENT_24_0 100
#define FREE_REFERENCES_LABEL_24_0 66
#define NUMBER_OF_LINKER_SECTIONS_24_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd559;
  machine_word Wrd558;
  machine_word Wrd557;
  machine_word Wrd555;
  machine_word Wrd551;
  machine_word Wrd553;
  machine_word Wrd554;
  machine_word Wrd547;
  machine_word Wrd549;
  machine_word Wrd550;
  machine_word Wrd541;
  machine_word Wrd546;
  machine_word Wrd545;
  machine_word Wrd542;
  machine_word Wrd539;
  machine_word Wrd538;
  machine_word Wrd536;
  machine_word Wrd532;
  machine_word Wrd534;
  machine_word Wrd535;
  machine_word Wrd528;
  machine_word Wrd530;
  machine_word Wrd531;
  machine_word Wrd522;
  machine_word Wrd527;
  machine_word Wrd526;
  machine_word Wrd523;
  machine_word Wrd520;
  machine_word Wrd519;
  machine_word Wrd517;
  machine_word Wrd513;
  machine_word Wrd515;
  machine_word Wrd516;
  machine_word Wrd509;
  machine_word Wrd511;
  machine_word Wrd512;
  machine_word Wrd503;
  machine_word Wrd508;
  machine_word Wrd507;
  machine_word Wrd504;
  machine_word Wrd501;
  machine_word Wrd500;
  machine_word Wrd498;
  machine_word Wrd494;
  machine_word Wrd496;
  machine_word Wrd497;
  machine_word Wrd490;
  machine_word Wrd492;
  machine_word Wrd493;
  machine_word Wrd484;
  machine_word Wrd489;
  machine_word Wrd488;
  machine_word Wrd485;
  machine_word Wrd482;
  machine_word Wrd481;
  machine_word Wrd479;
  machine_word Wrd475;
  machine_word Wrd477;
  machine_word Wrd478;
  machine_word Wrd471;
  machine_word Wrd473;
  machine_word Wrd474;
  machine_word Wrd465;
  machine_word Wrd470;
  machine_word Wrd469;
  machine_word Wrd466;
  machine_word Wrd463;
  machine_word Wrd462;
  machine_word Wrd460;
  machine_word Wrd456;
  machine_word Wrd458;
  machine_word Wrd459;
  machine_word Wrd452;
  machine_word Wrd454;
  machine_word Wrd455;
  machine_word Wrd446;
  machine_word Wrd451;
  machine_word Wrd450;
  machine_word Wrd447;
  machine_word Wrd444;
  machine_word Wrd443;
  machine_word Wrd441;
  machine_word Wrd437;
  machine_word Wrd439;
  machine_word Wrd440;
  machine_word Wrd433;
  machine_word Wrd435;
  machine_word Wrd436;
  machine_word Wrd427;
  machine_word Wrd432;
  machine_word Wrd431;
  machine_word Wrd428;
  machine_word Wrd425;
  machine_word Wrd424;
  machine_word Wrd422;
  machine_word Wrd418;
  machine_word Wrd420;
  machine_word Wrd421;
  machine_word Wrd414;
  machine_word Wrd416;
  machine_word Wrd417;
  machine_word Wrd408;
  machine_word Wrd413;
  machine_word Wrd412;
  machine_word Wrd409;
  machine_word Wrd406;
  machine_word Wrd405;
  machine_word Wrd403;
  machine_word Wrd399;
  machine_word Wrd401;
  machine_word Wrd402;
  machine_word Wrd395;
  machine_word Wrd397;
  machine_word Wrd398;
  machine_word Wrd389;
  machine_word Wrd394;
  machine_word Wrd393;
  machine_word Wrd390;
  machine_word Wrd387;
  machine_word Wrd386;
  machine_word Wrd384;
  machine_word Wrd380;
  machine_word Wrd382;
  machine_word Wrd383;
  machine_word Wrd376;
  machine_word Wrd378;
  machine_word Wrd379;
  machine_word Wrd370;
  machine_word Wrd375;
  machine_word Wrd374;
  machine_word Wrd371;
  machine_word Wrd368;
  machine_word Wrd367;
  machine_word Wrd365;
  machine_word Wrd361;
  machine_word Wrd363;
  machine_word Wrd364;
  machine_word Wrd357;
  machine_word Wrd359;
  machine_word Wrd360;
  machine_word Wrd351;
  machine_word Wrd356;
  machine_word Wrd355;
  machine_word Wrd352;
  machine_word Wrd349;
  machine_word Wrd348;
  machine_word Wrd346;
  machine_word Wrd342;
  machine_word Wrd344;
  machine_word Wrd345;
  machine_word Wrd338;
  machine_word Wrd340;
  machine_word Wrd341;
  machine_word Wrd332;
  machine_word Wrd337;
  machine_word Wrd336;
  machine_word Wrd333;
  machine_word Wrd330;
  machine_word Wrd329;
  machine_word Wrd327;
  machine_word Wrd323;
  machine_word Wrd325;
  machine_word Wrd326;
  machine_word Wrd319;
  machine_word Wrd321;
  machine_word Wrd322;
  machine_word Wrd313;
  machine_word Wrd318;
  machine_word Wrd317;
  machine_word Wrd314;
  machine_word Wrd311;
  machine_word Wrd310;
  machine_word Wrd308;
  machine_word Wrd304;
  machine_word Wrd306;
  machine_word Wrd307;
  machine_word Wrd300;
  machine_word Wrd302;
  machine_word Wrd303;
  machine_word Wrd294;
  machine_word Wrd299;
  machine_word Wrd298;
  machine_word Wrd295;
  machine_word Wrd292;
  machine_word Wrd291;
  machine_word Wrd289;
  machine_word Wrd285;
  machine_word Wrd287;
  machine_word Wrd288;
  machine_word Wrd281;
  machine_word Wrd283;
  machine_word Wrd284;
  machine_word Wrd275;
  machine_word Wrd280;
  machine_word Wrd279;
  machine_word Wrd276;
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
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_24_4);
      goto initialize_packageB_88;

    case 1:
      current_block = (Rpc - LABEL_24_6);
      goto label_90;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto label_91;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto label_92;

    case 4:
      current_block = (Rpc - LABEL_24_9);
      goto label_93;

    case 5:
      current_block = (Rpc - LABEL_24_10);
      goto label_94;

    case 6:
      current_block = (Rpc - LABEL_24_11);
      goto label_95;

    case 7:
      current_block = (Rpc - LABEL_24_12);
      goto label_96;

    case 8:
      current_block = (Rpc - LABEL_24_13);
      goto label_97;

    case 9:
      current_block = (Rpc - LABEL_24_14);
      goto label_98;

    case 10:
      current_block = (Rpc - LABEL_24_15);
      goto label_99;

    case 11:
      current_block = (Rpc - LABEL_24_16);
      goto label_100;

    case 12:
      current_block = (Rpc - LABEL_24_17);
      goto label_101;

    case 13:
      current_block = (Rpc - LABEL_24_18);
      goto label_102;

    case 14:
      current_block = (Rpc - LABEL_24_19);
      goto label_103;

    case 15:
      current_block = (Rpc - LABEL_24_20);
      goto label_104;

    case 16:
      current_block = (Rpc - LABEL_24_21);
      goto label_105;

    case 17:
      current_block = (Rpc - LABEL_24_22);
      goto label_106;

    case 18:
      current_block = (Rpc - LABEL_24_23);
      goto label_107;

    case 19:
      current_block = (Rpc - LABEL_24_24);
      goto label_108;

    case 20:
      current_block = (Rpc - LABEL_24_25);
      goto label_109;

    case 21:
      current_block = (Rpc - LABEL_24_26);
      goto label_110;

    case 22:
      current_block = (Rpc - LABEL_24_27);
      goto label_111;

    case 23:
      current_block = (Rpc - LABEL_24_28);
      goto label_112;

    case 24:
      current_block = (Rpc - LABEL_24_29);
      goto label_113;

    case 25:
      current_block = (Rpc - LABEL_24_30);
      goto label_114;

    case 26:
      current_block = (Rpc - LABEL_24_31);
      goto label_115;

    case 27:
      current_block = (Rpc - LABEL_24_32);
      goto label_116;

    case 28:
      current_block = (Rpc - LABEL_24_33);
      goto label_117;

    case 29:
      current_block = (Rpc - LABEL_24_34);
      goto label_118;

    case 30:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_87;

    case 31:
      current_block = (Rpc - LABEL_24_36);
      goto label_119;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_121)
DEFLABEL (initialize_packageB_88)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_182;
  Wrd9 = Wrd13;

DEFLABEL (label_181)
  (Wrd18.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_24_1]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_1]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_180;
  Wrd28 = Wrd32;

DEFLABEL (label_179)
  (Wrd37.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd41.Obj) = (current_block [OBJECT_24_2]);
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
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_2]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_178;
  Wrd47 = Wrd51;

DEFLABEL (label_177)
  (Wrd56.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (Wrd60.Obj) = (current_block [OBJECT_24_3]);
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
  (Wrd67.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_3]));
  (Wrd70.Obj) = ((Wrd67.pObj) [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd71.uLng) == 50)
    goto label_176;
  Wrd66 = Wrd70;

DEFLABEL (label_175)
  (Wrd75.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd66.Obj);
  (* (Rhp++)) = (Wrd75.Obj);
  (Wrd74.pObj) = (& (Rhp [-2]));
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd74.pObj)));
  (Wrd79.Obj) = (current_block [OBJECT_24_4]);
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
  (Wrd86.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_4]));
  (Wrd89.Obj) = ((Wrd86.pObj) [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if ((Wrd90.uLng) == 50)
    goto label_174;
  Wrd85 = Wrd89;

DEFLABEL (label_173)
  (Wrd94.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd85.Obj);
  (* (Rhp++)) = (Wrd94.Obj);
  (Wrd93.pObj) = (& (Rhp [-2]));
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd93.pObj)));
  (Wrd98.Obj) = (current_block [OBJECT_24_5]);
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
  (Wrd105.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_5]));
  (Wrd108.Obj) = ((Wrd105.pObj) [0]);
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if ((Wrd109.uLng) == 50)
    goto label_172;
  Wrd104 = Wrd108;

DEFLABEL (label_171)
  (Wrd113.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd104.Obj);
  (* (Rhp++)) = (Wrd113.Obj);
  (Wrd112.pObj) = (& (Rhp [-2]));
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd112.pObj)));
  (Wrd117.Obj) = (current_block [OBJECT_24_6]);
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
  (Wrd124.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_6]));
  (Wrd127.Obj) = ((Wrd124.pObj) [0]);
  (Wrd128.uLng) = (OBJECT_TYPE (Wrd127.Obj));
  if ((Wrd128.uLng) == 50)
    goto label_170;
  Wrd123 = Wrd127;

DEFLABEL (label_169)
  (Wrd132.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd123.Obj);
  (* (Rhp++)) = (Wrd132.Obj);
  (Wrd131.pObj) = (& (Rhp [-2]));
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd131.pObj)));
  (Wrd136.Obj) = (current_block [OBJECT_24_7]);
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
  (Wrd143.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_7]));
  (Wrd146.Obj) = ((Wrd143.pObj) [0]);
  (Wrd147.uLng) = (OBJECT_TYPE (Wrd146.Obj));
  if ((Wrd147.uLng) == 50)
    goto label_168;
  Wrd142 = Wrd146;

DEFLABEL (label_167)
  (Wrd151.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd142.Obj);
  (* (Rhp++)) = (Wrd151.Obj);
  (Wrd150.pObj) = (& (Rhp [-2]));
  (Wrd148.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd150.pObj)));
  (Wrd155.Obj) = (current_block [OBJECT_24_8]);
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
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_8]));
  (Wrd165.Obj) = ((Wrd162.pObj) [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if ((Wrd166.uLng) == 50)
    goto label_166;
  Wrd161 = Wrd165;

DEFLABEL (label_165)
  (Wrd170.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd161.Obj);
  (* (Rhp++)) = (Wrd170.Obj);
  (Wrd169.pObj) = (& (Rhp [-2]));
  (Wrd167.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd169.pObj)));
  (Wrd174.Obj) = (current_block [OBJECT_24_9]);
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
  (Wrd181.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_9]));
  (Wrd184.Obj) = ((Wrd181.pObj) [0]);
  (Wrd185.uLng) = (OBJECT_TYPE (Wrd184.Obj));
  if ((Wrd185.uLng) == 50)
    goto label_164;
  Wrd180 = Wrd184;

DEFLABEL (label_163)
  (Wrd189.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd180.Obj);
  (* (Rhp++)) = (Wrd189.Obj);
  (Wrd188.pObj) = (& (Rhp [-2]));
  (Wrd186.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd188.pObj)));
  (Wrd193.Obj) = (current_block [OBJECT_24_10]);
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
  (Wrd200.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_10]));
  (Wrd203.Obj) = ((Wrd200.pObj) [0]);
  (Wrd204.uLng) = (OBJECT_TYPE (Wrd203.Obj));
  if ((Wrd204.uLng) == 50)
    goto label_162;
  Wrd199 = Wrd203;

DEFLABEL (label_161)
  (Wrd208.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd199.Obj);
  (* (Rhp++)) = (Wrd208.Obj);
  (Wrd207.pObj) = (& (Rhp [-2]));
  (Wrd205.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd207.pObj)));
  (Wrd212.Obj) = (current_block [OBJECT_24_11]);
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
  (Wrd219.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_11]));
  (Wrd222.Obj) = ((Wrd219.pObj) [0]);
  (Wrd223.uLng) = (OBJECT_TYPE (Wrd222.Obj));
  if ((Wrd223.uLng) == 50)
    goto label_160;
  Wrd218 = Wrd222;

DEFLABEL (label_159)
  (Wrd227.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd218.Obj);
  (* (Rhp++)) = (Wrd227.Obj);
  (Wrd226.pObj) = (& (Rhp [-2]));
  (Wrd224.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd226.pObj)));
  (Wrd231.Obj) = (current_block [OBJECT_24_12]);
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
  (Wrd238.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_12]));
  (Wrd241.Obj) = ((Wrd238.pObj) [0]);
  (Wrd242.uLng) = (OBJECT_TYPE (Wrd241.Obj));
  if ((Wrd242.uLng) == 50)
    goto label_158;
  Wrd237 = Wrd241;

DEFLABEL (label_157)
  (Wrd246.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd237.Obj);
  (* (Rhp++)) = (Wrd246.Obj);
  (Wrd245.pObj) = (& (Rhp [-2]));
  (Wrd243.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd245.pObj)));
  (Wrd250.Obj) = (current_block [OBJECT_24_13]);
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
  (Wrd257.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_13]));
  (Wrd260.Obj) = ((Wrd257.pObj) [0]);
  (Wrd261.uLng) = (OBJECT_TYPE (Wrd260.Obj));
  if ((Wrd261.uLng) == 50)
    goto label_156;
  Wrd256 = Wrd260;

DEFLABEL (label_155)
  (Wrd265.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd256.Obj);
  (* (Rhp++)) = (Wrd265.Obj);
  (Wrd264.pObj) = (& (Rhp [-2]));
  (Wrd262.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd264.pObj)));
  (Wrd269.Obj) = (current_block [OBJECT_24_14]);
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
  (Wrd276.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_14]));
  (Wrd279.Obj) = ((Wrd276.pObj) [0]);
  (Wrd280.uLng) = (OBJECT_TYPE (Wrd279.Obj));
  if ((Wrd280.uLng) == 50)
    goto label_154;
  Wrd275 = Wrd279;

DEFLABEL (label_153)
  (Wrd284.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd275.Obj);
  (* (Rhp++)) = (Wrd284.Obj);
  (Wrd283.pObj) = (& (Rhp [-2]));
  (Wrd281.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd283.pObj)));
  (Wrd288.Obj) = (current_block [OBJECT_24_15]);
  (* (Rhp++)) = (Wrd288.Obj);
  (* (Rhp++)) = (Wrd281.Obj);
  (Wrd287.pObj) = (& (Rhp [-2]));
  (Wrd285.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd287.pObj)));
  (Wrd289.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd285.Obj);
  (* (Rhp++)) = (Wrd289.Obj);
  (Wrd291.pObj) = (& (Rhp [-2]));
  (Wrd292.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd291.pObj)));
  (* (--Rsp)) = (Wrd292.Obj);
  (Wrd295.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_15]));
  (Wrd298.Obj) = ((Wrd295.pObj) [0]);
  (Wrd299.uLng) = (OBJECT_TYPE (Wrd298.Obj));
  if ((Wrd299.uLng) == 50)
    goto label_152;
  Wrd294 = Wrd298;

DEFLABEL (label_151)
  (Wrd303.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd294.Obj);
  (* (Rhp++)) = (Wrd303.Obj);
  (Wrd302.pObj) = (& (Rhp [-2]));
  (Wrd300.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd302.pObj)));
  (Wrd307.Obj) = (current_block [OBJECT_24_16]);
  (* (Rhp++)) = (Wrd307.Obj);
  (* (Rhp++)) = (Wrd300.Obj);
  (Wrd306.pObj) = (& (Rhp [-2]));
  (Wrd304.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd306.pObj)));
  (Wrd308.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd304.Obj);
  (* (Rhp++)) = (Wrd308.Obj);
  (Wrd310.pObj) = (& (Rhp [-2]));
  (Wrd311.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd310.pObj)));
  (* (--Rsp)) = (Wrd311.Obj);
  (Wrd314.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_16]));
  (Wrd317.Obj) = ((Wrd314.pObj) [0]);
  (Wrd318.uLng) = (OBJECT_TYPE (Wrd317.Obj));
  if ((Wrd318.uLng) == 50)
    goto label_150;
  Wrd313 = Wrd317;

DEFLABEL (label_149)
  (Wrd322.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd313.Obj);
  (* (Rhp++)) = (Wrd322.Obj);
  (Wrd321.pObj) = (& (Rhp [-2]));
  (Wrd319.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd321.pObj)));
  (Wrd326.Obj) = (current_block [OBJECT_24_17]);
  (* (Rhp++)) = (Wrd326.Obj);
  (* (Rhp++)) = (Wrd319.Obj);
  (Wrd325.pObj) = (& (Rhp [-2]));
  (Wrd323.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd325.pObj)));
  (Wrd327.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd323.Obj);
  (* (Rhp++)) = (Wrd327.Obj);
  (Wrd329.pObj) = (& (Rhp [-2]));
  (Wrd330.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd329.pObj)));
  (* (--Rsp)) = (Wrd330.Obj);
  (Wrd333.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_17]));
  (Wrd336.Obj) = ((Wrd333.pObj) [0]);
  (Wrd337.uLng) = (OBJECT_TYPE (Wrd336.Obj));
  if ((Wrd337.uLng) == 50)
    goto label_148;
  Wrd332 = Wrd336;

DEFLABEL (label_147)
  (Wrd341.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd332.Obj);
  (* (Rhp++)) = (Wrd341.Obj);
  (Wrd340.pObj) = (& (Rhp [-2]));
  (Wrd338.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd340.pObj)));
  (Wrd345.Obj) = (current_block [OBJECT_24_18]);
  (* (Rhp++)) = (Wrd345.Obj);
  (* (Rhp++)) = (Wrd338.Obj);
  (Wrd344.pObj) = (& (Rhp [-2]));
  (Wrd342.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd344.pObj)));
  (Wrd346.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd342.Obj);
  (* (Rhp++)) = (Wrd346.Obj);
  (Wrd348.pObj) = (& (Rhp [-2]));
  (Wrd349.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd348.pObj)));
  (* (--Rsp)) = (Wrd349.Obj);
  (Wrd352.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_18]));
  (Wrd355.Obj) = ((Wrd352.pObj) [0]);
  (Wrd356.uLng) = (OBJECT_TYPE (Wrd355.Obj));
  if ((Wrd356.uLng) == 50)
    goto label_146;
  Wrd351 = Wrd355;

DEFLABEL (label_145)
  (Wrd360.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd351.Obj);
  (* (Rhp++)) = (Wrd360.Obj);
  (Wrd359.pObj) = (& (Rhp [-2]));
  (Wrd357.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd359.pObj)));
  (Wrd364.Obj) = (current_block [OBJECT_24_19]);
  (* (Rhp++)) = (Wrd364.Obj);
  (* (Rhp++)) = (Wrd357.Obj);
  (Wrd363.pObj) = (& (Rhp [-2]));
  (Wrd361.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd363.pObj)));
  (Wrd365.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd361.Obj);
  (* (Rhp++)) = (Wrd365.Obj);
  (Wrd367.pObj) = (& (Rhp [-2]));
  (Wrd368.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd367.pObj)));
  (* (--Rsp)) = (Wrd368.Obj);
  (Wrd371.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_19]));
  (Wrd374.Obj) = ((Wrd371.pObj) [0]);
  (Wrd375.uLng) = (OBJECT_TYPE (Wrd374.Obj));
  if ((Wrd375.uLng) == 50)
    goto label_144;
  Wrd370 = Wrd374;

DEFLABEL (label_143)
  (Wrd379.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd370.Obj);
  (* (Rhp++)) = (Wrd379.Obj);
  (Wrd378.pObj) = (& (Rhp [-2]));
  (Wrd376.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd378.pObj)));
  (Wrd383.Obj) = (current_block [OBJECT_24_20]);
  (* (Rhp++)) = (Wrd383.Obj);
  (* (Rhp++)) = (Wrd376.Obj);
  (Wrd382.pObj) = (& (Rhp [-2]));
  (Wrd380.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd382.pObj)));
  (Wrd384.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd380.Obj);
  (* (Rhp++)) = (Wrd384.Obj);
  (Wrd386.pObj) = (& (Rhp [-2]));
  (Wrd387.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd386.pObj)));
  (* (--Rsp)) = (Wrd387.Obj);
  (Wrd390.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_20]));
  (Wrd393.Obj) = ((Wrd390.pObj) [0]);
  (Wrd394.uLng) = (OBJECT_TYPE (Wrd393.Obj));
  if ((Wrd394.uLng) == 50)
    goto label_142;
  Wrd389 = Wrd393;

DEFLABEL (label_141)
  (Wrd398.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd389.Obj);
  (* (Rhp++)) = (Wrd398.Obj);
  (Wrd397.pObj) = (& (Rhp [-2]));
  (Wrd395.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd397.pObj)));
  (Wrd402.Obj) = (current_block [OBJECT_24_21]);
  (* (Rhp++)) = (Wrd402.Obj);
  (* (Rhp++)) = (Wrd395.Obj);
  (Wrd401.pObj) = (& (Rhp [-2]));
  (Wrd399.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd401.pObj)));
  (Wrd403.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd399.Obj);
  (* (Rhp++)) = (Wrd403.Obj);
  (Wrd405.pObj) = (& (Rhp [-2]));
  (Wrd406.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd405.pObj)));
  (* (--Rsp)) = (Wrd406.Obj);
  (Wrd409.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_21]));
  (Wrd412.Obj) = ((Wrd409.pObj) [0]);
  (Wrd413.uLng) = (OBJECT_TYPE (Wrd412.Obj));
  if ((Wrd413.uLng) == 50)
    goto label_140;
  Wrd408 = Wrd412;

DEFLABEL (label_139)
  (Wrd417.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd408.Obj);
  (* (Rhp++)) = (Wrd417.Obj);
  (Wrd416.pObj) = (& (Rhp [-2]));
  (Wrd414.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd416.pObj)));
  (Wrd421.Obj) = (current_block [OBJECT_24_22]);
  (* (Rhp++)) = (Wrd421.Obj);
  (* (Rhp++)) = (Wrd414.Obj);
  (Wrd420.pObj) = (& (Rhp [-2]));
  (Wrd418.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd420.pObj)));
  (Wrd422.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd418.Obj);
  (* (Rhp++)) = (Wrd422.Obj);
  (Wrd424.pObj) = (& (Rhp [-2]));
  (Wrd425.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd424.pObj)));
  (* (--Rsp)) = (Wrd425.Obj);
  (Wrd428.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_22]));
  (Wrd431.Obj) = ((Wrd428.pObj) [0]);
  (Wrd432.uLng) = (OBJECT_TYPE (Wrd431.Obj));
  if ((Wrd432.uLng) == 50)
    goto label_138;
  Wrd427 = Wrd431;

DEFLABEL (label_137)
  (Wrd436.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd427.Obj);
  (* (Rhp++)) = (Wrd436.Obj);
  (Wrd435.pObj) = (& (Rhp [-2]));
  (Wrd433.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd435.pObj)));
  (Wrd440.Obj) = (current_block [OBJECT_24_23]);
  (* (Rhp++)) = (Wrd440.Obj);
  (* (Rhp++)) = (Wrd433.Obj);
  (Wrd439.pObj) = (& (Rhp [-2]));
  (Wrd437.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd439.pObj)));
  (Wrd441.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd437.Obj);
  (* (Rhp++)) = (Wrd441.Obj);
  (Wrd443.pObj) = (& (Rhp [-2]));
  (Wrd444.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd443.pObj)));
  (* (--Rsp)) = (Wrd444.Obj);
  (Wrd447.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_23]));
  (Wrd450.Obj) = ((Wrd447.pObj) [0]);
  (Wrd451.uLng) = (OBJECT_TYPE (Wrd450.Obj));
  if ((Wrd451.uLng) == 50)
    goto label_136;
  Wrd446 = Wrd450;

DEFLABEL (label_135)
  (Wrd455.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd446.Obj);
  (* (Rhp++)) = (Wrd455.Obj);
  (Wrd454.pObj) = (& (Rhp [-2]));
  (Wrd452.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd454.pObj)));
  (Wrd459.Obj) = (current_block [OBJECT_24_24]);
  (* (Rhp++)) = (Wrd459.Obj);
  (* (Rhp++)) = (Wrd452.Obj);
  (Wrd458.pObj) = (& (Rhp [-2]));
  (Wrd456.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd458.pObj)));
  (Wrd460.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd456.Obj);
  (* (Rhp++)) = (Wrd460.Obj);
  (Wrd462.pObj) = (& (Rhp [-2]));
  (Wrd463.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd462.pObj)));
  (* (--Rsp)) = (Wrd463.Obj);
  (Wrd466.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_24]));
  (Wrd469.Obj) = ((Wrd466.pObj) [0]);
  (Wrd470.uLng) = (OBJECT_TYPE (Wrd469.Obj));
  if ((Wrd470.uLng) == 50)
    goto label_134;
  Wrd465 = Wrd469;

DEFLABEL (label_133)
  (Wrd474.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd465.Obj);
  (* (Rhp++)) = (Wrd474.Obj);
  (Wrd473.pObj) = (& (Rhp [-2]));
  (Wrd471.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd473.pObj)));
  (Wrd478.Obj) = (current_block [OBJECT_24_25]);
  (* (Rhp++)) = (Wrd478.Obj);
  (* (Rhp++)) = (Wrd471.Obj);
  (Wrd477.pObj) = (& (Rhp [-2]));
  (Wrd475.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd477.pObj)));
  (Wrd479.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd475.Obj);
  (* (Rhp++)) = (Wrd479.Obj);
  (Wrd481.pObj) = (& (Rhp [-2]));
  (Wrd482.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd481.pObj)));
  (* (--Rsp)) = (Wrd482.Obj);
  (Wrd485.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_25]));
  (Wrd488.Obj) = ((Wrd485.pObj) [0]);
  (Wrd489.uLng) = (OBJECT_TYPE (Wrd488.Obj));
  if ((Wrd489.uLng) == 50)
    goto label_132;
  Wrd484 = Wrd488;

DEFLABEL (label_131)
  (Wrd493.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd484.Obj);
  (* (Rhp++)) = (Wrd493.Obj);
  (Wrd492.pObj) = (& (Rhp [-2]));
  (Wrd490.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd492.pObj)));
  (Wrd497.Obj) = (current_block [OBJECT_24_26]);
  (* (Rhp++)) = (Wrd497.Obj);
  (* (Rhp++)) = (Wrd490.Obj);
  (Wrd496.pObj) = (& (Rhp [-2]));
  (Wrd494.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd496.pObj)));
  (Wrd498.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd494.Obj);
  (* (Rhp++)) = (Wrd498.Obj);
  (Wrd500.pObj) = (& (Rhp [-2]));
  (Wrd501.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd500.pObj)));
  (* (--Rsp)) = (Wrd501.Obj);
  (Wrd504.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_26]));
  (Wrd507.Obj) = ((Wrd504.pObj) [0]);
  (Wrd508.uLng) = (OBJECT_TYPE (Wrd507.Obj));
  if ((Wrd508.uLng) == 50)
    goto label_130;
  Wrd503 = Wrd507;

DEFLABEL (label_129)
  (Wrd512.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd503.Obj);
  (* (Rhp++)) = (Wrd512.Obj);
  (Wrd511.pObj) = (& (Rhp [-2]));
  (Wrd509.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd511.pObj)));
  (Wrd516.Obj) = (current_block [OBJECT_24_27]);
  (* (Rhp++)) = (Wrd516.Obj);
  (* (Rhp++)) = (Wrd509.Obj);
  (Wrd515.pObj) = (& (Rhp [-2]));
  (Wrd513.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd515.pObj)));
  (Wrd517.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd513.Obj);
  (* (Rhp++)) = (Wrd517.Obj);
  (Wrd519.pObj) = (& (Rhp [-2]));
  (Wrd520.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd519.pObj)));
  (* (--Rsp)) = (Wrd520.Obj);
  (Wrd523.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_27]));
  (Wrd526.Obj) = ((Wrd523.pObj) [0]);
  (Wrd527.uLng) = (OBJECT_TYPE (Wrd526.Obj));
  if ((Wrd527.uLng) == 50)
    goto label_128;
  Wrd522 = Wrd526;

DEFLABEL (label_127)
  (Wrd531.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd522.Obj);
  (* (Rhp++)) = (Wrd531.Obj);
  (Wrd530.pObj) = (& (Rhp [-2]));
  (Wrd528.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd530.pObj)));
  (Wrd535.Obj) = (current_block [OBJECT_24_28]);
  (* (Rhp++)) = (Wrd535.Obj);
  (* (Rhp++)) = (Wrd528.Obj);
  (Wrd534.pObj) = (& (Rhp [-2]));
  (Wrd532.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd534.pObj)));
  (Wrd536.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd532.Obj);
  (* (Rhp++)) = (Wrd536.Obj);
  (Wrd538.pObj) = (& (Rhp [-2]));
  (Wrd539.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd538.pObj)));
  (* (--Rsp)) = (Wrd539.Obj);
  (Wrd542.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_28]));
  (Wrd545.Obj) = ((Wrd542.pObj) [0]);
  (Wrd546.uLng) = (OBJECT_TYPE (Wrd545.Obj));
  if ((Wrd546.uLng) == 50)
    goto label_126;
  Wrd541 = Wrd545;

DEFLABEL (label_125)
  (Wrd550.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd541.Obj);
  (* (Rhp++)) = (Wrd550.Obj);
  (Wrd549.pObj) = (& (Rhp [-2]));
  (Wrd547.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd549.pObj)));
  (Wrd554.Obj) = (current_block [OBJECT_24_29]);
  (* (Rhp++)) = (Wrd554.Obj);
  (* (Rhp++)) = (Wrd547.Obj);
  (Wrd553.pObj) = (& (Rhp [-2]));
  (Wrd551.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd553.pObj)));
  (Wrd555.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd551.Obj);
  (* (Rhp++)) = (Wrd555.Obj);
  (Wrd557.pObj) = (& (Rhp [-2]));
  (Wrd558.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd557.pObj)));
  (* (--Rsp)) = (Wrd558.Obj);
  (Wrd559.Obj) = (current_block [OBJECT_24_30]);
  (* (--Rsp)) = (Wrd559.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_35]));

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_24_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_124;

DEFLABEL (label_123)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_122)
  Rvl = (current_block [OBJECT_24_31]);
  goto pop_return;

DEFLABEL (label_124)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_123;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_24_36])), (Wrd6.pObj), Rvl);

DEFLABEL (label_119)
  goto label_122;

DEFLABEL (label_126)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_34])), (Wrd542.pObj));

DEFLABEL (label_118)
  (Wrd541.Obj) = Rvl;
  goto label_125;

DEFLABEL (label_128)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_33])), (Wrd523.pObj));

DEFLABEL (label_117)
  (Wrd522.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_32])), (Wrd504.pObj));

DEFLABEL (label_116)
  (Wrd503.Obj) = Rvl;
  goto label_129;

DEFLABEL (label_132)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_31])), (Wrd485.pObj));

DEFLABEL (label_115)
  (Wrd484.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_134)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_30])), (Wrd466.pObj));

DEFLABEL (label_114)
  (Wrd465.Obj) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_29])), (Wrd447.pObj));

DEFLABEL (label_113)
  (Wrd446.Obj) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_28])), (Wrd428.pObj));

DEFLABEL (label_112)
  (Wrd427.Obj) = Rvl;
  goto label_137;

DEFLABEL (label_140)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_27])), (Wrd409.pObj));

DEFLABEL (label_111)
  (Wrd408.Obj) = Rvl;
  goto label_139;

DEFLABEL (label_142)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_26])), (Wrd390.pObj));

DEFLABEL (label_110)
  (Wrd389.Obj) = Rvl;
  goto label_141;

DEFLABEL (label_144)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_25])), (Wrd371.pObj));

DEFLABEL (label_109)
  (Wrd370.Obj) = Rvl;
  goto label_143;

DEFLABEL (label_146)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_24])), (Wrd352.pObj));

DEFLABEL (label_108)
  (Wrd351.Obj) = Rvl;
  goto label_145;

DEFLABEL (label_148)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_23])), (Wrd333.pObj));

DEFLABEL (label_107)
  (Wrd332.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_150)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_22])), (Wrd314.pObj));

DEFLABEL (label_106)
  (Wrd313.Obj) = Rvl;
  goto label_149;

DEFLABEL (label_152)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_21])), (Wrd295.pObj));

DEFLABEL (label_105)
  (Wrd294.Obj) = Rvl;
  goto label_151;

DEFLABEL (label_154)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_20])), (Wrd276.pObj));

DEFLABEL (label_104)
  (Wrd275.Obj) = Rvl;
  goto label_153;

DEFLABEL (label_156)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_19])), (Wrd257.pObj));

DEFLABEL (label_103)
  (Wrd256.Obj) = Rvl;
  goto label_155;

DEFLABEL (label_158)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_18])), (Wrd238.pObj));

DEFLABEL (label_102)
  (Wrd237.Obj) = Rvl;
  goto label_157;

DEFLABEL (label_160)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_17])), (Wrd219.pObj));

DEFLABEL (label_101)
  (Wrd218.Obj) = Rvl;
  goto label_159;

DEFLABEL (label_162)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_16])), (Wrd200.pObj));

DEFLABEL (label_100)
  (Wrd199.Obj) = Rvl;
  goto label_161;

DEFLABEL (label_164)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_15])), (Wrd181.pObj));

DEFLABEL (label_99)
  (Wrd180.Obj) = Rvl;
  goto label_163;

DEFLABEL (label_166)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_14])), (Wrd162.pObj));

DEFLABEL (label_98)
  (Wrd161.Obj) = Rvl;
  goto label_165;

DEFLABEL (label_168)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_13])), (Wrd143.pObj));

DEFLABEL (label_97)
  (Wrd142.Obj) = Rvl;
  goto label_167;

DEFLABEL (label_170)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_12])), (Wrd124.pObj));

DEFLABEL (label_96)
  (Wrd123.Obj) = Rvl;
  goto label_169;

DEFLABEL (label_172)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_11])), (Wrd105.pObj));

DEFLABEL (label_95)
  (Wrd104.Obj) = Rvl;
  goto label_171;

DEFLABEL (label_174)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_10])), (Wrd86.pObj));

DEFLABEL (label_94)
  (Wrd85.Obj) = Rvl;
  goto label_173;

DEFLABEL (label_176)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_9])), (Wrd67.pObj));

DEFLABEL (label_93)
  (Wrd66.Obj) = Rvl;
  goto label_175;

DEFLABEL (label_178)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_8])), (Wrd48.pObj));

DEFLABEL (label_92)
  (Wrd47.Obj) = Rvl;
  goto label_177;

DEFLABEL (label_180)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_7])), (Wrd29.pObj));

DEFLABEL (label_91)
  (Wrd28.Obj) = Rvl;
  goto label_179;

DEFLABEL (label_182)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_6])), (Wrd10.pObj));

DEFLABEL (label_90)
  (Wrd9.Obj) = Rvl;
  goto label_181;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define ENVIRONMENT_LABEL_25_3 7
#define DEBUGGING_LABEL_25_2 6
#define OBJECT_25_1 5
#define OBJECT_25_0 4
#define FREE_REFERENCES_LABEL_25_0 4
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_25_4);
      goto starbase_graphics_descriptor_identifier_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_graphics_descriptor_identifier_3)
DEFLABEL (starbase_graphics_descriptor_identifier_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

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

#define LABEL_26_4 3
#define ENVIRONMENT_LABEL_26_3 7
#define DEBUGGING_LABEL_26_2 6
#define OBJECT_26_1 5
#define OBJECT_26_0 4
#define FREE_REFERENCES_LABEL_26_0 4
#define NUMBER_OF_LINKER_SECTIONS_26_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_26_4);
      goto starbase_graphics_descriptor_x_left_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_graphics_descriptor_x_left_3)
DEFLABEL (starbase_graphics_descriptor_x_left_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_26_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

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

#define LABEL_27_4 3
#define ENVIRONMENT_LABEL_27_3 7
#define DEBUGGING_LABEL_27_2 6
#define OBJECT_27_1 5
#define OBJECT_27_0 4
#define FREE_REFERENCES_LABEL_27_0 4
#define NUMBER_OF_LINKER_SECTIONS_27_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto starbase_graphics_descriptor_y_bottom_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_graphics_descriptor_y_bottom_3)
DEFLABEL (starbase_graphics_descriptor_y_bottom_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_27_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

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

#define LABEL_28_4 3
#define ENVIRONMENT_LABEL_28_3 7
#define DEBUGGING_LABEL_28_2 6
#define OBJECT_28_1 5
#define OBJECT_28_0 4
#define FREE_REFERENCES_LABEL_28_0 4
#define NUMBER_OF_LINKER_SECTIONS_28_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto starbase_graphics_descriptor_x_right_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_graphics_descriptor_x_right_3)
DEFLABEL (starbase_graphics_descriptor_x_right_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_28_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

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

#define LABEL_29_4 3
#define ENVIRONMENT_LABEL_29_3 7
#define DEBUGGING_LABEL_29_2 6
#define OBJECT_29_1 5
#define OBJECT_29_0 4
#define FREE_REFERENCES_LABEL_29_0 4
#define NUMBER_OF_LINKER_SECTIONS_29_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto starbase_graphics_descriptor_y_top_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_graphics_descriptor_y_top_3)
DEFLABEL (starbase_graphics_descriptor_y_top_0)
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
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
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
starbase_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto starbase_graphics_descriptor_text_height_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_graphics_descriptor_text_height_3)
DEFLABEL (starbase_graphics_descriptor_text_height_0)
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
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
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
starbase_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto starbase_graphics_descriptor_text_aspect_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_graphics_descriptor_text_aspect_3)
DEFLABEL (starbase_graphics_descriptor_text_aspect_0)
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
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [8]);
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
starbase_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto starbase_graphics_descriptor_text_slant_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_graphics_descriptor_text_slant_3)
DEFLABEL (starbase_graphics_descriptor_text_slant_0)
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
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [9]);
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
starbase_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto starbase_graphics_descriptor_text_rotation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_graphics_descriptor_text_rotation_3)
DEFLABEL (starbase_graphics_descriptor_text_rotation_0)
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
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [10]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define ENVIRONMENT_LABEL_34_3 8
#define DEBUGGING_LABEL_34_2 7
#define OBJECT_34_2 6
#define OBJECT_34_1 5
#define OBJECT_34_0 4
#define FREE_REFERENCES_LABEL_34_0 4
#define NUMBER_OF_LINKER_SECTIONS_34_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_34_4);
      goto set_starbase_graphics_descriptor_x_leftB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_starbase_graphics_descriptor_x_leftB_3)
DEFLABEL (set_starbase_graphics_descriptor_x_leftB_0)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_34_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_34_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define ENVIRONMENT_LABEL_35_3 8
#define DEBUGGING_LABEL_35_2 7
#define OBJECT_35_2 6
#define OBJECT_35_1 5
#define OBJECT_35_0 4
#define FREE_REFERENCES_LABEL_35_0 4
#define NUMBER_OF_LINKER_SECTIONS_35_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_35_4);
      goto set_starbase_graphics_descriptor_y_bottomB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_starbase_graphics_descriptor_y_bottomB_3)
DEFLABEL (set_starbase_graphics_descriptor_y_bottomB_0)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_35_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_35_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define ENVIRONMENT_LABEL_36_3 8
#define DEBUGGING_LABEL_36_2 7
#define OBJECT_36_2 6
#define OBJECT_36_1 5
#define OBJECT_36_0 4
#define FREE_REFERENCES_LABEL_36_0 4
#define NUMBER_OF_LINKER_SECTIONS_36_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_36_4);
      goto set_starbase_graphics_descriptor_x_rightB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_starbase_graphics_descriptor_x_rightB_3)
DEFLABEL (set_starbase_graphics_descriptor_x_rightB_0)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_36_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_36_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define ENVIRONMENT_LABEL_37_3 8
#define DEBUGGING_LABEL_37_2 7
#define OBJECT_37_2 6
#define OBJECT_37_1 5
#define OBJECT_37_0 4
#define FREE_REFERENCES_LABEL_37_0 4
#define NUMBER_OF_LINKER_SECTIONS_37_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_37_4);
      goto set_starbase_graphics_descriptor_y_topB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_starbase_graphics_descriptor_y_topB_3)
DEFLABEL (set_starbase_graphics_descriptor_y_topB_0)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_37_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_37_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define ENVIRONMENT_LABEL_38_3 8
#define DEBUGGING_LABEL_38_2 7
#define OBJECT_38_2 6
#define OBJECT_38_1 5
#define OBJECT_38_0 4
#define FREE_REFERENCES_LABEL_38_0 4
#define NUMBER_OF_LINKER_SECTIONS_38_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_38_4);
      goto set_starbase_graphics_descriptor_text_heightB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_starbase_graphics_descriptor_text_heightB_3)
DEFLABEL (set_starbase_graphics_descriptor_text_heightB_0)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_38_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [7]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_38_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define ENVIRONMENT_LABEL_39_3 8
#define DEBUGGING_LABEL_39_2 7
#define OBJECT_39_2 6
#define OBJECT_39_1 5
#define OBJECT_39_0 4
#define FREE_REFERENCES_LABEL_39_0 4
#define NUMBER_OF_LINKER_SECTIONS_39_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_39_4);
      goto set_starbase_graphics_descriptor_text_aspectB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_starbase_graphics_descriptor_text_aspectB_3)
DEFLABEL (set_starbase_graphics_descriptor_text_aspectB_0)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_39_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [8]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_39_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define ENVIRONMENT_LABEL_40_3 8
#define DEBUGGING_LABEL_40_2 7
#define OBJECT_40_2 6
#define OBJECT_40_1 5
#define OBJECT_40_0 4
#define FREE_REFERENCES_LABEL_40_0 4
#define NUMBER_OF_LINKER_SECTIONS_40_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_40_4);
      goto set_starbase_graphics_descriptor_text_slantB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_starbase_graphics_descriptor_text_slantB_3)
DEFLABEL (set_starbase_graphics_descriptor_text_slantB_0)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_40_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [9]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_40_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define ENVIRONMENT_LABEL_41_3 8
#define DEBUGGING_LABEL_41_2 7
#define OBJECT_41_2 6
#define OBJECT_41_1 5
#define OBJECT_41_0 4
#define FREE_REFERENCES_LABEL_41_0 4
#define NUMBER_OF_LINKER_SECTIONS_41_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_41_4);
      goto set_starbase_graphics_descriptor_text_rotationB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_starbase_graphics_descriptor_text_rotationB_3)
DEFLABEL (set_starbase_graphics_descriptor_text_rotationB_0)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_41_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [10]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_41_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_6 7
#define LABEL_42_7 9
#define ENVIRONMENT_LABEL_42_3 17
#define DEBUGGING_LABEL_42_2 16
#define OBJECT_42_3 15
#define OBJECT_42_2 14
#define OBJECT_42_1 13
#define OBJECT_42_0 12
#define FREE_REFERENCE_42_0 11
#define FREE_REFERENCES_LABEL_42_0 10
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_42_4);
      goto starbase_graphics_descriptorP_4;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_42_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_42_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_graphics_descriptorP_10)
DEFLABEL (starbase_graphics_descriptorP_4)
  INTERRUPT_CHECK (26, LABEL_42_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_0]));
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
  Rvl = (current_block [OBJECT_42_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_42_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define ENVIRONMENT_LABEL_43_3 12
#define DEBUGGING_LABEL_43_2 11
#define OBJECT_43_1 10
#define OBJECT_43_0 9
#define EXECUTE_CACHE_43_6 7
#define FREE_REFERENCES_LABEL_43_0 6
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_43_4);
      goto starbase_device_identifier_1;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_device_identifier_4)
DEFLABEL (starbase_device_identifier_1)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_43_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define LABEL_44_6 7
#define LABEL_44_7 9
#define LABEL_44_8 11
#define LABEL_44_10 13
#define LABEL_44_12 15
#define LABEL_44_13 17
#define LABEL_44_15 19
#define ENVIRONMENT_LABEL_44_3 41
#define DEBUGGING_LABEL_44_2 40
#define OBJECT_44_12 39
#define OBJECT_44_11 38
#define OBJECT_44_10 37
#define OBJECT_44_9 36
#define OBJECT_44_8 35
#define OBJECT_44_7 34
#define OBJECT_44_6 33
#define OBJECT_44_5 32
#define OBJECT_44_4 31
#define OBJECT_44_3 30
#define OBJECT_44_2 29
#define OBJECT_44_1 28
#define OBJECT_44_0 27
#define EXECUTE_CACHE_44_11 21
#define EXECUTE_CACHE_44_14 23
#define EXECUTE_CACHE_44_9 25
#define FREE_REFERENCES_LABEL_44_0 20
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_44_4);
      goto lambda_27;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto label_29;

    case 2:
      current_block = (Rpc - LABEL_44_6);
      goto label_30;

    case 3:
      current_block = (Rpc - LABEL_44_7);
      goto continuation_17;

    case 4:
      current_block = (Rpc - LABEL_44_8);
      goto continuation_16;

    case 5:
      current_block = (Rpc - LABEL_44_10);
      goto continuation_12;

    case 6:
      current_block = (Rpc - LABEL_44_12);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_44_13);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_44_15);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_32)
DEFLABEL (lambda_27)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_36;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_35)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_34;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_33)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_44_2]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_44_3]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_9]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_44_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_11]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_44_7);
  (Wrd8.Obj) = (current_block [OBJECT_44_4]);
  (Wrd9.Obj) = (current_block [OBJECT_44_5]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_44_6]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_44_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_44_7]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_9]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_44_10);
  (Wrd8.Obj) = (current_block [OBJECT_44_4]);
  (Wrd9.Obj) = (current_block [OBJECT_44_5]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_44_8]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd18.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_44_9]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_12]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_13]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_44_10]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_44_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_44_12);
  (Wrd8.Obj) = (current_block [OBJECT_44_6]);
  (Wrd9.Obj) = (current_block [OBJECT_44_5]);
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
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_44_11]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_44_15);
  (Wrd8.Obj) = (current_block [OBJECT_44_8]);
  (Wrd9.Obj) = (current_block [OBJECT_44_5]);
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
  (Wrd21.Obj) = (current_block [OBJECT_44_9]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd22.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd30.Obj) = (current_block [OBJECT_44_12]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_0]), 1);

DEFLABEL (label_29)
  (Wrd5.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define ENVIRONMENT_LABEL_45_3 12
#define DEBUGGING_LABEL_45_2 11
#define OBJECT_45_1 10
#define OBJECT_45_0 9
#define EXECUTE_CACHE_45_6 7
#define FREE_REFERENCES_LABEL_45_0 6
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_45_4);
      goto starbase_device_x_left_1;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_device_x_left_4)
DEFLABEL (starbase_device_x_left_1)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_45_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_45_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define ENVIRONMENT_LABEL_46_3 13
#define DEBUGGING_LABEL_46_2 12
#define OBJECT_46_2 11
#define OBJECT_46_1 10
#define OBJECT_46_0 9
#define EXECUTE_CACHE_46_6 7
#define FREE_REFERENCES_LABEL_46_0 6
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_46_4);
      goto set_starbase_device_x_leftB_1;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_starbase_device_x_leftB_4)
DEFLABEL (set_starbase_device_x_leftB_1)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_46_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd18.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 3);

DEFLABEL (label_6)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_5;
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd9.Obj);
  Rvl = (current_block [OBJECT_46_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define ENVIRONMENT_LABEL_47_3 12
#define DEBUGGING_LABEL_47_2 11
#define OBJECT_47_1 10
#define OBJECT_47_0 9
#define EXECUTE_CACHE_47_6 7
#define FREE_REFERENCES_LABEL_47_0 6
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_47_4);
      goto starbase_device_y_bottom_1;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_device_y_bottom_4)
DEFLABEL (starbase_device_y_bottom_1)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_47_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define ENVIRONMENT_LABEL_48_3 13
#define DEBUGGING_LABEL_48_2 12
#define OBJECT_48_2 11
#define OBJECT_48_1 10
#define OBJECT_48_0 9
#define EXECUTE_CACHE_48_6 7
#define FREE_REFERENCES_LABEL_48_0 6
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_48_4);
      goto set_starbase_device_y_bottomB_1;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_starbase_device_y_bottomB_4)
DEFLABEL (set_starbase_device_y_bottomB_1)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_48_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd18.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_2]), 3);

DEFLABEL (label_6)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_5;
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [4]) = (Wrd9.Obj);
  Rvl = (current_block [OBJECT_48_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define ENVIRONMENT_LABEL_49_3 12
#define DEBUGGING_LABEL_49_2 11
#define OBJECT_49_1 10
#define OBJECT_49_0 9
#define EXECUTE_CACHE_49_6 7
#define FREE_REFERENCES_LABEL_49_0 6
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_49_4);
      goto starbase_device_x_right_1;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_device_x_right_4)
DEFLABEL (starbase_device_x_right_1)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_49_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 2);

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

#define LABEL_50_4 3
#define LABEL_50_5 5
#define ENVIRONMENT_LABEL_50_3 13
#define DEBUGGING_LABEL_50_2 12
#define OBJECT_50_2 11
#define OBJECT_50_1 10
#define OBJECT_50_0 9
#define EXECUTE_CACHE_50_6 7
#define FREE_REFERENCES_LABEL_50_0 6
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_50_4);
      goto set_starbase_device_x_rightB_1;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_starbase_device_x_rightB_4)
DEFLABEL (set_starbase_device_x_rightB_1)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_50_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd18.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_2]), 3);

DEFLABEL (label_6)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_5;
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  Rvl = (current_block [OBJECT_50_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define ENVIRONMENT_LABEL_51_3 12
#define DEBUGGING_LABEL_51_2 11
#define OBJECT_51_1 10
#define OBJECT_51_0 9
#define EXECUTE_CACHE_51_6 7
#define FREE_REFERENCES_LABEL_51_0 6
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_51_4);
      goto starbase_device_y_top_1;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_device_y_top_4)
DEFLABEL (starbase_device_y_top_1)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_51_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

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

#define LABEL_52_4 3
#define LABEL_52_5 5
#define ENVIRONMENT_LABEL_52_3 13
#define DEBUGGING_LABEL_52_2 12
#define OBJECT_52_2 11
#define OBJECT_52_1 10
#define OBJECT_52_0 9
#define EXECUTE_CACHE_52_6 7
#define FREE_REFERENCES_LABEL_52_0 6
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_52_4);
      goto set_starbase_device_y_topB_1;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_starbase_device_y_topB_4)
DEFLABEL (set_starbase_device_y_topB_1)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_52_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_52_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd18.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_2]), 3);

DEFLABEL (label_6)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_5;
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [6]) = (Wrd9.Obj);
  Rvl = (current_block [OBJECT_52_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define ENVIRONMENT_LABEL_53_3 12
#define DEBUGGING_LABEL_53_2 11
#define OBJECT_53_1 10
#define OBJECT_53_0 9
#define EXECUTE_CACHE_53_6 7
#define FREE_REFERENCES_LABEL_53_0 6
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_53_4);
      goto starbase_device_text_height_1;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_device_text_height_4)
DEFLABEL (starbase_device_text_height_1)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_53_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_53_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

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

#define LABEL_54_4 3
#define LABEL_54_5 5
#define ENVIRONMENT_LABEL_54_3 13
#define DEBUGGING_LABEL_54_2 12
#define OBJECT_54_2 11
#define OBJECT_54_1 10
#define OBJECT_54_0 9
#define EXECUTE_CACHE_54_6 7
#define FREE_REFERENCES_LABEL_54_0 6
#define NUMBER_OF_LINKER_SECTIONS_54_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_54_4);
      goto set_starbase_device_text_heightB_1;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_starbase_device_text_heightB_4)
DEFLABEL (set_starbase_device_text_heightB_1)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_54_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_54_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd18.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_2]), 3);

DEFLABEL (label_6)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_5;
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [7]) = (Wrd9.Obj);
  Rvl = (current_block [OBJECT_54_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define ENVIRONMENT_LABEL_55_3 12
#define DEBUGGING_LABEL_55_2 11
#define OBJECT_55_1 10
#define OBJECT_55_0 9
#define EXECUTE_CACHE_55_6 7
#define FREE_REFERENCES_LABEL_55_0 6
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_55_4);
      goto starbase_device_text_aspect_1;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_device_text_aspect_4)
DEFLABEL (starbase_device_text_aspect_1)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_55_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_55_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

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

#define LABEL_56_4 3
#define LABEL_56_5 5
#define ENVIRONMENT_LABEL_56_3 13
#define DEBUGGING_LABEL_56_2 12
#define OBJECT_56_2 11
#define OBJECT_56_1 10
#define OBJECT_56_0 9
#define EXECUTE_CACHE_56_6 7
#define FREE_REFERENCES_LABEL_56_0 6
#define NUMBER_OF_LINKER_SECTIONS_56_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_56_4);
      goto set_starbase_device_text_aspectB_1;

    case 1:
      current_block = (Rpc - LABEL_56_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_starbase_device_text_aspectB_4)
DEFLABEL (set_starbase_device_text_aspectB_1)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_56_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_56_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd18.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_2]), 3);

DEFLABEL (label_6)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_5;
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [8]) = (Wrd9.Obj);
  Rvl = (current_block [OBJECT_56_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define ENVIRONMENT_LABEL_57_3 12
#define DEBUGGING_LABEL_57_2 11
#define OBJECT_57_1 10
#define OBJECT_57_0 9
#define EXECUTE_CACHE_57_6 7
#define FREE_REFERENCES_LABEL_57_0 6
#define NUMBER_OF_LINKER_SECTIONS_57_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_57_4);
      goto starbase_device_text_slant_1;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_device_text_slant_4)
DEFLABEL (starbase_device_text_slant_1)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_57_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_57_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

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

#define LABEL_58_4 3
#define LABEL_58_5 5
#define ENVIRONMENT_LABEL_58_3 13
#define DEBUGGING_LABEL_58_2 12
#define OBJECT_58_2 11
#define OBJECT_58_1 10
#define OBJECT_58_0 9
#define EXECUTE_CACHE_58_6 7
#define FREE_REFERENCES_LABEL_58_0 6
#define NUMBER_OF_LINKER_SECTIONS_58_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_58_4);
      goto set_starbase_device_text_slantB_1;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_starbase_device_text_slantB_4)
DEFLABEL (set_starbase_device_text_slantB_1)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_58_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_58_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd18.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_2]), 3);

DEFLABEL (label_6)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_5;
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [9]) = (Wrd9.Obj);
  Rvl = (current_block [OBJECT_58_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define ENVIRONMENT_LABEL_59_3 12
#define DEBUGGING_LABEL_59_2 11
#define OBJECT_59_1 10
#define OBJECT_59_0 9
#define EXECUTE_CACHE_59_6 7
#define FREE_REFERENCES_LABEL_59_0 6
#define NUMBER_OF_LINKER_SECTIONS_59_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_59_4);
      goto starbase_device_text_rotation_1;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (starbase_device_text_rotation_4)
DEFLABEL (starbase_device_text_rotation_1)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_59_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_59_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

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

#define LABEL_60_4 3
#define LABEL_60_5 5
#define ENVIRONMENT_LABEL_60_3 13
#define DEBUGGING_LABEL_60_2 12
#define OBJECT_60_2 11
#define OBJECT_60_1 10
#define OBJECT_60_0 9
#define EXECUTE_CACHE_60_6 7
#define FREE_REFERENCES_LABEL_60_0 6
#define NUMBER_OF_LINKER_SECTIONS_60_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_60_4);
      goto set_starbase_device_text_rotationB_1;

    case 1:
      current_block = (Rpc - LABEL_60_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_starbase_device_text_rotationB_4)
DEFLABEL (set_starbase_device_text_rotationB_1)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_60_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_60_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd18.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_2]), 3);

DEFLABEL (label_6)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_5;
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [10]) = (Wrd9.Obj);
  Rvl = (current_block [OBJECT_60_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define ENVIRONMENT_LABEL_61_3 9
#define DEBUGGING_LABEL_61_2 8
#define OBJECT_61_0 7
#define EXECUTE_CACHE_61_5 5
#define FREE_REFERENCES_LABEL_61_0 4
#define NUMBER_OF_LINKER_SECTIONS_61_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_61_4);
      goto operation_availableP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_availableP_3)
DEFLABEL (operation_availableP_0)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd5.Obj) = (current_block [OBJECT_61_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_5 5
#define LABEL_62_6 7
#define LABEL_62_8 9
#define LABEL_62_10 11
#define LABEL_62_12 13
#define LABEL_62_14 15
#define LABEL_62_16 17
#define ENVIRONMENT_LABEL_62_3 37
#define DEBUGGING_LABEL_62_2 36
#define OBJECT_62_4 35
#define OBJECT_62_3 34
#define OBJECT_62_2 33
#define OBJECT_62_1 32
#define OBJECT_62_0 31
#define EXECUTE_CACHE_62_17 19
#define EXECUTE_CACHE_62_15 21
#define EXECUTE_CACHE_62_13 23
#define EXECUTE_CACHE_62_11 25
#define EXECUTE_CACHE_62_9 27
#define EXECUTE_CACHE_62_7 29
#define FREE_REFERENCES_LABEL_62_0 18
#define NUMBER_OF_LINKER_SECTIONS_62_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_62_4);
      goto operation_open_9;

    case 1:
      current_block = (Rpc - LABEL_62_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_62_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_62_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_62_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_62_12);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_62_14);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_62_16);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_open_12)
DEFLABEL (operation_open_9)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_0]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_62_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_62_6);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_62_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_62_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_62_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_62_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_62_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_62_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_62_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_62_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_62_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_62_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_62_16);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define ENVIRONMENT_LABEL_63_3 11
#define DEBUGGING_LABEL_63_2 10
#define OBJECT_63_0 9
#define EXECUTE_CACHE_63_6 7
#define FREE_REFERENCES_LABEL_63_0 6
#define NUMBER_OF_LINKER_SECTIONS_63_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_63_4);
      goto operation_close_1;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_close_4)
DEFLABEL (operation_close_1)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_63_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_0]), 1);

INVOKE_INTERFACE_TARGET_1
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
starbase_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_64_4);
      goto operation_flush_1;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_flush_4)
DEFLABEL (operation_flush_1)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_64_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_5 5
#define LABEL_65_8 7
#define LABEL_65_9 9
#define LABEL_65_10 11
#define LABEL_65_11 13
#define LABEL_65_6 15
#define LABEL_65_12 17
#define TAG_65_13 7
#define ENVIRONMENT_LABEL_65_3 28
#define DEBUGGING_LABEL_65_2 27
#define OBJECT_65_5 26
#define OBJECT_65_4 25
#define OBJECT_65_3 24
#define OBJECT_65_2 23
#define OBJECT_65_1 22
#define OBJECT_65_0 21
#define EXECUTE_CACHE_65_7 19
#define FREE_REFERENCES_LABEL_65_0 18
#define NUMBER_OF_LINKER_SECTIONS_65_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd78;
  machine_word Wrd79;
  machine_word Wrd71;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd54;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd63;
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
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_65_4);
      goto operation_device_coordinate_limits_9;

    case 1:
      current_block = (Rpc - LABEL_65_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_65_8);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_65_9);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_65_10);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_65_11);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_65_6);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_65_12);
      goto lambda_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_device_coordinate_limits_16)
DEFLABEL (operation_device_coordinate_limits_9)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_65_6);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_5]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_65_5);
  (Rsp [0]) = Rvl;
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 10))
    goto label_25;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd14.Lng))))
    goto label_25;
  (Wrd8.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_24)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_23;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd30.Lng))))
    goto label_23;
  (Wrd24.Obj) = ((Wrd28.pObj) [2]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_22)
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_21;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd46.Lng))))
    goto label_21;
  (Wrd40.Obj) = ((Wrd44.pObj) [1]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_20)
  (Wrd63.Obj) = (Rsp [3]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 10))
    goto label_19;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd62.Lng))))
    goto label_19;
  (Wrd54.Obj) = ((Wrd60.pObj) [4]);

DEFLABEL (label_18)
  (Rsp [3]) = (Wrd54.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd72.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_65_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_65_12])));
  Rhp += 4;
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd72.pObj)));
  Wrd79 = Wrd72;
  ((Wrd79.pObj) [2]) = (Wrd54.Obj);
  (Wrd78.Obj) = (Rsp [2]);
  ((Wrd79.pObj) [3]) = (Wrd78.Obj);
  (Wrd76.Obj) = (Rsp [1]);
  ((Wrd79.pObj) [4]) = (Wrd76.Obj);
  (Wrd74.Obj) = (Rsp [0]);
  ((Wrd79.pObj) [5]) = (Wrd74.Obj);
  Rvl = (Wrd71.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd65.Obj) = (Rsp [3]);
  (Wrd66.Obj) = (current_block [OBJECT_65_4]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_11]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_14)
  (Wrd54.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd49.Obj) = (Rsp [2]);
  (Wrd50.Obj) = (current_block [OBJECT_65_3]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_10]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.Obj) = (current_block [OBJECT_65_2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_9]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Obj) = (current_block [OBJECT_65_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_65_12);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [4]) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [3]) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_5 5
#define LABEL_66_7 7
#define LABEL_66_9 9
#define LABEL_66_11 11
#define LABEL_66_13 13
#define TAG_66_14 5
#define ENVIRONMENT_LABEL_66_3 24
#define DEBUGGING_LABEL_66_2 23
#define EXECUTE_CACHE_66_12 15
#define EXECUTE_CACHE_66_10 17
#define EXECUTE_CACHE_66_8 19
#define EXECUTE_CACHE_66_6 21
#define FREE_REFERENCES_LABEL_66_0 14
#define NUMBER_OF_LINKER_SECTIONS_66_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd14;
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
      goto operation_coordinate_limits_6;

    case 1:
      current_block = (Rpc - LABEL_66_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_66_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_66_9);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_66_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_66_13);
      goto lambda_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_coordinate_limits_9)
DEFLABEL (operation_coordinate_limits_6)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_66_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_66_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_66_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_66_11);
  (Rsp [3]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_66_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_66_13])));
  Rhp += 4;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd15 = Wrd8;
  ((Wrd15.pObj) [2]) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd15.pObj) [4]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_66_13);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [4]) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [3]) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define LABEL_67_6 7
#define LABEL_67_8 9
#define LABEL_67_10 11
#define LABEL_67_12 13
#define ENVIRONMENT_LABEL_67_3 27
#define DEBUGGING_LABEL_67_2 26
#define OBJECT_67_0 25
#define EXECUTE_CACHE_67_14 15
#define EXECUTE_CACHE_67_13 17
#define EXECUTE_CACHE_67_11 19
#define EXECUTE_CACHE_67_9 21
#define EXECUTE_CACHE_67_7 23
#define FREE_REFERENCES_LABEL_67_0 14
#define NUMBER_OF_LINKER_SECTIONS_67_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_67_4);
      goto operation_set_coordinate_limits_5;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_67_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_67_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_67_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_67_12);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_set_coordinate_limits_8)
DEFLABEL (operation_set_coordinate_limits_5)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_67_6);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_0]), 5);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_67_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_67_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_67_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_67_12);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd5.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_14]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_5 5
#define ENVIRONMENT_LABEL_68_3 11
#define DEBUGGING_LABEL_68_2 10
#define OBJECT_68_0 9
#define EXECUTE_CACHE_68_6 7
#define FREE_REFERENCES_LABEL_68_0 6
#define NUMBER_OF_LINKER_SECTIONS_68_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_68_4);
      goto operation_reset_clip_rectangle_1;

    case 1:
      current_block = (Rpc - LABEL_68_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_reset_clip_rectangle_4)
DEFLABEL (operation_reset_clip_rectangle_1)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_68_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_5 5
#define ENVIRONMENT_LABEL_69_3 11
#define DEBUGGING_LABEL_69_2 10
#define OBJECT_69_0 9
#define EXECUTE_CACHE_69_6 7
#define FREE_REFERENCES_LABEL_69_0 6
#define NUMBER_OF_LINKER_SECTIONS_69_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_69_4);
      goto operation_set_clip_rectangle_1;

    case 1:
      current_block = (Rpc - LABEL_69_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_set_clip_rectangle_4)
DEFLABEL (operation_set_clip_rectangle_1)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_69_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_0]), 5);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_5 5
#define ENVIRONMENT_LABEL_70_3 11
#define DEBUGGING_LABEL_70_2 10
#define OBJECT_70_0 9
#define EXECUTE_CACHE_70_6 7
#define FREE_REFERENCES_LABEL_70_0 6
#define NUMBER_OF_LINKER_SECTIONS_70_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_70_4);
      goto operation_set_drawing_mode_1;

    case 1:
      current_block = (Rpc - LABEL_70_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_set_drawing_mode_4)
DEFLABEL (operation_set_drawing_mode_1)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_70_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_5 5
#define ENVIRONMENT_LABEL_71_3 11
#define DEBUGGING_LABEL_71_2 10
#define OBJECT_71_0 9
#define EXECUTE_CACHE_71_6 7
#define FREE_REFERENCES_LABEL_71_0 6
#define NUMBER_OF_LINKER_SECTIONS_71_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_71_4);
      goto operation_set_line_style_1;

    case 1:
      current_block = (Rpc - LABEL_71_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_set_line_style_4)
DEFLABEL (operation_set_line_style_1)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_71_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define LABEL_72_5 5
#define ENVIRONMENT_LABEL_72_3 11
#define DEBUGGING_LABEL_72_2 10
#define OBJECT_72_0 9
#define EXECUTE_CACHE_72_6 7
#define FREE_REFERENCES_LABEL_72_0 6
#define NUMBER_OF_LINKER_SECTIONS_72_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_72_4);
      goto operation_clear_1;

    case 1:
      current_block = (Rpc - LABEL_72_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_clear_4)
DEFLABEL (operation_clear_1)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_72_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define LABEL_73_5 5
#define ENVIRONMENT_LABEL_73_3 11
#define DEBUGGING_LABEL_73_2 10
#define OBJECT_73_0 9
#define EXECUTE_CACHE_73_6 7
#define FREE_REFERENCES_LABEL_73_0 6
#define NUMBER_OF_LINKER_SECTIONS_73_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_73_4);
      goto operation_draw_point_1;

    case 1:
      current_block = (Rpc - LABEL_73_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_draw_point_4)
DEFLABEL (operation_draw_point_1)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_73_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_0]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
starbase_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto operation_move_cursor_1;

    case 1:
      current_block = (Rpc - LABEL_74_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_move_cursor_4)
DEFLABEL (operation_move_cursor_1)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_74_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_0]), 3);

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
starbase_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto operation_drag_cursor_1;

    case 1:
      current_block = (Rpc - LABEL_75_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_drag_cursor_4)
DEFLABEL (operation_drag_cursor_1)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_75_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_0]), 3);

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
starbase_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto operation_draw_line_1;

    case 1:
      current_block = (Rpc - LABEL_76_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_draw_line_4)
DEFLABEL (operation_draw_line_1)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_76_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_0]), 5);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define LABEL_77_5 5
#define ENVIRONMENT_LABEL_77_3 11
#define DEBUGGING_LABEL_77_2 10
#define OBJECT_77_0 9
#define EXECUTE_CACHE_77_6 7
#define FREE_REFERENCES_LABEL_77_0 6
#define NUMBER_OF_LINKER_SECTIONS_77_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_77_4);
      goto operation_draw_text_1;

    case 1:
      current_block = (Rpc - LABEL_77_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_draw_text_4)
DEFLABEL (operation_draw_text_1)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_77_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_0]), 4);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define LABEL_78_5 5
#define LABEL_78_7 7
#define LABEL_78_8 9
#define ENVIRONMENT_LABEL_78_3 19
#define DEBUGGING_LABEL_78_2 18
#define OBJECT_78_0 17
#define EXECUTE_CACHE_78_10 11
#define EXECUTE_CACHE_78_9 13
#define EXECUTE_CACHE_78_6 15
#define FREE_REFERENCES_LABEL_78_0 10
#define NUMBER_OF_LINKER_SECTIONS_78_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_78_4);
      goto operation_write_image_file_3;

    case 1:
      current_block = (Rpc - LABEL_78_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_78_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_78_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_write_image_file_6)
DEFLABEL (operation_write_image_file_3)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_78_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_78_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_78_7);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_0]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define ENVIRONMENT_LABEL_79_3 8
#define DEBUGGING_LABEL_79_2 7
#define EXECUTE_CACHE_79_5 5
#define FREE_REFERENCES_LABEL_79_0 4
#define NUMBER_OF_LINKER_SECTIONS_79_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_79_4);
      goto operation_text_height_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_text_height_3)
DEFLABEL (operation_text_height_0)
  INTERRUPT_CHECK (26, LABEL_79_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define ENVIRONMENT_LABEL_80_3 8
#define DEBUGGING_LABEL_80_2 7
#define EXECUTE_CACHE_80_5 5
#define FREE_REFERENCES_LABEL_80_0 4
#define NUMBER_OF_LINKER_SECTIONS_80_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_80_4);
      goto operation_text_aspect_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_text_aspect_3)
DEFLABEL (operation_text_aspect_0)
  INTERRUPT_CHECK (26, LABEL_80_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define ENVIRONMENT_LABEL_81_3 8
#define DEBUGGING_LABEL_81_2 7
#define EXECUTE_CACHE_81_5 5
#define FREE_REFERENCES_LABEL_81_0 4
#define NUMBER_OF_LINKER_SECTIONS_81_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_81_4);
      goto operation_text_slant_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_text_slant_3)
DEFLABEL (operation_text_slant_0)
  INTERRUPT_CHECK (26, LABEL_81_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define ENVIRONMENT_LABEL_82_3 8
#define DEBUGGING_LABEL_82_2 7
#define EXECUTE_CACHE_82_5 5
#define FREE_REFERENCES_LABEL_82_0 4
#define NUMBER_OF_LINKER_SECTIONS_82_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_82_4);
      goto operation_text_rotation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_text_rotation_3)
DEFLABEL (operation_text_rotation_0)
  INTERRUPT_CHECK (26, LABEL_82_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define LABEL_83_5 5
#define LABEL_83_6 7
#define ENVIRONMENT_LABEL_83_3 15
#define DEBUGGING_LABEL_83_2 14
#define OBJECT_83_0 13
#define EXECUTE_CACHE_83_8 9
#define EXECUTE_CACHE_83_7 11
#define FREE_REFERENCES_LABEL_83_0 8
#define NUMBER_OF_LINKER_SECTIONS_83_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_83_4);
      goto operation_set_text_height_2;

    case 1:
      current_block = (Rpc - LABEL_83_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_83_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_set_text_height_5)
DEFLABEL (operation_set_text_height_2)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_83_6);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_0]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_83_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_8]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define LABEL_84_5 5
#define LABEL_84_6 7
#define ENVIRONMENT_LABEL_84_3 15
#define DEBUGGING_LABEL_84_2 14
#define OBJECT_84_0 13
#define EXECUTE_CACHE_84_8 9
#define EXECUTE_CACHE_84_7 11
#define FREE_REFERENCES_LABEL_84_0 8
#define NUMBER_OF_LINKER_SECTIONS_84_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_84_4);
      goto operation_set_text_aspect_2;

    case 1:
      current_block = (Rpc - LABEL_84_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_84_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_set_text_aspect_5)
DEFLABEL (operation_set_text_aspect_2)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_84_6);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_0]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_84_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_8]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define LABEL_85_5 5
#define LABEL_85_6 7
#define ENVIRONMENT_LABEL_85_3 15
#define DEBUGGING_LABEL_85_2 14
#define OBJECT_85_0 13
#define EXECUTE_CACHE_85_8 9
#define EXECUTE_CACHE_85_7 11
#define FREE_REFERENCES_LABEL_85_0 8
#define NUMBER_OF_LINKER_SECTIONS_85_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_85_4);
      goto operation_set_text_slant_2;

    case 1:
      current_block = (Rpc - LABEL_85_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_85_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_set_text_slant_5)
DEFLABEL (operation_set_text_slant_2)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_85_6);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_0]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_85_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_8]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define LABEL_86_5 5
#define LABEL_86_6 7
#define ENVIRONMENT_LABEL_86_3 15
#define DEBUGGING_LABEL_86_2 14
#define OBJECT_86_0 13
#define EXECUTE_CACHE_86_8 9
#define EXECUTE_CACHE_86_7 11
#define FREE_REFERENCES_LABEL_86_0 8
#define NUMBER_OF_LINKER_SECTIONS_86_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_86_4);
      goto operation_set_text_rotation_2;

    case 1:
      current_block = (Rpc - LABEL_86_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_86_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_set_text_rotation_5)
DEFLABEL (operation_set_text_rotation_2)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_86_6);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_0]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_86_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_8]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define LABEL_87_5 5
#define ENVIRONMENT_LABEL_87_3 11
#define DEBUGGING_LABEL_87_2 10
#define OBJECT_87_0 9
#define EXECUTE_CACHE_87_6 7
#define FREE_REFERENCES_LABEL_87_0 6
#define NUMBER_OF_LINKER_SECTIONS_87_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_87_4);
      goto operation_color_map_size_1;

    case 1:
      current_block = (Rpc - LABEL_87_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_color_map_size_4)
DEFLABEL (operation_color_map_size_1)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_87_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define LABEL_88_5 5
#define ENVIRONMENT_LABEL_88_3 11
#define DEBUGGING_LABEL_88_2 10
#define OBJECT_88_0 9
#define EXECUTE_CACHE_88_6 7
#define FREE_REFERENCES_LABEL_88_0 6
#define NUMBER_OF_LINKER_SECTIONS_88_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_88_4);
      goto operation_define_color_1;

    case 1:
      current_block = (Rpc - LABEL_88_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_define_color_4)
DEFLABEL (operation_define_color_1)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_88_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_0]), 5);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define LABEL_89_5 5
#define ENVIRONMENT_LABEL_89_3 11
#define DEBUGGING_LABEL_89_2 10
#define OBJECT_89_0 9
#define EXECUTE_CACHE_89_6 7
#define FREE_REFERENCES_LABEL_89_0 6
#define NUMBER_OF_LINKER_SECTIONS_89_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
starbase_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_89_4);
      goto operation_set_line_color_1;

    case 1:
      current_block = (Rpc - LABEL_89_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_set_line_color_4)
DEFLABEL (operation_set_line_color_1)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_89_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_6 7
#define LABEL_7 9
#define LABEL_8 11
#define LABEL_9 13
#define LABEL_10 15
#define LABEL_11 17
#define LABEL_12 19
#define LABEL_13 21
#define LABEL_14 23
#define LABEL_15 25
#define LABEL_16 27
#define LABEL_17 29
#define LABEL_18 31
#define LABEL_19 33
#define LABEL_20 35
#define LABEL_21 37
#define LABEL_22 39
#define LABEL_23 41
#define LABEL_24 43
#define LABEL_25 45
#define LABEL_26 47
#define LABEL_27 49
#define LABEL_28 51
#define LABEL_29 53
#define LABEL_34 55
#define LABEL_30 57
#define LABEL_32 59
#define LABEL_33 61
#define LABEL_36 63
#define LABEL_37 65
#define TAG_38 31
#define LABEL_39 67
#define LABEL_40 69
#define LABEL_41 71
#define LABEL_42 73
#define LABEL_43 75
#define LABEL_44 77
#define LABEL_45 79
#define LABEL_46 81
#define LABEL_47 83
#define LABEL_48 85
#define LABEL_49 87
#define LABEL_50 89
#define LABEL_51 91
#define LABEL_52 93
#define LABEL_53 95
#define LABEL_54 97
#define LABEL_57 99
#define LABEL_55 101
#define LABEL_56 103
#define LABEL_58 105
#define LABEL_59 107
#define LABEL_60 109
#define LABEL_61 111
#define LABEL_62 113
#define LABEL_64 115
#define LABEL_65 117
#define LABEL_66 119
#define LABEL_67 121
#define LABEL_68 123
#define LABEL_69 125
#define LABEL_70 127
#define LABEL_71 129
#define LABEL_72 131
#define LABEL_73 133
#define LABEL_74 135
#define LABEL_75 137
#define LABEL_76 139
#define LABEL_77 141
#define LABEL_78 143
#define LABEL_79 145
#define LABEL_80 147
#define LABEL_81 149
#define LABEL_82 151
#define LABEL_83 153
#define LABEL_84 155
#define LABEL_85 157
#define LABEL_86 159
#define LABEL_87 161
#define LABEL_88 163
#define LABEL_89 165
#define LABEL_90 167
#define LABEL_91 169
#define LABEL_92 171
#define LABEL_93 173
#define LABEL_94 175
#define LABEL_95 177
#define LABEL_96 179
#define LABEL_97 181
#define LABEL_98 183
#define LABEL_99 185
#define LABEL_100 187
#define LABEL_101 189
#define LABEL_102 191
#define LABEL_103 193
#define LABEL_104 195
#define LABEL_105 197
#define LABEL_106 199
#define LABEL_107 201
#define LABEL_108 203
#define LABEL_109 205
#define LABEL_110 207
#define ENVIRONMENT_LABEL_3 409
#define DEBUGGING_LABEL_2 408
#define PURIFICATION_ROOT 407
#define OBJECT_189 406
#define OBJECT_188 405
#define OBJECT_187 404
#define OBJECT_186 403
#define OBJECT_185 402
#define OBJECT_184 401
#define OBJECT_183 400
#define OBJECT_182 399
#define OBJECT_181 398
#define OBJECT_180 397
#define OBJECT_179 396
#define OBJECT_178 395
#define OBJECT_177 394
#define OBJECT_176 393
#define OBJECT_175 392
#define OBJECT_174 391
#define OBJECT_173 390
#define OBJECT_172 389
#define OBJECT_171 388
#define OBJECT_170 387
#define OBJECT_169 386
#define OBJECT_168 385
#define OBJECT_167 384
#define OBJECT_166 383
#define OBJECT_165 382
#define OBJECT_164 381
#define OBJECT_163 380
#define OBJECT_162 379
#define OBJECT_161 378
#define OBJECT_160 377
#define OBJECT_159 376
#define OBJECT_158 375
#define OBJECT_157 374
#define OBJECT_156 373
#define OBJECT_155 372
#define OBJECT_154 371
#define OBJECT_153 370
#define OBJECT_152 369
#define OBJECT_151 368
#define OBJECT_150 367
#define OBJECT_149 366
#define OBJECT_148 365
#define OBJECT_147 364
#define OBJECT_146 363
#define OBJECT_145 362
#define OBJECT_144 361
#define OBJECT_143 360
#define OBJECT_142 359
#define OBJECT_141 358
#define OBJECT_140 357
#define OBJECT_139 356
#define OBJECT_138 355
#define OBJECT_137 354
#define OBJECT_136 353
#define OBJECT_135 352
#define OBJECT_134 351
#define OBJECT_133 350
#define OBJECT_132 349
#define OBJECT_131 348
#define OBJECT_130 347
#define OBJECT_129 346
#define OBJECT_128 345
#define OBJECT_127 344
#define OBJECT_126 343
#define OBJECT_125 342
#define OBJECT_124 341
#define OBJECT_123 340
#define OBJECT_122 339
#define OBJECT_121 338
#define OBJECT_120 337
#define OBJECT_119 336
#define OBJECT_118 335
#define OBJECT_117 334
#define OBJECT_116 333
#define OBJECT_115 332
#define OBJECT_114 331
#define OBJECT_113 330
#define OBJECT_112 329
#define OBJECT_111 328
#define OBJECT_110 327
#define OBJECT_109 326
#define OBJECT_108 325
#define OBJECT_107 324
#define OBJECT_106 323
#define OBJECT_105 322
#define OBJECT_104 321
#define OBJECT_103 320
#define OBJECT_102 319
#define OBJECT_101 318
#define OBJECT_100 317
#define OBJECT_99 316
#define OBJECT_98 315
#define OBJECT_97 314
#define OBJECT_96 313
#define OBJECT_95 312
#define OBJECT_94 311
#define OBJECT_93 310
#define OBJECT_92 309
#define OBJECT_91 308
#define OBJECT_90 307
#define OBJECT_89 306
#define OBJECT_88 305
#define OBJECT_87 304
#define OBJECT_86 303
#define OBJECT_85 302
#define OBJECT_84 301
#define OBJECT_83 300
#define OBJECT_82 299
#define OBJECT_81 298
#define OBJECT_80 297
#define OBJECT_79 296
#define OBJECT_78 295
#define OBJECT_77 294
#define OBJECT_76 293
#define OBJECT_75 292
#define OBJECT_74 291
#define OBJECT_73 290
#define OBJECT_72 289
#define OBJECT_71 288
#define OBJECT_70 287
#define OBJECT_69 286
#define OBJECT_68 285
#define OBJECT_67 284
#define OBJECT_66 283
#define OBJECT_65 282
#define OBJECT_64 281
#define OBJECT_63 280
#define OBJECT_62 279
#define OBJECT_61 278
#define OBJECT_60 277
#define OBJECT_59 276
#define OBJECT_58 275
#define OBJECT_57 274
#define OBJECT_56 273
#define OBJECT_55 272
#define OBJECT_54 271
#define OBJECT_53 270
#define OBJECT_52 269
#define OBJECT_51 268
#define OBJECT_50 267
#define OBJECT_49 266
#define OBJECT_48 265
#define OBJECT_47 264
#define OBJECT_46 263
#define OBJECT_45 262
#define OBJECT_44 261
#define OBJECT_43 260
#define OBJECT_42 259
#define OBJECT_41 258
#define OBJECT_40 257
#define OBJECT_39 256
#define OBJECT_38 255
#define OBJECT_37 254
#define OBJECT_36 253
#define OBJECT_35 252
#define OBJECT_34 251
#define OBJECT_33 250
#define OBJECT_32 249
#define OBJECT_31 248
#define OBJECT_30 247
#define OBJECT_29 246
#define OBJECT_28 245
#define OBJECT_27 244
#define OBJECT_26 243
#define OBJECT_25 242
#define OBJECT_24 241
#define OBJECT_23 240
#define OBJECT_22 239
#define OBJECT_21 238
#define OBJECT_20 237
#define OBJECT_19 236
#define OBJECT_18 235
#define OBJECT_17 234
#define OBJECT_16 233
#define OBJECT_15 232
#define OBJECT_14 231
#define OBJECT_13 230
#define OBJECT_12 229
#define OBJECT_11 228
#define OBJECT_10 227
#define OBJECT_9 226
#define OBJECT_8 225
#define OBJECT_7 224
#define OBJECT_6 223
#define OBJECT_5 222
#define OBJECT_4 221
#define OBJECT_3 220
#define OBJECT_2 219
#define OBJECT_1 218
#define OBJECT_0 217
#define FREE_REFERENCE_0 209
#define GLOBAL_EXECUTE_CACHE_63 211
#define GLOBAL_EXECUTE_CACHE_35 213
#define GLOBAL_EXECUTE_CACHE_31 215
#define FREE_REFERENCES_LABEL_0 208
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
starbase_so_5fccc82130a13d5f (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd39;
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
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_9);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_10);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_11);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_12);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_13);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_14);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_15);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_16);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_17);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_18);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_19);
      goto continuation_15;

    case 16:
      current_block = (Rpc - LABEL_20);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_21);
      goto continuation_17;

    case 18:
      current_block = (Rpc - LABEL_22);
      goto continuation_18;

    case 19:
      current_block = (Rpc - LABEL_23);
      goto continuation_19;

    case 20:
      current_block = (Rpc - LABEL_24);
      goto continuation_20;

    case 21:
      current_block = (Rpc - LABEL_25);
      goto continuation_21;

    case 22:
      current_block = (Rpc - LABEL_26);
      goto continuation_22;

    case 23:
      current_block = (Rpc - LABEL_27);
      goto continuation_23;

    case 24:
      current_block = (Rpc - LABEL_28);
      goto continuation_24;

    case 25:
      current_block = (Rpc - LABEL_29);
      goto continuation_35;

    case 26:
      current_block = (Rpc - LABEL_34);
      goto label_112;

    case 27:
      current_block = (Rpc - LABEL_30);
      goto continuation_34;

    case 28:
      current_block = (Rpc - LABEL_32);
      goto continuation_40;

    case 29:
      current_block = (Rpc - LABEL_33);
      goto continuation_36;

    case 30:
      current_block = (Rpc - LABEL_36);
      goto continuation_41;

    case 31:
      current_block = (Rpc - LABEL_37);
      goto make_starbase_descriptor_115;

    case 32:
      current_block = (Rpc - LABEL_39);
      goto continuation_42;

    case 33:
      current_block = (Rpc - LABEL_40);
      goto continuation_43;

    case 34:
      current_block = (Rpc - LABEL_41);
      goto continuation_44;

    case 35:
      current_block = (Rpc - LABEL_42);
      goto continuation_45;

    case 36:
      current_block = (Rpc - LABEL_43);
      goto continuation_46;

    case 37:
      current_block = (Rpc - LABEL_44);
      goto continuation_47;

    case 38:
      current_block = (Rpc - LABEL_45);
      goto continuation_48;

    case 39:
      current_block = (Rpc - LABEL_46);
      goto continuation_49;

    case 40:
      current_block = (Rpc - LABEL_47);
      goto continuation_50;

    case 41:
      current_block = (Rpc - LABEL_48);
      goto continuation_51;

    case 42:
      current_block = (Rpc - LABEL_49);
      goto continuation_52;

    case 43:
      current_block = (Rpc - LABEL_50);
      goto continuation_53;

    case 44:
      current_block = (Rpc - LABEL_51);
      goto continuation_54;

    case 45:
      current_block = (Rpc - LABEL_52);
      goto continuation_55;

    case 46:
      current_block = (Rpc - LABEL_53);
      goto continuation_56;

    case 47:
      current_block = (Rpc - LABEL_54);
      goto continuation_57;

    case 48:
      current_block = (Rpc - LABEL_57);
      goto label_113;

    case 49:
      current_block = (Rpc - LABEL_55);
      goto continuation_59;

    case 50:
      current_block = (Rpc - LABEL_56);
      goto continuation_58;

    case 51:
      current_block = (Rpc - LABEL_58);
      goto continuation_60;

    case 52:
      current_block = (Rpc - LABEL_59);
      goto continuation_61;

    case 53:
      current_block = (Rpc - LABEL_60);
      goto continuation_65;

    case 54:
      current_block = (Rpc - LABEL_61);
      goto continuation_64;

    case 55:
      current_block = (Rpc - LABEL_62);
      goto continuation_62;

    case 56:
      current_block = (Rpc - LABEL_64);
      goto continuation_66;

    case 57:
      current_block = (Rpc - LABEL_65);
      goto continuation_67;

    case 58:
      current_block = (Rpc - LABEL_66);
      goto continuation_68;

    case 59:
      current_block = (Rpc - LABEL_67);
      goto continuation_69;

    case 60:
      current_block = (Rpc - LABEL_68);
      goto continuation_70;

    case 61:
      current_block = (Rpc - LABEL_69);
      goto continuation_71;

    case 62:
      current_block = (Rpc - LABEL_70);
      goto continuation_72;

    case 63:
      current_block = (Rpc - LABEL_71);
      goto continuation_73;

    case 64:
      current_block = (Rpc - LABEL_72);
      goto continuation_74;

    case 65:
      current_block = (Rpc - LABEL_73);
      goto continuation_75;

    case 66:
      current_block = (Rpc - LABEL_74);
      goto continuation_76;

    case 67:
      current_block = (Rpc - LABEL_75);
      goto continuation_77;

    case 68:
      current_block = (Rpc - LABEL_76);
      goto continuation_78;

    case 69:
      current_block = (Rpc - LABEL_77);
      goto continuation_79;

    case 70:
      current_block = (Rpc - LABEL_78);
      goto continuation_80;

    case 71:
      current_block = (Rpc - LABEL_79);
      goto continuation_81;

    case 72:
      current_block = (Rpc - LABEL_80);
      goto continuation_82;

    case 73:
      current_block = (Rpc - LABEL_81);
      goto continuation_83;

    case 74:
      current_block = (Rpc - LABEL_82);
      goto continuation_84;

    case 75:
      current_block = (Rpc - LABEL_83);
      goto continuation_85;

    case 76:
      current_block = (Rpc - LABEL_84);
      goto continuation_86;

    case 77:
      current_block = (Rpc - LABEL_85);
      goto continuation_87;

    case 78:
      current_block = (Rpc - LABEL_86);
      goto continuation_88;

    case 79:
      current_block = (Rpc - LABEL_87);
      goto continuation_89;

    case 80:
      current_block = (Rpc - LABEL_88);
      goto continuation_90;

    case 81:
      current_block = (Rpc - LABEL_89);
      goto continuation_91;

    case 82:
      current_block = (Rpc - LABEL_90);
      goto continuation_92;

    case 83:
      current_block = (Rpc - LABEL_91);
      goto continuation_93;

    case 84:
      current_block = (Rpc - LABEL_92);
      goto continuation_94;

    case 85:
      current_block = (Rpc - LABEL_93);
      goto continuation_95;

    case 86:
      current_block = (Rpc - LABEL_94);
      goto continuation_96;

    case 87:
      current_block = (Rpc - LABEL_95);
      goto continuation_97;

    case 88:
      current_block = (Rpc - LABEL_96);
      goto continuation_98;

    case 89:
      current_block = (Rpc - LABEL_97);
      goto continuation_99;

    case 90:
      current_block = (Rpc - LABEL_98);
      goto continuation_100;

    case 91:
      current_block = (Rpc - LABEL_99);
      goto continuation_101;

    case 92:
      current_block = (Rpc - LABEL_100);
      goto continuation_102;

    case 93:
      current_block = (Rpc - LABEL_101);
      goto continuation_103;

    case 94:
      current_block = (Rpc - LABEL_102);
      goto continuation_104;

    case 95:
      current_block = (Rpc - LABEL_103);
      goto continuation_105;

    case 96:
      current_block = (Rpc - LABEL_104);
      goto continuation_106;

    case 97:
      current_block = (Rpc - LABEL_105);
      goto continuation_107;

    case 98:
      current_block = (Rpc - LABEL_106);
      goto continuation_108;

    case 99:
      current_block = (Rpc - LABEL_107);
      goto continuation_109;

    case 100:
      current_block = (Rpc - LABEL_108);
      goto label_117;

    case 101:
      current_block = (Rpc - LABEL_109);
      goto label_118;

    case 102:
      current_block = (Rpc - LABEL_110);
      goto expression_111;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_111)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_109])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_118)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_117)
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
	3,
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
    if (counter > 89)
      goto label_116;
    blocks = (current_block [OBJECT_189]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_108])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_116)
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
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_50]);
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
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_31]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_30);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_122;
  Wrd11 = Wrd15;

DEFLABEL (label_121)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_35]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_33);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_83]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_120;
  Wrd11 = Wrd15;

DEFLABEL (label_119)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_35]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_56);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_92]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_93]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_94]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_63]));

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_62);
  (Wrd9.Obj) = (current_block [OBJECT_98]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_99]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100]), 2);

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_61);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_95]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_96]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_101]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_102]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_103]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_66);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_105]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_106]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_107]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_108]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_110]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_111]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_112]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_113]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_114]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_71);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_115]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_116]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_72);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_117]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_118]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_73);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_119]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_120]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_74);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_121]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_122]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_75);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_123]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_124]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_76);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_125]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_126]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_77);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_127]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_128]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_78);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_129]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_130]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_79);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_131]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_132]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_80);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_133]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_134]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_81);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_135]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_136]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_82);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_137]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_138]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_83);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_139]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_140]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_84);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_141]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_142]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_85);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_143]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_144]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_86);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_145]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_146]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_87);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_147]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_148]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_88);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_149]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_150]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_89);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_151]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_152]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_90);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_153]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_154]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_93)
  INTERRUPT_CHECK (27, LABEL_91);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_155]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_156]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_92);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_157]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_158]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_93);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_159]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_160]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_94);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_161]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_162]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_95);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_163]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_164]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_96);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_165]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_166]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_97);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_167]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_168]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_98);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_169]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_170]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_99);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_171]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_172]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_100);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_173]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_174]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_103)
  INTERRUPT_CHECK (27, LABEL_101);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_175]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_176]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_102);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_177]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_178]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_103);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_179]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_180]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_106)
  INTERRUPT_CHECK (27, LABEL_104);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_181]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_182]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_107)
  INTERRUPT_CHECK (27, LABEL_105);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_183]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_184]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_108)
  INTERRUPT_CHECK (27, LABEL_106);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_185]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_186]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_109)
  INTERRUPT_CHECK (27, LABEL_107);
  (Wrd5.Obj) = (current_block [OBJECT_187]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_188]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (label_120)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57])), (Wrd12.pObj));

DEFLABEL (label_113)
  (Wrd11.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34])), (Wrd12.pObj));

DEFLABEL (label_112)
  (Wrd11.Obj) = Rvl;
  goto label_121;

DEFLABEL (make_starbase_descriptor_115)
  CLOSURE_HEADER (LABEL_37);

DEFLABEL (make_starbase_descriptor_38)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (MAKE_OBJECT (0, 10));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (Wrd22.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd7.pObj) = (& (Rhp [-11]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_starbase_so_5fccc82130a13d5f [89] =
  {
    { "starbase_so_code_1", 1, starbase_so_code_1 },
    { "starbase_so_code_2", 1, starbase_so_code_2 },
    { "starbase_so_code_3", 1, starbase_so_code_3 },
    { "starbase_so_code_4", 1, starbase_so_code_4 },
    { "starbase_so_code_5", 1, starbase_so_code_5 },
    { "starbase_so_code_6", 1, starbase_so_code_6 },
    { "starbase_so_code_7", 1, starbase_so_code_7 },
    { "starbase_so_code_8", 1, starbase_so_code_8 },
    { "starbase_so_code_9", 1, starbase_so_code_9 },
    { "starbase_so_code_10", 1, starbase_so_code_10 },
    { "starbase_so_code_11", 1, starbase_so_code_11 },
    { "starbase_so_code_12", 1, starbase_so_code_12 },
    { "starbase_so_code_13", 1, starbase_so_code_13 },
    { "starbase_so_code_14", 1, starbase_so_code_14 },
    { "starbase_so_code_15", 1, starbase_so_code_15 },
    { "starbase_so_code_16", 1, starbase_so_code_16 },
    { "starbase_so_code_17", 1, starbase_so_code_17 },
    { "starbase_so_code_18", 1, starbase_so_code_18 },
    { "starbase_so_code_19", 1, starbase_so_code_19 },
    { "starbase_so_code_20", 1, starbase_so_code_20 },
    { "starbase_so_code_21", 1, starbase_so_code_21 },
    { "starbase_so_code_22", 1, starbase_so_code_22 },
    { "starbase_so_code_23", 1, starbase_so_code_23 },
    { "starbase_so_code_24", 32, starbase_so_code_24 },
    { "starbase_so_code_25", 1, starbase_so_code_25 },
    { "starbase_so_code_26", 1, starbase_so_code_26 },
    { "starbase_so_code_27", 1, starbase_so_code_27 },
    { "starbase_so_code_28", 1, starbase_so_code_28 },
    { "starbase_so_code_29", 1, starbase_so_code_29 },
    { "starbase_so_code_30", 1, starbase_so_code_30 },
    { "starbase_so_code_31", 1, starbase_so_code_31 },
    { "starbase_so_code_32", 1, starbase_so_code_32 },
    { "starbase_so_code_33", 1, starbase_so_code_33 },
    { "starbase_so_code_34", 1, starbase_so_code_34 },
    { "starbase_so_code_35", 1, starbase_so_code_35 },
    { "starbase_so_code_36", 1, starbase_so_code_36 },
    { "starbase_so_code_37", 1, starbase_so_code_37 },
    { "starbase_so_code_38", 1, starbase_so_code_38 },
    { "starbase_so_code_39", 1, starbase_so_code_39 },
    { "starbase_so_code_40", 1, starbase_so_code_40 },
    { "starbase_so_code_41", 1, starbase_so_code_41 },
    { "starbase_so_code_42", 4, starbase_so_code_42 },
    { "starbase_so_code_43", 2, starbase_so_code_43 },
    { "starbase_so_code_44", 9, starbase_so_code_44 },
    { "starbase_so_code_45", 2, starbase_so_code_45 },
    { "starbase_so_code_46", 2, starbase_so_code_46 },
    { "starbase_so_code_47", 2, starbase_so_code_47 },
    { "starbase_so_code_48", 2, starbase_so_code_48 },
    { "starbase_so_code_49", 2, starbase_so_code_49 },
    { "starbase_so_code_50", 2, starbase_so_code_50 },
    { "starbase_so_code_51", 2, starbase_so_code_51 },
    { "starbase_so_code_52", 2, starbase_so_code_52 },
    { "starbase_so_code_53", 2, starbase_so_code_53 },
    { "starbase_so_code_54", 2, starbase_so_code_54 },
    { "starbase_so_code_55", 2, starbase_so_code_55 },
    { "starbase_so_code_56", 2, starbase_so_code_56 },
    { "starbase_so_code_57", 2, starbase_so_code_57 },
    { "starbase_so_code_58", 2, starbase_so_code_58 },
    { "starbase_so_code_59", 2, starbase_so_code_59 },
    { "starbase_so_code_60", 2, starbase_so_code_60 },
    { "starbase_so_code_61", 1, starbase_so_code_61 },
    { "starbase_so_code_62", 8, starbase_so_code_62 },
    { "starbase_so_code_63", 2, starbase_so_code_63 },
    { "starbase_so_code_64", 2, starbase_so_code_64 },
    { "starbase_so_code_65", 8, starbase_so_code_65 },
    { "starbase_so_code_66", 6, starbase_so_code_66 },
    { "starbase_so_code_67", 6, starbase_so_code_67 },
    { "starbase_so_code_68", 2, starbase_so_code_68 },
    { "starbase_so_code_69", 2, starbase_so_code_69 },
    { "starbase_so_code_70", 2, starbase_so_code_70 },
    { "starbase_so_code_71", 2, starbase_so_code_71 },
    { "starbase_so_code_72", 2, starbase_so_code_72 },
    { "starbase_so_code_73", 2, starbase_so_code_73 },
    { "starbase_so_code_74", 2, starbase_so_code_74 },
    { "starbase_so_code_75", 2, starbase_so_code_75 },
    { "starbase_so_code_76", 2, starbase_so_code_76 },
    { "starbase_so_code_77", 2, starbase_so_code_77 },
    { "starbase_so_code_78", 4, starbase_so_code_78 },
    { "starbase_so_code_79", 1, starbase_so_code_79 },
    { "starbase_so_code_80", 1, starbase_so_code_80 },
    { "starbase_so_code_81", 1, starbase_so_code_81 },
    { "starbase_so_code_82", 1, starbase_so_code_82 },
    { "starbase_so_code_83", 3, starbase_so_code_83 },
    { "starbase_so_code_84", 3, starbase_so_code_84 },
    { "starbase_so_code_85", 3, starbase_so_code_85 },
    { "starbase_so_code_86", 3, starbase_so_code_86 },
    { "starbase_so_code_87", 2, starbase_so_code_87 },
    { "starbase_so_code_88", 2, starbase_so_code_88 },
    { "starbase_so_code_89", 2, starbase_so_code_89 }
  };

int
decl_starbase_so_5fccc82130a13d5f (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_starbase_so_5fccc82130a13d5f);
  return (0);
}

DECLARE_COMPILED_CODE ("starbase.so", 103, decl_starbase_so_5fccc82130a13d5f, starbase_so_5fccc82130a13d5f)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_starbase_so_data_5fccc82130a13d5f [8859] =
  "\x9a\x03\x90\x01\xc2\x10\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\xb9"
  "\x22\x29\x21\x9d\x2b\xba\x1d\xb0\x82\x88\xc1\xbb\x22\x29\x21\x9d"
  "\x2b\xbc\x1d\xb0\x83\x88\xc1\xbd\x22\x29\x21\x9d\x2b\xbe\x1d\xb0"
  "\x84\x88\xc1\xbf\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x85\x88\xc3\x1c"
  "\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x86\x88\xc3\x1c\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x02\x88\xc5\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\xc3\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c"
  "\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\xc5\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c"
  "\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc5\x1c\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x02\x88\xc4\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\xc2\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c"
  "\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\xc1\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc5\x1c"
  "\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x0d\x08\x0d\x1c\x25\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2"
  "\x1c\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x86\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x1d\x82"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x83\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x84\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1d\x85\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1d\x86\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d"
  "\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\x1b\x80\xc1\x0e\x1c\x24\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d"
  "\x0d\x0d\x0d\x1c\x0d\x1b\x1b\x08\x89\x08\x0d\x0d\x0d\xc1\xc1\x28"
  "\x0d\x1c\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x82\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1d\x82\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x83\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1d\x83\x28\x1b\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x84\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x85\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x85\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x86\x28"
  "\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d"
  "\x86\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x02\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1d\x02\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x02\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1d\x02\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x28\x1b\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x28\x0d\x23\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x09\x87\x81\xb1\x28\x0d\xb9\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb3\x28\x0d\xbb\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb5\x28\xb3\x23\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d"
  "\xb0\x02\x88\x1b\x83\x80\x81\xc2\x82\x28\xb3\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x28\xb3\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\xb3\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\xb3\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\xb3\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\xb3\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb7\x28\xb3\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\xbf\x1d\xb0\x02\x88\x1b\x28\xb3\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\xb3\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\xb3\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\xb3\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\xb3\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\xb3\x28\x0d\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c"
  "\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\xb3\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28"
  "\xb3\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x28\xb3\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\xb3\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\xb3"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\xb3"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\xb3"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\xb8\x88\xb0\x1b\x2a\x1b"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\xb7\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\xb5\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\xc2\x02\x02\x0d\x1b\x1b\x2a\x1b\x2a\xb3\x1b\x2a\x1b\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\xb1\x0d\x1b\x2a\x0d\x1c\x0c\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x1b"
  "\x1b\x08\x14\x08\x1b\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x0d\xb6\x2a\x0d\xb4\x2a\xc3\x0d\xb2\x2a\x28\x0d"
  "\x28\x0d\x28\x0d\x26\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22"
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
  "\x29\x22\x29\x22\x29\x21\x17\x02\x57\x2f\x55\x73\x65\x72\x73\x2f"
  "\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d"
  "\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63"
  "\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65"
  "\x2f\x2e\x2f\x73\x74\x61\x72\x62\x61\x73\x65\x2e\x69\x6e\x66\x15"
  "\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72"
  "\x6f\x6f\x74\x5d\x02\x15\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x6f"
  "\x70\x65\x6e\x2d\x64\x65\x76\x69\x63\x65\x68\x04\x84\x06\x03\x02"
  "\x16\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x63\x6c\x6f\x73\x65\x2d"
  "\x64\x65\x76\x69\x63\x65\x69\x04\x83\x04\x03\x02\x0f\x73\x74\x61"
  "\x72\x62\x61\x73\x65\x2d\x66\x6c\x75\x73\x68\x6a\x04\x83\x04\x03"
  "\x02\x0f\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x63\x6c\x65\x61\x72"
  "\x6b\x04\x83\x04\x03\x09\x02\x15\x73\x74\x61\x72\x62\x61\x73\x65"
  "\x2d\x6d\x6f\x76\x65\x2d\x63\x75\x72\x73\x6f\x72\x0a\x6c\x04\x85"
  "\x08\x03\x0b\x02\x15\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x64\x72"
  "\x61\x67\x2d\x63\x75\x72\x73\x6f\x72\x0c\x6d\x04\x85\x08\x03\x0d"
  "\x02\x08\x13\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x64\x72\x61\x77"
  "\x2d\x6c\x69\x6e\x65\x0e\x6e\x04\x87\x0c\x03\x0f\x02\x09\x14\x73"
  "\x74\x61\x72\x62\x61\x73\x65\x2d\x64\x72\x61\x77\x2d\x70\x6f\x69"
  "\x6e\x74\x10\x6f\x04\x85\x08\x03\x11\x02\x0a\x18\x73\x74\x61\x72"
  "\x62\x61\x73\x65\x2d\x73\x65\x74\x2d\x6c\x69\x6e\x65\x2d\x73\x74"
  "\x79\x6c\x65\x12\x70\x04\x84\x06\x03\x13\x02\x0b\x1a\x73\x74\x61"
  "\x72\x62\x61\x73\x65\x2d\x73\x65\x74\x2d\x64\x72\x61\x77\x69\x6e"
  "\x67\x2d\x6d\x6f\x64\x65\x14\x71\x04\x84\x06\x03\x15\x02\x0c\x1c"
  "\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x64\x65\x76\x69\x63\x65\x2d"
  "\x63\x6f\x6f\x72\x64\x69\x6e\x61\x74\x65\x73\x16\x72\x04\x83\x04"
  "\x03\x17\x02\x0d\x18\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x73\x65"
  "\x74\x2d\x76\x64\x63\x2d\x65\x78\x74\x65\x6e\x74\x18\x73\x04\x87"
  "\x0c\x03\x19\x02\x0e\x1e\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x72"
  "\x65\x73\x65\x74\x2d\x63\x6c\x69\x70\x2d\x72\x65\x63\x74\x61\x6e"
  "\x67\x6c\x65\x1a\x74\x04\x83\x04\x03\x1b\x02\x0f\x1c\x73\x74\x61"
  "\x72\x62\x61\x73\x65\x2d\x73\x65\x74\x2d\x63\x6c\x69\x70\x2d\x72"
  "\x65\x63\x74\x61\x6e\x67\x6c\x65\x1c\x75\x04\x87\x0c\x03\x1d\x02"
  "\x10\x13\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x64\x72\x61\x77\x2d"
  "\x74\x65\x78\x74\x1e\x76\x04\x86\x0a\x03\x1f\x02\x11\x19\x73\x74"
  "\x61\x72\x62\x61\x73\x65\x2d\x73\x65\x74\x2d\x74\x65\x78\x74\x2d"
  "\x68\x65\x69\x67\x68\x74\x20\x77\x04\x84\x06\x03\x21\x02\x12\x19"
  "\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x73\x65\x74\x2d\x74\x65\x78"
  "\x74\x2d\x61\x73\x70\x65\x63\x74\x22\x78\x04\x84\x06\x03\x23\x02"
  "\x13\x18\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x73\x65\x74\x2d\x74"
  "\x65\x78\x74\x2d\x73\x6c\x61\x6e\x74\x24\x79\x04\x84\x06\x03\x25"
  "\x02\x14\x1b\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x73\x65\x74\x2d"
  "\x74\x65\x78\x74\x2d\x72\x6f\x74\x61\x74\x69\x6f\x6e\x26\x7a\x04"
  "\x84\x06\x03\x27\x02\x15\x18\x73\x74\x61\x72\x62\x61\x73\x65\x2d"
  "\x63\x6f\x6c\x6f\x72\x2d\x6d\x61\x70\x2d\x73\x69\x7a\x65\x28\x7b"
  "\x04\x83\x04\x03\x29\x02\x16\x16\x73\x74\x61\x72\x62\x61\x73\x65"
  "\x2d\x64\x65\x66\x69\x6e\x65\x2d\x63\x6f\x6c\x6f\x72\x2a\x7c\x04"
  "\x87\x0c\x03\x2b\x02\x17\x18\x73\x74\x61\x72\x62\x61\x73\x65\x2d"
  "\x73\x65\x74\x2d\x6c\x69\x6e\x65\x2d\x63\x6f\x6c\x6f\x72\x2c\x7d"
  "\x04\x84\x06\x03\x2d\x02\x18\x1a\x73\x74\x61\x72\x62\x61\x73\x65"
  "\x2d\x77\x72\x69\x74\x65\x2d\x69\x6d\x61\x67\x65\x2d\x66\x69\x6c"
  "\x65\x2e\x7e\x04\x85\x08\x03\x2f\x02\x19\x02\x09\x73\x74\x61\x72"
  "\x62\x61\x73\x65\x0b\x61\x76\x61\x69\x6c\x61\x62\x6c\x65\x3f\x06"
  "\x63\x6c\x65\x61\x72\x06\x63\x6c\x6f\x73\x65\x0f\x63\x6f\x6c\x6f"
  "\x72\x2d\x6d\x61\x70\x2d\x73\x69\x7a\x65\x12\x63\x6f\x6f\x72\x64"
  "\x69\x6e\x61\x74\x65\x2d\x6c\x69\x6d\x69\x74\x73\x0d\x64\x65\x66"
  "\x69\x6e\x65\x2d\x63\x6f\x6c\x6f\x72\x19\x64\x65\x76\x69\x63\x65"
  "\x2d\x63\x6f\x6f\x72\x64\x69\x6e\x61\x74\x65\x2d\x6c\x69\x6d\x69"
  "\x74\x73\x0c\x64\x72\x61\x67\x2d\x63\x75\x72\x73\x6f\x72\x0a\x64"
  "\x72\x61\x77\x2d\x6c\x69\x6e\x65\x0b\x64\x72\x61\x77\x2d\x70\x6f"
  "\x69\x6e\x74\x0a\x64\x72\x61\x77\x2d\x74\x65\x78\x74\x06\x66\x6c"
  "\x75\x73\x68\x0c\x6d\x6f\x76\x65\x2d\x63\x75\x72\x73\x6f\x72\x05"
  "\x6f\x70\x65\x6e\x15\x72\x65\x73\x65\x74\x2d\x63\x6c\x69\x70\x2d"
  "\x72\x65\x63\x74\x61\x6e\x67\x6c\x65\x13\x73\x65\x74\x2d\x63\x6c"
  "\x69\x70\x2d\x72\x65\x63\x74\x61\x6e\x67\x6c\x65\x16\x73\x65\x74"
  "\x2d\x63\x6f\x6f\x72\x64\x69\x6e\x61\x74\x65\x2d\x6c\x69\x6d\x69"
  "\x74\x73\x11\x73\x65\x74\x2d\x64\x72\x61\x77\x69\x6e\x67\x2d\x6d"
  "\x6f\x64\x65\x0f\x73\x65\x74\x2d\x6c\x69\x6e\x65\x2d\x63\x6f\x6c"
  "\x6f\x72\x0f\x73\x65\x74\x2d\x6c\x69\x6e\x65\x2d\x73\x74\x79\x6c"
  "\x65\x10\x73\x65\x74\x2d\x74\x65\x78\x74\x2d\x61\x73\x70\x65\x63"
  "\x74\x10\x73\x65\x74\x2d\x74\x65\x78\x74\x2d\x68\x65\x69\x67\x68"
  "\x74\x12\x73\x65\x74\x2d\x74\x65\x78\x74\x2d\x72\x6f\x74\x61\x74"
  "\x69\x6f\x6e\x0f\x73\x65\x74\x2d\x74\x65\x78\x74\x2d\x73\x6c\x61"
  "\x6e\x74\x0c\x74\x65\x78\x74\x2d\x61\x73\x70\x65\x63\x74\x30\x0c"
  "\x74\x65\x78\x74\x2d\x68\x65\x69\x67\x68\x74\x31\x0e\x74\x65\x78"
  "\x74\x2d\x72\x6f\x74\x61\x74\x69\x6f\x6e\x32\x0b\x74\x65\x78\x74"
  "\x2d\x73\x6c\x61\x6e\x74\x33\x11\x77\x72\x69\x74\x65\x2d\x69\x6d"
  "\x61\x67\x65\x2d\x66\x69\x6c\x65\x1e\x73\x74\x61\x72\x62\x61\x73"
  "\x65\x2d\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63"
  "\x65\x2d\x74\x79\x70\x65\x34\x02\x1b\x6f\x70\x65\x72\x61\x74\x69"
  "\x6f\x6e\x2f\x77\x72\x69\x74\x65\x2d\x69\x6d\x61\x67\x65\x2d\x66"
  "\x69\x6c\x65\x35\x15\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x74"
  "\x65\x78\x74\x2d\x73\x6c\x61\x6e\x74\x36\x18\x6f\x70\x65\x72\x61"
  "\x74\x69\x6f\x6e\x2f\x74\x65\x78\x74\x2d\x72\x6f\x74\x61\x74\x69"
  "\x6f\x6e\x37\x16\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x74\x65"
  "\x78\x74\x2d\x68\x65\x69\x67\x68\x74\x38\x16\x6f\x70\x65\x72\x61"
  "\x74\x69\x6f\x6e\x2f\x74\x65\x78\x74\x2d\x61\x73\x70\x65\x63\x74"
  "\x39\x19\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x73\x65\x74\x2d"
  "\x74\x65\x78\x74\x2d\x73\x6c\x61\x6e\x74\x3a\x1c\x6f\x70\x65\x72"
  "\x61\x74\x69\x6f\x6e\x2f\x73\x65\x74\x2d\x74\x65\x78\x74\x2d\x72"
  "\x6f\x74\x61\x74\x69\x6f\x6e\x3b\x1a\x6f\x70\x65\x72\x61\x74\x69"
  "\x6f\x6e\x2f\x73\x65\x74\x2d\x74\x65\x78\x74\x2d\x68\x65\x69\x67"
  "\x68\x74\x3c\x1a\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x73\x65"
  "\x74\x2d\x74\x65\x78\x74\x2d\x61\x73\x70\x65\x63\x74\x3d\x19\x6f"
  "\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x73\x65\x74\x2d\x6c\x69\x6e"
  "\x65\x2d\x73\x74\x79\x6c\x65\x3e\x19\x6f\x70\x65\x72\x61\x74\x69"
  "\x6f\x6e\x2f\x73\x65\x74\x2d\x6c\x69\x6e\x65\x2d\x63\x6f\x6c\x6f"
  "\x72\x3f\x1b\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x73\x65\x74"
  "\x2d\x64\x72\x61\x77\x69\x6e\x67\x2d\x6d\x6f\x64\x65\x40\x20\x6f"
  "\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x73\x65\x74\x2d\x63\x6f\x6f"
  "\x72\x64\x69\x6e\x61\x74\x65\x2d\x6c\x69\x6d\x69\x74\x73\x41\x1d"
  "\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x73\x65\x74\x2d\x63\x6c"
  "\x69\x70\x2d\x72\x65\x63\x74\x61\x6e\x67\x6c\x65\x42\x1f\x6f\x70"
  "\x65\x72\x61\x74\x69\x6f\x6e\x2f\x72\x65\x73\x65\x74\x2d\x63\x6c"
  "\x69\x70\x2d\x72\x65\x63\x74\x61\x6e\x67\x6c\x65\x43\x0f\x6f\x70"
  "\x65\x72\x61\x74\x69\x6f\x6e\x2f\x6f\x70\x65\x6e\x44\x16\x6f\x70"
  "\x65\x72\x61\x74\x69\x6f\x6e\x2f\x6d\x6f\x76\x65\x2d\x63\x75\x72"
  "\x73\x6f\x72\x45\x10\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x66"
  "\x6c\x75\x73\x68\x46\x14\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f"
  "\x64\x72\x61\x77\x2d\x74\x65\x78\x74\x47\x15\x6f\x70\x65\x72\x61"
  "\x74\x69\x6f\x6e\x2f\x64\x72\x61\x77\x2d\x70\x6f\x69\x6e\x74\x48"
  "\x14\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x64\x72\x61\x77\x2d"
  "\x6c\x69\x6e\x65\x49\x16\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f"
  "\x64\x72\x61\x67\x2d\x63\x75\x72\x73\x6f\x72\x4a\x23\x6f\x70\x65"
  "\x72\x61\x74\x69\x6f\x6e\x2f\x64\x65\x76\x69\x63\x65\x2d\x63\x6f"
  "\x6f\x72\x64\x69\x6e\x61\x74\x65\x2d\x6c\x69\x6d\x69\x74\x73\x4b"
  "\x17\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x64\x65\x66\x69\x6e"
  "\x65\x2d\x63\x6f\x6c\x6f\x72\x4c\x1c\x6f\x70\x65\x72\x61\x74\x69"
  "\x6f\x6e\x2f\x63\x6f\x6f\x72\x64\x69\x6e\x61\x74\x65\x2d\x6c\x69"
  "\x6d\x69\x74\x73\x4d\x19\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f"
  "\x63\x6f\x6c\x6f\x72\x2d\x6d\x61\x70\x2d\x73\x69\x7a\x65\x4e\x10"
  "\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x63\x6c\x6f\x73\x65\x4f"
  "\x10\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x63\x6c\x65\x61\x72"
  "\x50\x15\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x61\x76\x61\x69"
  "\x6c\x61\x62\x6c\x65\x3f\x51\x1e\x04\x1a\x6d\x61\x6b\x65\x2d\x67"
  "\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63\x65\x2d\x74"
  "\x79\x70\x65\x02\x9e\x01\x42\x81\x81\x02\x9d\x01\x40\x81\x81\x02"
  "\x9c\x01\x3e\x81\x85\x02\x9b\x01\x3c\x81\x85\x02\x9a\x01\x3a\x81"
  "\x85\x02\x99\x01\x38\x81\x85\x02\x98\x01\x36\x81\x85\x02\x97\x01"
  "\x34\x81\x85\x02\x96\x01\x32\x81\x85\x02\x95\x01\x30\x81\x85\x02"
  "\x94\x01\x2e\x81\x85\x02\x93\x01\x2c\x81\x85\x02\x92\x01\x2a\x81"
  "\x85\x02\x91\x01\x28\x81\x85\x02\x90\x01\x26\x81\x85\x02\x8f\x01"
  "\x24\x81\x85\x02\x8e\x01\x22\x81\x85\x02\x8d\x01\x20\x81\x85\x02"
  "\x8c\x01\x1e\x81\x85\x02\x8b\x01\x1c\x81\x85\x02\x8a\x01\x1a\x81"
  "\x85\x02\x89\x01\x18\x81\x85\x02\x88\x01\x16\x81\x85\x02\x87\x01"
  "\x14\x81\x85\x02\x86\x01\x12\x81\x85\x02\x85\x01\x10\x81\x85\x02"
  "\x84\x01\x0e\x81\x85\x02\x83\x01\x0c\x81\x85\x02\x82\x01\x0a\x81"
  "\x85\x02\x81\x01\x08\x81\x85\x02\x80\x01\x06\x81\x83\x02\x7f\x04"
  "\x82\x02\x41\x87\x01\x52\x02\x1a\x0c\x25\x72\x65\x63\x6f\x72\x64"
  "\x2d\x72\x65\x66\x53\x9f\x01\x04\x83\x04\x03\x54\x02\x1b\x53\xa0"
  "\x01\x04\x83\x04\x03\x55\x02\x1c\x53\xa1\x01\x04\x83\x04\x03\x56"
  "\x02\x1d\x53\xa2\x01\x04\x83\x04\x03\x57\x02\x1e\x53\xa3\x01\x04"
  "\x83\x04\x03\x58\x02\x1f\x53\xa4\x01\x04\x83\x04\x03\x59\x02\x20"
  "\x53\x08\xa5\x01\x04\x83\x04\x03\x5a\x02\x21\x53\x09\xa6\x01\x04"
  "\x83\x04\x03\x5b\x02\x22\x53\x0a\xa7\x01\x04\x83\x04\x03\x5c\x02"
  "\x23\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x5d\x02"
  "\xa8\x01\x04\x84\x06\x03\x5e\x02\x24\x5d\x02\xa9\x01\x04\x84\x06"
  "\x03\x5f\x02\x25\x5d\x02\xaa\x01\x04\x84\x06\x03\x60\x02\x26\x5d"
  "\x02\xab\x01\x04\x84\x06\x03\x61\x02\x27\x5d\x02\xac\x01\x04\x84"
  "\x06\x03\x62\x02\x28\x5d\x02\x08\xad\x01\x04\x84\x06\x03\x63\x02"
  "\x29\x5d\x02\x09\xae\x01\x04\x84\x06\x03\x64\x02\x2a\x5d\x02\x0a"
  "\xaf\x01\x04\x84\x06\x03\x65\x02\x2b\x53\x0f\x25\x72\x65\x63\x6f"
  "\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68\x07\x2e\x74\x61\x67\x2e\x31"
  "\x66\x02\xb3\x01\x0a\x81\x85\x02\xb2\x01\x08\x81\x83\x02\xb1\x01"
  "\x06\x81\x83\x02\xb0\x01\x04\x83\x04\x09\x12\x67\x02\x2c\x53\x03"
  "\x1b\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x76\x69\x63\x65"
  "\x2f\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x68\x02\xb5\x01\x06"
  "\x81\x83\x02\xb4\x01\x04\x83\x04\x05\x0d\x69\x02\x2d\x06\x62\x65"
  "\x67\x69\x6e\x11\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x64\x65\x76"
  "\x69\x63\x65\x2f\x1e\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x67\x72"
  "\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f"
  "\x72\x2f\x07\x64\x65\x66\x69\x6e\x65\x07\x64\x65\x76\x69\x63\x65"
  "\x6a\x15\x73\x65\x74\x2d\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x64"
  "\x65\x76\x69\x63\x65\x2f\x68\x6a\x06\x76\x61\x6c\x75\x65\x22\x73"
  "\x65\x74\x2d\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x67\x72\x61\x70"
  "\x68\x69\x63\x73\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x2f"
  "\x02\x21\x04\x63\x61\x72\x04\x63\x64\x72\x05\x0e\x73\x79\x6d\x62"
  "\x6f\x6c\x2d\x61\x70\x70\x65\x6e\x64\x6a\x04\x6a\x04\x0d\x63\x6c"
  "\x6f\x73\x65\x2d\x73\x79\x6e\x74\x61\x78\x04\xbe\x01\x14\x81\x8b"
  "\x02\xbd\x01\x12\x81\x8d\x02\xbc\x01\x10\x81\x89\x02\xbb\x01\x0e"
  "\x81\x89\x02\xba\x01\x0c\x81\x8b\x02\xb9\x01\x0a\x81\x87\x02\xb8"
  "\x01\x08\x81\x85\x02\xb7\x01\x06\x81\x85\x02\xb6\x01\x04\x84\x06"
  "\x13\x2a\x6a\x02\x2e\x53\x03\x68\x02\xc0\x01\x06\x81\x83\x02\xbf"
  "\x01\x04\x83\x04\x05\x0d\x6b\x02\x2f\x5d\x02\x03\x68\x02\xc2\x01"
  "\x06\x81\x85\x02\xc1\x01\x04\x84\x06\x05\x0e\x6c\x02\x30\x53\x03"
  "\x68\x02\xc4\x01\x06\x81\x83\x02\xc3\x01\x04\x83\x04\x05\x0d\x6d"
  "\x02\x31\x5d\x02\x03\x68\x02\xc6\x01\x06\x81\x85\x02\xc5\x01\x04"
  "\x84\x06\x05\x0e\x6e\x02\x32\x53\x03\x68\x02\xc8\x01\x06\x81\x83"
  "\x02\xc7\x01\x04\x83\x04\x05\x0d\x6f\x02\x33\x5d\x02\x03\x68\x02"
  "\xca\x01\x06\x81\x85\x02\xc9\x01\x04\x84\x06\x05\x0e\x70\x02\x34"
  "\x53\x03\x68\x02\xcc\x01\x06\x81\x83\x02\xcb\x01\x04\x83\x04\x05"
  "\x0d\x71\x02\x35\x5d\x02\x03\x68\x02\xce\x01\x06\x81\x85\x02\xcd"
  "\x01\x04\x84\x06\x05\x0e\x72\x02\x36\x53\x03\x68\x02\xd0\x01\x06"
  "\x81\x83\x02\xcf\x01\x04\x83\x04\x05\x0d\x73\x02\x37\x5d\x02\x03"
  "\x68\x02\xd2\x01\x06\x81\x85\x02\xd1\x01\x04\x84\x06\x05\x0e\x74"
  "\x02\x38\x53\x08\x03\x68\x02\xd4\x01\x06\x81\x83\x02\xd3\x01\x04"
  "\x83\x04\x05\x0d\x75\x02\x39\x5d\x02\x08\x03\x68\x02\xd6\x01\x06"
  "\x81\x85\x02\xd5\x01\x04\x84\x06\x05\x0e\x76\x02\x3a\x53\x09\x03"
  "\x68\x02\xd8\x01\x06\x81\x83\x02\xd7\x01\x04\x83\x04\x05\x0d\x77"
  "\x02\x3b\x5d\x02\x09\x03\x68\x02\xda\x01\x06\x81\x85\x02\xd9\x01"
  "\x04\x84\x06\x05\x0e\x78\x02\x3c\x53\x0a\x03\x68\x02\xdc\x01\x06"
  "\x81\x83\x02\xdb\x01\x04\x83\x04\x05\x0d\x53\x02\x3d\x5d\x02\x0a"
  "\x03\x68\x02\xde\x01\x06\x81\x85\x02\xdd\x01\x04\x84\x06\x05\x0e"
  "\x68\x02\x3e\x03\x21\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64"
  "\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x3f\x02\xdf\x01\x04\x82\x02\x03\x0a\x5d\x02\x3f"
  "\x03\x2e\x31\x03\x19\x6d\x61\x6b\x65\x2d\x73\x74\x61\x72\x62\x61"
  "\x73\x65\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x07\x41\x04"
  "\x3c\x04\x3d\x04\x3a\x04\x3b\x07\xe7\x01\x12\x81\x89\x02\xe6\x01"
  "\x10\x81\x89\x02\xe5\x01\x0e\x81\x89\x02\xe4\x01\x0c\x81\x89\x02"
  "\xe3\x01\x0a\x81\x89\x02\xe2\x01\x08\x81\x89\x02\xe1\x01\x06\x81"
  "\x87\x02\xe0\x01\x04\x85\x08\x11\x26\x79\x02\x40\x03\x1b\x73\x74"
  "\x61\x72\x62\x61\x73\x65\x2d\x64\x65\x76\x69\x63\x65\x2f\x69\x64"
  "\x65\x6e\x74\x69\x66\x69\x65\x72\x02\xe9\x01\x06\x81\x83\x02\xe8"
  "\x01\x04\x83\x04\x05\x0c\x7a\x02\x41\x03\x02\xeb\x01\x06\x81\x83"
  "\x02\xea\x01\x04\x83\x04\x05\x0c\x02\x42\x16\x0b\x76\x65\x63\x74"
  "\x6f\x72\x2d\x72\x65\x66\x03\x02\xf3\x01\x12\x81\x85\x02\xf2\x01"
  "\x10\x81\x85\x02\xf1\x01\x0e\x81\x89\x02\xf0\x01\x0c\x81\x87\x02"
  "\xef\x01\x0a\x81\x85\x02\xee\x01\x08\x81\x83\x02\xed\x01\x06\x81"
  "\x83\x02\xec\x01\x04\x83\x04\x11\x1d\x16\x02\x43\x03\x18\x73\x74"
  "\x61\x72\x62\x61\x73\x65\x2d\x64\x65\x76\x69\x63\x65\x2f\x78\x2d"
  "\x72\x69\x67\x68\x74\x7b\x03\x19\x73\x74\x61\x72\x62\x61\x73\x65"
  "\x2d\x64\x65\x76\x69\x63\x65\x2f\x79\x2d\x62\x6f\x74\x74\x6f\x6d"
  "\x7c\x03\x17\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x64\x65\x76\x69"
  "\x63\x65\x2f\x78\x2d\x6c\x65\x66\x74\x7d\x03\x16\x73\x74\x61\x72"
  "\x62\x61\x73\x65\x2d\x64\x65\x76\x69\x63\x65\x2f\x79\x2d\x74\x6f"
  "\x70\x7e\x05\xf9\x01\x0e\x81\x85\x02\xf8\x01\x0c\x81\x89\x02\xf7"
  "\x01\x0a\x81\x87\x02\xf6\x01\x08\x81\x85\x02\xf5\x01\x06\x81\x83"
  "\x02\xf4\x01\x04\x83\x04\x0d\x19\x7f\x02\x44\x18\x03\x04\x1c\x73"
  "\x65\x74\x2d\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x64\x65\x76\x69"
  "\x63\x65\x2f\x78\x2d\x6c\x65\x66\x74\x21\x18\x04\x1e\x73\x65\x74"
  "\x2d\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x64\x65\x76\x69\x63\x65"
  "\x2f\x79\x2d\x62\x6f\x74\x74\x6f\x6d\x21\x80\x01\x04\x1d\x73\x65"
  "\x74\x2d\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x64\x65\x76\x69\x63"
  "\x65\x2f\x78\x2d\x72\x69\x67\x68\x74\x21\x81\x01\x04\x1b\x73\x65"
  "\x74\x2d\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x64\x65\x76\x69\x63"
  "\x65\x2f\x79\x2d\x74\x6f\x70\x21\x82\x01\x06\xff\x01\x0e\x81\x8b"
  "\x02\xfe\x01\x0c\x81\x8b\x02\xfd\x01\x0a\x81\x8b\x02\xfc\x01\x08"
  "\x81\x95\x02\xfb\x01\x06\x81\x8b\x02\xfa\x01\x04\x87\x0c\x0d\x1c"
  "\x83\x01\x02\x45\x1a\x03\x02\x81\x02\x06\x81\x83\x02\x80\x02\x04"
  "\x83\x04\x05\x0c\x1a\x02\x46\x1c\x03\x02\x83\x02\x06\x81\x8b\x02"
  "\x82\x02\x04\x87\x0c\x05\x0c\x1c\x02\x47\x14\x03\x02\x85\x02\x06"
  "\x81\x85\x02\x84\x02\x04\x84\x06\x05\x0c\x14\x02\x48\x12\x03\x02"
  "\x87\x02\x06\x81\x85\x02\x86\x02\x04\x84\x06\x05\x0c\x12\x02\x49"
  "\x03\x02\x89\x02\x06\x81\x83\x02\x88\x02\x04\x83\x04\x05\x0c\x02"
  "\x4a\x10\x03\x02\x8b\x02\x06\x81\x87\x02\x8a\x02\x04\x85\x08\x05"
  "\x0c\x10\x02\x4b\x0a\x03\x02\x8d\x02\x06\x81\x87\x02\x8c\x02\x04"
  "\x85\x08\x05\x0c\x0a\x02\x4c\x0c\x03\x02\x8f\x02\x06\x81\x87\x02"
  "\x8e\x02\x04\x85\x08\x05\x0c\x0c\x02\x4d\x0e\x03\x02\x91\x02\x06"
  "\x81\x8b\x02\x90\x02\x04\x87\x0c\x05\x0c\x0e\x02\x4e\x1e\x03\x02"
  "\x93\x02\x06\x81\x89\x02\x92\x02\x04\x86\x0a\x05\x0c\x1e\x02\x4f"
  "\x2e\x03\x03\x10\x6d\x65\x72\x67\x65\x2d\x70\x61\x74\x68\x6e\x61"
  "\x6d\x65\x73\x03\x0d\x2d\x3e\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e"
  "\x67\x04\x97\x02\x0a\x81\x89\x02\x96\x02\x08\x81\x87\x02\x95\x02"
  "\x06\x81\x87\x02\x94\x02\x04\x85\x08\x09\x14\x2e\x02\x50\x03\x1c"
  "\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x64\x65\x76\x69\x63\x65\x2f"
  "\x74\x65\x78\x74\x2d\x68\x65\x69\x67\x68\x74\x84\x01\x02\x98\x02"
  "\x04\x83\x04\x03\x85\x01\x02\x51\x03\x1c\x73\x74\x61\x72\x62\x61"
  "\x73\x65\x2d\x64\x65\x76\x69\x63\x65\x2f\x74\x65\x78\x74\x2d\x61"
  "\x73\x70\x65\x63\x74\x86\x01\x02\x99\x02\x04\x83\x04\x03\x87\x01"
  "\x02\x52\x03\x1b\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x64\x65\x76"
  "\x69\x63\x65\x2f\x74\x65\x78\x74\x2d\x73\x6c\x61\x6e\x74\x88\x01"
  "\x02\x9a\x02\x04\x83\x04\x03\x89\x01\x02\x53\x03\x1e\x73\x74\x61"
  "\x72\x62\x61\x73\x65\x2d\x64\x65\x76\x69\x63\x65\x2f\x74\x65\x78"
  "\x74\x2d\x72\x6f\x74\x61\x74\x69\x6f\x6e\x8a\x01\x02\x9b\x02\x04"
  "\x83\x04\x03\x8b\x01\x02\x54\x20\x03\x04\x21\x73\x65\x74\x2d\x73"
  "\x74\x61\x72\x62\x61\x73\x65\x2d\x64\x65\x76\x69\x63\x65\x2f\x74"
  "\x65\x78\x74\x2d\x68\x65\x69\x67\x68\x74\x21\x20\x03\x9e\x02\x08"
  "\x81\x89\x02\x9d\x02\x06\x81\x85\x02\x9c\x02\x04\x84\x06\x07\x10"
  "\x8c\x01\x02\x55\x22\x03\x04\x21\x73\x65\x74\x2d\x73\x74\x61\x72"
  "\x62\x61\x73\x65\x2d\x64\x65\x76\x69\x63\x65\x2f\x74\x65\x78\x74"
  "\x2d\x61\x73\x70\x65\x63\x74\x21\x22\x03\xa1\x02\x08\x81\x89\x02"
  "\xa0\x02\x06\x81\x85\x02\x9f\x02\x04\x84\x06\x07\x10\x8d\x01\x02"
  "\x56\x24\x03\x04\x20\x73\x65\x74\x2d\x73\x74\x61\x72\x62\x61\x73"
  "\x65\x2d\x64\x65\x76\x69\x63\x65\x2f\x74\x65\x78\x74\x2d\x73\x6c"
  "\x61\x6e\x74\x21\x24\x03\xa4\x02\x08\x81\x89\x02\xa3\x02\x06\x81"
  "\x85\x02\xa2\x02\x04\x84\x06\x07\x10\x8e\x01\x02\x57\x26\x03\x04"
  "\x23\x73\x65\x74\x2d\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x64\x65"
  "\x76\x69\x63\x65\x2f\x74\x65\x78\x74\x2d\x72\x6f\x74\x61\x74\x69"
  "\x6f\x6e\x21\x26\x03\xa7\x02\x08\x81\x89\x02\xa6\x02\x06\x81\x85"
  "\x02\xa5\x02\x04\x84\x06\x07\x10\x8f\x01\x02\x58\x28\x03\x02\xa9"
  "\x02\x06\x81\x83\x02\xa8\x02\x04\x83\x04\x05\x0c\x28\x02\x59\x2a"
  "\x03\x02\xab\x02\x06\x81\x8b\x02\xaa\x02\x04\x87\x0c\x05\x0c\x2a"
  "\x02\x5a\x2c\x03\x02\xad\x02\x06\x81\x85\x02\xac\x02\x04\x84\x06"
  "\x05\x0c\x2c\x5a\x2c\x04\x3f\x4c\x2a\x04\x4e\x28\x04\x3b\x8f\x01"
  "\x04\x3a\x8e\x01\x04\x3d\x8d\x01\x04\x3c\x8c\x01\x04\x37\x8b\x01"
  "\x04\x36\x89\x01\x04\x39\x87\x01\x04\x38\x85\x01\x04\x35\x2e\x04"
  "\x47\x1e\x04\x49\x0e\x04\x4a\x0c\x04\x45\x0a\x04\x48\x10\x04\x50"
  "\x04\x3e\x12\x04\x40\x14\x04\x42\x1c\x04\x43\x1a\x04\x41\x83\x01"
  "\x04\x4d\x7f\x04\x4b\x16\x04\x46\x04\x4f\x7a\x04\x44\x79\x04\x51"
  "\x5d\x04\x26\x68\x04\x8a\x01\x53\x04\x24\x78\x04\x88\x01\x77\x04"
  "\x22\x76\x04\x86\x01\x75\x04\x20\x74\x04\x84\x01\x73\x04\x82\x01"
  "\x72\x04\x7e\x71\x04\x81\x01\x70\x04\x7b\x6f\x04\x80\x01\x6e\x04"
  "\x7c\x6d\x04\x18\x6c\x04\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65"
  "\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70\x65"
  "\x33\x10\x1e\x64\x65\x66\x69\x6e\x65\x2d\x61\x63\x63\x65\x73\x73"
  "\x6f\x72\x73\x2d\x61\x6e\x64\x2d\x6d\x75\x74\x61\x74\x6f\x72\x73"
  "\x7d\x6b\x04\x6a\x04\x69\x04\x66\x1e\x73\x74\x61\x72\x62\x61\x73"
  "\x65\x2d\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x73\x63\x72"
  "\x69\x70\x74\x6f\x72\x3f\x67\x04\x30\x73\x65\x74\x2d\x73\x74\x61"
  "\x72\x62\x61\x73\x65\x2d\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64"
  "\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x2f\x74\x65\x78\x74\x2d\x72"
  "\x6f\x74\x61\x74\x69\x6f\x6e\x21\x65\x04\x2d\x73\x65\x74\x2d\x73"
  "\x74\x61\x72\x62\x61\x73\x65\x2d\x67\x72\x61\x70\x68\x69\x63\x73"
  "\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x2f\x74\x65\x78\x74"
  "\x2d\x73\x6c\x61\x6e\x74\x21\x64\x04\x2e\x73\x65\x74\x2d\x73\x74"
  "\x61\x72\x62\x61\x73\x65\x2d\x67\x72\x61\x70\x68\x69\x63\x73\x2d"
  "\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x2f\x74\x65\x78\x74\x2d"
  "\x61\x73\x70\x65\x63\x74\x21\x63\x04\x2e\x73\x65\x74\x2d\x73\x74"
  "\x61\x72\x62\x61\x73\x65\x2d\x67\x72\x61\x70\x68\x69\x63\x73\x2d"
  "\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x2f\x74\x65\x78\x74\x2d"
  "\x68\x65\x69\x67\x68\x74\x21\x62\x04\x28\x73\x65\x74\x2d\x73\x74"
  "\x61\x72\x62\x61\x73\x65\x2d\x67\x72\x61\x70\x68\x69\x63\x73\x2d"
  "\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x2f\x79\x2d\x74\x6f\x70"
  "\x21\x61\x04\x2a\x73\x65\x74\x2d\x73\x74\x61\x72\x62\x61\x73\x65"
  "\x2d\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x73\x63\x72\x69"
  "\x70\x74\x6f\x72\x2f\x78\x2d\x72\x69\x67\x68\x74\x21\x60\x04\x2b"
  "\x73\x65\x74\x2d\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x67\x72\x61"
  "\x70\x68\x69\x63\x73\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72"
  "\x2f\x79\x2d\x62\x6f\x74\x74\x6f\x6d\x21\x5f\x04\x29\x73\x65\x74"
  "\x2d\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x67\x72\x61\x70\x68\x69"
  "\x63\x73\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x2f\x78\x2d"
  "\x6c\x65\x66\x74\x21\x5e\x04\x2b\x73\x74\x61\x72\x62\x61\x73\x65"
  "\x2d\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x73\x63\x72\x69"
  "\x70\x74\x6f\x72\x2f\x74\x65\x78\x74\x2d\x72\x6f\x74\x61\x74\x69"
  "\x6f\x6e\x5c\x04\x28\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x67\x72"
  "\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f"
  "\x72\x2f\x74\x65\x78\x74\x2d\x73\x6c\x61\x6e\x74\x5b\x04\x29\x73"
  "\x74\x61\x72\x62\x61\x73\x65\x2d\x67\x72\x61\x70\x68\x69\x63\x73"
  "\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x2f\x74\x65\x78\x74"
  "\x2d\x61\x73\x70\x65\x63\x74\x5a\x04\x29\x73\x74\x61\x72\x62\x61"
  "\x73\x65\x2d\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x73\x63"
  "\x72\x69\x70\x74\x6f\x72\x2f\x74\x65\x78\x74\x2d\x68\x65\x69\x67"
  "\x68\x74\x59\x04\x23\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x67\x72"
  "\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f"
  "\x72\x2f\x79\x2d\x74\x6f\x70\x58\x04\x25\x73\x74\x61\x72\x62\x61"
  "\x73\x65\x2d\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x73\x63"
  "\x72\x69\x70\x74\x6f\x72\x2f\x78\x2d\x72\x69\x67\x68\x74\x57\x04"
  "\x26\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x67\x72\x61\x70\x68\x69"
  "\x63\x73\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x2f\x79\x2d"
  "\x62\x6f\x74\x74\x6f\x6d\x56\x04\x24\x73\x74\x61\x72\x62\x61\x73"
  "\x65\x2d\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65\x73\x63\x72"
  "\x69\x70\x74\x6f\x72\x2f\x78\x2d\x6c\x65\x66\x74\x55\x04\x28\x73"
  "\x74\x61\x72\x62\x61\x73\x65\x2d\x67\x72\x61\x70\x68\x69\x63\x73"
  "\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x2f\x69\x64\x65\x6e"
  "\x74\x69\x66\x69\x65\x72\x54\x04\x21\x72\x74\x64\x3a\x73\x74\x61"
  "\x72\x62\x61\x73\x65\x2d\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64"
  "\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x8f\x01\x1d\x73\x74\x61\x72"
  "\x62\x61\x73\x65\x2d\x67\x72\x61\x70\x68\x69\x63\x73\x2d\x64\x65"
  "\x73\x63\x72\x69\x70\x74\x6f\x72\x0b\x69\x64\x65\x6e\x74\x69\x66"
  "\x69\x65\x72\x07\x78\x2d\x6c\x65\x66\x74\x09\x79\x2d\x62\x6f\x74"
  "\x74\x6f\x6d\x08\x78\x2d\x72\x69\x67\x68\x74\x06\x79\x2d\x74\x6f"
  "\x70\x31\x30\x33\x32\x09\x34\x14\x69\x6e\x69\x74\x69\x61\x6c\x69"
  "\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x52\x04\x1a\x73\x74"
  "\x61\x72\x62\x61\x73\x65\x2d\x77\x72\x69\x74\x65\x2d\x69\x6d\x61"
  "\x67\x65\x2d\x66\x69\x6c\x65\x2f\x04\x18\x73\x74\x61\x72\x62\x61"
  "\x73\x65\x2d\x73\x65\x74\x2d\x6c\x69\x6e\x65\x2d\x63\x6f\x6c\x6f"
  "\x72\x2d\x04\x16\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x64\x65\x66"
  "\x69\x6e\x65\x2d\x63\x6f\x6c\x6f\x72\x2b\x04\x18\x73\x74\x61\x72"
  "\x62\x61\x73\x65\x2d\x63\x6f\x6c\x6f\x72\x2d\x6d\x61\x70\x2d\x73"
  "\x69\x7a\x65\x29\x04\x1b\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x73"
  "\x65\x74\x2d\x74\x65\x78\x74\x2d\x72\x6f\x74\x61\x74\x69\x6f\x6e"
  "\x27\x04\x18\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x73\x65\x74\x2d"
  "\x74\x65\x78\x74\x2d\x73\x6c\x61\x6e\x74\x25\x04\x19\x73\x74\x61"
  "\x72\x62\x61\x73\x65\x2d\x73\x65\x74\x2d\x74\x65\x78\x74\x2d\x61"
  "\x73\x70\x65\x63\x74\x23\x04\x19\x73\x74\x61\x72\x62\x61\x73\x65"
  "\x2d\x73\x65\x74\x2d\x74\x65\x78\x74\x2d\x68\x65\x69\x67\x68\x74"
  "\x21\x04\x13\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x64\x72\x61\x77"
  "\x2d\x74\x65\x78\x74\x1f\x04\x1c\x73\x74\x61\x72\x62\x61\x73\x65"
  "\x2d\x73\x65\x74\x2d\x63\x6c\x69\x70\x2d\x72\x65\x63\x74\x61\x6e"
  "\x67\x6c\x65\x1d\x04\x1e\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x72"
  "\x65\x73\x65\x74\x2d\x63\x6c\x69\x70\x2d\x72\x65\x63\x74\x61\x6e"
  "\x67\x6c\x65\x1b\x04\x18\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x73"
  "\x65\x74\x2d\x76\x64\x63\x2d\x65\x78\x74\x65\x6e\x74\x19\x04\x1c"
  "\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x64\x65\x76\x69\x63\x65\x2d"
  "\x63\x6f\x6f\x72\x64\x69\x6e\x61\x74\x65\x73\x17\x04\x1a\x73\x74"
  "\x61\x72\x62\x61\x73\x65\x2d\x73\x65\x74\x2d\x64\x72\x61\x77\x69"
  "\x6e\x67\x2d\x6d\x6f\x64\x65\x15\x04\x18\x73\x74\x61\x72\x62\x61"
  "\x73\x65\x2d\x73\x65\x74\x2d\x6c\x69\x6e\x65\x2d\x73\x74\x79\x6c"
  "\x65\x13\x04\x14\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x64\x72\x61"
  "\x77\x2d\x70\x6f\x69\x6e\x74\x11\x04\x13\x73\x74\x61\x72\x62\x61"
  "\x73\x65\x2d\x64\x72\x61\x77\x2d\x6c\x69\x6e\x65\x0f\x04\x15\x73"
  "\x74\x61\x72\x62\x61\x73\x65\x2d\x64\x72\x61\x67\x2d\x63\x75\x72"
  "\x73\x6f\x72\x0d\x04\x15\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x6d"
  "\x6f\x76\x65\x2d\x63\x75\x72\x73\x6f\x72\x0b\x04\x0f\x73\x74\x61"
  "\x72\x62\x61\x73\x65\x2d\x63\x6c\x65\x61\x72\x09\x04\x0f\x73\x74"
  "\x61\x72\x62\x61\x73\x65\x2d\x66\x6c\x75\x73\x68\x04\x16\x73\x74"
  "\x61\x72\x62\x61\x73\x65\x2d\x63\x6c\x6f\x73\x65\x2d\x64\x65\x76"
  "\x69\x63\x65\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67"
  "\x6e\x6d\x65\x6e\x74\x15\x73\x74\x61\x72\x62\x61\x73\x65\x2d\x6f"
  "\x70\x65\x6e\x2d\x64\x65\x76\x69\x63\x65\x04\x06\x11\x6d\x61\x6b"
  "\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x03\x19\x72"
  "\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61"
  "\x74\x63\x68\x2d\x74\x61\x67\x04\x1f\x73\x63\x2d\x6d\x61\x63\x72"
  "\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65"
  "\x78\x70\x61\x6e\x64\x65\x72\x04\x8f\x01\x02\x67\xd0\x01\x80\x80"
  "\x04\x66\xce\x01\x81\x81\x02\x65\xcc\x01\x81\x81\x02\x64\xca\x01"
  "\x81\x83\x02\x63\xc8\x01\x81\x83\x02\x62\xc6\x01\x81\x83\x02\x61"
  "\xc4\x01\x81\x83\x02\x60\xc2\x01\x81\x83\x02\x5f\xc0\x01\x81\x83"
  "\x02\x5e\xbe\x01\x81\x83\x02\x5d\xbc\x01\x81\x83\x02\x5c\xba\x01"
  "\x81\x83\x02\x5b\xb8\x01\x81\x83\x02\x5a\xb6\x01\x81\x83\x02\x59"
  "\xb4\x01\x81\x83\x02\x58\xb2\x01\x81\x83\x02\x57\xb0\x01\x81\x83"
  "\x02\x56\xae\x01\x81\x83\x02\x55\xac\x01\x81\x83\x02\x54\xaa\x01"
  "\x81\x83\x02\x53\xa8\x01\x81\x83\x02\x52\xa6\x01\x81\x83\x02\x51"
  "\xa4\x01\x81\x83\x02\x50\xa2\x01\x81\x83\x02\x4f\xa0\x01\x81\x83"
  "\x02\x4e\x9e\x01\x81\x83\x02\x4d\x9c\x01\x81\x83\x02\x4c\x9a\x01"
  "\x81\x83\x02\x4b\x98\x01\x81\x83\x02\x4a\x96\x01\x81\x83\x02\x49"
  "\x94\x01\x81\x83\x02\x48\x92\x01\x81\x83\x02\x47\x90\x01\x81\x83"
  "\x02\x46\x8e\x01\x81\x83\x02\x45\x8c\x01\x81\x83\x02\x44\x8a\x01"
  "\x81\x83\x02\x43\x88\x01\x81\x83\x02\x42\x86\x01\x81\x83\x02\x41"
  "\x84\x01\x81\x83\x02\x40\x82\x01\x81\x83\x02\x3f\x80\x01\x81\x83"
  "\x02\x3e\x7e\x81\x83\x02\x3d\x7c\x81\x83\x02\x3c\x7a\x81\x83\x02"
  "\x3b\x78\x81\x83\x02\x3a\x76\x81\x83\x02\x39\x74\x81\x83\x02\x38"
  "\x72\x81\x87\x02\x37\x70\x81\x85\x02\x36\x6e\x81\x83\x02\x35\x6c"
  "\x81\x83\x02\x34\x6a\x81\x83\x02\x33\x68\x81\x85\x02\x32\x66\x81"
  "\x83\x02\x31\x64\x81\x87\x02\x30\x62\x81\x83\x02\x2f\x60\x81\x83"
  "\x02\x2e\x5e\x81\x83\x02\x2d\x5c\x81\x83\x02\x2c\x5a\x81\x83\x02"
  "\x2b\x58\x81\x83\x02\x2a\x56\x81\x83\x02\x29\x54\x81\x83\x02\x28"
  "\x52\x81\x83\x02\x27\x50\x81\x83\x02\x26\x4e\x81\x83\x02\x25\x4c"
  "\x81\x83\x02\x24\x4a\x81\x83\x02\x23\x48\x81\x83\x02\x22\x46\x81"
  "\x83\x02\x21\x44\x81\x83\x02\x20\x42\x81\x85\x02\x1f\x40\x81\x83"
  "\x02\x1e\x3e\x81\x85\x02\x1d\x3c\x81\x83\x02\x1c\x3a\x81\x85\x02"
  "\x1b\x38\x81\x87\x02\x1a\x36\x81\x83\x02\x19\x34\x81\x83\x02\x18"
  "\x32\x81\x83\x02\x17\x30\x81\x83\x02\x16\x2e\x81\x83\x02\x15\x2c"
  "\x81\x83\x02\x14\x2a\x81\x83\x02\x13\x28\x81\x83\x02\x12\x26\x81"
  "\x83\x02\x11\x24\x81\x83\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x83"
  "\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x83\x02"
  "\x0b\x18\x81\x83\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x83\x02\x08"
  "\x12\x81\x83\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x83\x02\x05\x0c"
  "\x81\x83\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x83\x02\x02\x06\x81"
  "\x83\x02\x01\x04\x81\x83\x02\xcf\x01\x9a\x03";

SCHEME_OBJECT *
starbase_so_data_5fccc82130a13d5f (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_starbase_so_data_5fccc82130a13d5f [0]))), (sizeof (prog_starbase_so_data_5fccc82130a13d5f)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_110]));
}

DECLARE_COMPILED_DATA_NS ("starbase.so", starbase_so_data_5fccc82130a13d5f)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("starbase.so", "9d8dd8ce5a79c607")
