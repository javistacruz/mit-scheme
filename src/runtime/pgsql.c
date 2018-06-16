/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:47-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 6
#define DEBUGGING_LABEL_1_2 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto pq_clear_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_clear_3)
DEFLABEL (pq_clear_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

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
pgsql_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto pq_cmd_status_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_cmd_status_3)
DEFLABEL (pq_cmd_status_0)
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
pgsql_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto pq_cmd_tuples_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_cmd_tuples_3)
DEFLABEL (pq_cmd_tuples_0)
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
pgsql_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto pq_connect_db_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_connect_db_3)
DEFLABEL (pq_connect_db_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 2);

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
pgsql_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto pq_connect_poll_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_connect_poll_3)
DEFLABEL (pq_connect_poll_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

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
pgsql_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto pq_connect_start_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_connect_start_3)
DEFLABEL (pq_connect_start_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 2);

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
pgsql_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto pq_db_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_db_3)
DEFLABEL (pq_db_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

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
pgsql_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto pq_end_copy_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_end_copy_3)
DEFLABEL (pq_end_copy_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

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
pgsql_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto pq_error_message_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_error_message_3)
DEFLABEL (pq_error_message_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

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
pgsql_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto pq_escape_bytea_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_escape_bytea_3)
DEFLABEL (pq_escape_bytea_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

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
pgsql_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto pq_escape_string_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_escape_string_3)
DEFLABEL (pq_escape_string_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 2);

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
pgsql_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto pq_exec_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_exec_3)
DEFLABEL (pq_exec_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 3);

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
pgsql_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto pq_field_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_field_name_3)
DEFLABEL (pq_field_name_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 2);

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
pgsql_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto pq_finish_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_finish_3)
DEFLABEL (pq_finish_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

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
pgsql_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto pq_get_is_nullP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_get_is_nullP_3)
DEFLABEL (pq_get_is_nullP_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 3);

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
pgsql_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto pq_get_line_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_get_line_3)
DEFLABEL (pq_get_line_0)
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
pgsql_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto pq_get_value_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_get_value_3)
DEFLABEL (pq_get_value_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 3);

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
pgsql_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto pq_host_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_host_3)
DEFLABEL (pq_host_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

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
pgsql_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto pq_make_empty_pg_result_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_make_empty_pg_result_3)
DEFLABEL (pq_make_empty_pg_result_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 3);

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
pgsql_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto pq_n_fields_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_n_fields_3)
DEFLABEL (pq_n_fields_0)
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
pgsql_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto pq_n_tuples_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_n_tuples_3)
DEFLABEL (pq_n_tuples_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 1);

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
pgsql_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto pq_options_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_options_3)
DEFLABEL (pq_options_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

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
pgsql_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto pq_pass_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_pass_3)
DEFLABEL (pq_pass_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define ENVIRONMENT_LABEL_24_3 6
#define DEBUGGING_LABEL_24_2 5
#define OBJECT_24_0 4
#define FREE_REFERENCES_LABEL_24_0 4
#define NUMBER_OF_LINKER_SECTIONS_24_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_24_4);
      goto pq_port_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_port_3)
DEFLABEL (pq_port_0)
  INTERRUPT_CHECK (26, LABEL_24_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define ENVIRONMENT_LABEL_25_3 6
#define DEBUGGING_LABEL_25_2 5
#define OBJECT_25_0 4
#define FREE_REFERENCES_LABEL_25_0 4
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_25_4);
      goto pq_put_line_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_put_line_3)
DEFLABEL (pq_put_line_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define ENVIRONMENT_LABEL_26_3 6
#define DEBUGGING_LABEL_26_2 5
#define OBJECT_26_0 4
#define FREE_REFERENCES_LABEL_26_0 4
#define NUMBER_OF_LINKER_SECTIONS_26_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_26_4);
      goto pq_res_status_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_res_status_3)
DEFLABEL (pq_res_status_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define ENVIRONMENT_LABEL_27_3 6
#define DEBUGGING_LABEL_27_2 5
#define OBJECT_27_0 4
#define FREE_REFERENCES_LABEL_27_0 4
#define NUMBER_OF_LINKER_SECTIONS_27_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto pq_reset_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_reset_3)
DEFLABEL (pq_reset_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define ENVIRONMENT_LABEL_28_3 6
#define DEBUGGING_LABEL_28_2 5
#define OBJECT_28_0 4
#define FREE_REFERENCES_LABEL_28_0 4
#define NUMBER_OF_LINKER_SECTIONS_28_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto pq_reset_poll_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_reset_poll_3)
DEFLABEL (pq_reset_poll_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define ENVIRONMENT_LABEL_29_3 6
#define DEBUGGING_LABEL_29_2 5
#define OBJECT_29_0 4
#define FREE_REFERENCES_LABEL_29_0 4
#define NUMBER_OF_LINKER_SECTIONS_29_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_29_4);
      goto pq_reset_start_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_reset_start_3)
DEFLABEL (pq_reset_start_0)
  INTERRUPT_CHECK (26, LABEL_29_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define ENVIRONMENT_LABEL_30_3 6
#define DEBUGGING_LABEL_30_2 5
#define OBJECT_30_0 4
#define FREE_REFERENCES_LABEL_30_0 4
#define NUMBER_OF_LINKER_SECTIONS_30_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_30_4);
      goto pq_result_error_message_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_result_error_message_3)
DEFLABEL (pq_result_error_message_0)
  INTERRUPT_CHECK (26, LABEL_30_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define ENVIRONMENT_LABEL_31_3 6
#define DEBUGGING_LABEL_31_2 5
#define OBJECT_31_0 4
#define FREE_REFERENCES_LABEL_31_0 4
#define NUMBER_OF_LINKER_SECTIONS_31_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_31_4);
      goto pq_result_status_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_result_status_3)
DEFLABEL (pq_result_status_0)
  INTERRUPT_CHECK (26, LABEL_31_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define ENVIRONMENT_LABEL_32_3 6
#define DEBUGGING_LABEL_32_2 5
#define OBJECT_32_0 4
#define FREE_REFERENCES_LABEL_32_0 4
#define NUMBER_OF_LINKER_SECTIONS_32_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_32_4);
      goto pq_status_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_status_3)
DEFLABEL (pq_status_0)
  INTERRUPT_CHECK (26, LABEL_32_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define ENVIRONMENT_LABEL_33_3 6
#define DEBUGGING_LABEL_33_2 5
#define OBJECT_33_0 4
#define FREE_REFERENCES_LABEL_33_0 4
#define NUMBER_OF_LINKER_SECTIONS_33_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_33_4);
      goto pq_tty_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_tty_3)
DEFLABEL (pq_tty_0)
  INTERRUPT_CHECK (26, LABEL_33_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
pgsql_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_34_4);
      goto pq_unescape_bytea_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_unescape_bytea_3)
DEFLABEL (pq_unescape_bytea_0)
  INTERRUPT_CHECK (26, LABEL_34_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
pgsql_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_35_4);
      goto pq_user_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pq_user_3)
DEFLABEL (pq_user_0)
  INTERRUPT_CHECK (26, LABEL_35_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_6 5
#define LABEL_36_5 7
#define LABEL_36_11 9
#define LABEL_36_12 11
#define LABEL_36_9 13
#define LABEL_36_10 15
#define LABEL_36_14 17
#define LABEL_36_15 19
#define LABEL_36_17 21
#define LABEL_36_18 23
#define LABEL_36_16 25
#define LABEL_36_20 27
#define LABEL_36_22 29
#define LABEL_36_23 31
#define LABEL_36_21 33
#define LABEL_36_24 35
#define ENVIRONMENT_LABEL_36_3 54
#define DEBUGGING_LABEL_36_2 53
#define OBJECT_36_7 52
#define OBJECT_36_6 51
#define OBJECT_36_5 50
#define OBJECT_36_4 49
#define OBJECT_36_3 48
#define OBJECT_36_2 47
#define OBJECT_36_1 46
#define OBJECT_36_0 45
#define EXECUTE_CACHE_36_19 37
#define EXECUTE_CACHE_36_13 39
#define EXECUTE_CACHE_36_8 41
#define EXECUTE_CACHE_36_7 43
#define FREE_REFERENCES_LABEL_36_0 36
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd5;
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
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd29;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_36_4);
      goto lambda_28;

    case 1:
      current_block = (Rpc - LABEL_36_6);
      goto label_30;

    case 2:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_36_11);
      goto label_31;

    case 4:
      current_block = (Rpc - LABEL_36_12);
      goto label_32;

    case 5:
      current_block = (Rpc - LABEL_36_9);
      goto continuation_27;

    case 6:
      current_block = (Rpc - LABEL_36_10);
      goto continuation_20;

    case 7:
      current_block = (Rpc - LABEL_36_14);
      goto label_33;

    case 8:
      current_block = (Rpc - LABEL_36_15);
      goto label_34;

    case 9:
      current_block = (Rpc - LABEL_36_17);
      goto label_35;

    case 10:
      current_block = (Rpc - LABEL_36_18);
      goto label_36;

    case 11:
      current_block = (Rpc - LABEL_36_16);
      goto continuation_4;

    case 12:
      current_block = (Rpc - LABEL_36_20);
      goto loop_14;

    case 13:
      current_block = (Rpc - LABEL_36_22);
      goto label_37;

    case 14:
      current_block = (Rpc - LABEL_36_23);
      goto label_38;

    case 15:
      current_block = (Rpc - LABEL_36_21);
      goto continuation_13;

    case 16:
      current_block = (Rpc - LABEL_36_24);
      goto label_39;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_41)
DEFLABEL (lambda_28)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_57;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_56)
  (Wrd17.Obj) = (current_block [OBJECT_36_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_36_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_43;
  (Wrd29.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd29.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_8]));

DEFLABEL (label_43)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_55;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_54)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_53;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_52)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_13]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_36_10);
  (Wrd9.Obj) = (current_block [OBJECT_36_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_36_4]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_51;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_50)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_49;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd27.Obj) = ((Wrd28.pObj) [0]);

DEFLABEL (label_48)
  (Wrd34.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd41.Obj) = (current_block [OBJECT_36_6]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Wrd45.Obj) = (current_block [OBJECT_36_3]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_16]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (current_block [OBJECT_36_7]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd53.Obj) = (Rsp [4]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_47;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd50.Obj) = ((Wrd52.pObj) [1]);

DEFLABEL (label_46)
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_45;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [1]);
  (* (--Rsp)) = (Wrd60.Obj);

DEFLABEL (label_44)
  goto loop_14;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_36_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_19]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_36_9);
  (Wrd10.Obj) = (current_block [OBJECT_36_2]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_18]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_17]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

DEFLABEL (label_35)
  (Wrd50.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_15]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_5]), 1);

DEFLABEL (label_34)
  (Wrd27.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_14]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

DEFLABEL (label_33)
  (Wrd18.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_12]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_11]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

DEFLABEL (label_31)
  (Wrd13.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (loop_42)
DEFLABEL (loop_14)
  INTERRUPT_CHECK (26, LABEL_36_20);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_58;
  Rvl = (current_block [OBJECT_36_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_58)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_21]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_64;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_64;
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_63)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_62;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [1]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_61)
  goto loop_14;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_36_21);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_60;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_59)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.Obj) = (current_block [OBJECT_36_3]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_36_6]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_24]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_5]), 1);

DEFLABEL (label_39)
  (Wrd5.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_23]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_22]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_63;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_7 5
#define LABEL_37_5 7
#define LABEL_37_8 9
#define ENVIRONMENT_LABEL_37_3 19
#define DEBUGGING_LABEL_37_2 18
#define OBJECT_37_2 17
#define OBJECT_37_1 16
#define OBJECT_37_0 15
#define EXECUTE_CACHE_37_9 11
#define EXECUTE_CACHE_37_6 13
#define FREE_REFERENCES_LABEL_37_0 10
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd42;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_37_4);
      goto index__name_4;

    case 1:
      current_block = (Rpc - LABEL_37_7);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_37_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (index__name_8)
DEFLABEL (index__name_4)
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
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_13;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_12)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd17.Lng) < (Wrd18.Lng))
    goto label_11;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_37_0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_37_7);

DEFLABEL (label_11)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd25.Obj);
  (Rsp [1]) = (Wrd24.Obj);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd42.uLng) == 10)
    goto label_10;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 2);

DEFLABEL (label_10)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_9;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) (Wrd36.Lng)) < ((unsigned long) (Wrd40.Lng))))
    goto label_9;
  (Wrd28.uLng) = (OBJECT_DATUM (Wrd24.Obj));
  (Wrd31.pObj) = (& ((Wrd38.pObj) [(Wrd28.Lng)]));
  Rvl = ((Wrd31.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 1);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_12;

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
pgsql_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto connection_handle_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (connection_handle_3)
DEFLABEL (connection_handle_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
  Rsp = (& (Rsp [2]));
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
pgsql_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_connection_handleB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_connection_handleB_3)
DEFLABEL (set_connection_handleB_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_39_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_6 7
#define LABEL_40_7 9
#define ENVIRONMENT_LABEL_40_3 17
#define DEBUGGING_LABEL_40_2 16
#define OBJECT_40_3 15
#define OBJECT_40_2 14
#define OBJECT_40_1 13
#define OBJECT_40_0 12
#define FREE_REFERENCE_40_0 11
#define FREE_REFERENCES_LABEL_40_0 10
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_40_4);
      goto connectionP_4;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_40_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_40_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (connectionP_10)
DEFLABEL (connectionP_4)
  INTERRUPT_CHECK (26, LABEL_40_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_0]));
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
  Rvl = (current_block [OBJECT_40_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_40_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
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
pgsql_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto result_handle_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (result_handle_3)
DEFLABEL (result_handle_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define ENVIRONMENT_LABEL_42_3 8
#define DEBUGGING_LABEL_42_2 7
#define OBJECT_42_2 6
#define OBJECT_42_1 5
#define OBJECT_42_0 4
#define FREE_REFERENCES_LABEL_42_0 4
#define NUMBER_OF_LINKER_SECTIONS_42_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_42_4);
      goto set_result_handleB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_result_handleB_3)
DEFLABEL (set_result_handleB_0)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_42_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_42_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_6 7
#define LABEL_43_7 9
#define ENVIRONMENT_LABEL_43_3 17
#define DEBUGGING_LABEL_43_2 16
#define OBJECT_43_3 15
#define OBJECT_43_2 14
#define OBJECT_43_1 13
#define OBJECT_43_0 12
#define FREE_REFERENCE_43_0 11
#define FREE_REFERENCES_LABEL_43_0 10
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_43_4);
      goto resultP_4;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_43_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_43_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (resultP_10)
DEFLABEL (resultP_4)
  INTERRUPT_CHECK (26, LABEL_43_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_43_0]));
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
  Rvl = (current_block [OBJECT_43_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_43_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_6 5
#define LABEL_44_5 7
#define LABEL_44_9 9
#define LABEL_44_10 11
#define LABEL_44_11 13
#define LABEL_44_13 15
#define LABEL_44_14 17
#define LABEL_44_15 19
#define LABEL_44_16 21
#define LABEL_44_17 23
#define LABEL_44_18 25
#define LABEL_44_19 27
#define ENVIRONMENT_LABEL_44_3 54
#define DEBUGGING_LABEL_44_2 53
#define OBJECT_44_17 52
#define OBJECT_44_16 51
#define OBJECT_44_15 50
#define OBJECT_44_14 49
#define OBJECT_44_13 48
#define OBJECT_44_12 47
#define OBJECT_44_11 46
#define OBJECT_44_10 45
#define OBJECT_44_9 44
#define OBJECT_44_8 43
#define OBJECT_44_7 42
#define OBJECT_44_6 41
#define OBJECT_44_5 40
#define OBJECT_44_4 39
#define OBJECT_44_3 38
#define OBJECT_44_2 37
#define OBJECT_44_1 36
#define OBJECT_44_0 35
#define EXECUTE_CACHE_44_12 29
#define EXECUTE_CACHE_44_8 31
#define EXECUTE_CACHE_44_7 33
#define FREE_REFERENCES_LABEL_44_0 28
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd235;
  machine_word Wrd237;
  machine_word Wrd230;
  machine_word Wrd232;
  machine_word Wrd226;
  machine_word Wrd228;
  machine_word Wrd223;
  machine_word Wrd225;
  machine_word Wrd219;
  machine_word Wrd221;
  machine_word Wrd215;
  machine_word Wrd217;
  machine_word Wrd212;
  machine_word Wrd214;
  machine_word Wrd208;
  machine_word Wrd210;
  machine_word Wrd204;
  machine_word Wrd206;
  machine_word Wrd200;
  machine_word Wrd202;
  machine_word Wrd195;
  machine_word Wrd197;
  machine_word Wrd191;
  machine_word Wrd193;
  machine_word Wrd194;
  machine_word Wrd187;
  machine_word Wrd189;
  machine_word Wrd183;
  machine_word Wrd185;
  machine_word Wrd178;
  machine_word Wrd180;
  machine_word Wrd174;
  machine_word Wrd176;
  machine_word Wrd177;
  machine_word Wrd170;
  machine_word Wrd172;
  machine_word Wrd165;
  machine_word Wrd167;
  machine_word Wrd162;
  machine_word Wrd164;
  machine_word Wrd158;
  machine_word Wrd160;
  machine_word Wrd154;
  machine_word Wrd156;
  machine_word Wrd157;
  machine_word Wrd151;
  machine_word Wrd153;
  machine_word Wrd147;
  machine_word Wrd149;
  machine_word Wrd143;
  machine_word Wrd145;
  machine_word Wrd146;
  machine_word Wrd140;
  machine_word Wrd142;
  machine_word Wrd137;
  machine_word Wrd139;
  machine_word Wrd133;
  machine_word Wrd135;
  machine_word Wrd129;
  machine_word Wrd131;
  machine_word Wrd125;
  machine_word Wrd127;
  machine_word Wrd120;
  machine_word Wrd122;
  machine_word Wrd116;
  machine_word Wrd118;
  machine_word Wrd111;
  machine_word Wrd113;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd110;
  machine_word Wrd104;
  machine_word Wrd106;
  machine_word Wrd100;
  machine_word Wrd102;
  machine_word Wrd96;
  machine_word Wrd98;
  machine_word Wrd99;
  machine_word Wrd91;
  machine_word Wrd93;
  machine_word Wrd87;
  machine_word Wrd89;
  machine_word Wrd90;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd81;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd69;
  machine_word Wrd71;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd61;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd28;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_44_4);
      goto lambda_65;

    case 1:
      current_block = (Rpc - LABEL_44_6);
      goto label_67;

    case 2:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_44_9);
      goto label_68;

    case 4:
      current_block = (Rpc - LABEL_44_10);
      goto label_69;

    case 5:
      current_block = (Rpc - LABEL_44_11);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_44_13);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_44_14);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_44_15);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_44_16);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_44_17);
      goto label_70;

    case 11:
      current_block = (Rpc - LABEL_44_18);
      goto label_71;

    case 12:
      current_block = (Rpc - LABEL_44_19);
      goto label_72;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_74)
DEFLABEL (lambda_65)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_87;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_86)
  (Wrd17.Obj) = (current_block [OBJECT_44_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_44_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_75;
  (Wrd28.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd28.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_8]));

DEFLABEL (label_75)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_85;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_84)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_83;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_82)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_44_3]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_44_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_44_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_44_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_44_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_44_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_44_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_44_16);
  (Rsp [4]) = Rvl;
  (Wrd9.Obj) = (Rsp [5]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_81;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_80)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_79;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd15.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_78)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_77;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd22.Obj) = ((Wrd23.pObj) [0]);

DEFLABEL (label_76)
  (Wrd32.Obj) = (current_block [OBJECT_44_8]);
  (Wrd33.Obj) = (current_block [OBJECT_44_9]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd40.Obj) = (current_block [OBJECT_44_10]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Wrd44.Obj) = (current_block [OBJECT_44_11]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (Wrd61.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  (Wrd68.Obj) = (current_block [OBJECT_44_12]);
  (* (Rhp++)) = (Wrd68.Obj);
  (* (Rhp++)) = (Wrd62.Obj);
  (Wrd67.pObj) = (& (Rhp [-2]));
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd67.pObj)));
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd71.pObj) = (& (Rhp [-2]));
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd71.pObj)));
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd69.Obj);
  (Wrd76.pObj) = (& (Rhp [-2]));
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd76.pObj)));
  (Wrd81.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd81.Obj);
  (* (Rhp++)) = (Wrd74.Obj);
  (Wrd80.pObj) = (& (Rhp [-2]));
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd80.pObj)));
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd84.pObj) = (& (Rhp [-2]));
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd84.pObj)));
  (Wrd90.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd90.Obj);
  (* (Rhp++)) = (Wrd82.Obj);
  (Wrd89.pObj) = (& (Rhp [-2]));
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd89.pObj)));
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd93.pObj) = (& (Rhp [-2]));
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd93.pObj)));
  (Wrd99.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd99.Obj);
  (* (Rhp++)) = (Wrd91.Obj);
  (Wrd98.pObj) = (& (Rhp [-2]));
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd98.pObj)));
  (* (Rhp++)) = (Wrd96.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd102.pObj) = (& (Rhp [-2]));
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd102.pObj)));
  (* (Rhp++)) = (Wrd87.Obj);
  (* (Rhp++)) = (Wrd100.Obj);
  (Wrd106.pObj) = (& (Rhp [-2]));
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd106.pObj)));
  (Wrd110.Obj) = (current_block [OBJECT_44_13]);
  (* (Rhp++)) = (Wrd110.Obj);
  (* (Rhp++)) = (Wrd104.Obj);
  (Wrd109.pObj) = (& (Rhp [-2]));
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd109.pObj)));
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd113.pObj) = (& (Rhp [-2]));
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd113.pObj)));
  (* (Rhp++)) = (Wrd99.Obj);
  (* (Rhp++)) = (Wrd111.Obj);
  (Wrd118.pObj) = (& (Rhp [-2]));
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd118.pObj)));
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd122.pObj) = (& (Rhp [-2]));
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd122.pObj)));
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd120.Obj);
  (Wrd127.pObj) = (& (Rhp [-2]));
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd127.pObj)));
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd125.Obj);
  (Wrd131.pObj) = (& (Rhp [-2]));
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd131.pObj)));
  (* (Rhp++)) = (Wrd129.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd135.pObj) = (& (Rhp [-2]));
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd135.pObj)));
  (* (Rhp++)) = (Wrd116.Obj);
  (* (Rhp++)) = (Wrd133.Obj);
  (Wrd139.pObj) = (& (Rhp [-2]));
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd139.pObj)));
  (* (Rhp++)) = (Wrd107.Obj);
  (* (Rhp++)) = (Wrd137.Obj);
  (Wrd142.pObj) = (& (Rhp [-2]));
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd142.pObj)));
  (Wrd146.Obj) = (current_block [OBJECT_44_14]);
  (* (Rhp++)) = (Wrd146.Obj);
  (* (Rhp++)) = (Wrd140.Obj);
  (Wrd145.pObj) = (& (Rhp [-2]));
  (Wrd143.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd145.pObj)));
  (* (Rhp++)) = (Wrd143.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd149.pObj) = (& (Rhp [-2]));
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd149.pObj)));
  (* (Rhp++)) = (Wrd78.Obj);
  (* (Rhp++)) = (Wrd147.Obj);
  (Wrd153.pObj) = (& (Rhp [-2]));
  (Wrd151.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd153.pObj)));
  (Wrd157.Obj) = (current_block [OBJECT_44_15]);
  (* (Rhp++)) = (Wrd157.Obj);
  (* (Rhp++)) = (Wrd151.Obj);
  (Wrd156.pObj) = (& (Rhp [-2]));
  (Wrd154.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd156.pObj)));
  (* (Rhp++)) = (Wrd154.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd160.pObj) = (& (Rhp [-2]));
  (Wrd158.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd160.pObj)));
  (* (Rhp++)) = (Wrd65.Obj);
  (* (Rhp++)) = (Wrd158.Obj);
  (Wrd164.pObj) = (& (Rhp [-2]));
  (Wrd162.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd164.pObj)));
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd167.pObj) = (& (Rhp [-2]));
  (Wrd165.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd167.pObj)));
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd165.Obj);
  (Wrd172.pObj) = (& (Rhp [-2]));
  (Wrd170.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd172.pObj)));
  (Wrd177.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd177.Obj);
  (* (Rhp++)) = (Wrd170.Obj);
  (Wrd176.pObj) = (& (Rhp [-2]));
  (Wrd174.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd176.pObj)));
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd180.pObj) = (& (Rhp [-2]));
  (Wrd178.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd180.pObj)));
  (* (Rhp++)) = (Wrd90.Obj);
  (* (Rhp++)) = (Wrd178.Obj);
  (Wrd185.pObj) = (& (Rhp [-2]));
  (Wrd183.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd185.pObj)));
  (* (Rhp++)) = (Wrd183.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd189.pObj) = (& (Rhp [-2]));
  (Wrd187.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd189.pObj)));
  (Wrd194.Obj) = (current_block [OBJECT_44_16]);
  (* (Rhp++)) = (Wrd194.Obj);
  (* (Rhp++)) = (Wrd187.Obj);
  (Wrd193.pObj) = (& (Rhp [-2]));
  (Wrd191.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd193.pObj)));
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd197.pObj) = (& (Rhp [-2]));
  (Wrd195.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd197.pObj)));
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd195.Obj);
  (Wrd202.pObj) = (& (Rhp [-2]));
  (Wrd200.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd202.pObj)));
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd200.Obj);
  (Wrd206.pObj) = (& (Rhp [-2]));
  (Wrd204.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd206.pObj)));
  (* (Rhp++)) = (Wrd204.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd210.pObj) = (& (Rhp [-2]));
  (Wrd208.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd210.pObj)));
  (* (Rhp++)) = (Wrd191.Obj);
  (* (Rhp++)) = (Wrd208.Obj);
  (Wrd214.pObj) = (& (Rhp [-2]));
  (Wrd212.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd214.pObj)));
  (* (Rhp++)) = (Wrd146.Obj);
  (* (Rhp++)) = (Wrd212.Obj);
  (Wrd217.pObj) = (& (Rhp [-2]));
  (Wrd215.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd217.pObj)));
  (* (Rhp++)) = (Wrd215.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd221.pObj) = (& (Rhp [-2]));
  (Wrd219.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd221.pObj)));
  (* (Rhp++)) = (Wrd174.Obj);
  (* (Rhp++)) = (Wrd219.Obj);
  (Wrd225.pObj) = (& (Rhp [-2]));
  (Wrd223.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd225.pObj)));
  (* (Rhp++)) = (Wrd157.Obj);
  (* (Rhp++)) = (Wrd223.Obj);
  (Wrd228.pObj) = (& (Rhp [-2]));
  (Wrd226.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd228.pObj)));
  (* (Rhp++)) = (Wrd226.Obj);
  (* (Rhp++)) = (Wrd162.Obj);
  (Wrd232.pObj) = (& (Rhp [-2]));
  (Wrd230.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd232.pObj)));
  (Wrd237.Obj) = (current_block [OBJECT_44_17]);
  (* (Rhp++)) = (Wrd237.Obj);
  (* (Rhp++)) = (Wrd230.Obj);
  (Wrd235.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd235.pObj)));
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_77)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_19]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 1);

