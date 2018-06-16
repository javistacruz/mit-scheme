/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:26-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 6
#define DEBUGGING_LABEL_1_2 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_db_close_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_db_close_3)
DEFLABEL (db4_db_close_0)
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
berkeley_db_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_db_create_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_db_create_3)
DEFLABEL (db4_db_create_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 3);

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
berkeley_db_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_db_del_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_db_del_3)
DEFLABEL (db4_db_del_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 4);

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
berkeley_db_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_db_env_close_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_db_env_close_3)
DEFLABEL (db4_db_env_close_0)
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
berkeley_db_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_db_env_create_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_db_env_create_3)
DEFLABEL (db4_db_env_create_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 2);

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
berkeley_db_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_db_env_get_home_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_db_env_get_home_3)
DEFLABEL (db4_db_env_get_home_0)
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
berkeley_db_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_db_env_get_open_flags_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_db_env_get_open_flags_3)
DEFLABEL (db4_db_env_get_open_flags_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 2);

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
berkeley_db_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_db_env_lock_get_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_db_env_lock_get_3)
DEFLABEL (db4_db_env_lock_get_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 6);

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
berkeley_db_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_db_env_lock_id_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_db_env_lock_id_3)
DEFLABEL (db4_db_env_lock_id_0)
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
berkeley_db_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_db_env_lock_id_free_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_db_env_lock_id_free_3)
DEFLABEL (db4_db_env_lock_id_free_0)
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
berkeley_db_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_db_env_lock_put_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_db_env_lock_put_3)
DEFLABEL (db4_db_env_lock_put_0)
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
berkeley_db_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_db_env_open_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_db_env_open_3)
DEFLABEL (db4_db_env_open_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 4);

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
berkeley_db_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_db_env_txn_begin_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_db_env_txn_begin_3)
DEFLABEL (db4_db_env_txn_begin_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 4);

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
berkeley_db_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_db_get_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_db_get_3)
DEFLABEL (db4_db_get_0)
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
berkeley_db_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_db_get_dbname_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_db_get_dbname_3)
DEFLABEL (db4_db_get_dbname_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 2);

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
berkeley_db_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_db_get_env_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_db_get_env_3)
DEFLABEL (db4_db_get_env_0)
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
berkeley_db_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_db_get_open_flags_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_db_get_open_flags_3)
DEFLABEL (db4_db_get_open_flags_0)
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
berkeley_db_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_db_get_pagesize_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_db_get_pagesize_3)
DEFLABEL (db4_db_get_pagesize_0)
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
berkeley_db_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_db_get_transactional_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_db_get_transactional_3)
DEFLABEL (db4_db_get_transactional_0)
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
berkeley_db_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_db_get_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_db_get_type_3)
DEFLABEL (db4_db_get_type_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 2);

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
berkeley_db_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_db_open_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_db_open_3)
DEFLABEL (db4_db_open_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 7);

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
berkeley_db_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_db_put_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_db_put_3)
DEFLABEL (db4_db_put_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 5);

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
berkeley_db_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_db_strerror_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_db_strerror_3)
DEFLABEL (db4_db_strerror_0)
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
berkeley_db_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_db_txn_abort_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_db_txn_abort_3)
DEFLABEL (db4_db_txn_abort_0)
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
berkeley_db_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_db_txn_commit_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_db_txn_commit_3)
DEFLABEL (db4_db_txn_commit_0)
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
berkeley_db_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_dbt_size_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_dbt_size_3)
DEFLABEL (db4_dbt_size_0)
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
berkeley_db_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_init_dbt_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_init_dbt_3)
DEFLABEL (db4_init_dbt_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_0]), 4);

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
berkeley_db_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_name__rc_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_name__rc_3)
DEFLABEL (db4_name__rc_0)
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
berkeley_db_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_rc__name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_rc__name_3)
DEFLABEL (db4_rc__name_0)
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
berkeley_db_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_sizeof_db_lock_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_sizeof_db_lock_3)
DEFLABEL (db4_sizeof_db_lock_0)
  INTERRUPT_CHECK (26, LABEL_30_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 0);

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
berkeley_db_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto db4_sizeof_dbt_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (db4_sizeof_dbt_3)
DEFLABEL (db4_sizeof_dbt_0)
  INTERRUPT_CHECK (26, LABEL_31_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_0]), 0);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_6 5
#define LABEL_32_5 7
#define LABEL_32_8 9
#define LABEL_32_9 11
#define LABEL_32_11 13
#define LABEL_32_12 15
#define LABEL_32_10 17
#define LABEL_32_17 19
#define LABEL_32_18 21
#define LABEL_32_13 23
#define TAG_32_14 10
#define LABEL_32_16 25
#define ENVIRONMENT_LABEL_32_3 45
#define DEBUGGING_LABEL_32_2 44
#define OBJECT_32_10 43
#define OBJECT_32_9 42
#define OBJECT_32_8 41
#define OBJECT_32_7 40
#define OBJECT_32_6 39
#define OBJECT_32_5 38
#define OBJECT_32_4 37
#define OBJECT_32_3 36
#define OBJECT_32_2 35
#define OBJECT_32_1 34
#define OBJECT_32_0 33
#define EXECUTE_CACHE_32_19 27
#define EXECUTE_CACHE_32_15 29
#define EXECUTE_CACHE_32_7 31
#define FREE_REFERENCES_LABEL_32_0 26
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd78;
  machine_word Wrd79;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_32_4);
      goto lambda_25;

    case 1:
      current_block = (Rpc - LABEL_32_6);
      goto label_27;

    case 2:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_32_8);
      goto label_28;

    case 4:
      current_block = (Rpc - LABEL_32_9);
      goto label_29;

    case 5:
      current_block = (Rpc - LABEL_32_11);
      goto label_30;

    case 6:
      current_block = (Rpc - LABEL_32_12);
      goto label_31;

    case 7:
      current_block = (Rpc - LABEL_32_10);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_32_17);
      goto label_32;

    case 9:
      current_block = (Rpc - LABEL_32_18);
      goto label_33;

    case 10:
      current_block = (Rpc - LABEL_32_13);
      goto lambda_36;

    case 11:
      current_block = (Rpc - LABEL_32_16);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_35)
DEFLABEL (lambda_25)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_51;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_50)
  (Wrd17.Obj) = (current_block [OBJECT_32_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_37;
  Rvl = (current_block [OBJECT_32_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_49;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_48)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_47;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_46)
  (Wrd26.Obj) = (current_block [OBJECT_32_4]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd30.Obj) = (current_block [OBJECT_32_5]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd38.Obj) = (current_block [OBJECT_32_6]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd42.Obj) = (current_block [OBJECT_32_7]);
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (Wrd50.Obj) = (current_block [OBJECT_32_8]);
  (* (Rhp++)) = (Wrd50.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (Wrd54.Obj) = (current_block [OBJECT_32_9]);
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_10]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd65.Obj) = (Rsp [2]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 1))
    goto label_45;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd62.Obj) = ((Wrd64.pObj) [1]);

DEFLABEL (label_44)
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd73.uLng) == 1))
    goto label_43;
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd72.Obj) = ((Wrd71.pObj) [1]);
  (* (--Rsp)) = (Wrd72.Obj);

DEFLABEL (label_42)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd79.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_13])));
  Rhp += 1;
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd79.pObj)));
  Wrd80 = Wrd79;
  (Wrd81.Obj) = (Rsp [4]);
  ((Wrd80.pObj) [2]) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_32_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_41;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_40)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_39;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_38)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_19]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_32_16);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_32_4]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_32_6]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd22.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd30.Obj) = (current_block [OBJECT_32_10]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_18]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_3]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_17]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

DEFLABEL (label_32)
  (Wrd9.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_12]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_11]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

DEFLABEL (label_30)
  (Wrd62.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_3]), 1);

DEFLABEL (label_29)
  (Wrd16.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

DEFLABEL (label_28)
  (Wrd7.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_32_13);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_19]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_7 7
#define LABEL_33_9 9
#define LABEL_33_10 11
#define LABEL_33_11 13
#define LABEL_33_13 15
#define LABEL_33_14 17
#define LABEL_33_15 19
#define LABEL_33_16 21
#define LABEL_33_17 23
#define ENVIRONMENT_LABEL_33_3 40
#define DEBUGGING_LABEL_33_2 39
#define OBJECT_33_7 38
#define OBJECT_33_6 37
#define OBJECT_33_5 36
#define OBJECT_33_4 35
#define OBJECT_33_3 34
#define OBJECT_33_2 33
#define OBJECT_33_1 32
#define OBJECT_33_0 31
#define EXECUTE_CACHE_33_12 25
#define EXECUTE_CACHE_33_8 27
#define EXECUTE_CACHE_33_6 29
#define FREE_REFERENCES_LABEL_33_0 24
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_33_4);
      goto lambda_13;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_33_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_33_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_33_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_33_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_33_13);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_33_14);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_33_15);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_33_16);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_33_17);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_16)
DEFLABEL (lambda_13)
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
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_33_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_33_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_33_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_33_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_33_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_33_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_4]), 1);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_33_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_33_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_33_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_33_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_6]), 1);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_33_17);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_18)
  (Wrd10.Obj) = (Rsp [3]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_17)
DEFLABEL (label_19)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_12]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_33_16);
  (Wrd5.Obj) = (current_block [OBJECT_33_7]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_9 7
#define LABEL_34_10 9
#define LABEL_34_11 11
#define LABEL_34_7 13
#define LABEL_34_12 15
#define LABEL_34_14 17
#define LABEL_34_15 19
#define LABEL_34_16 21
#define LABEL_34_17 23
#define LABEL_34_13 25
#define LABEL_34_19 27
#define LABEL_34_21 29
#define LABEL_34_22 31
#define LABEL_34_23 33
#define LABEL_34_24 35
#define LABEL_34_20 37
#define LABEL_34_25 39
#define LABEL_34_27 41
#define LABEL_34_28 43
#define LABEL_34_29 45
#define LABEL_34_30 47
#define LABEL_34_26 49
#define LABEL_34_31 51
#define LABEL_34_32 53
#define LABEL_34_33 55
#define ENVIRONMENT_LABEL_34_3 90
#define DEBUGGING_LABEL_34_2 89
#define OBJECT_34_4 88
#define OBJECT_34_3 87
#define OBJECT_34_2 86
#define OBJECT_34_1 85
#define OBJECT_34_0 84
#define EXECUTE_CACHE_34_18 57
#define EXECUTE_CACHE_34_8 59
#define EXECUTE_CACHE_34_6 61
#define FREE_REFERENCE_34_12 64
#define FREE_REFERENCE_34_11 65
#define FREE_REFERENCE_34_10 66
#define FREE_REFERENCE_34_9 67
#define FREE_REFERENCE_34_8 68
#define FREE_REFERENCE_34_7 69
#define FREE_REFERENCE_34_6 70
#define FREE_REFERENCE_34_5 71
#define FREE_REFERENCE_34_4 72
#define FREE_REFERENCE_34_3 73
#define FREE_REFERENCE_34_2 74
#define FREE_REFERENCE_34_1 75
#define FREE_REFERENCE_34_0 76
#define FREE_ASSIGNMENT_34_5 78
#define FREE_ASSIGNMENT_34_4 79
#define FREE_ASSIGNMENT_34_3 80
#define FREE_ASSIGNMENT_34_2 81
#define FREE_ASSIGNMENT_34_1 82
#define FREE_ASSIGNMENT_34_0 83
#define FREE_REFERENCES_LABEL_34_0 56
#define NUMBER_OF_LINKER_SECTIONS_34_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bdb_availableP_7;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_34_9);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_34_10);
      goto label_26;

    case 4:
      current_block = (Rpc - LABEL_34_11);
      goto label_27;

    case 5:
      current_block = (Rpc - LABEL_34_7);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_34_12);
      goto label_9;

    case 7:
      current_block = (Rpc - LABEL_34_14);
      goto label_10;

    case 8:
      current_block = (Rpc - LABEL_34_15);
      goto label_11;

    case 9:
      current_block = (Rpc - LABEL_34_16);
      goto label_12;

    case 10:
      current_block = (Rpc - LABEL_34_17);
      goto label_13;

    case 11:
      current_block = (Rpc - LABEL_34_13);
      goto continuation_2;

    case 12:
      current_block = (Rpc - LABEL_34_19);
      goto label_14;

    case 13:
      current_block = (Rpc - LABEL_34_21);
      goto label_15;

    case 14:
      current_block = (Rpc - LABEL_34_22);
      goto label_16;

    case 15:
      current_block = (Rpc - LABEL_34_23);
      goto label_17;

    case 16:
      current_block = (Rpc - LABEL_34_24);
      goto label_18;

    case 17:
      current_block = (Rpc - LABEL_34_20);
      goto continuation_3;

    case 18:
      current_block = (Rpc - LABEL_34_25);
      goto label_19;

    case 19:
      current_block = (Rpc - LABEL_34_27);
      goto label_20;

    case 20:
      current_block = (Rpc - LABEL_34_28);
      goto label_21;

    case 21:
      current_block = (Rpc - LABEL_34_29);
      goto label_22;

    case 22:
      current_block = (Rpc - LABEL_34_30);
      goto label_23;

    case 23:
      current_block = (Rpc - LABEL_34_26);
      goto continuation_4;

    case 24:
      current_block = (Rpc - LABEL_34_31);
      goto label_24;

    case 25:
      current_block = (Rpc - LABEL_34_32);
      goto continuation_5;

    case 26:
      current_block = (Rpc - LABEL_34_33);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bdb_availableP_29)
DEFLABEL (bdb_availableP_7)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  goto pop_return;

DEFLABEL (label_30)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_75;
  Wrd7 = Wrd11;

DEFLABEL (label_74)
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_32;

DEFLABEL (label_31)
  Rvl = (current_block [OBJECT_34_2]);
  goto pop_return;

DEFLABEL (label_32)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_1]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_73;
  Wrd18 = Wrd22;

DEFLABEL (label_72)
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_2]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_71;
  Wrd24 = Wrd28;

DEFLABEL (label_70)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_3]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_69;
  Wrd30 = Wrd34;

DEFLABEL (label_68)
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd37.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_4]));
  (Wrd40.Obj) = ((Wrd37.pObj) [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 50)
    goto label_67;
  Wrd36 = Wrd40;

DEFLABEL (label_66)
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_18]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_34_13);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_34_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_65;

DEFLABEL (label_64)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_63)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_5]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_62;
  Wrd21 = Wrd25;

DEFLABEL (label_61)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_6]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_60;
  Wrd27 = Wrd31;

DEFLABEL (label_59)
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_7]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_58;
  Wrd33 = Wrd37;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_8]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_56;
  Wrd39 = Wrd43;

DEFLABEL (label_55)
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_34_20);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_34_3]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_54;

DEFLABEL (label_53)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_52)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_26]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_9]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_51;
  Wrd21 = Wrd25;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_10]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_49;
  Wrd27 = Wrd31;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_11]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_47;
  Wrd33 = Wrd37;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_12]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_45;
  Wrd39 = Wrd43;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_34_26);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_34_4]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_43;

DEFLABEL (label_42)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_41)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_32]))));
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_3]), 0);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_34_32);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_34_5]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_40;

DEFLABEL (label_39)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_38)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_4]), 0);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_34_9);
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_34_0]));
  (Wrd52.Obj) = ((Wrd44.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 50)
    goto label_37;

DEFLABEL (label_36)
  ((Wrd44.pObj) [0]) = Rvl;

DEFLABEL (label_35)
  (Wrd56.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_34_1]));
  (Wrd57.Obj) = (current_block [OBJECT_34_2]);
  (Wrd64.Obj) = ((Wrd56.pObj) [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd65.uLng) == 50)
    goto label_34;

DEFLABEL (label_33)
  ((Wrd56.pObj) [0]) = (Wrd57.Obj);
  goto label_31;

DEFLABEL (label_34)
  if ((Wrd64.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_33;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_34_11])), (Wrd56.pObj), (Wrd57.Obj));

DEFLABEL (label_27)
  goto label_31;

DEFLABEL (label_37)
  if ((Wrd52.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_36;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_34_10])), (Wrd44.pObj), Rvl);

DEFLABEL (label_26)
  goto label_35;

DEFLABEL (label_40)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_39;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_34_33])), (Wrd6.pObj), Rvl);

DEFLABEL (label_25)
  goto label_38;

DEFLABEL (label_43)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_42;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_34_31])), (Wrd6.pObj), Rvl);

DEFLABEL (label_24)
  goto label_41;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_30])), (Wrd40.pObj));

DEFLABEL (label_23)
  (Wrd39.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_29])), (Wrd34.pObj));

DEFLABEL (label_22)
  (Wrd33.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_28])), (Wrd28.pObj));

DEFLABEL (label_21)
  (Wrd27.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_27])), (Wrd22.pObj));

DEFLABEL (label_20)
  (Wrd21.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_54)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_53;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_34_25])), (Wrd6.pObj), Rvl);

DEFLABEL (label_19)
  goto label_52;

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_24])), (Wrd40.pObj));

DEFLABEL (label_18)
  (Wrd39.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_23])), (Wrd34.pObj));

DEFLABEL (label_17)
  (Wrd33.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_22])), (Wrd28.pObj));

DEFLABEL (label_16)
  (Wrd27.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_21])), (Wrd22.pObj));

DEFLABEL (label_15)
  (Wrd21.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_65)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_64;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_34_19])), (Wrd6.pObj), Rvl);

DEFLABEL (label_14)
  goto label_63;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_17])), (Wrd37.pObj));

DEFLABEL (label_13)
  (Wrd36.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_16])), (Wrd31.pObj));

DEFLABEL (label_12)
  (Wrd30.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_15])), (Wrd25.pObj));

DEFLABEL (label_11)
  (Wrd24.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_14])), (Wrd19.pObj));

DEFLABEL (label_10)
  (Wrd18.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_12])), (Wrd8.pObj));

DEFLABEL (label_9)
  (Wrd7.Obj) = Rvl;
  goto label_74;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define ENVIRONMENT_LABEL_35_3 14
#define DEBUGGING_LABEL_35_2 13
#define OBJECT_35_1 12
#define OBJECT_35_0 11
#define EXECUTE_CACHE_35_7 7
#define EXECUTE_CACHE_35_6 9
#define FREE_REFERENCES_LABEL_35_0 6
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_35_4);
      goto guarantee_bdb_available_1;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_bdb_available_4)
DEFLABEL (guarantee_bdb_available_1)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_35_1]);
  goto pop_return;

DEFLABEL (label_5)
  (Wrd8.Obj) = (current_block [OBJECT_35_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_7 7
#define LABEL_36_10 9
#define LABEL_36_12 11
#define LABEL_36_8 13
#define TAG_36_9 5
#define LABEL_36_13 15
#define LABEL_36_15 17
#define ENVIRONMENT_LABEL_36_3 34
#define DEBUGGING_LABEL_36_2 33
#define OBJECT_36_2 32
#define OBJECT_36_1 31
#define OBJECT_36_0 30
#define EXECUTE_CACHE_36_16 19
#define EXECUTE_CACHE_36_14 21
#define EXECUTE_CACHE_36_11 23
#define EXECUTE_CACHE_36_6 25
#define FREE_REFERENCE_36_1 28
#define FREE_REFERENCE_36_0 29
#define FREE_REFERENCES_LABEL_36_0 18
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_36_4);
      goto create_bdb_6;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_36_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_36_10);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_36_12);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_36_8);
      goto lambda_13;

    case 6:
      current_block = (Rpc - LABEL_36_13);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_36_15);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (create_bdb_12)
