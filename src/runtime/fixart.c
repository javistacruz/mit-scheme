/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:32-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 6
#define DEBUGGING_LABEL_1_2 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_1_4);
      goto fix_fixnumP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix_fixnumP_3)
DEFLABEL (fix_fixnumP_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 26)
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_4;

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_1_0]);

DEFLABEL (label_4)
DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
fixart_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_2_4);
      goto fixnumP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fixnumP_3)
DEFLABEL (fixnumP_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 26)
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_4;

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_2_0]);

DEFLABEL (label_4)
DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  goto pop_return;

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
fixart_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_3_4);
      goto index_fixnumP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (index_fixnumP_3)
DEFLABEL (index_fixnumP_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd6.Obj) = (Rsp [0]);
  if (INDEX_FIXNUM_P (Wrd6.Obj))
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_4;

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_3_0]);

DEFLABEL (label_4)
DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
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
fixart_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_4_4);
      goto fix_zeroP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix_zeroP_3)
DEFLABEL (fix_zeroP_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd7.Lng) == 0)
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_4;

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_4_0]);

DEFLABEL (label_4)
DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
fixart_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_5_4);
      goto fix_negativeP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix_negativeP_3)
DEFLABEL (fix_negativeP_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd7.Lng) < 0)
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_4;

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_5_0]);

DEFLABEL (label_4)
DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  goto pop_return;

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
fixart_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_6_4);
      goto fix_positiveP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix_positiveP_3)
DEFLABEL (fix_positiveP_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd7.Lng) > 0)
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_4;

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_6_0]);

DEFLABEL (label_4)
DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
fixart_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_7_4);
      goto fix___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix___3)
DEFLABEL (fix___0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if ((Wrd7.Lng) == (Wrd9.Lng))
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_4;

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_7_0]);

DEFLABEL (label_4)
DEFLABEL (label_6)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
fixart_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_8_4);
      goto fix___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix___3)
DEFLABEL (fix___0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if ((Wrd7.Lng) < (Wrd9.Lng))
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_4;

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_8_0]);

DEFLABEL (label_4)
DEFLABEL (label_6)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
fixart_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_9_4);
      goto fix___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix___3)
DEFLABEL (fix___0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if ((Wrd7.Lng) > (Wrd9.Lng))
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_4;

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_9_0]);

DEFLABEL (label_4)
DEFLABEL (label_6)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 5
#define DEBUGGING_LABEL_10_2 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_10_4);
      goto fix_1__0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix_1__3)
DEFLABEL (fix_1__0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  Rvl = (LONG_TO_FIXNUM (Wrd8.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 5
#define DEBUGGING_LABEL_11_2 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_11_4);
      goto fix__1__0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix__1__3)
DEFLABEL (fix__1__0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) - 1L);
  Rvl = (LONG_TO_FIXNUM (Wrd8.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 5
#define DEBUGGING_LABEL_12_2 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_12_4);
      goto fix___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix___3)
DEFLABEL (fix___0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd7.Lng) + (Wrd9.Lng));
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 5
#define DEBUGGING_LABEL_13_2 4
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_13_4);
      goto fix___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix___3)
DEFLABEL (fix___0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd7.Lng) - (Wrd9.Lng));
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 5
#define DEBUGGING_LABEL_14_2 4
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_14_4);
      goto fix___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix___3)
DEFLABEL (fix___0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd7.Lng) * (Wrd9.Lng));
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
fixart_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto fix_divide_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix_divide_3)
DEFLABEL (fix_divide_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 5
#define DEBUGGING_LABEL_16_2 4
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_16_4);
      goto fix_quotient_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix_quotient_3)
DEFLABEL (fix_quotient_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = (FIXNUM_QUOTIENT ((Wrd7.Lng), (Wrd9.Lng)));
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 5
#define DEBUGGING_LABEL_17_2 4
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_17_4);
      goto fix_remainder_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix_remainder_3)
DEFLABEL (fix_remainder_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = (FIXNUM_REMAINDER ((Wrd7.Lng), (Wrd9.Lng)));
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
fixart_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto fix_gcd_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix_gcd_3)
DEFLABEL (fix_gcd_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 5
#define DEBUGGING_LABEL_19_2 4
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_19_4);
      goto fix_andc_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix_andc_3)
DEFLABEL (fix_andc_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd7.Lng) &~ (Wrd9.Lng));
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 5
#define DEBUGGING_LABEL_20_2 4
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_20_4);
      goto fix_and_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix_and_3)
DEFLABEL (fix_and_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd7.Lng) & (Wrd9.Lng));
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define ENVIRONMENT_LABEL_21_3 5
#define DEBUGGING_LABEL_21_2 4
#define FREE_REFERENCES_LABEL_21_0 4
#define NUMBER_OF_LINKER_SECTIONS_21_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_21_4);
      goto fix_or_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix_or_3)
DEFLABEL (fix_or_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd7.Lng) | (Wrd9.Lng));
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 5
#define DEBUGGING_LABEL_22_2 4
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_22_4);
      goto fix_xor_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix_xor_3)
DEFLABEL (fix_xor_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd7.Lng) ^ (Wrd9.Lng));
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 5
#define DEBUGGING_LABEL_23_2 4
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_23_4);
      goto fix_not_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix_not_3)
DEFLABEL (fix_not_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = (~ (Wrd7.Lng));
  Rvl = (LONG_TO_FIXNUM (Wrd8.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define ENVIRONMENT_LABEL_24_3 5
#define DEBUGGING_LABEL_24_2 4
#define FREE_REFERENCES_LABEL_24_0 4
#define NUMBER_OF_LINKER_SECTIONS_24_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_24_4);
      goto fix_lsh_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix_lsh_3)
DEFLABEL (fix_lsh_0)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = (FIXNUM_LSH ((Wrd7.Lng), (Wrd9.Lng)));
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
fixart_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto int_integerP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (int_integerP_3)
DEFLABEL (int_integerP_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 1);

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
fixart_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_26_4);
      goto int_zeroP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (int_zeroP_3)
DEFLABEL (int_zeroP_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 26)
    goto label_4;
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 1);

DEFLABEL (label_4)
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd9.Lng) == 0)
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_26_0]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
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
fixart_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_27_4);
      goto int_positiveP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (int_positiveP_3)
DEFLABEL (int_positiveP_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 26)
    goto label_4;
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 1);

DEFLABEL (label_4)
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd9.Lng) > 0)
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_27_0]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
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
fixart_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_28_4);
      goto int_negativeP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (int_negativeP_3)
DEFLABEL (int_negativeP_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 26)
    goto label_4;
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 1);

DEFLABEL (label_4)
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd9.Lng) < 0)
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_28_0]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
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
fixart_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_29_4);
      goto int___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (int___3)
DEFLABEL (int___0)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 26)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_5)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 26))
    goto label_4;
  if ((Wrd6.Obj) == (Wrd8.Obj))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_29_0]);

DEFLABEL (label_6)
DEFLABEL (label_8)
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
fixart_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_30_4);
      goto int___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (int___3)
DEFLABEL (int___0)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 26)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_5)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 26))
    goto label_4;
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if ((Wrd11.Lng) < (Wrd13.Lng))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_30_0]);

DEFLABEL (label_6)
DEFLABEL (label_8)
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
fixart_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_31_4);
      goto int___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (int___3)
DEFLABEL (int___0)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 26)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_5)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 26))
    goto label_4;
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if ((Wrd11.Lng) > (Wrd13.Lng))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_31_0]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));
  goto pop_return;

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
fixart_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto int_negate_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (int_negate_3)
DEFLABEL (int_negate_0)
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
fixart_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_33_4);
      goto int_1__0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (int_1__3)
DEFLABEL (int_1__0)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 26)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_0]), 1);

DEFLABEL (label_5)
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd10.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd8.Lng)))
    goto label_4;
  Rvl = (LONG_TO_FIXNUM (Wrd8.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

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
fixart_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_34_4);
      goto int__1__0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (int__1__3)
DEFLABEL (int__1__0)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 26)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 1);

DEFLABEL (label_5)
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd10.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd8.Lng)))
    goto label_4;
  Rvl = (LONG_TO_FIXNUM (Wrd8.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

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
fixart_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_35_4);
      goto int___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (int___3)
DEFLABEL (int___0)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 26)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_0]), 2);

DEFLABEL (label_5)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 26))
    goto label_4;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd12.Lng) + (Wrd14.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd10.Lng)))
    goto label_4;
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
fixart_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_36_4);
      goto int___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (int___3)
DEFLABEL (int___0)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 26)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 2);

DEFLABEL (label_5)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 26))
    goto label_4;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd12.Lng) - (Wrd14.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd10.Lng)))
    goto label_4;
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define ENVIRONMENT_LABEL_37_3 6
#define DEBUGGING_LABEL_37_2 5
#define OBJECT_37_0 4
#define FREE_REFERENCES_LABEL_37_0 4
#define NUMBER_OF_LINKER_SECTIONS_37_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_37_4);
      goto int___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (int___3)
DEFLABEL (int___0)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 26)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_0]), 2);

DEFLABEL (label_5)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 26))
    goto label_4;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if (multiply_with_overflow ((Wrd12.Lng), (Wrd14.Lng), (& (Wrd10.Lng))))
    goto label_4;
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define ENVIRONMENT_LABEL_38_3 6
#define DEBUGGING_LABEL_38_2 5
#define OBJECT_38_0 4
#define FREE_REFERENCES_LABEL_38_0 4
#define NUMBER_OF_LINKER_SECTIONS_38_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_38_4);
      goto int_divide_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (int_divide_3)
DEFLABEL (int_divide_0)
  INTERRUPT_CHECK (26, LABEL_38_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define ENVIRONMENT_LABEL_39_3 6
#define DEBUGGING_LABEL_39_2 5
#define OBJECT_39_0 4
#define FREE_REFERENCES_LABEL_39_0 4
#define NUMBER_OF_LINKER_SECTIONS_39_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_39_4);
      goto int_quotient_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (int_quotient_3)
DEFLABEL (int_quotient_0)
  INTERRUPT_CHECK (26, LABEL_39_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define ENVIRONMENT_LABEL_40_3 6
#define DEBUGGING_LABEL_40_2 5
#define OBJECT_40_0 4
#define FREE_REFERENCES_LABEL_40_0 4
#define NUMBER_OF_LINKER_SECTIONS_40_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_40_4);
      goto int_remainder_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (int_remainder_3)
DEFLABEL (int_remainder_0)
  INTERRUPT_CHECK (26, LABEL_40_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define ENVIRONMENT_LABEL_41_3 6
#define DEBUGGING_LABEL_41_2 5
#define OBJECT_41_0 4
#define FREE_REFERENCES_LABEL_41_0 4
#define NUMBER_OF_LINKER_SECTIONS_41_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_41_4);
      goto flo_flonumP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_flonumP_3)
DEFLABEL (flo_flonumP_0)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 6)
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_4;

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_41_0]);

DEFLABEL (label_4)
DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
fixart_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl7;
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
      current_block = (Rpc - LABEL_42_4);
      goto flo_zeroP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_zeroP_3)
DEFLABEL (flo_zeroP_0)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 6)
    goto label_4;
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 1);

DEFLABEL (label_4)
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd10.Obj));
  if (Dbl7 == 0.0)
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_42_0]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define ENVIRONMENT_LABEL_43_3 7
#define DEBUGGING_LABEL_43_2 6
#define OBJECT_43_1 5
#define OBJECT_43_0 4
#define FREE_REFERENCES_LABEL_43_0 4
#define NUMBER_OF_LINKER_SECTIONS_43_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl7;
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
      current_block = (Rpc - LABEL_43_4);
      goto flo_positiveP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_positiveP_3)
DEFLABEL (flo_positiveP_0)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 6)
    goto label_4;
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 1);

DEFLABEL (label_4)
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd10.Obj));
  if (Dbl7 > 0.0)
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_43_0]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
fixart_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl7;
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
      current_block = (Rpc - LABEL_44_4);
      goto flo_negativeP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_negativeP_3)
DEFLABEL (flo_negativeP_0)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 6)
    goto label_4;
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_4)
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd10.Obj));
  if (Dbl7 < 0.0)
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_44_0]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
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
fixart_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl9;
  double Dbl7;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_45_4);
      goto flo___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo___3)
DEFLABEL (flo___0)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 6)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 2);

DEFLABEL (label_5)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 6))
    goto label_4;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd14.Obj));
  Dbl9 = (FLONUM_TO_DOUBLE (Wrd12.Obj));
  if (Dbl7 == Dbl9)
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_45_0]);

DEFLABEL (label_6)
DEFLABEL (label_8)
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
fixart_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl9;
  double Dbl7;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_46_4);
      goto flo___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo___3)
DEFLABEL (flo___0)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 6)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_5)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 6))
    goto label_4;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd14.Obj));
  Dbl9 = (FLONUM_TO_DOUBLE (Wrd12.Obj));
  if (Dbl7 < Dbl9)
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_46_0]);

DEFLABEL (label_6)
DEFLABEL (label_8)
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
fixart_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl9;
  double Dbl7;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto flo___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo___3)
DEFLABEL (flo___0)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 6)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 2);

