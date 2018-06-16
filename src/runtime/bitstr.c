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
bitstr_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bit_string_allocate_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_string_allocate_3)
DEFLABEL (bit_string_allocate_0)
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
bitstr_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto make_bit_string_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_bit_string_3)
DEFLABEL (make_bit_string_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 2);

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
bitstr_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto bit_stringP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_stringP_3)
DEFLABEL (bit_stringP_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 47)
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
bitstr_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd11;
  INVOKE_INTERFACE_DECLS
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
      goto bit_string_length_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_string_length_3)
DEFLABEL (bit_string_length_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 47))
    goto label_4;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  Rvl = (MAKE_OBJECT (26, (Wrd9.uLng)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
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
bitstr_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bit_string_ref_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_string_ref_3)
DEFLABEL (bit_string_ref_0)
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
bitstr_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bit_string_clearB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_string_clearB_3)
DEFLABEL (bit_string_clearB_0)
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
bitstr_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bit_string_setB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_string_setB_3)
DEFLABEL (bit_string_setB_0)
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
bitstr_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bit_string_zeroP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_string_zeroP_3)
DEFLABEL (bit_string_zeroP_0)
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
bitstr_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bit_string_P_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_string_P_3)
DEFLABEL (bit_string_P_0)
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
bitstr_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bit_string_fillB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_string_fillB_3)
DEFLABEL (bit_string_fillB_0)
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
bitstr_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bit_string_moveB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_string_moveB_3)
DEFLABEL (bit_string_moveB_0)
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
bitstr_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bit_string_movecB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_string_movecB_3)
DEFLABEL (bit_string_movecB_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 2);

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
bitstr_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bit_string_orB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_string_orB_3)
DEFLABEL (bit_string_orB_0)
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
bitstr_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bit_string_andB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_string_andB_3)
DEFLABEL (bit_string_andB_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 2);

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
bitstr_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bit_string_andcB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_string_andcB_3)
DEFLABEL (bit_string_andcB_0)
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
bitstr_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bit_string_xorB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_string_xorB_3)
DEFLABEL (bit_string_xorB_0)
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
bitstr_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bit_substring_move_rightB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_substring_move_rightB_3)
DEFLABEL (bit_substring_move_rightB_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 5);

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
bitstr_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bit_string__unsigned_integer_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_string__unsigned_integer_3)
DEFLABEL (bit_string__unsigned_integer_0)
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
bitstr_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto unsigned_integer__bit_string_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsigned_integer__bit_string_3)
DEFLABEL (unsigned_integer__bit_string_0)
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
bitstr_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto read_bitsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_bitsB_3)
DEFLABEL (read_bitsB_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 3);

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
bitstr_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto write_bitsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_bitsB_3)
DEFLABEL (write_bitsB_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 3);

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
bitstr_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bit_substring_find_next_set_bit_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_substring_find_next_set_bit_3)
DEFLABEL (bit_substring_find_next_set_bit_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_6 5
#define LABEL_23_5 7
#define LABEL_23_7 9
#define ENVIRONMENT_LABEL_23_3 14
#define DEBUGGING_LABEL_23_2 13
#define OBJECT_23_2 12
#define OBJECT_23_1 11
#define OBJECT_23_0 10
#define FREE_REFERENCES_LABEL_23_0 10
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitstr_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_23_4);
      goto bit_string_copy_4;

    case 1:
      current_block = (Rpc - LABEL_23_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_string_copy_8)
DEFLABEL (bit_string_copy_4)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 47))
    goto label_10;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (Wrd12.Obj) = (MAKE_OBJECT (26, (Wrd11.uLng)));
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_23_7);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_6 5
#define LABEL_24_5 7
#define LABEL_24_7 9
#define ENVIRONMENT_LABEL_24_3 14
#define DEBUGGING_LABEL_24_2 13
#define OBJECT_24_2 12
#define OBJECT_24_1 11
#define OBJECT_24_0 10
#define FREE_REFERENCES_LABEL_24_0 10
#define NUMBER_OF_LINKER_SECTIONS_24_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitstr_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_24_4);
      goto bit_string_not_4;

    case 1:
      current_block = (Rpc - LABEL_24_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_24_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_string_not_8)