DEFLABEL (label_72)
  (Wrd22.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_18]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_0]), 1);

DEFLABEL (label_71)
  (Wrd15.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_17]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_0]), 1);

DEFLABEL (label_70)
  (Wrd6.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 1);

DEFLABEL (label_69)
  (* (--Rsp)) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_0]), 1);

DEFLABEL (label_68)
  (Wrd7.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_0]), 1);

DEFLABEL (label_67)
  (* (--Rsp)) = Rvl;
  goto label_86;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define ENVIRONMENT_LABEL_45_3 13
#define DEBUGGING_LABEL_45_2 12
#define OBJECT_45_0 11
#define EXECUTE_CACHE_45_7 7
#define EXECUTE_CACHE_45_6 9
#define FREE_REFERENCES_LABEL_45_0 6
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_45_4);
      goto guarantee_connection_1;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_connection_4)
DEFLABEL (guarantee_connection_1)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_45_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_45_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define ENVIRONMENT_LABEL_46_3 9
#define DEBUGGING_LABEL_46_2 8
#define OBJECT_46_0 7
#define EXECUTE_CACHE_46_5 5
#define FREE_REFERENCES_LABEL_46_0 4
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_46_4);
      goto error_not_connection_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_connection_3)
DEFLABEL (error_not_connection_0)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_46_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_7 7
#define ENVIRONMENT_LABEL_47_3 16
#define DEBUGGING_LABEL_47_2 15
#define OBJECT_47_1 14
#define OBJECT_47_0 13
#define EXECUTE_CACHE_47_8 9
#define EXECUTE_CACHE_47_6 11
#define FREE_REFERENCES_LABEL_47_0 8
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd9;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
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
      goto guarantee_valid_connection_2;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_47_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_valid_connection_6)
DEFLABEL (guarantee_valid_connection_2)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;

DEFLABEL (label_7)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_8]));

DEFLABEL (label_8)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_12;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_12;
  (Wrd9.Obj) = ((Wrd27.pObj) [2]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;

DEFLABEL (label_11)
  (Wrd11.Obj) = (current_block [OBJECT_47_0]);
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 62)
    goto label_10;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 2);

DEFLABEL (label_10)
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd21.Lng))))
    goto label_9;
  Rvl = ((Wrd19.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_47_0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 2);

DEFLABEL (label_4)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define ENVIRONMENT_LABEL_48_3 13
#define DEBUGGING_LABEL_48_2 12
#define OBJECT_48_0 11
#define EXECUTE_CACHE_48_7 7
#define EXECUTE_CACHE_48_6 9
#define FREE_REFERENCES_LABEL_48_0 6
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_48_4);
      goto guarantee_result_1;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_result_4)
DEFLABEL (guarantee_result_1)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_48_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define ENVIRONMENT_LABEL_49_3 9
#define DEBUGGING_LABEL_49_2 8
#define OBJECT_49_0 7
#define EXECUTE_CACHE_49_5 5
#define FREE_REFERENCES_LABEL_49_0 4
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_49_4);
      goto error_not_result_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_result_3)
DEFLABEL (error_not_result_0)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_49_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_7 7
#define ENVIRONMENT_LABEL_50_3 16
#define DEBUGGING_LABEL_50_2 15
#define OBJECT_50_1 14
#define OBJECT_50_0 13
#define EXECUTE_CACHE_50_8 9
#define EXECUTE_CACHE_50_6 11
#define FREE_REFERENCES_LABEL_50_0 8
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd9;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
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
      goto guarantee_valid_result_2;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_50_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_valid_result_6)
DEFLABEL (guarantee_valid_result_2)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;

DEFLABEL (label_7)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_8]));

DEFLABEL (label_8)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_12;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_12;
  (Wrd9.Obj) = ((Wrd27.pObj) [2]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;

DEFLABEL (label_11)
  (Wrd11.Obj) = (current_block [OBJECT_50_0]);
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 62)
    goto label_10;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_10)
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd21.Lng))))
    goto label_9;
  Rvl = ((Wrd19.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_50_0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_4)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define LABEL_51_9 7
#define LABEL_51_10 9
#define LABEL_51_11 11
#define LABEL_51_7 13
#define LABEL_51_12 15
#define LABEL_51_14 17
#define LABEL_51_15 19
#define LABEL_51_16 21
#define LABEL_51_17 23
#define LABEL_51_13 25
#define LABEL_51_19 27
#define LABEL_51_20 29
#define LABEL_51_21 31
#define LABEL_51_22 33
#define LABEL_51_23 35
#define ENVIRONMENT_LABEL_51_3 61
#define DEBUGGING_LABEL_51_2 60
#define OBJECT_51_2 59
#define OBJECT_51_1 58
#define OBJECT_51_0 57
#define EXECUTE_CACHE_51_18 37
#define EXECUTE_CACHE_51_8 39
#define EXECUTE_CACHE_51_6 41
#define FREE_REFERENCE_51_8 44
#define FREE_REFERENCE_51_7 45
#define FREE_REFERENCE_51_6 46
#define FREE_REFERENCE_51_5 47
#define FREE_REFERENCE_51_4 48
#define FREE_REFERENCE_51_3 49
#define FREE_REFERENCE_51_2 50
#define FREE_REFERENCE_51_1 51
#define FREE_REFERENCE_51_0 52
#define FREE_ASSIGNMENT_51_2 54
#define FREE_ASSIGNMENT_51_1 55
#define FREE_ASSIGNMENT_51_0 56
#define FREE_REFERENCES_LABEL_51_0 36
#define NUMBER_OF_LINKER_SECTIONS_51_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd36;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_51_4);
      goto pgsql_availableP_4;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_51_9);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_51_10);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_51_11);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_51_7);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_51_12);
      goto label_6;

    case 7:
      current_block = (Rpc - LABEL_51_14);
      goto label_7;

    case 8:
      current_block = (Rpc - LABEL_51_15);
      goto label_8;

    case 9:
      current_block = (Rpc - LABEL_51_16);
      goto label_9;

    case 10:
      current_block = (Rpc - LABEL_51_17);
      goto label_10;

    case 11:
      current_block = (Rpc - LABEL_51_13);
      goto continuation_2;

    case 12:
      current_block = (Rpc - LABEL_51_19);
      goto label_11;

    case 13:
      current_block = (Rpc - LABEL_51_20);
      goto label_12;

    case 14:
      current_block = (Rpc - LABEL_51_21);
      goto label_13;

    case 15:
      current_block = (Rpc - LABEL_51_22);
      goto label_14;

    case 16:
      current_block = (Rpc - LABEL_51_23);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pgsql_availableP_19)
DEFLABEL (pgsql_availableP_4)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_51_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_51_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_51_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_20;
  Rvl = ((SCHEME_OBJECT) 0);
  goto pop_return;

DEFLABEL (label_20)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_48;
  Wrd7 = Wrd11;

DEFLABEL (label_47)
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_22;

DEFLABEL (label_21)
  Rvl = (current_block [OBJECT_51_2]);
  goto pop_return;

DEFLABEL (label_22)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_1]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_46;
  Wrd18 = Wrd22;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_2]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_44;
  Wrd24 = Wrd28;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_3]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_42;
  Wrd30 = Wrd34;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd37.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_4]));
  (Wrd40.Obj) = ((Wrd37.pObj) [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 50)
    goto label_40;
  Wrd36 = Wrd40;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_18]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_51_13);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_51_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_38;

DEFLABEL (label_37)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_36)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_5]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_35;
  Wrd21 = Wrd25;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_6]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_33;
  Wrd27 = Wrd31;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_7]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_31;
  Wrd33 = Wrd37;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_8]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_29;
  Wrd39 = Wrd43;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_51_9);
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_51_0]));
  (Wrd52.Obj) = ((Wrd44.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  ((Wrd44.pObj) [0]) = Rvl;

DEFLABEL (label_25)
  (Wrd56.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_51_1]));
  (Wrd57.Obj) = (current_block [OBJECT_51_2]);
  (Wrd64.Obj) = ((Wrd56.pObj) [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd65.uLng) == 50)
    goto label_24;

DEFLABEL (label_23)
  ((Wrd56.pObj) [0]) = (Wrd57.Obj);
  goto label_21;

DEFLABEL (label_24)
  if ((Wrd64.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_23;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_51_11])), (Wrd56.pObj), (Wrd57.Obj));

DEFLABEL (label_17)
  goto label_21;

DEFLABEL (label_27)
  if ((Wrd52.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_26;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_51_10])), (Wrd44.pObj), Rvl);

DEFLABEL (label_16)
  goto label_25;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_23])), (Wrd40.pObj));

DEFLABEL (label_15)
  (Wrd39.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_22])), (Wrd34.pObj));

DEFLABEL (label_14)
  (Wrd33.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_21])), (Wrd28.pObj));

DEFLABEL (label_13)
  (Wrd27.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_20])), (Wrd22.pObj));

DEFLABEL (label_12)
  (Wrd21.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_38)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_37;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_51_19])), (Wrd6.pObj), Rvl);

DEFLABEL (label_11)
  goto label_36;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_17])), (Wrd37.pObj));

DEFLABEL (label_10)
  (Wrd36.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_16])), (Wrd31.pObj));

DEFLABEL (label_9)
  (Wrd30.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_15])), (Wrd25.pObj));

DEFLABEL (label_8)
  (Wrd24.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_14])), (Wrd19.pObj));

DEFLABEL (label_7)
  (Wrd18.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_12])), (Wrd8.pObj));

DEFLABEL (label_6)
  (Wrd7.Obj) = Rvl;
  goto label_47;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define ENVIRONMENT_LABEL_52_3 14
#define DEBUGGING_LABEL_52_2 13
#define OBJECT_52_1 12
#define OBJECT_52_0 11
#define EXECUTE_CACHE_52_7 7
#define EXECUTE_CACHE_52_6 9
#define FREE_REFERENCES_LABEL_52_0 6
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_52_4);
      goto guarantee_pgsql_available_1;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_pgsql_available_4)
DEFLABEL (guarantee_pgsql_available_1)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_52_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_52_1]);
  goto pop_return;

DEFLABEL (label_5)
  (Wrd8.Obj) = (current_block [OBJECT_52_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define ENVIRONMENT_LABEL_53_3 9
#define DEBUGGING_LABEL_53_2 8
#define OBJECT_53_0 7
#define EXECUTE_CACHE_53_5 5
#define FREE_REFERENCES_LABEL_53_0 4
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_53_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd5.Obj) = (current_block [OBJECT_53_0]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define LABEL_54_7 7
#define ENVIRONMENT_LABEL_54_3 18
#define DEBUGGING_LABEL_54_2 17
#define OBJECT_54_1 16
#define OBJECT_54_0 15
#define EXECUTE_CACHE_54_9 9
#define EXECUTE_CACHE_54_8 11
#define EXECUTE_CACHE_54_6 13
#define FREE_REFERENCES_LABEL_54_0 8
#define NUMBER_OF_LINKER_SECTIONS_54_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_54_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_54_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_54_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_54_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define LABEL_55_7 7
#define LABEL_55_8 9
#define ENVIRONMENT_LABEL_55_3 22
#define DEBUGGING_LABEL_55_2 21
#define OBJECT_55_1 20
#define OBJECT_55_0 19
#define EXECUTE_CACHE_55_11 11
#define EXECUTE_CACHE_55_10 13
#define EXECUTE_CACHE_55_9 15
#define EXECUTE_CACHE_55_6 17
#define FREE_REFERENCES_LABEL_55_0 10
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_55_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_55_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_55_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_55_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_55_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_55_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_55_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_55_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_6 5
#define LABEL_56_7 7
#define LABEL_56_9 9
#define LABEL_56_11 11
#define ENVIRONMENT_LABEL_56_3 29
#define DEBUGGING_LABEL_56_2 28
#define OBJECT_56_4 27
#define OBJECT_56_3 26
#define OBJECT_56_2 25
#define OBJECT_56_1 24
#define OBJECT_56_0 23
#define EXECUTE_CACHE_56_13 13
#define EXECUTE_CACHE_56_12 15
#define EXECUTE_CACHE_56_10 17
#define EXECUTE_CACHE_56_8 19
#define EXECUTE_CACHE_56_5 21
#define FREE_REFERENCES_LABEL_56_0 12
#define NUMBER_OF_LINKER_SECTIONS_56_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_56_4);
      goto write_message_5;

    case 1:
      current_block = (Rpc - LABEL_56_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_56_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_56_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_56_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_message_8)
DEFLABEL (write_message_5)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_9;
  (Wrd12.Obj) = (current_block [OBJECT_56_0]);
  (Rsp [0]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_5]));

DEFLABEL (label_9)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_56_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_5]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_56_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_56_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_56_3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_56_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_5]));

DEFLABEL (label_10)
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (current_block [OBJECT_56_4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_56_9);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_56_4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_56_11);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_13]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define LABEL_57_10 7
#define LABEL_57_7 9
#define TAG_57_8 3
#define LABEL_57_9 11
#define LABEL_57_12 13
#define LABEL_57_14 15
#define LABEL_57_13 17
#define LABEL_57_16 19
#define LABEL_57_17 21
#define LABEL_57_19 23
#define LABEL_57_20 25
#define ENVIRONMENT_LABEL_57_3 46
#define DEBUGGING_LABEL_57_2 45
#define OBJECT_57_6 44
#define OBJECT_57_5 43
#define OBJECT_57_4 42
#define OBJECT_57_3 41
#define OBJECT_57_2 40
#define OBJECT_57_1 39
#define OBJECT_57_0 38
#define EXECUTE_CACHE_57_18 27
#define EXECUTE_CACHE_57_15 29
#define EXECUTE_CACHE_57_11 31
#define EXECUTE_CACHE_57_6 33
#define FREE_REFERENCE_57_1 36
#define FREE_REFERENCE_57_0 37
#define FREE_REFERENCES_LABEL_57_0 26
#define NUMBER_OF_LINKER_SECTIONS_57_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_57_4);
      goto open_pgsql_conn_13;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_57_10);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_57_7);
      goto lambda_21;

    case 4:
      current_block = (Rpc - LABEL_57_9);
      goto lambda_11;

    case 5:
      current_block = (Rpc - LABEL_57_12);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_57_14);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_57_13);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_57_16);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_57_17);
      goto label_18;

    case 10:
      current_block = (Rpc - LABEL_57_19);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_57_20);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_pgsql_conn_20)
DEFLABEL (open_pgsql_conn_13)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_57_5);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_57_0]))
    goto label_24;
  (* (--Rsp)) = (Wrd5.Obj);
  goto label_23;

DEFLABEL (label_24)
  (Wrd24.Obj) = (current_block [OBJECT_57_1]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_23)
DEFLABEL (label_27)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_57_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_57_7])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  (Wrd14.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_9]))));
  (Rsp [2]) = (Wrd15.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_26;
  Wrd18 = Wrd22;

DEFLABEL (label_25)
  (Rsp [0]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_11]));

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_10])), (Wrd19.pObj));

DEFLABEL (label_15)
  (Wrd18.Obj) = Rvl;
  goto label_25;

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_57_7);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd9.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [0]) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_3]), 2);

DEFLABEL (label_28)
  (Wrd12.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [0]) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_2]), 2);

DEFLABEL (lambda_22)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_57_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_36;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd21.Lng) == 0)
    goto label_35;

DEFLABEL (label_34)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_13]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_4]), 1);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_57_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_33;
  Wrd6 = Wrd10;

DEFLABEL (label_32)
  Wrd5 = Wrd6;
  (Wrd12.Obj) = (* (Rsp++));
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_31;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_31;
  if ((Wrd6.Obj) == (Wrd12.Obj))
    goto label_30;

DEFLABEL (label_29)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_18]));

DEFLABEL (label_30)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_19]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_5]), 1);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_57_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_6]), 1);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_57_20);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_15]));

DEFLABEL (label_31)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_17]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_16])), (Wrd7.pObj));

DEFLABEL (label_17)
  (Wrd6.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_14]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_57_14);
  goto label_29;

DEFLABEL (label_36)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_16)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_35;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define ENVIRONMENT_LABEL_58_3 12
#define DEBUGGING_LABEL_58_2 11
#define EXECUTE_CACHE_58_6 7
#define FREE_REFERENCE_58_0 10
#define FREE_REFERENCES_LABEL_58_0 6
#define NUMBER_OF_LINKER_SECTIONS_58_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_58_4);
      goto close_pgsql_conn_0;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (close_pgsql_conn_4)
DEFLABEL (close_pgsql_conn_0)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define TAG_59_6 1
#define LABEL_59_7 7
#define TAG_59_8 2
#define LABEL_59_9 9
#define TAG_59_10 3
#define LABEL_59_12 11
#define LABEL_59_14 13
#define ENVIRONMENT_LABEL_59_3 23
#define DEBUGGING_LABEL_59_2 22
#define OBJECT_59_0 21
#define EXECUTE_CACHE_59_15 15
#define EXECUTE_CACHE_59_13 17
#define EXECUTE_CACHE_59_11 19
#define FREE_REFERENCES_LABEL_59_0 14
#define NUMBER_OF_LINKER_SECTIONS_59_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd10;
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
      goto call_with_pgsql_conn_6;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_59_7);
      goto lambda_11;

    case 3:
      current_block = (Rpc - LABEL_59_9);
      goto lambda_12;

    case 4:
      current_block = (Rpc - LABEL_59_12);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_59_14);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_with_pgsql_conn_9)
DEFLABEL (call_with_pgsql_conn_6)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_59_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_59_5])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  (Wrd17.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  ((Wrd16.pObj) [3]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_59_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_59_7])));
  Rhp += 2;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd23 = Wrd20;
  (Wrd24.Obj) = (Rsp [2]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  ((Wrd23.pObj) [3]) = (Wrd7.Obj);
  (Rsp [1]) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_59_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_59_9])));
  Rhp += 1;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  ((Wrd27.pObj) [2]) = (Wrd7.Obj);
  (Rsp [2]) = (Wrd26.Obj);
  (Rsp [0]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_11]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_59_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_59_12);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  ((Wrd9.pObj) [0]) = Rvl;
  Rvl = (current_block [OBJECT_59_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_59_7);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd12.pObj) [0]);
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_59_9);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_59_14);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd11.Obj) = (MAKE_OBJECT (50, 0));
  ((Wrd8.pObj) [0]) = (Wrd11.Obj);
  Rvl = (current_block [OBJECT_59_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_7 5
#define LABEL_60_5 7
#define LABEL_60_9 9
#define ENVIRONMENT_LABEL_60_3 20
#define DEBUGGING_LABEL_60_2 19
#define OBJECT_60_3 18
#define OBJECT_60_2 17
#define OBJECT_60_1 16
#define OBJECT_60_0 15
#define EXECUTE_CACHE_60_8 11
#define EXECUTE_CACHE_60_6 13
#define FREE_REFERENCES_LABEL_60_0 10
#define NUMBER_OF_LINKER_SECTIONS_60_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
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
      goto pgsql_conn_openP_3;

    case 1:
      current_block = (Rpc - LABEL_60_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_60_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_60_9);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pgsql_conn_openP_7)
DEFLABEL (pgsql_conn_openP_3)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_60_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_7]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_60_0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_60_7);

DEFLABEL (label_13)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_12;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_12;
  (Wrd9.Obj) = ((Wrd18.pObj) [2]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_60_3]);
  goto label_8;

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_8)
DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_60_1]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_2]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define LABEL_61_7 7
#define ENVIRONMENT_LABEL_61_3 17
#define DEBUGGING_LABEL_61_2 16
#define OBJECT_61_2 15
#define OBJECT_61_1 14
#define OBJECT_61_0 13
#define EXECUTE_CACHE_61_8 9
#define EXECUTE_CACHE_61_6 11
#define FREE_REFERENCES_LABEL_61_0 8
#define NUMBER_OF_LINKER_SECTIONS_61_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd9;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
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
      goto connection__handle_2;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_61_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (connection__handle_6)
DEFLABEL (connection__handle_2)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_61_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;

DEFLABEL (label_7)
  (Wrd11.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_61_2]);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_8]));

DEFLABEL (label_8)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_12;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_12;
  (Wrd9.Obj) = ((Wrd30.pObj) [2]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;

DEFLABEL (label_11)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_61_0]);
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd26.uLng) == 62)
    goto label_10;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 2);

DEFLABEL (label_10)
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd24.Lng))))
    goto label_9;
  Rvl = ((Wrd22.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_61_0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 2);

DEFLABEL (label_4)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_5 5
#define LABEL_62_9 7
#define LABEL_62_7 9
#define LABEL_62_11 11
#define LABEL_62_13 13
#define LABEL_62_6 15
#define ENVIRONMENT_LABEL_62_3 30
#define DEBUGGING_LABEL_62_2 29
#define OBJECT_62_3 28
#define OBJECT_62_2 27
#define OBJECT_62_1 26
#define OBJECT_62_0 25
#define EXECUTE_CACHE_62_12 17
#define EXECUTE_CACHE_62_10 19
#define EXECUTE_CACHE_62_8 21
#define FREE_REFERENCE_62_0 24
#define FREE_REFERENCES_LABEL_62_0 16
#define NUMBER_OF_LINKER_SECTIONS_62_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd9;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_62_4);
      goto poll_pgsql_conn_4;

    case 1:
      current_block = (Rpc - LABEL_62_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_62_9);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_62_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_62_11);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_62_13);
      goto label_7;

    case 6:
      current_block = (Rpc - LABEL_62_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (poll_pgsql_conn_10)
DEFLABEL (poll_pgsql_conn_4)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_62_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;

DEFLABEL (label_14)
  (Wrd11.Obj) = (current_block [OBJECT_62_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_62_6);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_13)
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_3]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_62_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_12;
  Wrd6 = Wrd10;

DEFLABEL (label_11)
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_10]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62_9])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_15)
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_19;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_19;
  (Wrd9.Obj) = ((Wrd33.pObj) [2]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;

DEFLABEL (label_18)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_17;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_17;
  (Wrd14.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_16)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd14.Obj);
  goto label_13;

DEFLABEL (label_17)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (current_block [OBJECT_62_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_13]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

DEFLABEL (label_7)
  (Wrd14.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.Obj) = (current_block [OBJECT_62_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_11]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define LABEL_63_9 7
#define LABEL_63_7 9
#define LABEL_63_11 11
#define LABEL_63_13 13
#define LABEL_63_6 15
#define ENVIRONMENT_LABEL_63_3 30
#define DEBUGGING_LABEL_63_2 29
#define OBJECT_63_3 28
#define OBJECT_63_2 27
#define OBJECT_63_1 26
#define OBJECT_63_0 25
#define EXECUTE_CACHE_63_12 17
#define EXECUTE_CACHE_63_10 19
#define EXECUTE_CACHE_63_8 21
#define FREE_REFERENCE_63_0 24
#define FREE_REFERENCES_LABEL_63_0 16
#define NUMBER_OF_LINKER_SECTIONS_63_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd9;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_63_4);
      goto poll_pgsql_reset_4;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_63_9);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_63_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_63_11);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_63_13);
      goto label_7;

    case 6:
      current_block = (Rpc - LABEL_63_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (poll_pgsql_reset_10)
DEFLABEL (poll_pgsql_reset_4)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_63_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;

DEFLABEL (label_14)
  (Wrd11.Obj) = (current_block [OBJECT_63_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_63_6);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_13)
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_3]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_63_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_12;
  Wrd6 = Wrd10;

DEFLABEL (label_11)
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_10]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_9])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_15)
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_19;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_19;
  (Wrd9.Obj) = ((Wrd33.pObj) [2]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;

DEFLABEL (label_18)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_17;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_17;
  (Wrd14.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_16)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd14.Obj);
  goto label_13;

DEFLABEL (label_17)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (current_block [OBJECT_63_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_13]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_1]), 2);

DEFLABEL (label_7)
  (Wrd14.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.Obj) = (current_block [OBJECT_63_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_11]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_1]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_6 5