DEFLABEL (label_5)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 6))
    goto label_4;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd14.Obj));
  Dbl9 = (FLONUM_TO_DOUBLE (Wrd12.Obj));
  if (Dbl7 > Dbl9)
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_47_0]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define ENVIRONMENT_LABEL_48_3 6
#define DEBUGGING_LABEL_48_2 5
#define OBJECT_48_0 4
#define FREE_REFERENCES_LABEL_48_0 4
#define NUMBER_OF_LINKER_SECTIONS_48_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl10;
  double Dbl9;
  double Dbl7;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_48_4);
      goto flo___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo___3)
DEFLABEL (flo___0)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 6)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_0]), 2);

DEFLABEL (label_5)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 6))
    goto label_4;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd14.Obj));
  Dbl9 = (FLONUM_TO_DOUBLE (Wrd12.Obj));
  Dbl10 = (Dbl7 + Dbl9);
  INLINE_DOUBLE_TO_FLONUM (Dbl10, Rvl);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define ENVIRONMENT_LABEL_49_3 6
#define DEBUGGING_LABEL_49_2 5
#define OBJECT_49_0 4
#define FREE_REFERENCES_LABEL_49_0 4
#define NUMBER_OF_LINKER_SECTIONS_49_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl10;
  double Dbl9;
  double Dbl7;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_49_4);
      goto flo___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo___3)
DEFLABEL (flo___0)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 6)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_0]), 2);

DEFLABEL (label_5)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 6))
    goto label_4;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd14.Obj));
  Dbl9 = (FLONUM_TO_DOUBLE (Wrd12.Obj));
  Dbl10 = (Dbl7 - Dbl9);
  INLINE_DOUBLE_TO_FLONUM (Dbl10, Rvl);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define ENVIRONMENT_LABEL_50_3 6
#define DEBUGGING_LABEL_50_2 5
#define OBJECT_50_0 4
#define FREE_REFERENCES_LABEL_50_0 4
#define NUMBER_OF_LINKER_SECTIONS_50_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl10;
  double Dbl9;
  double Dbl7;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto flo___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo___3)
DEFLABEL (flo___0)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 6)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 2);

DEFLABEL (label_5)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 6))
    goto label_4;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd14.Obj));
  Dbl9 = (FLONUM_TO_DOUBLE (Wrd12.Obj));
  Dbl10 = (Dbl7 * Dbl9);
  INLINE_DOUBLE_TO_FLONUM (Dbl10, Rvl);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define ENVIRONMENT_LABEL_51_3 6
#define DEBUGGING_LABEL_51_2 5
#define OBJECT_51_0 4
#define FREE_REFERENCES_LABEL_51_0 4
#define NUMBER_OF_LINKER_SECTIONS_51_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl10;
  double Dbl9;
  double Dbl7;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto flo___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo___3)
DEFLABEL (flo___0)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 6)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_0]), 2);

DEFLABEL (label_5)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 6))
    goto label_4;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd14.Obj));
  Dbl9 = (FLONUM_TO_DOUBLE (Wrd12.Obj));
  Dbl10 = (Dbl7 / Dbl9);
  INLINE_DOUBLE_TO_FLONUM (Dbl10, Rvl);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define ENVIRONMENT_LABEL_52_3 6
#define DEBUGGING_LABEL_52_2 5
#define OBJECT_52_0 4
#define FREE_REFERENCES_LABEL_52_0 4
#define NUMBER_OF_LINKER_SECTIONS_52_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_52_4);
      goto flo_modulo_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_modulo_3)
DEFLABEL (flo_modulo_0)
  INTERRUPT_CHECK (26, LABEL_52_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define ENVIRONMENT_LABEL_53_3 6
#define DEBUGGING_LABEL_53_2 5
#define OBJECT_53_0 4
#define FREE_REFERENCES_LABEL_53_0 4
#define NUMBER_OF_LINKER_SECTIONS_53_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl8;
  double Dbl7;
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
      current_block = (Rpc - LABEL_53_4);
      goto flo_negate_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_negate_3)
DEFLABEL (flo_negate_0)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 6))
    goto label_4;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd10.Obj));
  Dbl8 = (- Dbl7);
  INLINE_DOUBLE_TO_FLONUM (Dbl8, Rvl);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define ENVIRONMENT_LABEL_54_3 6
#define DEBUGGING_LABEL_54_2 5
#define OBJECT_54_0 4
#define FREE_REFERENCES_LABEL_54_0 4
#define NUMBER_OF_LINKER_SECTIONS_54_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl8;
  double Dbl7;
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
      current_block = (Rpc - LABEL_54_4);
      goto flo_abs_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_abs_3)
DEFLABEL (flo_abs_0)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 6))
    goto label_4;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd10.Obj));
  Dbl8 = ((Dbl7 < 0.) ? (- Dbl7) : Dbl7);
  INLINE_DOUBLE_TO_FLONUM (Dbl8, Rvl);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define ENVIRONMENT_LABEL_55_3 6
#define DEBUGGING_LABEL_55_2 5
#define OBJECT_55_0 4
#define FREE_REFERENCES_LABEL_55_0 4
#define NUMBER_OF_LINKER_SECTIONS_55_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl8;
  double Dbl7;
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
      current_block = (Rpc - LABEL_55_4);
      goto flo_exp_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_exp_3)
DEFLABEL (flo_exp_0)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 6))
    goto label_4;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd10.Obj));
  Dbl8 = (DOUBLE_EXP (Dbl7));
  INLINE_DOUBLE_TO_FLONUM (Dbl8, Rvl);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define ENVIRONMENT_LABEL_56_3 6
#define DEBUGGING_LABEL_56_2 5
#define OBJECT_56_0 4
#define FREE_REFERENCES_LABEL_56_0 4
#define NUMBER_OF_LINKER_SECTIONS_56_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl8;
  double Dbl7;
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
      current_block = (Rpc - LABEL_56_4);
      goto flo_expm1_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_expm1_3)
DEFLABEL (flo_expm1_0)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 6))
    goto label_4;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd10.Obj));
  Dbl8 = (DOUBLE_EXPM1 (Dbl7));
  INLINE_DOUBLE_TO_FLONUM (Dbl8, Rvl);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define ENVIRONMENT_LABEL_57_3 6
#define DEBUGGING_LABEL_57_2 5
#define OBJECT_57_0 4
#define FREE_REFERENCES_LABEL_57_0 4
#define NUMBER_OF_LINKER_SECTIONS_57_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl8;
  double Dbl7;
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
      current_block = (Rpc - LABEL_57_4);
      goto flo_log_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_log_3)
DEFLABEL (flo_log_0)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 6))
    goto label_4;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd10.Obj));
  Dbl8 = (DOUBLE_LOG (Dbl7));
  INLINE_DOUBLE_TO_FLONUM (Dbl8, Rvl);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define ENVIRONMENT_LABEL_58_3 6
#define DEBUGGING_LABEL_58_2 5
#define OBJECT_58_0 4
#define FREE_REFERENCES_LABEL_58_0 4
#define NUMBER_OF_LINKER_SECTIONS_58_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl8;
  double Dbl7;
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
      current_block = (Rpc - LABEL_58_4);
      goto flo_log1p_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_log1p_3)
DEFLABEL (flo_log1p_0)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 6))
    goto label_4;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd10.Obj));
  Dbl8 = (DOUBLE_LOG1P (Dbl7));
  INLINE_DOUBLE_TO_FLONUM (Dbl8, Rvl);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define ENVIRONMENT_LABEL_59_3 6
#define DEBUGGING_LABEL_59_2 5
#define OBJECT_59_0 4
#define FREE_REFERENCES_LABEL_59_0 4
#define NUMBER_OF_LINKER_SECTIONS_59_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl8;
  double Dbl7;
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
      current_block = (Rpc - LABEL_59_4);
      goto flo_sin_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_sin_3)
DEFLABEL (flo_sin_0)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 6))
    goto label_4;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd10.Obj));
  Dbl8 = (DOUBLE_SIN (Dbl7));
  INLINE_DOUBLE_TO_FLONUM (Dbl8, Rvl);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define ENVIRONMENT_LABEL_60_3 6
#define DEBUGGING_LABEL_60_2 5
#define OBJECT_60_0 4
#define FREE_REFERENCES_LABEL_60_0 4
#define NUMBER_OF_LINKER_SECTIONS_60_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl8;
  double Dbl7;
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
      current_block = (Rpc - LABEL_60_4);
      goto flo_cos_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_cos_3)
DEFLABEL (flo_cos_0)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 6))
    goto label_4;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd10.Obj));
  Dbl8 = (DOUBLE_COS (Dbl7));
  INLINE_DOUBLE_TO_FLONUM (Dbl8, Rvl);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define ENVIRONMENT_LABEL_61_3 6
#define DEBUGGING_LABEL_61_2 5
#define OBJECT_61_0 4
#define FREE_REFERENCES_LABEL_61_0 4
#define NUMBER_OF_LINKER_SECTIONS_61_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl8;
  double Dbl7;
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
      current_block = (Rpc - LABEL_61_4);
      goto flo_tan_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_tan_3)
DEFLABEL (flo_tan_0)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 6))
    goto label_4;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd10.Obj));
  Dbl8 = (DOUBLE_TAN (Dbl7));
  INLINE_DOUBLE_TO_FLONUM (Dbl8, Rvl);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define ENVIRONMENT_LABEL_62_3 6
#define DEBUGGING_LABEL_62_2 5
#define OBJECT_62_0 4
#define FREE_REFERENCES_LABEL_62_0 4
#define NUMBER_OF_LINKER_SECTIONS_62_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl8;
  double Dbl7;
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
      current_block = (Rpc - LABEL_62_4);
      goto flo_asin_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_asin_3)
DEFLABEL (flo_asin_0)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 6))
    goto label_4;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd10.Obj));
  Dbl8 = (DOUBLE_ASIN (Dbl7));
  INLINE_DOUBLE_TO_FLONUM (Dbl8, Rvl);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define ENVIRONMENT_LABEL_63_3 6
#define DEBUGGING_LABEL_63_2 5
#define OBJECT_63_0 4
#define FREE_REFERENCES_LABEL_63_0 4
#define NUMBER_OF_LINKER_SECTIONS_63_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl8;
  double Dbl7;
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
      current_block = (Rpc - LABEL_63_4);
      goto flo_acos_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_acos_3)
DEFLABEL (flo_acos_0)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 6))
    goto label_4;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd10.Obj));
  Dbl8 = (DOUBLE_ACOS (Dbl7));
  INLINE_DOUBLE_TO_FLONUM (Dbl8, Rvl);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define ENVIRONMENT_LABEL_64_3 6
#define DEBUGGING_LABEL_64_2 5
#define OBJECT_64_0 4
#define FREE_REFERENCES_LABEL_64_0 4
#define NUMBER_OF_LINKER_SECTIONS_64_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl8;
  double Dbl7;
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
      current_block = (Rpc - LABEL_64_4);
      goto flo_atan_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_atan_3)
DEFLABEL (flo_atan_0)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 6))
    goto label_4;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd10.Obj));
  Dbl8 = (DOUBLE_ATAN (Dbl7));
  INLINE_DOUBLE_TO_FLONUM (Dbl8, Rvl);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define ENVIRONMENT_LABEL_65_3 6
#define DEBUGGING_LABEL_65_2 5
#define OBJECT_65_0 4
#define FREE_REFERENCES_LABEL_65_0 4
#define NUMBER_OF_LINKER_SECTIONS_65_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl10;
  double Dbl9;
  double Dbl7;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_65_4);
      goto flo_atan2_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_atan2_3)
DEFLABEL (flo_atan2_0)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 6)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_0]), 2);

DEFLABEL (label_5)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 6))
    goto label_4;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd14.Obj));
  Dbl9 = (FLONUM_TO_DOUBLE (Wrd12.Obj));
  Dbl10 = (DOUBLE_ATAN2 (Dbl7, Dbl9));
  INLINE_DOUBLE_TO_FLONUM (Dbl10, Rvl);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define ENVIRONMENT_LABEL_66_3 6
#define DEBUGGING_LABEL_66_2 5
#define OBJECT_66_0 4
#define FREE_REFERENCES_LABEL_66_0 4
#define NUMBER_OF_LINKER_SECTIONS_66_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl8;
  double Dbl7;
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
      current_block = (Rpc - LABEL_66_4);
      goto flo_sqrt_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_sqrt_3)
DEFLABEL (flo_sqrt_0)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 6))
    goto label_4;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd10.Obj));
  Dbl8 = (DOUBLE_SQRT (Dbl7));
  INLINE_DOUBLE_TO_FLONUM (Dbl8, Rvl);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define ENVIRONMENT_LABEL_67_3 6
#define DEBUGGING_LABEL_67_2 5
#define OBJECT_67_0 4
#define FREE_REFERENCES_LABEL_67_0 4
#define NUMBER_OF_LINKER_SECTIONS_67_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_67_4);
      goto flo_expt_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_expt_3)
DEFLABEL (flo_expt_0)
  INTERRUPT_CHECK (26, LABEL_67_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define ENVIRONMENT_LABEL_68_3 6
#define DEBUGGING_LABEL_68_2 5
#define OBJECT_68_0 4
#define FREE_REFERENCES_LABEL_68_0 4
#define NUMBER_OF_LINKER_SECTIONS_68_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl8;
  double Dbl7;
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
      current_block = (Rpc - LABEL_68_4);
      goto flo_floor_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_floor_3)
DEFLABEL (flo_floor_0)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 6))
    goto label_4;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd10.Obj));
  Dbl8 = (DOUBLE_FLOOR (Dbl7));
  INLINE_DOUBLE_TO_FLONUM (Dbl8, Rvl);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define ENVIRONMENT_LABEL_69_3 6