DEFLABEL (bit_string_not_4)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 47))
    goto label_10;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (Wrd12.Obj) = (MAKE_OBJECT (26, (Wrd11.uLng)));
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_7);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_6 5
#define LABEL_25_5 7
#define LABEL_25_7 9
#define LABEL_25_8 11
#define ENVIRONMENT_LABEL_25_3 17
#define DEBUGGING_LABEL_25_2 16
#define OBJECT_25_3 15
#define OBJECT_25_2 14
#define OBJECT_25_1 13
#define OBJECT_25_0 12
#define FREE_REFERENCES_LABEL_25_0 12
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitstr_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_25_4);
      goto bit_string_or_5;

    case 1:
      current_block = (Rpc - LABEL_25_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_25_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_25_8);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_string_or_9)
DEFLABEL (bit_string_or_5)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 47))
    goto label_11;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (Wrd12.Obj) = (MAKE_OBJECT (26, (Wrd11.uLng)));
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_25_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_3]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_25_8);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_6 5
#define LABEL_26_5 7
#define LABEL_26_7 9
#define LABEL_26_8 11
#define ENVIRONMENT_LABEL_26_3 17
#define DEBUGGING_LABEL_26_2 16
#define OBJECT_26_3 15
#define OBJECT_26_2 14
#define OBJECT_26_1 13
#define OBJECT_26_0 12
#define FREE_REFERENCES_LABEL_26_0 12
#define NUMBER_OF_LINKER_SECTIONS_26_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitstr_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_26_4);
      goto bit_string_and_5;

    case 1:
      current_block = (Rpc - LABEL_26_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_26_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_26_8);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_string_and_9)
DEFLABEL (bit_string_and_5)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 47))
    goto label_11;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (Wrd12.Obj) = (MAKE_OBJECT (26, (Wrd11.uLng)));
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_26_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_3]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_26_8);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_6 5
#define LABEL_27_5 7
#define LABEL_27_7 9
#define LABEL_27_8 11
#define ENVIRONMENT_LABEL_27_3 17
#define DEBUGGING_LABEL_27_2 16
#define OBJECT_27_3 15
#define OBJECT_27_2 14
#define OBJECT_27_1 13
#define OBJECT_27_0 12
#define FREE_REFERENCES_LABEL_27_0 12
#define NUMBER_OF_LINKER_SECTIONS_27_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitstr_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_27_4);
      goto bit_string_andc_5;

    case 1:
      current_block = (Rpc - LABEL_27_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_27_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_27_8);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_string_andc_9)
DEFLABEL (bit_string_andc_5)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 47))
    goto label_11;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (Wrd12.Obj) = (MAKE_OBJECT (26, (Wrd11.uLng)));
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_27_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_27_8);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_0]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_6 5
#define LABEL_28_5 7
#define LABEL_28_7 9
#define LABEL_28_8 11
#define ENVIRONMENT_LABEL_28_3 17
#define DEBUGGING_LABEL_28_2 16
#define OBJECT_28_3 15
#define OBJECT_28_2 14
#define OBJECT_28_1 13
#define OBJECT_28_0 12
#define FREE_REFERENCES_LABEL_28_0 12
#define NUMBER_OF_LINKER_SECTIONS_28_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitstr_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_28_4);
      goto bit_string_xor_5;

    case 1:
      current_block = (Rpc - LABEL_28_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_28_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_28_8);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_string_xor_9)
DEFLABEL (bit_string_xor_5)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 47))
    goto label_11;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (Wrd12.Obj) = (MAKE_OBJECT (26, (Wrd11.uLng)));
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_28_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_3]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_28_8);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_6 5
#define LABEL_29_5 7
#define LABEL_29_7 9
#define ENVIRONMENT_LABEL_29_3 14
#define DEBUGGING_LABEL_29_2 13
#define OBJECT_29_2 12
#define OBJECT_29_1 11
#define OBJECT_29_0 10
#define FREE_REFERENCES_LABEL_29_0 10
#define NUMBER_OF_LINKER_SECTIONS_29_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitstr_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_29_4);
      goto bit_substring_4;

    case 1:
      current_block = (Rpc - LABEL_29_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_29_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_substring_8)