#define LABEL_64_5 7
#define LABEL_64_9 9
#define LABEL_64_10 11
#define LABEL_64_11 13
#define LABEL_64_13 15
#define ENVIRONMENT_LABEL_64_3 33
#define DEBUGGING_LABEL_64_2 32
#define OBJECT_64_8 31
#define OBJECT_64_7 30
#define OBJECT_64_6 29
#define OBJECT_64_5 28
#define OBJECT_64_4 27
#define OBJECT_64_3 26
#define OBJECT_64_2 25
#define OBJECT_64_1 24
#define OBJECT_64_0 23
#define EXECUTE_CACHE_64_12 17
#define EXECUTE_CACHE_64_8 19
#define EXECUTE_CACHE_64_7 21
#define FREE_REFERENCES_LABEL_64_0 16
#define NUMBER_OF_LINKER_SECTIONS_64_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd29;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_64_4);
      goto lambda_13;

    case 1:
      current_block = (Rpc - LABEL_64_6);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_64_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_64_9);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_64_10);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_64_11);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_64_13);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_19)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_26;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_25)
  (Wrd17.Obj) = (current_block [OBJECT_64_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_64_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_20;
  (Wrd29.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd29.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_8]));

DEFLABEL (label_20)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_24;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_23)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_22;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_21)
  (Rsp [1]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_64_3]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_64_11);
  (Wrd8.Obj) = (current_block [OBJECT_64_4]);
  (Wrd9.Obj) = (current_block [OBJECT_64_5]);
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
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_64_6]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_64_13);
  (Wrd8.Obj) = (current_block [OBJECT_64_7]);
  (Wrd9.Obj) = (current_block [OBJECT_64_5]);
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
  (Wrd22.Obj) = (current_block [OBJECT_64_8]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_2]), 1);

DEFLABEL (label_17)
  (Wrd16.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_0]), 1);

DEFLABEL (label_16)
  (Wrd7.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_0]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_6 5
#define LABEL_65_8 7
#define LABEL_65_10 9
#define LABEL_65_5 11
#define ENVIRONMENT_LABEL_65_3 22
#define DEBUGGING_LABEL_65_2 21
#define OBJECT_65_3 20
#define OBJECT_65_2 19
#define OBJECT_65_1 18
#define OBJECT_65_0 17
#define EXECUTE_CACHE_65_9 13
#define EXECUTE_CACHE_65_7 15
#define FREE_REFERENCES_LABEL_65_0 12
#define NUMBER_OF_LINKER_SECTIONS_65_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
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
      goto pgsql_conn_db_3;

    case 1:
      current_block = (Rpc - LABEL_65_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_65_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_65_10);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_65_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pgsql_conn_db_8)
DEFLABEL (pgsql_conn_db_3)
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
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  (Wrd12.Obj) = (current_block [OBJECT_65_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_65_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 1);

DEFLABEL (label_11)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_15;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_15;
  (Wrd10.Obj) = ((Wrd33.pObj) [2]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_14)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_13;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_13;
  (Wrd5.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto label_9;

DEFLABEL (label_13)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_65_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_65_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_6 5
#define LABEL_66_8 7
#define LABEL_66_10 9
#define LABEL_66_5 11
#define ENVIRONMENT_LABEL_66_3 22
#define DEBUGGING_LABEL_66_2 21
#define OBJECT_66_3 20
#define OBJECT_66_2 19
#define OBJECT_66_1 18
#define OBJECT_66_0 17
#define EXECUTE_CACHE_66_9 13
#define EXECUTE_CACHE_66_7 15
#define FREE_REFERENCES_LABEL_66_0 12
#define NUMBER_OF_LINKER_SECTIONS_66_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_66_4);
      goto pgsql_conn_user_3;

    case 1:
      current_block = (Rpc - LABEL_66_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_66_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_66_10);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_66_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pgsql_conn_user_8)
DEFLABEL (pgsql_conn_user_3)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_66_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  (Wrd12.Obj) = (current_block [OBJECT_66_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_66_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_3]), 1);

DEFLABEL (label_11)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_15;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_15;
  (Wrd10.Obj) = ((Wrd33.pObj) [2]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_14)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_13;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_13;
  (Wrd5.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto label_9;

DEFLABEL (label_13)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_66_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_66_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_6 5
#define LABEL_67_8 7
#define LABEL_67_10 9
#define LABEL_67_5 11
#define ENVIRONMENT_LABEL_67_3 22
#define DEBUGGING_LABEL_67_2 21
#define OBJECT_67_3 20
#define OBJECT_67_2 19
#define OBJECT_67_1 18
#define OBJECT_67_0 17
#define EXECUTE_CACHE_67_9 13
#define EXECUTE_CACHE_67_7 15
#define FREE_REFERENCES_LABEL_67_0 12
#define NUMBER_OF_LINKER_SECTIONS_67_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_67_4);
      goto pgsql_conn_pass_3;

    case 1:
      current_block = (Rpc - LABEL_67_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_67_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_67_10);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_67_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pgsql_conn_pass_8)
DEFLABEL (pgsql_conn_pass_3)
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
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  (Wrd12.Obj) = (current_block [OBJECT_67_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_67_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_3]), 1);

DEFLABEL (label_11)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_15;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_15;
  (Wrd10.Obj) = ((Wrd33.pObj) [2]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_14)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_13;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_13;
  (Wrd5.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto label_9;

DEFLABEL (label_13)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_67_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_67_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_6 5
#define LABEL_68_8 7
#define LABEL_68_10 9
#define LABEL_68_5 11
#define ENVIRONMENT_LABEL_68_3 22
#define DEBUGGING_LABEL_68_2 21
#define OBJECT_68_3 20
#define OBJECT_68_2 19
#define OBJECT_68_1 18
#define OBJECT_68_0 17
#define EXECUTE_CACHE_68_9 13
#define EXECUTE_CACHE_68_7 15
#define FREE_REFERENCES_LABEL_68_0 12
#define NUMBER_OF_LINKER_SECTIONS_68_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_68_4);
      goto pgsql_conn_host_3;

    case 1:
      current_block = (Rpc - LABEL_68_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_68_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_68_10);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_68_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pgsql_conn_host_8)
DEFLABEL (pgsql_conn_host_3)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_68_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  (Wrd12.Obj) = (current_block [OBJECT_68_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_68_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_3]), 1);

DEFLABEL (label_11)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_15;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_15;
  (Wrd10.Obj) = ((Wrd33.pObj) [2]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_14)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_13;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_13;
  (Wrd5.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto label_9;

DEFLABEL (label_13)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_68_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_68_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_6 5
#define LABEL_69_8 7
#define LABEL_69_10 9
#define LABEL_69_5 11
#define ENVIRONMENT_LABEL_69_3 22
#define DEBUGGING_LABEL_69_2 21
#define OBJECT_69_3 20
#define OBJECT_69_2 19
#define OBJECT_69_1 18
#define OBJECT_69_0 17
#define EXECUTE_CACHE_69_9 13
#define EXECUTE_CACHE_69_7 15
#define FREE_REFERENCES_LABEL_69_0 12
#define NUMBER_OF_LINKER_SECTIONS_69_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_69_4);
      goto pgsql_conn_port_3;

    case 1:
      current_block = (Rpc - LABEL_69_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_69_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_69_10);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_69_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pgsql_conn_port_8)
DEFLABEL (pgsql_conn_port_3)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_69_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  (Wrd12.Obj) = (current_block [OBJECT_69_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_69_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_3]), 1);

DEFLABEL (label_11)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_15;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_15;
  (Wrd10.Obj) = ((Wrd33.pObj) [2]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_14)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_13;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_13;
  (Wrd5.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto label_9;

DEFLABEL (label_13)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_69_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_69_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_6 5
#define LABEL_70_8 7
#define LABEL_70_10 9
#define LABEL_70_5 11
#define ENVIRONMENT_LABEL_70_3 22
#define DEBUGGING_LABEL_70_2 21
#define OBJECT_70_3 20
#define OBJECT_70_2 19
#define OBJECT_70_1 18
#define OBJECT_70_0 17
#define EXECUTE_CACHE_70_9 13
#define EXECUTE_CACHE_70_7 15
#define FREE_REFERENCES_LABEL_70_0 12
#define NUMBER_OF_LINKER_SECTIONS_70_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_70_4);
      goto pgsql_conn_tty_3;

    case 1:
      current_block = (Rpc - LABEL_70_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_70_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_70_10);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_70_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pgsql_conn_tty_8)
DEFLABEL (pgsql_conn_tty_3)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_70_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  (Wrd12.Obj) = (current_block [OBJECT_70_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_70_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_3]), 1);

DEFLABEL (label_11)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_15;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_15;
  (Wrd10.Obj) = ((Wrd33.pObj) [2]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_14)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_13;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_13;
  (Wrd5.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto label_9;

DEFLABEL (label_13)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_70_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_70_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_6 5
#define LABEL_71_8 7
#define LABEL_71_10 9
#define LABEL_71_5 11
#define ENVIRONMENT_LABEL_71_3 22
#define DEBUGGING_LABEL_71_2 21
#define OBJECT_71_3 20
#define OBJECT_71_2 19
#define OBJECT_71_1 18
#define OBJECT_71_0 17
#define EXECUTE_CACHE_71_9 13
#define EXECUTE_CACHE_71_7 15
#define FREE_REFERENCES_LABEL_71_0 12
#define NUMBER_OF_LINKER_SECTIONS_71_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_71_4);
      goto pgsql_conn_options_3;

    case 1:
      current_block = (Rpc - LABEL_71_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_71_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_71_10);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_71_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pgsql_conn_options_8)
DEFLABEL (pgsql_conn_options_3)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_71_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  (Wrd12.Obj) = (current_block [OBJECT_71_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_71_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_3]), 1);

DEFLABEL (label_11)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_15;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_15;
  (Wrd10.Obj) = ((Wrd33.pObj) [2]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_14)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_13;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_13;
  (Wrd5.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto label_9;

DEFLABEL (label_13)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_71_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_71_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define LABEL_72_6 5
#define LABEL_72_8 7
#define LABEL_72_10 9
#define LABEL_72_5 11
#define ENVIRONMENT_LABEL_72_3 22
#define DEBUGGING_LABEL_72_2 21
#define OBJECT_72_3 20
#define OBJECT_72_2 19
#define OBJECT_72_1 18
#define OBJECT_72_0 17
#define EXECUTE_CACHE_72_9 13
#define EXECUTE_CACHE_72_7 15
#define FREE_REFERENCES_LABEL_72_0 12
#define NUMBER_OF_LINKER_SECTIONS_72_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_72_4);
      goto pgsql_conn_reset_3;

    case 1:
      current_block = (Rpc - LABEL_72_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_72_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_72_10);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_72_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pgsql_conn_reset_8)
DEFLABEL (pgsql_conn_reset_3)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_72_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  (Wrd12.Obj) = (current_block [OBJECT_72_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_72_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_3]), 1);

DEFLABEL (label_11)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_15;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_15;
  (Wrd10.Obj) = ((Wrd33.pObj) [2]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_14)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_13;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_13;
  (Wrd5.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto label_9;

DEFLABEL (label_13)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_72_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_72_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define LABEL_73_6 5
#define LABEL_73_8 7
#define LABEL_73_10 9
#define LABEL_73_5 11
#define ENVIRONMENT_LABEL_73_3 22
#define DEBUGGING_LABEL_73_2 21
#define OBJECT_73_3 20
#define OBJECT_73_2 19
#define OBJECT_73_1 18
#define OBJECT_73_0 17
#define EXECUTE_CACHE_73_9 13
#define EXECUTE_CACHE_73_7 15
#define FREE_REFERENCES_LABEL_73_0 12
#define NUMBER_OF_LINKER_SECTIONS_73_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_73_4);
      goto pgsql_conn_reset_start_3;

    case 1:
      current_block = (Rpc - LABEL_73_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_73_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_73_10);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_73_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pgsql_conn_reset_start_8)
DEFLABEL (pgsql_conn_reset_start_3)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_73_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  (Wrd12.Obj) = (current_block [OBJECT_73_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_73_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_3]), 1);

DEFLABEL (label_11)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_15;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_15;
  (Wrd10.Obj) = ((Wrd33.pObj) [2]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_14)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_13;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_13;
  (Wrd5.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto label_9;

DEFLABEL (label_13)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_73_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_73_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define LABEL_74_6 5
#define LABEL_74_8 7
#define LABEL_74_10 9
#define LABEL_74_5 11
#define ENVIRONMENT_LABEL_74_3 22
#define DEBUGGING_LABEL_74_2 21
#define OBJECT_74_3 20
#define OBJECT_74_2 19
#define OBJECT_74_1 18
#define OBJECT_74_0 17
#define EXECUTE_CACHE_74_9 13
#define EXECUTE_CACHE_74_7 15
#define FREE_REFERENCES_LABEL_74_0 12
#define NUMBER_OF_LINKER_SECTIONS_74_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_74_4);
      goto pgsql_conn_error_message_3;

    case 1:
      current_block = (Rpc - LABEL_74_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_74_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_74_10);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_74_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pgsql_conn_error_message_8)
DEFLABEL (pgsql_conn_error_message_3)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_74_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  (Wrd12.Obj) = (current_block [OBJECT_74_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_74_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_3]), 1);

DEFLABEL (label_11)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_15;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_15;
  (Wrd10.Obj) = ((Wrd33.pObj) [2]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_14)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_13;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_13;
  (Wrd5.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto label_9;

DEFLABEL (label_13)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_74_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_74_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define LABEL_75_5 5
#define LABEL_75_9 7
#define LABEL_75_7 9
#define LABEL_75_11 11
#define LABEL_75_13 13
#define LABEL_75_6 15
#define ENVIRONMENT_LABEL_75_3 30
#define DEBUGGING_LABEL_75_2 29
#define OBJECT_75_3 28
#define OBJECT_75_2 27
#define OBJECT_75_1 26
#define OBJECT_75_0 25
#define EXECUTE_CACHE_75_12 17
#define EXECUTE_CACHE_75_10 19
#define EXECUTE_CACHE_75_8 21
#define FREE_REFERENCE_75_0 24
#define FREE_REFERENCES_LABEL_75_0 16
#define NUMBER_OF_LINKER_SECTIONS_75_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd9;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_75_4);
      goto pgsql_conn_status_4;

    case 1:
      current_block = (Rpc - LABEL_75_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_75_9);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_75_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_75_11);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_75_13);
      goto label_7;

    case 6:
      current_block = (Rpc - LABEL_75_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pgsql_conn_status_10)
DEFLABEL (pgsql_conn_status_4)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_75_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;

DEFLABEL (label_14)
  (Wrd11.Obj) = (current_block [OBJECT_75_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_75_6);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_13)
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_3]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_75_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_75_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_12;
  Wrd6 = Wrd10;

DEFLABEL (label_11)
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_10]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75_9])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_15)
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_19;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_19;
  (Wrd9.Obj) = ((Wrd33.pObj) [2]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;

DEFLABEL (label_18)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_17;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_17;
  (Wrd14.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_16)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd14.Obj);
  goto label_13;

DEFLABEL (label_17)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (current_block [OBJECT_75_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_13]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_7)
  (Wrd14.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.Obj) = (current_block [OBJECT_75_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_11]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define LABEL_76_6 5
#define LABEL_76_8 7
#define LABEL_76_10 9
#define LABEL_76_5 11
#define ENVIRONMENT_LABEL_76_3 22
#define DEBUGGING_LABEL_76_2 21
#define OBJECT_76_3 20
#define OBJECT_76_2 19
#define OBJECT_76_1 18
#define OBJECT_76_0 17
#define EXECUTE_CACHE_76_9 13
#define EXECUTE_CACHE_76_7 15
#define FREE_REFERENCES_LABEL_76_0 12
#define NUMBER_OF_LINKER_SECTIONS_76_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_76_4);
      goto pgsql_get_line_3;

    case 1:
      current_block = (Rpc - LABEL_76_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_76_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_76_10);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_76_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pgsql_get_line_8)
DEFLABEL (pgsql_get_line_3)
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
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  (Wrd12.Obj) = (current_block [OBJECT_76_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_76_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_3]), 2);

DEFLABEL (label_11)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_15;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_15;
  (Wrd10.Obj) = ((Wrd33.pObj) [2]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_14)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_13;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_13;
  (Wrd5.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto label_9;

DEFLABEL (label_13)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_76_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_76_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define LABEL_77_6 5
#define LABEL_77_8 7
#define LABEL_77_10 9
#define LABEL_77_5 11
#define ENVIRONMENT_LABEL_77_3 22
#define DEBUGGING_LABEL_77_2 21
#define OBJECT_77_3 20
#define OBJECT_77_2 19
#define OBJECT_77_1 18
#define OBJECT_77_0 17
#define EXECUTE_CACHE_77_9 13
#define EXECUTE_CACHE_77_7 15
#define FREE_REFERENCES_LABEL_77_0 12
#define NUMBER_OF_LINKER_SECTIONS_77_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_77_4);
      goto pgsql_put_line_3;

    case 1:
      current_block = (Rpc - LABEL_77_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_77_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_77_10);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_77_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pgsql_put_line_8)
DEFLABEL (pgsql_put_line_3)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_77_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  (Wrd12.Obj) = (current_block [OBJECT_77_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_77_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_3]), 2);

DEFLABEL (label_11)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_15;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_15;
  (Wrd10.Obj) = ((Wrd33.pObj) [2]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_14)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_13;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_13;
  (Wrd5.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto label_9;

DEFLABEL (label_13)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_77_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_77_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define LABEL_78_6 5
#define LABEL_78_8 7
#define LABEL_78_10 9
#define LABEL_78_5 11
#define ENVIRONMENT_LABEL_78_3 22
#define DEBUGGING_LABEL_78_2 21
#define OBJECT_78_3 20
#define OBJECT_78_2 19
#define OBJECT_78_1 18
#define OBJECT_78_0 17
#define EXECUTE_CACHE_78_9 13
#define EXECUTE_CACHE_78_7 15
#define FREE_REFERENCES_LABEL_78_0 12
#define NUMBER_OF_LINKER_SECTIONS_78_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_78_4);
      goto pgsql_end_copy_3;

    case 1:
      current_block = (Rpc - LABEL_78_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_78_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_78_10);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_78_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pgsql_end_copy_8)
DEFLABEL (pgsql_end_copy_3)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_78_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  (Wrd12.Obj) = (current_block [OBJECT_78_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_78_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_3]), 1);

DEFLABEL (label_11)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_15;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_15;
  (Wrd10.Obj) = ((Wrd33.pObj) [2]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_14)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_13;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_13;
  (Wrd5.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto label_9;

DEFLABEL (label_13)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_78_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_78_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define LABEL_79_5 5
#define LABEL_79_8 7
#define LABEL_79_7 9
#define LABEL_79_9 11
#define ENVIRONMENT_LABEL_79_3 21
#define DEBUGGING_LABEL_79_2 20
#define OBJECT_79_2 19
#define OBJECT_79_1 18
#define OBJECT_79_0 17
#define EXECUTE_CACHE_79_10 13
#define EXECUTE_CACHE_79_6 15
#define FREE_REFERENCES_LABEL_79_0 12
#define NUMBER_OF_LINKER_SECTIONS_79_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
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
      goto escape_pgsql_string_6;

    case 1:
      current_block = (Rpc - LABEL_79_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_79_8);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_79_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_79_9);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (escape_pgsql_string_10)
DEFLABEL (escape_pgsql_string_6)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_79_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 30))
    goto label_12;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (Wrd8.Obj) = (MAKE_OBJECT (26, (Wrd12.uLng)));

DEFLABEL (label_11)
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd22.Lng) = (LEFT_SHIFT ((Wrd21.Lng), 1));
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd22.Lng));
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_79_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_2]), 2);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_79_9);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_10]));

DEFLABEL (label_12)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_0]), 1);

DEFLABEL (label_8)
  (Wrd8.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define LABEL_80_5 5
#define ENVIRONMENT_LABEL_80_3 11
#define DEBUGGING_LABEL_80_2 10
#define OBJECT_80_0 9
#define EXECUTE_CACHE_80_6 7
#define FREE_REFERENCES_LABEL_80_0 6
#define NUMBER_OF_LINKER_SECTIONS_80_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto encode_pgsql_bytea_1;

    case 1:
      current_block = (Rpc - LABEL_80_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (encode_pgsql_bytea_4)
DEFLABEL (encode_pgsql_bytea_1)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_80_5);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define LABEL_81_5 5
#define ENVIRONMENT_LABEL_81_3 11
#define DEBUGGING_LABEL_81_2 10
#define OBJECT_81_0 9
#define EXECUTE_CACHE_81_6 7
#define FREE_REFERENCES_LABEL_81_0 6
#define NUMBER_OF_LINKER_SECTIONS_81_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto decode_pgsql_bytea_1;

    case 1:
      current_block = (Rpc - LABEL_81_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_pgsql_bytea_4)
DEFLABEL (decode_pgsql_bytea_1)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_81_5);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define LABEL_82_5 5
#define LABEL_82_7 7
#define LABEL_82_9 9
#define LABEL_82_14 11
#define LABEL_82_16 13
#define LABEL_82_8 15
#define LABEL_82_19 17
#define LABEL_82_23 19
#define LABEL_82_11 21
#define LABEL_82_12 23
#define LABEL_82_17 25
#define TAG_82_18 11
#define LABEL_82_26 27
#define LABEL_82_20 29
#define TAG_82_21 13
#define LABEL_82_27 31
#define ENVIRONMENT_LABEL_82_3 61
#define DEBUGGING_LABEL_82_2 60
#define OBJECT_82_6 59
#define OBJECT_82_5 58
#define OBJECT_82_4 57
#define OBJECT_82_3 56
#define OBJECT_82_2 55
#define OBJECT_82_1 54
#define OBJECT_82_0 53
#define EXECUTE_CACHE_82_29 33
#define EXECUTE_CACHE_82_28 35
#define EXECUTE_CACHE_82_25 37
#define EXECUTE_CACHE_82_24 39
#define EXECUTE_CACHE_82_22 41
#define EXECUTE_CACHE_82_15 43
#define EXECUTE_CACHE_82_13 45
#define EXECUTE_CACHE_82_10 47
#define EXECUTE_CACHE_82_6 49
#define FREE_REFERENCE_82_0 52
#define FREE_REFERENCES_LABEL_82_0 32
#define NUMBER_OF_LINKER_SECTIONS_82_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd26;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_82_4);
      goto exec_pgsql_query_14;

    case 1:
      current_block = (Rpc - LABEL_82_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_82_7);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_82_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_82_14);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_82_16);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_82_8);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_82_19);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_82_23);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_82_11);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_82_12);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_82_17);
      goto lambda_22;

    case 12:
      current_block = (Rpc - LABEL_82_26);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_82_20);
      goto lambda_23;

    case 14:
      current_block = (Rpc - LABEL_82_27);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (exec_pgsql_query_21)
DEFLABEL (exec_pgsql_query_14)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_82_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_82_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_82_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_28;

DEFLABEL (label_27)
  (Wrd28.Obj) = (current_block [OBJECT_82_4]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_82_8);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_26)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_82_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_82_17])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [3]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [3]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_82_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_25;
  Wrd11 = Wrd15;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_82_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_82_20])));
  Rhp += 1;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd20 = Wrd19;
  (Wrd21.Obj) = (Rsp [5]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (Rsp [2]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_22]));

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_82_19])), (Wrd12.pObj));

DEFLABEL (label_16)
  (Wrd11.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_28)
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 62))
    goto label_32;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd52.Lng))))
    goto label_32;
  (Wrd26.Obj) = ((Wrd50.pObj) [2]);
  if ((Wrd26.Obj) == ((SCHEME_OBJECT) 0))
    goto label_27;

DEFLABEL (label_31)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 62))
    goto label_30;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd39.Lng))))
    goto label_30;
  (Wrd31.Obj) = ((Wrd37.pObj) [2]);

DEFLABEL (label_29)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd31.Obj);
  goto label_26;

DEFLABEL (label_30)
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.Obj) = (current_block [OBJECT_82_2]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_16]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_3]), 2);

DEFLABEL (label_17)
  (Wrd31.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd55.Obj) = (Rsp [2]);
  (Wrd56.Obj) = (current_block [OBJECT_82_2]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_14]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_3]), 2);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  goto label_31;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_82_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_82_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_13]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_82_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_25]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_82_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;

DEFLABEL (label_33)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_23]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_24]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_82_23);
  goto label_33;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_82_17);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_5]), 3);

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_82_20);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_37;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd21.Lng) == 0)
    goto label_36;

DEFLABEL (label_35)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_28]));

DEFLABEL (label_36)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_26]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_82_6]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_29]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_82_26);
  goto label_35;

DEFLABEL (label_37)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  goto label_36;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define LABEL_83_6 5
#define LABEL_83_8 7
#define LABEL_83_10 9
#define LABEL_83_5 11
#define LABEL_83_13 13
#define LABEL_83_11 15
#define TAG_83_12 6
#define LABEL_83_17 17
#define LABEL_83_14 19
#define TAG_83_15 8
#define LABEL_83_18 21
#define ENVIRONMENT_LABEL_83_3 41
#define DEBUGGING_LABEL_83_2 40
#define OBJECT_83_4 39
#define OBJECT_83_3 38
#define OBJECT_83_2 37
#define OBJECT_83_1 36
#define OBJECT_83_0 35
#define EXECUTE_CACHE_83_20 23
#define EXECUTE_CACHE_83_19 25
#define EXECUTE_CACHE_83_16 27
#define EXECUTE_CACHE_83_9 29
#define EXECUTE_CACHE_83_7 31
#define FREE_REFERENCE_83_0 34
#define FREE_REFERENCES_LABEL_83_0 22
#define NUMBER_OF_LINKER_SECTIONS_83_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd33;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd28;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd56;
  machine_word Wrd55;
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
      current_block = (Rpc - LABEL_83_4);
      goto make_empty_pgsql_result_8;

    case 1:
      current_block = (Rpc - LABEL_83_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_83_8);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_83_10);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_83_5);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_83_13);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_83_11);
      goto lambda_16;

    case 7:
      current_block = (Rpc - LABEL_83_17);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_83_14);
      goto lambda_17;

    case 9:
      current_block = (Rpc - LABEL_83_18);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_empty_pgsql_result_15)