#define DEBUGGING_LABEL_69_2 5
#define OBJECT_69_0 4
#define FREE_REFERENCES_LABEL_69_0 4
#define NUMBER_OF_LINKER_SECTIONS_69_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl8;
  double Dbl7;
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
      current_block = (Rpc - LABEL_69_4);
      goto flo_ceiling_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_ceiling_3)
DEFLABEL (flo_ceiling_0)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 6))
    goto label_4;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd10.Obj));
  Dbl8 = (DOUBLE_CEILING (Dbl7));
  INLINE_DOUBLE_TO_FLONUM (Dbl8, Rvl);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define ENVIRONMENT_LABEL_70_3 6
#define DEBUGGING_LABEL_70_2 5
#define OBJECT_70_0 4
#define FREE_REFERENCES_LABEL_70_0 4
#define NUMBER_OF_LINKER_SECTIONS_70_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl8;
  double Dbl7;
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
      current_block = (Rpc - LABEL_70_4);
      goto flo_truncate_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_truncate_3)
DEFLABEL (flo_truncate_0)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 6))
    goto label_4;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd10.Obj));
  Dbl8 = (DOUBLE_TRUNCATE (Dbl7));
  INLINE_DOUBLE_TO_FLONUM (Dbl8, Rvl);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define ENVIRONMENT_LABEL_71_3 6
#define DEBUGGING_LABEL_71_2 5
#define OBJECT_71_0 4
#define FREE_REFERENCES_LABEL_71_0 4
#define NUMBER_OF_LINKER_SECTIONS_71_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl8;
  double Dbl7;
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
      current_block = (Rpc - LABEL_71_4);
      goto flo_round_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_round_3)
DEFLABEL (flo_round_0)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 6))
    goto label_4;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd10.Obj));
  Dbl8 = (DOUBLE_ROUND (Dbl7));
  INLINE_DOUBLE_TO_FLONUM (Dbl8, Rvl);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define ENVIRONMENT_LABEL_72_3 6
#define DEBUGGING_LABEL_72_2 5
#define OBJECT_72_0 4
#define FREE_REFERENCES_LABEL_72_0 4
#define NUMBER_OF_LINKER_SECTIONS_72_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_72_4);
      goto flo_floor__exact_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_floor__exact_3)
DEFLABEL (flo_floor__exact_0)
  INTERRUPT_CHECK (26, LABEL_72_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define ENVIRONMENT_LABEL_73_3 6
#define DEBUGGING_LABEL_73_2 5
#define OBJECT_73_0 4
#define FREE_REFERENCES_LABEL_73_0 4
#define NUMBER_OF_LINKER_SECTIONS_73_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_73_4);
      goto flo_ceiling__exact_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_ceiling__exact_3)
DEFLABEL (flo_ceiling__exact_0)
  INTERRUPT_CHECK (26, LABEL_73_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define ENVIRONMENT_LABEL_74_3 6
#define DEBUGGING_LABEL_74_2 5
#define OBJECT_74_0 4
#define FREE_REFERENCES_LABEL_74_0 4
#define NUMBER_OF_LINKER_SECTIONS_74_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_74_4);
      goto flo_truncate__exact_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_truncate__exact_3)
DEFLABEL (flo_truncate__exact_0)
  INTERRUPT_CHECK (26, LABEL_74_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define ENVIRONMENT_LABEL_75_3 6
#define DEBUGGING_LABEL_75_2 5
#define OBJECT_75_0 4
#define FREE_REFERENCES_LABEL_75_0 4
#define NUMBER_OF_LINKER_SECTIONS_75_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_75_4);
      goto flo_round__exact_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_round__exact_3)
DEFLABEL (flo_round__exact_0)
  INTERRUPT_CHECK (26, LABEL_75_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define ENVIRONMENT_LABEL_76_3 6
#define DEBUGGING_LABEL_76_2 5
#define OBJECT_76_0 4
#define FREE_REFERENCES_LABEL_76_0 4
#define NUMBER_OF_LINKER_SECTIONS_76_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_76_4);
      goto flo_vector_cons_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_vector_cons_3)
DEFLABEL (flo_vector_cons_0)
  INTERRUPT_CHECK (26, LABEL_76_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define ENVIRONMENT_LABEL_77_3 6
#define DEBUGGING_LABEL_77_2 5
#define OBJECT_77_0 4
#define FREE_REFERENCES_LABEL_77_0 4
#define NUMBER_OF_LINKER_SECTIONS_77_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_77_4);
      goto flo_vector_length_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_vector_length_3)
DEFLABEL (flo_vector_length_0)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 6))
    goto label_4;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd9.Obj));
  (Wrd11.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd15.Lng) = (FIXNUM_QUOTIENT ((Wrd12.Lng), ((ADDRESS_UNITS_PER_FLOAT + (ADDRESS_UNITS_PER_OBJECT - 1)) / ADDRESS_UNITS_PER_OBJECT)));
  Rvl = (LONG_TO_FIXNUM (Wrd15.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define ENVIRONMENT_LABEL_78_3 6
#define DEBUGGING_LABEL_78_2 5
#define OBJECT_78_0 4
#define FREE_REFERENCES_LABEL_78_0 4
#define NUMBER_OF_LINKER_SECTIONS_78_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl12;
  machine_word Wrd7;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_78_4);
      goto flo_vector_ref_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_vector_ref_3)
DEFLABEL (flo_vector_ref_0)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 6)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_0]), 2);

DEFLABEL (label_5)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_4;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) (Wrd17.Lng)) < ((unsigned long) (Wrd21.Lng))))
    goto label_4;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd14.Obj));
  Dbl12 = (((double *) (& ((Wrd19.pObj) [1]))) [(Wrd7.Lng)]);
  INLINE_DOUBLE_TO_FLONUM (Dbl12, Rvl);
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
fixart_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl13;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd26;
  machine_word Wrd25;
  INVOKE_INTERFACE_DECLS
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
      goto flo_vector_setB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_vector_setB_3)
DEFLABEL (flo_vector_setB_0)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 6)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 3);

DEFLABEL (label_5)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_4;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) (Wrd20.Lng)) < ((unsigned long) (Wrd24.Lng))))
    goto label_4;
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 6))
    goto label_4;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd17.Obj));
  (Wrd10.pObj) = (& ((Wrd22.pObj) [1]));
  Dbl13 = (FLONUM_TO_DOUBLE (Wrd15.Obj));
  ((Wrd10.pDbl) [(Wrd7.Lng)]) = Dbl13;
  Rvl = (current_block [OBJECT_79_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define ENVIRONMENT_LABEL_80_3 9
#define DEBUGGING_LABEL_80_2 8
#define OBJECT_80_0 7
#define EXECUTE_CACHE_80_5 5
#define FREE_REFERENCES_LABEL_80_0 4
#define NUMBER_OF_LINKER_SECTIONS_80_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_80_4);
      goto guarantee_fixnum_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_fixnum_4)
DEFLABEL (guarantee_fixnum_1)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 26)
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_5]));

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_80_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define ENVIRONMENT_LABEL_81_3 11
#define DEBUGGING_LABEL_81_2 10
#define OBJECT_81_2 9
#define OBJECT_81_1 8
#define OBJECT_81_0 7
#define EXECUTE_CACHE_81_5 5
#define FREE_REFERENCES_LABEL_81_0 4
#define NUMBER_OF_LINKER_SECTIONS_81_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_81_4);
      goto error_not_fixnum_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_fixnum_5)
DEFLABEL (error_not_fixnum_2)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_81_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_81_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_81_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define ENVIRONMENT_LABEL_82_3 6
#define DEBUGGING_LABEL_82_2 5
#define OBJECT_82_0 4
#define FREE_REFERENCES_LABEL_82_0 4
#define NUMBER_OF_LINKER_SECTIONS_82_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_82_4);
      goto positive_fixnumP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (positive_fixnumP_4)
DEFLABEL (positive_fixnumP_1)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 26)
    goto label_7;

DEFLABEL (label_6)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_5)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd11.Lng) > 0))
    goto label_6;
  Rvl = (current_block [OBJECT_82_0]);
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define ENVIRONMENT_LABEL_83_3 6
#define DEBUGGING_LABEL_83_2 5
#define OBJECT_83_0 4
#define FREE_REFERENCES_LABEL_83_0 4
#define NUMBER_OF_LINKER_SECTIONS_83_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_83_4);
      goto negative_fixnumP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (negative_fixnumP_4)
DEFLABEL (negative_fixnumP_1)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 26)
    goto label_7;

DEFLABEL (label_6)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_5)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd11.Lng) < 0))
    goto label_6;
  Rvl = (current_block [OBJECT_83_0]);
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define ENVIRONMENT_LABEL_84_3 6
#define DEBUGGING_LABEL_84_2 5
#define OBJECT_84_0 4
#define FREE_REFERENCES_LABEL_84_0 4
#define NUMBER_OF_LINKER_SECTIONS_84_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_84_4);
      goto non_negative_fixnumP_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (non_negative_fixnumP_5)
DEFLABEL (non_negative_fixnumP_2)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 26)
    goto label_8;

DEFLABEL (label_7)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd10.Lng) < 0)
    goto label_7;
  Rvl = (current_block [OBJECT_84_0]);
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define ENVIRONMENT_LABEL_85_3 6
#define DEBUGGING_LABEL_85_2 5
#define OBJECT_85_0 4
#define FREE_REFERENCES_LABEL_85_0 4
#define NUMBER_OF_LINKER_SECTIONS_85_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_85_4);
      goto non_positive_fixnumP_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (non_positive_fixnumP_5)
DEFLABEL (non_positive_fixnumP_2)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 26)
    goto label_8;

DEFLABEL (label_7)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd10.Lng) > 0)
    goto label_7;
  Rvl = (current_block [OBJECT_85_0]);
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define ENVIRONMENT_LABEL_86_3 9
#define DEBUGGING_LABEL_86_2 8
#define OBJECT_86_0 7
#define EXECUTE_CACHE_86_5 5
#define FREE_REFERENCES_LABEL_86_0 4
#define NUMBER_OF_LINKER_SECTIONS_86_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_86_4);
      goto guarantee_positive_fixnum_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_positive_fixnum_5)
DEFLABEL (guarantee_positive_fixnum_2)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 26)
    goto label_7;

DEFLABEL (label_6)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_5]));

DEFLABEL (label_7)
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd8.Lng) > 0))
    goto label_6;
  Rvl = (current_block [OBJECT_86_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define ENVIRONMENT_LABEL_87_3 11
#define DEBUGGING_LABEL_87_2 10
#define OBJECT_87_2 9
#define OBJECT_87_1 8
#define OBJECT_87_0 7
#define EXECUTE_CACHE_87_5 5
#define FREE_REFERENCES_LABEL_87_0 4
#define NUMBER_OF_LINKER_SECTIONS_87_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_87_4);
      goto error_not_positive_fixnum_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_positive_fixnum_5)
DEFLABEL (error_not_positive_fixnum_2)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_87_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_87_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_87_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define ENVIRONMENT_LABEL_88_3 9
#define DEBUGGING_LABEL_88_2 8
#define OBJECT_88_0 7
#define EXECUTE_CACHE_88_5 5
#define FREE_REFERENCES_LABEL_88_0 4
#define NUMBER_OF_LINKER_SECTIONS_88_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_88_4);
      goto guarantee_negative_fixnum_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_negative_fixnum_5)
DEFLABEL (guarantee_negative_fixnum_2)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 26)
    goto label_7;

DEFLABEL (label_6)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_5]));

DEFLABEL (label_7)
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd8.Lng) < 0))
    goto label_6;
  Rvl = (current_block [OBJECT_88_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define ENVIRONMENT_LABEL_89_3 11
#define DEBUGGING_LABEL_89_2 10
#define OBJECT_89_2 9
#define OBJECT_89_1 8
#define OBJECT_89_0 7
#define EXECUTE_CACHE_89_5 5
#define FREE_REFERENCES_LABEL_89_0 4
#define NUMBER_OF_LINKER_SECTIONS_89_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_89_4);
      goto error_not_negative_fixnum_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_negative_fixnum_5)
DEFLABEL (error_not_negative_fixnum_2)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_89_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_89_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_89_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_4 3
#define ENVIRONMENT_LABEL_90_3 9
#define DEBUGGING_LABEL_90_2 8
#define OBJECT_90_0 7
#define EXECUTE_CACHE_90_5 5
#define FREE_REFERENCES_LABEL_90_0 4
#define NUMBER_OF_LINKER_SECTIONS_90_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_90_4);
      goto guarantee_non_positive_fixnum_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_non_positive_fixnum_5)
DEFLABEL (guarantee_non_positive_fixnum_2)
  INTERRUPT_CHECK (26, LABEL_90_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 26)
    goto label_7;

DEFLABEL (label_6)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_5]));

DEFLABEL (label_7)
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) > 0)
    goto label_6;
  Rvl = (current_block [OBJECT_90_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

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
fixart_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto error_not_non_positive_fixnum_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_non_positive_fixnum_5)
DEFLABEL (error_not_non_positive_fixnum_2)
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
#define ENVIRONMENT_LABEL_92_3 9
#define DEBUGGING_LABEL_92_2 8
#define OBJECT_92_0 7
#define EXECUTE_CACHE_92_5 5
#define FREE_REFERENCES_LABEL_92_0 4
#define NUMBER_OF_LINKER_SECTIONS_92_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_92_4);
      goto guarantee_non_negative_fixnum_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_non_negative_fixnum_5)