DEFLABEL (bit_substring_4)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_10;
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_10;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd17.Lng) = ((Wrd19.Lng) - (Wrd21.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd17.Lng)))
    goto label_10;
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_0]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 5);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_29_7);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_6 7
#define ENVIRONMENT_LABEL_30_3 12
#define DEBUGGING_LABEL_30_2 11
#define OBJECT_30_2 10
#define OBJECT_30_1 9
#define OBJECT_30_0 8
#define FREE_REFERENCES_LABEL_30_0 8
#define NUMBER_OF_LINKER_SECTIONS_30_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitstr_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_30_4);
      goto bit_substring_extend_3;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_30_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_substring_extend_6)
DEFLABEL (bit_substring_extend_3)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 5);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_6);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_6 7
#define LABEL_31_8 9
#define LABEL_31_7 11
#define LABEL_31_9 13
#define LABEL_31_10 15
#define ENVIRONMENT_LABEL_31_3 21
#define DEBUGGING_LABEL_31_2 20
#define OBJECT_31_3 19
#define OBJECT_31_2 18
#define OBJECT_31_1 17
#define OBJECT_31_0 16
#define FREE_REFERENCES_LABEL_31_0 16
#define NUMBER_OF_LINKER_SECTIONS_31_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitstr_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd44;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_31_4);
      goto bit_string_append_8;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_31_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_31_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_31_7);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_31_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_31_10);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_string_append_14)
DEFLABEL (bit_string_append_8)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 47))
    goto label_20;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_19)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 47))
    goto label_18;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (Wrd20.Obj) = (MAKE_OBJECT (26, (Wrd19.uLng)));
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_17)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_16;
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_16;
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd39.Lng) = ((Wrd41.Lng) + (Wrd43.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd39.Lng)))
    goto label_16;
  (Wrd44.Obj) = (LONG_TO_FIXNUM (Wrd39.Lng));
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_15)
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_31_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_3]), 5);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_31_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_31_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_3]), 5);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_31_10);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_0]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_0]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_6 7
#define LABEL_32_8 9
#define LABEL_32_7 11
#define LABEL_32_9 13
#define LABEL_32_10 15
#define ENVIRONMENT_LABEL_32_3 21
#define DEBUGGING_LABEL_32_2 20
#define OBJECT_32_3 19
#define OBJECT_32_2 18
#define OBJECT_32_1 17
#define OBJECT_32_0 16
#define FREE_REFERENCES_LABEL_32_0 16
#define NUMBER_OF_LINKER_SECTIONS_32_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitstr_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd44;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_32_4);
      goto bit_string_append_reversed_8;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_32_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_32_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_32_7);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_32_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_32_10);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_string_append_reversed_14)
DEFLABEL (bit_string_append_reversed_8)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 47))
    goto label_20;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_19)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 47))
    goto label_18;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (Wrd20.Obj) = (MAKE_OBJECT (26, (Wrd19.uLng)));
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_17)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_16;
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_16;
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd39.Lng) = ((Wrd41.Lng) + (Wrd43.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd39.Lng)))
    goto label_16;
  (Wrd44.Obj) = (LONG_TO_FIXNUM (Wrd39.Lng));
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_15)
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_32_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_3]), 5);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_32_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_3]), 5);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_32_10);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_6 5
#define LABEL_33_8 7
#define LABEL_33_10 9
#define LABEL_33_12 11
#define LABEL_33_13 13
#define LABEL_33_7 15
#define LABEL_33_14 17
#define LABEL_33_5 19
#define LABEL_33_9 21
#define LABEL_33_16 23
#define LABEL_33_17 25
#define ENVIRONMENT_LABEL_33_3 37
#define DEBUGGING_LABEL_33_2 36
#define OBJECT_33_4 35
#define OBJECT_33_3 34
#define OBJECT_33_2 33
#define OBJECT_33_1 32
#define OBJECT_33_0 31
#define EXECUTE_CACHE_33_15 27
#define EXECUTE_CACHE_33_11 29
#define FREE_REFERENCES_LABEL_33_0 26
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitstr_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd28;
  machine_word Wrd5;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd42;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd44;
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
      goto signed_integer__bit_string_10;

    case 1:
      current_block = (Rpc - LABEL_33_6);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_33_8);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_33_10);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_33_12);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_33_13);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_33_7);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_33_14);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_33_9);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_33_16);
      goto label_16;

    case 11:
      current_block = (Rpc - LABEL_33_17);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (signed_integer__bit_string_20)
DEFLABEL (signed_integer__bit_string_10)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 26))
    goto label_27;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if ((Wrd44.Lng) < 0)
    goto label_25;