DEFLABEL (make_empty_pgsql_result_8)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_83_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_22;

DEFLABEL (label_21)
  (Wrd30.Obj) = (current_block [OBJECT_83_2]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_83_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_20)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_83_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_83_11])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_83_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_19;
  Wrd13 = Wrd17;

DEFLABEL (label_18)
  (Rsp [0]) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_83_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_83_14])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd22 = Wrd21;
  (Wrd23.Obj) = (Rsp [2]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  (Rsp [2]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_16]));

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_83_13])), (Wrd14.pObj));

DEFLABEL (label_10)
  (Wrd13.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_22)
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_26;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd54.Lng))))
    goto label_26;
  (Wrd28.Obj) = ((Wrd52.pObj) [2]);
  if ((Wrd28.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;

DEFLABEL (label_25)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 62))
    goto label_24;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd41.Lng))))
    goto label_24;
  (Wrd33.Obj) = ((Wrd39.pObj) [2]);

DEFLABEL (label_23)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd33.Obj);
  goto label_20;

DEFLABEL (label_24)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.Obj) = (current_block [OBJECT_83_0]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_10]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 2);

DEFLABEL (label_11)
  (Wrd33.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (current_block [OBJECT_83_0]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_8]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 2);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_25;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_83_11);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_3]), 3);

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_83_14);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_29;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd21.Lng) == 0)
    goto label_28;

DEFLABEL (label_27)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_19]));

DEFLABEL (label_28)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_17]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_83_4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_20]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_83_17);
  goto label_27;

DEFLABEL (label_29)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define LABEL_84_5 5
#define LABEL_84_7 7
#define ENVIRONMENT_LABEL_84_3 17
#define DEBUGGING_LABEL_84_2 16
#define OBJECT_84_2 15
#define OBJECT_84_1 14
#define OBJECT_84_0 13
#define EXECUTE_CACHE_84_8 9
#define EXECUTE_CACHE_84_6 11
#define FREE_REFERENCES_LABEL_84_0 8
#define NUMBER_OF_LINKER_SECTIONS_84_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd9;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
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
      goto result__handle_2;

    case 1:
      current_block = (Rpc - LABEL_84_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_84_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (result__handle_6)
DEFLABEL (result__handle_2)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_84_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;

DEFLABEL (label_7)
  (Wrd11.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_84_2]);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_8]));

DEFLABEL (label_8)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_12;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_12;
  (Wrd9.Obj) = ((Wrd30.pObj) [2]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;

DEFLABEL (label_11)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_84_0]);
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd26.uLng) == 62)
    goto label_10;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_1]), 2);

DEFLABEL (label_10)
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd24.Lng))))
    goto label_9;
  Rvl = ((Wrd22.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_84_0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_1]), 2);

DEFLABEL (label_4)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define LABEL_85_6 5
#define LABEL_85_5 7
#define LABEL_85_9 9
#define LABEL_85_10 11
#define LABEL_85_11 13
#define LABEL_85_13 15
#define ENVIRONMENT_LABEL_85_3 33
#define DEBUGGING_LABEL_85_2 32
#define OBJECT_85_8 31
#define OBJECT_85_7 30
#define OBJECT_85_6 29
#define OBJECT_85_5 28
#define OBJECT_85_4 27
#define OBJECT_85_3 26
#define OBJECT_85_2 25
#define OBJECT_85_1 24
#define OBJECT_85_0 23
#define EXECUTE_CACHE_85_12 17
#define EXECUTE_CACHE_85_8 19
#define EXECUTE_CACHE_85_7 21
#define FREE_REFERENCES_LABEL_85_0 16
#define NUMBER_OF_LINKER_SECTIONS_85_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd29;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_85_4);
      goto lambda_13;

    case 1:
      current_block = (Rpc - LABEL_85_6);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_85_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_85_9);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_85_10);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_85_11);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_85_13);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_19)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_26;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_25)
  (Wrd17.Obj) = (current_block [OBJECT_85_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_85_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_20;
  (Wrd29.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd29.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_8]));

DEFLABEL (label_20)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_24;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_23)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_22;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_21)
  (Rsp [1]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_85_3]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_85_11);
  (Wrd8.Obj) = (current_block [OBJECT_85_4]);
  (Wrd9.Obj) = (current_block [OBJECT_85_5]);
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
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_85_6]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_85_13);
  (Wrd8.Obj) = (current_block [OBJECT_85_7]);
  (Wrd9.Obj) = (current_block [OBJECT_85_5]);
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
  (Wrd22.Obj) = (current_block [OBJECT_85_8]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_2]), 1);

DEFLABEL (label_17)
  (Wrd16.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_0]), 1);

DEFLABEL (label_16)
  (Wrd7.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_0]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define LABEL_86_6 5
#define LABEL_86_8 7
#define LABEL_86_10 9
#define LABEL_86_5 11
#define ENVIRONMENT_LABEL_86_3 22
#define DEBUGGING_LABEL_86_2 21
#define OBJECT_86_3 20
#define OBJECT_86_2 19
#define OBJECT_86_1 18
#define OBJECT_86_0 17
#define EXECUTE_CACHE_86_9 13
#define EXECUTE_CACHE_86_7 15
#define FREE_REFERENCES_LABEL_86_0 12
#define NUMBER_OF_LINKER_SECTIONS_86_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_86_4);
      goto pgsql_result_error_message_3;

    case 1:
      current_block = (Rpc - LABEL_86_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_86_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_86_10);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_86_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pgsql_result_error_message_8)
DEFLABEL (pgsql_result_error_message_3)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_86_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  (Wrd12.Obj) = (current_block [OBJECT_86_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_86_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_3]), 1);

DEFLABEL (label_11)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_15;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_15;
  (Wrd10.Obj) = ((Wrd33.pObj) [2]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_14)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_13;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_13;
  (Wrd5.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto label_9;

DEFLABEL (label_13)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_86_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_86_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define LABEL_87_6 5
#define LABEL_87_8 7
#define LABEL_87_10 9
#define LABEL_87_5 11
#define ENVIRONMENT_LABEL_87_3 22
#define DEBUGGING_LABEL_87_2 21
#define OBJECT_87_3 20
#define OBJECT_87_2 19
#define OBJECT_87_1 18
#define OBJECT_87_0 17
#define EXECUTE_CACHE_87_9 13
#define EXECUTE_CACHE_87_7 15
#define FREE_REFERENCES_LABEL_87_0 12
#define NUMBER_OF_LINKER_SECTIONS_87_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_87_4);
      goto pgsql_n_tuples_3;

    case 1:
      current_block = (Rpc - LABEL_87_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_87_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_87_10);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_87_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pgsql_n_tuples_8)
DEFLABEL (pgsql_n_tuples_3)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_87_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  (Wrd12.Obj) = (current_block [OBJECT_87_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_87_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_3]), 1);

DEFLABEL (label_11)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_15;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_15;
  (Wrd10.Obj) = ((Wrd33.pObj) [2]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_14)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_13;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_13;
  (Wrd5.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto label_9;

DEFLABEL (label_13)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_87_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_87_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define LABEL_88_6 5
#define LABEL_88_8 7
#define LABEL_88_10 9
#define LABEL_88_5 11
#define ENVIRONMENT_LABEL_88_3 22
#define DEBUGGING_LABEL_88_2 21
#define OBJECT_88_3 20
#define OBJECT_88_2 19
#define OBJECT_88_1 18
#define OBJECT_88_0 17
#define EXECUTE_CACHE_88_9 13
#define EXECUTE_CACHE_88_7 15
#define FREE_REFERENCES_LABEL_88_0 12
#define NUMBER_OF_LINKER_SECTIONS_88_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_88_4);
      goto pgsql_n_fields_3;

    case 1:
      current_block = (Rpc - LABEL_88_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_88_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_88_10);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_88_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pgsql_n_fields_8)
DEFLABEL (pgsql_n_fields_3)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_88_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  (Wrd12.Obj) = (current_block [OBJECT_88_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_88_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_3]), 1);

DEFLABEL (label_11)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_15;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_15;
  (Wrd10.Obj) = ((Wrd33.pObj) [2]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_14)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_13;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_13;
  (Wrd5.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto label_9;

DEFLABEL (label_13)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_88_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_88_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define LABEL_89_6 5
#define LABEL_89_8 7
#define LABEL_89_10 9
#define LABEL_89_5 11
#define ENVIRONMENT_LABEL_89_3 22
#define DEBUGGING_LABEL_89_2 21
#define OBJECT_89_3 20
#define OBJECT_89_2 19
#define OBJECT_89_1 18
#define OBJECT_89_0 17
#define EXECUTE_CACHE_89_9 13
#define EXECUTE_CACHE_89_7 15
#define FREE_REFERENCES_LABEL_89_0 12
#define NUMBER_OF_LINKER_SECTIONS_89_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_89_4);
      goto pgsql_cmd_status_3;

    case 1:
      current_block = (Rpc - LABEL_89_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_89_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_89_10);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_89_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pgsql_cmd_status_8)
DEFLABEL (pgsql_cmd_status_3)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_89_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  (Wrd12.Obj) = (current_block [OBJECT_89_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_89_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_3]), 1);

DEFLABEL (label_11)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_15;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_15;
  (Wrd10.Obj) = ((Wrd33.pObj) [2]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_14)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_13;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_13;
  (Wrd5.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto label_9;

DEFLABEL (label_13)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_89_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_89_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_4 3
#define LABEL_90_5 5
#define LABEL_90_9 7
#define LABEL_90_7 9
#define LABEL_90_11 11
#define LABEL_90_13 13
#define LABEL_90_6 15
#define ENVIRONMENT_LABEL_90_3 30
#define DEBUGGING_LABEL_90_2 29
#define OBJECT_90_3 28
#define OBJECT_90_2 27
#define OBJECT_90_1 26
#define OBJECT_90_0 25
#define EXECUTE_CACHE_90_12 17
#define EXECUTE_CACHE_90_10 19
#define EXECUTE_CACHE_90_8 21
#define FREE_REFERENCE_90_0 24
#define FREE_REFERENCES_LABEL_90_0 16
#define NUMBER_OF_LINKER_SECTIONS_90_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd9;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_90_4);
      goto pgsql_result_status_4;

    case 1:
      current_block = (Rpc - LABEL_90_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_90_9);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_90_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_90_11);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_90_13);
      goto label_7;

    case 6:
      current_block = (Rpc - LABEL_90_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pgsql_result_status_10)
DEFLABEL (pgsql_result_status_4)
  INTERRUPT_CHECK (26, LABEL_90_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_90_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;

DEFLABEL (label_14)
  (Wrd11.Obj) = (current_block [OBJECT_90_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_90_6);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_13)
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_3]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_90_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_90_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_12;
  Wrd6 = Wrd10;

DEFLABEL (label_11)
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_10]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_90_9])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_15)
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_19;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_19;
  (Wrd9.Obj) = ((Wrd33.pObj) [2]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;

DEFLABEL (label_18)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_17;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_17;
  (Wrd14.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_16)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd14.Obj);
  goto label_13;

DEFLABEL (label_17)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (current_block [OBJECT_90_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_13]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 2);

DEFLABEL (label_7)
  (Wrd14.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.Obj) = (current_block [OBJECT_90_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_11]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_91_4 3
#define LABEL_91_5 5
#define ENVIRONMENT_LABEL_91_3 12
#define DEBUGGING_LABEL_91_2 11
#define EXECUTE_CACHE_91_6 7
#define FREE_REFERENCE_91_0 10
#define FREE_REFERENCES_LABEL_91_0 6
#define NUMBER_OF_LINKER_SECTIONS_91_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_91_4);
      goto pgsql_clear_0;

    case 1:
      current_block = (Rpc - LABEL_91_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pgsql_clear_4)
DEFLABEL (pgsql_clear_0)
  INTERRUPT_CHECK (26, LABEL_91_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_91_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_91_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_92_4 3
#define LABEL_92_6 5
#define LABEL_92_8 7
#define LABEL_92_10 9
#define LABEL_92_5 11
#define ENVIRONMENT_LABEL_92_3 22
#define DEBUGGING_LABEL_92_2 21
#define OBJECT_92_3 20
#define OBJECT_92_2 19
#define OBJECT_92_1 18
#define OBJECT_92_0 17
#define EXECUTE_CACHE_92_9 13
#define EXECUTE_CACHE_92_7 15
#define FREE_REFERENCES_LABEL_92_0 12
#define NUMBER_OF_LINKER_SECTIONS_92_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_92_4);
      goto pgsql_field_name_3;

    case 1:
      current_block = (Rpc - LABEL_92_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_92_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_92_10);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_92_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pgsql_field_name_8)
DEFLABEL (pgsql_field_name_3)
  INTERRUPT_CHECK (26, LABEL_92_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_92_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  (Wrd12.Obj) = (current_block [OBJECT_92_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_92_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_3]), 2);

DEFLABEL (label_11)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_15;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_15;
  (Wrd10.Obj) = ((Wrd33.pObj) [2]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_14)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_13;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_13;
  (Wrd5.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto label_9;

DEFLABEL (label_13)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_92_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_92_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_93_4 3
#define LABEL_93_6 5
#define LABEL_93_8 7
#define LABEL_93_10 9
#define LABEL_93_5 11
#define LABEL_93_11 13
#define ENVIRONMENT_LABEL_93_3 25
#define DEBUGGING_LABEL_93_2 24
#define OBJECT_93_4 23
#define OBJECT_93_3 22
#define OBJECT_93_2 21
#define OBJECT_93_1 20
#define OBJECT_93_0 19
#define EXECUTE_CACHE_93_9 15
#define EXECUTE_CACHE_93_7 17
#define FREE_REFERENCES_LABEL_93_0 14
#define NUMBER_OF_LINKER_SECTIONS_93_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_93 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd20;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd15;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
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
      current_block = (Rpc - LABEL_93_4);
      goto pgsql_get_value_5;

    case 1:
      current_block = (Rpc - LABEL_93_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_93_8);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_93_10);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_93_5);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_93_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pgsql_get_value_10)
DEFLABEL (pgsql_get_value_5)
  INTERRUPT_CHECK (26, LABEL_93_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_93_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;

DEFLABEL (label_13)
  (Wrd17.Obj) = (current_block [OBJECT_93_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_93_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_12)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_3]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_93_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_4]), 3);

DEFLABEL (label_14)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 62))
    goto label_18;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd41.Lng))))
    goto label_18;
  (Wrd15.Obj) = ((Wrd39.pObj) [2]);
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;

DEFLABEL (label_17)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_16;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd28.Lng))))
    goto label_16;
  (Wrd20.Obj) = ((Wrd26.pObj) [2]);

DEFLABEL (label_15)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd20.Obj);
  goto label_12;

DEFLABEL (label_16)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.Obj) = (current_block [OBJECT_93_0]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_10]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 2);

DEFLABEL (label_7)
  (Wrd20.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.Obj) = (current_block [OBJECT_93_0]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_8]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_94_4 3
#define LABEL_94_6 5
#define LABEL_94_8 7
#define LABEL_94_10 9
#define LABEL_94_5 11
#define ENVIRONMENT_LABEL_94_3 22
#define DEBUGGING_LABEL_94_2 21
#define OBJECT_94_3 20
#define OBJECT_94_2 19
#define OBJECT_94_1 18
#define OBJECT_94_0 17
#define EXECUTE_CACHE_94_9 13
#define EXECUTE_CACHE_94_7 15
#define FREE_REFERENCES_LABEL_94_0 12
#define NUMBER_OF_LINKER_SECTIONS_94_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_94 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_94_4);
      goto pgsql_get_is_nullP_3;

    case 1:
      current_block = (Rpc - LABEL_94_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_94_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_94_10);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_94_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pgsql_get_is_nullP_8)
DEFLABEL (pgsql_get_is_nullP_3)
  INTERRUPT_CHECK (26, LABEL_94_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_94_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  (Wrd12.Obj) = (current_block [OBJECT_94_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_94_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_3]), 3);

DEFLABEL (label_11)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_15;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_15;
  (Wrd10.Obj) = ((Wrd33.pObj) [2]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_14)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_13;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_13;
  (Wrd5.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto label_9;

DEFLABEL (label_13)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_94_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_94_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_95_4 3
#define LABEL_95_5 5
#define LABEL_95_7 7
#define LABEL_95_10 9
#define LABEL_95_12 11
#define LABEL_95_6 13
#define ENVIRONMENT_LABEL_95_3 26
#define DEBUGGING_LABEL_95_2 25
#define OBJECT_95_3 24
#define OBJECT_95_2 23
#define OBJECT_95_1 22
#define OBJECT_95_0 21
#define EXECUTE_CACHE_95_11 15
#define EXECUTE_CACHE_95_9 17
#define EXECUTE_CACHE_95_8 19
#define FREE_REFERENCES_LABEL_95_0 14
#define NUMBER_OF_LINKER_SECTIONS_95_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pgsql_so_code_95 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd9;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_95_4);
      goto pgsql_cmd_tuples_4;

    case 1:
      current_block = (Rpc - LABEL_95_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_95_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_95_10);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_95_12);
      goto label_6;

    case 5:
      current_block = (Rpc - LABEL_95_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pgsql_cmd_tuples_9)
DEFLABEL (pgsql_cmd_tuples_4)
  INTERRUPT_CHECK (26, LABEL_95_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_95_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;

DEFLABEL (label_11)
  (Wrd11.Obj) = (current_block [OBJECT_95_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_95_6);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_3]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_95_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_9]));

DEFLABEL (label_12)
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_16;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_16;
  (Wrd9.Obj) = ((Wrd33.pObj) [2]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;

DEFLABEL (label_15)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_14;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_14;
  (Wrd14.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_13)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd14.Obj);
  goto label_10;

DEFLABEL (label_14)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (current_block [OBJECT_95_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_12]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_1]), 2);