DEFLABEL (create_bdb_6)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_17;
  Wrd5 = Wrd9;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_36_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_36_8])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  (Wrd17.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_1]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_15;
  Wrd19 = Wrd23;

DEFLABEL (label_14)
  (Rsp [2]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_11]));

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_10])), (Wrd20.pObj));

DEFLABEL (label_9)
  (Wrd19.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_7])), (Wrd6.pObj));

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_16;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_36_8);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd10.pObj) [3]);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_22;
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_36_12);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_21)
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_36_13);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 26))
    goto label_20;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd18.Lng) == 0)
    goto label_19;

DEFLABEL (label_18)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_36_1]);
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_16]));

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_36_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_19;

DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_21;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_5 3
#define LABEL_37_6 5
#define LABEL_37_4 7
#define LABEL_37_7 9
#define LABEL_37_13 11
#define LABEL_37_11 13
#define LABEL_37_8 15
#define ENVIRONMENT_LABEL_37_3 31
#define DEBUGGING_LABEL_37_2 30
#define OBJECT_37_2 29
#define OBJECT_37_1 28
#define OBJECT_37_0 27
#define EXECUTE_CACHE_37_15 17
#define EXECUTE_CACHE_37_14 19
#define EXECUTE_CACHE_37_12 21
#define EXECUTE_CACHE_37_10 23
#define EXECUTE_CACHE_37_9 25
#define FREE_REFERENCES_LABEL_37_0 16
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd19;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_37_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_37_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_37_4);
      goto open_bdb_7;

    case 3:
      current_block = (Rpc - LABEL_37_7);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_37_13);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_37_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_37_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_bdb_11)
DEFLABEL (open_bdb_7)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [8]);
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_11]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_37_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_37_6);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [8]);
  if ((Wrd26.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_15)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_8);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 7);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_37_7);
  (Rsp [6]) = Rvl;
  Rsp = (& (Rsp [6]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 26))
    goto label_14;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd18.Lng) == 0)
    goto label_13;

DEFLABEL (label_12)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_37_0]);
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_14]));

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_37_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  goto label_13;

DEFLABEL (label_16)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_15;

DEFLABEL (label_18)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_17;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_6 5
#define LABEL_38_9 7
#define LABEL_38_5 9
#define LABEL_38_11 11
#define LABEL_38_12 13
#define LABEL_38_7 15
#define LABEL_38_13 17
#define TAG_38_14 7
#define ENVIRONMENT_LABEL_38_3 28
#define DEBUGGING_LABEL_38_2 27
#define OBJECT_38_3 26
#define OBJECT_38_2 25
#define OBJECT_38_1 24
#define OBJECT_38_0 23
#define EXECUTE_CACHE_38_10 19
#define EXECUTE_CACHE_38_8 21
#define FREE_REFERENCES_LABEL_38_0 18
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd31;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_38_4);
      goto bdb_names_11;

    case 1:
      current_block = (Rpc - LABEL_38_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_38_9);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_38_11);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_38_12);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_38_7);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_38_13);
      goto lambda_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bdb_names_17)
DEFLABEL (bdb_names_11)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_38_7);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_3]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_38_6);
  (* (--Rsp)) = Rvl;
  (Wrd31.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd31.uLng) == 26))
    goto label_26;
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd41.Lng) == 0)
    goto label_20;

DEFLABEL (label_19)
  (Wrd37.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_38_0]);
  (Rsp [1]) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_10]));

DEFLABEL (label_20)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_25)
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_24;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_23)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_22;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_21)
  (Rsp [0]) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_13])));
  Rhp += 2;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd28 = Wrd25;
  (Wrd29.Obj) = (Rsp [1]);
  ((Wrd28.pObj) [2]) = (Wrd29.Obj);
  ((Wrd28.pObj) [3]) = (Wrd14.Obj);
  Rvl = (Wrd24.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_12]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 1);

DEFLABEL (label_14)
  (Wrd14.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 1);

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_9]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  goto label_20;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_38_5);
  goto label_25;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_38_13);

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

#define LABEL_39_4 3
#define LABEL_39_6 5
#define LABEL_39_9 7
#define LABEL_39_5 9
#define LABEL_39_7 11
#define ENVIRONMENT_LABEL_39_3 21
#define DEBUGGING_LABEL_39_2 20
#define OBJECT_39_2 19
#define OBJECT_39_1 18
#define OBJECT_39_0 17
#define EXECUTE_CACHE_39_10 13
#define EXECUTE_CACHE_39_8 15
#define FREE_REFERENCES_LABEL_39_0 12
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_39_4);
      goto bdb_open_flags_7;

    case 1:
      current_block = (Rpc - LABEL_39_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_39_9);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_39_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bdb_open_flags_11)
DEFLABEL (bdb_open_flags_7)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_39_7);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_2]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_39_6);
  (* (--Rsp)) = Rvl;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_16;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd24.Lng) == 0)
    goto label_13;

DEFLABEL (label_12)
  (Wrd20.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_39_0]);
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_10]));

DEFLABEL (label_13)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_15)
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_14;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  Rvl = ((Wrd8.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 1);

DEFLABEL (label_16)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  goto label_13;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_39_5);
  goto label_15;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_6 5
#define LABEL_40_9 7
#define LABEL_40_5 9
#define LABEL_40_7 11
#define ENVIRONMENT_LABEL_40_3 21
#define DEBUGGING_LABEL_40_2 20
#define OBJECT_40_2 19
#define OBJECT_40_1 18
#define OBJECT_40_0 17
#define EXECUTE_CACHE_40_10 13
#define EXECUTE_CACHE_40_8 15
#define FREE_REFERENCES_LABEL_40_0 12
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_40_4);
      goto bdb_transactionalP_7;

    case 1:
      current_block = (Rpc - LABEL_40_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_40_9);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_40_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bdb_transactionalP_11)
DEFLABEL (bdb_transactionalP_7)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_7);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_2]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_40_6);
  (* (--Rsp)) = Rvl;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_16;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd24.Lng) == 0)
    goto label_13;

DEFLABEL (label_12)
  (Wrd20.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_40_0]);
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_10]));

DEFLABEL (label_13)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_15)
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_14;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  Rvl = ((Wrd8.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 1);

DEFLABEL (label_16)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  goto label_13;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_40_5);
  goto label_15;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_8 7
#define LABEL_41_6 9
#define ENVIRONMENT_LABEL_41_3 19
#define DEBUGGING_LABEL_41_2 18
#define OBJECT_41_2 17
#define OBJECT_41_1 16
#define OBJECT_41_0 15
#define EXECUTE_CACHE_41_9 11
#define EXECUTE_CACHE_41_7 13
#define FREE_REFERENCES_LABEL_41_0 10
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_41_4);
      goto close_bdb_4;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_41_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_41_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (close_bdb_8)
DEFLABEL (close_bdb_4)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_6);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_2]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_41_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 26))
    goto label_11;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd18.Lng) == 0)
    goto label_10;

DEFLABEL (label_9)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_41_0]);
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_41_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_10;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_7 7
#define ENVIRONMENT_LABEL_42_3 13
#define DEBUGGING_LABEL_42_2 12
#define OBJECT_42_0 11
#define EXECUTE_CACHE_42_6 9
#define FREE_REFERENCES_LABEL_42_0 8
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_42_4);
      goto string__dbt_3;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_42_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string__dbt_6)
DEFLABEL (string__dbt_3)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 4);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_42_7);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_7 7
#define ENVIRONMENT_LABEL_43_3 13
#define DEBUGGING_LABEL_43_2 12
#define OBJECT_43_0 11
#define EXECUTE_CACHE_43_6 9
#define FREE_REFERENCES_LABEL_43_0 8
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_43_4);
      goto string__dbt_partial_3;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_43_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string__dbt_partial_6)
DEFLABEL (string__dbt_partial_3)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_0]), 4);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_43_7);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define ENVIRONMENT_LABEL_44_3 10
#define DEBUGGING_LABEL_44_2 9
#define OBJECT_44_0 8
#define FREE_REFERENCE_44_0 7
#define FREE_REFERENCES_LABEL_44_0 6
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_44_4);
      goto make_dbt_0;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_dbt_4)
DEFLABEL (make_dbt_0)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_0]), 1);

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_9 7
#define LABEL_45_7 9
#define LABEL_45_10 11
#define LABEL_45_13 13
#define LABEL_45_14 15
#define LABEL_45_15 17
#define LABEL_45_16 19
#define LABEL_45_17 21
#define LABEL_45_18 23
#define LABEL_45_19 25
#define LABEL_45_21 27
#define LABEL_45_22 29
#define LABEL_45_23 31
#define LABEL_45_25 33
#define LABEL_45_26 35
#define LABEL_45_24 37
#define ENVIRONMENT_LABEL_45_3 60
#define DEBUGGING_LABEL_45_2 59
#define OBJECT_45_6 58
#define OBJECT_45_5 57
#define OBJECT_45_4 56
#define OBJECT_45_3 55
#define OBJECT_45_2 54
#define OBJECT_45_1 53
#define OBJECT_45_0 52
#define EXECUTE_CACHE_45_20 39
#define EXECUTE_CACHE_45_12 41
#define EXECUTE_CACHE_45_11 43
#define EXECUTE_CACHE_45_8 45
#define EXECUTE_CACHE_45_6 47
#define FREE_REFERENCE_45_1 50
#define FREE_REFERENCE_45_0 51
#define FREE_REFERENCES_LABEL_45_0 38
#define NUMBER_OF_LINKER_SECTIONS_45_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd50;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_45_4);
      goto bdb_get_19;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_45_9);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_45_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_45_10);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_45_13);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_45_14);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_45_15);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_45_16);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_45_17);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_45_18);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_45_19);
      goto label_25;

    case 12:
      current_block = (Rpc - LABEL_45_21);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_45_22);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_45_23);
      goto continuation_11;

    case 15:
      current_block = (Rpc - LABEL_45_25);
      goto continuation_12;

    case 16:
      current_block = (Rpc - LABEL_45_26);
      goto label_26;

    case 17:
      current_block = (Rpc - LABEL_45_24);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bdb_get_28)
DEFLABEL (bdb_get_19)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_45_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_45_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_47;
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_45_9);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_46)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_45_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_45_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 4);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_45_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 5);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_45_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_45;
  Wrd6 = Wrd10;

DEFLABEL (label_44)
  Wrd5 = Wrd6;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_43;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_43;
  if (! ((Wrd12.Obj) == (Wrd6.Obj)))
    goto label_30;

DEFLABEL (label_29)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45_1]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_42;
  Wrd22 = Wrd26;

DEFLABEL (label_41)
  Wrd21 = Wrd22;
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_40;
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_40;
  if (! ((Wrd28.Obj) == (Wrd22.Obj)))
    goto label_36;

DEFLABEL (label_35)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_21]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_22]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_6]), 1);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_45_22);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_5]), 1);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_45_21);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_23]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 4);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_45_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 5);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_45_25);
  (* (--Rsp)) = Rvl;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 26))
    goto label_34;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd18.Lng) == 0)
    goto label_32;

DEFLABEL (label_31)
  (Wrd14.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_45_3]);
  (Rsp [1]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_20]));

DEFLABEL (label_32)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_33)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_26]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  goto label_32;

DEFLABEL (label_36)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_39;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if ((Wrd50.Lng) == 0)
    goto label_38;

DEFLABEL (label_37)
  (Wrd44.Obj) = (Rsp [0]);
  (Rsp [7]) = (Wrd44.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_45_3]);
  (Rsp [8]) = (Wrd45.Obj);
  Rsp = (& (Rsp [7]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_20]));

DEFLABEL (label_38)
  (Wrd47.Obj) = (current_block [OBJECT_45_4]);
  (Rsp [8]) = (Wrd47.Obj);
  Rsp = (& (Rsp [8]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_5]), 1);

DEFLABEL (label_39)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_19]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_38;

DEFLABEL (label_40)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_18]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  goto label_35;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45_17])), (Wrd23.pObj));

DEFLABEL (label_23)
  (Wrd22.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_43)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_16]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  goto label_29;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45_15])), (Wrd7.pObj));

DEFLABEL (label_21)
  (Wrd6.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_46;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_45_24);
  goto label_33;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define LABEL_46_6 7
#define LABEL_46_9 9
#define LABEL_46_10 11
#define LABEL_46_11 13
#define LABEL_46_7 15
#define LABEL_46_15 17
#define LABEL_46_13 19
#define LABEL_46_16 21
#define ENVIRONMENT_LABEL_46_3 39
#define DEBUGGING_LABEL_46_2 38
#define OBJECT_46_2 37
#define OBJECT_46_1 36
#define OBJECT_46_0 35
#define EXECUTE_CACHE_46_18 23
#define EXECUTE_CACHE_46_17 25
#define EXECUTE_CACHE_46_14 27
#define EXECUTE_CACHE_46_12 29
#define EXECUTE_CACHE_46_8 31
#define FREE_REFERENCE_46_0 34
#define FREE_REFERENCES_LABEL_46_0 22
#define NUMBER_OF_LINKER_SECTIONS_46_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd37;
  machine_word Wrd6;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_46_4);
      goto bdb_get_partial_10;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_46_6);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_46_9);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_46_10);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_46_11);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_46_7);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_46_15);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_46_13);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_46_16);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bdb_get_partial_16)
DEFLABEL (bdb_get_partial_10)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_46_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_46_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_27;
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_18]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_46_15);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_26)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_16]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_17]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_46_16);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 5);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_46_6);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_25;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd37.Lng) == 0)
    goto label_24;

DEFLABEL (label_23)
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_22;
  Wrd13 = Wrd17;

DEFLABEL (label_21)
  Wrd12 = Wrd13;
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_20;
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_20;
  if ((Wrd19.Obj) == (Wrd13.Obj))
    goto label_18;

DEFLABEL (label_17)
  (Wrd28.Obj) = (Rsp [0]);
  (Rsp [6]) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_46_1]);
  (Rsp [7]) = (Wrd29.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_12]));

DEFLABEL (label_18)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_19)
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_18;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_10])), (Wrd14.pObj));

DEFLABEL (label_13)
  (Wrd13.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  Rvl = (Rsp [1]);
  goto label_19;

DEFLABEL (label_25)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_24;

DEFLABEL (label_27)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_26;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_8 7
#define LABEL_47_6 9
#define LABEL_47_11 11
#define LABEL_47_10 13
#define LABEL_47_12 15
#define ENVIRONMENT_LABEL_47_3 29
#define DEBUGGING_LABEL_47_2 28
#define OBJECT_47_2 27
#define OBJECT_47_1 26
#define OBJECT_47_0 25
#define EXECUTE_CACHE_47_14 17
#define EXECUTE_CACHE_47_13 19
#define EXECUTE_CACHE_47_9 21
#define EXECUTE_CACHE_47_7 23
#define FREE_REFERENCES_LABEL_47_0 16
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_47_4);
      goto bdb_put_7;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_47_8);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_47_6);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_47_11);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_47_10);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_47_12);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bdb_put_11)
DEFLABEL (bdb_put_7)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_47_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_47_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_47_11);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_15)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_12);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_2]), 5);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [4]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 26))
    goto label_14;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd18.Lng) == 0)
    goto label_13;

DEFLABEL (label_12)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_47_0]);
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_9]));

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_47_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  goto label_13;

DEFLABEL (label_16)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_15;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_8 7
#define LABEL_48_6 9
#define LABEL_48_12 11
#define LABEL_48_10 13
#define LABEL_48_13 15
#define ENVIRONMENT_LABEL_48_3 31
#define DEBUGGING_LABEL_48_2 30
#define OBJECT_48_2 29
#define OBJECT_48_1 28
#define OBJECT_48_0 27
#define EXECUTE_CACHE_48_15 17
#define EXECUTE_CACHE_48_14 19
#define EXECUTE_CACHE_48_11 21
#define EXECUTE_CACHE_48_9 23
#define EXECUTE_CACHE_48_7 25
#define FREE_REFERENCES_LABEL_48_0 16
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_48_4);
      goto bdb_put_partial_7;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_48_8);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_48_6);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_48_12);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_48_10);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_48_13);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bdb_put_partial_11)
DEFLABEL (bdb_put_partial_7)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_48_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_48_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_12);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_15)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_14]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_13);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_2]), 5);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_48_5);
  (Rsp [6]) = Rvl;
  Rsp = (& (Rsp [6]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 26))
    goto label_14;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd18.Lng) == 0)
    goto label_13;

DEFLABEL (label_12)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_48_0]);
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_9]));

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_48_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  goto label_13;

DEFLABEL (label_16)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_15;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_8 7
#define LABEL_49_9 9
#define LABEL_49_10 11
#define LABEL_49_12 13
#define LABEL_49_6 15
#define LABEL_49_13 17
#define ENVIRONMENT_LABEL_49_3 33
#define DEBUGGING_LABEL_49_2 32
#define OBJECT_49_2 31
#define OBJECT_49_1 30
#define OBJECT_49_0 29
#define EXECUTE_CACHE_49_15 19
#define EXECUTE_CACHE_49_14 21
#define EXECUTE_CACHE_49_11 23
#define EXECUTE_CACHE_49_7 25
#define FREE_REFERENCE_49_0 28
#define FREE_REFERENCES_LABEL_49_0 18
#define NUMBER_OF_LINKER_SECTIONS_49_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd37;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_49_4);
      goto bdb_delete_7;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_49_8);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_49_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_49_10);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_49_12);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_49_6);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_49_13);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bdb_delete_13)
DEFLABEL (bdb_delete_7)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_49_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_49_12);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_23)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_14]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_13);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_2]), 4);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_49_5);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 26))
    goto label_22;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd37.Lng) == 0)
    goto label_21;

DEFLABEL (label_20)
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_19;
  Wrd14 = Wrd18;

DEFLABEL (label_18)
  Wrd13 = Wrd14;
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_17;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_17;
  if ((Wrd20.Obj) == (Wrd14.Obj))
    goto label_15;

DEFLABEL (label_14)
  (Wrd29.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_49_0]);
  (Rsp [1]) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_11]));

DEFLABEL (label_15)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_16)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_10]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_15;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49_9])), (Wrd15.pObj));

DEFLABEL (label_10)
  (Wrd14.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  Rvl = (current_block [OBJECT_49_1]);
  goto label_16;

DEFLABEL (label_22)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  goto label_21;

DEFLABEL (label_24)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_23;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_9 7
#define LABEL_50_7 9
#define TAG_50_8 3
#define LABEL_50_10 11
#define LABEL_50_14 13
#define LABEL_50_15 15
#define LABEL_50_16 17
#define LABEL_50_12 19
#define LABEL_50_20 21
#define LABEL_50_13 23
#define LABEL_50_17 25
#define TAG_50_18 11
#define ENVIRONMENT_LABEL_50_3 47
#define DEBUGGING_LABEL_50_2 46
#define OBJECT_50_3 45
#define OBJECT_50_2 44
#define OBJECT_50_1 43
#define OBJECT_50_0 42
#define EXECUTE_CACHE_50_22 27
#define EXECUTE_CACHE_50_21 29
#define EXECUTE_CACHE_50_19 31
#define EXECUTE_CACHE_50_11 33
#define EXECUTE_CACHE_50_6 35
#define FREE_REFERENCE_50_3 38
#define FREE_REFERENCE_50_2 39
#define FREE_REFERENCE_50_1 40
#define FREE_REFERENCE_50_0 41
#define FREE_REFERENCES_LABEL_50_0 26
#define NUMBER_OF_LINKER_SECTIONS_50_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_50_4);
      goto create_bdb_env_8;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_50_9);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_50_7);
      goto lambda_17;

    case 4:
      current_block = (Rpc - LABEL_50_10);
      goto lambda_7;

    case 5:
      current_block = (Rpc - LABEL_50_14);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_50_15);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_50_16);
      goto label_13;

    case 8:
      current_block = (Rpc - LABEL_50_12);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_50_20);
      goto label_14;

    case 10:
      current_block = (Rpc - LABEL_50_13);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_50_17);
      goto lambda_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (create_bdb_env_16)