DEFLABEL (guarantee_non_negative_fixnum_2)
  INTERRUPT_CHECK (26, LABEL_92_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 26)
    goto label_7;

DEFLABEL (label_6)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_5]));

DEFLABEL (label_7)
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) < 0)
    goto label_6;
  Rvl = (current_block [OBJECT_92_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_93_4 3
#define ENVIRONMENT_LABEL_93_3 11
#define DEBUGGING_LABEL_93_2 10
#define OBJECT_93_2 9
#define OBJECT_93_1 8
#define OBJECT_93_0 7
#define EXECUTE_CACHE_93_5 5
#define FREE_REFERENCES_LABEL_93_0 4
#define NUMBER_OF_LINKER_SECTIONS_93_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_93 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_93_4);
      goto error_not_non_negative_fixnum_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_non_negative_fixnum_5)
DEFLABEL (error_not_non_negative_fixnum_2)
  INTERRUPT_CHECK (26, LABEL_93_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_93_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_93_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_93_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_94_4 3
#define ENVIRONMENT_LABEL_94_3 10
#define DEBUGGING_LABEL_94_2 9
#define OBJECT_94_1 8
#define OBJECT_94_0 7
#define EXECUTE_CACHE_94_5 5
#define FREE_REFERENCES_LABEL_94_0 4
#define NUMBER_OF_LINKER_SECTIONS_94_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_94 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_94_4);
      goto guarantee_index_fixnum_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_index_fixnum_4)
DEFLABEL (guarantee_index_fixnum_1)
  INTERRUPT_CHECK (26, LABEL_94_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (INDEX_FIXNUM_P (Wrd5.Obj))
    goto label_5;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_94_1]);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_5]));

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_94_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_95_5 3
#define LABEL_95_4 5
#define ENVIRONMENT_LABEL_95_3 14
#define DEBUGGING_LABEL_95_2 13
#define OBJECT_95_1 12
#define OBJECT_95_0 11
#define EXECUTE_CACHE_95_7 7
#define EXECUTE_CACHE_95_6 9
#define FREE_REFERENCES_LABEL_95_0 6
#define NUMBER_OF_LINKER_SECTIONS_95_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_95 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_95_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_95_4);
      goto guarantee_limited_index_fixnum_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_limited_index_fixnum_6)
DEFLABEL (guarantee_limited_index_fixnum_3)
  INTERRUPT_CHECK (26, LABEL_95_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (INDEX_FIXNUM_P (Wrd5.Obj))
    goto label_8;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_95_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_95_5);

DEFLABEL (label_8)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if ((Wrd13.Lng) < (Wrd15.Lng))
    goto label_7;
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_6]));

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_95_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_96_4 3
#define ENVIRONMENT_LABEL_96_3 6
#define DEBUGGING_LABEL_96_2 5
#define OBJECT_96_0 4
#define FREE_REFERENCES_LABEL_96_0 4
#define NUMBER_OF_LINKER_SECTIONS_96_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_96 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_96_4);
      goto fix____1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix____4)
DEFLABEL (fix____1)
  INTERRUPT_CHECK (26, LABEL_96_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) > (Wrd8.Lng))
    goto label_6;
  Rvl = (current_block [OBJECT_96_0]);
  goto label_5;

DEFLABEL (label_6)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_97_4 3
#define ENVIRONMENT_LABEL_97_3 6
#define DEBUGGING_LABEL_97_2 5
#define OBJECT_97_0 4
#define FREE_REFERENCES_LABEL_97_0 4
#define NUMBER_OF_LINKER_SECTIONS_97_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_97 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto fix____1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix____4)
DEFLABEL (fix____1)
  INTERRUPT_CHECK (26, LABEL_97_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_6;
  Rvl = (current_block [OBJECT_97_0]);
  goto label_5;

DEFLABEL (label_6)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_98_4 3
#define LABEL_98_5 5
#define ENVIRONMENT_LABEL_98_3 9
#define DEBUGGING_LABEL_98_2 8
#define OBJECT_98_1 7
#define OBJECT_98_0 6
#define FREE_REFERENCES_LABEL_98_0 6
#define NUMBER_OF_LINKER_SECTIONS_98_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_98 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd22;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_98_4);
      goto int____1;

    case 1:
      current_block = (Rpc - LABEL_98_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (int____5)
DEFLABEL (int____1)
  INTERRUPT_CHECK (26, LABEL_98_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_10;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_10;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd20.Lng) > (Wrd22.Lng))
    goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_98_1]);
  goto label_6;

DEFLABEL (label_7)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_6)
DEFLABEL (label_9)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_0]), 2);

DEFLABEL (label_3)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_99_4 3
#define LABEL_99_5 5
#define ENVIRONMENT_LABEL_99_3 9
#define DEBUGGING_LABEL_99_2 8
#define OBJECT_99_1 7
#define OBJECT_99_0 6
#define FREE_REFERENCES_LABEL_99_0 6
#define NUMBER_OF_LINKER_SECTIONS_99_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_99 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd22;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_99_4);
      goto int____1;

    case 1:
      current_block = (Rpc - LABEL_99_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (int____5)
DEFLABEL (int____1)
  INTERRUPT_CHECK (26, LABEL_99_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_10;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_10;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd20.Lng) < (Wrd22.Lng))
    goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_99_1]);
  goto label_6;

DEFLABEL (label_7)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_6)
DEFLABEL (label_9)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_0]), 2);

DEFLABEL (label_3)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_100_4 3
#define ENVIRONMENT_LABEL_100_3 5
#define DEBUGGING_LABEL_100_2 4
#define FREE_REFERENCES_LABEL_100_0 4
#define NUMBER_OF_LINKER_SECTIONS_100_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_100 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_100_4);
      goto fix_min_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix_min_4)
DEFLABEL (fix_min_1)
  INTERRUPT_CHECK (26, LABEL_100_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_6;
  Rvl = (Wrd7.Obj);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (Wrd5.Obj);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_101_4 3
#define ENVIRONMENT_LABEL_101_3 5
#define DEBUGGING_LABEL_101_2 4
#define FREE_REFERENCES_LABEL_101_0 4
#define NUMBER_OF_LINKER_SECTIONS_101_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_101 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_101_4);
      goto fix_max_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix_max_4)
DEFLABEL (fix_max_1)
  INTERRUPT_CHECK (26, LABEL_101_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) > (Wrd8.Lng))
    goto label_6;
  Rvl = (Wrd7.Obj);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (Wrd5.Obj);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_102_4 3
#define LABEL_102_5 5
#define ENVIRONMENT_LABEL_102_3 10
#define DEBUGGING_LABEL_102_2 9
#define OBJECT_102_2 8
#define OBJECT_102_1 7
#define OBJECT_102_0 6
#define FREE_REFERENCES_LABEL_102_0 6
#define NUMBER_OF_LINKER_SECTIONS_102_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_102 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl13;
  double Dbl11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  double Dbl8;
  double Dbl6;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_102_4);
      goto flo____1;

    case 1:
      current_block = (Rpc - LABEL_102_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo____5)
DEFLABEL (flo____1)
  INTERRUPT_CHECK (26, LABEL_102_4);
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 6))
    goto label_12;
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 6))
    goto label_12;
  Dbl6 = (FLONUM_TO_DOUBLE (Wrd24.Obj));
  Dbl8 = (FLONUM_TO_DOUBLE (Wrd22.Obj));
  if (Dbl6 < Dbl8)
    goto label_9;

DEFLABEL (label_11)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 6)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_1]), 2);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 6))
    goto label_6;
  Dbl11 = (FLONUM_TO_DOUBLE (Wrd18.Obj));
  Dbl13 = (FLONUM_TO_DOUBLE (Wrd16.Obj));
  if (Dbl11 == Dbl13)
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_102_2]);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_5]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_0]), 2);

DEFLABEL (label_3)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_103_4 3
#define LABEL_103_5 5
#define ENVIRONMENT_LABEL_103_3 10
#define DEBUGGING_LABEL_103_2 9
#define OBJECT_103_2 8
#define OBJECT_103_1 7
#define OBJECT_103_0 6
#define FREE_REFERENCES_LABEL_103_0 6
#define NUMBER_OF_LINKER_SECTIONS_103_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_103 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl13;
  double Dbl11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  double Dbl8;
  double Dbl6;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_103_4);
      goto flo____1;

    case 1:
      current_block = (Rpc - LABEL_103_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo____5)
DEFLABEL (flo____1)
  INTERRUPT_CHECK (26, LABEL_103_4);
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 6))
    goto label_12;
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 6))
    goto label_12;
  Dbl6 = (FLONUM_TO_DOUBLE (Wrd24.Obj));
  Dbl8 = (FLONUM_TO_DOUBLE (Wrd22.Obj));
  if (Dbl6 > Dbl8)
    goto label_9;

DEFLABEL (label_11)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 6)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_1]), 2);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 6))
    goto label_6;
  Dbl11 = (FLONUM_TO_DOUBLE (Wrd18.Obj));
  Dbl13 = (FLONUM_TO_DOUBLE (Wrd16.Obj));
  if (Dbl11 == Dbl13)
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_103_2]);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_5]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_0]), 2);

DEFLABEL (label_3)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_104_4 3
#define LABEL_104_5 5
#define LABEL_104_6 7
#define LABEL_104_7 9
#define LABEL_104_8 11
#define ENVIRONMENT_LABEL_104_3 22
#define DEBUGGING_LABEL_104_2 21
#define OBJECT_104_3 20
#define OBJECT_104_2 19
#define OBJECT_104_1 18
#define OBJECT_104_0 17
#define EXECUTE_CACHE_104_10 13
#define EXECUTE_CACHE_104_9 15
#define FREE_REFERENCES_LABEL_104_0 12
#define NUMBER_OF_LINKER_SECTIONS_104_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_104 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  double Dbl16;
  double Dbl14;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  double Dbl12;
  double Dbl10;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd8;
  double Dbl8;
  double Dbl6;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd50;
  machine_word Wrd49;
  INVOKE_INTERFACE_DECLS
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
      goto flo_min_5;

    case 1:
      current_block = (Rpc - LABEL_104_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_104_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_104_7);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_104_8);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_min_11)
DEFLABEL (flo_min_5)
  INTERRUPT_CHECK (26, LABEL_104_4);
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 6))
    goto label_23;
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 6))
    goto label_23;
  Dbl6 = (FLONUM_TO_DOUBLE (Wrd49.Obj));
  Dbl8 = (FLONUM_TO_DOUBLE (Wrd47.Obj));
  if (Dbl6 < Dbl8)
    goto label_16;

DEFLABEL (label_22)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 6))
    goto label_21;
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 6))
    goto label_21;
  Dbl10 = (FLONUM_TO_DOUBLE (Wrd37.Obj));
  Dbl12 = (FLONUM_TO_DOUBLE (Wrd35.Obj));
  if (Dbl10 > Dbl12)
    goto label_20;

DEFLABEL (label_19)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 6))
    goto label_18;
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 6))
    goto label_18;
  Dbl14 = (FLONUM_TO_DOUBLE (Wrd25.Obj));
  Dbl16 = (FLONUM_TO_DOUBLE (Wrd23.Obj));
  if (Dbl14 == Dbl16)
    goto label_16;

DEFLABEL (label_15)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_8]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_104_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd7.Obj) = (Rsp [0]);
  goto label_12;

DEFLABEL (label_13)
  (Wrd7.Obj) = (Rsp [1]);

DEFLABEL (label_12)
DEFLABEL (label_14)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_104_3]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (label_16)
  Rvl = (Rsp [0]);

DEFLABEL (label_17)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_7]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_2]), 2);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  goto label_16;

DEFLABEL (label_20)
  Rvl = (Rsp [1]);
  goto label_17;

DEFLABEL (label_21)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_6]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_1]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  goto label_20;

DEFLABEL (label_23)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_5]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_0]), 2);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_105_4 3
#define LABEL_105_5 5
#define LABEL_105_6 7
#define LABEL_105_7 9
#define LABEL_105_8 11
#define ENVIRONMENT_LABEL_105_3 22
#define DEBUGGING_LABEL_105_2 21
#define OBJECT_105_3 20
#define OBJECT_105_2 19
#define OBJECT_105_1 18
#define OBJECT_105_0 17
#define EXECUTE_CACHE_105_10 13
#define EXECUTE_CACHE_105_9 15
#define FREE_REFERENCES_LABEL_105_0 12
#define NUMBER_OF_LINKER_SECTIONS_105_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_105 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  double Dbl16;
  double Dbl14;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  double Dbl12;
  double Dbl10;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd8;
  double Dbl8;
  double Dbl6;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd50;
  machine_word Wrd49;
  INVOKE_INTERFACE_DECLS
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
      goto flo_max_5;

    case 1:
      current_block = (Rpc - LABEL_105_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_105_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_105_7);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_105_8);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_max_11)
DEFLABEL (flo_max_5)
  INTERRUPT_CHECK (26, LABEL_105_4);
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 6))
    goto label_23;
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 6))
    goto label_23;
  Dbl6 = (FLONUM_TO_DOUBLE (Wrd49.Obj));
  Dbl8 = (FLONUM_TO_DOUBLE (Wrd47.Obj));
  if (Dbl6 < Dbl8)
    goto label_16;

DEFLABEL (label_22)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 6))
    goto label_21;
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 6))
    goto label_21;
  Dbl10 = (FLONUM_TO_DOUBLE (Wrd37.Obj));
  Dbl12 = (FLONUM_TO_DOUBLE (Wrd35.Obj));
  if (Dbl10 > Dbl12)
    goto label_20;