DEFLABEL (label_6)
  (Wrd14.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.Obj) = (current_block [OBJECT_95_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_10]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_1]), 2);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  goto label_15;

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
#define LABEL_30 55
#define LABEL_31 57
#define LABEL_32 59
#define LABEL_33 61
#define LABEL_34 63
#define LABEL_35 65
#define LABEL_36 67
#define LABEL_37 69
#define LABEL_38 71
#define LABEL_39 73
#define LABEL_40 75
#define LABEL_41 77
#define LABEL_43 79
#define LABEL_44 81
#define LABEL_45 83
#define LABEL_46 85
#define LABEL_47 87
#define LABEL_48 89
#define LABEL_49 91
#define LABEL_50 93
#define LABEL_51 95
#define LABEL_52 97
#define LABEL_53 99
#define LABEL_54 101
#define LABEL_55 103
#define LABEL_56 105
#define LABEL_57 107
#define LABEL_58 109
#define LABEL_59 111
#define LABEL_60 113
#define LABEL_61 115
#define LABEL_62 117
#define LABEL_63 119
#define LABEL_64 121
#define LABEL_65 123
#define LABEL_66 125
#define LABEL_67 127
#define LABEL_68 129
#define LABEL_69 131
#define LABEL_70 133
#define LABEL_75 135
#define LABEL_71 137
#define LABEL_73 139
#define LABEL_74 141
#define LABEL_77 143
#define LABEL_78 145
#define TAG_79 71
#define LABEL_80 147
#define LABEL_83 149
#define LABEL_81 151
#define LABEL_82 153
#define LABEL_84 155
#define LABEL_85 157
#define LABEL_89 159
#define LABEL_86 161
#define LABEL_87 163
#define LABEL_88 165
#define LABEL_90 167
#define LABEL_91 169
#define TAG_92 83
#define LABEL_93 171
#define LABEL_96 173
#define LABEL_94 175
#define LABEL_95 177
#define LABEL_97 179
#define LABEL_98 181
#define LABEL_99 183
#define LABEL_100 185
#define LABEL_101 187
#define LABEL_102 189
#define LABEL_103 191
#define LABEL_104 193
#define LABEL_105 195
#define LABEL_106 197
#define LABEL_107 199
#define LABEL_108 201
#define LABEL_111 203
#define LABEL_109 205
#define LABEL_115 207
#define LABEL_110 209
#define LABEL_113 211
#define LABEL_118 213
#define LABEL_119 215
#define LABEL_114 217
#define LABEL_116 219
#define LABEL_123 221
#define LABEL_117 223
#define LABEL_121 225
#define LABEL_126 227
#define LABEL_127 229
#define LABEL_122 231
#define LABEL_124 233
#define LABEL_125 235
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
#define ENVIRONMENT_LABEL_3 599
#define DEBUGGING_LABEL_2 598
#define PURIFICATION_ROOT 597
#define OBJECT_248 596
#define OBJECT_247 595
#define OBJECT_246 594
#define OBJECT_245 593
#define OBJECT_244 592
#define OBJECT_243 591
#define OBJECT_242 590
#define OBJECT_241 589
#define OBJECT_240 588
#define OBJECT_239 587
#define OBJECT_238 586
#define OBJECT_237 585
#define OBJECT_236 584
#define OBJECT_235 583
#define OBJECT_234 582
#define OBJECT_233 581
#define OBJECT_232 580
#define OBJECT_231 579
#define OBJECT_230 578
#define OBJECT_229 577
#define OBJECT_228 576
#define OBJECT_227 575
#define OBJECT_226 574
#define OBJECT_225 573
#define OBJECT_224 572
#define OBJECT_223 571
#define OBJECT_222 570
#define OBJECT_221 569
#define OBJECT_220 568
#define OBJECT_219 567
#define OBJECT_218 566
#define OBJECT_217 565
#define OBJECT_216 564
#define OBJECT_215 563
#define OBJECT_214 562
#define OBJECT_213 561
#define OBJECT_212 560
#define OBJECT_211 559
#define OBJECT_210 558
#define OBJECT_209 557
#define OBJECT_208 556
#define OBJECT_207 555
#define OBJECT_206 554
#define OBJECT_205 553
#define OBJECT_204 552
#define OBJECT_203 551
#define OBJECT_202 550
#define OBJECT_201 549
#define OBJECT_200 548
#define OBJECT_199 547
#define OBJECT_198 546
#define OBJECT_197 545
#define OBJECT_196 544
#define OBJECT_195 543
#define OBJECT_194 542
#define OBJECT_193 541
#define OBJECT_192 540
#define OBJECT_191 539
#define OBJECT_190 538
#define OBJECT_189 537
#define OBJECT_188 536
#define OBJECT_187 535
#define OBJECT_186 534
#define OBJECT_185 533
#define OBJECT_184 532
#define OBJECT_183 531
#define OBJECT_182 530
#define OBJECT_181 529
#define OBJECT_180 528
#define OBJECT_179 527
#define OBJECT_178 526
#define OBJECT_177 525
#define OBJECT_176 524
#define OBJECT_175 523
#define OBJECT_174 522
#define OBJECT_173 521
#define OBJECT_172 520
#define OBJECT_171 519
#define OBJECT_170 518
#define OBJECT_169 517
#define OBJECT_168 516
#define OBJECT_167 515
#define OBJECT_166 514
#define OBJECT_165 513
#define OBJECT_164 512
#define OBJECT_163 511
#define OBJECT_162 510
#define OBJECT_161 509
#define OBJECT_160 508
#define OBJECT_159 507
#define OBJECT_158 506
#define OBJECT_157 505
#define OBJECT_156 504
#define OBJECT_155 503
#define OBJECT_154 502
#define OBJECT_153 501
#define OBJECT_152 500
#define OBJECT_151 499
#define OBJECT_150 498
#define OBJECT_149 497
#define OBJECT_148 496
#define OBJECT_147 495
#define OBJECT_146 494
#define OBJECT_145 493
#define OBJECT_144 492
#define OBJECT_143 491
#define OBJECT_142 490
#define OBJECT_141 489
#define OBJECT_140 488
#define OBJECT_139 487
#define OBJECT_138 486
#define OBJECT_137 485
#define OBJECT_136 484
#define OBJECT_135 483
#define OBJECT_134 482
#define OBJECT_133 481
#define OBJECT_132 480
#define OBJECT_131 479
#define OBJECT_130 478
#define OBJECT_129 477
#define OBJECT_128 476
#define OBJECT_127 475
#define OBJECT_126 474
#define OBJECT_125 473
#define OBJECT_124 472
#define OBJECT_123 471
#define OBJECT_122 470
#define OBJECT_121 469
#define OBJECT_120 468
#define OBJECT_119 467
#define OBJECT_118 466
#define OBJECT_117 465
#define OBJECT_116 464
#define OBJECT_115 463
#define OBJECT_114 462
#define OBJECT_113 461
#define OBJECT_112 460
#define OBJECT_111 459
#define OBJECT_110 458
#define OBJECT_109 457
#define OBJECT_108 456
#define OBJECT_107 455
#define OBJECT_106 454
#define OBJECT_105 453
#define OBJECT_104 452
#define OBJECT_103 451
#define OBJECT_102 450
#define OBJECT_101 449
#define OBJECT_100 448
#define OBJECT_99 447
#define OBJECT_98 446
#define OBJECT_97 445
#define OBJECT_96 444
#define OBJECT_95 443
#define OBJECT_94 442
#define OBJECT_93 441
#define OBJECT_92 440
#define OBJECT_91 439
#define OBJECT_90 438
#define OBJECT_89 437
#define OBJECT_88 436
#define OBJECT_87 435
#define OBJECT_86 434
#define OBJECT_85 433
#define OBJECT_84 432
#define OBJECT_83 431
#define OBJECT_82 430
#define OBJECT_81 429
#define OBJECT_80 428
#define OBJECT_79 427
#define OBJECT_78 426
#define OBJECT_77 425
#define OBJECT_76 424
#define OBJECT_75 423
#define OBJECT_74 422
#define OBJECT_73 421
#define OBJECT_72 420
#define OBJECT_71 419
#define OBJECT_70 418
#define OBJECT_69 417
#define OBJECT_68 416
#define OBJECT_67 415
#define OBJECT_66 414
#define OBJECT_65 413
#define OBJECT_64 412
#define OBJECT_63 411
#define OBJECT_62 410
#define OBJECT_61 409
#define OBJECT_60 408
#define OBJECT_59 407
#define OBJECT_58 406
#define OBJECT_57 405
#define OBJECT_56 404
#define OBJECT_55 403
#define OBJECT_54 402
#define OBJECT_53 401
#define OBJECT_52 400
#define OBJECT_51 399
#define OBJECT_50 398
#define OBJECT_49 397
#define OBJECT_48 396
#define OBJECT_47 395
#define OBJECT_46 394
#define OBJECT_45 393
#define OBJECT_44 392
#define OBJECT_43 391
#define OBJECT_42 390
#define OBJECT_41 389
#define OBJECT_40 388
#define OBJECT_39 387
#define OBJECT_38 386
#define OBJECT_37 385
#define OBJECT_36 384
#define OBJECT_35 383
#define OBJECT_34 382
#define OBJECT_33 381
#define OBJECT_32 380
#define OBJECT_31 379
#define OBJECT_30 378
#define OBJECT_29 377
#define OBJECT_28 376
#define OBJECT_27 375
#define OBJECT_26 374
#define OBJECT_25 373
#define OBJECT_24 372
#define OBJECT_23 371
#define OBJECT_22 370
#define OBJECT_21 369
#define OBJECT_20 368
#define OBJECT_19 367
#define OBJECT_18 366
#define OBJECT_17 365
#define OBJECT_16 364
#define OBJECT_15 363
#define OBJECT_14 362
#define OBJECT_13 361
#define OBJECT_12 360
#define OBJECT_11 359
#define OBJECT_10 358
#define OBJECT_9 357
#define OBJECT_8 356
#define OBJECT_7 355
#define OBJECT_6 354
#define OBJECT_5 353
#define OBJECT_4 352
#define OBJECT_3 351
#define OBJECT_2 350
#define OBJECT_1 349
#define OBJECT_0 348
#define EXECUTE_CACHE_120 329
#define EXECUTE_CACHE_112 331
#define FREE_REFERENCE_6 334
#define FREE_REFERENCE_5 335
#define FREE_REFERENCE_4 336
#define FREE_REFERENCE_3 337
#define FREE_REFERENCE_2 338
#define FREE_REFERENCE_1 339
#define FREE_REFERENCE_0 340
#define GLOBAL_EXECUTE_CACHE_76 342
#define GLOBAL_EXECUTE_CACHE_72 344
#define GLOBAL_EXECUTE_CACHE_42 346
#define FREE_REFERENCES_LABEL_0 328
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
pgsql_so_fcdc7dbe4a1cfc41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      goto continuation_25;

    case 26:
      current_block = (Rpc - LABEL_30);
      goto continuation_26;

    case 27:
      current_block = (Rpc - LABEL_31);
      goto continuation_27;

    case 28:
      current_block = (Rpc - LABEL_32);
      goto continuation_28;

    case 29:
      current_block = (Rpc - LABEL_33);
      goto continuation_29;

    case 30:
      current_block = (Rpc - LABEL_34);
      goto continuation_30;

    case 31:
      current_block = (Rpc - LABEL_35);
      goto continuation_31;

    case 32:
      current_block = (Rpc - LABEL_36);
      goto continuation_32;

    case 33:
      current_block = (Rpc - LABEL_37);
      goto continuation_33;

    case 34:
      current_block = (Rpc - LABEL_38);
      goto continuation_34;

    case 35:
      current_block = (Rpc - LABEL_39);
      goto continuation_38;

    case 36:
      current_block = (Rpc - LABEL_40);
      goto continuation_37;

    case 37:
      current_block = (Rpc - LABEL_41);
      goto continuation_35;

    case 38:
      current_block = (Rpc - LABEL_43);
      goto continuation_39;

    case 39:
      current_block = (Rpc - LABEL_44);
      goto continuation_40;

    case 40:
      current_block = (Rpc - LABEL_45);
      goto continuation_41;

    case 41:
      current_block = (Rpc - LABEL_46);
      goto continuation_42;

    case 42:
      current_block = (Rpc - LABEL_47);
      goto continuation_43;

    case 43:
      current_block = (Rpc - LABEL_48);
      goto continuation_44;

    case 44:
      current_block = (Rpc - LABEL_49);
      goto continuation_45;

    case 45:
      current_block = (Rpc - LABEL_50);
      goto continuation_46;

    case 46:
      current_block = (Rpc - LABEL_51);
      goto continuation_47;

    case 47:
      current_block = (Rpc - LABEL_52);
      goto continuation_48;

    case 48:
      current_block = (Rpc - LABEL_53);
      goto continuation_49;

    case 49:
      current_block = (Rpc - LABEL_54);
      goto continuation_50;

    case 50:
      current_block = (Rpc - LABEL_55);
      goto continuation_51;

    case 51:
      current_block = (Rpc - LABEL_56);
      goto continuation_52;

    case 52:
      current_block = (Rpc - LABEL_57);
      goto continuation_53;

    case 53:
      current_block = (Rpc - LABEL_58);
      goto continuation_54;

    case 54:
      current_block = (Rpc - LABEL_59);
      goto continuation_55;

    case 55:
      current_block = (Rpc - LABEL_60);
      goto continuation_56;

    case 56:
      current_block = (Rpc - LABEL_61);
      goto continuation_57;

    case 57:
      current_block = (Rpc - LABEL_62);
      goto continuation_58;

    case 58:
      current_block = (Rpc - LABEL_63);
      goto continuation_59;

    case 59:
      current_block = (Rpc - LABEL_64);
      goto continuation_60;

    case 60:
      current_block = (Rpc - LABEL_65);
      goto continuation_61;

    case 61:
      current_block = (Rpc - LABEL_66);
      goto continuation_62;

    case 62:
      current_block = (Rpc - LABEL_67);
      goto continuation_63;

    case 63:
      current_block = (Rpc - LABEL_68);
      goto continuation_64;

    case 64:
      current_block = (Rpc - LABEL_69);
      goto continuation_65;

    case 65:
      current_block = (Rpc - LABEL_70);
      goto continuation_68;

    case 66:
      current_block = (Rpc - LABEL_75);
      goto label_161;

    case 67:
      current_block = (Rpc - LABEL_71);
      goto continuation_67;

    case 68:
      current_block = (Rpc - LABEL_73);
      goto continuation_73;

    case 69:
      current_block = (Rpc - LABEL_74);
      goto continuation_69;

    case 70:
      current_block = (Rpc - LABEL_77);
      goto continuation_74;

    case 71:
      current_block = (Rpc - LABEL_78);
      goto make_connection_173;

    case 72:
      current_block = (Rpc - LABEL_80);
      goto continuation_75;

    case 73:
      current_block = (Rpc - LABEL_83);
      goto label_162;

    case 74:
      current_block = (Rpc - LABEL_81);
      goto continuation_77;

    case 75:
      current_block = (Rpc - LABEL_82);
      goto continuation_76;

    case 76:
      current_block = (Rpc - LABEL_84);
      goto continuation_78;

    case 77:
      current_block = (Rpc - LABEL_85);
      goto continuation_81;

    case 78:
      current_block = (Rpc - LABEL_89);
      goto label_163;

    case 79:
      current_block = (Rpc - LABEL_86);
      goto continuation_80;

    case 80:
      current_block = (Rpc - LABEL_87);
      goto continuation_86;

    case 81:
      current_block = (Rpc - LABEL_88);
      goto continuation_82;

    case 82:
      current_block = (Rpc - LABEL_90);
      goto continuation_87;

    case 83:
      current_block = (Rpc - LABEL_91);
      goto make_result_174;

    case 84:
      current_block = (Rpc - LABEL_93);
      goto continuation_88;

    case 85:
      current_block = (Rpc - LABEL_96);
      goto label_164;

    case 86:
      current_block = (Rpc - LABEL_94);
      goto continuation_90;

    case 87:
      current_block = (Rpc - LABEL_95);
      goto continuation_89;

    case 88:
      current_block = (Rpc - LABEL_97);
      goto continuation_91;

    case 89:
      current_block = (Rpc - LABEL_98);
      goto continuation_95;

    case 90:
      current_block = (Rpc - LABEL_99);
      goto continuation_94;

    case 91:
      current_block = (Rpc - LABEL_100);
      goto continuation_92;

    case 92:
      current_block = (Rpc - LABEL_101);
      goto continuation_96;

    case 93:
      current_block = (Rpc - LABEL_102);
      goto continuation_97;

    case 94:
      current_block = (Rpc - LABEL_103);
      goto continuation_98;

    case 95:
      current_block = (Rpc - LABEL_104);
      goto continuation_99;

    case 96:
      current_block = (Rpc - LABEL_105);
      goto continuation_100;

    case 97:
      current_block = (Rpc - LABEL_106);
      goto continuation_101;

    case 98:
      current_block = (Rpc - LABEL_107);
      goto continuation_102;

    case 99:
      current_block = (Rpc - LABEL_108);
      goto continuation_103;

    case 100:
      current_block = (Rpc - LABEL_111);
      goto label_165;

    case 101:
      current_block = (Rpc - LABEL_109);
      goto continuation_105;

    case 102:
      current_block = (Rpc - LABEL_115);
      goto label_166;

    case 103:
      current_block = (Rpc - LABEL_110);
      goto continuation_104;

    case 104:
      current_block = (Rpc - LABEL_113);
      goto continuation_107;

    case 105:
      current_block = (Rpc - LABEL_118);
      goto label_167;

    case 106:
      current_block = (Rpc - LABEL_119);
      goto label_168;

    case 107:
      current_block = (Rpc - LABEL_114);
      goto continuation_106;

    case 108:
      current_block = (Rpc - LABEL_116);
      goto continuation_109;

    case 109:
      current_block = (Rpc - LABEL_123);
      goto label_169;

    case 110:
      current_block = (Rpc - LABEL_117);
      goto continuation_108;

    case 111:
      current_block = (Rpc - LABEL_121);
      goto continuation_111;

    case 112:
      current_block = (Rpc - LABEL_126);
      goto label_170;

    case 113:
      current_block = (Rpc - LABEL_127);
      goto label_171;

    case 114:
      current_block = (Rpc - LABEL_122);
      goto continuation_110;

    case 115:
      current_block = (Rpc - LABEL_124);
      goto continuation_113;

    case 116:
      current_block = (Rpc - LABEL_125);
      goto continuation_112;

    case 117:
      current_block = (Rpc - LABEL_128);
      goto continuation_114;

    case 118:
      current_block = (Rpc - LABEL_129);
      goto continuation_115;

    case 119:
      current_block = (Rpc - LABEL_130);
      goto continuation_116;

    case 120:
      current_block = (Rpc - LABEL_131);
      goto continuation_117;

    case 121:
      current_block = (Rpc - LABEL_132);
      goto continuation_118;

    case 122:
      current_block = (Rpc - LABEL_133);
      goto continuation_119;

    case 123:
      current_block = (Rpc - LABEL_134);
      goto continuation_120;

    case 124:
      current_block = (Rpc - LABEL_135);
      goto continuation_121;

    case 125:
      current_block = (Rpc - LABEL_136);
      goto continuation_125;

    case 126:
      current_block = (Rpc - LABEL_137);
      goto continuation_124;

    case 127:
      current_block = (Rpc - LABEL_138);
      goto continuation_122;

    case 128:
      current_block = (Rpc - LABEL_139);
      goto continuation_126;

    case 129:
      current_block = (Rpc - LABEL_140);
      goto continuation_127;

    case 130:
      current_block = (Rpc - LABEL_141);
      goto continuation_128;

    case 131:
      current_block = (Rpc - LABEL_142);
      goto continuation_129;

    case 132:
      current_block = (Rpc - LABEL_143);
      goto continuation_130;

    case 133:
      current_block = (Rpc - LABEL_144);
      goto continuation_131;

    case 134:
      current_block = (Rpc - LABEL_145);
      goto continuation_132;

    case 135:
      current_block = (Rpc - LABEL_146);
      goto continuation_133;

    case 136:
      current_block = (Rpc - LABEL_147);
      goto continuation_134;

    case 137:
      current_block = (Rpc - LABEL_148);
      goto continuation_135;

    case 138:
      current_block = (Rpc - LABEL_149);
      goto continuation_136;

    case 139:
      current_block = (Rpc - LABEL_150);
      goto continuation_137;

    case 140:
      current_block = (Rpc - LABEL_151);
      goto continuation_138;

    case 141:
      current_block = (Rpc - LABEL_152);
      goto continuation_139;

    case 142:
      current_block = (Rpc - LABEL_153);
      goto continuation_140;

    case 143:
      current_block = (Rpc - LABEL_154);
      goto continuation_141;

    case 144:
      current_block = (Rpc - LABEL_155);
      goto continuation_142;

    case 145:
      current_block = (Rpc - LABEL_156);
      goto continuation_143;

    case 146:
      current_block = (Rpc - LABEL_157);
      goto continuation_144;

    case 147:
      current_block = (Rpc - LABEL_158);
      goto continuation_145;

    case 148:
      current_block = (Rpc - LABEL_159);
      goto continuation_149;

    case 149:
      current_block = (Rpc - LABEL_160);
      goto continuation_148;

    case 150:
      current_block = (Rpc - LABEL_161);
      goto continuation_146;

    case 151:
      current_block = (Rpc - LABEL_162);
      goto continuation_150;

    case 152:
      current_block = (Rpc - LABEL_163);
      goto continuation_151;

    case 153:
      current_block = (Rpc - LABEL_164);
      goto continuation_152;

    case 154:
      current_block = (Rpc - LABEL_165);
      goto continuation_153;

    case 155:
      current_block = (Rpc - LABEL_166);
      goto continuation_154;

    case 156:
      current_block = (Rpc - LABEL_167);
      goto continuation_155;

    case 157:
      current_block = (Rpc - LABEL_168);
      goto continuation_156;

    case 158:
      current_block = (Rpc - LABEL_169);
      goto continuation_157;

    case 159:
      current_block = (Rpc - LABEL_170);
      goto continuation_158;

    case 160:
      current_block = (Rpc - LABEL_171);
      goto label_176;

    case 161:
      current_block = (Rpc - LABEL_172);
      goto label_177;

    case 162:
      current_block = (Rpc - LABEL_173);
      goto expression_160;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_160)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_172])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_177)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_176)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
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
	2,
	2,
	1,
	1,
	1,
	2,
	2,
	1,
	1,
	1,
	1,
	1,
	3,
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
	1,
	0,
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
    if (counter > 95)
      goto label_175;
    blocks = (current_block [OBJECT_248]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_171])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_175)
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
  (Wrd8.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_42]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd9.Obj) = (current_block [OBJECT_75]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77]), 2);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_40);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_83]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_92]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_93]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_94]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_95]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_96]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_98]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_99]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_100]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_101]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_102]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_103]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_105]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_106]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_107]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_108]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_110]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_111]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_66);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_112]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_113]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_114]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_115]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_116]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_117]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_72]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_71);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_118]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_199;
  Wrd11 = Wrd15;

DEFLABEL (label_198)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_76]));

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_74);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_79);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_78])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_121]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_73);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_119]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_120]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_77);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_122]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_123]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_80);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_197;
  Wrd11 = Wrd15;

DEFLABEL (label_196)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_76]));

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_82);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_126]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_81);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_124]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_125]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_84);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_115]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_116]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_127]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_72]));

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_86);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_128]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_85);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_195;
  Wrd11 = Wrd15;

DEFLABEL (label_194)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_76]));

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_88);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_92);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_91])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_131]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_87);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_129]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_130]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_90);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_132]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_133]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_93);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_193;
  Wrd11 = Wrd15;

DEFLABEL (label_192)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_76]));

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_95);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_136]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_94);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_134]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_135]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_97);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_137]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_42]));

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_100);
  (Wrd9.Obj) = (current_block [OBJECT_75]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77]), 2);

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_99);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_140]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_98);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_138]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_139]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_101);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_141]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_142]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_102);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_143]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_144]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_103);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_145]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_146]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_104);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_147]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_148]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_105);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_149]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_150]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_106);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_151]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_152]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_107);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_153]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_154]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_103)
  INTERRUPT_CHECK (27, LABEL_108);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_155]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_115]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_191;
  Wrd13 = Wrd17;

DEFLABEL (label_190)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_156]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_112]));

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_110);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_160]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_109);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_157]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_158]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_189;
  Wrd13 = Wrd17;

DEFLABEL (label_188)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_159]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_112]));

DEFLABEL (continuation_106)
  INTERRUPT_CHECK (27, LABEL_114);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_161]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_107)
  INTERRUPT_CHECK (27, LABEL_113);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_187;
  Wrd11 = Wrd15;

DEFLABEL (label_186)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_158]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_185;
  Wrd18 = Wrd22;

DEFLABEL (label_184)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_120]));

DEFLABEL (continuation_108)
  INTERRUPT_CHECK (27, LABEL_117);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_165]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_109)
  INTERRUPT_CHECK (27, LABEL_116);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_162]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_163]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_183;
  Wrd13 = Wrd17;

DEFLABEL (label_182)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_164]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_112]));

DEFLABEL (continuation_110)
  INTERRUPT_CHECK (27, LABEL_122);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_166]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_111)
  INTERRUPT_CHECK (27, LABEL_121);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_181;
  Wrd11 = Wrd15;

DEFLABEL (label_180)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_163]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_179;
  Wrd18 = Wrd22;

DEFLABEL (label_178)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_120]));

DEFLABEL (continuation_112)
  INTERRUPT_CHECK (27, LABEL_125);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_169]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_113)
  INTERRUPT_CHECK (27, LABEL_124);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_167]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_168]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_114)
  INTERRUPT_CHECK (27, LABEL_128);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_170]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_171]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_115)
  INTERRUPT_CHECK (27, LABEL_129);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_172]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_173]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_116)
  INTERRUPT_CHECK (27, LABEL_130);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_174]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_175]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_117)
  INTERRUPT_CHECK (27, LABEL_131);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_132]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_176]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_177]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_118)
  INTERRUPT_CHECK (27, LABEL_132);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_178]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_179]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_119)
  INTERRUPT_CHECK (27, LABEL_133);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_134]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_180]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_181]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_120)
  INTERRUPT_CHECK (27, LABEL_134);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_135]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_182]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_183]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_121)
  INTERRUPT_CHECK (27, LABEL_135);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_136]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_137]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_138]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_184]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_42]));

DEFLABEL (continuation_122)
  INTERRUPT_CHECK (27, LABEL_138);
  (Wrd9.Obj) = (current_block [OBJECT_75]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77]), 2);

DEFLABEL (continuation_124)
  INTERRUPT_CHECK (27, LABEL_137);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_187]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_125)
  INTERRUPT_CHECK (27, LABEL_136);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_139]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_185]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_186]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_126)
  INTERRUPT_CHECK (27, LABEL_139);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_140]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_188]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_189]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_127)
  INTERRUPT_CHECK (27, LABEL_140);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_141]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_190]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_191]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_128)
  INTERRUPT_CHECK (27, LABEL_141);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_142]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_192]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_193]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_129)
  INTERRUPT_CHECK (27, LABEL_142);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_143]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_194]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_195]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_130)
  INTERRUPT_CHECK (27, LABEL_143);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_144]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_196]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_197]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_131)
  INTERRUPT_CHECK (27, LABEL_144);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_145]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_198]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_199]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_132)
  INTERRUPT_CHECK (27, LABEL_145);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_146]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_200]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_201]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_133)
  INTERRUPT_CHECK (27, LABEL_146);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_147]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_202]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_203]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_134)
  INTERRUPT_CHECK (27, LABEL_147);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_148]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_204]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_205]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_135)
  INTERRUPT_CHECK (27, LABEL_148);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_149]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_206]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_207]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_136)
  INTERRUPT_CHECK (27, LABEL_149);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_150]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_208]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_209]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_137)
  INTERRUPT_CHECK (27, LABEL_150);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_151]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_210]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_211]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_138)
  INTERRUPT_CHECK (27, LABEL_151);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_152]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_212]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_213]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_139)
  INTERRUPT_CHECK (27, LABEL_152);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_153]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_214]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_215]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_140)
  INTERRUPT_CHECK (27, LABEL_153);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_154]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_216]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_217]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_141)
  INTERRUPT_CHECK (27, LABEL_154);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_155]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_218]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_219]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_142)
  INTERRUPT_CHECK (27, LABEL_155);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_156]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_220]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_221]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_143)
  INTERRUPT_CHECK (27, LABEL_156);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_157]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_222]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_223]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_144)
  INTERRUPT_CHECK (27, LABEL_157);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_158]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_224]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_225]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_145)
  INTERRUPT_CHECK (27, LABEL_158);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_159]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_160]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_161]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_226]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_42]));

DEFLABEL (continuation_146)
  INTERRUPT_CHECK (27, LABEL_161);
  (Wrd9.Obj) = (current_block [OBJECT_75]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77]), 2);

DEFLABEL (continuation_148)
  INTERRUPT_CHECK (27, LABEL_160);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_229]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_149)
  INTERRUPT_CHECK (27, LABEL_159);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_162]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_227]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_228]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_150)
  INTERRUPT_CHECK (27, LABEL_162);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_163]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_230]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_231]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_151)
  INTERRUPT_CHECK (27, LABEL_163);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_164]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_232]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_233]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_152)
  INTERRUPT_CHECK (27, LABEL_164);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_165]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_234]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_235]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_153)
  INTERRUPT_CHECK (27, LABEL_165);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_166]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_236]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_237]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_154)
  INTERRUPT_CHECK (27, LABEL_166);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_167]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_238]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_239]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_155)
  INTERRUPT_CHECK (27, LABEL_167);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_168]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_240]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_241]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_156)
  INTERRUPT_CHECK (27, LABEL_168);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_169]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_242]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_243]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_157)
  INTERRUPT_CHECK (27, LABEL_169);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_170]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_244]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_245]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_158)
  INTERRUPT_CHECK (27, LABEL_170);
  (Wrd5.Obj) = (current_block [OBJECT_246]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_247]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (label_179)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_127])), (Wrd19.pObj));

DEFLABEL (label_171)
  (Wrd18.Obj) = Rvl;
  goto label_178;

DEFLABEL (label_181)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_126])), (Wrd12.pObj));

DEFLABEL (label_170)
  (Wrd11.Obj) = Rvl;
  goto label_180;

DEFLABEL (label_183)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_123])), (Wrd14.pObj));

DEFLABEL (label_169)
  (Wrd13.Obj) = Rvl;
  goto label_182;

DEFLABEL (label_185)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_119])), (Wrd19.pObj));

DEFLABEL (label_168)
  (Wrd18.Obj) = Rvl;
  goto label_184;

DEFLABEL (label_187)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_118])), (Wrd12.pObj));

DEFLABEL (label_167)
  (Wrd11.Obj) = Rvl;
  goto label_186;

DEFLABEL (label_189)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_115])), (Wrd14.pObj));

DEFLABEL (label_166)
  (Wrd13.Obj) = Rvl;
  goto label_188;

DEFLABEL (label_191)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_111])), (Wrd14.pObj));

DEFLABEL (label_165)
  (Wrd13.Obj) = Rvl;
  goto label_190;

DEFLABEL (label_193)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_96])), (Wrd12.pObj));

DEFLABEL (label_164)
  (Wrd11.Obj) = Rvl;
  goto label_192;

DEFLABEL (label_195)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_89])), (Wrd12.pObj));

DEFLABEL (label_163)
  (Wrd11.Obj) = Rvl;
  goto label_194;

DEFLABEL (label_197)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_83])), (Wrd12.pObj));

DEFLABEL (label_162)
  (Wrd11.Obj) = Rvl;
  goto label_196;

DEFLABEL (label_199)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75])), (Wrd12.pObj));

DEFLABEL (label_161)
  (Wrd11.Obj) = Rvl;
  goto label_198;

DEFLABEL (make_connection_173)
  CLOSURE_HEADER (LABEL_78);

