/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:40-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 6
#define DEBUGGING_LABEL_1_2 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
integer_bits_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bit_antimask_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_antimask_3)
DEFLABEL (bit_antimask_0)
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
integer_bits_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bit_count_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_count_3)
DEFLABEL (bit_count_0)
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
integer_bits_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bit_mask_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_mask_3)
DEFLABEL (bit_mask_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 2);

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
integer_bits_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bitwise_not_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bitwise_not_3)
DEFLABEL (bitwise_not_0)
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
integer_bits_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto first_set_bit_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (first_set_bit_3)
DEFLABEL (first_set_bit_0)
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
integer_bits_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto hamming_distance_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hamming_distance_3)
DEFLABEL (hamming_distance_0)
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
integer_bits_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto integer_length_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integer_length_3)
DEFLABEL (integer_length_0)
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
integer_bits_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto shift_left_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (shift_left_3)
DEFLABEL (shift_left_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 2);

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
integer_bits_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto shift_right_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (shift_right_3)
DEFLABEL (shift_right_0)
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
integer_bits_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bitwise_and_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bitwise_and_3)
DEFLABEL (bitwise_and_0)
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
integer_bits_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bitwise_andc2_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bitwise_andc2_3)
DEFLABEL (bitwise_andc2_0)
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
integer_bits_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bitwise_andc1_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bitwise_andc1_3)
DEFLABEL (bitwise_andc1_0)
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
integer_bits_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bitwise_xor_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bitwise_xor_3)
DEFLABEL (bitwise_xor_0)
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
integer_bits_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bitwise_ior_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bitwise_ior_3)
DEFLABEL (bitwise_ior_0)
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
integer_bits_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bitwise_nor_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bitwise_nor_3)
DEFLABEL (bitwise_nor_0)
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
integer_bits_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bitwise_eqv_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bitwise_eqv_3)
DEFLABEL (bitwise_eqv_0)
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
integer_bits_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bitwise_orc2_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bitwise_orc2_3)
DEFLABEL (bitwise_orc2_0)
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
integer_bits_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bitwise_orc1_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bitwise_orc1_3)
DEFLABEL (bitwise_orc1_0)
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
integer_bits_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bitwise_nand_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bitwise_nand_3)
DEFLABEL (bitwise_nand_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_6 7
#define ENVIRONMENT_LABEL_20_3 12
#define DEBUGGING_LABEL_20_2 11
#define OBJECT_20_2 10
#define OBJECT_20_1 9
#define OBJECT_20_0 8
#define FREE_REFERENCES_LABEL_20_0 8
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
integer_bits_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd26;
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
      goto arithmetic_shift_2;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (arithmetic_shift_7)
DEFLABEL (arithmetic_shift_2)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_12;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd26.Lng) < 0)
    goto label_9;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 2);

DEFLABEL (label_9)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_11;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd20.Lng) = (0 - (Wrd24.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd20.Lng)))
    goto label_11;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));

DEFLABEL (label_10)
  (Rsp [1]) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 2);

DEFLABEL (label_11)
  (Wrd12.Obj) = (current_block [OBJECT_20_1]);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_5)
  (Wrd17.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_12)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_4)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define LABEL_21_7 9
#define LABEL_21_8 11
#define LABEL_21_9 13
#define LABEL_21_10 15
#define LABEL_21_11 17
#define LABEL_21_12 19
#define LABEL_21_13 21
#define LABEL_21_14 23
#define ENVIRONMENT_LABEL_21_3 32
#define DEBUGGING_LABEL_21_2 31
#define OBJECT_21_6 30
#define OBJECT_21_5 29
#define OBJECT_21_4 28
#define OBJECT_21_3 27
#define OBJECT_21_2 26
#define OBJECT_21_1 25
#define OBJECT_21_0 24
#define FREE_REFERENCES_LABEL_21_0 24
#define NUMBER_OF_LINKER_SECTIONS_21_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
integer_bits_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_21_4);
      goto edit_bit_field_11;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_21_8);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_21_9);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_21_10);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_21_11);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_21_12);
      goto continuation_0;

    case 9:
      current_block = (Rpc - LABEL_21_13);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_21_14);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (edit_bit_field_14)
DEFLABEL (edit_bit_field_11)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_3]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_12);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_4]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_21_6);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_21_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_3]), 2);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_21_14);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_4]), 2);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_21_10);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 2);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_21_9);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_5]), 2);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_21_8);
  (Rsp [6]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_4]), 2);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_21_13);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [5]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_6]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_6 7
#define LABEL_22_7 9
#define LABEL_22_8 11
#define LABEL_22_9 13
#define LABEL_22_10 15
#define LABEL_22_11 17
#define ENVIRONMENT_LABEL_22_3 26
#define DEBUGGING_LABEL_22_2 25
#define OBJECT_22_6 24
#define OBJECT_22_5 23
#define OBJECT_22_4 22
#define OBJECT_22_3 21
#define OBJECT_22_2 20
#define OBJECT_22_1 19
#define OBJECT_22_0 18
#define FREE_REFERENCES_LABEL_22_0 18
#define NUMBER_OF_LINKER_SECTIONS_22_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
integer_bits_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_22_4);
      goto splice_bit_field_8;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_22_6);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_22_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_22_9);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_22_10);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_22_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (splice_bit_field_11)
DEFLABEL (splice_bit_field_8)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_22_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_22_11);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 2);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_22_8);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_4]), 2);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_22_7);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 2);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_22_6);
  (Rsp [5]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_10);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [4]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_6]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_6 7
#define ENVIRONMENT_LABEL_23_3 13
#define DEBUGGING_LABEL_23_2 12
#define OBJECT_23_3 11
#define OBJECT_23_2 10
#define OBJECT_23_1 9
#define OBJECT_23_0 8
#define FREE_REFERENCES_LABEL_23_0 8
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
integer_bits_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto extract_bit_field_2;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_23_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (extract_bit_field_5)
DEFLABEL (extract_bit_field_2)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_6);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_6 7
#define LABEL_24_7 9
#define LABEL_24_8 11
#define LABEL_24_9 13
#define LABEL_24_10 15
#define ENVIRONMENT_LABEL_24_3 24
#define DEBUGGING_LABEL_24_2 23
#define OBJECT_24_6 22
#define OBJECT_24_5 21
#define OBJECT_24_4 20
#define OBJECT_24_3 19
#define OBJECT_24_2 18
#define OBJECT_24_1 17
#define OBJECT_24_0 16
#define FREE_REFERENCES_LABEL_24_0 16
#define NUMBER_OF_LINKER_SECTIONS_24_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
integer_bits_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_24_4);
      goto replace_bit_field_6;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_24_6);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_24_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_24_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_24_9);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_24_10);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (replace_bit_field_9)