DEFLABEL (label_19)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 6))
    goto label_18;
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 6))
    goto label_18;
  Dbl14 = (FLONUM_TO_DOUBLE (Wrd25.Obj));
  Dbl16 = (FLONUM_TO_DOUBLE (Wrd23.Obj));
  if (Dbl14 == Dbl16)
    goto label_16;

DEFLABEL (label_15)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_8]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_105_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd7.Obj) = (Rsp [0]);
  goto label_12;

DEFLABEL (label_13)
  (Wrd7.Obj) = (Rsp [1]);

DEFLABEL (label_12)
DEFLABEL (label_14)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_105_3]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_10]));

DEFLABEL (label_16)
  Rvl = (Rsp [1]);

DEFLABEL (label_17)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_7]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_2]), 2);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  goto label_16;

DEFLABEL (label_20)
  Rvl = (Rsp [0]);
  goto label_17;

DEFLABEL (label_21)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_6]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_1]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  goto label_20;

DEFLABEL (label_23)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_5]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_0]), 2);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_106_4 3
#define LABEL_106_5 5
#define LABEL_106_6 7
#define LABEL_106_9 9
#define LABEL_106_10 11
#define LABEL_106_7 13
#define ENVIRONMENT_LABEL_106_3 28
#define DEBUGGING_LABEL_106_2 27
#define OBJECT_106_7 26
#define OBJECT_106_6 25
#define OBJECT_106_5 24
#define OBJECT_106_4 23
#define OBJECT_106_3 22
#define OBJECT_106_2 21
#define OBJECT_106_1 20
#define OBJECT_106_0 19
#define EXECUTE_CACHE_106_11 15
#define EXECUTE_CACHE_106_8 17
#define FREE_REFERENCES_LABEL_106_0 14
#define NUMBER_OF_LINKER_SECTIONS_106_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_106 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd41;
  double Dbl33;
  double Dbl32;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd18;
  double Dbl23;
  double Dbl22;
  machine_word Wrd21;
  double Dbl20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd53;
  machine_word Wrd50;
  double Dbl12;
  machine_word Wrd11;
  double Dbl10;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd8;
  double Dbl8;
  machine_word Wrd7;
  double Dbl6;
  machine_word Wrd56;
  machine_word Wrd55;
  INVOKE_INTERFACE_DECLS
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
      goto flo_finiteP_5;

    case 1:
      current_block = (Rpc - LABEL_106_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_106_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_106_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_106_10);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_106_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_finiteP_12)
DEFLABEL (flo_finiteP_5)
  INTERRUPT_CHECK (26, LABEL_106_4);
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 6))
    goto label_25;
  Dbl6 = (FLONUM_TO_DOUBLE (Wrd55.Obj));
  (Wrd7.Obj) = (current_block [OBJECT_106_0]);
  Dbl8 = (FLONUM_TO_DOUBLE (Wrd7.Obj));
  if (Dbl6 > Dbl8)
    goto label_15;

DEFLABEL (label_24)
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 6))
    goto label_23;
  Dbl10 = (FLONUM_TO_DOUBLE (Wrd47.Obj));
  (Wrd11.Obj) = (current_block [OBJECT_106_2]);
  Dbl12 = (FLONUM_TO_DOUBLE (Wrd11.Obj));
  if (Dbl10 < Dbl12)
    goto label_15;

DEFLABEL (label_14)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_106_0]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_106_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_106_2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106_11]));

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 6))
    goto label_22;
  Dbl20 = (FLONUM_TO_DOUBLE (Wrd24.Obj));
  (Wrd21.Obj) = (current_block [OBJECT_106_4]);
  Dbl22 = (FLONUM_TO_DOUBLE (Wrd21.Obj));
  Dbl23 = (Dbl20 / Dbl22);
  INLINE_DOUBLE_TO_FLONUM (Dbl23, (Wrd18.Obj));

DEFLABEL (label_21)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 6))
    goto label_20;
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd38.uLng) == 6))
    goto label_20;
  Dbl32 = (FLONUM_TO_DOUBLE (Wrd39.Obj));
  Dbl33 = (FLONUM_TO_DOUBLE (Wrd18.Obj));
  if (Dbl32 == Dbl33)
    goto label_17;

DEFLABEL (label_18)
  Rvl = (current_block [OBJECT_106_7]);
  goto label_16;

DEFLABEL (label_17)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_16)
DEFLABEL (label_19)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_10]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_6]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_17;

DEFLABEL (label_22)
  (Wrd27.Obj) = (current_block [OBJECT_106_4]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_5]), 2);

DEFLABEL (label_7)
  (Wrd18.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_23)
  (Wrd50.Obj) = (current_block [OBJECT_106_2]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_6]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_3]), 2);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_15;

DEFLABEL (label_25)
  (Wrd58.Obj) = (current_block [OBJECT_106_0]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_5]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_1]), 2);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_107_4 3
#define LABEL_107_5 5
#define LABEL_107_6 7
#define LABEL_107_7 9
#define LABEL_107_8 11
#define ENVIRONMENT_LABEL_107_3 18
#define DEBUGGING_LABEL_107_2 17
#define OBJECT_107_4 16
#define OBJECT_107_3 15
#define OBJECT_107_2 14
#define OBJECT_107_1 13
#define OBJECT_107_0 12
#define FREE_REFERENCES_LABEL_107_0 12
#define NUMBER_OF_LINKER_SECTIONS_107_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_107 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl48;
  double Dbl46;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd31;
  double Dbl36;
  double Dbl35;
  machine_word Wrd34;
  double Dbl33;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd18;
  double Dbl23;
  double Dbl22;
  machine_word Wrd21;
  double Dbl20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd62;
  double Dbl12;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd68;
  double Dbl8;
  double Dbl6;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd67;
  machine_word Wrd66;
  INVOKE_INTERFACE_DECLS
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
      goto flo_eqvP_6;

    case 1:
      current_block = (Rpc - LABEL_107_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_107_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_107_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_107_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_eqvP_13)
DEFLABEL (flo_eqvP_6)
  INTERRUPT_CHECK (26, LABEL_107_4);
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 6))
    goto label_29;
  (Wrd64.Obj) = (Rsp [1]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 6))
    goto label_29;
  Dbl6 = (FLONUM_TO_DOUBLE (Wrd66.Obj));
  Dbl8 = (FLONUM_TO_DOUBLE (Wrd64.Obj));
  if (Dbl6 == Dbl8)
    goto label_16;

DEFLABEL (label_15)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_14)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 6))
    goto label_28;
  Dbl12 = (FLONUM_TO_DOUBLE (Wrd57.Obj));
  if (Dbl12 == 0.0)
    goto label_18;

DEFLABEL (label_19)
  (Wrd13.Obj) = (current_block [OBJECT_107_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto label_17;

DEFLABEL (label_18)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_17)
DEFLABEL (label_27)
  (Wrd14.Obj) = (Rsp [0]);
  if ((Wrd14.Obj) == ((SCHEME_OBJECT) 0))
    goto label_20;
  Rvl = (Wrd14.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 6))
    goto label_26;
  Dbl20 = (FLONUM_TO_DOUBLE (Wrd24.Obj));
  (Wrd21.Obj) = (current_block [OBJECT_107_3]);
  Dbl22 = (FLONUM_TO_DOUBLE (Wrd21.Obj));
  Dbl23 = (DOUBLE_ATAN2 (Dbl20, Dbl22));
  INLINE_DOUBLE_TO_FLONUM (Dbl23, (Wrd18.Obj));

DEFLABEL (label_25)
  (Rsp [1]) = (Wrd18.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 6))
    goto label_24;
  Dbl33 = (FLONUM_TO_DOUBLE (Wrd37.Obj));
  (Wrd34.Obj) = (current_block [OBJECT_107_3]);
  Dbl35 = (FLONUM_TO_DOUBLE (Wrd34.Obj));
  Dbl36 = (DOUBLE_ATAN2 (Dbl33, Dbl35));
  INLINE_DOUBLE_TO_FLONUM (Dbl36, (Wrd31.Obj));

DEFLABEL (label_23)
  (Rsp [2]) = (Wrd31.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 6)
    goto label_22;

DEFLABEL (label_21)
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_0]), 2);

DEFLABEL (label_22)
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 6))
    goto label_21;
  Dbl46 = (FLONUM_TO_DOUBLE (Wrd53.Obj));
  Dbl48 = (FLONUM_TO_DOUBLE (Wrd51.Obj));
  if (! (Dbl46 == Dbl48))
    goto label_15;
  Rvl = (current_block [OBJECT_107_2]);
  goto label_14;

DEFLABEL (label_24)
  (Wrd40.Obj) = (current_block [OBJECT_107_3]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_8]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_4]), 2);

DEFLABEL (label_9)
  (Wrd31.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd27.Obj) = (current_block [OBJECT_107_3]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_7]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_4]), 2);

DEFLABEL (label_8)
  (Wrd18.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_6]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_1]), 1);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  goto label_18;

DEFLABEL (label_29)
  (Wrd68.Obj) = (Rsp [0]);
  (Wrd69.Obj) = (Rsp [1]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_5]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_0]), 2);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_108_4 3
#define ENVIRONMENT_LABEL_108_3 7
#define DEBUGGING_LABEL_108_2 6
#define OBJECT_108_1 5
#define OBJECT_108_0 4
#define FREE_REFERENCES_LABEL_108_0 4
#define NUMBER_OF_LINKER_SECTIONS_108_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_108 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_108_4);
      goto int___flonum_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (int___flonum_3)
DEFLABEL (int___flonum_0)
  INTERRUPT_CHECK (26, LABEL_108_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_108_0]);
  (Rsp [1]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_1]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_109_4 3
#define LABEL_109_5 5
#define LABEL_109_7 7
#define ENVIRONMENT_LABEL_109_3 17
#define DEBUGGING_LABEL_109_2 16
#define OBJECT_109_0 15
#define EXECUTE_CACHE_109_9 9
#define EXECUTE_CACHE_109_8 11
#define EXECUTE_CACHE_109_6 13
#define FREE_REFERENCES_LABEL_109_0 8
#define NUMBER_OF_LINKER_SECTIONS_109_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fixart_so_code_109 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_109_4);
      goto Z___flonum_2;

    case 1:
      current_block = (Rpc - LABEL_109_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_109_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___flonum_5)
DEFLABEL (Z___flonum_2)
  INTERRUPT_CHECK (26, LABEL_109_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_109_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_109_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_109_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_109_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_109_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_109_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5 3
#define LABEL_6 5
#define LABEL_7 7
#define ENVIRONMENT_LABEL_3 16
#define DEBUGGING_LABEL_2 15
#define PURIFICATION_ROOT 14
#define OBJECT_2 13
#define OBJECT_1 12
#define OBJECT_0 11
#define GLOBAL_EXECUTE_CACHE_4 9
#define FREE_REFERENCES_LABEL_0 8
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
fixart_so_3e0a5da7deddaebf (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_5);
      goto label_4;

    case 1:
      current_block = (Rpc - LABEL_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_7);
      goto expression_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_1)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_6])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_5)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_4)
  {
    static const short sections [] =
      {
	0,
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
    if (counter > 109)
      goto label_3;
    blocks = (current_block [OBJECT_2]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_5])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_3)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1]);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_4]));

INVOKE_INTERFACE_TARGET_4
}