DEFLABEL (make_connection_71)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd7.pObj) = (& (Rhp [-3]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (make_result_174)
  CLOSURE_HEADER (LABEL_91);

DEFLABEL (make_result_84)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd7.pObj) = (& (Rhp [-3]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_pgsql_so_fcdc7dbe4a1cfc41 [95] =
  {
    { "pgsql_so_code_1", 1, pgsql_so_code_1 },
    { "pgsql_so_code_2", 1, pgsql_so_code_2 },
    { "pgsql_so_code_3", 1, pgsql_so_code_3 },
    { "pgsql_so_code_4", 1, pgsql_so_code_4 },
    { "pgsql_so_code_5", 1, pgsql_so_code_5 },
    { "pgsql_so_code_6", 1, pgsql_so_code_6 },
    { "pgsql_so_code_7", 1, pgsql_so_code_7 },
    { "pgsql_so_code_8", 1, pgsql_so_code_8 },
    { "pgsql_so_code_9", 1, pgsql_so_code_9 },
    { "pgsql_so_code_10", 1, pgsql_so_code_10 },
    { "pgsql_so_code_11", 1, pgsql_so_code_11 },
    { "pgsql_so_code_12", 1, pgsql_so_code_12 },
    { "pgsql_so_code_13", 1, pgsql_so_code_13 },
    { "pgsql_so_code_14", 1, pgsql_so_code_14 },
    { "pgsql_so_code_15", 1, pgsql_so_code_15 },
    { "pgsql_so_code_16", 1, pgsql_so_code_16 },
    { "pgsql_so_code_17", 1, pgsql_so_code_17 },
    { "pgsql_so_code_18", 1, pgsql_so_code_18 },
    { "pgsql_so_code_19", 1, pgsql_so_code_19 },
    { "pgsql_so_code_20", 1, pgsql_so_code_20 },
    { "pgsql_so_code_21", 1, pgsql_so_code_21 },
    { "pgsql_so_code_22", 1, pgsql_so_code_22 },
    { "pgsql_so_code_23", 1, pgsql_so_code_23 },
    { "pgsql_so_code_24", 1, pgsql_so_code_24 },
    { "pgsql_so_code_25", 1, pgsql_so_code_25 },
    { "pgsql_so_code_26", 1, pgsql_so_code_26 },
    { "pgsql_so_code_27", 1, pgsql_so_code_27 },
    { "pgsql_so_code_28", 1, pgsql_so_code_28 },
    { "pgsql_so_code_29", 1, pgsql_so_code_29 },
    { "pgsql_so_code_30", 1, pgsql_so_code_30 },
    { "pgsql_so_code_31", 1, pgsql_so_code_31 },
    { "pgsql_so_code_32", 1, pgsql_so_code_32 },
    { "pgsql_so_code_33", 1, pgsql_so_code_33 },
    { "pgsql_so_code_34", 1, pgsql_so_code_34 },
    { "pgsql_so_code_35", 1, pgsql_so_code_35 },
    { "pgsql_so_code_36", 17, pgsql_so_code_36 },
    { "pgsql_so_code_37", 4, pgsql_so_code_37 },
    { "pgsql_so_code_38", 1, pgsql_so_code_38 },
    { "pgsql_so_code_39", 1, pgsql_so_code_39 },
    { "pgsql_so_code_40", 4, pgsql_so_code_40 },
    { "pgsql_so_code_41", 1, pgsql_so_code_41 },
    { "pgsql_so_code_42", 1, pgsql_so_code_42 },
    { "pgsql_so_code_43", 4, pgsql_so_code_43 },
    { "pgsql_so_code_44", 13, pgsql_so_code_44 },
    { "pgsql_so_code_45", 2, pgsql_so_code_45 },
    { "pgsql_so_code_46", 1, pgsql_so_code_46 },
    { "pgsql_so_code_47", 3, pgsql_so_code_47 },
    { "pgsql_so_code_48", 2, pgsql_so_code_48 },
    { "pgsql_so_code_49", 1, pgsql_so_code_49 },
    { "pgsql_so_code_50", 3, pgsql_so_code_50 },
    { "pgsql_so_code_51", 17, pgsql_so_code_51 },
    { "pgsql_so_code_52", 2, pgsql_so_code_52 },
    { "pgsql_so_code_53", 1, pgsql_so_code_53 },
    { "pgsql_so_code_54", 3, pgsql_so_code_54 },
    { "pgsql_so_code_55", 4, pgsql_so_code_55 },
    { "pgsql_so_code_56", 5, pgsql_so_code_56 },
    { "pgsql_so_code_57", 12, pgsql_so_code_57 },
    { "pgsql_so_code_58", 2, pgsql_so_code_58 },
    { "pgsql_so_code_59", 6, pgsql_so_code_59 },
    { "pgsql_so_code_60", 4, pgsql_so_code_60 },
    { "pgsql_so_code_61", 3, pgsql_so_code_61 },
    { "pgsql_so_code_62", 7, pgsql_so_code_62 },
    { "pgsql_so_code_63", 7, pgsql_so_code_63 },
    { "pgsql_so_code_64", 7, pgsql_so_code_64 },
    { "pgsql_so_code_65", 5, pgsql_so_code_65 },
    { "pgsql_so_code_66", 5, pgsql_so_code_66 },
    { "pgsql_so_code_67", 5, pgsql_so_code_67 },
    { "pgsql_so_code_68", 5, pgsql_so_code_68 },
    { "pgsql_so_code_69", 5, pgsql_so_code_69 },
    { "pgsql_so_code_70", 5, pgsql_so_code_70 },
    { "pgsql_so_code_71", 5, pgsql_so_code_71 },
    { "pgsql_so_code_72", 5, pgsql_so_code_72 },
    { "pgsql_so_code_73", 5, pgsql_so_code_73 },
    { "pgsql_so_code_74", 5, pgsql_so_code_74 },
    { "pgsql_so_code_75", 7, pgsql_so_code_75 },
    { "pgsql_so_code_76", 5, pgsql_so_code_76 },
    { "pgsql_so_code_77", 5, pgsql_so_code_77 },
    { "pgsql_so_code_78", 5, pgsql_so_code_78 },
    { "pgsql_so_code_79", 5, pgsql_so_code_79 },
    { "pgsql_so_code_80", 2, pgsql_so_code_80 },
    { "pgsql_so_code_81", 2, pgsql_so_code_81 },
    { "pgsql_so_code_82", 15, pgsql_so_code_82 },
    { "pgsql_so_code_83", 10, pgsql_so_code_83 },
    { "pgsql_so_code_84", 3, pgsql_so_code_84 },
    { "pgsql_so_code_85", 7, pgsql_so_code_85 },
    { "pgsql_so_code_86", 5, pgsql_so_code_86 },
    { "pgsql_so_code_87", 5, pgsql_so_code_87 },
    { "pgsql_so_code_88", 5, pgsql_so_code_88 },
    { "pgsql_so_code_89", 5, pgsql_so_code_89 },
    { "pgsql_so_code_90", 7, pgsql_so_code_90 },
    { "pgsql_so_code_91", 2, pgsql_so_code_91 },
    { "pgsql_so_code_92", 5, pgsql_so_code_92 },
    { "pgsql_so_code_93", 6, pgsql_so_code_93 },
    { "pgsql_so_code_94", 5, pgsql_so_code_94 },
    { "pgsql_so_code_95", 6, pgsql_so_code_95 }
  };

int
decl_pgsql_so_fcdc7dbe4a1cfc41 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_pgsql_so_fcdc7dbe4a1cfc41);
  return (0);
}

DECLARE_COMPILED_CODE ("pgsql.so", 163, decl_pgsql_so_fcdc7dbe4a1cfc41, pgsql_so_fcdc7dbe4a1cfc41)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_pgsql_so_data_fcdc7dbe4a1cfc41 [11208] =
  "\xd8\x04\x92\x01\xe3\x16\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc1\x22"
  "\x29\x21\x9d\x2b\xb9\x1d\xb0\x82\x88\xc1\xba\x22\x29\x21\x9d\x2b"
  "\xbb\x1d\xb0\x83\x88\xc1\xbc\x22\x29\x21\x9d\x2b\xbd\x1d\xb0\x84"
  "\x88\xc2\xbe\x22\x29\x21\x9d\x2b\xbf\x1d\xb0\x85\x88\xc1\x1c\x22"
  "\x29\x21\x9d\x2b\x1c\x1d\xb0\x86\x88\xc2\x1c\x22\x29\x21\x9d\x2b"
  "\x1c\x1d\xb0\x02\x88\xc1\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02"
  "\x88\xc1\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x22"
  "\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x22\x29\x21\x9d\x2b"
  "\x1c\x1d\xb0\x02\x88\xc2\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02"
  "\x88\xc3\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x22"
  "\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x22\x29\x21\x9d\x2b"
  "\x1c\x1d\xb0\x02\x88\xc3\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02"
  "\x88\xc2\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x22"
  "\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x22\x29\x21\x9d\x2b"
  "\x1c\x1d\xb0\x02\x88\xc3\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02"
  "\x88\xc1\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x22"
  "\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x22\x29\x21\x9d\x2b"
  "\x1c\x1d\xb0\x02\x88\xc1\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02"
  "\x88\xc1\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x22"
  "\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x22\x29\x21\x9d\x2b\x1c"
  "\x1d\xb0\x02\x88\xc1\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88"
  "\xc1\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x22\x29"
  "\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x22\x29\x21\x9d\x2b\x1c"
  "\x1d\xb0\x02\x88\xc1\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88"
  "\xc1\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x22\x29"
  "\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x22\x29\x21\x9d\x2b\x1c"
  "\x1d\xb0\x02\x88\xc1\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88"
  "\x80\x0d\x1c\xc1\x1c\x0d\x08\x0d\x1c\x0d\x1c\x0d\x1b\x08\x8a\xc1"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc2\xc1\x0d\x1c\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2"
  "\x1c\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x1d\x81"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80\xc1\x1c\x0e"
  "\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d"
  "\x81\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80\x1b\x0e"
  "\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x0d\x0d\x0d\x0d\x1b\x0d\x1c\x0d\x1c\x08\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x1b\x0d\x1c\x0d\x08\x89\x1b\x28\x1b\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x23\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\xb6\x0c\x0d\x1c\x0d\x1c\x0d\x1c\x25\x1b\x0d\x1c\x0d"
  "\x1c\x1b\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x0d\x1c\x24\x28\x0d\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x1c\x0c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0c\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x0c\x07\x0c\x0c\x28\x1b\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\xb6\x1b\x07"
  "\x1d\x1b\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\xbe\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x1b\x81\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b\x81"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1b\x1b\x81\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x81\x1b\x24\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x0d\x08\x1b\x1b"
  "\x08\x89\x0d\x1c\x1b\x1b\x08\x88\x1b\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x81\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1b\x1b\x81\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x81"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x81\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1b\x1b\x81\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b"
  "\x81\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x81\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1b\x1b\x81\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b"
  "\x1b\x81\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x81\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1b\x1b\x81\x0d\x1c\x24\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x81\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1b\x1b\x81\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b"
  "\x1b\x81\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xc1\xc1\x28\x1b\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x1b\x1b\x1b\x81\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x08\x8b\x0d\x1c\x1b\x24\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x1b\x28"
  "\xb6\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x1b\x1b\x1b\x81\x1b\x24\x28\x1b\x28\x1b\x28\xb6\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x1c\x1b\x81\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\xbe\x1d\xb0\x02\x88\x1b\x1b\x0d\x08\x1b\x1b\x08\x89\x1b"
  "\x1b\x1b\x08\x88\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1b\x1b\x81\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b"
  "\x81\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x81\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb2\x1b\x1b\x81\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b"
  "\x1b\x81\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1b\x1b\x81\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b"
  "\x1b\x1b\x81\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x81"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x1b\x1b\x81\x28\x1b\x28\x0d\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x0d\x0d\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x1b\x2a\x1b\x2a\x1b\xb6\x2a\x0d\x1b\x2a\x1b\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x0d\x1b\x2a\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b"
  "\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x1b\x2a\x0d"
  "\x1c\x1b\x0d\x0d\x1b\x08\x89\x1b\x2a\x0d\x1c\x0d\x1c\x0d\x1b\x08"
  "\x88\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x0d\x1b\x2a\x1b"
  "\x2a\x1b\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x1b\x2a\x0d\x1c\x0c\x1b"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x1b\x2a\x0d\x1c\x0c\x0d\x08\x88"
  "\x08\x1b\x1b\x1b\x1b\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x1b\x1b\x1b\x0d"
  "\x1c\x9f\x1b\x02\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x9c\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x0d\x1c\x9e\x1b\x86\x1b\x85\x1b"
  "\x84\x1b\x83\x1b\x82\x1b\x81\x1b\x80\xc2\x02\x02\x0d\x1b\x1b\x2a"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d"
  "\xb7\x2a\x0d\xb5\x2a\x0d\xb3\x2a\xc3\x1b\xb1\x2a\x28\x0d\x28\x0d"
  "\x28\x0d\x26\x1b\x1b\x0d\x1b\x0d\x1b\x1b\x24\x28\x0d\x28\x0d\x23"
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
  "\x22\x29\x22\x29\x22\x29\x21\x17\x02\x54\x2f\x55\x73\x65\x72\x73"
  "\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65"
  "\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d"
  "\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d"
  "\x65\x2f\x2e\x2f\x70\x67\x73\x71\x6c\x2e\x69\x6e\x66\x15\x23\x5b"
  "\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f"
  "\x74\x5d\x02\x09\x70\x71\x2d\x63\x6c\x65\x61\x72\xa4\x01\x04\x83"
  "\x04\x03\x02\x0e\x70\x71\x2d\x63\x6d\x64\x2d\x73\x74\x61\x74\x75"
  "\x73\xa5\x01\x04\x83\x04\x03\x02\x0e\x70\x71\x2d\x63\x6d\x64\x2d"
  "\x74\x75\x70\x6c\x65\x73\xa6\x01\x04\x83\x04\x03\x02\x0e\x70\x71"
  "\x2d\x63\x6f\x6e\x6e\x65\x63\x74\x2d\x64\x62\xa7\x01\x04\x84\x06"
  "\x03\x02\x10\x70\x71\x2d\x63\x6f\x6e\x6e\x65\x63\x74\x2d\x70\x6f"
  "\x6c\x6c\x09\xa8\x01\x04\x83\x04\x03\x0a\x02\x11\x70\x71\x2d\x63"
  "\x6f\x6e\x6e\x65\x63\x74\x2d\x73\x74\x61\x72\x74\x0b\xa9\x01\x04"
  "\x84\x06\x03\x0c\x02\x08\x06\x70\x71\x2d\x64\x62\x0d\xaa\x01\x04"
  "\x83\x04\x03\x0e\x02\x09\x0c\x70\x71\x2d\x65\x6e\x64\x2d\x63\x6f"
  "\x70\x79\x0f\xab\x01\x04\x83\x04\x03\x10\x02\x0a\x11\x70\x71\x2d"
  "\x65\x72\x72\x6f\x72\x2d\x6d\x65\x73\x73\x61\x67\x65\x11\xac\x01"
  "\x04\x83\x04\x03\x12\x02\x0b\x10\x70\x71\x2d\x65\x73\x63\x61\x70"
  "\x65\x2d\x62\x79\x74\x65\x61\x13\xad\x01\x04\x83\x04\x03\x14\x02"
  "\x0c\x11\x70\x71\x2d\x65\x73\x63\x61\x70\x65\x2d\x73\x74\x72\x69"
  "\x6e\x67\x15\xae\x01\x04\x84\x06\x03\x16\x02\x0d\x08\x70\x71\x2d"
  "\x65\x78\x65\x63\x17\xaf\x01\x04\x85\x08\x03\x18\x02\x0e\x0e\x70"
  "\x71\x2d\x66\x69\x65\x6c\x64\x2d\x6e\x61\x6d\x65\x19\xb0\x01\x04"
  "\x84\x06\x03\x1a\x02\x0f\x0a\x70\x71\x2d\x66\x69\x6e\x69\x73\x68"
  "\x1b\xb1\x01\x04\x83\x04\x03\x1c\x02\x10\x10\x70\x71\x2d\x67\x65"
  "\x74\x2d\x69\x73\x2d\x6e\x75\x6c\x6c\x3f\x1d\xb2\x01\x04\x85\x08"
  "\x03\x1e\x02\x11\x0c\x70\x71\x2d\x67\x65\x74\x2d\x6c\x69\x6e\x65"
  "\x1f\xb3\x01\x04\x84\x06\x03\x20\x02\x12\x0d\x70\x71\x2d\x67\x65"
  "\x74\x2d\x76\x61\x6c\x75\x65\x21\xb4\x01\x04\x85\x08\x03\x22\x02"
  "\x13\x08\x70\x71\x2d\x68\x6f\x73\x74\x23\xb5\x01\x04\x83\x04\x03"
  "\x24\x02\x14\x18\x70\x71\x2d\x6d\x61\x6b\x65\x2d\x65\x6d\x70\x74"
  "\x79\x2d\x70\x67\x2d\x72\x65\x73\x75\x6c\x74\x25\xb6\x01\x04\x85"
  "\x08\x03\x26\x02\x15\x0c\x70\x71\x2d\x6e\x2d\x66\x69\x65\x6c\x64"
  "\x73\x27\xb7\x01\x04\x83\x04\x03\x28\x02\x16\x0c\x70\x71\x2d\x6e"
  "\x2d\x74\x75\x70\x6c\x65\x73\x29\xb8\x01\x04\x83\x04\x03\x2a\x02"
  "\x17\x0b\x70\x71\x2d\x6f\x70\x74\x69\x6f\x6e\x73\x2b\xb9\x01\x04"
  "\x83\x04\x03\x2c\x02\x18\x08\x70\x71\x2d\x70\x61\x73\x73\x2d\xba"
  "\x01\x04\x83\x04\x03\x2e\x02\x19\x08\x70\x71\x2d\x70\x6f\x72\x74"
  "\x2f\xbb\x01\x04\x83\x04\x03\x30\x02\x1a\x0c\x70\x71\x2d\x70\x75"
  "\x74\x2d\x6c\x69\x6e\x65\x31\xbc\x01\x04\x84\x06\x03\x32\x02\x1b"
  "\x0e\x70\x71\x2d\x72\x65\x73\x2d\x73\x74\x61\x74\x75\x73\xbd\x01"
  "\x04\x83\x04\x03\x33\x02\x1c\x09\x70\x71\x2d\x72\x65\x73\x65\x74"
  "\x34\xbe\x01\x04\x83\x04\x03\x35\x02\x1d\x0e\x70\x71\x2d\x72\x65"
  "\x73\x65\x74\x2d\x70\x6f\x6c\x6c\x36\xbf\x01\x04\x83\x04\x03\x37"
  "\x02\x1e\x0f\x70\x71\x2d\x72\x65\x73\x65\x74\x2d\x73\x74\x61\x72"
  "\x74\x38\xc0\x01\x04\x83\x04\x03\x39\x02\x1f\x18\x70\x71\x2d\x72"
  "\x65\x73\x75\x6c\x74\x2d\x65\x72\x72\x6f\x72\x2d\x6d\x65\x73\x73"
  "\x61\x67\x65\x3a\xc1\x01\x04\x83\x04\x03\x3b\x02\x20\x11\x70\x71"
  "\x2d\x72\x65\x73\x75\x6c\x74\x2d\x73\x74\x61\x74\x75\x73\x3c\xc2"
  "\x01\x04\x83\x04\x03\x3d\x02\x21\x0a\x70\x71\x2d\x73\x74\x61\x74"
  "\x75\x73\x3e\xc3\x01\x04\x83\x04\x03\x3f\x02\x22\x07\x70\x71\x2d"
  "\x74\x74\x79\x40\xc4\x01\x04\x83\x04\x03\x41\x02\x23\x12\x70\x71"
  "\x2d\x75\x6e\x65\x73\x63\x61\x70\x65\x2d\x62\x79\x74\x65\x61\x42"
  "\xc5\x01\x04\x83\x04\x03\x43\x02\x24\x08\x70\x71\x2d\x75\x73\x65"
  "\x72\x44\xc6\x01\x04\x83\x04\x03\x45\x02\x25\x07\x64\x65\x66\x69"
  "\x6e\x65\x46\x04\x63\x61\x72\x47\x06\x71\x75\x6f\x74\x65\x06\x62"
  "\x65\x67\x69\x6e\x48\x0b\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72"
  "\x49\x02\x2a\x49\x04\x63\x64\x72\x49\x04\x0e\x73\x79\x6e\x74\x61"
  "\x78\x2d\x6d\x61\x74\x63\x68\x3f\x4a\x03\x12\x69\x6c\x6c\x2d\x66"
  "\x6f\x72\x6d\x65\x64\x2d\x73\x79\x6e\x74\x61\x78\x4b\x03\x0d\x6c"
  "\x69\x73\x74\x2d\x3e\x76\x65\x63\x74\x6f\x72\x04\x07\x61\x70\x70"
  "\x65\x6e\x64\x05\xd7\x01\x24\x81\x87\x02\xd6\x01\x22\x81\x85\x02"
  "\xd5\x01\x20\x81\x89\x02\xd4\x01\x1e\x81\x87\x02\xd3\x01\x1c\x81"
  "\x85\x02\xd2\x01\x1a\x81\x89\x02\xd1\x01\x18\x81\x8d\x02\xd0\x01"
  "\x16\x81\x8d\x02\xcf\x01\x14\x81\x89\x02\xce\x01\x12\x81\x89\x02"
  "\xcd\x01\x10\x81\x87\x02\xcc\x01\x0e\x81\x85\x02\xcb\x01\x0c\x81"
  "\x89\x02\xca\x01\x0a\x81\x89\x02\xc9\x01\x08\x81\x85\x02\xc8\x01"
  "\x06\x81\x87\x02\xc7\x01\x04\x84\x06\x23\x37\x4c\x02\x26\x0b\x76"
  "\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x0e\x76\x65\x63\x74\x6f\x72"
  "\x2d\x6c\x65\x6e\x67\x74\x68\x0c\x69\x6e\x64\x65\x78\x2d\x3e\x6e"
  "\x61\x6d\x65\x4d\x04\x17\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d"
  "\x69\x6e\x64\x65\x78\x2d\x66\x69\x78\x6e\x75\x6d\x04\x19\x65\x72"
  "\x72\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72"
  "\x67\x75\x6d\x65\x6e\x74\x03\xdb\x01\x0a\x81\x85\x02\xda\x01\x08"
  "\x81\x85\x02\xd9\x01\x06\x81\x85\x02\xd8\x01\x04\x84\x06\x09\x14"
  "\x4e\x02\x27\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x4f"
  "\xdc\x01\x04\x83\x04\x03\x50\x02\x28\x0d\x25\x72\x65\x63\x6f\x72"
  "\x64\x2d\x73\x65\x74\x21\x51\x02\xdd\x01\x04\x84\x06\x03\x52\x02"
  "\x29\x4f\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65\x6e\x67\x74"
  "\x68\x53\x07\x2e\x74\x61\x67\x2e\x31\x54\x02\xe1\x01\x0a\x81\x85"
  "\x02\xe0\x01\x08\x81\x83\x02\xdf\x01\x06\x81\x83\x02\xde\x01\x04"
  "\x83\x04\x09\x12\x55\x02\x2a\x4f\xe2\x01\x04\x83\x04\x03\x56\x02"
  "\x2b\x51\x02\xe3\x01\x04\x84\x06\x03\x51\x02\x2c\x4f\x53\x07\x2e"
  "\x74\x61\x67\x2e\x32\x53\x02\xe7\x01\x0a\x81\x85\x02\xe6\x01\x08"
  "\x81\x83\x02\xe5\x01\x06\x81\x83\x02\xe4\x01\x04\x83\x04\x09\x12"
  "\x57\x02\x2d\x48\x04\x6e\x6f\x74\x12\x64\x65\x66\x69\x6e\x65\x2d"
  "\x69\x6e\x74\x65\x67\x72\x61\x62\x6c\x65\x03\x69\x66\x04\x61\x6e"
  "\x64\x46\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74"
  "\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x48\x07\x6f\x62"
  "\x6a\x65\x63\x74\x58\x07\x63\x61\x6c\x6c\x65\x72\x08\x2d\x68\x61"
  "\x6e\x64\x6c\x65\x02\x3f\x0b\x67\x75\x61\x72\x61\x6e\x74\x65\x65"
  "\x2d\x0b\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x11\x67\x75\x61"
  "\x72\x61\x6e\x74\x65\x65\x2d\x76\x61\x6c\x69\x64\x2d\x47\x07\x73"
  "\x79\x6d\x62\x6f\x6c\x59\x0b\x65\x78\x70\x72\x65\x73\x73\x69\x6f"
  "\x6e\x49\x04\x4a\x03\x4b\x04\x0e\x73\x79\x6d\x62\x6f\x6c\x2d\x61"
  "\x70\x70\x65\x6e\x64\x5a\x04\xf4\x01\x1c\x81\x8f\x02\xf3\x01\x1a"
  "\x81\x8f\x02\xf2\x01\x18\x81\x8f\x02\xf1\x01\x16\x81\x8f\x02\xf0"
  "\x01\x14\x81\x8d\x02\xef\x01\x12\x81\x8b\x02\xee\x01\x10\x81\x89"
  "\x02\xed\x01\x0e\x81\x87\x02\xec\x01\x0c\x81\x85\x02\xeb\x01\x0a"
  "\x81\x85\x02\xea\x01\x08\x81\x85\x02\xe9\x01\x06\x81\x87\x02\xe8"
  "\x01\x04\x84\x06\x1b\x37\x5b\x02\x2e\x02\x03\x0c\x63\x6f\x6e\x6e"
  "\x65\x63\x74\x69\x6f\x6e\x3f\x5c\x04\x15\x65\x72\x72\x6f\x72\x3a"
  "\x6e\x6f\x74\x2d\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x5d\x03"
  "\xf6\x01\x06\x81\x85\x02\xf5\x01\x04\x84\x06\x05\x0e\x5e\x02\x2f"
  "\x16\x50\x6f\x73\x74\x67\x72\x65\x53\x51\x4c\x20\x63\x6f\x6e\x6e"
  "\x65\x63\x74\x69\x6f\x6e\x05\x48\x02\xf7\x01\x04\x84\x06\x03\x0a"
  "\x5f\x02\x30\x4f\x03\x5c\x04\x5d\x03\xfa\x01\x08\x81\x85\x02\xf9"
  "\x01\x06\x81\x85\x02\xf8\x01\x04\x84\x06\x07\x11\x60\x02\x31\x02"
  "\x03\x08\x72\x65\x73\x75\x6c\x74\x3f\x61\x04\x11\x65\x72\x72\x6f"
  "\x72\x3a\x6e\x6f\x74\x2d\x72\x65\x73\x75\x6c\x74\x62\x03\xfc\x01"
  "\x06\x81\x85\x02\xfb\x01\x04\x84\x06\x05\x0e\x63\x02\x32\x18\x50"
  "\x6f\x73\x74\x67\x72\x65\x53\x51\x4c\x20\x71\x75\x65\x72\x79\x20"
  "\x72\x65\x73\x75\x6c\x74\x05\x48\x02\xfd\x01\x04\x84\x06\x03\x0a"
  "\x48\x02\x33\x4f\x03\x61\x04\x62\x03\x80\x02\x08\x81\x85\x02\xff"
  "\x01\x06\x81\x85\x02\xfe\x01\x04\x84\x06\x07\x11\x64\x02\x34\x08"
  "\x70\x72\x70\x67\x73\x71\x6c\x08\x72\x65\x73\x75\x6c\x74\x73\x65"
  "\x13\x70\x67\x73\x71\x6c\x2d\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a"
  "\x65\x64\x3f\x66\x0c\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x73"
  "\x67\x04\x66\x17\x73\x65\x74\x2d\x63\x6f\x6e\x6e\x65\x63\x74\x69"
  "\x6f\x6e\x2d\x68\x61\x6e\x64\x6c\x65\x21\x68\x12\x63\x6f\x6e\x6e"
  "\x65\x63\x74\x69\x6f\x6e\x2d\x68\x61\x6e\x64\x6c\x65\x69\x5c\x0a"
  "\x70\x71\x2d\x66\x69\x6e\x69\x73\x68\x6a\x13\x73\x65\x74\x2d\x72"
  "\x65\x73\x75\x6c\x74\x2d\x68\x61\x6e\x64\x6c\x65\x21\x6b\x0e\x72"
  "\x65\x73\x75\x6c\x74\x2d\x68\x61\x6e\x64\x6c\x65\x6c\x61\x09\x70"
  "\x71\x2d\x63\x6c\x65\x61\x72\x6d\x0a\x04\x19\x6c\x6f\x61\x64\x2d"
  "\x6c\x69\x62\x72\x61\x72\x79\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x66"
  "\x69\x6c\x65\x03\x21\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64"
  "\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x3f\x06\x12\x6d\x61\x6b\x65\x2d\x67\x63\x2d\x66"
  "\x69\x6e\x61\x6c\x69\x7a\x65\x72\x04\x91\x02\x24\x81\x89\x02\x90"
  "\x02\x22\x81\x87\x02\x8f\x02\x20\x81\x85\x02\x8e\x02\x1e\x81\x83"
  "\x02\x8d\x02\x1c\x81\x81\x02\x8c\x02\x1a\x81\x81\x02\x8b\x02\x18"
  "\x81\x89\x02\x8a\x02\x16\x81\x87\x02\x89\x02\x14\x81\x85\x02\x88"
  "\x02\x12\x81\x83\x02\x87\x02\x10\x81\x81\x02\x86\x02\x0e\x81\x81"
  "\x02\x85\x02\x0c\x81\x81\x02\x84\x02\x0a\x81\x81\x02\x83\x02\x08"
  "\x81\x81\x02\x82\x02\x06\x81\x81\x02\x81\x02\x04\x82\x02\x23\x3e"
  "\x6e\x02\x35\x02\x39\x54\x68\x69\x73\x20\x53\x63\x68\x65\x6d\x65"
  "\x20\x73\x79\x73\x74\x65\x6d\x20\x77\x61\x73\x20\x62\x75\x69\x6c"
  "\x74\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x50\x6f\x73\x74\x67\x72"
  "\x65\x53\x51\x4c\x20\x73\x75\x70\x70\x6f\x72\x74\x2e\x02\x11\x70"
  "\x67\x73\x71\x6c\x2d\x61\x76\x61\x69\x6c\x61\x62\x6c\x65\x3f\x6f"
  "\x03\x06\x65\x72\x72\x6f\x72\x70\x03\x93\x02\x06\x81\x81\x02\x92"
  "\x02\x04\x82\x02\x05\x0f\x71\x02\x36\x1a\x55\x6e\x6b\x6e\x6f\x77"
  "\x6e\x20\x50\x6f\x73\x74\x67\x72\x65\x53\x51\x4c\x20\x65\x72\x72"
  "\x6f\x72\x2e\x04\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e"
  "\x67\x72\x02\x94\x02\x04\x84\x06\x03\x0a\x73\x02\x37\x08\x6d\x65"
  "\x73\x73\x61\x67\x65\x74\x27\x55\x6e\x61\x62\x6c\x65\x20\x74\x6f"
  "\x20\x63\x6f\x6e\x6e\x65\x63\x74\x20\x74\x6f\x20\x50\x6f\x73\x74"
  "\x67\x72\x65\x53\x51\x4c\x20\x73\x65\x72\x76\x65\x72\x04\x72\x04"
  "\x11\x61\x63\x63\x65\x73\x73\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x75\x04\x0e\x77\x72\x69\x74\x65\x2d\x6d\x65\x73\x73\x61\x67"
  "\x65\x76\x04\x97\x02\x08\x81\x85\x02\x96\x02\x06\x81\x85\x02\x95"
  "\x02\x04\x84\x06\x07\x13\x77\x02\x38\x07\x72\x65\x73\x75\x6c\x74"
  "\x78\x17\x50\x6f\x73\x74\x67\x72\x65\x53\x51\x4c\x20\x71\x75\x65"
  "\x72\x79\x20\x65\x72\x72\x6f\x72\x04\x72\x04\x75\x04\x76\x03\x1b"
  "\x70\x67\x73\x71\x6c\x2d\x72\x65\x73\x75\x6c\x74\x2d\x65\x72\x72"
  "\x6f\x72\x2d\x6d\x65\x73\x73\x61\x67\x65\x75\x05\x9b\x02\x0a\x81"
  "\x87\x02\x9a\x02\x08\x81\x85\x02\x99\x02\x06\x81\x85\x02\x98\x02"
  "\x04\x84\x06\x09\x17\x79\x02\x39\x22\x5c\x60\x5c\x73\x20\x2a\x5c"
  "\x28\x65\x72\x72\x6f\x72\x3a\x5c\x29\x3f\x5c\x73\x20\x2a\x5c\x28"
  "\x2e\x2a\x5c\x29\x5c\x73\x20\x2a\x5c\x27\x03\x3a\x20\x02\x2e\x04"
  "\x72\x05\x10\x72\x65\x2d\x73\x74\x72\x69\x6e\x67\x2d\x6d\x61\x74"
  "\x63\x68\x04\x13\x72\x65\x2d\x6d\x61\x74\x63\x68\x2d\x65\x6e\x64"
  "\x2d\x69\x6e\x64\x65\x78\x04\x15\x72\x65\x2d\x6d\x61\x74\x63\x68"
  "\x2d\x73\x74\x61\x72\x74\x2d\x69\x6e\x64\x65\x78\x06\x10\x77\x72"
  "\x69\x74\x65\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x06\xa0\x02"
  "\x0c\x81\x89\x02\x9f\x02\x0a\x81\x89\x02\x9e\x02\x08\x81\x85\x02"
  "\x9d\x02\x06\x81\x85\x02\x9c\x02\x04\x84\x06\x0b\x1e\x72\x02\x3a"
  "\x1b\x11\x3e\x0b\x08\x67\x15\x70\x67\x73\x71\x6c\x2d\x63\x6f\x6e"
  "\x6e\x65\x63\x74\x69\x6f\x6e\x2d\x62\x61\x64\x1b\x03\x02\x1a\x67"
  "\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x70\x67\x73\x71\x6c\x2d\x61"
  "\x76\x61\x69\x6c\x61\x62\x6c\x65\x0b\x05\x19\x6d\x61\x6b\x65\x2d"
  "\x67\x63\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\x64\x2d\x6f\x62\x6a"
  "\x65\x63\x74\x03\x17\x65\x72\x72\x6f\x72\x3a\x70\x67\x73\x71\x6c"
  "\x2d\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x7a\x03\x10\x6d\x61"
  "\x6b\x65\x2d\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x7b\x05\xac"
  "\x02\x1a\x81\x83\x02\xab\x02\x18\x81\x85\x02\xaa\x02\x16\x81\x83"
  "\x02\xa9\x02\x14\x81\x85\x02\xa8\x02\x12\x81\x83\x02\xa7\x02\x10"
  "\x81\x83\x02\xa6\x02\x0e\x81\x83\x02\xa5\x02\x0c\x83\x04\xa4\x02"
  "\x0a\x81\x85\x02\xa3\x02\x08\x81\x87\x02\xa2\x02\x06\x81\x85\x02"
  "\xa1\x02\x04\x84\x04\x19\x2f\x7c\x02\x3b\x67\x02\x04\x1a\x72\x65"
  "\x6d\x6f\x76\x65\x2d\x66\x72\x6f\x6d\x2d\x67\x63\x2d\x66\x69\x6e"
  "\x61\x6c\x69\x7a\x65\x72\x21\x7d\x02\xae\x02\x06\x81\x83\x02\xad"
  "\x02\x04\x83\x04\x05\x0d\x7e\x02\x3c\x02\x05\x0d\x64\x79\x6e\x61"
  "\x6d\x69\x63\x2d\x77\x69\x6e\x64\x03\x10\x6f\x70\x65\x6e\x2d\x70"
  "\x67\x73\x71\x6c\x2d\x63\x6f\x6e\x6e\x7f\x03\x11\x63\x6c\x6f\x73"
  "\x65\x2d\x70\x67\x73\x71\x6c\x2d\x63\x6f\x6e\x6e\x80\x01\x04\xb4"
  "\x02\x0e\x81\x83\x02\xb3\x02\x0c\x81\x83\x02\xb2\x02\x0a\x81\x83"
  "\x02\xb1\x02\x08\x81\x83\x02\xb0\x02\x06\x81\x83\x02\xaf\x02\x04"
  "\x84\x06\x0d\x18\x81\x01\x02\x3d\x4f\x11\x70\x67\x73\x71\x6c\x2d"
  "\x63\x6f\x6e\x6e\x2d\x6f\x70\x65\x6e\x3f\x82\x01\x03\x5c\x04\x5d"
  "\x03\xb8\x02\x0a\x81\x83\x02\xb7\x02\x08\x81\x83\x02\xb6\x02\x06"
  "\x81\x83\x02\xb5\x02\x04\x83\x04\x09\x15\x83\x01\x02\x3e\x13\x63"
  "\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x2d\x3e\x68\x61\x6e\x64\x6c"
  "\x65\x84\x01\x4f\x03\x5c\x04\x5d\x03\xbb\x02\x08\x81\x83\x02\xba"
  "\x02\x06\x81\x83\x02\xb9\x02\x04\x83\x04\x07\x12\x85\x01\x02\x3f"
  "\x09\x84\x01\x4f\x18\x70\x6f\x73\x74\x67\x72\x65\x73\x2d\x70\x6f"
  "\x6c\x6c\x69\x6e\x67\x2d\x73\x74\x61\x74\x75\x73\x09\x02\x03\x5c"
  "\x04\x4d\x04\x5d\x04\xc2\x02\x10\x81\x85\x02\xc1\x02\x0e\x81\x87"
  "\x02\xc0\x02\x0c\x81\x87\x02\xbf\x02\x0a\x81\x87\x02\xbe\x02\x08"
  "\x81\x85\x02\xbd\x02\x06\x81\x83\x02\xbc\x02\x04\x83\x04\x0f\x1f"
  "\x86\x01\x02\x40\x36\x84\x01\x4f\x09\x02\x03\x5c\x04\x4d\x04\x5d"
  "\x04\xc9\x02\x10\x81\x85\x02\xc8\x02\x0e\x81\x87\x02\xc7\x02\x0c"
  "\x81\x87\x02\xc6\x02\x0a\x81\x87\x02\xc5\x02\x08\x81\x85\x02\xc4"
  "\x02\x06\x81\x83\x02\xc3\x02\x04\x83\x04\x0f\x1f\x36\x02\x41\x46"
  "\x58\x0c\x70\x67\x73\x71\x6c\x2d\x63\x6f\x6e\x6e\x2d\x84\x01\x58"
  "\x04\x70\x71\x2d\x87\x01\x47\x59\x49\x04\x4a\x03\x4b\x04\x5a\x04"
  "\xd0\x02\x10\x81\x85\x02\xcf\x02\x0e\x81\x83\x02\xce\x02\x0c\x81"
  "\x85\x02\xcd\x02\x0a\x81\x85\x02\xcc\x02\x08\x81\x85\x02\xcb\x02"
  "\x06\x81\x87\x02\xca\x02\x04\x84\x06\x0f\x22\x88\x01\x02\x42\x0d"
  "\x84\x01\x4f\x03\x5c\x04\x5d\x03\xd5\x02\x0c\x81\x83\x02\xd4\x02"
  "\x0a\x81\x85\x02\xd3\x02\x08\x81\x85\x02\xd2\x02\x06\x81\x85\x02"
  "\xd1\x02\x04\x83\x04\x0b\x17\x0d\x02\x43\x44\x84\x01\x4f\x03\x5c"
  "\x04\x5d\x03\xda\x02\x0c\x81\x83\x02\xd9\x02\x0a\x81\x85\x02\xd8"
  "\x02\x08\x81\x85\x02\xd7\x02\x06\x81\x85\x02\xd6\x02\x04\x83\x04"
  "\x0b\x17\x44\x02\x44\x2d\x84\x01\x4f\x03\x5c\x04\x5d\x03\xdf\x02"
  "\x0c\x81\x83\x02\xde\x02\x0a\x81\x85\x02\xdd\x02\x08\x81\x85\x02"
  "\xdc\x02\x06\x81\x85\x02\xdb\x02\x04\x83\x04\x0b\x17\x2d\x02\x45"
  "\x23\x84\x01\x4f\x03\x5c\x04\x5d\x03\xe4\x02\x0c\x81\x83\x02\xe3"
  "\x02\x0a\x81\x85\x02\xe2\x02\x08\x81\x85\x02\xe1\x02\x06\x81\x85"
  "\x02\xe0\x02\x04\x83\x04\x0b\x17\x23\x02\x46\x2f\x84\x01\x4f\x03"
  "\x5c\x04\x5d\x03\xe9\x02\x0c\x81\x83\x02\xe8\x02\x0a\x81\x85\x02"
  "\xe7\x02\x08\x81\x85\x02\xe6\x02\x06\x81\x85\x02\xe5\x02\x04\x83"
  "\x04\x0b\x17\x2f\x02\x47\x40\x84\x01\x4f\x03\x5c\x04\x5d\x03\xee"
  "\x02\x0c\x81\x83\x02\xed\x02\x0a\x81\x85\x02\xec\x02\x08\x81\x85"
  "\x02\xeb\x02\x06\x81\x85\x02\xea\x02\x04\x83\x04\x0b\x17\x40\x02"
  "\x48\x2b\x84\x01\x4f\x03\x5c\x04\x5d\x03\xf3\x02\x0c\x81\x83\x02"
  "\xf2\x02\x0a\x81\x85\x02\xf1\x02\x08\x81\x85\x02\xf0\x02\x06\x81"
  "\x85\x02\xef\x02\x04\x83\x04\x0b\x17\x2b\x02\x49\x34\x84\x01\x4f"
  "\x03\x5c\x04\x5d\x03\xf8\x02\x0c\x81\x83\x02\xf7\x02\x0a\x81\x85"
  "\x02\xf6\x02\x08\x81\x85\x02\xf5\x02\x06\x81\x85\x02\xf4\x02\x04"
  "\x83\x04\x0b\x17\x34\x02\x4a\x38\x84\x01\x4f\x03\x5c\x04\x5d\x03"
  "\xfd\x02\x0c\x81\x83\x02\xfc\x02\x0a\x81\x85\x02\xfb\x02\x08\x81"
  "\x85\x02\xfa\x02\x06\x81\x85\x02\xf9\x02\x04\x83\x04\x0b\x17\x38"
  "\x02\x4b\x11\x84\x01\x4f\x03\x5c\x04\x5d\x03\x82\x03\x0c\x81\x83"
  "\x02\x81\x03\x0a\x81\x85\x02\x80\x03\x08\x81\x85\x02\xff\x02\x06"
  "\x81\x85\x02\xfe\x02\x04\x83\x04\x0b\x17\x11\x02\x4c\x3e\x84\x01"
  "\x4f\x12\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x2d\x73\x74\x61"
  "\x74\x75\x73\x3e\x02\x03\x5c\x04\x4d\x04\x5d\x04\x89\x03\x10\x81"
  "\x85\x02\x88\x03\x0e\x81\x87\x02\x87\x03\x0c\x81\x87\x02\x86\x03"
  "\x0a\x81\x87\x02\x85\x03\x08\x81\x85\x02\x84\x03\x06\x81\x83\x02"
  "\x83\x03\x04\x83\x04\x0f\x1f\x89\x01\x02\x4d\x1f\x84\x01\x4f\x03"
  "\x5c\x04\x5d\x03\x8e\x03\x0c\x81\x85\x02\x8d\x03\x0a\x81\x87\x02"
  "\x8c\x03\x08\x81\x87\x02\x8b\x03\x06\x81\x87\x02\x8a\x03\x04\x84"
  "\x06\x0b\x17\x1f\x02\x4e\x31\x84\x01\x4f\x03\x5c\x04\x5d\x03\x93"
  "\x03\x0c\x81\x85\x02\x92\x03\x0a\x81\x87\x02\x91\x03\x08\x81\x87"
  "\x02\x90\x03\x06\x81\x87\x02\x8f\x03\x04\x84\x06\x0b\x17\x31\x02"
  "\x4f\x0f\x84\x01\x4f\x03\x5c\x04\x5d\x03\x98\x03\x0c\x81\x83\x02"
  "\x97\x03\x0a\x81\x85\x02\x96\x03\x08\x81\x85\x02\x95\x03\x06\x81"
  "\x85\x02\x94\x03\x04\x83\x04\x0b\x17\x0f\x02\x50\x15\x10\x73\x74"
  "\x72\x69\x6e\x67\x2d\x61\x6c\x6c\x6f\x63\x61\x74\x65\x0e\x73\x74"
  "\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x02\x0b\x04\x0d\x73"
  "\x74\x72\x69\x6e\x67\x2d\x68\x65\x61\x64\x21\x03\x9d\x03\x0c\x81"
  "\x85\x02\x9c\x03\x0a\x81\x83\x02\x9b\x03\x08\x81\x85\x02\x9a\x03"
  "\x06\x81\x83\x02\x99\x03\x04\x83\x04\x0b\x16\x15\x02\x51\x13\x02"
  "\x0b\x02\x9f\x03\x06\x81\x83\x02\x9e\x03\x04\x83\x04\x05\x0c\x13"
  "\x02\x52\x42\x02\x0b\x02\xa1\x03\x06\x81\x83\x02\xa0\x03\x04\x83"
  "\x04\x05\x0c\x42\x02\x53\x24\x55\x6e\x61\x62\x6c\x65\x20\x74\x6f"
  "\x20\x65\x78\x65\x63\x75\x74\x65\x20\x50\x6f\x73\x74\x67\x72\x65"
  "\x53\x51\x4c\x20\x71\x75\x65\x72\x79\x3a\x17\x84\x01\x4f\x11\x70"
  "\x67\x73\x71\x6c\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x2d\x6f\x6b\x17"
  "\x10\x70\x67\x73\x71\x6c\x2d\x74\x75\x70\x6c\x65\x73\x2d\x6f\x6b"
  "\x8a\x01\x0f\x70\x67\x73\x71\x6c\x2d\x63\x6f\x70\x79\x2d\x6f\x75"
  "\x74\x8b\x01\x0e\x70\x67\x73\x71\x6c\x2d\x63\x6f\x70\x79\x2d\x69"
  "\x6e\x8c\x01\x11\x65\x78\x65\x63\x2d\x70\x67\x73\x71\x6c\x2d\x71"
  "\x75\x65\x72\x79\x8d\x01\x65\x02\x04\x11\x67\x75\x61\x72\x61\x6e"
  "\x74\x65\x65\x2d\x73\x74\x72\x69\x6e\x67\x03\x5c\x03\x14\x70\x67"
  "\x73\x71\x6c\x2d\x72\x65\x73\x75\x6c\x74\x2d\x73\x74\x61\x74\x75"
  "\x73\x8e\x01\x04\x5d\x05\x04\x12\x65\x72\x72\x6f\x72\x3a\x70\x67"
  "\x73\x71\x6c\x2d\x71\x75\x65\x72\x79\x8f\x01\x04\x05\x6d\x65\x6d"
  "\x71\x03\x0c\x6d\x61\x6b\x65\x2d\x72\x65\x73\x75\x6c\x74\x90\x01"
  "\x04\x70\x0a\xb0\x03\x20\x81\x85\x02\xaf\x03\x1e\x81\x85\x02\xae"
  "\x03\x1c\x81\x85\x02\xad\x03\x1a\x81\x85\x02\xac\x03\x18\x81\x8b"
  "\x02\xab\x03\x16\x81\x87\x02\xaa\x03\x14\x81\x87\x02\xa9\x03\x12"
  "\x81\x85\x02\xa8\x03\x10\x81\x87\x02\xa7\x03\x0e\x81\x89\x02\xa6"
  "\x03\x0c\x81\x89\x02\xa5\x03\x0a\x81\x89\x02\xa4\x03\x08\x81\x85"
  "\x02\xa3\x03\x06\x81\x85\x02\xa2\x03\x04\x84\x06\x1f\x3e\x91\x01"
  "\x02\x54\x24\x55\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20\x63\x72\x65"
  "\x61\x74\x65\x20\x50\x6f\x73\x74\x67\x72\x65\x53\x51\x4c\x20\x72"
  "\x65\x73\x75\x6c\x74\x3a\x25\x84\x01\x4f\x65\x02\x03\x5c\x04\x5d"
  "\x05\x03\x90\x01\x04\x70\x06\xba\x03\x16\x81\x85\x02\xb9\x03\x14"
  "\x81\x85\x02\xb8\x03\x12\x81\x85\x02\xb7\x03\x10\x81\x85\x02\xb6"
  "\x03\x0e\x81\x87\x02\xb5\x03\x0c\x81\x85\x02\xb4\x03\x0a\x81\x87"
  "\x02\xb3\x03\x08\x81\x87\x02\xb2\x03\x06\x81\x87\x02\xb1\x03\x04"
  "\x84\x06\x15\x2a\x70\x02\x55\x0f\x72\x65\x73\x75\x6c\x74\x2d\x3e"
  "\x68\x61\x6e\x64\x6c\x65\x25\x4f\x03\x61\x04\x62\x03\xbd\x03\x08"
  "\x81\x83\x02\xbc\x03\x06\x81\x83\x02\xbb\x03\x04\x83\x04\x07\x12"
  "\x02\x56\x46\x58\x07\x70\x67\x73\x71\x6c\x2d\x25\x58\x87\x01\x47"
  "\x59\x49\x04\x4a\x03\x4b\x04\x5a\x04\xc4\x03\x10\x81\x85\x02\xc3"
  "\x03\x0e\x81\x83\x02\xc2\x03\x0c\x81\x85\x02\xc1\x03\x0a\x81\x85"
  "\x02\xc0\x03\x08\x81\x85\x02\xbf\x03\x06\x81\x87\x02\xbe\x03\x04"
  "\x84\x06\x0f\x22\x87\x01\x02\x57\x3a\x25\x4f\x03\x61\x04\x62\x03"
  "\xc9\x03\x0c\x81\x83\x02\xc8\x03\x0a\x81\x85\x02\xc7\x03\x08\x81"
  "\x85\x02\xc6\x03\x06\x81\x85\x02\xc5\x03\x04\x83\x04\x0b\x17\x5a"
  "\x02\x58\x29\x25\x4f\x03\x61\x04\x62\x03\xce\x03\x0c\x81\x83\x02"
  "\xcd\x03\x0a\x81\x85\x02\xcc\x03\x08\x81\x85\x02\xcb\x03\x06\x81"
  "\x85\x02\xca\x03\x04\x83\x04\x0b\x17\x59\x02\x59\x27\x25\x4f\x03"
  "\x61\x04\x62\x03\xd3\x03\x0c\x81\x83\x02\xd2\x03\x0a\x81\x85\x02"
  "\xd1\x03\x08\x81\x85\x02\xd0\x03\x06\x81\x85\x02\xcf\x03\x04\x83"
  "\x04\x0b\x17\x58\x02\x5a\x25\x4f\x03\x61\x04\x62\x03\xd8\x03\x0c"
  "\x81\x83\x02\xd7\x03\x0a\x81\x85\x02\xd6\x03\x08\x81\x85\x02\xd5"
  "\x03\x06\x81\x85\x02\xd4\x03\x04\x83\x04\x0b\x17\x4b\x02\x5b\x3c"
  "\x25\x4f\x0c\x65\x78\x65\x63\x2d\x73\x74\x61\x74\x75\x73\x4a\x02"
  "\x03\x61\x04\x4d\x04\x62\x04\xdf\x03\x10\x81\x85\x02\xde\x03\x0e"
  "\x81\x87\x02\xdd\x03\x0c\x81\x87\x02\xdc\x03\x0a\x81\x87\x02\xdb"
  "\x03\x08\x81\x85\x02\xda\x03\x06\x81\x83\x02\xd9\x03\x04\x83\x04"
  "\x0f\x1f\x49\x02\x5c\x65\x02\x04\x7d\x02\xe1\x03\x06\x81\x83\x02"
  "\xe0\x03\x04\x83\x04\x05\x0d\x7d\x02\x5d\x19\x25\x4f\x03\x61\x04"
  "\x62\x03\xe6\x03\x0c\x81\x85\x02\xe5\x03\x0a\x81\x87\x02\xe4\x03"
  "\x08\x81\x87\x02\xe3\x03\x06\x81\x87\x02\xe2\x03\x04\x84\x06\x0b"
  "\x17\x47\x02\x5e\x21\x1d\x25\x4f\x03\x61\x04\x62\x03\xec\x03\x0e"
  "\x81\x89\x02\xeb\x03\x0c\x81\x87\x02\xea\x03\x0a\x81\x89\x02\xe9"
  "\x03\x08\x81\x89\x02\xe8\x03\x06\x81\x89\x02\xe7\x03\x04\x85\x08"
  "\x0d\x1a\x46\x02\x5f\x1d\x25\x4f\x03\x61\x04\x62\x03\xf1\x03\x0c"
  "\x81\x87\x02\xf0\x03\x0a\x81\x89\x02\xef\x03\x08\x81\x89\x02\xee"
  "\x03\x06\x81\x89\x02\xed\x03\x04\x85\x08\x0b\x17\x3c\x02\x60\x25"
  "\x4f\x03\x61\x03\x0f\x73\x74\x72\x69\x6e\x67\x2d\x3e\x6e\x75\x6d"
  "\x62\x65\x72\x04\x62\x04\xf7\x03\x0e\x81\x85\x02\xf6\x03\x0c\x81"
  "\x87\x02\xf5\x03\x0a\x81\x87\x02\xf4\x03\x08\x81\x87\x02\xf3\x03"
  "\x06\x81\x83\x02\xf2\x03\x04\x83\x04\x0d\x1b\x4f\x60\x3a\x3a\x4f"
  "\x04\x11\x70\x67\x73\x71\x6c\x2d\x63\x6d\x64\x2d\x74\x75\x70\x6c"
  "\x65\x73\x13\x70\x67\x73\x71\x6c\x2d\x67\x65\x74\x2d\x69\x73\x2d"
  "\x6e\x75\x6c\x6c\x3f\x3c\x04\x10\x70\x67\x73\x71\x6c\x2d\x67\x65"
  "\x74\x2d\x76\x61\x6c\x75\x65\x46\x04\x11\x70\x67\x73\x71\x6c\x2d"
  "\x66\x69\x65\x6c\x64\x2d\x6e\x61\x6d\x65\x47\x04\x0c\x70\x67\x73"
  "\x71\x6c\x2d\x63\x6c\x65\x61\x72\x7d\x04\x8e\x01\x49\x04\x11\x70"
  "\x67\x73\x71\x6c\x2d\x63\x6d\x64\x2d\x73\x74\x61\x74\x75\x73\x4b"
  "\x04\x0f\x70\x67\x73\x71\x6c\x2d\x6e\x2d\x66\x69\x65\x6c\x64\x73"
  "\x58\x04\x0f\x70\x67\x73\x71\x6c\x2d\x6e\x2d\x74\x75\x70\x6c\x65"
  "\x73\x59\x04\x17\x64\x65\x66\x69\x6e\x65\x2d\x72\x65\x73\x75\x6c"
  "\x74\x2d\x61\x63\x63\x65\x73\x73\x6f\x72\x75\x5a\x04\x87\x01\x04"
  "\x25\x04\x18\x6d\x61\x6b\x65\x2d\x65\x6d\x70\x74\x79\x2d\x70\x67"
  "\x73\x71\x6c\x2d\x72\x65\x73\x75\x6c\x74\x70\x04\x8d\x01\x91\x01"
  "\x04\x13\x64\x65\x63\x6f\x64\x65\x2d\x70\x67\x73\x71\x6c\x2d\x62"
  "\x79\x74\x65\x61\x42\x04\x13\x65\x6e\x63\x6f\x64\x65\x2d\x70\x67"
  "\x73\x71\x6c\x2d\x62\x79\x74\x65\x61\x13\x04\x14\x65\x73\x63\x61"
  "\x70\x65\x2d\x70\x67\x73\x71\x6c\x2d\x73\x74\x72\x69\x6e\x67\x15"
  "\x04\x0f\x70\x67\x73\x71\x6c\x2d\x65\x6e\x64\x2d\x63\x6f\x70\x79"
  "\x0f\x04\x0f\x70\x67\x73\x71\x6c\x2d\x70\x75\x74\x2d\x6c\x69\x6e"
  "\x65\x31\x04\x0f\x70\x67\x73\x71\x6c\x2d\x67\x65\x74\x2d\x6c\x69"
  "\x6e\x65\x1f\x04\x12\x70\x67\x73\x71\x6c\x2d\x63\x6f\x6e\x6e\x2d"
  "\x73\x74\x61\x74\x75\x73\x89\x01\x04\x19\x70\x67\x73\x71\x6c\x2d"
  "\x63\x6f\x6e\x6e\x2d\x65\x72\x72\x6f\x72\x2d\x6d\x65\x73\x73\x61"
  "\x67\x65\x11\x04\x17\x70\x67\x73\x71\x6c\x2d\x63\x6f\x6e\x6e\x2d"
  "\x72\x65\x73\x65\x74\x2d\x73\x74\x61\x72\x74\x38\x04\x11\x70\x67"
  "\x73\x71\x6c\x2d\x63\x6f\x6e\x6e\x2d\x72\x65\x73\x65\x74\x34\x04"
  "\x13\x70\x67\x73\x71\x6c\x2d\x63\x6f\x6e\x6e\x2d\x6f\x70\x74\x69"
  "\x6f\x6e\x73\x2b\x04\x0f\x70\x67\x73\x71\x6c\x2d\x63\x6f\x6e\x6e"
  "\x2d\x74\x74\x79\x40\x04\x10\x70\x67\x73\x71\x6c\x2d\x63\x6f\x6e"
  "\x6e\x2d\x70\x6f\x72\x74\x2f\x04\x10\x70\x67\x73\x71\x6c\x2d\x63"
  "\x6f\x6e\x6e\x2d\x68\x6f\x73\x74\x23\x04\x10\x70\x67\x73\x71\x6c"
  "\x2d\x63\x6f\x6e\x6e\x2d\x70\x61\x73\x73\x2d\x04\x10\x70\x67\x73"
  "\x71\x6c\x2d\x63\x6f\x6e\x6e\x2d\x75\x73\x65\x72\x44\x04\x1b\x64"
  "\x65\x66\x69\x6e\x65\x2d\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e"
  "\x2d\x61\x63\x63\x65\x73\x73\x6f\x72\x0e\x70\x67\x73\x71\x6c\x2d"
  "\x63\x6f\x6e\x6e\x2d\x64\x62\x0d\x04\x88\x01\x04\x11\x70\x6f\x6c"
  "\x6c\x2d\x70\x67\x73\x71\x6c\x2d\x72\x65\x73\x65\x74\x36\x04\x10"
  "\x70\x6f\x6c\x6c\x2d\x70\x67\x73\x71\x6c\x2d\x63\x6f\x6e\x6e\x86"
  "\x01\x04\x84\x01\x85\x01\x04\x82\x01\x83\x01\x04\x15\x63\x61\x6c"
  "\x6c\x2d\x77\x69\x74\x68\x2d\x70\x67\x73\x71\x6c\x2d\x63\x6f\x6e"
  "\x6e\x81\x01\x04\x80\x01\x7e\x04\x7f\x7c\x04\x8f\x01\x76\x72\x04"
  "\x21\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a"
  "\x70\x67\x73\x71\x6c\x2d\x71\x75\x65\x72\x79\x2d\x65\x72\x72\x6f"
  "\x72\x91\x01\x7a\x12\x70\x67\x73\x71\x6c\x2d\x71\x75\x65\x72\x79"
  "\x2d\x65\x72\x72\x6f\x72\x06\x71\x75\x65\x72\x79\x78\x79\x04\x26"
  "\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x70"
  "\x67\x73\x71\x6c\x2d\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x2d"
  "\x65\x72\x72\x6f\x72\x8f\x01\x1b\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x2d\x74\x79\x70\x65\x3a\x70\x67\x73\x71\x6c\x2d\x65\x72\x72"
  "\x6f\x72\x8e\x01\x17\x70\x67\x73\x71\x6c\x2d\x63\x6f\x6e\x6e\x65"
  "\x63\x74\x69\x6f\x6e\x2d\x65\x72\x72\x6f\x72\x74\x77\x04\x0c\x70"
  "\x67\x73\x71\x6c\x2d\x65\x72\x72\x6f\x72\x73\x04\x0b\x71\x04\x6f"
  "\x6e\x04\x17\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x76\x61\x6c"
  "\x69\x64\x2d\x72\x65\x73\x75\x6c\x74\x64\x04\x62\x48\x04\x11\x67"
  "\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x72\x65\x73\x75\x6c\x74\x63"
  "\x04\x1b\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x76\x61\x6c\x69"
  "\x64\x2d\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x60\x04\x5d\x5f"
  "\x04\x11\x64\x65\x66\x69\x6e\x65\x2d\x67\x75\x61\x72\x61\x6e\x74"
  "\x65\x65\x15\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x63\x6f\x6e"
  "\x6e\x65\x63\x74\x69\x6f\x6e\x5e\x04\x5b\x04\x53\x61\x57\x04\x6b"
  "\x51\x04\x90\x01\x6c\x56\x04\x0b\x72\x74\x64\x3a\x72\x65\x73\x75"
  "\x6c\x74\x90\x01\x07\x72\x65\x73\x75\x6c\x74\x54\x5c\x55\x04\x68"
  "\x52\x04\x7b\x69\x50\x04\x0f\x72\x74\x64\x3a\x63\x6f\x6e\x6e\x65"
  "\x63\x74\x69\x6f\x6e\x8d\x01\x0b\x63\x6f\x6e\x6e\x65\x63\x74\x69"
  "\x6f\x6e\x07\x68\x61\x6e\x64\x6c\x65\x65\x67\x66\x4a\x12\x70\x67"
  "\x73\x71\x6c\x2d\x66\x61\x74\x61\x6c\x2d\x65\x72\x72\x6f\x72\x89"
  "\x01\x15\x70\x67\x73\x71\x6c\x2d\x6e\x6f\x6e\x66\x61\x74\x61\x6c"
  "\x2d\x65\x72\x72\x6f\x72\x88\x01\x13\x70\x67\x73\x71\x6c\x2d\x62"
  "\x61\x64\x2d\x72\x65\x73\x70\x6f\x6e\x73\x65\x87\x01\x8c\x01\x8b"
  "\x01\x8a\x01\x17\x12\x70\x67\x73\x71\x6c\x2d\x65\x6d\x70\x74\x79"
  "\x2d\x71\x75\x65\x72\x79\x86\x01\x89\x01\x08\x88\x01\x87\x01\x8c"
  "\x01\x8b\x01\x8a\x01\x17\x86\x01\x09\x15\x70\x67\x73\x71\x6c\x2d"
  "\x70\x6f\x6c\x6c\x69\x6e\x67\x2d\x61\x63\x74\x69\x76\x65\x8c\x01"
  "\x11\x70\x67\x73\x71\x6c\x2d\x70\x6f\x6c\x6c\x69\x6e\x67\x2d\x6f"
  "\x6b\x8b\x01\x16\x70\x67\x73\x71\x6c\x2d\x70\x6f\x6c\x6c\x69\x6e"
  "\x67\x2d\x77\x72\x69\x74\x69\x6e\x67\x8a\x01\x16\x70\x67\x73\x71"
  "\x6c\x2d\x70\x6f\x6c\x6c\x69\x6e\x67\x2d\x72\x65\x61\x64\x69\x6e"
  "\x67\x89\x01\x15\x70\x67\x73\x71\x6c\x2d\x70\x6f\x6c\x6c\x69\x6e"
  "\x67\x2d\x66\x61\x69\x6c\x65\x64\x88\x01\x8c\x01\x8b\x01\x8a\x01"
  "\x89\x01\x88\x01\x3e\x18\x70\x67\x73\x71\x6c\x2d\x63\x6f\x6e\x6e"
  "\x65\x63\x74\x69\x6f\x6e\x2d\x73\x65\x74\x65\x6e\x76\x8c\x01\x19"
  "\x70\x67\x73\x71\x6c\x2d\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e"
  "\x2d\x61\x75\x74\x68\x2d\x6f\x6b\x8b\x01\x23\x70\x67\x73\x71\x6c"
  "\x2d\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x2d\x61\x77\x61\x69"
  "\x74\x69\x6e\x67\x2d\x72\x65\x73\x70\x6f\x6e\x73\x65\x8a\x01\x16"
  "\x70\x67\x73\x71\x6c\x2d\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e"
  "\x2d\x6d\x61\x64\x65\x89\x01\x19\x70\x67\x73\x71\x6c\x2d\x63\x6f"
  "\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x2d\x73\x74\x61\x72\x74\x65\x64"
  "\x88\x01\x1b\x14\x70\x67\x73\x71\x6c\x2d\x63\x6f\x6e\x6e\x65\x63"
  "\x74\x69\x6f\x6e\x2d\x6f\x6b\x87\x01\x8c\x01\x8b\x01\x8a\x01\x89"
  "\x01\x88\x01\x1b\x87\x01\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65"
  "\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70\x65"
  "\x33\x10\x0c\x64\x65\x66\x69\x6e\x65\x2d\x65\x6e\x75\x6d\x4d\x4e"
  "\x04\x4c\x04\x08\x70\x71\x2d\x75\x73\x65\x72\x45\x04\x12\x70\x71"
  "\x2d\x75\x6e\x65\x73\x63\x61\x70\x65\x2d\x62\x79\x74\x65\x61\x43"
  "\x04\x07\x70\x71\x2d\x74\x74\x79\x41\x04\x0a\x70\x71\x2d\x73\x74"
  "\x61\x74\x75\x73\x3f\x04\x11\x70\x71\x2d\x72\x65\x73\x75\x6c\x74"
  "\x2d\x73\x74\x61\x74\x75\x73\x3d\x04\x18\x70\x71\x2d\x72\x65\x73"
  "\x75\x6c\x74\x2d\x65\x72\x72\x6f\x72\x2d\x6d\x65\x73\x73\x61\x67"
  "\x65\x3b\x04\x0f\x70\x71\x2d\x72\x65\x73\x65\x74\x2d\x73\x74\x61"
  "\x72\x74\x39\x04\x0e\x70\x71\x2d\x72\x65\x73\x65\x74\x2d\x70\x6f"
  "\x6c\x6c\x37\x04\x09\x70\x71\x2d\x72\x65\x73\x65\x74\x35\x04\x0e"
  "\x70\x71\x2d\x72\x65\x73\x2d\x73\x74\x61\x74\x75\x73\x33\x04\x0c"
  "\x70\x71\x2d\x70\x75\x74\x2d\x6c\x69\x6e\x65\x32\x04\x08\x70\x71"
  "\x2d\x70\x6f\x72\x74\x30\x04\x08\x70\x71\x2d\x70\x61\x73\x73\x2e"
  "\x04\x0b\x70\x71\x2d\x6f\x70\x74\x69\x6f\x6e\x73\x2c\x04\x0c\x70"
  "\x71\x2d\x6e\x2d\x74\x75\x70\x6c\x65\x73\x2a\x04\x0c\x70\x71\x2d"
  "\x6e\x2d\x66\x69\x65\x6c\x64\x73\x28\x04\x18\x70\x71\x2d\x6d\x61"
  "\x6b\x65\x2d\x65\x6d\x70\x74\x79\x2d\x70\x67\x2d\x72\x65\x73\x75"
  "\x6c\x74\x26\x04\x08\x70\x71\x2d\x68\x6f\x73\x74\x24\x04\x0d\x70"
  "\x71\x2d\x67\x65\x74\x2d\x76\x61\x6c\x75\x65\x22\x04\x0c\x70\x71"
  "\x2d\x67\x65\x74\x2d\x6c\x69\x6e\x65\x20\x04\x10\x70\x71\x2d\x67"
  "\x65\x74\x2d\x69\x73\x2d\x6e\x75\x6c\x6c\x3f\x1e\x04\x6a\x1c\x04"
  "\x0e\x70\x71\x2d\x66\x69\x65\x6c\x64\x2d\x6e\x61\x6d\x65\x1a\x04"
  "\x08\x70\x71\x2d\x65\x78\x65\x63\x18\x04\x11\x70\x71\x2d\x65\x73"
  "\x63\x61\x70\x65\x2d\x73\x74\x72\x69\x6e\x67\x16\x04\x10\x70\x71"
  "\x2d\x65\x73\x63\x61\x70\x65\x2d\x62\x79\x74\x65\x61\x14\x04\x11"
  "\x70\x71\x2d\x65\x72\x72\x6f\x72\x2d\x6d\x65\x73\x73\x61\x67\x65"
  "\x12\x04\x0c\x70\x71\x2d\x65\x6e\x64\x2d\x63\x6f\x70\x79\x10\x04"
  "\x06\x70\x71\x2d\x64\x62\x0e\x04\x11\x70\x71\x2d\x63\x6f\x6e\x6e"
  "\x65\x63\x74\x2d\x73\x74\x61\x72\x74\x0c\x04\x10\x70\x71\x2d\x63"
  "\x6f\x6e\x6e\x65\x63\x74\x2d\x70\x6f\x6c\x6c\x0a\x04\x0e\x70\x71"
  "\x2d\x63\x6f\x6e\x6e\x65\x63\x74\x2d\x64\x62\x04\x0e\x70\x71\x2d"
  "\x63\x6d\x64\x2d\x74\x75\x70\x6c\x65\x73\x04\x0e\x70\x71\x2d\x63"
  "\x6d\x64\x2d\x73\x74\x61\x74\x75\x73\x04\x11\x6c\x6f\x63\x61\x6c"
  "\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x6d\x04\x04\x1f\x73"
  "\x63\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72"
  "\x6d\x65\x72\x2d\x3e\x65\x78\x70\x61\x6e\x64\x65\x72\x06\x11\x6d"
  "\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x03"
  "\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x69\x73"
  "\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x04\x8d\x01\x90\x01\x15\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x65\x72"
  "\x72\x6f\x72\x8e\x01\x17\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x65"
  "\x72\x72\x6f\x72\x2d\x68\x61\x6e\x64\x6c\x65\x72\x8f\x01\x91\x01"
  "\x08\x06\x14\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x2d\x74\x79\x70\x65\x05\x14\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x2d\x73\x69\x67\x6e\x61\x6c\x6c\x65\x72\x03\xa3\x01\xc8\x02"
  "\x80\x80\x04\xa2\x01\xc6\x02\x81\x81\x02\xa1\x01\xc4\x02\x81\x81"
  "\x02\xa0\x01\xc2\x02\x81\x83\x02\x9f\x01\xc0\x02\x81\x83\x02\x9e"
  "\x01\xbe\x02\x81\x83\x02\x9d\x01\xbc\x02\x81\x83\x02\x9c\x01\xba"
  "\x02\x81\x83\x02\x9b\x01\xb8\x02\x81\x83\x02\x9a\x01\xb6\x02\x81"
  "\x83\x02\x99\x01\xb4\x02\x81\x83\x02\x98\x01\xb2\x02\x81\x83\x02"
  "\x97\x01\xb0\x02\x81\x87\x02\x96\x01\xae\x02\x81\x85\x02\x95\x01"
  "\xac\x02\x81\x83\x02\x94\x01\xaa\x02\x81\x83\x02\x93\x01\xa8\x02"
  "\x81\x83\x02\x92\x01\xa6\x02\x81\x83\x02\x91\x01\xa4\x02\x81\x83"
  "\x02\x90\x01\xa2\x02\x81\x83\x02\x8f\x01\xa0\x02\x81\x83\x02\x8e"
  "\x01\x9e\x02\x81\x83\x02\x8d\x01\x9c\x02\x81\x83\x02\x8c\x01\x9a"
  "\x02\x81\x83\x02\x8b\x01\x98\x02\x81\x83\x02\x8a\x01\x96\x02\x81"
  "\x83\x02\x89\x01\x94\x02\x81\x83\x02\x88\x01\x92\x02\x81\x83\x02"
  "\x87\x01\x90\x02\x81\x83\x02\x86\x01\x8e\x02\x81\x83\x02\x85\x01"
  "\x8c\x02\x81\x83\x02\x84\x01\x8a\x02\x81\x83\x02\x83\x01\x88\x02"
  "\x81\x83\x02\x82\x01\x86\x02\x81\x83\x02\x81\x01\x84\x02\x81\x83"
  "\x02\x80\x01\x82\x02\x81\x87\x02\x7f\x80\x02\x81\x85\x02\x7e\xfe"
  "\x01\x81\x83\x02\x7d\xfc\x01\x81\x83\x02\x7c\xfa\x01\x81\x83\x02"
  "\x7b\xf8\x01\x81\x83\x02\x7a\xf6\x01\x81\x83\x02\x79\xf4\x01\x81"
  "\x83\x02\x78\xf2\x01\x81\x83\x02\x77\xf0\x01\x81\x83\x02\x76\xee"
  "\x01\x81\x83\x02\x75\xec\x01\x81\x85\x02\x74\xea\x01\x81\x83\x02"
  "\x73\xe8\x01\x81\x85\x02\x72\xe6\x01\x81\x8b\x02\x71\xe4\x01\x81"
  "\x87\x02\x70\xe2\x01\x81\x83\x02\x6f\xe0\x01\x81\x85\x02\x6e\xde"
  "\x01\x81\x8b\x02\x6d\xdc\x01\x81\x83\x02\x6c\xda\x01\x81\x85\x02"
  "\x6b\xd8\x01\x81\x8b\x02\x6a\xd6\x01\x81\x87\x02\x69\xd4\x01\x81"
  "\x83\x02\x68\xd2\x01\x81\x85\x02\x67\xd0\x01\x81\x8b\x02\x66\xce"
  "\x01\x81\x83\x02\x65\xcc\x01\x81\x8b\x02\x64\xca\x01\x81\x83\x02"
  "\x63\xc8\x01\x81\x83\x02\x62\xc6\x01\x81\x83\x02\x61\xc4\x01\x81"
  "\x83\x02\x60\xc2\x01\x81\x83\x02\x5f\xc0\x01\x81\x83\x02\x5e\xbe"
  "\x01\x81\x83\x02\x5d\xbc\x01\x81\x83\x02\x5c\xba\x01\x81\x87\x02"
  "\x5b\xb8\x01\x81\x85\x02\x5a\xb6\x01\x81\x83\x02\x59\xb4\x01\x81"
  "\x83\x02\x58\xb2\x01\x81\x85\x02\x57\xb0\x01\x81\x83\x02\x56\xae"
  "\x01\x81\x87\x02\x55\xac\x01\x81\x83\x02\x54\xaa\x01\x81\x85\x02"
  "\x53\xa8\x01\x81\x83\x02\x52\xa6\x01\x81\x85\x02\x51\xa4\x01\x81"
  "\x83\x02\x50\xa2\x01\x81\x85\x02\x4f\xa0\x01\x81\x87\x02\x4e\x9e"
  "\x01\x81\x83\x02\x4d\x9c\x01\x81\x83\x02\x4c\x9a\x01\x81\x85\x02"
  "\x4b\x98\x01\x81\x83\x02\x4a\x96\x01\x81\x87\x02\x49\x94\x01\x81"
  "\x83\x02\x48\x92\x01\x81\x85\x02\x47\x90\x01\x81\x83\x02\x46\x8e"
  "\x01\x81\x85\x02\x45\x8c\x01\x81\x83\x02\x44\x8a\x01\x81\x85\x02"
  "\x43\x88\x01\x81\x87\x02\x42\x86\x01\x81\x83\x02\x41\x84\x01\x81"
  "\x83\x02\x40\x82\x01\x81\x83\x02\x3f\x80\x01\x81\x83\x02\x3e\x7e"
  "\x81\x83\x02\x3d\x7c\x81\x83\x02\x3c\x7a\x81\x83\x02\x3b\x78\x81"
  "\x83\x02\x3a\x76\x81\x83\x02\x39\x74\x81\x83\x02\x38\x72\x81\x83"
  "\x02\x37\x70\x81\x83\x02\x36\x6e\x81\x83\x02\x35\x6c\x81\x83\x02"
  "\x34\x6a\x81\x83\x02\x33\x68\x81\x83\x02\x32\x66\x81\x83\x02\x31"
  "\x64\x81\x83\x02\x30\x62\x81\x83\x02\x2f\x60\x81\x83\x02\x2e\x5e"
  "\x81\x83\x02\x2d\x5c\x81\x83\x02\x2c\x5a\x81\x83\x02\x2b\x58\x81"
  "\x83\x02\x2a\x56\x81\x83\x02\x29\x54\x81\x83\x02\x28\x52\x81\x83"
  "\x02\x27\x50\x81\x83\x02\x26\x4e\x81\x87\x02\x25\x4c\x81\x85\x02"
  "\x24\x4a\x81\x83\x02\x23\x48\x81\x83\x02\x22\x46\x81\x83\x02\x21"
  "\x44\x81\x83\x02\x20\x42\x81\x83\x02\x1f\x40\x81\x83\x02\x1e\x3e"
  "\x81\x83\x02\x1d\x3c\x81\x83\x02\x1c\x3a\x81\x83\x02\x1b\x38\x81"
  "\x83\x02\x1a\x36\x81\x83\x02\x19\x34\x81\x83\x02\x18\x32\x81\x83"
  "\x02\x17\x30\x81\x83\x02\x16\x2e\x81\x83\x02\x15\x2c\x81\x83\x02"
  "\x14\x2a\x81\x83\x02\x13\x28\x81\x83\x02\x12\x26\x81\x83\x02\x11"
  "\x24\x81\x83\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x83\x02\x0e\x1e"
  "\x81\x83\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81"
  "\x83\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x83\x02\x08\x12\x81\x83"
  "\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x83\x02"
  "\x04\x0a\x81\x83\x02\x03\x08\x81\x83\x02\x02\x06\x81\x83\x02\x01"
  "\x04\x81\x83\x02\xc7\x02\xd8\x04";

SCHEME_OBJECT *
pgsql_so_data_fcdc7dbe4a1cfc41 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_pgsql_so_data_fcdc7dbe4a1cfc41 [0]))), (sizeof (prog_pgsql_so_data_fcdc7dbe4a1cfc41)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_173]));
}

DECLARE_COMPILED_DATA_NS ("pgsql.so", pgsql_so_data_fcdc7dbe4a1cfc41)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("pgsql.so", "e065a024781ad8e3")