DEFLABEL (replace_bit_field_6)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 2);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_24_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 2);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_24_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_10);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_6]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_8);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_5]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_24_7);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_4]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_7 7
#define LABEL_25_6 9
#define LABEL_25_8 11
#define ENVIRONMENT_LABEL_25_3 18
#define DEBUGGING_LABEL_25_2 17
#define OBJECT_25_4 16
#define OBJECT_25_3 15
#define OBJECT_25_2 14
#define OBJECT_25_1 13
#define OBJECT_25_0 12
#define FREE_REFERENCES_LABEL_25_0 12
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
integer_bits_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_25_4);
      goto test_bit_fieldP_4;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_25_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_25_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (test_bit_fieldP_8)
DEFLABEL (test_bit_fieldP_4)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_3]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_8);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_4]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_13;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd16.Lng) == 0)
    goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_25_1]);
  goto label_9;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
DEFLABEL (label_12)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  goto label_10;

INVOKE_INTERFACE_TARGET_0
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
#define ENVIRONMENT_LABEL_26_3 21
#define DEBUGGING_LABEL_26_2 20
#define OBJECT_26_3 19
#define OBJECT_26_2 18
#define OBJECT_26_1 17
#define OBJECT_26_0 16
#define FREE_REFERENCES_LABEL_26_0 16
#define NUMBER_OF_LINKER_SECTIONS_26_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
integer_bits_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_26_4);
      goto test_bit_field_6;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_26_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_26_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_26_9);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_26_10);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (test_bit_field_9)
DEFLABEL (test_bit_field_6)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 2);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_26_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_26_9);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_3]), 2);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_26_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_10);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_3]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_26_7);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_3]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_8 7
#define LABEL_27_6 9
#define LABEL_27_7 11
#define LABEL_27_9 13
#define LABEL_27_10 15
#define LABEL_27_11 17
#define LABEL_27_12 19
#define ENVIRONMENT_LABEL_27_3 26
#define DEBUGGING_LABEL_27_2 25
#define OBJECT_27_4 24
#define OBJECT_27_3 23
#define OBJECT_27_2 22
#define OBJECT_27_1 21
#define OBJECT_27_0 20
#define FREE_REFERENCES_LABEL_27_0 20
#define NUMBER_OF_LINKER_SECTIONS_27_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
integer_bits_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_27_4);
      goto any_bits_setP_9;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_27_8);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_27_6);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_27_7);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_27_9);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_27_10);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_27_11);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_27_12);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (any_bits_setP_13)
DEFLABEL (any_bits_setP_9)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_0]), 2);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_27_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 2);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_27_11);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_4]), 2);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_27_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_27_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_0]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_27_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_12);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_4]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_27_9);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_4]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_18;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd16.Lng) == 0)
    goto label_15;

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_27_1]);
  goto label_14;

DEFLABEL (label_15)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_14)
DEFLABEL (label_17)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_15;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_6 7
#define LABEL_28_7 9
#define LABEL_28_8 11
#define LABEL_28_9 13
#define LABEL_28_10 15
#define LABEL_28_11 17
#define ENVIRONMENT_LABEL_28_3 24
#define DEBUGGING_LABEL_28_2 23
#define OBJECT_28_4 22
#define OBJECT_28_3 21
#define OBJECT_28_2 20
#define OBJECT_28_1 19
#define OBJECT_28_0 18
#define FREE_REFERENCES_LABEL_28_0 18
#define NUMBER_OF_LINKER_SECTIONS_28_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
integer_bits_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_28_4);
      goto all_bits_setP_8;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_28_6);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_28_7);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_28_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_28_9);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_28_10);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_28_11);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (all_bits_setP_11)
DEFLABEL (all_bits_setP_8)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 2);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_28_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_3]), 2);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_28_10);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_4]), 2);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_28_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_28_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_28_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_3]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_28_11);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_4]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_28_8);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_4]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd5.Obj);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd9.uLng) == 26)
    goto label_13;

DEFLABEL (label_12)
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_13)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_12;
  if ((Wrd8.Obj) == (Wrd10.Obj))
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_14;

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_28_1]);

DEFLABEL (label_14)
DEFLABEL (label_16)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_6 7
#define ENVIRONMENT_LABEL_29_3 12
#define DEBUGGING_LABEL_29_2 11
#define OBJECT_29_2 10
#define OBJECT_29_1 9
#define OBJECT_29_0 8
#define FREE_REFERENCES_LABEL_29_0 8
#define NUMBER_OF_LINKER_SECTIONS_29_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
integer_bits_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_29_4);
      goto bitwise_merge_2;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_29_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bitwise_merge_5)
DEFLABEL (bitwise_merge_2)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_0]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_6);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define ENVIRONMENT_LABEL_30_3 10
#define DEBUGGING_LABEL_30_2 9
#define OBJECT_30_2 8
#define OBJECT_30_1 7
#define OBJECT_30_0 6
#define FREE_REFERENCES_LABEL_30_0 6
#define NUMBER_OF_LINKER_SECTIONS_30_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
integer_bits_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_30_4);
      goto set_bit_1;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_bit_4)
DEFLABEL (set_bit_1)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define ENVIRONMENT_LABEL_31_3 10
#define DEBUGGING_LABEL_31_2 9
#define OBJECT_31_2 8
#define OBJECT_31_1 7
#define OBJECT_31_0 6
#define FREE_REFERENCES_LABEL_31_0 6
#define NUMBER_OF_LINKER_SECTIONS_31_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
integer_bits_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto clear_bit_1;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (clear_bit_4)
DEFLABEL (clear_bit_1)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 2);

INVOKE_INTERFACE_TARGET_1
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
integer_bits_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto toggle_bit_1;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (toggle_bit_4)
DEFLABEL (toggle_bit_1)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_6 7
#define ENVIRONMENT_LABEL_33_3 14
#define DEBUGGING_LABEL_33_2 13
#define OBJECT_33_4 12
#define OBJECT_33_3 11
#define OBJECT_33_2 10
#define OBJECT_33_1 9
#define OBJECT_33_0 8
#define FREE_REFERENCES_LABEL_33_0 8
#define NUMBER_OF_LINKER_SECTIONS_33_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
integer_bits_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_33_4);
      goto extract_bit_2;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_33_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (extract_bit_5)
DEFLABEL (extract_bit_2)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_0]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_6]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_33_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_33_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_3]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_6);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_4]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_7 7
#define LABEL_34_6 9
#define LABEL_34_8 11
#define ENVIRONMENT_LABEL_34_3 19
#define DEBUGGING_LABEL_34_2 18
#define OBJECT_34_5 17
#define OBJECT_34_4 16
#define OBJECT_34_3 15
#define OBJECT_34_2 14
#define OBJECT_34_1 13
#define OBJECT_34_0 12
#define FREE_REFERENCES_LABEL_34_0 12
#define NUMBER_OF_LINKER_SECTIONS_34_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
integer_bits_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_34_4);
      goto bit_setP_4;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_34_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_34_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_34_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_setP_8)