DEFLABEL (create_bdb_env_8)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_50_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_50_7])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_21;
  Wrd9 = Wrd13;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_10]))));
  (Rsp [2]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_11]));

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_9])), (Wrd10.pObj));

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_20;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_50_7);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_50_12);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 26))
    goto label_24;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd18.Lng) == 0)
    goto label_23;

DEFLABEL (label_22)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_50_1]);
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_21]));

DEFLABEL (label_23)
  Rvl = (current_block [OBJECT_50_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_23;

DEFLABEL (lambda_18)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_50_10);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_30;
  Wrd9 = Wrd13;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_2]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_28;
  Wrd15 = Wrd19;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_3]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_26;
  Wrd21 = Wrd25;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd21.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_50_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_50_17])));
  Rhp += 1;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  Wrd29 = Wrd28;
  (Wrd30.Obj) = (Rsp [5]);
  ((Wrd29.pObj) [2]) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_50_13);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_22]));

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_16])), (Wrd22.pObj));

DEFLABEL (label_13)
  (Wrd21.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_15])), (Wrd16.pObj));

DEFLABEL (label_12)
  (Wrd15.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_14])), (Wrd10.pObj));

DEFLABEL (label_11)
  (Wrd9.Obj) = Rvl;
  goto label_29;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_50_17);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_3]), 2);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define LABEL_51_9 7
#define LABEL_51_6 9
#define LABEL_51_7 11
#define LABEL_51_11 13
#define ENVIRONMENT_LABEL_51_3 27
#define DEBUGGING_LABEL_51_2 26
#define OBJECT_51_2 25
#define OBJECT_51_1 24
#define OBJECT_51_0 23
#define EXECUTE_CACHE_51_13 15
#define EXECUTE_CACHE_51_12 17
#define EXECUTE_CACHE_51_10 19
#define EXECUTE_CACHE_51_8 21
#define FREE_REFERENCES_LABEL_51_0 14
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_51_4);
      goto open_bdb_env_6;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_51_9);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_51_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_51_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_51_11);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_bdb_env_10)
DEFLABEL (open_bdb_env_6)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_51_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_51_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_11);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 4);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_51_5);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 26))
    goto label_13;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd18.Lng) == 0)
    goto label_12;

DEFLABEL (label_11)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_51_0]);
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_10]));

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_51_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  goto label_12;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_6 5
#define LABEL_52_9 7
#define LABEL_52_5 9
#define LABEL_52_7 11
#define ENVIRONMENT_LABEL_52_3 21
#define DEBUGGING_LABEL_52_2 20
#define OBJECT_52_2 19
#define OBJECT_52_1 18
#define OBJECT_52_0 17
#define EXECUTE_CACHE_52_10 13
#define EXECUTE_CACHE_52_8 15
#define FREE_REFERENCES_LABEL_52_0 12
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_52_4);
      goto bdb_env_home_7;

    case 1:
      current_block = (Rpc - LABEL_52_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_52_9);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_52_5);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_52_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bdb_env_home_11)
DEFLABEL (bdb_env_home_7)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_52_7);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_2]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_52_6);
  (* (--Rsp)) = Rvl;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_16;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd24.Lng) == 0)
    goto label_13;

DEFLABEL (label_12)
  (Wrd20.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_52_0]);
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_10]));

DEFLABEL (label_13)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_15)
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_14;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  Rvl = ((Wrd8.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 1);

DEFLABEL (label_16)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  goto label_13;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_52_5);
  goto label_15;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_6 5
#define LABEL_53_9 7
#define LABEL_53_5 9
#define LABEL_53_7 11
#define ENVIRONMENT_LABEL_53_3 21
#define DEBUGGING_LABEL_53_2 20
#define OBJECT_53_2 19
#define OBJECT_53_1 18
#define OBJECT_53_0 17
#define EXECUTE_CACHE_53_10 13
#define EXECUTE_CACHE_53_8 15
#define FREE_REFERENCES_LABEL_53_0 12
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_53_4);
      goto bdb_env_open_flags_7;

    case 1:
      current_block = (Rpc - LABEL_53_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_53_9);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_53_5);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_53_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bdb_env_open_flags_11)
DEFLABEL (bdb_env_open_flags_7)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_53_7);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_2]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_53_6);
  (* (--Rsp)) = Rvl;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_16;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd24.Lng) == 0)
    goto label_13;

DEFLABEL (label_12)
  (Wrd20.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_53_0]);
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_10]));

DEFLABEL (label_13)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_15)
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_14;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  Rvl = ((Wrd8.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 1);

DEFLABEL (label_16)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  goto label_13;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_53_5);
  goto label_15;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define LABEL_54_8 7
#define LABEL_54_6 9
#define ENVIRONMENT_LABEL_54_3 19
#define DEBUGGING_LABEL_54_2 18
#define OBJECT_54_2 17
#define OBJECT_54_1 16
#define OBJECT_54_0 15
#define EXECUTE_CACHE_54_9 11
#define EXECUTE_CACHE_54_7 13
#define FREE_REFERENCES_LABEL_54_0 10
#define NUMBER_OF_LINKER_SECTIONS_54_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_54_4);
      goto close_bdb_env_4;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_54_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_54_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (close_bdb_env_8)
DEFLABEL (close_bdb_env_4)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_54_6);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_2]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_54_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 26))
    goto label_11;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd18.Lng) == 0)
    goto label_10;

DEFLABEL (label_9)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_54_0]);
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_9]));

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_54_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_10;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define TAG_55_6 1
#define LABEL_55_7 7
#define LABEL_55_12 9
#define LABEL_55_9 11
#define LABEL_55_14 13
#define LABEL_55_10 15
#define ENVIRONMENT_LABEL_55_3 31
#define DEBUGGING_LABEL_55_2 30
#define OBJECT_55_2 29
#define OBJECT_55_1 28
#define OBJECT_55_0 27
#define EXECUTE_CACHE_55_15 17
#define EXECUTE_CACHE_55_13 19
#define EXECUTE_CACHE_55_11 21
#define EXECUTE_CACHE_55_8 23
#define FREE_REFERENCE_55_0 26
#define FREE_REFERENCES_LABEL_55_0 16
#define NUMBER_OF_LINKER_SECTIONS_55_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_55_4);
      goto bdb_env_lock_id_6;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto lambda_12;

    case 2:
      current_block = (Rpc - LABEL_55_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_55_12);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_55_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_55_14);
      goto label_9;

    case 6:
      current_block = (Rpc - LABEL_55_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bdb_env_lock_id_11)
DEFLABEL (bdb_env_lock_id_6)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_55_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_55_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_55_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_14;
  Wrd6 = Wrd10;

DEFLABEL (label_13)
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_13]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55_12])), (Wrd7.pObj));

DEFLABEL (label_8)
  (Wrd6.Obj) = Rvl;
  goto label_13;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_55_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_55_10);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_2]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_55_9);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 26))
    goto label_17;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd18.Lng) == 0)
    goto label_16;

DEFLABEL (label_15)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_55_0]);
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_15]));

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_55_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  goto label_16;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_5 5
#define LABEL_56_8 7
#define LABEL_56_6 9
#define ENVIRONMENT_LABEL_56_3 19
#define DEBUGGING_LABEL_56_2 18
#define OBJECT_56_2 17
#define OBJECT_56_1 16
#define OBJECT_56_0 15
#define EXECUTE_CACHE_56_9 11
#define EXECUTE_CACHE_56_7 13
#define FREE_REFERENCES_LABEL_56_0 10
#define NUMBER_OF_LINKER_SECTIONS_56_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_56_4);
      goto bdb_env_lock_id_free_4;

    case 1:
      current_block = (Rpc - LABEL_56_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_56_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_56_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bdb_env_lock_id_free_8)
DEFLABEL (bdb_env_lock_id_free_4)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_56_6);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_2]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_56_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 26))
    goto label_11;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd18.Lng) == 0)
    goto label_10;

DEFLABEL (label_9)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_56_0]);
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_9]));

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_56_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_10;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_6 5
#define LABEL_57_5 7
#define LABEL_57_8 9
#define LABEL_57_11 11
#define LABEL_57_7 13
#define LABEL_57_9 15
#define LABEL_57_13 17
#define ENVIRONMENT_LABEL_57_3 31
#define DEBUGGING_LABEL_57_2 30
#define OBJECT_57_2 29
#define OBJECT_57_1 28
#define OBJECT_57_0 27
#define EXECUTE_CACHE_57_14 19
#define EXECUTE_CACHE_57_12 21
#define EXECUTE_CACHE_57_10 23
#define FREE_REFERENCE_57_0 26
#define FREE_REFERENCES_LABEL_57_0 18
#define NUMBER_OF_LINKER_SECTIONS_57_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_57_4);
      goto bdb_env_lock_get_8;

    case 1:
      current_block = (Rpc - LABEL_57_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_57_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_57_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_57_11);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_57_7);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_57_9);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_57_13);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bdb_env_lock_get_13)
DEFLABEL (bdb_env_lock_get_8)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_19;
  Wrd8 = Wrd12;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_57_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_57_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_57_13);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_2]), 6);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_57_8);
  (* (--Rsp)) = Rvl;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 26))
    goto label_17;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd18.Lng) == 0)
    goto label_15;

DEFLABEL (label_14)
  (Wrd14.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_57_1]);
  (Rsp [1]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_12]));

DEFLABEL (label_15)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_16)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_15;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_6])), (Wrd9.pObj));

DEFLABEL (label_10)
  (Wrd8.Obj) = Rvl;
  goto label_18;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_57_7);
  goto label_16;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define LABEL_58_8 7
#define LABEL_58_6 9
#define ENVIRONMENT_LABEL_58_3 19
#define DEBUGGING_LABEL_58_2 18
#define OBJECT_58_2 17
#define OBJECT_58_1 16
#define OBJECT_58_0 15
#define EXECUTE_CACHE_58_9 11
#define EXECUTE_CACHE_58_7 13
#define FREE_REFERENCES_LABEL_58_0 10
#define NUMBER_OF_LINKER_SECTIONS_58_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_58_4);
      goto bdb_env_lock_put_4;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_58_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_58_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bdb_env_lock_put_8)
DEFLABEL (bdb_env_lock_put_4)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_58_6);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_2]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_58_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 26))
    goto label_11;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd18.Lng) == 0)
    goto label_10;

DEFLABEL (label_9)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_58_0]);
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_9]));

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_58_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_10;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_7 5
#define LABEL_59_8 7
#define LABEL_59_10 9
#define LABEL_59_5 11
#define TAG_59_6 4
#define LABEL_59_11 13
#define LABEL_59_15 15
#define LABEL_59_12 17
#define ENVIRONMENT_LABEL_59_3 34
#define DEBUGGING_LABEL_59_2 33
#define OBJECT_59_2 32
#define OBJECT_59_1 31
#define OBJECT_59_0 30
#define EXECUTE_CACHE_59_16 19
#define EXECUTE_CACHE_59_14 21
#define EXECUTE_CACHE_59_13 23
#define EXECUTE_CACHE_59_9 25
#define FREE_REFERENCE_59_1 28
#define FREE_REFERENCE_59_0 29
#define FREE_REFERENCES_LABEL_59_0 18
#define NUMBER_OF_LINKER_SECTIONS_59_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_59_4);
      goto bdb_env_txn_begin_6;

    case 1:
      current_block = (Rpc - LABEL_59_7);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_59_8);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_59_10);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_59_5);
      goto lambda_13;

    case 5:
      current_block = (Rpc - LABEL_59_11);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_59_15);
      goto label_10;

    case 7:
      current_block = (Rpc - LABEL_59_12);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bdb_env_txn_begin_12)
DEFLABEL (bdb_env_txn_begin_6)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_59_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_59_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_17;
  Wrd15 = Wrd19;

DEFLABEL (label_16)
  (Rsp [0]) = (Wrd15.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_1]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_15;
  Wrd22 = Wrd26;

DEFLABEL (label_14)
  (Rsp [2]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_9]));

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_8])), (Wrd23.pObj));

DEFLABEL (label_9)
  (Wrd22.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_7])), (Wrd16.pObj));

DEFLABEL (label_8)
  (Wrd15.Obj) = Rvl;
  goto label_16;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_59_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_10]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd10.pObj) [3]);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_22;
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_59_10);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_21)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_12]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [5]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [4]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_59_12);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_2]), 4);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_59_11);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 26))
    goto label_20;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd18.Lng) == 0)
    goto label_19;

DEFLABEL (label_18)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_59_0]);
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_16]));

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_59_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_19;

DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_21;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_5 5
#define LABEL_60_8 7
#define LABEL_60_6 9
#define ENVIRONMENT_LABEL_60_3 19
#define DEBUGGING_LABEL_60_2 18
#define OBJECT_60_2 17
#define OBJECT_60_1 16
#define OBJECT_60_0 15
#define EXECUTE_CACHE_60_9 11
#define EXECUTE_CACHE_60_7 13
#define FREE_REFERENCES_LABEL_60_0 10
#define NUMBER_OF_LINKER_SECTIONS_60_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_60_4);
      goto bdb_txn_commit_4;

    case 1:
      current_block = (Rpc - LABEL_60_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_60_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_60_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bdb_txn_commit_8)
DEFLABEL (bdb_txn_commit_4)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_60_6);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_2]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_60_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 26))
    goto label_11;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd18.Lng) == 0)
    goto label_10;

DEFLABEL (label_9)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_60_0]);
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_9]));

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_60_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_10;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define LABEL_61_8 7
#define LABEL_61_6 9
#define ENVIRONMENT_LABEL_61_3 19
#define DEBUGGING_LABEL_61_2 18
#define OBJECT_61_2 17
#define OBJECT_61_1 16
#define OBJECT_61_0 15
#define EXECUTE_CACHE_61_9 11
#define EXECUTE_CACHE_61_7 13
#define FREE_REFERENCES_LABEL_61_0 10
#define NUMBER_OF_LINKER_SECTIONS_61_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
berkeley_db_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_61_4);
      goto bdb_txn_abort_4;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_61_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_61_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bdb_txn_abort_8)
DEFLABEL (bdb_txn_abort_4)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_61_6);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_61_5);
  (Rsp [0]) = Rvl;
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 26))
    goto label_11;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd18.Lng) == 0)
    goto label_10;

DEFLABEL (label_9)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_61_0]);
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_9]));

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_61_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_10;