DEFLABEL (label_24)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_22;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Lng) = ((Wrd26.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_22;
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_21)
  (Wrd42.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_11]));

DEFLABEL (label_22)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_13)
DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_25)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_9]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 26))
    goto label_26;
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  (Wrd38.Lng) = ((Wrd40.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd38.Lng)))
    goto label_26;
  (Wrd41.Obj) = (LONG_TO_FIXNUM (Wrd38.Lng));
  (* (--Rsp)) = (Wrd41.Obj);
  goto label_21;

DEFLABEL (label_26)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_10]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_14)
  goto label_23;

DEFLABEL (label_27)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_25;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_33_7);
  (Wrd6.Obj) = Rvl;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_32;
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd9.uLng) == 26))
    goto label_32;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd20.Lng) < (Wrd21.Lng))
    goto label_30;

DEFLABEL (label_29)
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_33_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_28)
  (Rsp [1]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 2);

DEFLABEL (label_30)
  (Wrd5.Obj) = (Rsp [2]);

DEFLABEL (label_31)
  Rsp = (& (Rsp [1]));
  goto label_28;

DEFLABEL (label_32)
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_14]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_30;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_33_9);
  (Wrd5.Obj) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_38;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd13.Lng) = (0 - (Wrd16.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_38;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_37)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_36;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_36;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! ((Wrd34.Lng) < (Wrd35.Lng)))
    goto label_34;

DEFLABEL (label_33)
  (Wrd31.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_33_4]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_15]));

DEFLABEL (label_34)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_12]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_11]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_33_12);
  (Wrd22.Obj) = Rvl;
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_35;
  (Wrd31.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd31.uLng) == 26))
    goto label_35;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd32.Lng) = ((Wrd34.Lng) + (Wrd35.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd32.Lng)))
    goto label_35;
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd32.Lng));
  goto label_31;

DEFLABEL (label_35)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_13]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_36)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_17]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_33;

DEFLABEL (label_38)
  (Wrd6.Obj) = (current_block [OBJECT_33_3]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_16)
  (Wrd11.Obj) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_6 7
#define LABEL_34_8 9
#define LABEL_34_7 11
#define LABEL_34_9 13
#define ENVIRONMENT_LABEL_34_3 22
#define DEBUGGING_LABEL_34_2 21
#define OBJECT_34_3 20
#define OBJECT_34_2 19
#define OBJECT_34_1 18
#define OBJECT_34_0 17
#define EXECUTE_CACHE_34_10 15
#define FREE_REFERENCES_LABEL_34_0 14
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitstr_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_34_4);
      goto bit_string__signed_integer_6;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_34_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_34_8);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_34_7);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_34_9);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_string__signed_integer_11)
DEFLABEL (bit_string__signed_integer_6)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 47))
    goto label_18;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_17)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_16;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_16;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_15)
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_34_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_34_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_34_9);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd9.uLng) == 26)
    goto label_14;