DEFLABEL (bit_setP_4)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_34_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_4]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_8);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_5]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_13;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd16.Lng) == 0)
    goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_34_1]);
  goto label_9;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  goto label_10;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_6 7
#define LABEL_35_7 9
#define ENVIRONMENT_LABEL_35_3 17
#define DEBUGGING_LABEL_35_2 16
#define OBJECT_35_5 15
#define OBJECT_35_4 14
#define OBJECT_35_3 13
#define OBJECT_35_2 12
#define OBJECT_35_1 11
#define OBJECT_35_0 10
#define FREE_REFERENCES_LABEL_35_0 10
#define NUMBER_OF_LINKER_SECTIONS_35_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
integer_bits_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_35_4);
      goto bit_clearP_3;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_35_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_35_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_clearP_6)
DEFLABEL (bit_clearP_3)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_0]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_35_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_35_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_4]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_7);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_5]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 26)
    goto label_7;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd10.Lng) == 0)
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_35_1]);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_6 5
#define LABEL_36_5 7
#define ENVIRONMENT_LABEL_36_3 13
#define DEBUGGING_LABEL_36_2 12
#define OBJECT_36_3 11
#define OBJECT_36_2 10
#define OBJECT_36_1 9
#define OBJECT_36_0 8
#define FREE_REFERENCES_LABEL_36_0 8
#define NUMBER_OF_LINKER_SECTIONS_36_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
integer_bits_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
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
      goto copy_bit_2;

    case 1:
      current_block = (Rpc - LABEL_36_6);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_bit_5)
DEFLABEL (copy_bit_2)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_6;

DEFLABEL (label_7)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_36_0]);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_36_6);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_2]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_7 7
#define LABEL_37_6 9
#define ENVIRONMENT_LABEL_37_3 15
#define DEBUGGING_LABEL_37_2 14
#define OBJECT_37_3 13
#define OBJECT_37_2 12
#define OBJECT_37_1 11
#define OBJECT_37_0 10
#define FREE_REFERENCES_LABEL_37_0 10
#define NUMBER_OF_LINKER_SECTIONS_37_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
integer_bits_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_37_4);
      goto bit_field_3;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_37_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_37_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_field_7)
DEFLABEL (bit_field_3)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_0]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_9;
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_9;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) - (Wrd22.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_9;
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_37_6);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_3]), 2);

DEFLABEL (label_9)
  (Wrd9.Obj) = (Rsp [5]);
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define ENVIRONMENT_LABEL_38_3 10
#define DEBUGGING_LABEL_38_2 9
#define EXECUTE_CACHE_38_6 7
#define FREE_REFERENCES_LABEL_38_0 6
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
integer_bits_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_38_4);
      goto copy_bit_field_1;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_bit_field_5)
DEFLABEL (copy_bit_field_1)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_7;
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_7;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd17.Lng) - (Wrd19.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_7;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_6)
  (Wrd20.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd22.Obj);
  (Rsp [0]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (label_7)
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_3)
  (Wrd10.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_6 7
#define LABEL_39_7 9
#define LABEL_39_8 11
#define LABEL_39_10 13
#define LABEL_39_13 15
#define LABEL_39_11 17
#define LABEL_39_12 19
#define LABEL_39_14 21
#define ENVIRONMENT_LABEL_39_3 32
#define DEBUGGING_LABEL_39_2 31
#define OBJECT_39_5 30
#define OBJECT_39_4 29
#define OBJECT_39_3 28
#define OBJECT_39_2 27
#define OBJECT_39_1 26
#define OBJECT_39_0 25
#define EXECUTE_CACHE_39_9 23
#define FREE_REFERENCES_LABEL_39_0 22
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
integer_bits_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_39_4);
      goto rotate_bit_field_11;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_39_6);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_39_7);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_39_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_39_10);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_39_13);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_39_11);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_39_12);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_39_14);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rotate_bit_field_16)
DEFLABEL (rotate_bit_field_11)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_20;
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_20;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) - (Wrd18.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_20;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_19)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_0]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_39_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_2]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_39_11);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_3]), 2);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_39_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_1)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_18;
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 26))
    goto label_18;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd17.Lng) = ((Wrd19.Lng) - (Wrd21.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd17.Lng)))
    goto label_18;
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_17)
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_0]), 2);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_39_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_4]), 2);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_39_14);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_5]), 2);

DEFLABEL (label_18)
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_13]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_39_6);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd8.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_9]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_8 7
#define LABEL_40_9 9
#define LABEL_40_10 11
#define LABEL_40_6 13
#define LABEL_40_7 15
#define LABEL_40_11 17
#define LABEL_40_12 19
#define LABEL_40_13 21
#define LABEL_40_14 23
#define ENVIRONMENT_LABEL_40_3 32
#define DEBUGGING_LABEL_40_2 31
#define OBJECT_40_6 30
#define OBJECT_40_5 29
#define OBJECT_40_4 28
#define OBJECT_40_3 27
#define OBJECT_40_2 26
#define OBJECT_40_1 25
#define OBJECT_40_0 24
#define FREE_REFERENCES_LABEL_40_0 24
#define NUMBER_OF_LINKER_SECTIONS_40_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
integer_bits_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd33;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd24;
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
      goto bit_reverse_10;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_40_8);
      goto loop_9;

    case 3:
      current_block = (Rpc - LABEL_40_9);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_40_10);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_40_6);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_40_7);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_40_11);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_40_12);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_40_13);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_40_14);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_reverse_16)
DEFLABEL (bit_reverse_10)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_20;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd24.Lng) < 0)
    goto label_19;

DEFLABEL (label_18)
  (Wrd12.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_40_0]);
  (Rsp [2]) = (Wrd14.Obj);
  goto loop_9;

DEFLABEL (label_19)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_40_0]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_9;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_40_6);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 1);

DEFLABEL (label_20)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_19;

DEFLABEL (loop_17)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_40_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_25;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd33.Lng) > 0)
    goto label_22;

DEFLABEL (label_21)
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_24;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd21.Lng) = ((Wrd23.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd21.Lng)))
    goto label_24;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd21.Lng));

DEFLABEL (label_23)
  (Rsp [0]) = (Wrd18.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_12]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_40_2]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_3]), 2);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_40_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_5]), 2);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_40_14);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_6]), 2);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_40_11);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_40_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_4]), 2);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_40_13);
  (Rsp [1]) = Rvl;
  goto loop_9;

DEFLABEL (label_24)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_14)
  (Wrd18.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_25)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_22;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_6 7