INVOKE_INTERFACE_TARGET_0
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
#define LABEL_42 79
#define LABEL_43 81
#define LABEL_44 83
#define LABEL_45 85
#define LABEL_46 87
#define LABEL_47 89
#define LABEL_48 91
#define LABEL_49 93
#define LABEL_50 95
#define LABEL_51 97
#define LABEL_52 99
#define LABEL_53 101
#define LABEL_54 103
#define LABEL_55 105
#define LABEL_56 107
#define LABEL_57 109
#define LABEL_58 111
#define LABEL_59 113
#define LABEL_60 115
#define LABEL_61 117
#define LABEL_62 119
#define LABEL_63 121
#define LABEL_64 123
#define LABEL_65 125
#define LABEL_66 127
#define LABEL_67 129
#define LABEL_68 131
#define LABEL_69 133
#define LABEL_70 135
#define LABEL_71 137
#define LABEL_72 139
#define LABEL_73 141
#define LABEL_74 143
#define LABEL_75 145
#define LABEL_76 147
#define LABEL_77 149
#define LABEL_78 151
#define LABEL_79 153
#define LABEL_80 155
#define LABEL_81 157
#define LABEL_87 159
#define LABEL_82 161
#define LABEL_83 163
#define LABEL_85 165
#define LABEL_91 167
#define LABEL_92 169
#define LABEL_86 171
#define LABEL_89 173
#define LABEL_90 175
#define LABEL_94 177
#define LABEL_99 179
#define LABEL_95 181
#define LABEL_97 183
#define LABEL_103 185
#define LABEL_98 187
#define LABEL_101 189
#define LABEL_107 191
#define LABEL_102 193
#define LABEL_105 195
#define LABEL_111 197
#define LABEL_106 199
#define LABEL_109 201
#define LABEL_110 203
#define LABEL_113 205
#define LABEL_117 207
#define LABEL_114 209
#define LABEL_115 211
#define LABEL_120 213
#define LABEL_116 215
#define LABEL_118 217
#define LABEL_123 219
#define LABEL_119 221
#define LABEL_121 223
#define LABEL_126 225
#define LABEL_122 227
#define LABEL_124 229
#define LABEL_129 231
#define LABEL_125 233
#define LABEL_127 235
#define LABEL_128 237
#define LABEL_130 239
#define LABEL_134 241
#define LABEL_131 243
#define LABEL_132 245
#define LABEL_137 247
#define LABEL_133 249
#define LABEL_135 251
#define LABEL_140 253
#define LABEL_136 255
#define LABEL_138 257
#define LABEL_143 259
#define LABEL_139 261
#define LABEL_141 263
#define LABEL_142 265
#define LABEL_144 267
#define LABEL_148 269
#define LABEL_145 271
#define LABEL_146 273
#define LABEL_151 275
#define LABEL_147 277
#define LABEL_149 279
#define LABEL_154 281
#define LABEL_150 283
#define LABEL_152 285
#define LABEL_157 287
#define LABEL_153 289
#define LABEL_155 291
#define LABEL_156 293
#define LABEL_158 295
#define LABEL_159 297
#define LABEL_160 299
#define LABEL_161 301
#define LABEL_162 303
#define LABEL_163 305
#define LABEL_164 307
#define LABEL_165 309
#define LABEL_166 311
#define LABEL_167 313
#define LABEL_168 315
#define LABEL_169 317
#define LABEL_170 319
#define LABEL_171 321
#define LABEL_172 323
#define LABEL_173 325
#define LABEL_174 327
#define LABEL_175 329
#define LABEL_176 331
#define LABEL_177 333
#define LABEL_178 335
#define LABEL_179 337
#define LABEL_180 339
#define LABEL_181 341
#define LABEL_182 343
#define LABEL_183 345
#define LABEL_184 347
#define LABEL_185 349
#define LABEL_186 351
#define LABEL_187 353
#define LABEL_188 355
#define LABEL_189 357
#define LABEL_190 359
#define LABEL_191 361
#define LABEL_192 363
#define LABEL_193 365
#define LABEL_194 367
#define LABEL_195 369
#define LABEL_196 371
#define LABEL_197 373
#define ENVIRONMENT_LABEL_3 646
#define DEBUGGING_LABEL_2 645
#define PURIFICATION_ROOT 644
#define OBJECT_243 643
#define OBJECT_242 642
#define OBJECT_241 641
#define OBJECT_240 640
#define OBJECT_239 639
#define OBJECT_238 638
#define OBJECT_237 637
#define OBJECT_236 636
#define OBJECT_235 635
#define OBJECT_234 634
#define OBJECT_233 633
#define OBJECT_232 632
#define OBJECT_231 631
#define OBJECT_230 630
#define OBJECT_229 629
#define OBJECT_228 628
#define OBJECT_227 627
#define OBJECT_226 626
#define OBJECT_225 625
#define OBJECT_224 624
#define OBJECT_223 623
#define OBJECT_222 622
#define OBJECT_221 621
#define OBJECT_220 620
#define OBJECT_219 619
#define OBJECT_218 618
#define OBJECT_217 617
#define OBJECT_216 616
#define OBJECT_215 615
#define OBJECT_214 614
#define OBJECT_213 613
#define OBJECT_212 612
#define OBJECT_211 611
#define OBJECT_210 610
#define OBJECT_209 609
#define OBJECT_208 608
#define OBJECT_207 607
#define OBJECT_206 606
#define OBJECT_205 605
#define OBJECT_204 604
#define OBJECT_203 603
#define OBJECT_202 602
#define OBJECT_201 601
#define OBJECT_200 600
#define OBJECT_199 599
#define OBJECT_198 598
#define OBJECT_197 597
#define OBJECT_196 596
#define OBJECT_195 595
#define OBJECT_194 594
#define OBJECT_193 593
#define OBJECT_192 592
#define OBJECT_191 591
#define OBJECT_190 590
#define OBJECT_189 589
#define OBJECT_188 588
#define OBJECT_187 587
#define OBJECT_186 586
#define OBJECT_185 585
#define OBJECT_184 584
#define OBJECT_183 583
#define OBJECT_182 582
#define OBJECT_181 581
#define OBJECT_180 580
#define OBJECT_179 579
#define OBJECT_178 578
#define OBJECT_177 577
#define OBJECT_176 576
#define OBJECT_175 575
#define OBJECT_174 574
#define OBJECT_173 573
#define OBJECT_172 572
#define OBJECT_171 571
#define OBJECT_170 570
#define OBJECT_169 569
#define OBJECT_168 568
#define OBJECT_167 567
#define OBJECT_166 566
#define OBJECT_165 565
#define OBJECT_164 564
#define OBJECT_163 563
#define OBJECT_162 562
#define OBJECT_161 561
#define OBJECT_160 560
#define OBJECT_159 559
#define OBJECT_158 558
#define OBJECT_157 557
#define OBJECT_156 556
#define OBJECT_155 555
#define OBJECT_154 554
#define OBJECT_153 553
#define OBJECT_152 552
#define OBJECT_151 551
#define OBJECT_150 550
#define OBJECT_149 549
#define OBJECT_148 548
#define OBJECT_147 547
#define OBJECT_146 546
#define OBJECT_145 545
#define OBJECT_144 544
#define OBJECT_143 543
#define OBJECT_142 542
#define OBJECT_141 541
#define OBJECT_140 540
#define OBJECT_139 539
#define OBJECT_138 538
#define OBJECT_137 537
#define OBJECT_136 536
#define OBJECT_135 535
#define OBJECT_134 534
#define OBJECT_133 533
#define OBJECT_132 532
#define OBJECT_131 531
#define OBJECT_130 530
#define OBJECT_129 529
#define OBJECT_128 528
#define OBJECT_127 527
#define OBJECT_126 526
#define OBJECT_125 525
#define OBJECT_124 524
#define OBJECT_123 523
#define OBJECT_122 522
#define OBJECT_121 521
#define OBJECT_120 520
#define OBJECT_119 519
#define OBJECT_118 518
#define OBJECT_117 517
#define OBJECT_116 516
#define OBJECT_115 515
#define OBJECT_114 514
#define OBJECT_113 513
#define OBJECT_112 512
#define OBJECT_111 511
#define OBJECT_110 510
#define OBJECT_109 509
#define OBJECT_108 508
#define OBJECT_107 507
#define OBJECT_106 506
#define OBJECT_105 505
#define OBJECT_104 504
#define OBJECT_103 503
#define OBJECT_102 502
#define OBJECT_101 501
#define OBJECT_100 500
#define OBJECT_99 499
#define OBJECT_98 498
#define OBJECT_97 497
#define OBJECT_96 496
#define OBJECT_95 495
#define OBJECT_94 494
#define OBJECT_93 493
#define OBJECT_92 492
#define OBJECT_91 491
#define OBJECT_90 490
#define OBJECT_89 489
#define OBJECT_88 488
#define OBJECT_87 487
#define OBJECT_86 486
#define OBJECT_85 485
#define OBJECT_84 484
#define OBJECT_83 483
#define OBJECT_82 482
#define OBJECT_81 481
#define OBJECT_80 480
#define OBJECT_79 479
#define OBJECT_78 478
#define OBJECT_77 477
#define OBJECT_76 476
#define OBJECT_75 475
#define OBJECT_74 474
#define OBJECT_73 473
#define OBJECT_72 472
#define OBJECT_71 471
#define OBJECT_70 470
#define OBJECT_69 469
#define OBJECT_68 468
#define OBJECT_67 467
#define OBJECT_66 466
#define OBJECT_65 465
#define OBJECT_64 464
#define OBJECT_63 463
#define OBJECT_62 462
#define OBJECT_61 461
#define OBJECT_60 460
#define OBJECT_59 459
#define OBJECT_58 458
#define OBJECT_57 457
#define OBJECT_56 456
#define OBJECT_55 455
#define OBJECT_54 454
#define OBJECT_53 453
#define OBJECT_52 452
#define OBJECT_51 451
#define OBJECT_50 450
#define OBJECT_49 449
#define OBJECT_48 448
#define OBJECT_47 447
#define OBJECT_46 446
#define OBJECT_45 445
#define OBJECT_44 444
#define OBJECT_43 443
#define OBJECT_42 442
#define OBJECT_41 441
#define OBJECT_40 440
#define OBJECT_39 439
#define OBJECT_38 438
#define OBJECT_37 437
#define OBJECT_36 436
#define OBJECT_35 435
#define OBJECT_34 434
#define OBJECT_33 433
#define OBJECT_32 432
#define OBJECT_31 431
#define OBJECT_30 430
#define OBJECT_29 429
#define OBJECT_28 428
#define OBJECT_27 427
#define OBJECT_26 426
#define OBJECT_25 425
#define OBJECT_24 424
#define OBJECT_23 423
#define OBJECT_22 422
#define OBJECT_21 421
#define OBJECT_20 420
#define OBJECT_19 419
#define OBJECT_18 418
#define OBJECT_17 417
#define OBJECT_16 416
#define OBJECT_15 415
#define OBJECT_14 414
#define OBJECT_13 413
#define OBJECT_12 412
#define OBJECT_11 411
#define OBJECT_10 410
#define OBJECT_9 409
#define OBJECT_8 408
#define OBJECT_7 407
#define OBJECT_6 406
#define OBJECT_5 405
#define OBJECT_4 404
#define OBJECT_3 403
#define OBJECT_2 402
#define OBJECT_1 401
#define OBJECT_0 400
#define EXECUTE_CACHE_112 375
#define EXECUTE_CACHE_108 377
#define EXECUTE_CACHE_104 379
#define EXECUTE_CACHE_100 381
#define EXECUTE_CACHE_96 383
#define EXECUTE_CACHE_93 385
#define EXECUTE_CACHE_88 387
#define FREE_REFERENCE_6 390
#define FREE_REFERENCE_5 391
#define FREE_REFERENCE_4 392
#define FREE_REFERENCE_3 393
#define FREE_REFERENCE_2 394
#define FREE_REFERENCE_1 395
#define FREE_REFERENCE_0 396
#define GLOBAL_EXECUTE_CACHE_84 398
#define FREE_REFERENCES_LABEL_0 374
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
berkeley_db_so_d4e0cda5951aa171 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto continuation_35;

    case 36:
      current_block = (Rpc - LABEL_40);
      goto continuation_36;

    case 37:
      current_block = (Rpc - LABEL_41);
      goto continuation_37;

    case 38:
      current_block = (Rpc - LABEL_42);
      goto continuation_38;

    case 39:
      current_block = (Rpc - LABEL_43);
      goto continuation_39;

    case 40:
      current_block = (Rpc - LABEL_44);
      goto continuation_40;

    case 41:
      current_block = (Rpc - LABEL_45);
      goto continuation_41;

    case 42:
      current_block = (Rpc - LABEL_46);
      goto continuation_42;

    case 43:
      current_block = (Rpc - LABEL_47);
      goto continuation_43;

    case 44:
      current_block = (Rpc - LABEL_48);
      goto continuation_44;

    case 45:
      current_block = (Rpc - LABEL_49);
      goto continuation_45;

    case 46:
      current_block = (Rpc - LABEL_50);
      goto continuation_46;

    case 47:
      current_block = (Rpc - LABEL_51);
      goto continuation_47;

    case 48:
      current_block = (Rpc - LABEL_52);
      goto continuation_48;

    case 49:
      current_block = (Rpc - LABEL_53);
      goto continuation_49;

    case 50:
      current_block = (Rpc - LABEL_54);
      goto continuation_50;

    case 51:
      current_block = (Rpc - LABEL_55);
      goto continuation_51;

    case 52:
      current_block = (Rpc - LABEL_56);
      goto continuation_52;

    case 53:
      current_block = (Rpc - LABEL_57);
      goto continuation_53;

    case 54:
      current_block = (Rpc - LABEL_58);
      goto continuation_54;

    case 55:
      current_block = (Rpc - LABEL_59);
      goto continuation_55;

    case 56:
      current_block = (Rpc - LABEL_60);
      goto continuation_56;

    case 57:
      current_block = (Rpc - LABEL_61);
      goto continuation_57;

    case 58:
      current_block = (Rpc - LABEL_62);
      goto continuation_58;

    case 59:
      current_block = (Rpc - LABEL_63);
      goto continuation_59;

    case 60:
      current_block = (Rpc - LABEL_64);
      goto continuation_60;

    case 61:
      current_block = (Rpc - LABEL_65);
      goto continuation_61;

    case 62:
      current_block = (Rpc - LABEL_66);
      goto continuation_62;

    case 63:
      current_block = (Rpc - LABEL_67);
      goto continuation_63;

    case 64:
      current_block = (Rpc - LABEL_68);
      goto continuation_64;

    case 65:
      current_block = (Rpc - LABEL_69);
      goto continuation_65;

    case 66:
      current_block = (Rpc - LABEL_70);
      goto continuation_66;

    case 67:
      current_block = (Rpc - LABEL_71);
      goto continuation_67;

    case 68:
      current_block = (Rpc - LABEL_72);
      goto continuation_68;

    case 69:
      current_block = (Rpc - LABEL_73);
      goto continuation_69;

    case 70:
      current_block = (Rpc - LABEL_74);
      goto continuation_70;

    case 71:
      current_block = (Rpc - LABEL_75);
      goto continuation_71;

    case 72:
      current_block = (Rpc - LABEL_76);
      goto continuation_72;

    case 73:
      current_block = (Rpc - LABEL_77);
      goto continuation_73;

    case 74:
      current_block = (Rpc - LABEL_78);
      goto continuation_74;

    case 75:
      current_block = (Rpc - LABEL_79);
      goto continuation_75;

    case 76:
      current_block = (Rpc - LABEL_80);
      goto continuation_76;

    case 77:
      current_block = (Rpc - LABEL_81);
      goto continuation_80;

    case 78:
      current_block = (Rpc - LABEL_87);
      goto label_166;

    case 79:
      current_block = (Rpc - LABEL_82);
      goto continuation_79;

    case 80:
      current_block = (Rpc - LABEL_83);
      goto continuation_77;

    case 81:
      current_block = (Rpc - LABEL_85);
      goto continuation_82;

    case 82:
      current_block = (Rpc - LABEL_91);
      goto label_167;

    case 83:
      current_block = (Rpc - LABEL_92);
      goto label_168;

    case 84:
      current_block = (Rpc - LABEL_86);
      goto continuation_81;

    case 85:
      current_block = (Rpc - LABEL_89);
      goto continuation_84;

    case 86:
      current_block = (Rpc - LABEL_90);
      goto continuation_83;

    case 87:
      current_block = (Rpc - LABEL_94);
      goto continuation_86;

    case 88:
      current_block = (Rpc - LABEL_99);
      goto label_169;

    case 89:
      current_block = (Rpc - LABEL_95);
      goto continuation_85;

    case 90:
      current_block = (Rpc - LABEL_97);
      goto continuation_88;

    case 91:
      current_block = (Rpc - LABEL_103);
      goto label_170;

    case 92:
      current_block = (Rpc - LABEL_98);
      goto continuation_87;

    case 93:
      current_block = (Rpc - LABEL_101);
      goto continuation_90;

    case 94:
      current_block = (Rpc - LABEL_107);
      goto label_171;

    case 95:
      current_block = (Rpc - LABEL_102);
      goto continuation_89;

    case 96:
      current_block = (Rpc - LABEL_105);
      goto continuation_92;

    case 97:
      current_block = (Rpc - LABEL_111);
      goto label_172;

    case 98:
      current_block = (Rpc - LABEL_106);
      goto continuation_91;

    case 99:
      current_block = (Rpc - LABEL_109);
      goto continuation_94;

    case 100:
      current_block = (Rpc - LABEL_110);
      goto continuation_93;

    case 101:
      current_block = (Rpc - LABEL_113);
      goto continuation_96;

    case 102:
      current_block = (Rpc - LABEL_117);
      goto label_173;

    case 103:
      current_block = (Rpc - LABEL_114);
      goto continuation_95;

    case 104:
      current_block = (Rpc - LABEL_115);
      goto continuation_98;

    case 105:
      current_block = (Rpc - LABEL_120);
      goto label_174;

    case 106:
      current_block = (Rpc - LABEL_116);
      goto continuation_97;

    case 107:
      current_block = (Rpc - LABEL_118);
      goto continuation_100;

    case 108:
      current_block = (Rpc - LABEL_123);
      goto label_175;

    case 109:
      current_block = (Rpc - LABEL_119);
      goto continuation_99;

    case 110:
      current_block = (Rpc - LABEL_121);
      goto continuation_102;

    case 111:
      current_block = (Rpc - LABEL_126);
      goto label_176;

    case 112:
      current_block = (Rpc - LABEL_122);
      goto continuation_101;

    case 113:
      current_block = (Rpc - LABEL_124);
      goto continuation_104;

    case 114:
      current_block = (Rpc - LABEL_129);
      goto label_177;

    case 115:
      current_block = (Rpc - LABEL_125);
      goto continuation_103;

    case 116:
      current_block = (Rpc - LABEL_127);
      goto continuation_106;

    case 117:
      current_block = (Rpc - LABEL_128);
      goto continuation_105;

    case 118:
      current_block = (Rpc - LABEL_130);
      goto continuation_108;

    case 119:
      current_block = (Rpc - LABEL_134);
      goto label_178;

    case 120:
      current_block = (Rpc - LABEL_131);
      goto continuation_107;

    case 121:
      current_block = (Rpc - LABEL_132);
      goto continuation_110;

    case 122:
      current_block = (Rpc - LABEL_137);
      goto label_179;

    case 123:
      current_block = (Rpc - LABEL_133);
      goto continuation_109;

    case 124:
      current_block = (Rpc - LABEL_135);
      goto continuation_112;

    case 125:
      current_block = (Rpc - LABEL_140);
      goto label_180;

    case 126:
      current_block = (Rpc - LABEL_136);
      goto continuation_111;

    case 127:
      current_block = (Rpc - LABEL_138);
      goto continuation_114;

    case 128:
      current_block = (Rpc - LABEL_143);
      goto label_181;

    case 129:
      current_block = (Rpc - LABEL_139);
      goto continuation_113;

    case 130:
      current_block = (Rpc - LABEL_141);
      goto continuation_116;

    case 131:
      current_block = (Rpc - LABEL_142);
      goto continuation_115;

    case 132:
      current_block = (Rpc - LABEL_144);
      goto continuation_118;

    case 133:
      current_block = (Rpc - LABEL_148);
      goto label_182;

    case 134:
      current_block = (Rpc - LABEL_145);
      goto continuation_117;

    case 135:
      current_block = (Rpc - LABEL_146);
      goto continuation_120;

    case 136:
      current_block = (Rpc - LABEL_151);
      goto label_183;

    case 137:
      current_block = (Rpc - LABEL_147);
      goto continuation_119;

    case 138:
      current_block = (Rpc - LABEL_149);
      goto continuation_122;

    case 139:
      current_block = (Rpc - LABEL_154);
      goto label_184;

    case 140:
      current_block = (Rpc - LABEL_150);
      goto continuation_121;

    case 141:
      current_block = (Rpc - LABEL_152);
      goto continuation_124;

    case 142:
      current_block = (Rpc - LABEL_157);
      goto label_185;

    case 143:
      current_block = (Rpc - LABEL_153);
      goto continuation_123;

    case 144:
      current_block = (Rpc - LABEL_155);
      goto continuation_126;

    case 145:
      current_block = (Rpc - LABEL_156);
      goto continuation_125;

    case 146:
      current_block = (Rpc - LABEL_158);
      goto continuation_127;

    case 147:
      current_block = (Rpc - LABEL_159);
      goto continuation_128;

    case 148:
      current_block = (Rpc - LABEL_160);
      goto continuation_129;

    case 149:
      current_block = (Rpc - LABEL_161);
      goto continuation_130;

    case 150:
      current_block = (Rpc - LABEL_162);
      goto continuation_131;

    case 151:
      current_block = (Rpc - LABEL_163);
      goto continuation_132;

    case 152:
      current_block = (Rpc - LABEL_164);
      goto continuation_133;

    case 153:
      current_block = (Rpc - LABEL_165);
      goto continuation_134;

    case 154:
      current_block = (Rpc - LABEL_166);
      goto continuation_135;

    case 155:
      current_block = (Rpc - LABEL_167);
      goto continuation_136;

    case 156:
      current_block = (Rpc - LABEL_168);
      goto continuation_137;

    case 157:
      current_block = (Rpc - LABEL_169);
      goto continuation_138;

    case 158:
      current_block = (Rpc - LABEL_170);
      goto continuation_139;

    case 159:
      current_block = (Rpc - LABEL_171);
      goto continuation_140;

    case 160:
      current_block = (Rpc - LABEL_172);
      goto continuation_141;

    case 161:
      current_block = (Rpc - LABEL_173);
      goto continuation_142;

    case 162:
      current_block = (Rpc - LABEL_174);
      goto continuation_143;

    case 163:
      current_block = (Rpc - LABEL_175);
      goto continuation_145;

    case 164:
      current_block = (Rpc - LABEL_176);
      goto continuation_144;

    case 165:
      current_block = (Rpc - LABEL_177);
      goto continuation_147;

    case 166:
      current_block = (Rpc - LABEL_178);
      goto continuation_146;

    case 167:
      current_block = (Rpc - LABEL_179);
      goto continuation_148;

    case 168:
      current_block = (Rpc - LABEL_180);
      goto continuation_149;

    case 169:
      current_block = (Rpc - LABEL_181);
      goto continuation_150;

    case 170:
      current_block = (Rpc - LABEL_182);
      goto continuation_151;

    case 171:
      current_block = (Rpc - LABEL_183);
      goto continuation_152;

    case 172:
      current_block = (Rpc - LABEL_184);
      goto continuation_153;

    case 173:
      current_block = (Rpc - LABEL_185);
      goto continuation_154;

    case 174:
      current_block = (Rpc - LABEL_186);
      goto continuation_155;

    case 175:
      current_block = (Rpc - LABEL_187);
      goto continuation_156;

    case 176:
      current_block = (Rpc - LABEL_188);
      goto continuation_157;

    case 177:
      current_block = (Rpc - LABEL_189);
      goto continuation_158;

    case 178:
      current_block = (Rpc - LABEL_190);
      goto continuation_159;

    case 179:
      current_block = (Rpc - LABEL_191);
      goto continuation_160;

    case 180:
      current_block = (Rpc - LABEL_192);
      goto continuation_161;

    case 181:
      current_block = (Rpc - LABEL_193);
      goto continuation_162;

    case 182:
      current_block = (Rpc - LABEL_194);
      goto continuation_163;

    case 183:
      current_block = (Rpc - LABEL_195);
      goto label_188;

    case 184:
      current_block = (Rpc - LABEL_196);
      goto label_189;

    case 185:
      current_block = (Rpc - LABEL_197);
      goto expression_165;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_165)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_196])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_189)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_188)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	2,
	1,
	2,
	1,
	2,
	1,
	1,
	1,
	1,
	2,
	2,
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
	1,
	1,
	2,
	1,
	3,
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
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 61)
      goto label_187;
    blocks = (current_block [OBJECT_243]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_195])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_187)
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
  (Wrd8.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_83]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_92]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_93]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_94]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_95]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_96]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_98]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_99]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_100]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_101]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_102]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_103]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_105]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_106]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_107]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_108]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_110]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_111]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_112]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_113]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_114]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_115]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_116]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_95]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_117]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_118]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_99]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_119]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_101]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_120]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_66);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_95]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_121]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_122]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_123]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_124]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_125]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_126]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_127]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_71);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_128]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_129]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_72);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_130]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_73);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_131]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_74);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_132]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_133]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_75);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_134]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_76);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_135]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_136]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_77);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_137]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_138]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_78);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_139]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_140]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_79);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_141]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_80);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_142]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_84]));

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_83);
  (Wrd9.Obj) = (current_block [OBJECT_147]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_148]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_149]), 2);

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_82);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_146]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_81);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_143]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_144]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_229;
  Wrd13 = Wrd17;