static const struct liarc_code_S arr_decl_fixart_so_3e0a5da7deddaebf [109] =
  {
    { "fixart_so_code_1", 1, fixart_so_code_1 },
    { "fixart_so_code_2", 1, fixart_so_code_2 },
    { "fixart_so_code_3", 1, fixart_so_code_3 },
    { "fixart_so_code_4", 1, fixart_so_code_4 },
    { "fixart_so_code_5", 1, fixart_so_code_5 },
    { "fixart_so_code_6", 1, fixart_so_code_6 },
    { "fixart_so_code_7", 1, fixart_so_code_7 },
    { "fixart_so_code_8", 1, fixart_so_code_8 },
    { "fixart_so_code_9", 1, fixart_so_code_9 },
    { "fixart_so_code_10", 1, fixart_so_code_10 },
    { "fixart_so_code_11", 1, fixart_so_code_11 },
    { "fixart_so_code_12", 1, fixart_so_code_12 },
    { "fixart_so_code_13", 1, fixart_so_code_13 },
    { "fixart_so_code_14", 1, fixart_so_code_14 },
    { "fixart_so_code_15", 1, fixart_so_code_15 },
    { "fixart_so_code_16", 1, fixart_so_code_16 },
    { "fixart_so_code_17", 1, fixart_so_code_17 },
    { "fixart_so_code_18", 1, fixart_so_code_18 },
    { "fixart_so_code_19", 1, fixart_so_code_19 },
    { "fixart_so_code_20", 1, fixart_so_code_20 },
    { "fixart_so_code_21", 1, fixart_so_code_21 },
    { "fixart_so_code_22", 1, fixart_so_code_22 },
    { "fixart_so_code_23", 1, fixart_so_code_23 },
    { "fixart_so_code_24", 1, fixart_so_code_24 },
    { "fixart_so_code_25", 1, fixart_so_code_25 },
    { "fixart_so_code_26", 1, fixart_so_code_26 },
    { "fixart_so_code_27", 1, fixart_so_code_27 },
    { "fixart_so_code_28", 1, fixart_so_code_28 },
    { "fixart_so_code_29", 1, fixart_so_code_29 },
    { "fixart_so_code_30", 1, fixart_so_code_30 },
    { "fixart_so_code_31", 1, fixart_so_code_31 },
    { "fixart_so_code_32", 1, fixart_so_code_32 },
    { "fixart_so_code_33", 1, fixart_so_code_33 },
    { "fixart_so_code_34", 1, fixart_so_code_34 },
    { "fixart_so_code_35", 1, fixart_so_code_35 },
    { "fixart_so_code_36", 1, fixart_so_code_36 },
    { "fixart_so_code_37", 1, fixart_so_code_37 },
    { "fixart_so_code_38", 1, fixart_so_code_38 },
    { "fixart_so_code_39", 1, fixart_so_code_39 },
    { "fixart_so_code_40", 1, fixart_so_code_40 },
    { "fixart_so_code_41", 1, fixart_so_code_41 },
    { "fixart_so_code_42", 1, fixart_so_code_42 },
    { "fixart_so_code_43", 1, fixart_so_code_43 },
    { "fixart_so_code_44", 1, fixart_so_code_44 },
    { "fixart_so_code_45", 1, fixart_so_code_45 },
    { "fixart_so_code_46", 1, fixart_so_code_46 },
    { "fixart_so_code_47", 1, fixart_so_code_47 },
    { "fixart_so_code_48", 1, fixart_so_code_48 },
    { "fixart_so_code_49", 1, fixart_so_code_49 },
    { "fixart_so_code_50", 1, fixart_so_code_50 },
    { "fixart_so_code_51", 1, fixart_so_code_51 },
    { "fixart_so_code_52", 1, fixart_so_code_52 },
    { "fixart_so_code_53", 1, fixart_so_code_53 },
    { "fixart_so_code_54", 1, fixart_so_code_54 },
    { "fixart_so_code_55", 1, fixart_so_code_55 },
    { "fixart_so_code_56", 1, fixart_so_code_56 },
    { "fixart_so_code_57", 1, fixart_so_code_57 },
    { "fixart_so_code_58", 1, fixart_so_code_58 },
    { "fixart_so_code_59", 1, fixart_so_code_59 },
    { "fixart_so_code_60", 1, fixart_so_code_60 },
    { "fixart_so_code_61", 1, fixart_so_code_61 },
    { "fixart_so_code_62", 1, fixart_so_code_62 },
    { "fixart_so_code_63", 1, fixart_so_code_63 },
    { "fixart_so_code_64", 1, fixart_so_code_64 },
    { "fixart_so_code_65", 1, fixart_so_code_65 },
    { "fixart_so_code_66", 1, fixart_so_code_66 },
    { "fixart_so_code_67", 1, fixart_so_code_67 },
    { "fixart_so_code_68", 1, fixart_so_code_68 },
    { "fixart_so_code_69", 1, fixart_so_code_69 },
    { "fixart_so_code_70", 1, fixart_so_code_70 },
    { "fixart_so_code_71", 1, fixart_so_code_71 },
    { "fixart_so_code_72", 1, fixart_so_code_72 },
    { "fixart_so_code_73", 1, fixart_so_code_73 },
    { "fixart_so_code_74", 1, fixart_so_code_74 },
    { "fixart_so_code_75", 1, fixart_so_code_75 },
    { "fixart_so_code_76", 1, fixart_so_code_76 },
    { "fixart_so_code_77", 1, fixart_so_code_77 },
    { "fixart_so_code_78", 1, fixart_so_code_78 },
    { "fixart_so_code_79", 1, fixart_so_code_79 },
    { "fixart_so_code_80", 1, fixart_so_code_80 },
    { "fixart_so_code_81", 1, fixart_so_code_81 },
    { "fixart_so_code_82", 1, fixart_so_code_82 },
    { "fixart_so_code_83", 1, fixart_so_code_83 },
    { "fixart_so_code_84", 1, fixart_so_code_84 },
    { "fixart_so_code_85", 1, fixart_so_code_85 },
    { "fixart_so_code_86", 1, fixart_so_code_86 },
    { "fixart_so_code_87", 1, fixart_so_code_87 },
    { "fixart_so_code_88", 1, fixart_so_code_88 },
    { "fixart_so_code_89", 1, fixart_so_code_89 },
    { "fixart_so_code_90", 1, fixart_so_code_90 },
    { "fixart_so_code_91", 1, fixart_so_code_91 },
    { "fixart_so_code_92", 1, fixart_so_code_92 },
    { "fixart_so_code_93", 1, fixart_so_code_93 },
    { "fixart_so_code_94", 1, fixart_so_code_94 },
    { "fixart_so_code_95", 2, fixart_so_code_95 },
    { "fixart_so_code_96", 1, fixart_so_code_96 },
    { "fixart_so_code_97", 1, fixart_so_code_97 },
    { "fixart_so_code_98", 2, fixart_so_code_98 },
    { "fixart_so_code_99", 2, fixart_so_code_99 },
    { "fixart_so_code_100", 1, fixart_so_code_100 },
    { "fixart_so_code_101", 1, fixart_so_code_101 },
    { "fixart_so_code_102", 2, fixart_so_code_102 },
    { "fixart_so_code_103", 2, fixart_so_code_103 },
    { "fixart_so_code_104", 5, fixart_so_code_104 },
    { "fixart_so_code_105", 5, fixart_so_code_105 },
    { "fixart_so_code_106", 6, fixart_so_code_106 },
    { "fixart_so_code_107", 5, fixart_so_code_107 },
    { "fixart_so_code_108", 1, fixart_so_code_108 },
    { "fixart_so_code_109", 3, fixart_so_code_109 }
  };

int
decl_fixart_so_3e0a5da7deddaebf (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_fixart_so_3e0a5da7deddaebf);
  return (0);
}