#define LABEL_41_7 9
#define LABEL_41_8 11
#define LABEL_41_11 13
#define ENVIRONMENT_LABEL_41_3 24
#define DEBUGGING_LABEL_41_2 23
#define OBJECT_41_3 22
#define OBJECT_41_2 21
#define OBJECT_41_1 20
#define OBJECT_41_0 19
#define EXECUTE_CACHE_41_10 15
#define EXECUTE_CACHE_41_9 17
#define FREE_REFERENCES_LABEL_41_0 14
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
integer_bits_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_41_4);
      goto reverse_bit_field_6;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_41_6);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_41_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_41_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_41_11);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reverse_bit_field_10)
DEFLABEL (reverse_bit_field_6)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_12;
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_12;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) - (Wrd18.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_12;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_11)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_0]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_41_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_2]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_41_11);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_3]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_41_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_41_6);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (label_12)
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_7 7
#define LABEL_42_8 9
#define LABEL_42_11 11
#define LABEL_42_12 13
#define LABEL_42_13 15
#define LABEL_42_9 17
#define LABEL_42_14 19
#define LABEL_42_15 21
#define LABEL_42_16 23
#define ENVIRONMENT_LABEL_42_3 35
#define DEBUGGING_LABEL_42_2 34
#define OBJECT_42_4 33
#define OBJECT_42_3 32
#define OBJECT_42_2 31
#define OBJECT_42_1 30
#define OBJECT_42_0 29
#define EXECUTE_CACHE_42_10 25
#define EXECUTE_CACHE_42_6 27
#define FREE_REFERENCES_LABEL_42_0 24
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
integer_bits_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd29;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
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
      goto integer__list_17;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_42_7);
      goto do_loop_15;

    case 3:
      current_block = (Rpc - LABEL_42_8);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_42_11);
      goto do_loop_8;

    case 5:
      current_block = (Rpc - LABEL_42_12);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_42_13);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_42_9);
      goto continuation_13;

    case 8:
      current_block = (Rpc - LABEL_42_14);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_42_15);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_42_16);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integer__list_23)
DEFLABEL (integer__list_17)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_42_0])))
    goto label_26;
  (Wrd12.Obj) = (current_block [OBJECT_42_1]);
  (Rsp [1]) = (Wrd12.Obj);
  goto do_loop_15;

DEFLABEL (label_26)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_42_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_42_5);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_42_1]);
  (Rsp [2]) = (Wrd6.Obj);
  goto do_loop_8;

DEFLABEL (do_loop_24)
DEFLABEL (do_loop_15)
  INTERRUPT_CHECK (26, LABEL_42_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_29;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd19.Lng) == 0))
    goto label_28;

DEFLABEL (label_27)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_10]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_42_9);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_15]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_42_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_4]), 2);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_42_15);
  (Rsp [0]) = Rvl;
  goto do_loop_15;

DEFLABEL (label_29)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  goto label_27;

DEFLABEL (do_loop_25)
DEFLABEL (do_loop_8)
  INTERRUPT_CHECK (26, LABEL_42_11);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_34;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd29.Lng) == 0))
    goto label_31;

DEFLABEL (label_30)
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_33;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd19.Lng) = ((Wrd21.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd19.Lng)))
    goto label_33;
  (Wrd16.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));

DEFLABEL (label_32)
  (Rsp [0]) = (Wrd16.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_14]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_42_14);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_16]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_42_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_4]), 2);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_42_16);
  (Rsp [1]) = Rvl;
  goto do_loop_8;

DEFLABEL (label_33)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_21)
  (Wrd16.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_20)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  goto label_30;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_7 7
#define LABEL_43_6 9
#define LABEL_43_9 11
#define LABEL_43_8 13
#define ENVIRONMENT_LABEL_43_3 21
#define DEBUGGING_LABEL_43_2 20
#define OBJECT_43_5 19
#define OBJECT_43_4 18
#define OBJECT_43_3 17
#define OBJECT_43_2 16
#define OBJECT_43_1 15
#define OBJECT_43_0 14
#define FREE_REFERENCES_LABEL_43_0 14
#define NUMBER_OF_LINKER_SECTIONS_43_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
integer_bits_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd28;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
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
      goto list__integer_9;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto do_loop_7;

    case 2:
      current_block = (Rpc - LABEL_43_7);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_43_6);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_43_9);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_43_8);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (list__integer_14)
DEFLABEL (list__integer_9)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_43_0]);
  (Rsp [1]) = (Wrd6.Obj);
  goto do_loop_7;

DEFLABEL (do_loop_15)
DEFLABEL (do_loop_7)
  INTERRUPT_CHECK (26, LABEL_43_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_16;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_23;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  if ((Wrd14.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;

DEFLABEL (label_19)
  (Wrd22.Obj) = (current_block [OBJECT_43_2]);
  (* (--Rsp)) = (Wrd22.Obj);
  goto label_17;

DEFLABEL (label_18)
  (Wrd16.Obj) = (current_block [OBJECT_43_0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_17)
DEFLABEL (label_22)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_8]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_43_2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_3]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_43_8);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_5]), 2);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_43_6);
  (Rsp [1]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_21;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_20)
  (Rsp [0]) = (Wrd6.Obj);
  goto do_loop_7;

DEFLABEL (label_21)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_4]), 1);

DEFLABEL (label_12)
  (Wrd6.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 1);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_19;

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
integer_bits_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto bit_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bit_3)
DEFLABEL (bit_0)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd5.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_6 7
#define LABEL_45_7 9
#define LABEL_45_8 11
#define ENVIRONMENT_LABEL_45_3 14
#define DEBUGGING_LABEL_45_2 13
#define OBJECT_45_0 12
#define FREE_REFERENCES_LABEL_45_0 12
#define NUMBER_OF_LINKER_SECTIONS_45_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
integer_bits_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_45_4);
      goto bits_4;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_45_6);
      goto Z__bits_3;

    case 3:
      current_block = (Rpc - LABEL_45_7);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_45_8);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bits_10)
DEFLABEL (bits_4)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_14;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_14;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd18.Lng) > (Wrd20.Lng)))
    goto label_12;

DEFLABEL (label_13)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd16.Obj);
  (Rsp [1]) = (Wrd15.Obj);

DEFLABEL (label_12)
  goto Z__bits_3;

DEFLABEL (label_14)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  goto label_13;

DEFLABEL (Z__bits_11)
DEFLABEL (Z__bits_3)
  INTERRUPT_CHECK (26, LABEL_45_6);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_18;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd15.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_18;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_17)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_16;
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_16;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd25.Lng) = ((Wrd26.Lng) - (Wrd28.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd25.Lng)))
    goto label_16;
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));

DEFLABEL (label_15)
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd29.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 2);