DEFLABEL (label_228)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_145]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88]));

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_86);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_150]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_85);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_227;
  Wrd11 = Wrd15;

DEFLABEL (label_226)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_144]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_225;
  Wrd18 = Wrd22;

DEFLABEL (label_224)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93]));

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_90);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_145]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_89);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_151]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_152]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96]));

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_95);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_152]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_94);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_151]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_223;
  Wrd12 = Wrd16;

DEFLABEL (label_222)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100]));

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_98);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_153]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_97);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_221;
  Wrd11 = Wrd15;

DEFLABEL (label_220)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104]));

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_102);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_155]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_101);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_154]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_219;
  Wrd12 = Wrd16;

DEFLABEL (label_218)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108]));

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_106);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_156]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_105);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_154]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_217;
  Wrd12 = Wrd16;

DEFLABEL (label_216)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_112]));

DEFLABEL (continuation_93)
  INTERRUPT_CHECK (27, LABEL_110);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_159]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_109);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_157]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_158]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96]));

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_114);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_158]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_113);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_151]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_215;
  Wrd12 = Wrd16;

DEFLABEL (label_214)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100]));

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_116);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_160]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_115);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_213;
  Wrd11 = Wrd15;

DEFLABEL (label_212)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104]));

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_119);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_161]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_118);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_154]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_211;
  Wrd12 = Wrd16;

DEFLABEL (label_210)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108]));

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_122);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_162]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_121);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_154]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_209;
  Wrd12 = Wrd16;

DEFLABEL (label_208)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_112]));

DEFLABEL (continuation_103)
  INTERRUPT_CHECK (27, LABEL_125);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_164]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_124);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_127]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_163]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_207;
  Wrd12 = Wrd16;

DEFLABEL (label_206)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108]));

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_128);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_166]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_106)
  INTERRUPT_CHECK (27, LABEL_127);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_151]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_165]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96]));

DEFLABEL (continuation_107)
  INTERRUPT_CHECK (27, LABEL_131);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_165]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_108)
  INTERRUPT_CHECK (27, LABEL_130);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_132]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_151]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_205;
  Wrd12 = Wrd16;

DEFLABEL (label_204)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100]));

DEFLABEL (continuation_109)
  INTERRUPT_CHECK (27, LABEL_133);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_167]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_110)
  INTERRUPT_CHECK (27, LABEL_132);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_135]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_136]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_203;
  Wrd11 = Wrd15;

DEFLABEL (label_202)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104]));

DEFLABEL (continuation_111)
  INTERRUPT_CHECK (27, LABEL_136);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_168]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_112)
  INTERRUPT_CHECK (27, LABEL_135);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_138]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_139]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_154]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_201;
  Wrd12 = Wrd16;

DEFLABEL (label_200)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108]));

DEFLABEL (continuation_113)
  INTERRUPT_CHECK (27, LABEL_139);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_169]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_114)
  INTERRUPT_CHECK (27, LABEL_138);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_141]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_142]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_154]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_199;
  Wrd12 = Wrd16;

DEFLABEL (label_198)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_112]));

DEFLABEL (continuation_115)
  INTERRUPT_CHECK (27, LABEL_142);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_171]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_116)
  INTERRUPT_CHECK (27, LABEL_141);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_144]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_145]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_151]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_170]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96]));

DEFLABEL (continuation_117)
  INTERRUPT_CHECK (27, LABEL_145);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_170]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_118)
  INTERRUPT_CHECK (27, LABEL_144);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_146]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_147]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_151]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_197;
  Wrd12 = Wrd16;

DEFLABEL (label_196)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100]));

DEFLABEL (continuation_119)
  INTERRUPT_CHECK (27, LABEL_147);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_172]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_120)
  INTERRUPT_CHECK (27, LABEL_146);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_149]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_150]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_195;
  Wrd11 = Wrd15;

DEFLABEL (label_194)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104]));

DEFLABEL (continuation_121)
  INTERRUPT_CHECK (27, LABEL_150);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_173]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_122)
  INTERRUPT_CHECK (27, LABEL_149);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_152]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_153]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_154]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_193;
  Wrd12 = Wrd16;

DEFLABEL (label_192)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108]));

DEFLABEL (continuation_123)
  INTERRUPT_CHECK (27, LABEL_153);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_174]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_124)
  INTERRUPT_CHECK (27, LABEL_152);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_155]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_156]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_154]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_191;
  Wrd12 = Wrd16;

DEFLABEL (label_190)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_112]));

DEFLABEL (continuation_125)
  INTERRUPT_CHECK (27, LABEL_156);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_176]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_126)
  INTERRUPT_CHECK (27, LABEL_155);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_158]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_175]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_127)
  INTERRUPT_CHECK (27, LABEL_158);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_159]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_177]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_128)
  INTERRUPT_CHECK (27, LABEL_159);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_160]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_178]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_129)
  INTERRUPT_CHECK (27, LABEL_160);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_161]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_179]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_130)
  INTERRUPT_CHECK (27, LABEL_161);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_162]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_180]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_131)
  INTERRUPT_CHECK (27, LABEL_162);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_163]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_181]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_132)
  INTERRUPT_CHECK (27, LABEL_163);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_164]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_182]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_183]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_133)
  INTERRUPT_CHECK (27, LABEL_164);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_165]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_184]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_185]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_134)
  INTERRUPT_CHECK (27, LABEL_165);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_166]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_186]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_187]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_135)
  INTERRUPT_CHECK (27, LABEL_166);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_167]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_188]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_189]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_136)
  INTERRUPT_CHECK (27, LABEL_167);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_168]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_190]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_191]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_137)
  INTERRUPT_CHECK (27, LABEL_168);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_169]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_192]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_193]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_138)
  INTERRUPT_CHECK (27, LABEL_169);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_170]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_194]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_195]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_139)
  INTERRUPT_CHECK (27, LABEL_170);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_171]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_196]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_197]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_140)
  INTERRUPT_CHECK (27, LABEL_171);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_172]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_198]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_199]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_141)
  INTERRUPT_CHECK (27, LABEL_172);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_173]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_200]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_201]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_142)
  INTERRUPT_CHECK (27, LABEL_173);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_174]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_202]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_203]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_143)
  INTERRUPT_CHECK (27, LABEL_174);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_176]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_204]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_205]), 1);

DEFLABEL (continuation_144)
  INTERRUPT_CHECK (27, LABEL_176);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_207]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_145)
  INTERRUPT_CHECK (27, LABEL_175);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_177]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_178]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_206]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_205]), 1);

DEFLABEL (continuation_146)
  INTERRUPT_CHECK (27, LABEL_178);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_210]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_147)
  INTERRUPT_CHECK (27, LABEL_177);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_179]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_208]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_209]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_148)
  INTERRUPT_CHECK (27, LABEL_179);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_180]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_211]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_212]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_149)
  INTERRUPT_CHECK (27, LABEL_180);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_181]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_213]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_214]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_150)
  INTERRUPT_CHECK (27, LABEL_181);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_182]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_215]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_216]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_151)
  INTERRUPT_CHECK (27, LABEL_182);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_183]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_217]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_218]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_152)
  INTERRUPT_CHECK (27, LABEL_183);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_184]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_219]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_220]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_153)
  INTERRUPT_CHECK (27, LABEL_184);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_185]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_221]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_222]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_154)
  INTERRUPT_CHECK (27, LABEL_185);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_186]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_223]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_224]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_155)
  INTERRUPT_CHECK (27, LABEL_186);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_187]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_225]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_226]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_156)
  INTERRUPT_CHECK (27, LABEL_187);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_188]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_227]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_228]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_157)
  INTERRUPT_CHECK (27, LABEL_188);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_189]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_229]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_230]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_158)
  INTERRUPT_CHECK (27, LABEL_189);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_190]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_231]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_232]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_159)
  INTERRUPT_CHECK (27, LABEL_190);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_191]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_233]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_234]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_160)
  INTERRUPT_CHECK (27, LABEL_191);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_192]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_235]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_236]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_161)
  INTERRUPT_CHECK (27, LABEL_192);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_193]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_237]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_238]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_162)
  INTERRUPT_CHECK (27, LABEL_193);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_194]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_239]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_240]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_163)
  INTERRUPT_CHECK (27, LABEL_194);
  (Wrd5.Obj) = (current_block [OBJECT_241]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_242]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (label_191)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_157])), (Wrd13.pObj));

DEFLABEL (label_185)
  (Wrd12.Obj) = Rvl;
  goto label_190;

DEFLABEL (label_193)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_154])), (Wrd13.pObj));

DEFLABEL (label_184)
  (Wrd12.Obj) = Rvl;
  goto label_192;

DEFLABEL (label_195)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_151])), (Wrd12.pObj));

DEFLABEL (label_183)
  (Wrd11.Obj) = Rvl;
  goto label_194;

DEFLABEL (label_197)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_148])), (Wrd13.pObj));

DEFLABEL (label_182)
  (Wrd12.Obj) = Rvl;
  goto label_196;

DEFLABEL (label_199)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_143])), (Wrd13.pObj));

DEFLABEL (label_181)
  (Wrd12.Obj) = Rvl;
  goto label_198;

DEFLABEL (label_201)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_140])), (Wrd13.pObj));

DEFLABEL (label_180)
  (Wrd12.Obj) = Rvl;
  goto label_200;

DEFLABEL (label_203)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_137])), (Wrd12.pObj));

DEFLABEL (label_179)
  (Wrd11.Obj) = Rvl;
  goto label_202;

DEFLABEL (label_205)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_134])), (Wrd13.pObj));

DEFLABEL (label_178)
  (Wrd12.Obj) = Rvl;
  goto label_204;

DEFLABEL (label_207)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_129])), (Wrd13.pObj));

DEFLABEL (label_177)
  (Wrd12.Obj) = Rvl;
  goto label_206;

DEFLABEL (label_209)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_126])), (Wrd13.pObj));

DEFLABEL (label_176)
  (Wrd12.Obj) = Rvl;
  goto label_208;

DEFLABEL (label_211)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_123])), (Wrd13.pObj));

DEFLABEL (label_175)
  (Wrd12.Obj) = Rvl;
  goto label_210;

DEFLABEL (label_213)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_120])), (Wrd12.pObj));

DEFLABEL (label_174)
  (Wrd11.Obj) = Rvl;
  goto label_212;

DEFLABEL (label_215)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_117])), (Wrd13.pObj));

DEFLABEL (label_173)
  (Wrd12.Obj) = Rvl;
  goto label_214;

DEFLABEL (label_217)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_111])), (Wrd13.pObj));

DEFLABEL (label_172)
  (Wrd12.Obj) = Rvl;
  goto label_216;

DEFLABEL (label_219)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_107])), (Wrd13.pObj));

DEFLABEL (label_171)
  (Wrd12.Obj) = Rvl;
  goto label_218;

DEFLABEL (label_221)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_103])), (Wrd12.pObj));

DEFLABEL (label_170)
  (Wrd11.Obj) = Rvl;
  goto label_220;

DEFLABEL (label_223)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_99])), (Wrd13.pObj));

DEFLABEL (label_169)
  (Wrd12.Obj) = Rvl;
  goto label_222;

DEFLABEL (label_225)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_92])), (Wrd19.pObj));

DEFLABEL (label_168)
  (Wrd18.Obj) = Rvl;
  goto label_224;

DEFLABEL (label_227)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_91])), (Wrd12.pObj));

DEFLABEL (label_167)
  (Wrd11.Obj) = Rvl;
  goto label_226;

DEFLABEL (label_229)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_87])), (Wrd14.pObj));

DEFLABEL (label_166)
  (Wrd13.Obj) = Rvl;
  goto label_228;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_berkeley_db_so_d4e0cda5951aa171 [61] =
  {
    { "berkeley_db_so_code_1", 1, berkeley_db_so_code_1 },
    { "berkeley_db_so_code_2", 1, berkeley_db_so_code_2 },
    { "berkeley_db_so_code_3", 1, berkeley_db_so_code_3 },
    { "berkeley_db_so_code_4", 1, berkeley_db_so_code_4 },
    { "berkeley_db_so_code_5", 1, berkeley_db_so_code_5 },
    { "berkeley_db_so_code_6", 1, berkeley_db_so_code_6 },
    { "berkeley_db_so_code_7", 1, berkeley_db_so_code_7 },
    { "berkeley_db_so_code_8", 1, berkeley_db_so_code_8 },
    { "berkeley_db_so_code_9", 1, berkeley_db_so_code_9 },
    { "berkeley_db_so_code_10", 1, berkeley_db_so_code_10 },
    { "berkeley_db_so_code_11", 1, berkeley_db_so_code_11 },
    { "berkeley_db_so_code_12", 1, berkeley_db_so_code_12 },
    { "berkeley_db_so_code_13", 1, berkeley_db_so_code_13 },
    { "berkeley_db_so_code_14", 1, berkeley_db_so_code_14 },
    { "berkeley_db_so_code_15", 1, berkeley_db_so_code_15 },
    { "berkeley_db_so_code_16", 1, berkeley_db_so_code_16 },
    { "berkeley_db_so_code_17", 1, berkeley_db_so_code_17 },
    { "berkeley_db_so_code_18", 1, berkeley_db_so_code_18 },
    { "berkeley_db_so_code_19", 1, berkeley_db_so_code_19 },
    { "berkeley_db_so_code_20", 1, berkeley_db_so_code_20 },
    { "berkeley_db_so_code_21", 1, berkeley_db_so_code_21 },
    { "berkeley_db_so_code_22", 1, berkeley_db_so_code_22 },
    { "berkeley_db_so_code_23", 1, berkeley_db_so_code_23 },
    { "berkeley_db_so_code_24", 1, berkeley_db_so_code_24 },
    { "berkeley_db_so_code_25", 1, berkeley_db_so_code_25 },
    { "berkeley_db_so_code_26", 1, berkeley_db_so_code_26 },
    { "berkeley_db_so_code_27", 1, berkeley_db_so_code_27 },
    { "berkeley_db_so_code_28", 1, berkeley_db_so_code_28 },
    { "berkeley_db_so_code_29", 1, berkeley_db_so_code_29 },
    { "berkeley_db_so_code_30", 1, berkeley_db_so_code_30 },
    { "berkeley_db_so_code_31", 1, berkeley_db_so_code_31 },
    { "berkeley_db_so_code_32", 12, berkeley_db_so_code_32 },
    { "berkeley_db_so_code_33", 11, berkeley_db_so_code_33 },
    { "berkeley_db_so_code_34", 27, berkeley_db_so_code_34 },
    { "berkeley_db_so_code_35", 2, berkeley_db_so_code_35 },
    { "berkeley_db_so_code_36", 8, berkeley_db_so_code_36 },
    { "berkeley_db_so_code_37", 7, berkeley_db_so_code_37 },
    { "berkeley_db_so_code_38", 8, berkeley_db_so_code_38 },
    { "berkeley_db_so_code_39", 5, berkeley_db_so_code_39 },
    { "berkeley_db_so_code_40", 5, berkeley_db_so_code_40 },
    { "berkeley_db_so_code_41", 4, berkeley_db_so_code_41 },
    { "berkeley_db_so_code_42", 3, berkeley_db_so_code_42 },
    { "berkeley_db_so_code_43", 3, berkeley_db_so_code_43 },
    { "berkeley_db_so_code_44", 2, berkeley_db_so_code_44 },
    { "berkeley_db_so_code_45", 18, berkeley_db_so_code_45 },
    { "berkeley_db_so_code_46", 10, berkeley_db_so_code_46 },
    { "berkeley_db_so_code_47", 7, berkeley_db_so_code_47 },
    { "berkeley_db_so_code_48", 7, berkeley_db_so_code_48 },
    { "berkeley_db_so_code_49", 8, berkeley_db_so_code_49 },
    { "berkeley_db_so_code_50", 12, berkeley_db_so_code_50 },
    { "berkeley_db_so_code_51", 6, berkeley_db_so_code_51 },
    { "berkeley_db_so_code_52", 5, berkeley_db_so_code_52 },
    { "berkeley_db_so_code_53", 5, berkeley_db_so_code_53 },
    { "berkeley_db_so_code_54", 4, berkeley_db_so_code_54 },
    { "berkeley_db_so_code_55", 7, berkeley_db_so_code_55 },
    { "berkeley_db_so_code_56", 4, berkeley_db_so_code_56 },
    { "berkeley_db_so_code_57", 8, berkeley_db_so_code_57 },
    { "berkeley_db_so_code_58", 4, berkeley_db_so_code_58 },
    { "berkeley_db_so_code_59", 8, berkeley_db_so_code_59 },
    { "berkeley_db_so_code_60", 4, berkeley_db_so_code_60 },
    { "berkeley_db_so_code_61", 4, berkeley_db_so_code_61 }
  };

int
decl_berkeley_db_so_d4e0cda5951aa171 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_berkeley_db_so_d4e0cda5951aa171);
  return (0);
}