DECLARE_COMPILED_CODE ("fixart.so", 3, decl_fixart_so_3e0a5da7deddaebf, fixart_so_3e0a5da7deddaebf)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_fixart_so_data_3e0a5da7deddaebf [5542] =
  "\x89\x01\x7a\xb0\x0d\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x07\x22\x29"
  "\x21\x9d\x2b\xb9\x1d\xb0\x82\x88\x07\x22\x29\x21\x9d\x2b\xba\x1d"
  "\xb0\x83\x88\x07\x22\x29\x21\x9d\x2b\xbb\x1d\xb0\x84\x88\x07\x22"
  "\x29\x21\x9d\x2b\xbc\x1d\xb0\x85\x88\x07\x22\x29\x21\x9d\x2b\xbd"
  "\x1d\xb0\x86\x88\x07\x22\x29\x21\x9d\x2b\xbe\x1d\xb0\x02\x88\x07"
  "\x22\x29\x21\x9d\x2b\xbf\x1d\xb0\x02\x88\x07\x22\x29\x21\x9d\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88"
  "\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c"
  "\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x22\x29"
  "\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0"
  "\x02\x88\xc2\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21"
  "\x9c\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02"
  "\x88\xc2\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c"
  "\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88"
  "\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c"
  "\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x22\x29"
  "\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\xc1\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\xc1\x07\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc1"
  "\x07\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc1\x07\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\xc2\x07\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\xc2\x1c\x07\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\xc2\x1c\x07\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc1\x22\x29"
  "\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\xc1\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x22"
  "\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x22\x29\x21\x9d\x2b\x1c"
  "\x1d\xb0\x02\x88\xc2\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2"
  "\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x22\x29\x21\x9d\x2b"
  "\x1c\x1d\xb0\x02\x88\xc2\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x07\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc1\x07\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\xc1\x07\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\xc2\x1c\x07\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x07"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x07\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\xc2\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\xc2\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x22\x29"
  "\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x22\x29\x21\x9d\x2b\x1c"
  "\x1d\xb0\x02\x88\xc2\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1"
  "\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x22\x29\x21\x9d\x2b"
  "\x1c\x1d\xb0\x02\x88\xc1\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88"
  "\xc1\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x02\x88\xc1\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02"
  "\x88\xc1\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x22\x29\x21"
  "\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\xc1\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x22\x29"
  "\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\xc2\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1"
  "\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x22\x29\x21\x9d\x2b"
  "\x1c\x1d\xb0\x02\x88\xc1\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88"
  "\xc1\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x02\x88\xc1\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02"
  "\x88\xc1\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x22\x29\x21"
  "\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\xc1\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x22\x29"
  "\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\xc2\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc3\x1d"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x23\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x0d\x1c\x23"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x22\x29\x21\x9d\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x07\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x06\x1d\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x06\x1d\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x1c\x1d\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1d\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0"
  "\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x1b\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x1b\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b\x1b\x1b\x28"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b\x1b\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x07\x1b\x1b\x09\x1b\x09\x1b\x09\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x09\x07\x1b\x1b\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x82\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x0d\x28\x0d\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xb8\x17\x1c\x88\x1b"
  "\xb0\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb6\x2a"
  "\xb5\x2a\xb4\x2a\xb3\x2a\xb2\x2a\xb1\x2a\x17\x1b\x0d\x0d\x1b\x1b"
  "\x1b\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x0d\x1b\x0d\x1b"
  "\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x17\x28\x0d\x26\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68"
  "\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e"
  "\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f"
  "\x66\x69\x78\x61\x72\x74\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72"
  "\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02"
  "\x04\x04\x83\x04\x03\x02\x05\x04\x83\x04\x03\x02\x06\x04\x83\x04"
  "\x03\x02\x07\x04\x83\x04\x03\x02\x08\x04\x83\x04\x03\x02\x09\x04"
  "\x83\x04\x03\x02\x08\x0a\x04\x84\x06\x03\x02\x09\x0b\x04\x84\x06"
  "\x03\x09\x02\x0a\x0c\x04\x84\x06\x03\x0a\x02\x0b\x0d\x04\x83\x04"
  "\x03\x0b\x02\x0c\x0e\x04\x83\x04\x03\x0c\x02\x0d\x0f\x04\x84\x06"
  "\x03\x0d\x02\x0e\x10\x04\x84\x06\x03\x0e\x02\x0f\x11\x04\x84\x06"
  "\x03\x0f\x02\x10\x0e\x64\x69\x76\x69\x64\x65\x2d\x66\x69\x78\x6e"
  "\x75\x6d\x12\x04\x84\x06\x03\x10\x02\x11\x13\x04\x84\x06\x03\x11"
  "\x02\x12\x14\x04\x84\x06\x03\x12\x02\x13\x0b\x67\x63\x64\x2d\x66"
  "\x69\x78\x6e\x75\x6d\x15\x04\x84\x06\x03\x13\x02\x14\x16\x04\x84"
  "\x06\x03\x14\x02\x15\x17\x04\x84\x06\x03\x15\x02\x16\x18\x04\x84"
  "\x06\x03\x16\x02\x17\x19\x04\x84\x06\x03\x17\x02\x18\x1a\x04\x83"
  "\x04\x03\x18\x02\x19\x1b\x04\x84\x06\x03\x19\x02\x1a\x09\x69\x6e"
  "\x74\x65\x67\x65\x72\x3f\x1c\x04\x83\x04\x03\x1a\x02\x1b\x0e\x69"
  "\x6e\x74\x65\x67\x65\x72\x2d\x7a\x65\x72\x6f\x3f\x1d\x04\x83\x04"
  "\x03\x1b\x02\x1c\x12\x69\x6e\x74\x65\x67\x65\x72\x2d\x70\x6f\x73"
  "\x69\x74\x69\x76\x65\x3f\x1e\x04\x83\x04\x03\x1c\x02\x1d\x12\x69"
  "\x6e\x74\x65\x67\x65\x72\x2d\x6e\x65\x67\x61\x74\x69\x76\x65\x3f"
  "\x1f\x04\x83\x04\x03\x1d\x02\x1e\x0f\x69\x6e\x74\x65\x67\x65\x72"
  "\x2d\x65\x71\x75\x61\x6c\x3f\x20\x04\x84\x06\x03\x1e\x02\x1f\x0e"
  "\x69\x6e\x74\x65\x67\x65\x72\x2d\x6c\x65\x73\x73\x3f\x1f\x21\x04"
  "\x84\x06\x03\x20\x02\x20\x11\x69\x6e\x74\x65\x67\x65\x72\x2d\x67"
  "\x72\x65\x61\x74\x65\x72\x3f\x21\x22\x04\x84\x06\x03\x22\x02\x21"
  "\x0f\x69\x6e\x74\x65\x67\x65\x72\x2d\x6e\x65\x67\x61\x74\x65\x23"
  "\x04\x83\x04\x03\x23\x02\x22\x0e\x69\x6e\x74\x65\x67\x65\x72\x2d"
  "\x61\x64\x64\x2d\x31\x24\x04\x83\x04\x03\x24\x02\x23\x13\x69\x6e"
  "\x74\x65\x67\x65\x72\x2d\x73\x75\x62\x74\x72\x61\x63\x74\x2d\x31"
  "\x25\x04\x83\x04\x03\x25\x02\x24\x0c\x69\x6e\x74\x65\x67\x65\x72"
  "\x2d\x61\x64\x64\x26\x04\x84\x06\x03\x26\x02\x25\x11\x69\x6e\x74"
  "\x65\x67\x65\x72\x2d\x73\x75\x62\x74\x72\x61\x63\x74\x27\x04\x84"
  "\x06\x03\x27\x02\x26\x11\x69\x6e\x74\x65\x67\x65\x72\x2d\x6d\x75"
  "\x6c\x74\x69\x70\x6c\x79\x28\x04\x84\x06\x03\x28\x02\x27\x0f\x69"
  "\x6e\x74\x65\x67\x65\x72\x2d\x64\x69\x76\x69\x64\x65\x29\x04\x84"
  "\x06\x03\x29\x02\x28\x11\x69\x6e\x74\x65\x67\x65\x72\x2d\x71\x75"
  "\x6f\x74\x69\x65\x6e\x74\x2a\x04\x84\x06\x03\x2a\x02\x29\x12\x69"
  "\x6e\x74\x65\x67\x65\x72\x2d\x72\x65\x6d\x61\x69\x6e\x64\x65\x72"
  "\x2b\x04\x84\x06\x03\x2b\x02\x2a\x2c\x04\x83\x04\x03\x2c\x02\x2b"
  "\x0d\x66\x6c\x6f\x6e\x75\x6d\x2d\x7a\x65\x72\x6f\x3f\x2d\x2d\x04"
  "\x83\x04\x03\x2e\x02\x2c\x11\x66\x6c\x6f\x6e\x75\x6d\x2d\x70\x6f"
  "\x73\x69\x74\x69\x76\x65\x3f\x2e\x04\x83\x04\x03\x2f\x02\x2d\x11"
  "\x66\x6c\x6f\x6e\x75\x6d\x2d\x6e\x65\x67\x61\x74\x69\x76\x65\x3f"
  "\x2f\x04\x83\x04\x03\x30\x02\x2e\x0e\x66\x6c\x6f\x6e\x75\x6d\x2d"
  "\x65\x71\x75\x61\x6c\x3f\x31\x30\x04\x84\x06\x03\x32\x02\x2f\x0d"
  "\x66\x6c\x6f\x6e\x75\x6d\x2d\x6c\x65\x73\x73\x3f\x33\x31\x04\x84"
  "\x06\x03\x34\x02\x30\x10\x66\x6c\x6f\x6e\x75\x6d\x2d\x67\x72\x65"
  "\x61\x74\x65\x72\x3f\x35\x32\x04\x84\x06\x03\x36\x02\x31\x0b\x66"
  "\x6c\x6f\x6e\x75\x6d\x2d\x61\x64\x64\x33\x04\x84\x06\x03\x37\x02"
  "\x32\x10\x66\x6c\x6f\x6e\x75\x6d\x2d\x73\x75\x62\x74\x72\x61\x63"
  "\x74\x34\x04\x84\x06\x03\x38\x02\x33\x10\x66\x6c\x6f\x6e\x75\x6d"
  "\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x79\x35\x04\x84\x06\x03\x39\x02"
  "\x34\x0e\x66\x6c\x6f\x6e\x75\x6d\x2d\x64\x69\x76\x69\x64\x65\x3a"
  "\x36\x04\x84\x06\x03\x3b\x02\x35\x0e\x66\x6c\x6f\x6e\x75\x6d\x2d"
  "\x6d\x6f\x64\x75\x6c\x6f\x37\x04\x84\x06\x03\x3c\x02\x36\x0e\x66"
  "\x6c\x6f\x6e\x75\x6d\x2d\x6e\x65\x67\x61\x74\x65\x38\x04\x83\x04"
  "\x03\x3d\x02\x37\x0b\x66\x6c\x6f\x6e\x75\x6d\x2d\x61\x62\x73\x39"
  "\x04\x83\x04\x03\x3e\x02\x38\x0b\x66\x6c\x6f\x6e\x75\x6d\x2d\x65"
  "\x78\x70\x3a\x04\x83\x04\x03\x3f\x02\x39\x0d\x66\x6c\x6f\x6e\x75"
  "\x6d\x2d\x65\x78\x70\x6d\x31\x3b\x04\x83\x04\x03\x40\x02\x3a\x0b"
  "\x66\x6c\x6f\x6e\x75\x6d\x2d\x6c\x6f\x67\x3c\x04\x83\x04\x03\x41"
  "\x02\x3b\x0d\x66\x6c\x6f\x6e\x75\x6d\x2d\x6c\x6f\x67\x31\x70\x3d"
  "\x04\x83\x04\x03\x42\x02\x3c\x0b\x66\x6c\x6f\x6e\x75\x6d\x2d\x73"
  "\x69\x6e\x3e\x04\x83\x04\x03\x43\x02\x3d\x0b\x66\x6c\x6f\x6e\x75"
  "\x6d\x2d\x63\x6f\x73\x3f\x04\x83\x04\x03\x44\x02\x3e\x0b\x66\x6c"
  "\x6f\x6e\x75\x6d\x2d\x74\x61\x6e\x40\x04\x83\x04\x03\x45\x02\x3f"
  "\x0c\x66\x6c\x6f\x6e\x75\x6d\x2d\x61\x73\x69\x6e\x41\x04\x83\x04"
  "\x03\x46\x02\x40\x0c\x66\x6c\x6f\x6e\x75\x6d\x2d\x61\x63\x6f\x73"
  "\x42\x04\x83\x04\x03\x47\x02\x41\x0c\x66\x6c\x6f\x6e\x75\x6d\x2d"
  "\x61\x74\x61\x6e\x43\x04\x83\x04\x03\x48\x02\x42\x0d\x66\x6c\x6f"
  "\x6e\x75\x6d\x2d\x61\x74\x61\x6e\x32\x49\x44\x04\x84\x06\x03\x4a"
  "\x02\x43\x0c\x66\x6c\x6f\x6e\x75\x6d\x2d\x73\x71\x72\x74\x45\x04"
  "\x83\x04\x03\x4b\x02\x44\x0c\x66\x6c\x6f\x6e\x75\x6d\x2d\x65\x78"
  "\x70\x74\x46\x04\x84\x06\x03\x4c\x02\x45\x0d\x66\x6c\x6f\x6e\x75"
  "\x6d\x2d\x66\x6c\x6f\x6f\x72\x47\x04\x83\x04\x03\x4d\x02\x46\x0f"
  "\x66\x6c\x6f\x6e\x75\x6d\x2d\x63\x65\x69\x6c\x69\x6e\x67\x48\x04"
  "\x83\x04\x03\x4e\x02\x47\x10\x66\x6c\x6f\x6e\x75\x6d\x2d\x74\x72"
  "\x75\x6e\x63\x61\x74\x65\x49\x04\x83\x04\x03\x4f\x02\x48\x0d\x66"
  "\x6c\x6f\x6e\x75\x6d\x2d\x72\x6f\x75\x6e\x64\x4a\x04\x83\x04\x03"
  "\x50\x02\x49\x14\x66\x6c\x6f\x6e\x75\x6d\x2d\x66\x6c\x6f\x6f\x72"
  "\x2d\x3e\x65\x78\x61\x63\x74\x4b\x04\x83\x04\x03\x51\x02\x4a\x16"
  "\x66\x6c\x6f\x6e\x75\x6d\x2d\x63\x65\x69\x6c\x69\x6e\x67\x2d\x3e"
  "\x65\x78\x61\x63\x74\x4c\x04\x83\x04\x03\x52\x02\x4b\x17\x66\x6c"
  "\x6f\x6e\x75\x6d\x2d\x74\x72\x75\x6e\x63\x61\x74\x65\x2d\x3e\x65"
  "\x78\x61\x63\x74\x4d\x04\x83\x04\x03\x53\x02\x4c\x14\x66\x6c\x6f"
  "\x6e\x75\x6d\x2d\x72\x6f\x75\x6e\x64\x2d\x3e\x65\x78\x61\x63\x74"
  "\x4e\x04\x83\x04\x03\x54\x02\x4d\x15\x66\x6c\x6f\x61\x74\x69\x6e"
  "\x67\x2d\x76\x65\x63\x74\x6f\x72\x2d\x63\x6f\x6e\x73\x4f\x04\x83"
  "\x04\x03\x55\x02\x4e\x17\x66\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x76"
  "\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\x50\x04\x83\x04"
  "\x03\x56\x02\x4f\x14\x66\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x76\x65"
  "\x63\x74\x6f\x72\x2d\x72\x65\x66\x51\x04\x84\x06\x03\x57\x02\x50"
  "\x15\x66\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x76\x65\x63\x74\x6f\x72"
  "\x2d\x73\x65\x74\x21\x02\x52\x04\x85\x08\x03\x58\x02\x51\x02\x04"
  "\x11\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x66\x69\x78\x6e\x75"
  "\x6d\x59\x02\x53\x04\x84\x04\x03\x0a\x5a\x02\x52\x08\x07\x66\x69"
  "\x78\x6e\x75\x6d\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e"
  "\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x5b"
  "\x02\x54\x04\x84\x04\x03\x0c\x5c\x02\x53\x55\x04\x83\x04\x03\x5d"
  "\x02\x54\x56\x04\x83\x04\x03\x5e\x02\x55\x57\x04\x83\x04\x03\x5f"
  "\x02\x56\x58\x04\x83\x04\x03\x60\x02\x57\x02\x04\x1a\x65\x72\x72"
  "\x6f\x72\x3a\x6e\x6f\x74\x2d\x70\x6f\x73\x69\x74\x69\x76\x65\x2d"
  "\x66\x69\x78\x6e\x75\x6d\x61\x02\x59\x04\x84\x04\x03\x0a\x62\x02"
  "\x58\x08\x10\x70\x6f\x73\x69\x74\x69\x76\x65\x20\x66\x69\x78\x6e"
  "\x75\x6d\x05\x5b\x02\x5a\x04\x84\x04\x03\x0c\x63\x02\x59\x02\x04"
  "\x1a\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x6e\x65\x67\x61\x74"
  "\x69\x76\x65\x2d\x66\x69\x78\x6e\x75\x6d\x64\x02\x5b\x04\x84\x04"
  "\x03\x0a\x65\x02\x5a\x08\x10\x6e\x65\x67\x61\x74\x69\x76\x65\x20"
  "\x66\x69\x78\x6e\x75\x6d\x05\x5b\x02\x5c\x04\x84\x04\x03\x0c\x66"
  "\x02\x5b\x02\x04\x1e\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x6e"
  "\x6f\x6e\x2d\x70\x6f\x73\x69\x74\x69\x76\x65\x2d\x66\x69\x78\x6e"
  "\x75\x6d\x67\x02\x5d\x04\x84\x04\x03\x0a\x68\x02\x5c\x08\x14\x6e"
  "\x6f\x6e\x2d\x70\x6f\x73\x69\x74\x69\x76\x65\x20\x66\x69\x78\x6e"
  "\x75\x6d\x05\x5b\x02\x5e\x04\x84\x04\x03\x0c\x69\x02\x5d\x02\x04"
  "\x1e\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x6e\x6f\x6e\x2d\x6e"
  "\x65\x67\x61\x74\x69\x76\x65\x2d\x66\x69\x78\x6e\x75\x6d\x6a\x02"
  "\x5f\x04\x84\x04\x03\x0a\x6b\x02\x5e\x08\x14\x6e\x6f\x6e\x2d\x6e"
  "\x65\x67\x61\x74\x69\x76\x65\x20\x66\x69\x78\x6e\x75\x6d\x05\x5b"
  "\x02\x60\x04\x84\x04\x03\x0c\x6c\x02\x5f\x0e\x69\x6e\x64\x65\x78"
  "\x20\x69\x6e\x74\x65\x67\x65\x72\x6d\x02\x05\x5b\x02\x61\x04\x84"
  "\x06\x03\x0b\x6e\x02\x60\x6d\x02\x04\x19\x65\x72\x72\x6f\x72\x3a"
  "\x62\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72\x67\x75\x6d\x65"
  "\x6e\x74\x6d\x05\x5b\x03\x63\x06\x85\x08\x62\x04\x81\x87\x02\x05"
  "\x0f\x5b\x02\x61\x64\x04\x84\x06\x03\x6f\x02\x62\x65\x04\x84\x06"
  "\x03\x70\x02\x63\x21\x67\x06\x81\x85\x02\x66\x04\x84\x06\x05\x0a"
  "\x21\x02\x64\x1f\x69\x06\x81\x85\x02\x68\x04\x84\x06\x05\x0a\x1f"
  "\x02\x65\x6a\x04\x84\x06\x03\x71\x02\x66\x6b\x04\x84\x06\x03\x72"
  "\x02\x67\x31\x33\x6d\x06\x81\x85\x02\x6c\x04\x84\x06\x05\x0b\x73"
  "\x02\x68\x31\x35\x6f\x06\x81\x85\x02\x6e\x04\x84\x06\x05\x0b\x74"
  "\x02\x69\x08\x66\x6c\x6f\x3a\x6d\x69\x6e\x75\x31\x35\x33\x03\x0c"
  "\x66\x6c\x6f\x3a\x66\x69\x6e\x69\x74\x65\x3f\x76\x04\x6d\x03\x74"
  "\x0c\x81\x85\x02\x73\x0a\x81\x85\x02\x72\x08\x81\x85\x02\x71\x06"
  "\x81\x85\x02\x70\x04\x84\x06\x0b\x17\x77\x02\x6a\x08\x66\x6c\x6f"
  "\x3a\x6d\x61\x78\x78\x31\x35\x33\x03\x76\x04\x6d\x03\x79\x0c\x81"
  "\x85\x02\x78\x0a\x81\x85\x02\x77\x08\x81\x85\x02\x76\x06\x81\x85"
  "\x02\x75\x04\x84\x06\x0b\x17\x6d\x02\x6b\x31\x3a\x03\x32\x2e\x33"
  "\x04\x2d\x31\x2e\x35\x03\x31\x2e\x04\x07\x66\x6c\x6f\x3a\x3c\x3d"
  "\x3a\x04\x07\x66\x6c\x6f\x3a\x3e\x3d\x35\x03\x7f\x0e\x81\x83\x02"
  "\x7e\x0c\x81\x83\x02\x7d\x0a\x81\x83\x02\x7c\x08\x81\x83\x02\x7b"
  "\x06\x81\x83\x02\x7a\x04\x83\x04\x0d\x1d\x33\x02\x6c\x49\x04\x2d"
  "\x31\x2e\x2d\x31\x84\x01\x0c\x81\x87\x02\x83\x01\x0a\x81\x87\x02"
  "\x82\x01\x08\x81\x85\x02\x81\x01\x06\x81\x85\x02\x80\x01\x04\x84"
  "\x06\x0b\x13\x49\x02\x6d\x10\x69\x6e\x74\x65\x67\x65\x72\x2d\x3e"
  "\x66\x6c\x6f\x6e\x75\x6d\x85\x01\x04\x83\x04\x03\x31\x02\x6e\x09"
  "\x2d\x3e\x66\x6c\x6f\x6e\x75\x6d\x2d\x04\x0f\x67\x75\x61\x72\x61"
  "\x6e\x74\x65\x65\x2d\x72\x65\x61\x6c\x03\x0a\x72\x65\x61\x6c\x2d"
  "\x70\x61\x72\x74\x03\x0f\x65\x78\x61\x63\x74\x2d\x3e\x69\x6e\x65"
  "\x78\x61\x63\x74\x04\x88\x01\x08\x81\x83\x02\x87\x01\x06\x81\x83"
  "\x02\x86\x01\x04\x83\x04\x07\x12\x6e\x79\x79\x04\x31\x04\x49\x04"
  "\x33\x04\x6d\x04\x77\x04\x74\x04\x73\x04\x72\x04\x71\x04\x1f\x04"
  "\x21\x04\x70\x04\x6f\x04\x5b\x06\x6e\x04\x6c\x04\x6b\x04\x69\x04"
  "\x68\x04\x66\x04\x65\x04\x63\x04\x62\x04\x60\x04\x5f\x04\x5e\x04"
  "\x5d\x04\x5c\x04\x5a\x04\x58\x04\x57\x04\x56\x04\x55\x04\x54\x04"
  "\x53\x04\x52\x04\x51\x04\x50\x04\x4f\x04\x4e\x04\x4d\x04\x4c\x04"
  "\x4b\x04\x4a\x04\x48\x04\x47\x04\x46\x04\x45\x04\x44\x04\x43\x04"
  "\x42\x04\x41\x04\x40\x04\x3f\x04\x3e\x04\x3d\x04\x3c\x04\x3b\x04"
  "\x39\x04\x38\x04\x37\x04\x36\x04\x34\x04\x32\x04\x30\x04\x2f\x04"
  "\x2e\x04\x2c\x04\x2b\x04\x2a\x04\x29\x04\x28\x04\x27\x04\x26\x04"
  "\x25\x04\x24\x04\x23\x04\x22\x04\x20\x04\x1e\x04\x1d\x04\x1c\x04"
  "\x1b\x04\x1a\x04\x19\x04\x18\x04\x17\x04\x16\x04\x15\x04\x14\x04"
  "\x13\x04\x12\x04\x11\x04\x10\x04\x0f\x04\x0e\x04\x0d\x04\x0c\x04"
  "\x0b\x04\x0a\x04\x09\x04\x04\x04\x04\x04\x04\x04\x04\x6e\x2d\x0d"
  "\x69\x6e\x74\x3a\x2d\x3e\x66\x6c\x6f\x6e\x75\x6d\x09\x66\x6c\x6f"
  "\x3a\x65\x71\x76\x3f\x76\x78\x75\x35\x3a\x08\x66\x69\x78\x3a\x6d"
  "\x61\x78\x08\x66\x69\x78\x3a\x6d\x69\x6e\x07\x69\x6e\x74\x3a\x3e"
  "\x3d\x07\x69\x6e\x74\x3a\x3c\x3d\x07\x66\x69\x78\x3a\x3e\x3d\x07"
  "\x66\x69\x78\x3a\x3c\x3d\x1f\x67\x75\x61\x72\x61\x6e\x74\x65\x65"
  "\x2d\x6c\x69\x6d\x69\x74\x65\x64\x2d\x69\x6e\x64\x65\x78\x2d\x66"
  "\x69\x78\x6e\x75\x6d\x17\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d"
  "\x69\x6e\x64\x65\x78\x2d\x66\x69\x78\x6e\x75\x6d\x6a\x1e\x67\x75"
  "\x61\x72\x61\x6e\x74\x65\x65\x2d\x6e\x6f\x6e\x2d\x6e\x65\x67\x61"
  "\x74\x69\x76\x65\x2d\x66\x69\x78\x6e\x75\x6d\x67\x1e\x67\x75\x61"
  "\x72\x61\x6e\x74\x65\x65\x2d\x6e\x6f\x6e\x2d\x70\x6f\x73\x69\x74"
  "\x69\x76\x65\x2d\x66\x69\x78\x6e\x75\x6d\x64\x1a\x67\x75\x61\x72"
  "\x61\x6e\x74\x65\x65\x2d\x6e\x65\x67\x61\x74\x69\x76\x65\x2d\x66"
  "\x69\x78\x6e\x75\x6d\x61\x1a\x67\x75\x61\x72\x61\x6e\x74\x65\x65"
  "\x2d\x70\x6f\x73\x69\x74\x69\x76\x65\x2d\x66\x69\x78\x6e\x75\x6d"
  "\x15\x6e\x6f\x6e\x2d\x70\x6f\x73\x69\x74\x69\x76\x65\x2d\x66\x69"
  "\x78\x6e\x75\x6d\x3f\x15\x6e\x6f\x6e\x2d\x6e\x65\x67\x61\x74\x69"
  "\x76\x65\x2d\x66\x69\x78\x6e\x75\x6d\x3f\x11\x6e\x65\x67\x61\x74"
  "\x69\x76\x65\x2d\x66\x69\x78\x6e\x75\x6d\x3f\x11\x70\x6f\x73\x69"
  "\x74\x69\x76\x65\x2d\x66\x69\x78\x6e\x75\x6d\x3f\x59\x11\x67\x75"
  "\x61\x72\x61\x6e\x74\x65\x65\x2d\x66\x69\x78\x6e\x75\x6d\x10\x66"
  "\x6c\x6f\x3a\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x0f\x66"
  "\x6c\x6f\x3a\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x12\x66\x6c"
  "\x6f\x3a\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\x10"
  "\x66\x6c\x6f\x3a\x76\x65\x63\x74\x6f\x72\x2d\x63\x6f\x6e\x73\x11"
  "\x66\x6c\x6f\x3a\x72\x6f\x75\x6e\x64\x2d\x3e\x65\x78\x61\x63\x74"
  "\x14\x66\x6c\x6f\x3a\x74\x72\x75\x6e\x63\x61\x74\x65\x2d\x3e\x65"
  "\x78\x61\x63\x74\x13\x66\x6c\x6f\x3a\x63\x65\x69\x6c\x69\x6e\x67"
  "\x2d\x3e\x65\x78\x61\x63\x74\x11\x66\x6c\x6f\x3a\x66\x6c\x6f\x6f"
  "\x72\x2d\x3e\x65\x78\x61\x63\x74\x0a\x66\x6c\x6f\x3a\x72\x6f\x75"
  "\x6e\x64\x0d\x66\x6c\x6f\x3a\x74\x72\x75\x6e\x63\x61\x74\x65\x0c"
  "\x66\x6c\x6f\x3a\x63\x65\x69\x6c\x69\x6e\x67\x0a\x66\x6c\x6f\x3a"
  "\x66\x6c\x6f\x6f\x72\x09\x66\x6c\x6f\x3a\x65\x78\x70\x74\x09\x66"
  "\x6c\x6f\x3a\x73\x71\x72\x74\x0a\x66\x6c\x6f\x3a\x61\x74\x61\x6e"
  "\x32\x09\x66\x6c\x6f\x3a\x61\x74\x61\x6e\x09\x66\x6c\x6f\x3a\x61"
  "\x63\x6f\x73\x09\x66\x6c\x6f\x3a\x61\x73\x69\x6e\x08\x66\x6c\x6f"
  "\x3a\x74\x61\x6e\x08\x66\x6c\x6f\x3a\x63\x6f\x73\x08\x66\x6c\x6f"
  "\x3a\x73\x69\x6e\x0a\x66\x6c\x6f\x3a\x6c\x6f\x67\x31\x70\x08\x66"
  "\x6c\x6f\x3a\x6c\x6f\x67\x0a\x66\x6c\x6f\x3a\x65\x78\x70\x6d\x31"
  "\x08\x66\x6c\x6f\x3a\x65\x78\x70\x08\x66\x6c\x6f\x3a\x61\x62\x73"
  "\x0b\x66\x6c\x6f\x3a\x6e\x65\x67\x61\x74\x65\x0b\x66\x6c\x6f\x3a"
  "\x6d\x6f\x64\x75\x6c\x6f\x06\x66\x6c\x6f\x3a\x2f\x06\x66\x6c\x6f"
  "\x3a\x2a\x06\x66\x6c\x6f\x3a\x2d\x06\x66\x6c\x6f\x3a\x2b\x06\x66"
  "\x6c\x6f\x3a\x3e\x06\x66\x6c\x6f\x3a\x3c\x06\x66\x6c\x6f\x3a\x3d"
  "\x0e\x66\x6c\x6f\x3a\x6e\x65\x67\x61\x74\x69\x76\x65\x3f\x0e\x66"
  "\x6c\x6f\x3a\x70\x6f\x73\x69\x74\x69\x76\x65\x3f\x0a\x66\x6c\x6f"
  "\x3a\x7a\x65\x72\x6f\x3f\x0c\x66\x6c\x6f\x3a\x66\x6c\x6f\x6e\x75"
  "\x6d\x3f\x0e\x69\x6e\x74\x3a\x72\x65\x6d\x61\x69\x6e\x64\x65\x72"
  "\x0d\x69\x6e\x74\x3a\x71\x75\x6f\x74\x69\x65\x6e\x74\x0b\x69\x6e"
  "\x74\x3a\x64\x69\x76\x69\x64\x65\x06\x69\x6e\x74\x3a\x2a\x06\x69"
  "\x6e\x74\x3a\x2d\x06\x69\x6e\x74\x3a\x2b\x08\x69\x6e\x74\x3a\x2d"
  "\x31\x2b\x07\x69\x6e\x74\x3a\x31\x2b\x0b\x69\x6e\x74\x3a\x6e\x65"
  "\x67\x61\x74\x65\x06\x69\x6e\x74\x3a\x3e\x06\x69\x6e\x74\x3a\x3c"
  "\x06\x69\x6e\x74\x3a\x3d\x0e\x69\x6e\x74\x3a\x6e\x65\x67\x61\x74"
  "\x69\x76\x65\x3f\x0e\x69\x6e\x74\x3a\x70\x6f\x73\x69\x74\x69\x76"
  "\x65\x3f\x0a\x69\x6e\x74\x3a\x7a\x65\x72\x6f\x3f\x0d\x69\x6e\x74"
  "\x3a\x69\x6e\x74\x65\x67\x65\x72\x3f\x08\x66\x69\x78\x3a\x6c\x73"
  "\x68\x08\x66\x69\x78\x3a\x6e\x6f\x74\x08\x66\x69\x78\x3a\x78\x6f"
  "\x72\x07\x66\x69\x78\x3a\x6f\x72\x08\x66\x69\x78\x3a\x61\x6e\x64"
  "\x09\x66\x69\x78\x3a\x61\x6e\x64\x63\x08\x66\x69\x78\x3a\x67\x63"
  "\x64\x0e\x66\x69\x78\x3a\x72\x65\x6d\x61\x69\x6e\x64\x65\x72\x0d"
  "\x66\x69\x78\x3a\x71\x75\x6f\x74\x69\x65\x6e\x74\x0b\x66\x69\x78"
  "\x3a\x64\x69\x76\x69\x64\x65\x06\x66\x69\x78\x3a\x2a\x06\x66\x69"
  "\x78\x3a\x2d\x06\x66\x69\x78\x3a\x2b\x08\x66\x69\x78\x3a\x2d\x31"
  "\x2b\x07\x66\x69\x78\x3a\x31\x2b\x06\x66\x69\x78\x3a\x3e\x06\x66"
  "\x69\x78\x3a\x3c\x06\x66\x69\x78\x3a\x3d\x0e\x66\x69\x78\x3a\x70"
  "\x6f\x73\x69\x74\x69\x76\x65\x3f\x0e\x66\x69\x78\x3a\x6e\x65\x67"
  "\x61\x74\x69\x76\x65\x3f\x0a\x66\x69\x78\x3a\x7a\x65\x72\x6f\x3f"
  "\x0e\x69\x6e\x64\x65\x78\x2d\x66\x69\x78\x6e\x75\x6d\x3f\x08\x66"
  "\x69\x78\x6e\x75\x6d\x3f\x0c\x66\x69\x78\x3a\x66\x69\x78\x6e\x75"
  "\x6d\x3f\x6e\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74"
  "\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01"
  "\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
fixart_so_data_3e0a5da7deddaebf (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_fixart_so_data_3e0a5da7deddaebf [0]))), (sizeof (prog_fixart_so_data_3e0a5da7deddaebf)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("fixart.so", fixart_so_data_3e0a5da7deddaebf)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("fixart.so", "42201968726fafd0")