DEFLABEL (label_16)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_8)
  (Wrd21.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_7)
  (Wrd10.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define LABEL_46_6 7
#define ENVIRONMENT_LABEL_46_3 12
#define DEBUGGING_LABEL_46_2 11
#define OBJECT_46_2 10
#define OBJECT_46_1 9
#define OBJECT_46_0 8
#define FREE_REFERENCES_LABEL_46_0 8
#define NUMBER_OF_LINKER_SECTIONS_46_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
integer_bits_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_46_4);
      goto shiftout_2;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_46_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (shiftout_5)
DEFLABEL (shiftout_2)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_6]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_46_6);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define ENVIRONMENT_LABEL_47_3 9
#define DEBUGGING_LABEL_47_2 8
#define OBJECT_47_1 7
#define OBJECT_47_0 6
#define FREE_REFERENCES_LABEL_47_0 6
#define NUMBER_OF_LINKER_SECTIONS_47_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
integer_bits_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_47_4);
      goto shiftin_1;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (shiftin_4)
DEFLABEL (shiftin_1)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 2);

INVOKE_INTERFACE_TARGET_1
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
integer_bits_so_6debaef5963401d7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	0,
	0,
	0,
	0,
	0,
	1,
	1,
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
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 47)
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

static const struct liarc_code_S arr_decl_integer_bits_so_6debaef5963401d7 [47] =
  {
    { "integer_bits_so_code_1", 1, integer_bits_so_code_1 },
    { "integer_bits_so_code_2", 1, integer_bits_so_code_2 },
    { "integer_bits_so_code_3", 1, integer_bits_so_code_3 },
    { "integer_bits_so_code_4", 1, integer_bits_so_code_4 },
    { "integer_bits_so_code_5", 1, integer_bits_so_code_5 },
    { "integer_bits_so_code_6", 1, integer_bits_so_code_6 },
    { "integer_bits_so_code_7", 1, integer_bits_so_code_7 },
    { "integer_bits_so_code_8", 1, integer_bits_so_code_8 },
    { "integer_bits_so_code_9", 1, integer_bits_so_code_9 },
    { "integer_bits_so_code_10", 1, integer_bits_so_code_10 },
    { "integer_bits_so_code_11", 1, integer_bits_so_code_11 },
    { "integer_bits_so_code_12", 1, integer_bits_so_code_12 },
    { "integer_bits_so_code_13", 1, integer_bits_so_code_13 },
    { "integer_bits_so_code_14", 1, integer_bits_so_code_14 },
    { "integer_bits_so_code_15", 1, integer_bits_so_code_15 },
    { "integer_bits_so_code_16", 1, integer_bits_so_code_16 },
    { "integer_bits_so_code_17", 1, integer_bits_so_code_17 },
    { "integer_bits_so_code_18", 1, integer_bits_so_code_18 },
    { "integer_bits_so_code_19", 1, integer_bits_so_code_19 },
    { "integer_bits_so_code_20", 3, integer_bits_so_code_20 },
    { "integer_bits_so_code_21", 11, integer_bits_so_code_21 },
    { "integer_bits_so_code_22", 8, integer_bits_so_code_22 },
    { "integer_bits_so_code_23", 3, integer_bits_so_code_23 },
    { "integer_bits_so_code_24", 7, integer_bits_so_code_24 },
    { "integer_bits_so_code_25", 5, integer_bits_so_code_25 },
    { "integer_bits_so_code_26", 7, integer_bits_so_code_26 },
    { "integer_bits_so_code_27", 9, integer_bits_so_code_27 },
    { "integer_bits_so_code_28", 8, integer_bits_so_code_28 },
    { "integer_bits_so_code_29", 3, integer_bits_so_code_29 },
    { "integer_bits_so_code_30", 2, integer_bits_so_code_30 },
    { "integer_bits_so_code_31", 2, integer_bits_so_code_31 },
    { "integer_bits_so_code_32", 2, integer_bits_so_code_32 },
    { "integer_bits_so_code_33", 3, integer_bits_so_code_33 },
    { "integer_bits_so_code_34", 5, integer_bits_so_code_34 },
    { "integer_bits_so_code_35", 4, integer_bits_so_code_35 },
    { "integer_bits_so_code_36", 3, integer_bits_so_code_36 },
    { "integer_bits_so_code_37", 4, integer_bits_so_code_37 },
    { "integer_bits_so_code_38", 2, integer_bits_so_code_38 },
    { "integer_bits_so_code_39", 10, integer_bits_so_code_39 },
    { "integer_bits_so_code_40", 11, integer_bits_so_code_40 },
    { "integer_bits_so_code_41", 6, integer_bits_so_code_41 },
    { "integer_bits_so_code_42", 11, integer_bits_so_code_42 },
    { "integer_bits_so_code_43", 6, integer_bits_so_code_43 },
    { "integer_bits_so_code_44", 1, integer_bits_so_code_44 },
    { "integer_bits_so_code_45", 5, integer_bits_so_code_45 },
    { "integer_bits_so_code_46", 3, integer_bits_so_code_46 },
    { "integer_bits_so_code_47", 2, integer_bits_so_code_47 }
  };

int
decl_integer_bits_so_6debaef5963401d7 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_integer_bits_so_6debaef5963401d7);
  return (0);
}