DEFLABEL (label_13)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_14)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_13;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) - (Wrd16.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_13;
  Rvl = (LONG_TO_FIXNUM (Wrd12.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 1);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
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
bitstr_so_286197f01343f3fc (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 34)
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

static const struct liarc_code_S arr_decl_bitstr_so_286197f01343f3fc [34] =
  {
    { "bitstr_so_code_1", 1, bitstr_so_code_1 },
    { "bitstr_so_code_2", 1, bitstr_so_code_2 },
    { "bitstr_so_code_3", 1, bitstr_so_code_3 },
    { "bitstr_so_code_4", 1, bitstr_so_code_4 },
    { "bitstr_so_code_5", 1, bitstr_so_code_5 },
    { "bitstr_so_code_6", 1, bitstr_so_code_6 },
    { "bitstr_so_code_7", 1, bitstr_so_code_7 },
    { "bitstr_so_code_8", 1, bitstr_so_code_8 },
    { "bitstr_so_code_9", 1, bitstr_so_code_9 },
    { "bitstr_so_code_10", 1, bitstr_so_code_10 },
    { "bitstr_so_code_11", 1, bitstr_so_code_11 },
    { "bitstr_so_code_12", 1, bitstr_so_code_12 },
    { "bitstr_so_code_13", 1, bitstr_so_code_13 },
    { "bitstr_so_code_14", 1, bitstr_so_code_14 },
    { "bitstr_so_code_15", 1, bitstr_so_code_15 },
    { "bitstr_so_code_16", 1, bitstr_so_code_16 },
    { "bitstr_so_code_17", 1, bitstr_so_code_17 },
    { "bitstr_so_code_18", 1, bitstr_so_code_18 },
    { "bitstr_so_code_19", 1, bitstr_so_code_19 },
    { "bitstr_so_code_20", 1, bitstr_so_code_20 },
    { "bitstr_so_code_21", 1, bitstr_so_code_21 },
    { "bitstr_so_code_22", 1, bitstr_so_code_22 },
    { "bitstr_so_code_23", 4, bitstr_so_code_23 },
    { "bitstr_so_code_24", 4, bitstr_so_code_24 },
    { "bitstr_so_code_25", 5, bitstr_so_code_25 },
    { "bitstr_so_code_26", 5, bitstr_so_code_26 },
    { "bitstr_so_code_27", 5, bitstr_so_code_27 },
    { "bitstr_so_code_28", 5, bitstr_so_code_28 },
    { "bitstr_so_code_29", 4, bitstr_so_code_29 },
    { "bitstr_so_code_30", 3, bitstr_so_code_30 },
    { "bitstr_so_code_31", 7, bitstr_so_code_31 },
    { "bitstr_so_code_32", 7, bitstr_so_code_32 },
    { "bitstr_so_code_33", 12, bitstr_so_code_33 },
    { "bitstr_so_code_34", 6, bitstr_so_code_34 }
  };

int
decl_bitstr_so_286197f01343f3fc (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_bitstr_so_286197f01343f3fc);
  return (0);
}

DECLARE_COMPILED_CODE ("bitstr.so", 3, decl_bitstr_so_286197f01343f3fc, bitstr_so_286197f01343f3fc)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_bitstr_so_data_286197f01343f3fc [2544] =
  "\x49\x27\x97\x05\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc1\xb9\x22\x29"
  "\x21\x9d\x2b\xba\x1d\xb0\x82\x88\xc2\xbb\x22\x29\x21\x9d\x2b\xbc"
  "\x1d\xb0\x83\x88\x07\x22\x29\x21\x9d\x2b\xbd\x1d\xb0\x84\x88\xc1"
  "\xbe\x22\x29\x21\x9d\x2b\xbf\x1d\xb0\x85\x88\xc2\x1c\x22\x29\x21"
  "\x9d\x2b\x1c\x1d\xb0\x86\x88\xc2\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\xc2\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x22\x29"
  "\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\xc2\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c"
  "\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\xc2\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c"
  "\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x02\x88\xc5\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\xc1\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c"
  "\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc3\x22\x29\x21\x9d\x2b"
  "\x1c\x1d\xb0\x02\x88\xc3\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88"
  "\xc3\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x1b\xb1\xb6\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb1"
  "\xb6\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1b\xb1\xb6\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\xb1\xb6\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\xb1"
  "\xb6\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1b\xb1\xb6\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\xb1\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\xb3\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x02\x88\x1b\x80\xb1"
  "\xb6\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\xb1\xb6\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x80\x1b\x0c\x82\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x02\x88\x82\x1b\x1b\xb6"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\xb1\x2a\x1b\x2a\x1b\x2a\xb3"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\xb7\x2a\xb5\x2a\xb4\x2a\xb2\x2a\x17\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x17\x28"
  "\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65"
  "\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61"
  "\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74"
  "\x69\x6d\x65\x2f\x2e\x2f\x62\x69\x74\x73\x74\x72\x2e\x69\x6e\x66"
  "\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d"
  "\x72\x6f\x6f\x74\x5d\x02\x14\x62\x69\x74\x2d\x73\x74\x72\x69\x6e"
  "\x67\x2d\x61\x6c\x6c\x6f\x63\x61\x74\x65\x04\x04\x83\x04\x03\x02"
  "\x10\x6d\x61\x6b\x65\x2d\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67"
  "\x05\x04\x84\x06\x03\x02\x06\x04\x83\x04\x03\x02\x12\x62\x69\x74"
  "\x2d\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x07\x04"
  "\x83\x04\x03\x02\x0f\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d"
  "\x72\x65\x66\x09\x08\x04\x84\x06\x03\x0a\x02\x12\x62\x69\x74\x2d"
  "\x73\x74\x72\x69\x6e\x67\x2d\x63\x6c\x65\x61\x72\x21\x09\x04\x84"
  "\x06\x03\x0b\x02\x08\x10\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67"
  "\x2d\x73\x65\x74\x21\x0a\x04\x84\x06\x03\x0c\x02\x09\x11\x62\x69"
  "\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x7a\x65\x72\x6f\x3f\x0b\x04"
  "\x83\x04\x03\x0d\x02\x0a\x0d\x62\x69\x74\x2d\x73\x74\x72\x69\x6e"
  "\x67\x3d\x3f\x0c\x04\x84\x06\x03\x0e\x02\x0b\x11\x62\x69\x74\x2d"
  "\x73\x74\x72\x69\x6e\x67\x2d\x66\x69\x6c\x6c\x21\x0d\x04\x84\x06"
  "\x03\x0f\x02\x0c\x11\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d"
  "\x6d\x6f\x76\x65\x21\x10\x0e\x04\x84\x06\x03\x11\x02\x0d\x12\x62"
  "\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x6d\x6f\x76\x65\x63\x21"
  "\x12\x0f\x04\x84\x06\x03\x13\x02\x0e\x0f\x62\x69\x74\x2d\x73\x74"
  "\x72\x69\x6e\x67\x2d\x6f\x72\x21\x14\x10\x04\x84\x06\x03\x15\x02"
  "\x0f\x10\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x61\x6e\x64"
  "\x21\x16\x11\x04\x84\x06\x03\x17\x02\x10\x11\x62\x69\x74\x2d\x73"
  "\x74\x72\x69\x6e\x67\x2d\x61\x6e\x64\x63\x21\x18\x12\x04\x84\x06"
  "\x03\x19\x02\x11\x10\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d"
  "\x78\x6f\x72\x21\x1a\x13\x04\x84\x06\x03\x1b\x02\x12\x1a\x62\x69"
  "\x74\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x6d\x6f\x76\x65"
  "\x2d\x72\x69\x67\x68\x74\x21\x1c\x14\x04\x87\x0c\x03\x1d\x02\x13"
  "\x1d\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x3e\x75\x6e\x73"
  "\x69\x67\x6e\x65\x64\x2d\x69\x6e\x74\x65\x67\x65\x72\x1e\x15\x04"
  "\x83\x04\x03\x1f\x02\x14\x1d\x75\x6e\x73\x69\x67\x6e\x65\x64\x2d"
  "\x69\x6e\x74\x65\x67\x65\x72\x2d\x3e\x62\x69\x74\x2d\x73\x74\x72"
  "\x69\x6e\x67\x20\x16\x04\x84\x06\x03\x21\x02\x15\x0b\x72\x65\x61"
  "\x64\x2d\x62\x69\x74\x73\x21\x17\x04\x85\x08\x03\x22\x02\x16\x0c"
  "\x77\x72\x69\x74\x65\x2d\x62\x69\x74\x73\x21\x18\x04\x85\x08\x03"
  "\x23\x02\x17\x20\x62\x69\x74\x2d\x73\x75\x62\x73\x74\x72\x69\x6e"
  "\x67\x2d\x66\x69\x6e\x64\x2d\x6e\x65\x78\x74\x2d\x73\x65\x74\x2d"
  "\x62\x69\x74\x19\x04\x85\x08\x03\x24\x02\x18\x10\x1d\x0a\x81\x85"
  "\x02\x1c\x08\x81\x83\x02\x1b\x06\x81\x85\x02\x1a\x04\x83\x04\x09"
  "\x0f\x25\x02\x19\x12\x21\x0a\x81\x85\x02\x20\x08\x81\x83\x02\x1f"
  "\x06\x81\x85\x02\x1e\x04\x83\x04\x09\x0f\x12\x02\x1a\x14\x10\x26"
  "\x0c\x81\x87\x02\x25\x0a\x81\x87\x02\x24\x08\x81\x85\x02\x23\x06"
  "\x81\x87\x02\x22\x04\x84\x06\x0b\x12\x14\x02\x1b\x16\x10\x2b\x0c"
  "\x81\x87\x02\x2a\x0a\x81\x87\x02\x29\x08\x81\x85\x02\x28\x06\x81"
  "\x87\x02\x27\x04\x84\x06\x0b\x12\x16\x02\x1c\x18\x10\x30\x0c\x81"
  "\x87\x02\x2f\x0a\x81\x87\x02\x2e\x08\x81\x85\x02\x2d\x06\x81\x87"
  "\x02\x2c\x04\x84\x06\x0b\x12\x18\x02\x1d\x1a\x10\x35\x0c\x81\x87"
  "\x02\x34\x0a\x81\x87\x02\x33\x08\x81\x85\x02\x32\x06\x81\x87\x02"
  "\x31\x04\x84\x06\x0b\x12\x1a\x02\x1e\x1c\x39\x0a\x81\x89\x02\x38"
  "\x08\x81\x87\x02\x37\x06\x81\x89\x02\x36\x04\x85\x08\x09\x0f\x10"
  "\x02\x1f\x1c\x3c\x08\x81\x8b\x02\x3b\x06\x81\x89\x02\x3a\x04\x86"
  "\x0a\x07\x0d\x02\x20\x1c\x43\x10\x81\x8b\x02\x42\x0e\x81\x8b\x02"
  "\x41\x0c\x81\x89\x02\x40\x0a\x81\x8b\x02\x3f\x08\x81\x87\x02\x3e"
  "\x06\x81\x85\x02\x3d\x04\x84\x06\x0f\x16\x26\x02\x21\x1c\x4a\x10"
  "\x81\x8b\x02\x49\x0e\x81\x8b\x02\x48\x0c\x81\x89\x02\x47\x0a\x81"
  "\x8b\x02\x46\x08\x81\x87\x02\x45\x06\x81\x85\x02\x44\x04\x84\x06"
  "\x0f\x16\x1c\x02\x22\x20\x49\x6e\x74\x65\x67\x65\x72\x20\x74\x6f"
  "\x6f\x20\x73\x6d\x61\x6c\x6c\x20\x74\x6f\x20\x62\x65\x20\x65\x6e"
  "\x63\x6f\x64\x65\x64\x20\x20\x49\x6e\x74\x65\x67\x65\x72\x20\x74"
  "\x6f\x6f\x20\x6c\x61\x72\x67\x65\x20\x74\x6f\x20\x62\x65\x20\x65"
  "\x6e\x63\x6f\x64\x65\x64\x04\x05\x65\x78\x70\x74\x20\x04\x06\x65"
  "\x72\x72\x6f\x72\x03\x56\x1a\x81\x87\x02\x55\x18\x81\x87\x02\x54"
  "\x16\x81\x87\x02\x53\x14\x81\x85\x02\x52\x12\x81\x87\x02\x51\x10"
  "\x81\x87\x02\x50\x0e\x81\x87\x02\x4f\x0c\x81\x87\x02\x4e\x0a\x81"
  "\x89\x02\x4d\x08\x81\x89\x02\x4c\x06\x81\x87\x02\x4b\x04\x84\x06"
  "\x19\x26\x02\x23\x09\x1e\x04\x20\x02\x5c\x0e\x81\x87\x02\x5b\x0c"
  "\x81\x87\x02\x5a\x0a\x81\x89\x02\x59\x08\x81\x85\x02\x58\x06\x81"
  "\x83\x02\x57\x04\x83\x04\x0d\x17\x20\x23\x1e\x1e\x20\x04\x04\x1c"
  "\x04\x26\x04\x04\x10\x04\x1a\x04\x18\x04\x16\x04\x14\x04\x12\x04"
  "\x25\x04\x24\x04\x23\x04\x22\x04\x21\x04\x1f\x04\x1d\x04\x1b\x04"
  "\x19\x04\x17\x04\x15\x04\x13\x04\x11\x04\x0f\x04\x0e\x04\x0d\x04"
  "\x0c\x04\x0b\x04\x0a\x04\x04\x04\x04\x04\x23\x1b\x62\x69\x74\x2d"
  "\x73\x74\x72\x69\x6e\x67\x2d\x3e\x73\x69\x67\x6e\x65\x64\x2d\x69"
  "\x6e\x74\x65\x67\x65\x72\x1b\x73\x69\x67\x6e\x65\x64\x2d\x69\x6e"
  "\x74\x65\x67\x65\x72\x2d\x3e\x62\x69\x74\x2d\x73\x74\x72\x69\x6e"
  "\x67\x1b\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70"
  "\x65\x6e\x64\x2d\x72\x65\x76\x65\x72\x73\x65\x64\x12\x62\x69\x74"
  "\x2d\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x15\x62"
  "\x69\x74\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x65\x78\x74"
  "\x65\x6e\x64\x0e\x62\x69\x74\x2d\x73\x75\x62\x73\x74\x72\x69\x6e"
  "\x67\x0f\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x78\x6f\x72"
  "\x10\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x61\x6e\x64\x63"
  "\x0f\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x61\x6e\x64\x0e"
  "\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x6f\x72\x0f\x62\x69"
  "\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x6e\x6f\x74\x10\x62\x69\x74"
  "\x2d\x73\x74\x72\x69\x6e\x67\x2d\x63\x6f\x70\x79\x20\x62\x69\x74"
  "\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x66\x69\x6e\x64\x2d"
  "\x6e\x65\x78\x74\x2d\x73\x65\x74\x2d\x62\x69\x74\x0c\x77\x72\x69"
  "\x74\x65\x2d\x62\x69\x74\x73\x21\x0b\x72\x65\x61\x64\x2d\x62\x69"
  "\x74\x73\x21\x1d\x75\x6e\x73\x69\x67\x6e\x65\x64\x2d\x69\x6e\x74"
  "\x65\x67\x65\x72\x2d\x3e\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67"
  "\x1d\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x3e\x75\x6e\x73"
  "\x69\x67\x6e\x65\x64\x2d\x69\x6e\x74\x65\x67\x65\x72\x1a\x62\x69"
  "\x74\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x6d\x6f\x76\x65"
  "\x2d\x72\x69\x67\x68\x74\x21\x10\x62\x69\x74\x2d\x73\x74\x72\x69"
  "\x6e\x67\x2d\x78\x6f\x72\x21\x11\x62\x69\x74\x2d\x73\x74\x72\x69"
  "\x6e\x67\x2d\x61\x6e\x64\x63\x21\x10\x62\x69\x74\x2d\x73\x74\x72"
  "\x69\x6e\x67\x2d\x61\x6e\x64\x21\x0f\x62\x69\x74\x2d\x73\x74\x72"
  "\x69\x6e\x67\x2d\x6f\x72\x21\x12\x62\x69\x74\x2d\x73\x74\x72\x69"
  "\x6e\x67\x2d\x6d\x6f\x76\x65\x63\x21\x11\x62\x69\x74\x2d\x73\x74"
  "\x72\x69\x6e\x67\x2d\x6d\x6f\x76\x65\x21\x11\x62\x69\x74\x2d\x73"
  "\x74\x72\x69\x6e\x67\x2d\x66\x69\x6c\x6c\x21\x0d\x62\x69\x74\x2d"
  "\x73\x74\x72\x69\x6e\x67\x3d\x3f\x11\x62\x69\x74\x2d\x73\x74\x72"
  "\x69\x6e\x67\x2d\x7a\x65\x72\x6f\x3f\x10\x62\x69\x74\x2d\x73\x74"
  "\x72\x69\x6e\x67\x2d\x73\x65\x74\x21\x12\x62\x69\x74\x2d\x73\x74"
  "\x72\x69\x6e\x67\x2d\x63\x6c\x65\x61\x72\x21\x0f\x62\x69\x74\x2d"
  "\x73\x74\x72\x69\x6e\x67\x2d\x72\x65\x66\x12\x62\x69\x74\x2d\x73"
  "\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x0c\x62\x69\x74"
  "\x2d\x73\x74\x72\x69\x6e\x67\x3f\x10\x6d\x61\x6b\x65\x2d\x62\x69"
  "\x74\x2d\x73\x74\x72\x69\x6e\x67\x14\x62\x69\x74\x2d\x73\x74\x72"
  "\x69\x6e\x67\x2d\x61\x6c\x6c\x6f\x63\x61\x74\x65\x23\x05\x10\x64"
  "\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03"
  "\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
bitstr_so_data_286197f01343f3fc (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_bitstr_so_data_286197f01343f3fc [0]))), (sizeof (prog_bitstr_so_data_286197f01343f3fc)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("bitstr.so", bitstr_so_data_286197f01343f3fc)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("bitstr.so", "0247cd46f517e6cb")