DECLARE_COMPILED_CODE ("berkeley-db.so", 186, decl_berkeley_db_so_d4e0cda5951aa171, berkeley_db_so_d4e0cda5951aa171)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_berkeley_db_so_data_d4e0cda5951aa171 [8869] =
  "\x87\x05\x76\x95\x11\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\xb9\x22"
  "\x29\x21\x9d\x2b\xba\x1d\xb0\x82\x88\xc3\xbb\x22\x29\x21\x9d\x2b"
  "\xbc\x1d\xb0\x83\x88\xc4\xbd\x22\x29\x21\x9d\x2b\xbe\x1d\xb0\x84"
  "\x88\xc2\xbf\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x85\x88\xc2\x1c\x22"
  "\x29\x21\x9d\x2b\x1c\x1d\xb0\x86\x88\xc2\x1c\x22\x29\x21\x9d\x2b"
  "\x1c\x1d\xb0\x02\x88\xc2\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02"
  "\x88\xc6\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x22"
  "\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x22\x29\x21\x9d\x2b"
  "\x1c\x1d\xb0\x02\x88\xc2\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02"
  "\x88\xc4\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc4\x1c\x22"
  "\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc5\x1c\x22\x29\x21\x9d\x2b"
  "\x1c\x1d\xb0\x02\x88\xc2\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02"
  "\x88\xc2\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x22\x29"
  "\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\xc2\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2"
  "\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc7\x1c\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x02\x88\xc5\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\xc1\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c"
  "\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\xc4\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c"
  "\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x02\x88\xc0\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\xc0\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d"
  "\x0d\x0d\x0d\x1c\x80\x08\x8a\x08\x89\x0d\x1c\x1b\x0d\x08\xc1\x1c"
  "\x1d\x0d\x0d\x0d\x08\x8a\xc1\x1c\x28\x0d\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x1b\x0c\x1b\x0c\x0d\x1c\x0c\x1b\x28\x0d\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x07"
  "\xb3\x0c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x25\x1b"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x24\x28\x0d\x28\x0d\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\x0c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x0d\x1c\xb3\x1b\x0d\xbb\x24\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d"
  "\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x0d\x1c\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x0d\x1c\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1b\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x1d\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\xb9\x1d\xb0\x02\x88\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x1b\x24\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x80\x0d\x1c\x1b"
  "\x1b\x0c\x0d\x1c\x0d\x1c\x24\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x1b\x1b\x24\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x0d\x1c"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1d\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb5\x07\x0d\xbd\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x0d\x1c\x1b\x1b"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1d\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1b\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb7\x1d\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0"
  "\x02\x88\x1b\x1d\x0d\x1c\x0d\x1c\x24\x28\x0d\x1c\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x0d\x1c\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x0d\x1c\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x0d\x1c\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1d\x0d\x1c\x1b\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x0d\x1c\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1d\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x17\xb8\x88\xb0\x1b\x2a\x0d\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d"
  "\xb7\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x0d\x1b\x2a\x1b\x0d"
  "\x1b\x0d\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\xb1\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1c"
  "\x1b\x1b\x1b\x1b\x0d\x1c\x1b\x0d\x1c\x1b\x1b\x1b\x1b\x0d\x1c\x0d"
  "\x1c\x1b\x08\x89\x1b\x1b\x1b\xb3\x0d\x1c\x1b\x08\x88\x0d\x1c\xc2"
  "\x02\x02\x0d\x1b\x1b\x1b\x08\x89\x1b\x2a\x1b\x2a\x0d\x0d\x02\x0d"
  "\x86\x0d\x85\x0d\x0d\x83\x0d\x0d\x0d\x80\x0d\x04\x0d\x04\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d"
  "\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x0d\x0d\x81\x0d"
  "\x04\x0d\x04\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d"
  "\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x84\x0d\x82\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b"
  "\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\xb5"
  "\xb6\x2a\x1b\xb4\x2a\xc3\x1b\xb2\x2a\x28\x0d\x26\x0d\x0d\x1b\x1b"
  "\x1b\x1b\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
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
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5a\x2f\x55\x73\x65\x72"
  "\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73"
  "\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69"
  "\x6d\x65\x2f\x2e\x2f\x62\x65\x72\x6b\x65\x6c\x65\x79\x2d\x64\x62"
  "\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0d\x64\x62\x34\x3a\x64"
  "\x62\x2d\x63\x6c\x6f\x73\x65\xbb\x01\x04\x84\x06\x03\x02\x0e\x64"
  "\x62\x34\x3a\x64\x62\x2d\x63\x72\x65\x61\x74\x65\xbc\x01\x04\x85"
  "\x08\x03\x02\x0b\x64\x62\x34\x3a\x64\x62\x2d\x64\x65\x6c\xbd\x01"
  "\x04\x86\x0a\x03\x02\x11\x64\x62\x34\x3a\x64\x62\x2d\x65\x6e\x76"
  "\x2d\x63\x6c\x6f\x73\x65\xbe\x01\x04\x84\x06\x03\x09\x02\x12\x64"
  "\x62\x34\x3a\x64\x62\x2d\x65\x6e\x76\x2d\x63\x72\x65\x61\x74\x65"
  "\x0a\xbf\x01\x04\x84\x06\x03\x0b\x02\x14\x64\x62\x34\x3a\x64\x62"
  "\x2d\x65\x6e\x76\x2d\x67\x65\x74\x2d\x68\x6f\x6d\x65\x0c\xc0\x01"
  "\x04\x84\x06\x03\x0d\x02\x08\x1a\x64\x62\x34\x3a\x64\x62\x2d\x65"
  "\x6e\x76\x2d\x67\x65\x74\x2d\x6f\x70\x65\x6e\x2d\x66\x6c\x61\x67"
  "\x73\x0e\xc1\x01\x04\x84\x06\x03\x0f\x02\x09\x14\x64\x62\x34\x3a"
  "\x64\x62\x2d\x65\x6e\x76\x2d\x6c\x6f\x63\x6b\x2d\x67\x65\x74\x10"
  "\xc2\x01\x04\x88\x0e\x03\x11\x02\x0a\x13\x64\x62\x34\x3a\x64\x62"
  "\x2d\x65\x6e\x76\x2d\x6c\x6f\x63\x6b\x2d\x69\x64\x12\xc3\x01\x04"
  "\x84\x06\x03\x13\x02\x0b\x18\x64\x62\x34\x3a\x64\x62\x2d\x65\x6e"
  "\x76\x2d\x6c\x6f\x63\x6b\x2d\x69\x64\x2d\x66\x72\x65\x65\x14\xc4"
  "\x01\x04\x84\x06\x03\x15\x02\x0c\x14\x64\x62\x34\x3a\x64\x62\x2d"
  "\x65\x6e\x76\x2d\x6c\x6f\x63\x6b\x2d\x70\x75\x74\x16\xc5\x01\x04"
  "\x84\x06\x03\x17\x02\x0d\x10\x64\x62\x34\x3a\x64\x62\x2d\x65\x6e"
  "\x76\x2d\x6f\x70\x65\x6e\x18\xc6\x01\x04\x86\x0a\x03\x19\x02\x0e"
  "\x15\x64\x62\x34\x3a\x64\x62\x2d\x65\x6e\x76\x2d\x74\x78\x6e\x2d"
  "\x62\x65\x67\x69\x6e\x1a\xc7\x01\x04\x86\x0a\x03\x1b\x02\x0f\x0b"
  "\x64\x62\x34\x3a\x64\x62\x2d\x67\x65\x74\x1c\xc8\x01\x04\x87\x0c"
  "\x03\x1d\x02\x10\x12\x64\x62\x34\x3a\x64\x62\x2d\x67\x65\x74\x2d"
  "\x64\x62\x6e\x61\x6d\x65\x1e\xc9\x01\x04\x84\x06\x03\x1f\x02\x11"
  "\x0f\x64\x62\x34\x3a\x64\x62\x2d\x67\x65\x74\x2d\x65\x6e\x76\xca"
  "\x01\x04\x84\x06\x03\x20\x02\x12\x16\x64\x62\x34\x3a\x64\x62\x2d"
  "\x67\x65\x74\x2d\x6f\x70\x65\x6e\x2d\x66\x6c\x61\x67\x73\x21\xcb"
  "\x01\x04\x84\x06\x03\x22\x02\x13\x14\x64\x62\x34\x3a\x64\x62\x2d"
  "\x67\x65\x74\x2d\x70\x61\x67\x65\x73\x69\x7a\x65\xcc\x01\x04\x84"
  "\x06\x03\x23\x02\x14\x19\x64\x62\x34\x3a\x64\x62\x2d\x67\x65\x74"
  "\x2d\x74\x72\x61\x6e\x73\x61\x63\x74\x69\x6f\x6e\x61\x6c\x24\xcd"
  "\x01\x04\x84\x06\x03\x25\x02\x15\x10\x64\x62\x34\x3a\x64\x62\x2d"
  "\x67\x65\x74\x2d\x74\x79\x70\x65\xce\x01\x04\x84\x06\x03\x26\x02"
  "\x16\x0c\x64\x62\x34\x3a\x64\x62\x2d\x6f\x70\x65\x6e\x27\xcf\x01"
  "\x04\x89\x10\x03\x28\x02\x17\x0b\x64\x62\x34\x3a\x64\x62\x2d\x70"
  "\x75\x74\x29\xd0\x01\x04\x87\x0c\x03\x2a\x02\x18\x10\x64\x62\x34"
  "\x3a\x64\x62\x2d\x73\x74\x72\x65\x72\x72\x6f\x72\x2b\xd1\x01\x04"
  "\x83\x04\x03\x2c\x02\x19\x11\x64\x62\x34\x3a\x64\x62\x2d\x74\x78"
  "\x6e\x2d\x61\x62\x6f\x72\x74\x2d\xd2\x01\x04\x83\x04\x03\x2e\x02"
  "\x1a\x12\x64\x62\x34\x3a\x64\x62\x2d\x74\x78\x6e\x2d\x63\x6f\x6d"
  "\x6d\x69\x74\x2f\xd3\x01\x04\x84\x06\x03\x30\x02\x1b\x0d\x64\x62"
  "\x34\x3a\x64\x62\x74\x2d\x73\x69\x7a\x65\x31\xd4\x01\x04\x83\x04"
  "\x03\x32\x02\x1c\x0d\x64\x62\x34\x3a\x69\x6e\x69\x74\x2d\x64\x62"
  "\x74\x33\xd5\x01\x04\x86\x0a\x03\x34\x02\x1d\x0d\x64\x62\x34\x3a"
  "\x6e\x61\x6d\x65\x2d\x3e\x72\x63\x35\xd6\x01\x04\x83\x04\x03\x36"
  "\x02\x1e\x0d\x64\x62\x34\x3a\x72\x63\x2d\x3e\x6e\x61\x6d\x65\x37"
  "\xd7\x01\x04\x83\x04\x03\x38\x02\x1f\x13\x64\x62\x34\x3a\x73\x69"
  "\x7a\x65\x6f\x66\x2d\x64\x62\x2d\x6c\x6f\x63\x6b\x39\xd8\x01\x04"
  "\x82\x02\x03\x3a\x02\x20\x0f\x64\x62\x34\x3a\x73\x69\x7a\x65\x6f"
  "\x66\x2d\x64\x62\x74\x3b\xd9\x01\x04\x82\x02\x03\x3c\x02\x21\x04"
  "\x6c\x65\x74\x03\x69\x66\x04\x6e\x6f\x74\x02\x3d\x03\x72\x63\x3d"
  "\x0a\x62\x64\x62\x2d\x65\x72\x72\x6f\x72\x3e\x3d\x06\x71\x75\x6f"
  "\x74\x65\x04\x63\x61\x72\x3f\x02\x0b\x69\x64\x65\x6e\x74\x69\x66"
  "\x69\x65\x72\x02\x2a\x0b\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x04\x63\x64\x72\x40\x04\x0e\x73\x79\x6e\x74\x61\x78\x2d\x6d\x61"
  "\x74\x63\x68\x3f\x04\x04\x6d\x61\x70\x04\x0d\x63\x6c\x6f\x73\x65"
  "\x2d\x73\x79\x6e\x74\x61\x78\x04\xe5\x01\x1a\x81\x89\x02\xe4\x01"
  "\x18\x81\x85\x02\xe3\x01\x16\x81\x8d\x02\xe2\x01\x14\x81\x8d\x02"
  "\xe1\x01\x12\x81\x87\x02\xe0\x01\x10\x81\x89\x02\xdf\x01\x0e\x81"
  "\x89\x02\xde\x01\x0c\x81\x85\x02\xdd\x01\x0a\x81\x85\x02\xdc\x01"
  "\x08\x81\x85\x02\xdb\x01\x06\x81\x87\x02\xda\x01\x04\x84\x06\x19"
  "\x2e\x41\x02\x22\x03\x29\x2e\x37\x03\x20\x28\x2b\x03\x3a\x20\x0a"
  "\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x37\x20\x42\x65\x72\x6b\x65"
  "\x6c\x65\x79\x20\x44\x42\x20\x65\x72\x72\x6f\x72\x20\x69\x6e\x20"
  "\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x20\x3d\x04\x11\x61\x63\x63"
  "\x65\x73\x73\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x04\x0d\x77"
  "\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x04\x06\x77\x72\x69"
  "\x74\x65\x04\xf0\x01\x18\x81\x8b\x02\xef\x01\x16\x81\x87\x02\xee"
  "\x01\x14\x81\x87\x02\xed\x01\x12\x81\x8b\x02\xec\x01\x10\x81\x87"
  "\x02\xeb\x01\x0e\x81\x87\x02\xea\x01\x0c\x81\x8b\x02\xe9\x01\x0a"
  "\x81\x87\x02\xe8\x01\x08\x81\x87\x02\xe7\x01\x06\x81\x85\x02\xe6"
  "\x01\x04\x84\x06\x17\x29\x2b\x02\x23\x39\x3b\x06\x70\x72\x64\x62"
  "\x34\x0f\x64\x62\x2d\x6c\x6f\x63\x6b\x2d\x6c\x65\x6e\x67\x74\x68"
  "\x3b\x17\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x2d\x69\x6e\x69\x74"
  "\x69\x61\x6c\x69\x7a\x65\x64\x3f\x39\x04\x64\x62\x73\x42\x05\x65"
  "\x6e\x76\x73\x43\x05\x74\x78\x6e\x73\x44\x0b\x64\x62\x74\x2d\x6c"
  "\x65\x6e\x67\x74\x68\x45\x07\x39\x10\x73\x65\x74\x2d\x62\x64\x62"
  "\x2d\x68\x61\x6e\x64\x6c\x65\x21\x46\x0b\x62\x64\x62\x2d\x68\x61"
  "\x6e\x64\x6c\x65\x47\x05\x62\x64\x62\x3f\x48\x0d\x64\x62\x34\x3a"
  "\x64\x62\x2d\x63\x6c\x6f\x73\x65\x49\x14\x73\x65\x74\x2d\x62\x64"
  "\x62\x2d\x65\x6e\x76\x2d\x68\x61\x6e\x64\x6c\x65\x21\x4a\x0f\x62"
  "\x64\x62\x2d\x65\x6e\x76\x2d\x68\x61\x6e\x64\x6c\x65\x4b\x09\x62"
  "\x64\x62\x2d\x65\x6e\x76\x3f\x4c\x11\x64\x62\x34\x3a\x64\x62\x2d"
  "\x65\x6e\x76\x2d\x63\x6c\x6f\x73\x65\x4d\x14\x73\x65\x74\x2d\x62"
  "\x64\x62\x2d\x74\x78\x6e\x2d\x68\x61\x6e\x64\x6c\x65\x21\x4e\x0f"
  "\x62\x64\x62\x2d\x74\x78\x6e\x2d\x68\x61\x6e\x64\x6c\x65\x4f\x09"
  "\x62\x64\x62\x2d\x74\x78\x6e\x3f\x50\x11\x64\x62\x34\x3a\x64\x62"
  "\x2d\x74\x78\x6e\x2d\x61\x62\x6f\x72\x74\x51\x0e\x04\x19\x6c\x6f"
  "\x61\x64\x2d\x6c\x69\x62\x72\x61\x72\x79\x2d\x6f\x62\x6a\x65\x63"
  "\x74\x2d\x66\x69\x6c\x65\x03\x21\x69\x6d\x70\x6c\x65\x6d\x65\x6e"
  "\x74\x65\x64\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x3f\x06\x12\x6d\x61\x6b\x65\x2d\x67"
  "\x63\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\x72\x52\x04\x8b\x02\x38"
  "\x81\x81\x02\x8a\x02\x36\x81\x81\x02\x89\x02\x34\x81\x81\x02\x88"
  "\x02\x32\x81\x81\x02\x87\x02\x30\x81\x89\x02\x86\x02\x2e\x81\x87"
  "\x02\x85\x02\x2c\x81\x85\x02\x84\x02\x2a\x81\x83\x02\x83\x02\x28"
  "\x81\x81\x02\x82\x02\x26\x81\x81\x02\x81\x02\x24\x81\x89\x02\x80"
  "\x02\x22\x81\x87\x02\xff\x01\x20\x81\x85\x02\xfe\x01\x1e\x81\x83"
  "\x02\xfd\x01\x1c\x81\x81\x02\xfc\x01\x1a\x81\x81\x02\xfb\x01\x18"
  "\x81\x89\x02\xfa\x01\x16\x81\x87\x02\xf9\x01\x14\x81\x85\x02\xf8"
  "\x01\x12\x81\x83\x02\xf7\x01\x10\x81\x81\x02\xf6\x01\x0e\x81\x81"
  "\x02\xf5\x01\x0c\x81\x81\x02\xf4\x01\x0a\x81\x81\x02\xf3\x01\x08"
  "\x81\x81\x02\xf2\x01\x06\x81\x81\x02\xf1\x01\x04\x82\x02\x37\x5b"
  "\x53\x02\x24\x02\x3a\x54\x68\x69\x73\x20\x53\x63\x68\x65\x6d\x65"
  "\x20\x73\x79\x73\x74\x65\x6d\x20\x77\x61\x73\x20\x62\x75\x69\x6c"
  "\x74\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x42\x65\x72\x6b\x65\x6c"
  "\x65\x79\x20\x44\x42\x20\x73\x75\x70\x70\x6f\x72\x74\x2e\x02\x0f"
  "\x62\x64\x62\x2d\x61\x76\x61\x69\x6c\x61\x62\x6c\x65\x3f\x54\x03"
  "\x06\x65\x72\x72\x6f\x72\x03\x8d\x02\x06\x81\x81\x02\x8c\x02\x04"
  "\x82\x02\x05\x0f\x55\x02\x25\x02\x0e\x64\x62\x34\x3a\x64\x62\x2d"
  "\x63\x72\x65\x61\x74\x65\x56\x42\x09\x6d\x61\x6b\x65\x2d\x62\x64"
  "\x62\x03\x02\x18\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x62\x64"
  "\x62\x2d\x61\x76\x61\x69\x6c\x61\x62\x6c\x65\x57\x05\x19\x6d\x61"
  "\x6b\x65\x2d\x67\x63\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\x64\x2d"
  "\x6f\x62\x6a\x65\x63\x74\x58\x03\x4b\x04\x3e\x05\x95\x02\x12\x81"
  "\x83\x02\x94\x02\x10\x81\x85\x02\x93\x02\x0e\x81\x85\x02\x92\x02"
  "\x0c\x81\x8b\x02\x91\x02\x0a\x81\x87\x02\x90\x02\x08\x81\x85\x02"
  "\x8f\x02\x06\x81\x85\x02\x8e\x02\x04\x84\x06\x11\x23\x59\x02\x26"
  "\x27\x02\x0c\x64\x62\x34\x3a\x64\x62\x2d\x6f\x70\x65\x6e\x27\x03"
  "\x47\x03\x4f\x03\x10\x6d\x65\x72\x67\x65\x2d\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x73\x5a\x04\x3e\x03\x0d\x2d\x3e\x6e\x61\x6d\x65\x73"
  "\x74\x72\x69\x6e\x67\x5b\x06\x9c\x02\x10\x81\x9d\x02\x9b\x02\x0e"
  "\x81\x9b\x02\x9a\x02\x0c\x81\x83\x02\x99\x02\x0a\x81\x8f\x02\x98"
  "\x02\x08\x89\x10\x97\x02\x06\x81\x99\x02\x96\x02\x04\x81\x9b\x02"
  "\x0f\x20\x5c\x02\x27\x1e\x3f\x40\x12\x64\x62\x34\x3a\x64\x62\x2d"
  "\x67\x65\x74\x2d\x64\x62\x6e\x61\x6d\x65\x40\x03\x47\x04\x3e\x03"
  "\xa4\x02\x12\x81\x85\x02\xa3\x02\x10\x81\x8b\x02\xa2\x02\x0e\x81"
  "\x85\x02\xa1\x02\x0c\x81\x85\x02\xa0\x02\x0a\x81\x85\x02\x9f\x02"
  "\x08\x81\x83\x02\x9e\x02\x06\x81\x87\x02\x9d\x02\x04\x83\x04\x11"
  "\x1d\x1e\x02\x28\x21\x3f\x16\x64\x62\x34\x3a\x64\x62\x2d\x67\x65"
  "\x74\x2d\x6f\x70\x65\x6e\x2d\x66\x6c\x61\x67\x73\x21\x03\x47\x04"
  "\x3e\x03\xa9\x02\x0c\x81\x8b\x02\xa8\x02\x0a\x81\x85\x02\xa7\x02"
  "\x08\x81\x83\x02\xa6\x02\x06\x81\x87\x02\xa5\x02\x04\x83\x04\x0b"
  "\x16\x5d\x02\x29\x24\x3f\x19\x64\x62\x34\x3a\x64\x62\x2d\x67\x65"
  "\x74\x2d\x74\x72\x61\x6e\x73\x61\x63\x74\x69\x6f\x6e\x61\x6c\x24"
  "\x03\x47\x04\x3e\x03\xae\x02\x0c\x81\x8b\x02\xad\x02\x0a\x81\x85"
  "\x02\xac\x02\x08\x81\x83\x02\xab\x02\x06\x81\x87\x02\xaa\x02\x04"
  "\x83\x04\x0b\x16\x5e\x02\x2a\x02\x49\x03\x47\x04\x3e\x03\xb2\x02"
  "\x0a\x81\x89\x02\xb1\x02\x08\x81\x83\x02\xb0\x02\x06\x81\x85\x02"
  "\xaf\x02\x04\x84\x06\x09\x14\x02\x2b\x33\x02\x09\x6d\x61\x6b\x65"
  "\x2d\x64\x62\x74\x5f\x02\xb5\x02\x08\x81\x85\x02\xb4\x02\x06\x81"
  "\x83\x02\xb3\x02\x04\x83\x04\x07\x0e\x60\x02\x2c\x33\x02\x5f\x02"
  "\xb8\x02\x08\x81\x89\x02\xb7\x02\x06\x81\x87\x02\xb6\x02\x04\x85"
  "\x08\x07\x0e\x61\x02\x2d\x10\x73\x74\x72\x69\x6e\x67\x2d\x61\x6c"
  "\x6c\x6f\x63\x61\x74\x65\x62\x45\x02\xba\x02\x06\x81\x81\x02\xb9"
  "\x02\x04\x82\x02\x05\x0b\x63\x02\x2e\x31\x62\x0b\x64\x62\x34\x3a"
  "\x64\x62\x2d\x67\x65\x74\x31\x1c\x33\x01\x0f\x72\x63\x3a\x64\x62"
  "\x5f\x6e\x6f\x74\x66\x6f\x75\x6e\x64\x33\x0a\x72\x63\x3a\x65\x6e"
  "\x6f\x6d\x65\x6d\x64\x03\x02\x5f\x03\x0c\x73\x74\x72\x69\x6e\x67"
  "\x2d\x3e\x64\x62\x74\x65\x03\x47\x03\x4f\x04\x3e\x06\xcc\x02\x26"
  "\x81\x93\x02\xcb\x02\x24\x81\x83\x02\xca\x02\x22\x81\x95\x02\xc9"
  "\x02\x20\x81\x93\x02\xc8\x02\x1e\x81\x95\x02\xc7\x02\x1c\x81\x93"
  "\x02\xc6\x02\x1a\x81\x93\x02\xc5\x02\x18\x81\x93\x02\xc4\x02\x16"
  "\x81\x93\x02\xc3\x02\x14\x81\x93\x02\xc2\x02\x12\x81\x93\x02\xc1"
  "\x02\x10\x81\x91\x02\xc0\x02\x0e\x81\x91\x02\xbf\x02\x0c\x81\x8f"
  "\x02\xbe\x02\x0a\x81\x8b\x02\xbd\x02\x08\x81\x8d\x02\xbc\x02\x06"
  "\x81\x89\x02\xbb\x02\x04\x86\x0a\x25\x3d\x66\x02\x2f\x1c\x31\x62"
  "\x33\x02\x05\x14\x73\x74\x72\x69\x6e\x67\x2d\x3e\x64\x62\x74\x2d"
  "\x70\x61\x72\x74\x69\x61\x6c\x1c\x04\x3e\x03\x65\x03\x47\x03\x4f"
  "\x06\xd6\x02\x16\x81\x99\x02\xd5\x02\x14\x81\x95\x02\xd4\x02\x12"
  "\x81\x97\x02\xd3\x02\x10\x81\x93\x02\xd2\x02\x0e\x81\x91\x02\xd1"
  "\x02\x0c\x81\x91\x02\xd0\x02\x0a\x81\x91\x02\xcf\x02\x08\x81\x8f"
  "\x02\xce\x02\x06\x81\x8d\x02\xcd\x02\x04\x88\x0e\x15\x28\x67\x02"
  "\x30\x29\x02\x0b\x64\x62\x34\x3a\x64\x62\x2d\x70\x75\x74\x68\x03"
  "\x65\x04\x3e\x03\x47\x03\x4f\x05\xdd\x02\x10\x81\x95\x02\xdc\x02"
  "\x0e\x81\x91\x02\xdb\x02\x0c\x81\x93\x02\xda\x02\x0a\x81\x8f\x02"
  "\xd9\x02\x08\x81\x83\x02\xd8\x02\x06\x81\x8b\x02\xd7\x02\x04\x87"
  "\x0c\x0f\x1e\x69\x02\x31\x29\x02\x68\x05\x1c\x04\x3e\x03\x65\x03"
  "\x47\x03\x4f\x06\xe4\x02\x10\x81\x99\x02\xe3\x02\x0e\x81\x95\x02"
  "\xe2\x02\x0c\x81\x97\x02\xe1\x02\x0a\x81\x93\x02\xe0\x02\x08\x81"
  "\x83\x02\xdf\x02\x06\x81\x8f\x02\xde\x02\x04\x89\x10\x0f\x20\x29"
  "\x02\x32\x0b\x64\x62\x34\x3a\x64\x62\x2d\x64\x65\x6c\x33\x02\x03"
  "\x65\x04\x3e\x03\x47\x03\x4f\x05\xec\x02\x12\x81\x91\x02\xeb\x02"
  "\x10\x81\x8d\x02\xea\x02\x0e\x81\x8f\x02\xe9\x02\x0c\x81\x83\x02"
  "\xe8\x02\x0a\x81\x83\x02\xe7\x02\x08\x81\x83\x02\xe6\x02\x06\x81"
  "\x89\x02\xe5\x02\x04\x86\x0a\x11\x22\x6a\x02\x33\x14\x02\x12\x64"
  "\x62\x34\x3a\x64\x62\x2d\x65\x6e\x76\x2d\x63\x72\x65\x61\x74\x65"
  "\x6b\x0a\x43\x13\x73\x65\x74\x2d\x62\x64\x62\x2d\x69\x64\x2d\x68"
  "\x61\x6e\x64\x6c\x65\x21\x0a\x0e\x62\x64\x62\x2d\x69\x64\x2d\x68"
  "\x61\x6e\x64\x6c\x65\x6c\x08\x62\x64\x62\x2d\x69\x64\x3f\x6d\x05"
  "\x02\x57\x05\x58\x06\x52\x04\x3e\x04\x0d\x6d\x61\x6b\x65\x2d\x62"
  "\x64\x62\x2d\x65\x6e\x76\x52\x06\xf8\x02\x1a\x81\x85\x02\xf7\x02"
  "\x18\x81\x85\x02\xf6\x02\x16\x81\x83\x02\xf5\x02\x14\x81\x85\x02"
  "\xf4\x02\x12\x81\x8b\x02\xf3\x02\x10\x81\x89\x02\xf2\x02\x0e\x81"
  "\x87\x02\xf1\x02\x0c\x83\x04\xf0\x02\x0a\x81\x85\x02\xef\x02\x08"
  "\x81\x85\x02\xee\x02\x06\x81\x83\x02\xed\x02\x04\x83\x04\x19\x30"
  "\x6e\x02\x34\x18\x02\x10\x64\x62\x34\x3a\x64\x62\x2d\x65\x6e\x76"
  "\x2d\x6f\x70\x65\x6e\x18\x03\x5a\x04\x3e\x03\x4b\x03\x5b\x05\xfe"
  "\x02\x0e\x81\x91\x02\xfd\x02\x0c\x81\x91\x02\xfc\x02\x0a\x81\x8f"
  "\x02\xfb\x02\x08\x81\x83\x02\xfa\x02\x06\x81\x89\x02\xf9\x02\x04"
  "\x86\x0a\x0d\x1c\x5b\x02\x35\x0c\x3f\x14\x64\x62\x34\x3a\x64\x62"
  "\x2d\x65\x6e\x76\x2d\x67\x65\x74\x2d\x68\x6f\x6d\x65\x5a\x03\x4b"
  "\x04\x3e\x03\x83\x03\x0c\x81\x8b\x02\x82\x03\x0a\x81\x85\x02\x81"
  "\x03\x08\x81\x83\x02\x80\x03\x06\x81\x87\x02\xff\x02\x04\x83\x04"
  "\x0b\x16\x0c\x02\x36\x0e\x3f\x1a\x64\x62\x34\x3a\x64\x62\x2d\x65"
  "\x6e\x76\x2d\x67\x65\x74\x2d\x6f\x70\x65\x6e\x2d\x66\x6c\x61\x67"
  "\x73\x3f\x03\x4b\x04\x3e\x03\x88\x03\x0c\x81\x8b\x02\x87\x03\x0a"
  "\x81\x85\x02\x86\x03\x08\x81\x83\x02\x85\x03\x06\x81\x87\x02\x84"
  "\x03\x04\x83\x04\x0b\x16\x0e\x02\x37\x02\x4d\x03\x4b\x04\x3e\x03"
  "\x8c\x03\x0a\x81\x89\x02\x8b\x03\x08\x81\x83\x02\x8a\x03\x06\x81"
  "\x85\x02\x89\x03\x04\x84\x06\x09\x14\x02\x38\x12\x02\x13\x64\x62"
  "\x34\x3a\x64\x62\x2d\x65\x6e\x76\x2d\x6c\x6f\x63\x6b\x2d\x69\x64"
  "\x12\x0c\x6d\x61\x6b\x65\x2d\x62\x64\x62\x2d\x69\x64\x6f\x02\x03"
  "\x0c\x62\x64\x62\x2d\x65\x6e\x76\x2d\x69\x64\x73\x70\x03\x4b\x05"
  "\x58\x04\x3e\x05\x93\x03\x10\x81\x89\x02\x92\x03\x0e\x81\x83\x02"
  "\x91\x03\x0c\x81\x85\x02\x90\x03\x0a\x81\x87\x02\x8f\x03\x08\x81"
  "\x85\x02\x8e\x03\x06\x81\x85\x02\x8d\x03\x04\x83\x04\x0f\x20\x71"
  "\x02\x39\x14\x02\x18\x64\x62\x34\x3a\x64\x62\x2d\x65\x6e\x76\x2d"
  "\x6c\x6f\x63\x6b\x2d\x69\x64\x2d\x66\x72\x65\x65\x14\x03\x4b\x04"
  "\x3e\x03\x97\x03\x0a\x81\x89\x02\x96\x03\x08\x81\x83\x02\x95\x03"
  "\x06\x81\x85\x02\x94\x03\x04\x84\x06\x09\x14\x72\x02\x3a\x10\x14"
  "\x64\x62\x34\x3a\x64\x62\x2d\x65\x6e\x76\x2d\x6c\x6f\x63\x6b\x2d"
  "\x67\x65\x74\x10\x62\x3b\x02\x03\x65\x04\x3e\x03\x4b\x04\x9f\x03"
  "\x12\x81\x9b\x02\x9e\x03\x10\x81\x95\x02\x9d\x03\x0e\x81\x8d\x02"
  "\x9c\x03\x0c\x81\x83\x02\x9b\x03\x0a\x81\x8f\x02\x9a\x03\x08\x81"
  "\x8b\x02\x99\x03\x06\x81\x8d\x02\x98\x03\x04\x87\x0c\x11\x20\x62"
  "\x02\x3b\x16\x02\x14\x64\x62\x34\x3a\x64\x62\x2d\x65\x6e\x76\x2d"
  "\x6c\x6f\x63\x6b\x2d\x70\x75\x74\x16\x03\x4b\x04\x3e\x03\xa3\x03"
  "\x0a\x81\x89\x02\xa2\x03\x08\x81\x83\x02\xa1\x03\x06\x81\x85\x02"
  "\xa0\x03\x04\x84\x06\x09\x14\x73\x02\x3c\x1a\x02\x15\x64\x62\x34"
  "\x3a\x64\x62\x2d\x65\x6e\x76\x2d\x74\x78\x6e\x2d\x62\x65\x67\x69"
  "\x6e\x1a\x44\x0d\x6d\x61\x6b\x65\x2d\x62\x64\x62\x2d\x74\x78\x6e"
  "\x74\x03\x05\x58\x03\x4b\x03\x4f\x04\x3e\x05\xab\x03\x12\x81\x8d"
  "\x02\xaa\x03\x10\x81\x83\x02\xa9\x03\x0e\x81\x85\x02\xa8\x03\x0c"
  "\x81\x85\x02\xa7\x03\x0a\x81\x8b\x02\xa6\x03\x08\x81\x87\x02\xa5"
  "\x03\x06\x81\x87\x02\xa4\x03\x04\x85\x08\x11\x23\x58\x02\x3d\x2f"
  "\x02\x12\x64\x62\x34\x3a\x64\x62\x2d\x74\x78\x6e\x2d\x63\x6f\x6d"
  "\x6d\x69\x74\x2f\x03\x4f\x04\x3e\x03\xaf\x03\x0a\x81\x89\x02\xae"
  "\x03\x08\x81\x83\x02\xad\x03\x06\x81\x85\x02\xac\x03\x04\x84\x06"
  "\x09\x14\x75\x02\x3e\x2d\x02\x51\x03\x4f\x04\x3e\x03\xb3\x03\x0a"
  "\x81\x85\x02\xb2\x03\x08\x81\x83\x02\xb1\x03\x06\x81\x83\x02\xb0"
  "\x03\x04\x83\x04\x09\x14\x2d\x3e\x2d\x04\x0e\x62\x64\x62\x2d\x74"
  "\x78\x6e\x2d\x61\x62\x6f\x72\x74\x0f\x62\x64\x62\x2d\x74\x78\x6e"
  "\x2d\x63\x6f\x6d\x6d\x69\x74\x75\x04\x12\x62\x64\x62\x2d\x65\x6e"
  "\x76\x2d\x74\x78\x6e\x2d\x62\x65\x67\x69\x6e\x58\x04\x11\x62\x64"
  "\x62\x2d\x65\x6e\x76\x2d\x6c\x6f\x63\x6b\x2d\x70\x75\x74\x73\x04"
  "\x11\x62\x64\x62\x2d\x65\x6e\x76\x2d\x6c\x6f\x63\x6b\x2d\x67\x65"
  "\x74\x62\x04\x15\x62\x64\x62\x2d\x65\x6e\x76\x2d\x6c\x6f\x63\x6b"
  "\x2d\x69\x64\x2d\x66\x72\x65\x65\x72\x04\x10\x62\x64\x62\x2d\x65"
  "\x6e\x76\x2d\x6c\x6f\x63\x6b\x2d\x69\x64\x71\x04\x0e\x63\x6c\x6f"
  "\x73\x65\x2d\x62\x64\x62\x2d\x65\x6e\x76\x04\x13\x62\x64\x62\x2d"
  "\x65\x6e\x76\x2d\x6f\x70\x65\x6e\x2d\x66\x6c\x61\x67\x73\x0e\x04"
  "\x0d\x62\x64\x62\x2d\x65\x6e\x76\x2d\x68\x6f\x6d\x65\x0c\x04\x0d"
  "\x6f\x70\x65\x6e\x2d\x62\x64\x62\x2d\x65\x6e\x76\x5b\x04\x0f\x63"
  "\x72\x65\x61\x74\x65\x2d\x62\x64\x62\x2d\x65\x6e\x76\x6e\x04\x0b"
  "\x62\x64\x62\x2d\x64\x65\x6c\x65\x74\x65\x6a\x04\x10\x62\x64\x62"
  "\x2d\x70\x75\x74\x2d\x70\x61\x72\x74\x69\x61\x6c\x29\x04\x08\x62"
  "\x64\x62\x2d\x70\x75\x74\x69\x04\x10\x62\x64\x62\x2d\x67\x65\x74"
  "\x2d\x70\x61\x72\x74\x69\x61\x6c\x67\x04\x64\x08\x62\x64\x62\x2d"
  "\x67\x65\x74\x66\x04\x33\x07\x65\x6e\x6f\x6d\x65\x6d\x35\x0c\x64"
  "\x62\x5f\x6e\x6f\x74\x66\x6f\x75\x6e\x64\x5f\x63\x04\x1c\x61\x04"
  "\x65\x60\x04\x0a\x63\x6c\x6f\x73\x65\x2d\x62\x64\x62\x04\x13\x62"
  "\x64\x62\x2d\x74\x72\x61\x6e\x73\x61\x63\x74\x69\x6f\x6e\x61\x6c"
  "\x3f\x5e\x04\x0f\x62\x64\x62\x2d\x6f\x70\x65\x6e\x2d\x66\x6c\x61"
  "\x67\x73\x5d\x04\x0a\x62\x64\x62\x2d\x6e\x61\x6d\x65\x73\x1e\x04"
  "\x09\x6f\x70\x65\x6e\x2d\x62\x64\x62\x5c\x08\x0b\x63\x72\x65\x61"
  "\x74\x65\x2d\x62\x64\x62\x59\x04\x57\x55\x04\x54\x53\x04\x3b\x45"
  "\x44\x43\x42\x0a\x39\x6c\x6d\x6f\x4e\x09\x3c\x62\x64\x62\x2d\x69"
  "\x64\x3e\x75\x4f\x50\x74\x70\x0a\x3c\x62\x64\x62\x2d\x74\x78\x6e"
  "\x3e\x74\x4a\x04\x69\x64\x73\x73\x4b\x4c\x52\x46\x0a\x3c\x62\x64"
  "\x62\x2d\x65\x6e\x76\x3e\x72\x07\x68\x61\x6e\x64\x6c\x65\x71\x73"
  "\x47\x48\x71\x06\x3c\x62\x64\x62\x3e\x73\x71\x19\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x62\x64\x62\x2d\x65"
  "\x72\x72\x6f\x72\x71\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d"
  "\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70\x65\x33"
  "\x10\x06\x70\x63\x61\x6c\x6c\x3e\x3d\x37\x2b\x04\x41\x04\x0f\x64"
  "\x62\x5f\x6c\x6f\x63\x6b\x5f\x77\x77\x72\x69\x74\x65\x0e\x64\x62"
  "\x5f\x6c\x6f\x63\x6b\x5f\x64\x69\x72\x74\x79\x08\x0c\x64\x62\x5f"
  "\x6c\x6f\x63\x6b\x5f\x69\x77\x72\x0e\x64\x62\x5f\x6c\x6f\x63\x6b"
  "\x5f\x69\x72\x65\x61\x64\x0f\x64\x62\x5f\x6c\x6f\x63\x6b\x5f\x69"
  "\x77\x72\x69\x74\x65\x0d\x64\x62\x5f\x6c\x6f\x63\x6b\x5f\x77\x61"
  "\x69\x74\x0e\x64\x62\x5f\x6c\x6f\x63\x6b\x5f\x77\x72\x69\x74\x65"
  "\x0d\x64\x62\x5f\x6c\x6f\x63\x6b\x5f\x72\x65\x61\x64\x0b\x64\x62"
  "\x5f\x6c\x6f\x63\x6b\x5f\x6e\x67\x07\x64\x62\x5f\x72\x6d\x77\x09"
  "\x31\x30\x30\x30\x30\x30\x30\x30\x10\x64\x62\x5f\x6d\x75\x6c\x74"
  "\x69\x70\x6c\x65\x5f\x6b\x65\x79\x08\x38\x30\x30\x30\x30\x30\x30"
  "\x0c\x64\x62\x5f\x6d\x75\x6c\x74\x69\x70\x6c\x65\x0c\x64\x62\x5f"
  "\x74\x78\x6e\x5f\x73\x79\x6e\x63\x0e\x64\x62\x5f\x74\x78\x6e\x5f"
  "\x6e\x6f\x77\x61\x69\x74\x0d\x64\x62\x5f\x77\x72\x69\x74\x65\x6f"
  "\x70\x65\x6e\x0e\x64\x62\x5f\x72\x64\x77\x72\x6d\x61\x73\x74\x65"
  "\x72\x11\x64\x62\x5f\x66\x63\x6e\x74\x6c\x5f\x6c\x6f\x63\x6b\x69"
  "\x6e\x67\x08\x64\x62\x5f\x65\x78\x63\x6c\x0e\x64\x62\x5f\x73\x79"
  "\x73\x74\x65\x6d\x5f\x6d\x65\x6d\x81\x80\x80\x02\x11\x64\x62\x5f"
  "\x72\x65\x63\x6f\x76\x65\x72\x5f\x66\x61\x74\x61\x6c\x81\x80\x80"
  "\x01\x0b\x64\x62\x5f\x70\x72\x69\x76\x61\x74\x65\x81\x80\x40\x0c"
  "\x64\x62\x5f\x6c\x6f\x63\x6b\x64\x6f\x77\x6e\x81\x80\x20\x0b\x64"
  "\x62\x5f\x6a\x6f\x69\x6e\x65\x6e\x76\x81\x80\x10\x0c\x64\x62\x5f"
  "\x69\x6e\x69\x74\x5f\x74\x78\x6e\x81\x80\x08\x0c\x64\x62\x5f\x69"
  "\x6e\x69\x74\x5f\x72\x65\x70\x81\x80\x04\x0e\x64\x62\x5f\x69\x6e"
  "\x69\x74\x5f\x6d\x70\x6f\x6f\x6c\x81\x80\x02\x0c\x64\x62\x5f\x69"
  "\x6e\x69\x74\x5f\x6c\x6f\x67\x81\x80\x01\x0d\x64\x62\x5f\x69\x6e"
  "\x69\x74\x5f\x6c\x6f\x63\x6b\x81\x40\x0c\x64\x62\x5f\x69\x6e\x69"
  "\x74\x5f\x63\x64\x62\x81\x20\x0d\x64\x62\x5f\x78\x61\x5f\x63\x72"
  "\x65\x61\x74\x65\x0e\x64\x62\x5f\x72\x65\x70\x5f\x63\x72\x65\x61"
  "\x74\x65\x0d\x64\x62\x5f\x72\x70\x63\x63\x6c\x69\x65\x6e\x74\x12"
  "\x64\x62\x5f\x6e\x6f\x5f\x61\x75\x74\x6f\x5f\x63\x6f\x6d\x6d\x69"
  "\x74\x08\x34\x30\x30\x30\x30\x30\x30\x0e\x64\x62\x5f\x64\x69\x72"
  "\x74\x79\x5f\x72\x65\x61\x64\x08\x32\x30\x30\x30\x30\x30\x30\x0f"
  "\x64\x62\x5f\x61\x75\x74\x6f\x5f\x63\x6f\x6d\x6d\x69\x74\x81\x80"
  "\x80\x08\x14\x64\x62\x5f\x75\x73\x65\x5f\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x5f\x72\x6f\x6f\x74\x81\x10\x0f\x64\x62\x5f\x75\x73\x65\x5f"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x81\x08\x13\x64\x62\x5f\x74\x78\x6e"
  "\x5f\x6e\x6f\x74\x5f\x64\x75\x72\x61\x62\x6c\x65\x81\x04\x0e\x64"
  "\x62\x5f\x74\x78\x6e\x5f\x6e\x6f\x73\x79\x6e\x63\x81\x02\x0c\x64"
  "\x62\x5f\x74\x72\x75\x6e\x63\x61\x74\x65\x81\x01\x0a\x64\x62\x5f"
  "\x74\x68\x72\x65\x61\x64\x41\x0b\x64\x62\x5f\x72\x65\x63\x6f\x76"
  "\x65\x72\x21\x0a\x64\x62\x5f\x72\x64\x6f\x6e\x6c\x79\x11\x0a\x64"
  "\x62\x5f\x6e\x6f\x6d\x6d\x61\x70\x09\x09\x64\x62\x5f\x66\x6f\x72"
  "\x63\x65\x15\x64\x62\x5f\x63\x78\x78\x5f\x6e\x6f\x5f\x65\x78\x63"
  "\x65\x70\x74\x69\x6f\x6e\x73\x0f\x64\x62\x34\x3a\x73\x69\x7a\x65"
  "\x6f\x66\x2d\x64\x62\x74\x3c\x04\x13\x64\x62\x34\x3a\x73\x69\x7a"
  "\x65\x6f\x66\x2d\x64\x62\x2d\x6c\x6f\x63\x6b\x3a\x04\x0d\x64\x62"
  "\x34\x3a\x72\x63\x2d\x3e\x6e\x61\x6d\x65\x38\x04\x0d\x64\x62\x34"
  "\x3a\x6e\x61\x6d\x65\x2d\x3e\x72\x63\x36\x04\x0d\x64\x62\x34\x3a"
  "\x69\x6e\x69\x74\x2d\x64\x62\x74\x34\x04\x0d\x64\x62\x34\x3a\x64"
  "\x62\x74\x2d\x73\x69\x7a\x65\x32\x04\x2f\x30\x04\x51\x2e\x04\x10"
  "\x64\x62\x34\x3a\x64\x62\x2d\x73\x74\x72\x65\x72\x72\x6f\x72\x2c"
  "\x04\x68\x2a\x04\x27\x28\x04\x10\x64\x62\x34\x3a\x64\x62\x2d\x67"
  "\x65\x74\x2d\x74\x79\x70\x65\x26\x04\x24\x25\x04\x14\x64\x62\x34"
  "\x3a\x64\x62\x2d\x67\x65\x74\x2d\x70\x61\x67\x65\x73\x69\x7a\x65"
  "\x23\x04\x21\x22\x04\x0f\x64\x62\x34\x3a\x64\x62\x2d\x67\x65\x74"
  "\x2d\x65\x6e\x76\x20\x04\x40\x1f\x04\x31\x1d\x04\x1a\x1b\x04\x18"
  "\x19\x04\x16\x17\x04\x14\x15\x04\x12\x13\x04\x10\x11\x04\x3f\x0f"
  "\x04\x5a\x0d\x04\x6b\x0b\x04\x4d\x09\x04\x04\x56\x04\x11\x6c\x6f"
  "\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x49\x04"
  "\x04\x1f\x73\x63\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e\x73"
  "\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65\x78\x70\x61\x6e\x64\x65\x72"
  "\x02\x15\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65"
  "\x3a\x65\x72\x72\x6f\x72\x17\x73\x74\x61\x6e\x64\x61\x72\x64\x2d"
  "\x65\x72\x72\x6f\x72\x2d\x68\x61\x6e\x64\x6c\x65\x72\x71\x73\x72"
  "\x74\x75\x08\x06\x14\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x2d\x74\x79\x70\x65\x05\x14\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x2d\x73\x69\x67\x6e\x61\x6c\x6c\x65\x72\x04\x11\x6d"
  "\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x04"
  "\x13\x72\x65\x63\x6f\x72\x64\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63"
  "\x74\x6f\x72\x03\x11\x72\x65\x63\x6f\x72\x64\x2d\x70\x72\x65\x64"
  "\x69\x63\x61\x74\x65\x04\x10\x72\x65\x63\x6f\x72\x64\x2d\x61\x63"
  "\x63\x65\x73\x73\x6f\x72\x04\x10\x72\x65\x63\x6f\x72\x64\x2d\x6d"
  "\x6f\x64\x69\x66\x69\x65\x72\x08\xba\x01\xf6\x02\x80\x80\x04\xb9"
  "\x01\xf4\x02\x81\x81\x02\xb8\x01\xf2\x02\x81\x81\x02\xb7\x01\xf0"
  "\x02\x81\x83\x02\xb6\x01\xee\x02\x81\x83\x02\xb5\x01\xec\x02\x81"
  "\x83\x02\xb4\x01\xea\x02\x81\x83\x02\xb3\x01\xe8\x02\x81\x83\x02"
  "\xb2\x01\xe6\x02\x81\x83\x02\xb1\x01\xe4\x02\x81\x83\x02\xb0\x01"
  "\xe2\x02\x81\x83\x02\xaf\x01\xe0\x02\x81\x83\x02\xae\x01\xde\x02"
  "\x81\x83\x02\xad\x01\xdc\x02\x81\x83\x02\xac\x01\xda\x02\x81\x83"
  "\x02\xab\x01\xd8\x02\x81\x83\x02\xaa\x01\xd6\x02\x81\x83\x02\xa9"
  "\x01\xd4\x02\x81\x83\x02\xa8\x01\xd2\x02\x81\x83\x02\xa7\x01\xd0"
  "\x02\x81\x85\x02\xa6\x01\xce\x02\x81\x83\x02\xa5\x01\xcc\x02\x81"
  "\x85\x02\xa4\x01\xca\x02\x81\x83\x02\xa3\x01\xc8\x02\x81\x83\x02"
  "\xa2\x01\xc6\x02\x81\x83\x02\xa1\x01\xc4\x02\x81\x83\x02\xa0\x01"
  "\xc2\x02\x81\x83\x02\x9f\x01\xc0\x02\x81\x83\x02\x9e\x01\xbe\x02"
  "\x81\x83\x02\x9d\x01\xbc\x02\x81\x83\x02\x9c\x01\xba\x02\x81\x83"
  "\x02\x9b\x01\xb8\x02\x81\x83\x02\x9a\x01\xb6\x02\x81\x83\x02\x99"
  "\x01\xb4\x02\x81\x83\x02\x98\x01\xb2\x02\x81\x83\x02\x97\x01\xb0"
  "\x02\x81\x83\x02\x96\x01\xae\x02\x81\x83\x02\x95\x01\xac\x02\x81"
  "\x83\x02\x94\x01\xaa\x02\x81\x83\x02\x93\x01\xa8\x02\x81\x83\x02"
  "\x92\x01\xa6\x02\x81\x85\x02\x91\x01\xa4\x02\x81\x83\x02\x90\x01"
  "\xa2\x02\x81\x85\x02\x8f\x01\xa0\x02\x81\x89\x02\x8e\x01\x9e\x02"
  "\x81\x83\x02\x8d\x01\x9c\x02\x81\x85\x02\x8c\x01\x9a\x02\x81\x89"
  "\x02\x8b\x01\x98\x02\x81\x83\x02\x8a\x01\x96\x02\x81\x85\x02\x89"
  "\x01\x94\x02\x81\x87\x02\x88\x01\x92\x02\x81\x83\x02\x87\x01\x90"
  "\x02\x81\x85\x02\x86\x01\x8e\x02\x81\x89\x02\x85\x01\x8c\x02\x81"
  "\x83\x02\x84\x01\x8a\x02\x81\x85\x02\x83\x01\x88\x02\x81\x83\x02"
  "\x82\x01\x86\x02\x81\x85\x02\x81\x01\x84\x02\x81\x89\x02\x80\x01"
  "\x82\x02\x81\x83\x02\x7f\x80\x02\x81\x85\x02\x7e\xfe\x01\x81\x89"
  "\x02\x7d\xfc\x01\x81\x83\x02\x7c\xfa\x01\x81\x85\x02\x7b\xf8\x01"
  "\x81\x87\x02\x7a\xf6\x01\x81\x83\x02\x79\xf4\x01\x81\x85\x02\x78"
  "\xf2\x01\x81\x89\x02\x77\xf0\x01\x81\x83\x02\x76\xee\x01\x81\x85"
  "\x02\x75\xec\x01\x81\x83\x02\x74\xea\x01\x81\x85\x02\x73\xe8\x01"
  "\x81\x89\x02\x72\xe6\x01\x81\x83\x02\x71\xe4\x01\x81\x85\x02\x70"
  "\xe2\x01\x81\x89\x02\x6f\xe0\x01\x81\x83\x02\x6e\xde\x01\x81\x85"
  "\x02\x6d\xdc\x01\x81\x89\x02\x6c\xda\x01\x81\x83\x02\x6b\xd8\x01"
  "\x81\x85\x02\x6a\xd6\x01\x81\x87\x02\x69\xd4\x01\x81\x83\x02\x68"
  "\xd2\x01\x81\x85\x02\x67\xd0\x01\x81\x89\x02\x66\xce\x01\x81\x83"
  "\x02\x65\xcc\x01\x81\x85\x02\x64\xca\x01\x81\x83\x02\x63\xc8\x01"
  "\x81\x85\x02\x62\xc6\x01\x81\x89\x02\x61\xc4\x01\x81\x83\x02\x60"
  "\xc2\x01\x81\x85\x02\x5f\xc0\x01\x81\x89\x02\x5e\xbe\x01\x81\x83"
  "\x02\x5d\xbc\x01\x81\x85\x02\x5c\xba\x01\x81\x87\x02\x5b\xb8\x01"
  "\x81\x83\x02\x5a\xb6\x01\x81\x85\x02\x59\xb4\x01\x81\x89\x02\x58"
  "\xb2\x01\x81\x83\x02\x57\xb0\x01\x81\x85\x02\x56\xae\x01\x81\x83"
  "\x02\x55\xac\x01\x81\x85\x02\x54\xaa\x01\x81\x8b\x02\x53\xa8\x01"
  "\x81\x87\x02\x52\xa6\x01\x81\x83\x02\x51\xa4\x01\x81\x87\x02\x50"
  "\xa2\x01\x81\x85\x02\x4f\xa0\x01\x81\x8b\x02\x4e\x9e\x01\x81\x83"
  "\x02\x4d\x9c\x01\x81\x83\x02\x4c\x9a\x01\x81\x83\x02\x4b\x98\x01"
  "\x81\x83\x02\x4a\x96\x01\x81\x83\x02\x49\x94\x01\x81\x83\x02\x48"
  "\x92\x01\x81\x83\x02\x47\x90\x01\x81\x83\x02\x46\x8e\x01\x81\x83"
  "\x02\x45\x8c\x01\x81\x83\x02\x44\x8a\x01\x81\x83\x02\x43\x88\x01"
  "\x81\x83\x02\x42\x86\x01\x81\x83\x02\x41\x84\x01\x81\x83\x02\x40"
  "\x82\x01\x81\x83\x02\x3f\x80\x01\x81\x83\x02\x3e\x7e\x81\x83\x02"
  "\x3d\x7c\x81\x83\x02\x3c\x7a\x81\x83\x02\x3b\x78\x81\x83\x02\x3a"
  "\x76\x81\x83\x02\x39\x74\x81\x83\x02\x38\x72\x81\x83\x02\x37\x70"
  "\x81\x83\x02\x36\x6e\x81\x83\x02\x35\x6c\x81\x83\x02\x34\x6a\x81"
  "\x83\x02\x33\x68\x81\x83\x02\x32\x66\x81\x83\x02\x31\x64\x81\x83"
  "\x02\x30\x62\x81\x83\x02\x2f\x60\x81\x83\x02\x2e\x5e\x81\x83\x02"
  "\x2d\x5c\x81\x83\x02\x2c\x5a\x81\x83\x02\x2b\x58\x81\x83\x02\x2a"
  "\x56\x81\x83\x02\x29\x54\x81\x83\x02\x28\x52\x81\x83\x02\x27\x50"
  "\x81\x83\x02\x26\x4e\x81\x83\x02\x25\x4c\x81\x83\x02\x24\x4a\x81"
  "\x83\x02\x23\x48\x81\x83\x02\x22\x46\x81\x83\x02\x21\x44\x81\x83"
  "\x02\x20\x42\x81\x83\x02\x1f\x40\x81\x83\x02\x1e\x3e\x81\x83\x02"
  "\x1d\x3c\x81\x83\x02\x1c\x3a\x81\x83\x02\x1b\x38\x81\x83\x02\x1a"
  "\x36\x81\x83\x02\x19\x34\x81\x83\x02\x18\x32\x81\x83\x02\x17\x30"
  "\x81\x83\x02\x16\x2e\x81\x83\x02\x15\x2c\x81\x83\x02\x14\x2a\x81"
  "\x83\x02\x13\x28\x81\x83\x02\x12\x26\x81\x83\x02\x11\x24\x81\x83"
  "\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x83\x02"
  "\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x83\x02\x0a"
  "\x16\x81\x83\x02\x09\x14\x81\x83\x02\x08\x12\x81\x83\x02\x07\x10"
  "\x81\x83\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x83\x02\x04\x0a\x81"
  "\x83\x02\x03\x08\x81\x83\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83"
  "\x02\xf5\x02\x87\x05";

SCHEME_OBJECT *
berkeley_db_so_data_d4e0cda5951aa171 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_berkeley_db_so_data_d4e0cda5951aa171 [0]))), (sizeof (prog_berkeley_db_so_data_d4e0cda5951aa171)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_197]));
}

DECLARE_COMPILED_DATA_NS ("berkeley-db.so", berkeley_db_so_data_d4e0cda5951aa171)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("berkeley-db.so", "660a725ee82726d0")