DECLARE_COMPILED_CODE ("integer-bits.so", 3, decl_integer_bits_so_6debaef5963401d7, integer_bits_so_6debaef5963401d7)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_integer_bits_so_data_6debaef5963401d7 [3423] =
  "\x50\x36\x8c\x08\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\x22\x29\x21"
  "\x9d\x2b\xb9\x1d\xb0\x82\x88\xc1\x22\x29\x21\x9d\x2b\xba\x1d\xb0"
  "\x83\x88\xc2\xbb\x22\x29\x21\x9d\x2b\xbc\x1d\xb0\x84\x88\xc1\xbd"
  "\x22\x29\x21\x9d\x2b\xbe\x1d\xb0\x85\x88\xc1\xbf\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x86\x88\xc2\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02"
  "\x88\xc1\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x22\x29"
  "\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x22\x29\x21\x9d\x2b\x1c"
  "\x1d\xb0\x02\x88\xc2\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88"
  "\xc2\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x22\x29\x21"
  "\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\xc2\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2"
  "\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x22\x29\x21\x9d\x2b"
  "\x1c\x1d\xb0\x02\x88\xc2\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88"
  "\xc2\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\x1b\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\xb3\x1b\x1b\x80\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\x1b\x1b"
  "\x1b\x1b\xb3\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb3\x80\x1b\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b"
  "\x1b\x1b\x80\xb3\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb3\x80\x07\x1b\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\xb3\x80\x1b\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb3\x80\x07\x1b"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb3\x80\x07\x1b\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x81\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x81\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x81\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\xb3\x81\x80\x1b\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb3\x81\x80\x07\x1b\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\xb3\x81\x80\x07\x1b\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x81\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb3\x80\x1b\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\xb3"
  "\x80\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1b\x1b\x1b\x81\xb5\x80\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xbd\x1d\xb0\x02\x88\x1b\xb3\x80\x1b\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x81\x0d\x1c\x08\x1d\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xc1\x1b"
  "\x81\xc1\x80\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\xb3\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xbb\x1d\xb0\x02\x88\x1b\xb7\x1b\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb7\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a\xb3\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\xb5\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb6\x2a\xb4\x2a\xb2"
  "\x2a\xb1\x2a\x17\x0d\x0d\x0d\x0d\x0d\x1b\x0d\x1b\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02"
  "\x5b\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74"
  "\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f"
  "\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63"
  "\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x69\x6e\x74\x65\x67"
  "\x65\x72\x2d\x62\x69\x74\x73\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75"
  "\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d"
  "\x02\x1b\x69\x6e\x74\x65\x67\x65\x72\x2d\x6e\x65\x67\x61\x74\x69"
  "\x76\x65\x2d\x7a\x65\x72\x6f\x2d\x62\x69\x74\x73\x04\x04\x84\x06"
  "\x03\x02\x12\x69\x6e\x74\x65\x67\x65\x72\x2d\x62\x69\x74\x2d\x63"
  "\x6f\x75\x6e\x74\x05\x04\x83\x04\x03\x02\x1d\x69\x6e\x74\x65\x67"
  "\x65\x72\x2d\x6e\x6f\x6e\x6e\x65\x67\x61\x74\x69\x76\x65\x2d\x6f"
  "\x6e\x65\x2d\x62\x69\x74\x73\x06\x04\x84\x06\x03\x02\x14\x69\x6e"
  "\x74\x65\x67\x65\x72\x2d\x62\x69\x74\x77\x69\x73\x65\x2d\x6e\x6f"
  "\x74\x07\x04\x83\x04\x03\x02\x16\x69\x6e\x74\x65\x67\x65\x72\x2d"
  "\x66\x69\x72\x73\x74\x2d\x73\x65\x74\x2d\x62\x69\x74\x08\x04\x83"
  "\x04\x03\x09\x02\x19\x69\x6e\x74\x65\x67\x65\x72\x2d\x68\x61\x6d"
  "\x6d\x69\x6e\x67\x2d\x64\x69\x73\x74\x61\x6e\x63\x65\x09\x04\x84"
  "\x06\x03\x0a\x02\x08\x0f\x69\x6e\x74\x65\x67\x65\x72\x2d\x6c\x65"
  "\x6e\x67\x74\x68\x0a\x04\x83\x04\x03\x0b\x02\x09\x13\x69\x6e\x74"
  "\x65\x67\x65\x72\x2d\x73\x68\x69\x66\x74\x2d\x6c\x65\x66\x74\x0c"
  "\x0b\x04\x84\x06\x03\x0d\x02\x0a\x14\x69\x6e\x74\x65\x67\x65\x72"
  "\x2d\x73\x68\x69\x66\x74\x2d\x72\x69\x67\x68\x74\x0e\x0c\x04\x84"
  "\x06\x03\x0f\x02\x0b\x14\x69\x6e\x74\x65\x67\x65\x72\x2d\x62\x69"
  "\x74\x77\x69\x73\x65\x2d\x61\x6e\x64\x10\x0d\x04\x84\x06\x03\x11"
  "\x02\x0c\x16\x69\x6e\x74\x65\x67\x65\x72\x2d\x62\x69\x74\x77\x69"
  "\x73\x65\x2d\x61\x6e\x64\x63\x32\x12\x0e\x04\x84\x06\x03\x13\x02"
  "\x0d\x16\x69\x6e\x74\x65\x67\x65\x72\x2d\x62\x69\x74\x77\x69\x73"
  "\x65\x2d\x61\x6e\x64\x63\x31\x0f\x04\x84\x06\x03\x14\x02\x0e\x14"
  "\x69\x6e\x74\x65\x67\x65\x72\x2d\x62\x69\x74\x77\x69\x73\x65\x2d"
  "\x78\x6f\x72\x15\x10\x04\x84\x06\x03\x16\x02\x0f\x14\x69\x6e\x74"
  "\x65\x67\x65\x72\x2d\x62\x69\x74\x77\x69\x73\x65\x2d\x69\x6f\x72"
  "\x17\x11\x04\x84\x06\x03\x18\x02\x10\x14\x69\x6e\x74\x65\x67\x65"
  "\x72\x2d\x62\x69\x74\x77\x69\x73\x65\x2d\x6e\x6f\x72\x12\x04\x84"
  "\x06\x03\x19\x02\x11\x14\x69\x6e\x74\x65\x67\x65\x72\x2d\x62\x69"
  "\x74\x77\x69\x73\x65\x2d\x65\x71\x76\x13\x04\x84\x06\x03\x1a\x02"
  "\x12\x15\x69\x6e\x74\x65\x67\x65\x72\x2d\x62\x69\x74\x77\x69\x73"
  "\x65\x2d\x6f\x72\x63\x32\x14\x04\x84\x06\x03\x1b\x02\x13\x15\x69"
  "\x6e\x74\x65\x67\x65\x72\x2d\x62\x69\x74\x77\x69\x73\x65\x2d\x6f"
  "\x72\x63\x31\x15\x04\x84\x06\x03\x1c\x02\x14\x15\x69\x6e\x74\x65"
  "\x67\x65\x72\x2d\x62\x69\x74\x77\x69\x73\x65\x2d\x6e\x61\x6e\x64"
  "\x16\x04\x84\x06\x03\x1d\x02\x15\x0e\x0c\x19\x08\x81\x85\x02\x18"
  "\x06\x81\x85\x02\x17\x04\x84\x06\x07\x0d\x1e\x02\x16\x17\x12\x10"
  "\x0c\x0e\x24\x18\x81\x9b\x02\x23\x16\x81\x8f\x02\x22\x14\x81\x95"
  "\x02\x21\x12\x81\x99\x02\x20\x10\x81\x97\x02\x1f\x0e\x81\x93\x02"
  "\x1e\x0c\x81\x8f\x02\x1d\x0a\x81\x93\x02\x1c\x08\x81\x91\x02\x1b"
  "\x06\x81\x8d\x02\x1a\x04\x88\x0e\x17\x21\x1f\x02\x17\x17\x0c\x12"
  "\x10\x0e\x2c\x12\x81\x99\x02\x2b\x10\x81\x8d\x02\x2a\x0e\x81\x97"
  "\x02\x29\x0c\x81\x95\x02\x28\x0a\x81\x91\x02\x27\x08\x81\x8d\x02"
  "\x26\x06\x81\x8b\x02\x25\x04\x87\x0c\x11\x1b\x20\x02\x18\x10\x0e"
  "\x2f\x08\x81\x87\x02\x2e\x06\x81\x87\x02\x2d\x04\x85\x08\x07\x0e"
  "\x21\x02\x19\x10\x0c\x17\x12\x0e\x36\x10\x81\x93\x02\x35\x0e\x81"
  "\x91\x02\x34\x0c\x81\x8f\x02\x33\x0a\x81\x8b\x02\x32\x08\x81\x8b"
  "\x02\x31\x06\x81\x89\x02\x30\x04\x86\x0a\x0f\x19\x22\x02\x1a\x10"
  "\x0e\x3b\x0c\x81\x8b\x02\x3a\x0a\x81\x89\x02\x39\x08\x81\x87\x02"
  "\x38\x06\x81\x87\x02\x37\x04\x85\x08\x0b\x13\x23\x02\x1b\x10\x0e"
  "\x42\x10\x81\x8f\x02\x41\x0e\x81\x8d\x02\x40\x0c\x81\x8d\x02\x3f"
  "\x0a\x81\x8b\x02\x3e\x08\x81\x8b\x02\x3d\x06\x81\x89\x02\x3c\x04"
  "\x86\x0a\x0f\x16\x24\x02\x1c\x10\x0e\x4b\x14\x81\x87\x02\x4a\x12"
  "\x81\x85\x02\x49\x10\x81\x85\x02\x48\x0e\x81\x83\x02\x47\x0c\x81"
  "\x83\x02\x46\x0a\x81\x81\x02\x45\x08\x81\x89\x02\x44\x06\x81\x89"
  "\x02\x43\x04\x86\x0a\x13\x1b\x25\x02\x1d\x10\x0e\x53\x12\x81\x87"
  "\x02\x52\x10\x81\x85\x02\x51\x0e\x81\x85\x02\x50\x0c\x81\x83\x02"
  "\x4f\x0a\x81\x83\x02\x4e\x08\x81\x81\x02\x4d\x06\x81\x89\x02\x4c"
  "\x04\x86\x0a\x11\x19\x26\x02\x1e\x17\x12\x10\x56\x08\x81\x87\x02"
  "\x55\x06\x81\x87\x02\x54\x04\x85\x08\x07\x0d\x27\x02\x1f\x17\x0c"
  "\x58\x06\x81\x85\x02\x57\x04\x84\x06\x05\x0b\x28\x02\x20\x12\x0c"
  "\x5a\x06\x81\x85\x02\x59\x04\x84\x06\x05\x0b\x29\x02\x21\x15\x0c"
  "\x5c\x06\x81\x85\x02\x5b\x04\x84\x06\x05\x0b\x15\x02\x22\x10\x0e"
  "\x5f\x08\x81\x85\x02\x5e\x06\x81\x85\x02\x5d\x04\x84\x06\x07\x0f"
  "\x2a\x02\x23\x10\x0e\x64\x0c\x81\x89\x02\x63\x0a\x81\x87\x02\x62"
  "\x08\x81\x85\x02\x61\x06\x81\x85\x02\x60\x04\x84\x06\x0b\x14\x2b"
  "\x02\x24\x10\x0e\x68\x0a\x81\x89\x02\x67\x08\x81\x87\x02\x66\x06"
  "\x81\x85\x02\x65\x04\x84\x06\x09\x12\x2c\x02\x25\x12\x17\x0c\x6b"
  "\x08\x81\x87\x02\x6a\x06\x81\x87\x02\x69\x04\x85\x08\x07\x0e\x12"
  "\x02\x26\x10\x0e\x6f\x0a\x81\x89\x02\x6e\x08\x81\x8d\x02\x6d\x06"
  "\x81\x87\x02\x6c\x04\x85\x08\x09\x10\x2d\x02\x27\x06\x12\x72\x65"
  "\x70\x6c\x61\x63\x65\x2d\x62\x69\x74\x2d\x66\x69\x65\x6c\x64\x2e"
  "\x02\x71\x06\x81\x89\x02\x70\x04\x86\x0a\x05\x0b\x2f\x02\x28\x17"
  "\x0c\x10\x0e\x06\x2e\x02\x7b\x16\x81\x87\x02\x7a\x14\x81\x85\x02"
  "\x79\x12\x81\x91\x02\x78\x10\x81\x87\x02\x77\x0e\x81\x8f\x02\x76"
  "\x0c\x81\x8f\x02\x75\x0a\x81\x8d\x02\x74\x08\x81\x8b\x02\x73\x06"
  "\x81\x89\x02\x72\x04\x86\x0a\x15\x21\x30\x02\x29\x17\x0c\x0e\x10"
  "\x86\x01\x18\x81\x8b\x02\x85\x01\x16\x81\x87\x02\x84\x01\x14\x81"
  "\x89\x02\x83\x01\x12\x81\x87\x02\x82\x01\x10\x81\x89\x02\x81\x01"
  "\x0e\x81\x85\x02\x80\x01\x0c\x81\x87\x02\x7f\x0a\x81\x87\x02\x7e"
  "\x08\x81\x87\x02\x7d\x06\x81\x85\x02\x7c\x04\x84\x06\x17\x21\x02"
  "\x2a\x10\x0e\x05\x2e\x03\x0c\x62\x69\x74\x2d\x72\x65\x76\x65\x72"
  "\x73\x65\x31\x03\x8c\x01\x0e\x81\x8f\x02\x8b\x01\x0c\x81\x8d\x02"
  "\x8a\x01\x0a\x81\x8b\x02\x89\x01\x08\x81\x89\x02\x88\x01\x06\x81"
  "\x87\x02\x87\x01\x04\x85\x08\x0d\x19\x32\x02\x2b\x0e\x0e\x69\x6e"
  "\x74\x65\x67\x65\x72\x2d\x3e\x6c\x69\x73\x74\x33\x08\x04\x17\x67"
  "\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x69\x6e\x64\x65\x78\x2d\x66"
  "\x69\x78\x6e\x75\x6d\x03\x05\x6f\x64\x64\x3f\x03\x97\x01\x18\x81"
  "\x87\x02\x96\x01\x16\x81\x85\x02\x95\x01\x14\x81\x87\x02\x94\x01"
  "\x12\x81\x85\x02\x93\x01\x10\x81\x87\x02\x92\x01\x0e\x81\x87\x02"
  "\x91\x01\x0c\x81\x87\x02\x90\x01\x0a\x81\x85\x02\x8f\x01\x08\x81"
  "\x85\x02\x8e\x01\x06\x81\x85\x02\x8d\x01\x04\x84\x04\x17\x24\x34"
  "\x02\x2c\x17\x04\x63\x64\x72\x0c\x04\x63\x61\x72\x9d\x01\x0e\x81"
  "\x89\x02\x9c\x01\x0c\x81\x85\x02\x9b\x01\x0a\x81\x85\x02\x9a\x01"
  "\x08\x81\x87\x02\x99\x01\x06\x81\x85\x02\x98\x01\x04\x83\x04\x0d"
  "\x16\x17\x02\x2d\x0c\x9e\x01\x04\x83\x04\x03\x35\x02\x2e\xa3\x01"
  "\x0c\x81\x87\x02\xa2\x01\x0a\x81\x87\x02\xa1\x01\x08\x81\x85\x02"
  "\xa0\x01\x06\x81\x85\x02\x9f\x01\x04\x84\x06\x0b\x0f\x02\x2f\x0e"
  "\x10\xa6\x01\x08\x81\x85\x02\xa5\x01\x06\x81\x85\x02\xa4\x01\x04"
  "\x84\x06\x07\x0d\x10\x02\x30\x0c\xa8\x01\x06\x81\x85\x02\xa7\x01"
  "\x04\x84\x06\x05\x0a\x0e\x30\x0c\x0c\x0e\x04\x10\x04\x04\x35\x04"
  "\x17\x04\x34\x04\x32\x04\x04\x30\x04\x2f\x04\x2d\x04\x12\x04\x2c"
  "\x04\x2b\x04\x2a\x04\x15\x04\x29\x04\x28\x04\x27\x04\x26\x04\x25"
  "\x04\x24\x04\x23\x04\x22\x04\x21\x04\x20\x04\x1f\x04\x1e\x04\x1d"
  "\x04\x1c\x04\x1b\x04\x1a\x04\x19\x04\x18\x04\x16\x04\x14\x04\x13"
  "\x04\x11\x04\x0f\x04\x0d\x04\x0b\x04\x0a\x04\x09\x04\x04\x04\x04"
  "\x04\x30\x08\x73\x68\x69\x66\x74\x69\x6e\x09\x73\x68\x69\x66\x74"
  "\x6f\x75\x74\x05\x62\x69\x74\x73\x04\x62\x69\x74\x0e\x6c\x69\x73"
  "\x74\x2d\x3e\x69\x6e\x74\x65\x67\x65\x72\x33\x12\x72\x65\x76\x65"
  "\x72\x73\x65\x2d\x62\x69\x74\x2d\x66\x69\x65\x6c\x64\x31\x11\x72"
  "\x6f\x74\x61\x74\x65\x2d\x62\x69\x74\x2d\x66\x69\x65\x6c\x64\x0f"
  "\x63\x6f\x70\x79\x2d\x62\x69\x74\x2d\x66\x69\x65\x6c\x64\x0a\x62"
  "\x69\x74\x2d\x66\x69\x65\x6c\x64\x09\x63\x6f\x70\x79\x2d\x62\x69"
  "\x74\x0b\x62\x69\x74\x2d\x63\x6c\x65\x61\x72\x3f\x09\x62\x69\x74"
  "\x2d\x73\x65\x74\x3f\x0c\x65\x78\x74\x72\x61\x63\x74\x2d\x62\x69"
  "\x74\x0b\x74\x6f\x67\x67\x6c\x65\x2d\x62\x69\x74\x0a\x63\x6c\x65"
  "\x61\x72\x2d\x62\x69\x74\x08\x73\x65\x74\x2d\x62\x69\x74\x0e\x62"
  "\x69\x74\x77\x69\x73\x65\x2d\x6d\x65\x72\x67\x65\x0e\x61\x6c\x6c"
  "\x2d\x62\x69\x74\x73\x2d\x73\x65\x74\x3f\x0e\x61\x6e\x79\x2d\x62"
  "\x69\x74\x73\x2d\x73\x65\x74\x3f\x0f\x74\x65\x73\x74\x2d\x62\x69"
  "\x74\x2d\x66\x69\x65\x6c\x64\x10\x74\x65\x73\x74\x2d\x62\x69\x74"
  "\x2d\x66\x69\x65\x6c\x64\x3f\x2e\x12\x65\x78\x74\x72\x61\x63\x74"
  "\x2d\x62\x69\x74\x2d\x66\x69\x65\x6c\x64\x11\x73\x70\x6c\x69\x63"
  "\x65\x2d\x62\x69\x74\x2d\x66\x69\x65\x6c\x64\x0f\x65\x64\x69\x74"
  "\x2d\x62\x69\x74\x2d\x66\x69\x65\x6c\x64\x11\x61\x72\x69\x74\x68"
  "\x6d\x65\x74\x69\x63\x2d\x73\x68\x69\x66\x74\x0d\x62\x69\x74\x77"
  "\x69\x73\x65\x2d\x6e\x61\x6e\x64\x0d\x62\x69\x74\x77\x69\x73\x65"
  "\x2d\x6f\x72\x63\x31\x0d\x62\x69\x74\x77\x69\x73\x65\x2d\x6f\x72"
  "\x63\x32\x0c\x62\x69\x74\x77\x69\x73\x65\x2d\x65\x71\x76\x0c\x62"
  "\x69\x74\x77\x69\x73\x65\x2d\x6e\x6f\x72\x0c\x62\x69\x74\x77\x69"
  "\x73\x65\x2d\x69\x6f\x72\x0c\x62\x69\x74\x77\x69\x73\x65\x2d\x78"
  "\x6f\x72\x0e\x62\x69\x74\x77\x69\x73\x65\x2d\x61\x6e\x64\x63\x31"
  "\x0e\x62\x69\x74\x77\x69\x73\x65\x2d\x61\x6e\x64\x63\x32\x0c\x62"
  "\x69\x74\x77\x69\x73\x65\x2d\x61\x6e\x64\x0c\x73\x68\x69\x66\x74"
  "\x2d\x72\x69\x67\x68\x74\x0b\x73\x68\x69\x66\x74\x2d\x6c\x65\x66"
  "\x74\x0f\x69\x6e\x74\x65\x67\x65\x72\x2d\x6c\x65\x6e\x67\x74\x68"
  "\x11\x68\x61\x6d\x6d\x69\x6e\x67\x2d\x64\x69\x73\x74\x61\x6e\x63"
  "\x65\x0e\x66\x69\x72\x73\x74\x2d\x73\x65\x74\x2d\x62\x69\x74\x0c"
  "\x62\x69\x74\x77\x69\x73\x65\x2d\x6e\x6f\x74\x09\x62\x69\x74\x2d"
  "\x6d\x61\x73\x6b\x0a\x62\x69\x74\x2d\x63\x6f\x75\x6e\x74\x0d\x62"
  "\x69\x74\x2d\x61\x6e\x74\x69\x6d\x61\x73\x6b\x30\x05\x10\x64\x65"
  "\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08"
  "\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
integer_bits_so_data_6debaef5963401d7 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_integer_bits_so_data_6debaef5963401d7 [0]))), (sizeof (prog_integer_bits_so_data_6debaef5963401d7)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("integer-bits.so", integer_bits_so_data_6debaef5963401d7)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("integer-bits.so", "fd1814bc38b3b319")
