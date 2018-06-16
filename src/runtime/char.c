/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:27-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 6
#define DEBUGGING_LABEL_1_2 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto charP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (charP_3)
DEFLABEL (charP_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 2)
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
char_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_2_4);
      goto char__integer_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char__integer_3)
DEFLABEL (char__integer_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 2))
    goto label_4;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd6.Obj));
  Rvl = (MAKE_OBJECT (26, (Wrd10.uLng)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
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
char_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto integer__char_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integer__char_3)
DEFLABEL (integer__char_0)
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
char_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_4_4);
      goto Z__make_char_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__make_char_5)
DEFLABEL (Z__make_char_2)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd12.Lng) = (LEFT_SHIFT ((Wrd7.Lng), 21));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd12.Lng) | (Wrd14.Lng));
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));
  (Rsp [1]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define ENVIRONMENT_LABEL_5_3 8
#define DEBUGGING_LABEL_5_2 7
#define OBJECT_5_0 6
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd7;
  machine_word Wrd10;
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
      goto Z__char_code_1;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__char_code_5)
DEFLABEL (Z__char_code_1)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_7;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));

DEFLABEL (label_6)
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd19.Lng) = ((Wrd16.Lng) & 2097151L);
  Rvl = (LONG_TO_FIXNUM (Wrd19.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_3)
  (Wrd7.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 8
#define DEBUGGING_LABEL_6_2 7
#define OBJECT_6_0 6
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd7;
  machine_word Wrd10;
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
      goto Z__char_bits_1;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__char_bits_5)
DEFLABEL (Z__char_bits_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_7;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));

DEFLABEL (label_6)
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd19.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd16.Lng)), 21)));
  Rvl = (LONG_TO_FIXNUM (Wrd19.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_3)
  (Wrd7.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 9
#define DEBUGGING_LABEL_7_2 8
#define OBJECT_7_0 7
#define EXECUTE_CACHE_7_5 5
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto guarantee_char_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_char_4)
DEFLABEL (guarantee_char_1)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 2)
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_5]));

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_7_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 11
#define DEBUGGING_LABEL_8_2 10
#define OBJECT_8_2 9
#define OBJECT_8_1 8
#define OBJECT_8_0 7
#define EXECUTE_CACHE_8_5 5
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto error_not_char_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_char_5)
DEFLABEL (error_not_char_2)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_8_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_8_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define ENVIRONMENT_LABEL_9_3 16
#define DEBUGGING_LABEL_9_2 15
#define OBJECT_9_3 14
#define OBJECT_9_2 13
#define OBJECT_9_1 12
#define OBJECT_9_0 11
#define EXECUTE_CACHE_9_6 9
#define FREE_REFERENCES_LABEL_9_0 8
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_9_4);
      goto make_char_4;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_char_7)
DEFLABEL (make_char_4)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_7);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd12.Lng) = (LEFT_SHIFT ((Wrd7.Lng), 21));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd12.Lng) | (Wrd14.Lng));
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));
  (Rsp [1]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define ENVIRONMENT_LABEL_10_3 13
#define DEBUGGING_LABEL_10_2 12
#define OBJECT_10_2 11
#define OBJECT_10_1 10
#define OBJECT_10_0 9
#define EXECUTE_CACHE_10_6 7
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto code__char_1;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (code__char_4)
DEFLABEL (code__char_1)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define ENVIRONMENT_LABEL_11_3 14
#define DEBUGGING_LABEL_11_2 13
#define OBJECT_11_1 12
#define OBJECT_11_0 11
#define EXECUTE_CACHE_11_6 9
#define FREE_REFERENCES_LABEL_11_0 8
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_11_4);
      goto char_code_2;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_code_6)
DEFLABEL (char_code_2)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_8;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));

DEFLABEL (label_7)
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd19.Lng) = ((Wrd16.Lng) & 2097151L);
  Rvl = (LONG_TO_FIXNUM (Wrd19.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_4)
  (Wrd7.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_7 7
#define ENVIRONMENT_LABEL_12_3 14
#define DEBUGGING_LABEL_12_2 13
#define OBJECT_12_1 12
#define OBJECT_12_0 11
#define EXECUTE_CACHE_12_6 9
#define FREE_REFERENCES_LABEL_12_0 8
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_12_4);
      goto char_bits_2;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_bits_6)
DEFLABEL (char_bits_2)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_8;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));

DEFLABEL (label_7)
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd19.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd16.Lng)), 21)));
  Rvl = (LONG_TO_FIXNUM (Wrd19.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_4)
  (Wrd7.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define LABEL_13_9 9
#define ENVIRONMENT_LABEL_13_3 20
#define DEBUGGING_LABEL_13_2 19
#define OBJECT_13_3 18
#define OBJECT_13_2 17
#define OBJECT_13_1 16
#define OBJECT_13_0 15
#define EXECUTE_CACHE_13_8 11
#define EXECUTE_CACHE_13_6 13
#define FREE_REFERENCES_LABEL_13_0 10
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_13_4);
      goto char_bits_setP_5;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_13_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_bits_setP_9)
DEFLABEL (char_bits_setP_5)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_7);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_14;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));

DEFLABEL (label_13)
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd21.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd16.Lng)), 21)));
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Lng) = ((Wrd21.Lng) & (Wrd23.Lng));
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  if ((Wrd22.Obj) == (Wrd20.Obj))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_13_3]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_7)
  (Wrd7.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_7 7
#define LABEL_14_9 9
#define ENVIRONMENT_LABEL_14_3 21
#define DEBUGGING_LABEL_14_2 20
#define OBJECT_14_4 19
#define OBJECT_14_3 18
#define OBJECT_14_2 17
#define OBJECT_14_1 16
#define OBJECT_14_0 15
#define EXECUTE_CACHE_14_8 11
#define EXECUTE_CACHE_14_6 13
#define FREE_REFERENCES_LABEL_14_0 10
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_14_4);
      goto char_bits_clearP_5;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_14_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_bits_clearP_9)
DEFLABEL (char_bits_clearP_5)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_7);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_14;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));

DEFLABEL (label_13)
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd21.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd16.Lng)), 21)));
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Lng) = ((Wrd21.Lng) & (Wrd23.Lng));
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  if ((Wrd20.Obj) == (current_block [OBJECT_14_3]))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_14_4]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 1);

DEFLABEL (label_7)
  (Wrd7.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_7 7
#define LABEL_15_9 9
#define LABEL_15_10 11
#define ENVIRONMENT_LABEL_15_3 22
#define DEBUGGING_LABEL_15_2 21
#define OBJECT_15_3 20
#define OBJECT_15_2 19
#define OBJECT_15_1 18
#define OBJECT_15_0 17
#define EXECUTE_CACHE_15_8 13
#define EXECUTE_CACHE_15_6 15
#define FREE_REFERENCES_LABEL_15_0 12
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_15_4);
      goto set_char_bits_9;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_15_9);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_15_10);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_char_bits_14)
DEFLABEL (set_char_bits_9)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_7);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_18;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));

DEFLABEL (label_17)
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd18.Lng) = ((Wrd15.Lng) & 2097151L);
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 2))
    goto label_16;
  (Wrd25.uLng) = (OBJECT_DATUM (Wrd20.Obj));
  (Wrd22.Obj) = (MAKE_OBJECT (26, (Wrd25.uLng)));

DEFLABEL (label_15)
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd36.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd31.Lng)), 21)));
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd41.Lng) = ((Wrd36.Lng) | (Wrd38.Lng));
  (Wrd44.Lng) = (LEFT_SHIFT ((Wrd41.Lng), 21));
  (Wrd45.Obj) = (* (Rsp++));
  Wrd47 = Wrd44;
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd49.Lng) = ((Wrd47.Lng) | (Wrd48.Lng));
  (Wrd46.Obj) = (LONG_TO_FIXNUM (Wrd49.Lng));
  (Rsp [1]) = (Wrd46.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 1);

DEFLABEL (label_16)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 1);

DEFLABEL (label_12)
  (Wrd22.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 1);

DEFLABEL (label_11)
  (Wrd7.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_7 7
#define LABEL_16_9 9
#define LABEL_16_10 11
#define ENVIRONMENT_LABEL_16_3 22
#define DEBUGGING_LABEL_16_2 21
#define OBJECT_16_3 20
#define OBJECT_16_2 19
#define OBJECT_16_1 18
#define OBJECT_16_0 17
#define EXECUTE_CACHE_16_8 13
#define EXECUTE_CACHE_16_6 15
#define FREE_REFERENCES_LABEL_16_0 12
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_16_4);
      goto clear_char_bits_9;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_16_9);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_16_10);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (clear_char_bits_14)
DEFLABEL (clear_char_bits_9)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_16_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_7);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_18;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));

DEFLABEL (label_17)
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd18.Lng) = ((Wrd15.Lng) & 2097151L);
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 2))
    goto label_16;
  (Wrd25.uLng) = (OBJECT_DATUM (Wrd20.Obj));
  (Wrd22.Obj) = (MAKE_OBJECT (26, (Wrd25.uLng)));

DEFLABEL (label_15)
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd36.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd31.Lng)), 21)));
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd41.Lng) = ((Wrd36.Lng) &~ (Wrd38.Lng));
  (Wrd44.Lng) = (LEFT_SHIFT ((Wrd41.Lng), 21));
  (Wrd45.Obj) = (* (Rsp++));
  Wrd47 = Wrd44;
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd49.Lng) = ((Wrd47.Lng) | (Wrd48.Lng));
  (Wrd46.Obj) = (LONG_TO_FIXNUM (Wrd49.Lng));
  (Rsp [1]) = (Wrd46.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_3]), 1);

DEFLABEL (label_16)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_12)
  (Wrd22.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_11)
  (Wrd7.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define LABEL_17_7 9
#define LABEL_17_8 11
#define LABEL_17_9 13
#define ENVIRONMENT_LABEL_17_3 19
#define DEBUGGING_LABEL_17_2 18
#define OBJECT_17_3 17
#define OBJECT_17_2 16
#define OBJECT_17_1 15
#define OBJECT_17_0 14
#define FREE_REFERENCES_LABEL_17_0 14
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd68;
  machine_word Wrd61;
  machine_word Wrd64;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd50;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd14;
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
      goto unicode_charP_11;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_17_7);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_17_8);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_17_9);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unicode_charP_19)
DEFLABEL (unicode_charP_11)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 2)
    goto label_22;

DEFLABEL (label_21)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_20)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  if (! ((Wrd6.uLng) == 2))
    goto label_33;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd11.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));

DEFLABEL (label_32)
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! ((Wrd19.Lng) < 1114112L))
    goto label_21;
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 2))
    goto label_31;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd22.Obj));
  (Wrd24.Obj) = (MAKE_OBJECT (26, (Wrd27.uLng)));

DEFLABEL (label_30)
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if ((Wrd32.Lng) < 55296L)
    goto label_27;
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 2))
    goto label_29;
  (Wrd40.uLng) = (OBJECT_DATUM (Wrd35.Obj));
  (Wrd37.Obj) = (MAKE_OBJECT (26, (Wrd40.uLng)));

DEFLABEL (label_28)
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if ((Wrd45.Lng) < 57344L)
    goto label_21;

DEFLABEL (label_27)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 2))
    goto label_26;
  (Wrd53.uLng) = (OBJECT_DATUM (Wrd48.Obj));
  (Wrd50.Obj) = (MAKE_OBJECT (26, (Wrd53.uLng)));

DEFLABEL (label_25)
  if ((Wrd50.Obj) == (current_block [OBJECT_17_1]))
    goto label_21;
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 2))
    goto label_24;
  (Wrd64.uLng) = (OBJECT_DATUM (Wrd59.Obj));
  (Wrd61.Obj) = (MAKE_OBJECT (26, (Wrd64.uLng)));

DEFLABEL (label_23)
  if ((Wrd61.Obj) == (current_block [OBJECT_17_2]))
    goto label_21;
  Rvl = (current_block [OBJECT_17_3]);
  goto label_20;

DEFLABEL (label_24)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_17)
  (Wrd61.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_16)
  (Wrd50.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_29)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_15)
  (Wrd37.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_14)
  (Wrd24.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_13)
  (Wrd11.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define ENVIRONMENT_LABEL_18_3 13
#define DEBUGGING_LABEL_18_2 12
#define OBJECT_18_0 11
#define EXECUTE_CACHE_18_7 7
#define EXECUTE_CACHE_18_6 9
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto guarantee_unicode_char_1;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_unicode_char_4)
DEFLABEL (guarantee_unicode_char_1)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_18_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 11
#define DEBUGGING_LABEL_19_2 10
#define OBJECT_19_2 9
#define OBJECT_19_1 8
#define OBJECT_19_0 7
#define EXECUTE_CACHE_19_5 5
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto error_not_unicode_char_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_unicode_char_5)
DEFLABEL (error_not_unicode_char_2)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_19_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_19_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_19_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 8
#define DEBUGGING_LABEL_20_2 7
#define OBJECT_20_2 6
#define OBJECT_20_1 5
#define OBJECT_20_0 4
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_20_4);
      goto unicode_scalar_valueP_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unicode_scalar_valueP_9)
DEFLABEL (unicode_scalar_valueP_6)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (INDEX_FIXNUM_P (Wrd5.Obj))
    goto label_12;

DEFLABEL (label_11)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd9.Lng) < 1114112L))
    goto label_11;
  if ((Wrd9.Lng) < 55296L)
    goto label_13;
  if ((Wrd9.Lng) < 57344L)
    goto label_11;

DEFLABEL (label_13)
  (Wrd20.Obj) = (Rsp [0]);
  if ((Wrd20.Obj) == (current_block [OBJECT_20_0]))
    goto label_11;
  if ((Wrd20.Obj) == (current_block [OBJECT_20_1]))
    goto label_11;
  Rvl = (current_block [OBJECT_20_2]);
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define ENVIRONMENT_LABEL_21_3 13
#define DEBUGGING_LABEL_21_2 12
#define OBJECT_21_0 11
#define EXECUTE_CACHE_21_7 7
#define EXECUTE_CACHE_21_6 9
#define FREE_REFERENCES_LABEL_21_0 6
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto guarantee_unicode_scalar_value_1;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_unicode_scalar_value_4)
DEFLABEL (guarantee_unicode_scalar_value_1)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_21_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 11
#define DEBUGGING_LABEL_22_2 10
#define OBJECT_22_2 9
#define OBJECT_22_1 8
#define OBJECT_22_0 7
#define EXECUTE_CACHE_22_5 5
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto error_not_unicode_scalar_value_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_unicode_scalar_value_5)
DEFLABEL (error_not_unicode_scalar_value_2)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_22_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_22_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_22_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 8
#define DEBUGGING_LABEL_23_2 7
#define OBJECT_23_2 6
#define OBJECT_23_1 5
#define OBJECT_23_0 4
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_23_4);
      goto legal_code_32P_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (legal_code_32P_8)
DEFLABEL (legal_code_32P_5)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) < 1114112L)
    goto label_11;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  if ((Wrd6.Lng) < 55296L)
    goto label_12;
  if ((Wrd6.Lng) < 57344L)
    goto label_10;

DEFLABEL (label_12)
  (Wrd19.Obj) = (Rsp [0]);
  if ((Wrd19.Obj) == (current_block [OBJECT_23_0]))
    goto label_10;
  if ((Wrd19.Obj) == (current_block [OBJECT_23_1]))
    goto label_10;
  Rvl = (current_block [OBJECT_23_2]);
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define ENVIRONMENT_LABEL_24_3 8
#define DEBUGGING_LABEL_24_2 7
#define OBJECT_24_2 6
#define OBJECT_24_1 5
#define OBJECT_24_0 4
#define FREE_REFERENCES_LABEL_24_0 4
#define NUMBER_OF_LINKER_SECTIONS_24_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_24_4);
      goto legal_code_16P_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (legal_code_16P_7)
DEFLABEL (legal_code_16P_4)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) < 55296L)
    goto label_11;
  if ((Wrd6.Lng) < 57344L)
    goto label_9;

DEFLABEL (label_11)
  (Wrd13.Obj) = (Rsp [0]);
  if ((Wrd13.Obj) == (current_block [OBJECT_24_0]))
    goto label_9;
  if ((Wrd13.Obj) == (current_block [OBJECT_24_1]))
    goto label_9;
  Rvl = (current_block [OBJECT_24_2]);
  goto label_8;

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define ENVIRONMENT_LABEL_25_3 8
#define DEBUGGING_LABEL_25_2 7
#define OBJECT_25_2 6
#define OBJECT_25_1 5
#define OBJECT_25_0 4
#define FREE_REFERENCES_LABEL_25_0 4
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_25_4);
      goto illegalP_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (illegalP_7)
DEFLABEL (illegalP_4)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) < 55296L)
    goto label_10;
  if ((Wrd6.Lng) < 57344L)
    goto label_9;

DEFLABEL (label_10)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  (Wrd14.Obj) = (current_block [OBJECT_25_0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_8)
DEFLABEL (label_15)
  (Wrd15.Obj) = (Rsp [0]);
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = (Wrd15.Obj);

DEFLABEL (label_11)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd19.Obj) = (Rsp [1]);
  if ((Wrd19.Obj) == (current_block [OBJECT_25_1]))
    goto label_14;
  if ((Wrd19.Obj) == (current_block [OBJECT_25_2]))
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_13;

DEFLABEL (label_14)
  Rvl = (current_block [OBJECT_25_0]);

DEFLABEL (label_13)
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define ENVIRONMENT_LABEL_26_3 9
#define DEBUGGING_LABEL_26_2 8
#define OBJECT_26_1 7
#define OBJECT_26_0 6
#define FREE_REFERENCES_LABEL_26_0 6
#define NUMBER_OF_LINKER_SECTIONS_26_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd14;
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
      goto Z_8_bit_charP_2;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z_8_bit_charP_6)
DEFLABEL (Z_8_bit_charP_2)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 2)
    goto label_9;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  if (! ((Wrd6.uLng) == 2))
    goto label_11;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd11.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));

DEFLABEL (label_10)
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! ((Wrd20.Lng) < 256L))
    goto label_8;
  Rvl = (current_block [OBJECT_26_1]);
  goto label_7;

DEFLABEL (label_11)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define ENVIRONMENT_LABEL_27_3 13
#define DEBUGGING_LABEL_27_2 12
#define OBJECT_27_0 11
#define EXECUTE_CACHE_27_7 7
#define EXECUTE_CACHE_27_6 9
#define FREE_REFERENCES_LABEL_27_0 6
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto guarantee_8_bit_char_1;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_8_bit_char_4)
DEFLABEL (guarantee_8_bit_char_1)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_27_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_7 7
#define ENVIRONMENT_LABEL_28_3 14
#define DEBUGGING_LABEL_28_2 13
#define OBJECT_28_1 12
#define OBJECT_28_0 11
#define EXECUTE_CACHE_28_6 9
#define FREE_REFERENCES_LABEL_28_0 8
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_28_4);
      goto char_asciiP_4;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_28_7);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_asciiP_8)
DEFLABEL (char_asciiP_4)
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
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_13;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));

DEFLABEL (label_12)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd16.Lng) < 256L)
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_9;

DEFLABEL (label_10)
  Rvl = (Wrd7.Obj);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 1);

DEFLABEL (label_6)
  (Wrd7.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define ENVIRONMENT_LABEL_29_3 12
#define DEBUGGING_LABEL_29_2 11
#define OBJECT_29_1 10
#define OBJECT_29_0 9
#define EXECUTE_CACHE_29_6 7
#define FREE_REFERENCES_LABEL_29_0 6
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd6;
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
      goto char__ascii_1;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char__ascii_4)
DEFLABEL (char__ascii_1)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 2))
    goto label_5;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd6.Obj));
  Rvl = (MAKE_OBJECT (26, (Wrd10.uLng)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define ENVIRONMENT_LABEL_30_3 13
#define DEBUGGING_LABEL_30_2 12
#define OBJECT_30_2 11
#define OBJECT_30_1 10
#define OBJECT_30_0 9
#define EXECUTE_CACHE_30_6 7
#define FREE_REFERENCES_LABEL_30_0 6
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_30_4);
      goto ascii__char_2;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ascii__char_5)
DEFLABEL (ascii__char_2)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) | 0L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define ENVIRONMENT_LABEL_31_3 12
#define DEBUGGING_LABEL_31_2 11
#define EXECUTE_CACHE_31_6 7
#define FREE_REFERENCE_31_0 10
#define FREE_REFERENCES_LABEL_31_0 6
#define NUMBER_OF_LINKER_SECTIONS_31_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_31_4);
      goto chars__ascii_0;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (chars__ascii_4)
DEFLABEL (chars__ascii_0)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_7 7
#define LABEL_32_8 9
#define LABEL_32_9 11
#define ENVIRONMENT_LABEL_32_3 19
#define DEBUGGING_LABEL_32_2 18
#define OBJECT_32_2 17
#define OBJECT_32_1 16
#define OBJECT_32_0 15
#define EXECUTE_CACHE_32_6 13
#define FREE_REFERENCES_LABEL_32_0 12
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
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
      goto char_P_4;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_32_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_32_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_32_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_P_9)
DEFLABEL (char_P_4)
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
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_7);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_16;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_15)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 2))
    goto label_14;
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd20.uLng)));

DEFLABEL (label_13)
  (Wrd25.Obj) = (* (Rsp++));
  if ((Wrd17.Obj) == (Wrd25.Obj))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_32_2]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_7)
  (Wrd17.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_7 7
#define LABEL_33_8 9
#define LABEL_33_9 11
#define ENVIRONMENT_LABEL_33_3 19
#define DEBUGGING_LABEL_33_2 18
#define OBJECT_33_2 17
#define OBJECT_33_1 16
#define OBJECT_33_0 15
#define EXECUTE_CACHE_33_6 13
#define FREE_REFERENCES_LABEL_33_0 12
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_33_4);
      goto char_P_4;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_33_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_33_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_33_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_P_9)
DEFLABEL (char_P_4)
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
  (Wrd8.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_7);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_16;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_15)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 2))
    goto label_14;
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd20.uLng)));

DEFLABEL (label_13)
  (Wrd25.Obj) = (* (Rsp++));
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if ((Wrd27.Lng) < (Wrd28.Lng))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_33_2]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 1);

DEFLABEL (label_7)
  (Wrd17.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_6 7
#define ENVIRONMENT_LABEL_34_3 11
#define DEBUGGING_LABEL_34_2 10
#define OBJECT_34_1 9
#define OBJECT_34_0 8
#define FREE_REFERENCES_LABEL_34_0 8
#define NUMBER_OF_LINKER_SECTIONS_34_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd9;
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
      goto Z__char_P_2;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_34_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__char_P_7)
DEFLABEL (Z__char_P_2)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_14;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_13)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 2))
    goto label_12;
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd20.uLng)));

DEFLABEL (label_11)
  (Wrd25.Obj) = (* (Rsp++));
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if ((Wrd27.Lng) < (Wrd28.Lng))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_34_1]);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 1);

DEFLABEL (label_5)
  (Wrd17.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 1);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_7 7
#define LABEL_35_8 9
#define LABEL_35_9 11
#define ENVIRONMENT_LABEL_35_3 19
#define DEBUGGING_LABEL_35_2 18
#define OBJECT_35_2 17
#define OBJECT_35_1 16
#define OBJECT_35_0 15
#define EXECUTE_CACHE_35_6 13
#define FREE_REFERENCES_LABEL_35_0 12
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_35_4);
      goto char__P_5;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_35_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_35_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_35_9);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char__P_10)
DEFLABEL (char__P_5)
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
  (Wrd8.Obj) = (current_block [OBJECT_35_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_35_7);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_17;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_16)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 2))
    goto label_15;
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd20.uLng)));

DEFLABEL (label_14)
  (Wrd25.Obj) = (* (Rsp++));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if ((Wrd26.Lng) > (Wrd27.Lng))
    goto label_12;
  Rvl = (current_block [OBJECT_35_2]);
  goto label_11;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
DEFLABEL (label_13)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 1);

DEFLABEL (label_8)
  (Wrd17.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_6 7
#define ENVIRONMENT_LABEL_36_3 11
#define DEBUGGING_LABEL_36_2 10
#define OBJECT_36_1 9
#define OBJECT_36_0 8
#define FREE_REFERENCES_LABEL_36_0 8
#define NUMBER_OF_LINKER_SECTIONS_36_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd9;
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
      goto Z__char__P_3;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_36_6);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__char__P_8)
DEFLABEL (Z__char__P_3)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_15;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_14)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 2))
    goto label_13;
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd20.uLng)));

DEFLABEL (label_12)
  (Wrd25.Obj) = (* (Rsp++));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if ((Wrd26.Lng) > (Wrd27.Lng))
    goto label_10;
  Rvl = (current_block [OBJECT_36_1]);
  goto label_9;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

DEFLABEL (label_6)
  (Wrd17.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_7 7
#define LABEL_37_8 9
#define LABEL_37_9 11
#define ENVIRONMENT_LABEL_37_3 19
#define DEBUGGING_LABEL_37_2 18
#define OBJECT_37_2 17
#define OBJECT_37_1 16
#define OBJECT_37_0 15
#define EXECUTE_CACHE_37_6 13
#define FREE_REFERENCES_LABEL_37_0 12
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_37_4);
      goto char_P_4;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_37_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_37_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_37_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_P_9)
DEFLABEL (char_P_4)
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
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_37_7);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_16;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_15)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 2))
    goto label_14;
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd20.uLng)));

DEFLABEL (label_13)
  (Wrd25.Obj) = (* (Rsp++));
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if ((Wrd27.Lng) > (Wrd28.Lng))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_37_2]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 1);

DEFLABEL (label_7)
  (Wrd17.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_6 7
#define ENVIRONMENT_LABEL_38_3 11
#define DEBUGGING_LABEL_38_2 10
#define OBJECT_38_1 9
#define OBJECT_38_0 8
#define FREE_REFERENCES_LABEL_38_0 8
#define NUMBER_OF_LINKER_SECTIONS_38_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd9;
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
      goto Z__char_P_2;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_38_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__char_P_7)
DEFLABEL (Z__char_P_2)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_14;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_13)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 2))
    goto label_12;
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd20.uLng)));

DEFLABEL (label_11)
  (Wrd25.Obj) = (* (Rsp++));
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if ((Wrd27.Lng) > (Wrd28.Lng))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_38_1]);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 1);

DEFLABEL (label_5)
  (Wrd17.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 1);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_7 7
#define LABEL_39_8 9
#define LABEL_39_9 11
#define ENVIRONMENT_LABEL_39_3 19
#define DEBUGGING_LABEL_39_2 18
#define OBJECT_39_2 17
#define OBJECT_39_1 16
#define OBJECT_39_0 15
#define EXECUTE_CACHE_39_6 13
#define FREE_REFERENCES_LABEL_39_0 12
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_39_4);
      goto char__P_5;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_39_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_39_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_39_9);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char__P_10)
DEFLABEL (char__P_5)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_39_7);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_17;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_16)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 2))
    goto label_15;
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd20.uLng)));

DEFLABEL (label_14)
  (Wrd25.Obj) = (* (Rsp++));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if ((Wrd26.Lng) < (Wrd27.Lng))
    goto label_12;
  Rvl = (current_block [OBJECT_39_2]);
  goto label_11;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
DEFLABEL (label_13)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 1);

DEFLABEL (label_8)
  (Wrd17.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_6 7
#define ENVIRONMENT_LABEL_40_3 11
#define DEBUGGING_LABEL_40_2 10
#define OBJECT_40_1 9
#define OBJECT_40_0 8
#define FREE_REFERENCES_LABEL_40_0 8
#define NUMBER_OF_LINKER_SECTIONS_40_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd9;
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
      goto Z__char__P_3;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_40_6);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__char__P_8)
DEFLABEL (Z__char__P_3)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_15;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_14)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 2))
    goto label_13;
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd20.uLng)));

DEFLABEL (label_12)
  (Wrd25.Obj) = (* (Rsp++));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if ((Wrd26.Lng) < (Wrd27.Lng))
    goto label_10;
  Rvl = (current_block [OBJECT_40_1]);
  goto label_9;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_0]), 1);

DEFLABEL (label_6)
  (Wrd17.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_0]), 1);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_7 7
#define LABEL_41_8 9
#define LABEL_41_9 11
#define ENVIRONMENT_LABEL_41_3 18
#define DEBUGGING_LABEL_41_2 17
#define OBJECT_41_1 16
#define OBJECT_41_0 15
#define EXECUTE_CACHE_41_6 13
#define FREE_REFERENCES_LABEL_41_0 12
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd6;
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
      goto char_ci_P_4;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_41_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_41_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_41_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_ci_P_9)
DEFLABEL (char_ci_P_4)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_41_5);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 2))
    goto label_16;
  (Wrd8.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_15)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_8);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 2))
    goto label_14;
  (Wrd9.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_13)
  (Wrd14.Obj) = (* (Rsp++));
  if ((Wrd7.Obj) == (Wrd14.Obj))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_41_1]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_0]), 1);

DEFLABEL (label_7)
  (Wrd7.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_0]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_7 7
#define LABEL_42_8 9
#define LABEL_42_9 11
#define ENVIRONMENT_LABEL_42_3 18
#define DEBUGGING_LABEL_42_2 17
#define OBJECT_42_1 16
#define OBJECT_42_0 15
#define EXECUTE_CACHE_42_6 13
#define FREE_REFERENCES_LABEL_42_0 12
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_42_4);
      goto char_ci_P_4;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_42_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_42_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_42_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_ci_P_9)
DEFLABEL (char_ci_P_4)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_42_5);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 2))
    goto label_16;
  (Wrd8.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_15)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_8);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 2))
    goto label_14;
  (Wrd9.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_13)
  (Wrd14.Obj) = (* (Rsp++));
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if ((Wrd16.Lng) < (Wrd17.Lng))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_42_1]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_7)
  (Wrd7.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_7 7
#define LABEL_43_8 9
#define LABEL_43_9 11
#define ENVIRONMENT_LABEL_43_3 18
#define DEBUGGING_LABEL_43_2 17
#define OBJECT_43_1 16
#define OBJECT_43_0 15
#define EXECUTE_CACHE_43_6 13
#define FREE_REFERENCES_LABEL_43_0 12
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd6;
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
      goto char_ci__P_5;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_43_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_43_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_43_9);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_ci__P_10)
DEFLABEL (char_ci__P_5)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_43_5);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 2))
    goto label_17;
  (Wrd8.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_16)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_8);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 2))
    goto label_15;
  (Wrd9.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_14)
  (Wrd14.Obj) = (* (Rsp++));
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if ((Wrd15.Lng) > (Wrd16.Lng))
    goto label_12;
  Rvl = (current_block [OBJECT_43_1]);
  goto label_11;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
DEFLABEL (label_13)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_0]), 1);

DEFLABEL (label_8)
  (Wrd7.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_0]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define LABEL_44_7 7
#define LABEL_44_8 9
#define LABEL_44_9 11
#define ENVIRONMENT_LABEL_44_3 18
#define DEBUGGING_LABEL_44_2 17
#define OBJECT_44_1 16
#define OBJECT_44_0 15
#define EXECUTE_CACHE_44_6 13
#define FREE_REFERENCES_LABEL_44_0 12
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_44_4);
      goto char_ci_P_4;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_44_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_44_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_44_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_ci_P_9)
DEFLABEL (char_ci_P_4)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 2))
    goto label_16;
  (Wrd8.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_15)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_44_8);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 2))
    goto label_14;
  (Wrd9.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_13)
  (Wrd14.Obj) = (* (Rsp++));
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if ((Wrd16.Lng) > (Wrd17.Lng))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_44_1]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_0]), 1);

DEFLABEL (label_7)
  (Wrd7.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_0]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_7 7
#define LABEL_45_8 9
#define LABEL_45_9 11
#define ENVIRONMENT_LABEL_45_3 18
#define DEBUGGING_LABEL_45_2 17
#define OBJECT_45_1 16
#define OBJECT_45_0 15
#define EXECUTE_CACHE_45_6 13
#define FREE_REFERENCES_LABEL_45_0 12
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd6;
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
      goto char_ci__P_5;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_45_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_45_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_45_9);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_ci__P_10)
DEFLABEL (char_ci__P_5)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_45_5);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 2))
    goto label_17;
  (Wrd8.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_16)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_45_8);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 2))
    goto label_15;
  (Wrd9.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_14)
  (Wrd14.Obj) = (* (Rsp++));
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if ((Wrd15.Lng) < (Wrd16.Lng))
    goto label_12;
  Rvl = (current_block [OBJECT_45_1]);
  goto label_11;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
DEFLABEL (label_13)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_8)
  (Wrd7.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define ENVIRONMENT_LABEL_46_3 11
#define DEBUGGING_LABEL_46_2 10
#define OBJECT_46_0 9
#define EXECUTE_CACHE_46_6 7
#define FREE_REFERENCES_LABEL_46_0 6
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto char_ci__integer_1;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_ci__integer_4)
DEFLABEL (char_ci__integer_1)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (Rsp [0]) = Rvl;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 2))
    goto label_5;
  (Wrd11.uLng) = (OBJECT_DATUM (Rvl));
  Rvl = (MAKE_OBJECT (26, (Wrd11.uLng)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_7 7
#define LABEL_47_8 9
#define LABEL_47_9 11
#define LABEL_47_10 13
#define LABEL_47_11 15
#define ENVIRONMENT_LABEL_47_3 26
#define DEBUGGING_LABEL_47_2 25
#define OBJECT_47_3 24
#define OBJECT_47_2 23
#define OBJECT_47_1 22
#define OBJECT_47_0 21
#define EXECUTE_CACHE_47_6 17
#define FREE_REFERENCE_47_0 20
#define FREE_REFERENCES_LABEL_47_0 16
#define NUMBER_OF_LINKER_SECTIONS_47_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd86;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd76;
  machine_word Wrd74;
  machine_word Wrd67;
  machine_word Wrd70;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd59;
  machine_word Wrd47;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_47_4);
      goto char_downcase_11;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_47_7);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_47_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_47_9);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_47_10);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_47_11);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_downcase_19)
DEFLABEL (char_downcase_11)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_30;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));

DEFLABEL (label_29)
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd20.Lng) = ((Wrd16.Lng) & 2097151L);
  if ((Wrd20.Lng) < 256L)
    goto label_20;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 2))
    goto label_28;
  (Wrd30.uLng) = (OBJECT_DATUM (Wrd25.Obj));
  (Wrd27.Obj) = (MAKE_OBJECT (26, (Wrd30.uLng)));

DEFLABEL (label_27)
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd38.Lng) = ((Wrd35.Lng) & 2097151L);
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd38.Lng));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47_0]));
  (Wrd45.Obj) = ((Wrd42.pObj) [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 50)
    goto label_26;
  Wrd41 = Wrd45;

DEFLABEL (label_25)
  Wrd40 = Wrd41;
  (Wrd47.Obj) = (* (Rsp++));
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd59.uLng) == 30))
    goto label_24;
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd54.uLng) == 26))
    goto label_24;
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [1]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) (Wrd55.Lng)) < ((unsigned long) (Wrd58.Lng))))
    goto label_24;
  (Wrd49.uLng) = (OBJECT_DATUM (Wrd47.Obj));
  (Wrd51.pChr) = (& ((Wrd56.pChr) [(Wrd49.Lng)]));
  (Wrd52.uLng) = ((unsigned long) (((unsigned char *) (Wrd51.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd53.Obj) = (MAKE_OBJECT (26, (Wrd52.uLng)));
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_23)
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 2))
    goto label_22;
  (Wrd70.uLng) = (OBJECT_DATUM (Wrd65.Obj));
  (Wrd67.Obj) = (MAKE_OBJECT (26, (Wrd70.uLng)));

DEFLABEL (label_21)
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  (Wrd81.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd76.Lng)), 21)));
  (Wrd84.Lng) = (LEFT_SHIFT ((Wrd81.Lng), 21));
  (Wrd85.Obj) = (* (Rsp++));
  Wrd87 = Wrd84;
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  (Wrd89.Lng) = ((Wrd87.Lng) | (Wrd88.Lng));
  (Wrd86.Obj) = (LONG_TO_FIXNUM (Wrd89.Lng));
  (Rsp [0]) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_3]), 1);

DEFLABEL (label_22)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_11]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 1);

DEFLABEL (label_17)
  (Wrd67.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_10]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_2]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47_9])), (Wrd42.pObj));

DEFLABEL (label_15)
  (Wrd41.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 1);

DEFLABEL (label_14)
  (Wrd27.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 1);

DEFLABEL (label_13)
  (Wrd7.Obj) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_7 7
#define LABEL_48_8 9
#define LABEL_48_9 11
#define LABEL_48_10 13
#define LABEL_48_11 15
#define ENVIRONMENT_LABEL_48_3 26
#define DEBUGGING_LABEL_48_2 25
#define OBJECT_48_3 24
#define OBJECT_48_2 23
#define OBJECT_48_1 22
#define OBJECT_48_0 21
#define EXECUTE_CACHE_48_6 17
#define FREE_REFERENCE_48_0 20
#define FREE_REFERENCES_LABEL_48_0 16
#define NUMBER_OF_LINKER_SECTIONS_48_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd86;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd76;
  machine_word Wrd74;
  machine_word Wrd67;
  machine_word Wrd70;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd59;
  machine_word Wrd47;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_48_4);
      goto char_upcase_11;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_48_7);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_48_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_48_9);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_48_10);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_48_11);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_upcase_19)
DEFLABEL (char_upcase_11)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_30;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));

DEFLABEL (label_29)
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd20.Lng) = ((Wrd16.Lng) & 2097151L);
  if ((Wrd20.Lng) < 256L)
    goto label_20;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 2))
    goto label_28;
  (Wrd30.uLng) = (OBJECT_DATUM (Wrd25.Obj));
  (Wrd27.Obj) = (MAKE_OBJECT (26, (Wrd30.uLng)));

DEFLABEL (label_27)
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd38.Lng) = ((Wrd35.Lng) & 2097151L);
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd38.Lng));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
  (Wrd45.Obj) = ((Wrd42.pObj) [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 50)
    goto label_26;
  Wrd41 = Wrd45;

DEFLABEL (label_25)
  Wrd40 = Wrd41;
  (Wrd47.Obj) = (* (Rsp++));
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd59.uLng) == 30))
    goto label_24;
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd54.uLng) == 26))
    goto label_24;
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [1]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) (Wrd55.Lng)) < ((unsigned long) (Wrd58.Lng))))
    goto label_24;
  (Wrd49.uLng) = (OBJECT_DATUM (Wrd47.Obj));
  (Wrd51.pChr) = (& ((Wrd56.pChr) [(Wrd49.Lng)]));
  (Wrd52.uLng) = ((unsigned long) (((unsigned char *) (Wrd51.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd53.Obj) = (MAKE_OBJECT (26, (Wrd52.uLng)));
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_23)
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 2))
    goto label_22;
  (Wrd70.uLng) = (OBJECT_DATUM (Wrd65.Obj));
  (Wrd67.Obj) = (MAKE_OBJECT (26, (Wrd70.uLng)));

DEFLABEL (label_21)
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  (Wrd81.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd76.Lng)), 21)));
  (Wrd84.Lng) = (LEFT_SHIFT ((Wrd81.Lng), 21));
  (Wrd85.Obj) = (* (Rsp++));
  Wrd87 = Wrd84;
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  (Wrd89.Lng) = ((Wrd87.Lng) | (Wrd88.Lng));
  (Wrd86.Obj) = (LONG_TO_FIXNUM (Wrd89.Lng));
  (Rsp [0]) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_3]), 1);

DEFLABEL (label_22)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_11]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 1);

DEFLABEL (label_17)
  (Wrd67.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_10]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_2]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_9])), (Wrd42.pObj));

DEFLABEL (label_15)
  (Wrd41.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 1);

DEFLABEL (label_14)
  (Wrd27.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 1);

DEFLABEL (label_13)
  (Wrd7.Obj) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_6 7
#define LABEL_49_7 9
#define LABEL_49_8 11
#define ENVIRONMENT_LABEL_49_3 16
#define DEBUGGING_LABEL_49_2 15
#define OBJECT_49_2 14
#define OBJECT_49_1 13
#define OBJECT_49_0 12
#define FREE_REFERENCES_LABEL_49_0 12
#define NUMBER_OF_LINKER_SECTIONS_49_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd81;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd71;
  machine_word Wrd69;
  machine_word Wrd62;
  machine_word Wrd65;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd7;
  machine_word Wrd10;
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
      goto Z__case_map_char_10;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_49_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_49_7);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_49_8);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__case_map_char_17)
DEFLABEL (Z__case_map_char_10)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_26;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));

DEFLABEL (label_25)
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd20.Lng) = ((Wrd16.Lng) & 2097151L);
  if ((Wrd20.Lng) < 256L)
    goto label_18;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 2))
    goto label_24;
  (Wrd30.uLng) = (OBJECT_DATUM (Wrd25.Obj));
  (Wrd27.Obj) = (MAKE_OBJECT (26, (Wrd30.uLng)));

DEFLABEL (label_23)
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd39.Lng) = ((Wrd36.Lng) & 2097151L);
  (Wrd35.Obj) = (LONG_TO_FIXNUM (Wrd39.Lng));
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 30))
    goto label_22;
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd47.uLng) == 26))
    goto label_22;
  Wrd48 = Wrd39;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [1]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) (Wrd48.Lng)) < ((unsigned long) (Wrd52.Lng))))
    goto label_22;
  (Wrd41.uLng) = (OBJECT_DATUM (Wrd35.Obj));
  (Wrd44.pChr) = (& ((Wrd50.pChr) [(Wrd41.Lng)]));
  (Wrd45.uLng) = ((unsigned long) (((unsigned char *) (Wrd44.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd46.Obj) = (MAKE_OBJECT (26, (Wrd45.uLng)));
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_21)
  (Wrd60.Obj) = (Rsp [1]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 2))
    goto label_20;
  (Wrd65.uLng) = (OBJECT_DATUM (Wrd60.Obj));
  (Wrd62.Obj) = (MAKE_OBJECT (26, (Wrd65.uLng)));

DEFLABEL (label_19)
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  (Wrd76.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd71.Lng)), 21)));
  (Wrd79.Lng) = (LEFT_SHIFT ((Wrd76.Lng), 21));
  (Wrd80.Obj) = (* (Rsp++));
  Wrd82 = Wrd79;
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  (Wrd84.Lng) = ((Wrd82.Lng) | (Wrd83.Lng));
  (Wrd81.Obj) = (LONG_TO_FIXNUM (Wrd84.Lng));
  (Rsp [1]) = (Wrd81.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_2]), 1);

DEFLABEL (label_20)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_8]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_0]), 1);

DEFLABEL (label_15)
  (Wrd62.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_6]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_0]), 1);

DEFLABEL (label_13)
  (Wrd27.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_0]), 1);

DEFLABEL (label_12)
  (Wrd7.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_6 7
#define LABEL_50_7 9
#define LABEL_50_8 11
#define LABEL_50_9 13
#define LABEL_50_10 15
#define LABEL_50_11 17
#define LABEL_50_13 19
#define LABEL_50_14 21
#define LABEL_50_15 23
#define LABEL_50_16 25
#define LABEL_50_17 27
#define LABEL_50_18 29
#define LABEL_50_12 31
#define LABEL_50_20 33
#define LABEL_50_19 35
#define LABEL_50_21 37
#define LABEL_50_22 39
#define LABEL_50_23 41
#define LABEL_50_24 43
#define LABEL_50_25 45
#define ENVIRONMENT_LABEL_50_3 69
#define DEBUGGING_LABEL_50_2 68
#define OBJECT_50_13 67
#define OBJECT_50_12 66
#define OBJECT_50_11 65
#define OBJECT_50_10 64
#define OBJECT_50_9 63
#define OBJECT_50_8 62
#define OBJECT_50_7 61
#define OBJECT_50_6 60
#define OBJECT_50_5 59
#define OBJECT_50_4 58
#define OBJECT_50_3 57
#define OBJECT_50_2 56
#define OBJECT_50_1 55
#define OBJECT_50_0 54
#define FREE_REFERENCE_50_2 47
#define FREE_REFERENCE_50_1 48
#define FREE_REFERENCE_50_0 49
#define FREE_ASSIGNMENT_50_2 51
#define FREE_ASSIGNMENT_50_1 52
#define FREE_ASSIGNMENT_50_0 53
#define FREE_REFERENCES_LABEL_50_0 46
#define NUMBER_OF_LINKER_SECTIONS_50_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd17;
  machine_word Wrd72;
  machine_word Wrd68;
  machine_word Wrd55;
  machine_word Wrd53;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd46;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd67;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd94;
  machine_word Wrd90;
  machine_word Wrd77;
  machine_word Wrd75;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd88;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
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
      goto initialize_case_conversionsB_24;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_50_6);
      goto label_26;

    case 3:
      current_block = (Rpc - LABEL_50_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_50_8);
      goto label_27;

    case 5:
      current_block = (Rpc - LABEL_50_9);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_50_10);
      goto label_28;

    case 7:
      current_block = (Rpc - LABEL_50_11);
      goto do_loop_10;

    case 8:
      current_block = (Rpc - LABEL_50_13);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_50_14);
      goto label_34;

    case 10:
      current_block = (Rpc - LABEL_50_15);
      goto label_30;

    case 11:
      current_block = (Rpc - LABEL_50_16);
      goto label_33;

    case 12:
      current_block = (Rpc - LABEL_50_17);
      goto label_31;

    case 13:
      current_block = (Rpc - LABEL_50_18);
      goto label_32;

    case 14:
      current_block = (Rpc - LABEL_50_12);
      goto continuation_21;

    case 15:
      current_block = (Rpc - LABEL_50_20);
      goto lambda_20;

    case 16:
      current_block = (Rpc - LABEL_50_19);
      goto continuation_22;

    case 17:
      current_block = (Rpc - LABEL_50_21);
      goto do_loop_18;

    case 18:
      current_block = (Rpc - LABEL_50_22);
      goto label_35;

    case 19:
      current_block = (Rpc - LABEL_50_23);
      goto label_38;

    case 20:
      current_block = (Rpc - LABEL_50_24);
      goto label_36;

    case 21:
      current_block = (Rpc - LABEL_50_25);
      goto label_37;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_case_conversionsB_40)
DEFLABEL (initialize_case_conversionsB_24)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_50_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_52;

DEFLABEL (label_51)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_50)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_50_0]);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_50_7);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_50_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_49;

DEFLABEL (label_48)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_47)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_50_0]);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_50_9);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_50_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_46;

DEFLABEL (label_45)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_44)
  (Wrd18.Obj) = (current_block [OBJECT_50_2]);
  (* (--Rsp)) = (Wrd18.Obj);
  goto do_loop_10;

DEFLABEL (label_46)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_45;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_50_10])), (Wrd6.pObj), Rvl);

DEFLABEL (label_28)
  goto label_44;

DEFLABEL (label_49)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_48;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_50_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_27)
  goto label_47;

DEFLABEL (label_52)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_51;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_50_6])), (Wrd6.pObj), Rvl);

DEFLABEL (label_26)
  goto label_50;

DEFLABEL (do_loop_41)
DEFLABEL (do_loop_10)
  INTERRUPT_CHECK (26, LABEL_50_11);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_50_0])))
    goto label_53;
  Rsp = (& (Rsp [1]));
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_12]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (Wrd99.Obj) = (current_block [OBJECT_50_3]);
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd100.Obj) = (current_block [OBJECT_50_4]);
  (* (--Rsp)) = (Wrd100.Obj);
  (Wrd101.Obj) = (current_block [OBJECT_50_5]);
  (* (--Rsp)) = (Wrd101.Obj);
  goto lambda_20;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_50_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_50_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_50_9]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto lambda_20;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_50_19);
  (Wrd5.Obj) = (current_block [OBJECT_50_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_50_11]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_50_12]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto lambda_20;

DEFLABEL (label_53)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_65;
  Wrd8 = Wrd12;

DEFLABEL (label_64)
  Wrd7 = Wrd8;
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd88.uLng) == 30))
    goto label_63;
  (Wrd81.Obj) = (Rsp [0]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd82.uLng) == 26))
    goto label_63;
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [1]);
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  if (! (((unsigned long) (Wrd84.Lng)) < ((unsigned long) (Wrd87.Lng))))
    goto label_63;
  if (! ((Wrd82.uLng) == 26))
    goto label_63;
  (Wrd75.uLng) = (OBJECT_DATUM (Wrd81.Obj));
  (Wrd77.pChr) = (& ((Wrd85.pChr) [(Wrd75.Lng)]));
  ((Wrd77.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd81.uLng));

DEFLABEL (label_62)
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_61;
  Wrd15 = Wrd19;

DEFLABEL (label_60)
  Wrd14 = Wrd15;
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd67.uLng) == 30))
    goto label_59;
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 26))
    goto label_59;
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [1]);
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  if (! (((unsigned long) (Wrd63.Lng)) < ((unsigned long) (Wrd66.Lng))))
    goto label_59;
  if (! ((Wrd61.uLng) == 26))
    goto label_59;
  (Wrd54.uLng) = (OBJECT_DATUM (Wrd60.Obj));
  (Wrd56.pChr) = (& ((Wrd64.pChr) [(Wrd54.Lng)]));
  ((Wrd56.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd60.uLng));

DEFLABEL (label_58)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_2]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_57;
  Wrd22 = Wrd26;

DEFLABEL (label_56)
  Wrd21 = Wrd22;
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd46.uLng) == 30))
    goto label_55;
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 26))
    goto label_55;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [1]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) (Wrd42.Lng)) < ((unsigned long) (Wrd45.Lng))))
    goto label_55;
  if (! ((Wrd40.uLng) == 26))
    goto label_55;
  (Wrd33.uLng) = (OBJECT_DATUM (Wrd39.Obj));
  (Wrd35.pChr) = (& ((Wrd43.pChr) [(Wrd33.Lng)]));
  ((Wrd35.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd39.uLng));

DEFLABEL (label_54)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd31.Lng) = ((Wrd30.Lng) + 1L);
  (Wrd28.Obj) = (LONG_TO_FIXNUM (Wrd31.Lng));
  (Rsp [0]) = (Wrd28.Obj);
  goto do_loop_10;

DEFLABEL (label_55)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_18]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_6]), 3);

DEFLABEL (label_32)
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_17])), (Wrd23.pObj));

DEFLABEL (label_31)
  (Wrd22.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd69.Obj) = (Rsp [0]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_16]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_6]), 3);

DEFLABEL (label_33)
  goto label_58;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_15])), (Wrd16.pObj));

DEFLABEL (label_30)
  (Wrd15.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd90.Obj) = (Rsp [0]);
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_14]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_6]), 3);

DEFLABEL (label_34)
  goto label_62;

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_13])), (Wrd9.pObj));

DEFLABEL (label_29)
  (Wrd8.Obj) = Rvl;
  goto label_64;

DEFLABEL (lambda_42)
DEFLABEL (lambda_20)
  INTERRUPT_CHECK (26, LABEL_50_20);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto do_loop_18;

DEFLABEL (do_loop_43)
DEFLABEL (do_loop_18)
  INTERRUPT_CHECK (26, LABEL_50_21);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd6.Lng) > (Wrd8.Lng)))
    goto label_66;
  Rvl = (current_block [OBJECT_50_13]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_66)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_74;
  Wrd10 = Wrd14;

DEFLABEL (label_73)
  Wrd9 = Wrd10;
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd66.uLng) == 30))
    goto label_72;
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 26))
    goto label_72;
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [1]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) (Wrd62.Lng)) < ((unsigned long) (Wrd65.Lng))))
    goto label_72;
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 26))
    goto label_72;
  (Wrd53.uLng) = (OBJECT_DATUM (Wrd59.Obj));
  (Wrd55.pChr) = (& ((Wrd63.pChr) [(Wrd53.Lng)]));
  ((Wrd55.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd57.uLng));

DEFLABEL (label_71)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_2]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_70;
  Wrd17 = Wrd21;

DEFLABEL (label_69)
  Wrd16 = Wrd17;
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd45.uLng) == 30))
    goto label_68;
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_68;
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [1]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) (Wrd41.Lng)) < ((unsigned long) (Wrd44.Lng))))
    goto label_68;
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 26))
    goto label_68;
  (Wrd32.uLng) = (OBJECT_DATUM (Wrd38.Obj));
  (Wrd34.pChr) = (& ((Wrd42.pChr) [(Wrd32.Lng)]));
  ((Wrd34.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd36.uLng));

DEFLABEL (label_67)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd26.Lng) = ((Wrd25.Lng) + 1L);
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));
  (Rsp [0]) = (Wrd23.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd30.Lng) = ((Wrd29.Lng) + 1L);
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd30.Lng));
  (Rsp [1]) = (Wrd27.Obj);
  goto do_loop_18;

DEFLABEL (label_68)
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_25]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_6]), 3);

DEFLABEL (label_37)
  goto label_67;

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_24])), (Wrd18.pObj));

DEFLABEL (label_36)
  (Wrd17.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd68.Obj) = (Rsp [0]);
  (Wrd69.Obj) = (Rsp [1]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_23]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_6]), 3);

DEFLABEL (label_38)
  goto label_71;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_22])), (Wrd11.pObj));

DEFLABEL (label_35)
  (Wrd10.Obj) = Rvl;
  goto label_73;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define LABEL_51_6 7
#define LABEL_51_7 9
#define ENVIRONMENT_LABEL_51_3 21
#define DEBUGGING_LABEL_51_2 20
#define OBJECT_51_2 19
#define OBJECT_51_1 18
#define OBJECT_51_0 17
#define EXECUTE_CACHE_51_8 11
#define FREE_ASSIGNMENT_51_2 14
#define FREE_ASSIGNMENT_51_1 15
#define FREE_ASSIGNMENT_51_0 16
#define FREE_REFERENCES_LABEL_51_0 10
#define NUMBER_OF_LINKER_SECTIONS_51_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_51_4);
      goto initialize_packageB_0;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_51_6);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_51_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_6)
DEFLABEL (initialize_packageB_0)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_51_0]));
  (Wrd6.Obj) = (current_block [OBJECT_51_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_13)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_51_1]));
  (Wrd18.Obj) = (current_block [OBJECT_51_1]);
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_12;

DEFLABEL (label_11)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_10)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_51_2]));
  (Wrd30.Obj) = (current_block [OBJECT_51_2]);
  (Wrd37.Obj) = ((Wrd29.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd29.pObj) [0]) = (Wrd30.Obj);

DEFLABEL (label_7)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_8]));

DEFLABEL (label_9)
  if ((Wrd37.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_51_7])), (Wrd29.pObj), (Wrd30.Obj));

DEFLABEL (label_4)
  goto label_7;

DEFLABEL (label_12)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_11;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_51_6])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_3)
  goto label_10;

DEFLABEL (label_15)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_51_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_2)
  goto label_13;

INVOKE_INTERFACE_TARGET_1
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
char_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_52_4);
      goto radixP_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (radixP_6)
DEFLABEL (radixP_3)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (INDEX_FIXNUM_P (Wrd5.Obj))
    goto label_9;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (2L > (Wrd11.Lng))
    goto label_8;
  if ((Wrd11.Lng) > 36L)
    goto label_8;
  Rvl = (current_block [OBJECT_52_0]);
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define ENVIRONMENT_LABEL_53_3 13
#define DEBUGGING_LABEL_53_2 12
#define OBJECT_53_0 11
#define EXECUTE_CACHE_53_7 7
#define EXECUTE_CACHE_53_6 9
#define FREE_REFERENCES_LABEL_53_0 6
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_53_4);
      goto guarantee_radix_1;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_radix_4)
DEFLABEL (guarantee_radix_1)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_53_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_53_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define ENVIRONMENT_LABEL_54_3 11
#define DEBUGGING_LABEL_54_2 10
#define OBJECT_54_2 9
#define OBJECT_54_1 8
#define OBJECT_54_0 7
#define EXECUTE_CACHE_54_5 5
#define FREE_REFERENCES_LABEL_54_0 4
#define NUMBER_OF_LINKER_SECTIONS_54_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_54_4);
      goto error_not_radix_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_radix_5)
DEFLABEL (error_not_radix_2)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_54_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_54_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_54_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_5 3
#define LABEL_55_4 5
#define LABEL_55_6 7
#define ENVIRONMENT_LABEL_55_3 19
#define DEBUGGING_LABEL_55_2 18
#define OBJECT_55_4 17
#define OBJECT_55_3 16
#define OBJECT_55_2 15
#define OBJECT_55_1 14
#define OBJECT_55_0 13
#define EXECUTE_CACHE_55_8 9
#define EXECUTE_CACHE_55_7 11
#define FREE_REFERENCES_LABEL_55_0 8
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd18;
  INVOKE_INTERFACE_DECLS
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
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_55_4);
      goto digit__char_4;

    case 2:
      current_block = (Rpc - LABEL_55_6);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (digit__char_7)
DEFLABEL (digit__char_4)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_55_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  if ((Wrd9.Obj) == (current_block [OBJECT_55_1]))
    goto label_11;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_55_5);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_10)
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_55_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_55_3]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd17.uLng) == 26)
    goto label_9;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_4]), 2);

DEFLABEL (label_9)
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_8;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd13.pChr) = (& ((Wrd21.pChr) [(Wrd10.Lng)]));
  (Wrd14.uLng) = ((unsigned long) (((unsigned char *) (Wrd13.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  Rvl = (MAKE_OBJECT (2, (Wrd14.uLng)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd16.Obj) = (current_block [OBJECT_55_2]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_7 5
#define LABEL_56_5 7
#define LABEL_56_8 9
#define LABEL_56_9 11
#define LABEL_56_10 13
#define LABEL_56_11 15
#define ENVIRONMENT_LABEL_56_3 31
#define DEBUGGING_LABEL_56_2 30
#define OBJECT_56_4 29
#define OBJECT_56_3 28
#define OBJECT_56_2 27
#define OBJECT_56_1 26
#define OBJECT_56_0 25
#define EXECUTE_CACHE_56_12 17
#define EXECUTE_CACHE_56_6 19
#define FREE_REFERENCE_56_2 22
#define FREE_REFERENCE_56_1 23
#define FREE_REFERENCE_56_0 24
#define FREE_REFERENCES_LABEL_56_0 16
#define NUMBER_OF_LINKER_SECTIONS_56_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd80;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd74;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd54;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd34;
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
      current_block = (Rpc - LABEL_56_4);
      goto char__digit_20;

    case 1:
      current_block = (Rpc - LABEL_56_7);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_56_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_56_8);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_56_9);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_56_10);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_56_11);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char__digit_27)
DEFLABEL (char__digit_20)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_56_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_56_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_48;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));

DEFLABEL (label_47)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  if ((Wrd18.Obj) == (current_block [OBJECT_56_2]))
    goto label_46;
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd21.uLng) == 26)
    goto label_44;

DEFLABEL (label_43)
  (Wrd22.Obj) = (current_block [OBJECT_56_0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_56_4]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_56_7);
  (Wrd34.Obj) = Rvl;

DEFLABEL (label_42)
  (Rsp [1]) = (Wrd34.Obj);
  (Wrd37.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_0]));
  (Wrd40.Obj) = ((Wrd37.pObj) [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 50)
    goto label_41;
  Wrd36 = Wrd40;

DEFLABEL (label_40)
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  (Wrd45.Lng) = ((Wrd43.Lng) - (Wrd44.Lng));
  (Wrd46.Obj) = (LONG_TO_FIXNUM (Wrd45.Lng));
  (* (--Rsp)) = (Wrd46.Obj);
  Wrd48 = Wrd45;
  if ((Wrd48.Lng) < 0)
    goto label_38;
  (Wrd51.Obj) = (Rsp [2]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if ((Wrd48.Lng) < (Wrd52.Lng))
    goto label_39;

DEFLABEL (label_38)
  (Wrd55.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_1]));
  (Wrd58.Obj) = ((Wrd55.pObj) [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd59.uLng) == 50)
    goto label_37;
  Wrd54 = Wrd58;

DEFLABEL (label_36)
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  (Wrd64.Lng) = ((Wrd62.Lng) - (Wrd63.Lng));
  (Wrd60.Obj) = (LONG_TO_FIXNUM (Wrd64.Lng));
  (Rsp [0]) = (Wrd60.Obj);
  Wrd68 = Wrd64;
  if (10L > (Wrd68.Lng))
    goto label_34;
  (Wrd71.Obj) = (Rsp [2]);
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  if ((Wrd68.Lng) < (Wrd72.Lng))
    goto label_35;

DEFLABEL (label_34)
  (Wrd75.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_2]));
  (Wrd78.Obj) = ((Wrd75.pObj) [0]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if ((Wrd79.uLng) == 50)
    goto label_33;
  Wrd74 = Wrd78;

DEFLABEL (label_32)
  (Wrd81.Obj) = (Rsp [1]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  (Wrd84.Lng) = ((Wrd82.Lng) - (Wrd83.Lng));
  (Wrd80.Obj) = (LONG_TO_FIXNUM (Wrd84.Lng));
  (Rsp [0]) = (Wrd80.Obj);
  Wrd88 = Wrd84;
  if (10L > (Wrd88.Lng))
    goto label_30;
  (Wrd91.Obj) = (Rsp [2]);
  (Wrd92.Lng) = (FIXNUM_TO_LONG (Wrd91.Obj));
  if ((Wrd88.Lng) < (Wrd92.Lng))
    goto label_29;

DEFLABEL (label_30)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_28;

DEFLABEL (label_29)
  Rvl = (Wrd80.Obj);

DEFLABEL (label_28)
DEFLABEL (label_31)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_11])), (Wrd75.pObj));

DEFLABEL (label_25)
  (Wrd74.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  Rvl = (Wrd60.Obj);
  goto label_31;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_10])), (Wrd55.pObj));

DEFLABEL (label_24)
  (Wrd54.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  Rvl = (Wrd46.Obj);
  goto label_31;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_9])), (Wrd37.pObj));

DEFLABEL (label_23)
  (Wrd36.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_44)
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (2L > (Wrd28.Lng))
    goto label_43;
  if ((Wrd28.Lng) > 36L)
    goto label_43;
  Wrd34 = Wrd18;

DEFLABEL (label_45)
  Rsp = (& (Rsp [1]));
  goto label_42;

DEFLABEL (label_46)
  (Wrd34.Obj) = (current_block [OBJECT_56_3]);
  goto label_45;

DEFLABEL (label_48)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_1]), 1);

DEFLABEL (label_22)
  (Wrd7.Obj) = Rvl;
  goto label_47;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define LABEL_57_6 7
#define LABEL_57_7 9
#define LABEL_57_10 11
#define LABEL_57_14 13
#define LABEL_57_17 15
#define LABEL_57_18 17
#define LABEL_57_8 19
#define LABEL_57_21 21
#define LABEL_57_23 23
#define LABEL_57_16 25
#define LABEL_57_24 27
#define LABEL_57_26 29
#define LABEL_57_13 31
#define LABEL_57_12 33
#define LABEL_57_19 35
#define ENVIRONMENT_LABEL_57_3 65
#define DEBUGGING_LABEL_57_2 64
#define OBJECT_57_7 63
#define OBJECT_57_6 62
#define OBJECT_57_5 61
#define OBJECT_57_4 60
#define OBJECT_57_3 59
#define OBJECT_57_2 58
#define OBJECT_57_1 57
#define OBJECT_57_0 56
#define EXECUTE_CACHE_57_28 37
#define EXECUTE_CACHE_57_27 39
#define EXECUTE_CACHE_57_25 41
#define EXECUTE_CACHE_57_22 43
#define EXECUTE_CACHE_57_20 45
#define EXECUTE_CACHE_57_15 47
#define EXECUTE_CACHE_57_11 49
#define EXECUTE_CACHE_57_9 51
#define FREE_REFERENCE_57_1 54
#define FREE_REFERENCE_57_0 55
#define FREE_REFERENCES_LABEL_57_0 36
#define NUMBER_OF_LINKER_SECTIONS_57_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd42;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd22;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd52;
  machine_word Wrd50;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_57_4);
      goto name__char_31;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto label_33;

    case 2:
      current_block = (Rpc - LABEL_57_6);
      goto loop_28;

    case 3:
      current_block = (Rpc - LABEL_57_7);
      goto label_34;

    case 4:
      current_block = (Rpc - LABEL_57_10);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_57_14);
      goto label_36;

    case 6:
      current_block = (Rpc - LABEL_57_17);
      goto label_35;

    case 7:
      current_block = (Rpc - LABEL_57_18);
      goto continuation_24;

    case 8:
      current_block = (Rpc - LABEL_57_8);
      goto continuation_23;

    case 9:
      current_block = (Rpc - LABEL_57_21);
      goto lambda_1;

    case 10:
      current_block = (Rpc - LABEL_57_23);
      goto continuation_17;

    case 11:
      current_block = (Rpc - LABEL_57_16);
      goto continuation_14;

    case 12:
      current_block = (Rpc - LABEL_57_24);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_57_26);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_57_13);
      goto continuation_7;

    case 15:
      current_block = (Rpc - LABEL_57_12);
      goto continuation_8;

    case 16:
      current_block = (Rpc - LABEL_57_19);
      goto continuation_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (name__char_38)
DEFLABEL (name__char_31)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_42;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_41)
  (Wrd16.Obj) = (current_block [OBJECT_57_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  goto loop_28;

DEFLABEL (label_42)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_0]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (loop_39)
DEFLABEL (loop_28)
  INTERRUPT_CHECK (26, LABEL_57_6);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd6.Lng) - (Wrd8.Lng));
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (* (--Rsp)) = (Wrd10.Obj);
  if (! ((Wrd10.Obj) == (current_block [OBJECT_57_1])))
    goto label_43;
  (Wrd50.pObj) = (& (Rsp [4]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd50.pObj)));
  (Rsp [3]) = (Wrd52.Obj);
  Rdl = (& (Rsp [5]));
  Rsp = (& (Rsp [3]));
  goto lambda_1;

DEFLABEL (label_43)
  if ((Wrd10.Obj) == (current_block [OBJECT_57_2]))
    goto label_58;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_57_4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd21.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_57_10);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_48;
  Wrd14 = Wrd18;

DEFLABEL (label_47)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_15]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_57_16);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_46;

DEFLABEL (label_45)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_23]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.pObj) = (& (Rsp [6]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  Rdl = (& (Rsp [1]));
  goto lambda_1;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_57_23);

DEFLABEL (label_44)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Lng) = ((Wrd23.Lng) + 1L);
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (Rsp [2]) = (Wrd21.Obj);
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd30.Lng) = ((Wrd27.Lng) | (Wrd29.Lng));
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd30.Lng));
  (Rsp [3]) = (Wrd25.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_28;

DEFLABEL (label_46)
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd9.Lng) & (Wrd11.Lng));
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  if ((Wrd7.Obj) == (current_block [OBJECT_57_1]))
    goto label_44;
  goto label_45;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_17])), (Wrd15.pObj));

DEFLABEL (label_35)
  (Wrd14.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_49)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_12]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_0]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_57;
  Wrd29 = Wrd33;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_57_13);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_55;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_26]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_24]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_57_2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_57_1]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_57_7]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_27]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_57_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;
  (Wrd34.Obj) = (current_block [OBJECT_57_6]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [6]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  (Wrd40.Lng) = ((Wrd37.Lng) + 2L);
  (Wrd41.Obj) = (LONG_TO_FIXNUM (Wrd40.Lng));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_25]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_57_26);
  (Wrd23.Obj) = Rvl;

DEFLABEL (label_53)
  (Rsp [0]) = (Wrd23.Obj);
  if (! ((Wrd23.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_50;
  (Wrd28.pObj) = (& (Rsp [6]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd28.pObj)));
  (Rsp [0]) = (Wrd30.Obj);
  Rdl = (& (Rsp [1]));
  goto lambda_1;

DEFLABEL (label_50)
  Wrd5 = Wrd23;

DEFLABEL (label_52)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_51)
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_28]));

DEFLABEL (label_54)
  (Wrd23.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_53;

DEFLABEL (label_55)
  (Wrd5.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_14])), (Wrd30.pObj));

DEFLABEL (label_36)
  (Wrd29.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_58)
  (Wrd38.Obj) = (Rsp [4]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 30))
    goto label_62;
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_62;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [1]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) (Wrd8.Lng)) < ((unsigned long) (Wrd37.Lng))))
    goto label_62;
  (Wrd25.uLng) = (OBJECT_DATUM (Wrd7.Obj));
  (Wrd28.pChr) = (& ((Wrd35.pChr) [(Wrd25.Lng)]));
  (Wrd29.uLng) = ((unsigned long) (((unsigned char *) (Wrd28.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd22.Obj) = (MAKE_OBJECT (2, (Wrd29.uLng)));

DEFLABEL (label_61)
  (Rsp [0]) = (Wrd22.Obj);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_8]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_9]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_57_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;

DEFLABEL (label_59)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_20]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_57_19);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_28]));

DEFLABEL (label_60)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.pObj) = (& (Rsp [5]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  Rdl = (& (Rsp [1]));
  goto lambda_1;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_57_18);
  goto label_59;

DEFLABEL (label_62)
  (Wrd40.Obj) = (Rsp [4]);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_7]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_3]), 2);

DEFLABEL (label_34)
  (Wrd22.Obj) = Rvl;
  goto label_61;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_57_12);
  (Wrd5.Obj) = Rvl;
  goto label_51;

DEFLABEL (lambda_40)
DEFLABEL (lambda_1)
  DLINK_INTERRUPT_CHECK (25, LABEL_57_21);
  (Wrd5.Obj) = (current_block [OBJECT_57_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_22]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define LABEL_58_9 7
#define LABEL_58_7 9
#define LABEL_58_12 11
#define LABEL_58_14 13
#define LABEL_58_15 15
#define LABEL_58_16 17
#define LABEL_58_11 19
#define LABEL_58_10 21
#define LABEL_58_23 23
#define LABEL_58_20 25
#define LABEL_58_18 27
#define LABEL_58_26 29
#define LABEL_58_27 31
#define LABEL_58_29 33
#define LABEL_58_30 35
#define ENVIRONMENT_LABEL_58_3 73
#define DEBUGGING_LABEL_58_2 72
#define OBJECT_58_9 71
#define OBJECT_58_8 70
#define OBJECT_58_7 69
#define OBJECT_58_6 68
#define OBJECT_58_5 67
#define OBJECT_58_4 66
#define OBJECT_58_3 65
#define OBJECT_58_2 64
#define OBJECT_58_1 63
#define OBJECT_58_0 62
#define EXECUTE_CACHE_58_31 37
#define EXECUTE_CACHE_58_28 39
#define EXECUTE_CACHE_58_25 41
#define EXECUTE_CACHE_58_24 43
#define EXECUTE_CACHE_58_22 45
#define EXECUTE_CACHE_58_21 47
#define EXECUTE_CACHE_58_19 49
#define EXECUTE_CACHE_58_17 51
#define EXECUTE_CACHE_58_13 53
#define EXECUTE_CACHE_58_8 55
#define EXECUTE_CACHE_58_6 57
#define FREE_REFERENCE_58_1 60
#define FREE_REFERENCE_58_0 61
#define FREE_REFERENCES_LABEL_58_0 36
#define NUMBER_OF_LINKER_SECTIONS_58_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd13;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_58_4);
      goto char__name_27;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_58_9);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_58_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_58_12);
      goto label_29;

    case 5:
      current_block = (Rpc - LABEL_58_14);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_58_15);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_58_16);
      goto label_30;

    case 8:
      current_block = (Rpc - LABEL_58_11);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_58_10);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_58_23);
      goto continuation_2;

    case 11:
      current_block = (Rpc - LABEL_58_20);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_58_18);
      goto continuation_23;

    case 13:
      current_block = (Rpc - LABEL_58_26);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_58_27);
      goto continuation_12;

    case 15:
      current_block = (Rpc - LABEL_58_29);
      goto label_31;

    case 16:
      current_block = (Rpc - LABEL_58_30);
      goto loop_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char__name_33)
DEFLABEL (char__name_27)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_58_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_58_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  if ((Wrd12.Obj) == (current_block [OBJECT_58_0]))
    goto label_49;
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 1);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_58_9);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_48)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_47;
  Wrd20 = Wrd24;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_58_11);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  (Wrd5.Obj) = Rvl;
  Rsp = (& (Rsp [3]));

DEFLABEL (label_35)
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_23]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_24]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_58_23);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_25]));

DEFLABEL (label_36)
  (Wrd13.Obj) = (Rsp [6]);
  if (! ((Wrd13.Obj) == (current_block [OBJECT_58_3])))
    goto label_41;

DEFLABEL (label_40)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_20]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_21]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_58_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_19]));

DEFLABEL (label_37)
  (Wrd8.Obj) = (current_block [OBJECT_58_5]);
  (Rsp [0]) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_26]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_27]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_58_6]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_28]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_58_27);
  (* (--Rsp)) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 30))
    goto label_39;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_38)
  (Wrd16.Obj) = (current_block [OBJECT_58_8]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto loop_19;

DEFLABEL (label_39)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_29]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_7]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  if ((Wrd13.Obj) == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd18.Obj) = (Rsp [4]);
  if ((Wrd18.Obj) == (current_block [OBJECT_58_0]))
    goto label_40;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_15]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_58_4]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_22]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_58_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;

DEFLABEL (label_42)
  (Wrd30.Obj) = (current_block [OBJECT_58_2]);
  (Rsp [0]) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_18]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_19]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_58_18);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_25]));

DEFLABEL (label_43)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_14]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_1]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_45;
  Wrd39 = Wrd43;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_17]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_58_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_16])), (Wrd40.pObj));

DEFLABEL (label_30)
  (Wrd39.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_12])), (Wrd21.pObj));

DEFLABEL (label_29)
  (Wrd20.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd15.Obj) = (Rsp [4]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd15.Obj);
  goto label_48;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_58_26);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_25]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_58_10);
  (Wrd5.Obj) = Rvl;
  goto label_35;

DEFLABEL (loop_34)
DEFLABEL (loop_19)
  INTERRUPT_CHECK (26, LABEL_58_30);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) > (Wrd8.Lng))
    goto label_50;
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_58_9]);
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_31]));

DEFLABEL (label_50)
  (Wrd18.Lng) = (LEFT_SHIFT ((Wrd8.Lng), 1));
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (Rsp [0]) = (Wrd13.Obj);
  goto loop_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define LABEL_59_6 7
#define LABEL_59_7 9
#define LABEL_59_8 11
#define LABEL_59_9 13
#define LABEL_59_11 15
#define LABEL_59_10 17
#define LABEL_59_12 19
#define LABEL_59_13 21
#define LABEL_59_14 23
#define ENVIRONMENT_LABEL_59_3 35
#define DEBUGGING_LABEL_59_2 34
#define OBJECT_59_4 33
#define OBJECT_59_3 32
#define OBJECT_59_2 31
#define OBJECT_59_1 30
#define OBJECT_59_0 29
#define EXECUTE_CACHE_59_15 25
#define FREE_REFERENCE_59_0 28
#define FREE_REFERENCES_LABEL_59_0 24
#define NUMBER_OF_LINKER_SECTIONS_59_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd54;
  machine_word Wrd61;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd68;
  machine_word Wrd75;
  machine_word Wrd71;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_59_4);
      goto bucky_bits__prefix_14;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_59_6);
      goto loop_12;

    case 3:
      current_block = (Rpc - LABEL_59_7);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_59_8);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_59_9);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_59_11);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_59_10);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_59_12);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_59_13);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_59_14);
      goto label_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bucky_bits__prefix_25)
DEFLABEL (bucky_bits__prefix_14)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_28;
  Wrd7 = Wrd11;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [3]));
  goto loop_12;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_5])), (Wrd8.pObj));

DEFLABEL (label_16)
  (Wrd7.Obj) = Rvl;
  goto label_27;

DEFLABEL (loop_26)
DEFLABEL (loop_12)
  DLINK_INTERRUPT_CHECK (25, LABEL_59_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_29;
  Rvl = (current_block [OBJECT_59_3]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_29)
  if (! ((Wrd6.uLng) == 1))
    goto label_44;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_43)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_42;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_41)
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  (Wrd38.Lng) = ((Wrd33.Lng) & (Wrd37.Lng));
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd38.Lng));
  if ((Wrd32.Obj) == (current_block [OBJECT_59_1]))
    goto label_38;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_10]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd35.pObj)));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd52.Obj) = (Rsp [3]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_37;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [1]);
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_36)
  Rdl = (& (Rsp [2]));
  goto loop_12;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_59_10);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (current_block [OBJECT_59_4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_35;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_34)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_33;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_32)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_31;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_30)
  (* (--Rdl)) = (Rsp [2]);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_15]));

DEFLABEL (label_31)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_14]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_0]), 1);

DEFLABEL (label_23)
  (Wrd35.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd35.Obj));
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_13]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_2]), 1);

DEFLABEL (label_22)
  (Wrd24.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_0]), 1);

DEFLABEL (label_21)
  (Wrd13.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd8.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_11]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_2]), 1);

DEFLABEL (label_19)
  (Wrd54.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd54.Obj));
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_38)
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_40;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd63.Obj) = ((Wrd65.pObj) [1]);

DEFLABEL (label_39)
  (Rsp [0]) = (Wrd63.Obj);
  goto loop_12;

DEFLABEL (label_40)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_9]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_2]), 1);

DEFLABEL (label_20)
  (Wrd68.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd63.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_0]), 1);

DEFLABEL (label_18)
  (Wrd24.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_0]), 1);

DEFLABEL (label_17)
  (Wrd13.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd8.Obj) = Rvl;
  goto label_43;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_5 5
#define LABEL_60_9 7
#define LABEL_60_6 9
#define TAG_60_7 3
#define LABEL_60_12 11
#define LABEL_60_13 13
#define LABEL_60_14 15
#define LABEL_60_15 17
#define LABEL_60_16 19
#define LABEL_60_10 21
#define TAG_60_11 9
#define LABEL_60_18 23
#define ENVIRONMENT_LABEL_60_3 36
#define DEBUGGING_LABEL_60_2 35
#define OBJECT_60_3 34
#define OBJECT_60_2 33
#define OBJECT_60_1 32
#define OBJECT_60_0 31
#define EXECUTE_CACHE_60_19 25
#define EXECUTE_CACHE_60_17 27
#define EXECUTE_CACHE_60_8 29
#define FREE_REFERENCES_LABEL_60_0 24
#define NUMBER_OF_LINKER_SECTIONS_60_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd51;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd50;
  machine_word Wrd45;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd65;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd61;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd44;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_60_4);
      goto Z___code_9;

    case 1:
      current_block = (Rpc - LABEL_60_5);
      goto continuation_7;

    case 2:
      current_block = (Rpc - LABEL_60_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_60_6);
      goto lambda_19;

    case 4:
      current_block = (Rpc - LABEL_60_12);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_60_13);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_60_14);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_60_15);
      goto label_13;

    case 8:
      current_block = (Rpc - LABEL_60_16);
      goto label_14;

    case 9:
      current_block = (Rpc - LABEL_60_10);
      goto lambda_20;

    case 10:
      current_block = (Rpc - LABEL_60_18);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___code_18)
DEFLABEL (Z___code_9)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_60_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_60_6])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_8]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_60_5);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd13.uLng) == 1)
    goto label_21;
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_0]), 1);

DEFLABEL (label_21)
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd10.pObj) [0]);

DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_23)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_22;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_60_6);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_60_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_60_10])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd15 = Wrd6;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  ((Wrd15.pObj) [2]) = (Wrd18.Obj);
  (Wrd14.Obj) = ((Wrd17.pObj) [3]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Wrd10.Obj) = ((Wrd17.pObj) [4]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_35;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_34)
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_33;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  if ((Wrd32.Obj) == ((SCHEME_OBJECT) 0))
    goto label_29;

DEFLABEL (label_28)
  (Wrd55.Obj) = (Rsp [3]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 1))
    goto label_26;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd44.Obj) = ((Wrd54.pObj) [1]);

DEFLABEL (label_25)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_24)
  (Rsp [1]) = (Wrd44.Obj);
  (Wrd51.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_17]));

DEFLABEL (label_26)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_16]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 1);

DEFLABEL (label_14)
DEFLABEL (label_27)
  (Wrd44.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_29)
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_32;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_31)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_30;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd44.Obj) = ((Wrd45.pObj) [1]);
  goto label_25;

DEFLABEL (label_30)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_15]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 1);

DEFLABEL (label_13)
  goto label_27;

DEFLABEL (label_32)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_14]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 1);

DEFLABEL (label_12)
  (Wrd34.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_13]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_0]), 1);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_28;

DEFLABEL (label_35)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_12]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 1);

DEFLABEL (label_11)
  (Wrd22.Obj) = Rvl;
  goto label_34;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_60_9);
  (Wrd44.Obj) = Rvl;
  goto label_24;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_60_10);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_60_2]);
  (Rsp [4]) = (Wrd15.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 30))
    goto label_37;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (Wrd16.Obj) = (MAKE_OBJECT (26, (Wrd20.uLng)));

DEFLABEL (label_36)
  (Rsp [5]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_19]));

DEFLABEL (label_37)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_18]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_3]), 1);

DEFLABEL (label_16)
  (Wrd16.Obj) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define LABEL_61_7 7
#define ENVIRONMENT_LABEL_61_3 14
#define DEBUGGING_LABEL_61_2 13
#define OBJECT_61_1 12
#define OBJECT_61_0 11
#define EXECUTE_CACHE_61_6 9
#define FREE_REFERENCES_LABEL_61_0 8
#define NUMBER_OF_LINKER_SECTIONS_61_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
char_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_61_4);
      goto Z___name_3;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_61_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___name_7)
DEFLABEL (Z___name_3)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_61_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_11;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_10)
  (Rsp [0]) = (Wrd8.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd22.uLng) == 1)
    goto label_8;
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 1);

DEFLABEL (label_8)
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  Rvl = ((Wrd19.pObj) [0]);

DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_0]), 1);

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_9;

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
char_so_01b38f83007e473b (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	2,
	2,
	2,
	1,
	1,
	1,
	0,
	2,
	2,
	0,
	2,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	1,
	0,
	1,
	0,
	1,
	0,
	1,
	1,
	2,
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
	1,
	1,
	1,
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

static const struct liarc_code_S arr_decl_char_so_01b38f83007e473b [61] =
  {
    { "char_so_code_1", 1, char_so_code_1 },
    { "char_so_code_2", 1, char_so_code_2 },
    { "char_so_code_3", 1, char_so_code_3 },
    { "char_so_code_4", 1, char_so_code_4 },
    { "char_so_code_5", 2, char_so_code_5 },
    { "char_so_code_6", 2, char_so_code_6 },
    { "char_so_code_7", 1, char_so_code_7 },
    { "char_so_code_8", 1, char_so_code_8 },
    { "char_so_code_9", 3, char_so_code_9 },
    { "char_so_code_10", 2, char_so_code_10 },
    { "char_so_code_11", 3, char_so_code_11 },
    { "char_so_code_12", 3, char_so_code_12 },
    { "char_so_code_13", 4, char_so_code_13 },
    { "char_so_code_14", 4, char_so_code_14 },
    { "char_so_code_15", 5, char_so_code_15 },
    { "char_so_code_16", 5, char_so_code_16 },
    { "char_so_code_17", 6, char_so_code_17 },
    { "char_so_code_18", 2, char_so_code_18 },
    { "char_so_code_19", 1, char_so_code_19 },
    { "char_so_code_20", 1, char_so_code_20 },
    { "char_so_code_21", 2, char_so_code_21 },
    { "char_so_code_22", 1, char_so_code_22 },
    { "char_so_code_23", 1, char_so_code_23 },
    { "char_so_code_24", 1, char_so_code_24 },
    { "char_so_code_25", 1, char_so_code_25 },
    { "char_so_code_26", 2, char_so_code_26 },
    { "char_so_code_27", 2, char_so_code_27 },
    { "char_so_code_28", 3, char_so_code_28 },
    { "char_so_code_29", 2, char_so_code_29 },
    { "char_so_code_30", 2, char_so_code_30 },
    { "char_so_code_31", 2, char_so_code_31 },
    { "char_so_code_32", 5, char_so_code_32 },
    { "char_so_code_33", 5, char_so_code_33 },
    { "char_so_code_34", 3, char_so_code_34 },
    { "char_so_code_35", 5, char_so_code_35 },
    { "char_so_code_36", 3, char_so_code_36 },
    { "char_so_code_37", 5, char_so_code_37 },
    { "char_so_code_38", 3, char_so_code_38 },
    { "char_so_code_39", 5, char_so_code_39 },
    { "char_so_code_40", 3, char_so_code_40 },
    { "char_so_code_41", 5, char_so_code_41 },
    { "char_so_code_42", 5, char_so_code_42 },
    { "char_so_code_43", 5, char_so_code_43 },
    { "char_so_code_44", 5, char_so_code_44 },
    { "char_so_code_45", 5, char_so_code_45 },
    { "char_so_code_46", 2, char_so_code_46 },
    { "char_so_code_47", 7, char_so_code_47 },
    { "char_so_code_48", 7, char_so_code_48 },
    { "char_so_code_49", 5, char_so_code_49 },
    { "char_so_code_50", 22, char_so_code_50 },
    { "char_so_code_51", 4, char_so_code_51 },
    { "char_so_code_52", 1, char_so_code_52 },
    { "char_so_code_53", 2, char_so_code_53 },
    { "char_so_code_54", 1, char_so_code_54 },
    { "char_so_code_55", 3, char_so_code_55 },
    { "char_so_code_56", 7, char_so_code_56 },
    { "char_so_code_57", 17, char_so_code_57 },
    { "char_so_code_58", 17, char_so_code_58 },
    { "char_so_code_59", 11, char_so_code_59 },
    { "char_so_code_60", 11, char_so_code_60 },
    { "char_so_code_61", 3, char_so_code_61 }
  };

int
decl_char_so_01b38f83007e473b (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_char_so_01b38f83007e473b);
  return (0);
}

DECLARE_COMPILED_CODE ("char.so", 3, decl_char_so_01b38f83007e473b, char_so_01b38f83007e473b)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_char_so_data_01b38f83007e473b [6018] =
  "\x86\x01\x6c\xda\x0e\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x07\x22\x29"
  "\x21\x9d\x2b\xb9\x1d\xb0\x82\x88\xc1\xba\x22\x29\x21\x9d\x2b\xbb"
  "\x1d\xb0\x83\x88\xc1\xbc\x22\x29\x21\x9d\x2b\xbd\x1d\xb0\x84\x88"
  "\xb4\x22\x29\x21\x9d\x2b\xbe\x1d\xb0\x85\x88\xb2\x22\x29\x22\x29"
  "\x21\x9f\x2b\xbf\x1d\xb0\x86\x88\xb2\x22\x29\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb4\x02\x02\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x02\x0d\x1c"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb2\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb2\x02\x0d\x1c\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x80\xb2\x02\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\xb2\x02"
  "\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\xb2\x02\x0d\x1c\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\x02\x02\xb2\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x06\x1d\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\x02\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1d\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x06\x1d\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x02\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\x02\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x02\x02\x07\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\xb2\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x28\x0d\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\x0d\x1c\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb4\x02\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x24\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\xb2\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb2"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb2\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb2\x0d\x1c\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\xb2\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\xb2\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb2\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb2\x0d\x1c\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\xb2\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\xb2\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb2\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\xb2\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb2\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\xb2\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb2\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb4\xc2\x1c\xb2\x0d\x1c\x0d\x1c\x24\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x1b\xb2\x1b\x0d\x1c\x24\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x1b\xb2\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x02\x02"
  "\x02\x02\x02\x02\xc3\x02\x02\x02\x80\xc1\x02\x1b\x0d\x1c\x1b\x25"
  "\x1b\x1b\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x02\x02\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x25\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xc2\x1c\x0c\x02\x1d\x0d\x1c\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x02\x1d\xb2\x0d\xba\x1b\x1b\x1b\x24\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x02\x0d\x1c\x0f\x1b\x81\x80\xc1\x1c\x0d"
  "\x1c\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0f\x82\x1b\x02\x0c\x0f\x1d\x0c\xb4\x80\x1b\x0d\x24\x28\x1b"
  "\x28\x1b\x28\x0d\xbc\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x0c\xc1\x1c\x80\xc1\x1c\x1b\x24\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\x1b\x1b"
  "\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x02\x84\x82\x81\x81\x0c\x0c\x08"
  "\x8a\x82\x0c\x0c\x0c\x08\x8b\x84\x0c\x0c\x08\x8a\x02\x0c\x0c\x08"
  "\x8a\x08\x8b\x80\x06\x0c\x0c\x08\x8b\x81\x06\x0c\x08\x8a\x82\x06"
  "\x0c\x08\x8a\x83\x06\x0c\x08\x8a\x84\x06\x0c\x08\x8a\x85\x06\x0c"
  "\x08\x8a\x86\x06\x0c\x08\x8a\x02\x06\x0c\x08\x8a\x02\x0c\x0c\x08"
  "\x8a\x02\x0c\x0c\x08\x8a\x02\x0c\x0c\x0c\x0c\x08\x8c\x02\x06\x0c"
  "\x08\x8a\x02\x0c\x0c\x0c\x0c\x08\x8c\x02\x0c\x0c\x0c\x08\x8b\x02"
  "\x06\x0c\x08\x8a\x02\x06\x0c\x08\x8a\x02\x06\x0c\x08\x8a\x02\x06"
  "\x0c\x08\x8a\x02\x06\x0c\x08\x8a\x02\x06\x0c\x08\x8a\x02\x06\x0c"
  "\x08\x8a\x02\x06\x0c\x08\x8a\x02\x06\x0c\x08\x8a\x02\x06\x0c\x08"
  "\x8a\x02\x06\x0c\x08\x8a\x02\x06\x0c\x08\x8a\x02\x06\x0c\x0c\x08"
  "\x8b\x02\x0c\x0c\x0c\x08\x8b\x02\x06\x0c\x08\x8a\x02\x06\x0c\x08"
  "\x8a\x02\x06\x0c\x08\x8a\x02\x06\x0c\x0c\x08\x8b\x02\x0c\x0c\x0c"
  "\x08\x8b\x02\x0c\x0c\x0c\x08\x8b\x02\x0c\x08\x89\x02\x0c\x08\x89"
  "\x08\x14\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1e\x1e\x1b\x2a\x1e\x1e\x1e"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb6\x2a\x04\x02\x02\xb5"
  "\x2a\xb3\x2a\xb1\x2a\x17\x0d\x0d\x0d\x0d\x1b\x1b\xb4\x1b\x1b\x0d"
  "\x1b\xb2\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b"
  "\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x1b"
  "\x0d\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x1b\x0d\x1b\x1b\x0d\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x53"
  "\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77"
  "\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72"
  "\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f"
  "\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x63\x68\x61\x72\x2e\x69"
  "\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f"
  "\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x04\x04\x83\x04\x03\x02\x0e\x63"
  "\x68\x61\x72\x2d\x3e\x69\x6e\x74\x65\x67\x65\x72\x05\x04\x83\x04"
  "\x03\x02\x0e\x69\x6e\x74\x65\x67\x65\x72\x2d\x3e\x63\x68\x61\x72"
  "\x06\x04\x83\x04\x03\x02\x07\x04\x84\x06\x03\x02\x09\x06\x81\x83"
  "\x02\x08\x04\x83\x04\x05\x02\x0b\x06\x81\x83\x02\x0a\x04\x83\x04"
  "\x05\x09\x02\x08\x02\x04\x0f\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74"
  "\x2d\x63\x68\x61\x72\x0a\x02\x0c\x04\x84\x04\x03\x0a\x0b\x02\x09"
  "\x08\x0a\x63\x68\x61\x72\x61\x63\x74\x65\x72\x05\x1a\x65\x72\x72"
  "\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72"
  "\x67\x75\x6d\x65\x6e\x74\x0c\x02\x0d\x04\x84\x04\x03\x0c\x0d\x02"
  "\x0a\x11\x81\x80\x44\x0a\x6d\x61\x6b\x65\x2d\x63\x68\x61\x72\x0e"
  "\x05\x1f\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x6c\x69\x6d\x69"
  "\x74\x65\x64\x2d\x69\x6e\x64\x65\x78\x2d\x66\x69\x78\x6e\x75\x6d"
  "\x0f\x02\x10\x08\x81\x85\x02\x0f\x06\x81\x85\x02\x0e\x04\x84\x06"
  "\x07\x11\x10\x02\x0b\x81\x80\x44\x0b\x63\x6f\x64\x65\x2d\x3e\x63"
  "\x68\x61\x72\x11\x05\x0f\x02\x12\x06\x81\x83\x02\x11\x04\x83\x04"
  "\x05\x0e\x12\x02\x0c\x0a\x63\x68\x61\x72\x2d\x63\x6f\x64\x65\x13"
  "\x04\x0f\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x63\x68\x61\x72"
  "\x14\x02\x15\x08\x81\x83\x02\x14\x06\x81\x83\x02\x13\x04\x83\x04"
  "\x07\x0f\x15\x02\x0d\x0a\x63\x68\x61\x72\x2d\x62\x69\x74\x73\x16"
  "\x04\x14\x02\x18\x08\x81\x83\x02\x17\x06\x81\x83\x02\x16\x04\x83"
  "\x04\x07\x0f\x17\x02\x0e\x11\x0f\x63\x68\x61\x72\x2d\x62\x69\x74"
  "\x73\x2d\x73\x65\x74\x3f\x18\x05\x0f\x04\x14\x03\x1c\x0a\x81\x85"
  "\x02\x1b\x08\x81\x85\x02\x1a\x06\x81\x85\x02\x19\x04\x84\x06\x09"
  "\x15\x19\x02\x0f\x11\x11\x63\x68\x61\x72\x2d\x62\x69\x74\x73\x2d"
  "\x63\x6c\x65\x61\x72\x3f\x1a\x05\x0f\x04\x14\x03\x20\x0a\x81\x85"
  "\x02\x1f\x08\x81\x85\x02\x1e\x06\x81\x85\x02\x1d\x04\x84\x06\x09"
  "\x16\x1b\x02\x10\x11\x0e\x73\x65\x74\x2d\x63\x68\x61\x72\x2d\x62"
  "\x69\x74\x73\x1c\x05\x0f\x04\x14\x03\x25\x0c\x81\x87\x02\x24\x0a"
  "\x81\x85\x02\x23\x08\x81\x85\x02\x22\x06\x81\x85\x02\x21\x04\x84"
  "\x06\x0b\x17\x1d\x02\x11\x11\x10\x63\x6c\x65\x61\x72\x2d\x63\x68"
  "\x61\x72\x2d\x62\x69\x74\x73\x1e\x05\x0f\x04\x14\x03\x2a\x0c\x81"
  "\x87\x02\x29\x0a\x81\x85\x02\x28\x08\x81\x85\x02\x27\x06\x81\x85"
  "\x02\x26\x04\x84\x06\x0b\x17\x1f\x02\x12\x80\x80\x04\xff\xff\x03"
  "\x30\x0e\x81\x83\x02\x2f\x0c\x81\x83\x02\x2e\x0a\x81\x83\x02\x2d"
  "\x08\x81\x83\x02\x2c\x06\x81\x83\x02\x2b\x04\x83\x04\x0d\x14\x20"
  "\x02\x13\x02\x03\x0e\x75\x6e\x69\x63\x6f\x64\x65\x2d\x63\x68\x61"
  "\x72\x3f\x21\x04\x17\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x75"
  "\x6e\x69\x63\x6f\x64\x65\x2d\x63\x68\x61\x72\x22\x03\x32\x06\x81"
  "\x85\x02\x31\x04\x84\x04\x05\x0e\x23\x02\x14\x08\x14\x61\x20\x55"
  "\x6e\x69\x63\x6f\x64\x65\x20\x63\x68\x61\x72\x61\x63\x74\x65\x72"
  "\x05\x0c\x02\x33\x04\x84\x04\x03\x0c\x24\x02\x15\x80\x80\x04\xff"
  "\xff\x03\x34\x04\x83\x04\x03\x25\x02\x16\x02\x03\x16\x75\x6e\x69"
  "\x63\x6f\x64\x65\x2d\x73\x63\x61\x6c\x61\x72\x2d\x76\x61\x6c\x75"
  "\x65\x3f\x26\x04\x1f\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x75"
  "\x6e\x69\x63\x6f\x64\x65\x2d\x73\x63\x61\x6c\x61\x72\x2d\x76\x61"
  "\x6c\x75\x65\x27\x03\x36\x06\x81\x85\x02\x35\x04\x84\x04\x05\x0e"
  "\x28\x02\x17\x08\x17\x61\x20\x55\x6e\x69\x63\x6f\x64\x65\x20\x73"
  "\x63\x61\x6c\x61\x72\x20\x76\x61\x6c\x75\x65\x05\x0c\x02\x37\x04"
  "\x84\x04\x03\x0c\x29\x02\x18\x80\x80\x04\xff\xff\x03\x38\x04\x83"
  "\x04\x03\x2a\x02\x19\x80\x80\x04\xff\xff\x03\x39\x04\x83\x04\x03"
  "\x2b\x02\x1a\x80\x80\x04\xff\xff\x03\x3a\x04\x83\x04\x03\x2c\x02"
  "\x1b\x3c\x06\x81\x83\x02\x3b\x04\x83\x04\x05\x0a\x2d\x02\x1c\x02"
  "\x03\x0c\x38\x2d\x62\x69\x74\x2d\x63\x68\x61\x72\x3f\x2e\x03\x15"
  "\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x38\x2d\x62\x69\x74\x2d"
  "\x63\x68\x61\x72\x03\x3e\x06\x81\x85\x02\x3d\x04\x84\x04\x05\x0e"
  "\x2f\x02\x1d\x0c\x63\x68\x61\x72\x2d\x61\x73\x63\x69\x69\x3f\x30"
  "\x04\x14\x02\x41\x08\x81\x83\x02\x40\x06\x81\x83\x02\x3f\x04\x83"
  "\x04\x07\x0f\x31\x02\x1e\x0c\x63\x68\x61\x72\x2d\x3e\x61\x73\x63"
  "\x69\x69\x32\x04\x15\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x38"
  "\x2d\x62\x69\x74\x2d\x63\x68\x61\x72\x33\x02\x43\x06\x81\x83\x02"
  "\x42\x04\x83\x04\x05\x0d\x34\x02\x1f\x81\x02\x0c\x61\x73\x63\x69"
  "\x69\x2d\x3e\x63\x68\x61\x72\x35\x05\x0f\x02\x45\x06\x81\x83\x02"
  "\x44\x04\x83\x04\x05\x0e\x36\x02\x20\x32\x02\x04\x04\x6d\x61\x70"
  "\x02\x47\x06\x81\x83\x02\x46\x04\x83\x04\x05\x0d\x37\x02\x21\x07"
  "\x63\x68\x61\x72\x3d\x3f\x38\x04\x14\x02\x4c\x0c\x81\x87\x02\x4b"
  "\x0a\x81\x85\x02\x4a\x08\x81\x85\x02\x49\x06\x81\x85\x02\x48\x04"
  "\x84\x06\x0b\x14\x39\x02\x22\x07\x63\x68\x61\x72\x3c\x3f\x3a\x04"
  "\x14\x02\x51\x0c\x81\x87\x02\x50\x0a\x81\x85\x02\x4f\x08\x81\x85"
  "\x02\x4e\x06\x81\x85\x02\x4d\x04\x84\x06\x0b\x14\x3b\x02\x23\x54"
  "\x08\x81\x87\x02\x53\x06\x81\x85\x02\x52\x04\x84\x06\x07\x0c\x3c"
  "\x02\x24\x08\x63\x68\x61\x72\x3c\x3d\x3f\x3d\x04\x14\x02\x59\x0c"
  "\x81\x87\x02\x58\x0a\x81\x85\x02\x57\x08\x81\x85\x02\x56\x06\x81"
  "\x85\x02\x55\x04\x84\x06\x0b\x14\x3e\x02\x25\x5c\x08\x81\x87\x02"
  "\x5b\x06\x81\x85\x02\x5a\x04\x84\x06\x07\x0c\x3f\x02\x26\x07\x63"
  "\x68\x61\x72\x3e\x3f\x40\x04\x14\x02\x61\x0c\x81\x87\x02\x60\x0a"
  "\x81\x85\x02\x5f\x08\x81\x85\x02\x5e\x06\x81\x85\x02\x5d\x04\x84"
  "\x06\x0b\x14\x41\x02\x27\x64\x08\x81\x87\x02\x63\x06\x81\x85\x02"
  "\x62\x04\x84\x06\x07\x0c\x42\x02\x28\x08\x63\x68\x61\x72\x3e\x3d"
  "\x3f\x43\x04\x14\x02\x69\x0c\x81\x87\x02\x68\x0a\x81\x85\x02\x67"
  "\x08\x81\x85\x02\x66\x06\x81\x85\x02\x65\x04\x84\x06\x0b\x14\x44"
  "\x02\x29\x6c\x08\x81\x87\x02\x6b\x06\x81\x85\x02\x6a\x04\x84\x06"
  "\x07\x0c\x45\x02\x2a\x03\x0c\x63\x68\x61\x72\x2d\x75\x70\x63\x61"
  "\x73\x65\x46\x02\x71\x0c\x81\x87\x02\x70\x0a\x81\x87\x02\x6f\x08"
  "\x81\x85\x02\x6e\x06\x81\x85\x02\x6d\x04\x84\x06\x0b\x13\x47\x02"
  "\x2b\x03\x46\x02\x76\x0c\x81\x87\x02\x75\x0a\x81\x87\x02\x74\x08"
  "\x81\x85\x02\x73\x06\x81\x85\x02\x72\x04\x84\x06\x0b\x13\x48\x02"
  "\x2c\x03\x46\x02\x7b\x0c\x81\x87\x02\x7a\x0a\x81\x87\x02\x79\x08"
  "\x81\x85\x02\x78\x06\x81\x85\x02\x77\x04\x84\x06\x0b\x13\x49\x02"
  "\x2d\x03\x46\x02\x80\x01\x0c\x81\x87\x02\x7f\x0a\x81\x87\x02\x7e"
  "\x08\x81\x85\x02\x7d\x06\x81\x85\x02\x7c\x04\x84\x06\x0b\x13\x4a"
  "\x02\x2e\x03\x46\x02\x85\x01\x0c\x81\x87\x02\x84\x01\x0a\x81\x87"
  "\x02\x83\x01\x08\x81\x85\x02\x82\x01\x06\x81\x85\x02\x81\x01\x04"
  "\x84\x06\x0b\x13\x4b\x02\x2f\x03\x46\x02\x87\x01\x06\x81\x83\x02"
  "\x86\x01\x04\x83\x04\x05\x0c\x4c\x02\x30\x0e\x76\x65\x63\x74\x6f"
  "\x72\x2d\x38\x62\x2d\x72\x65\x66\x4d\x0e\x63\x68\x61\x72\x2d\x64"
  "\x6f\x77\x6e\x63\x61\x73\x65\x4e\x0f\x64\x6f\x77\x6e\x63\x61\x73"
  "\x65\x2d\x74\x61\x62\x6c\x65\x4f\x02\x04\x14\x02\x8e\x01\x10\x81"
  "\x85\x02\x8d\x01\x0e\x81\x83\x02\x8c\x01\x0c\x81\x85\x02\x8b\x01"
  "\x0a\x81\x83\x02\x8a\x01\x08\x81\x83\x02\x89\x01\x06\x81\x83\x02"
  "\x88\x01\x04\x83\x04\x0f\x1b\x50\x02\x31\x4d\x46\x0d\x75\x70\x63"
  "\x61\x73\x65\x2d\x74\x61\x62\x6c\x65\x51\x02\x04\x14\x02\x95\x01"
  "\x10\x81\x85\x02\x94\x01\x0e\x81\x83\x02\x93\x01\x0c\x81\x85\x02"
  "\x92\x01\x0a\x81\x83\x02\x91\x01\x08\x81\x83\x02\x90\x01\x06\x81"
  "\x83\x02\x8f\x01\x04\x83\x04\x0f\x1b\x52\x02\x32\x4d\x9a\x01\x0c"
  "\x81\x87\x02\x99\x01\x0a\x81\x85\x02\x98\x01\x08\x81\x85\x02\x97"
  "\x01\x06\x81\x85\x02\x96\x01\x04\x84\x06\x0b\x11\x4d\x02\x33\xd9"
  "\x01\xdf\x01\xf9\x01\xc1\x01\xd7\x01\xe1\x01\x0f\x76\x65\x63\x74"
  "\x6f\x72\x2d\x38\x62\x2d\x73\x65\x74\x21\x42\x5b\x62\x10\x73\x74"
  "\x72\x69\x6e\x67\x2d\x61\x6c\x6c\x6f\x63\x61\x74\x65\x81\x02\x4f"
  "\x0f\x69\x64\x65\x6e\x74\x69\x74\x79\x2d\x74\x61\x62\x6c\x65\x53"
  "\x51\x04\x4f\x53\x51\x04\xb0\x01\x2e\x81\x8b\x02\xaf\x01\x2c\x81"
  "\x8b\x02\xae\x01\x2a\x81\x8b\x02\xad\x01\x28\x81\x8b\x02\xac\x01"
  "\x26\x81\x8b\x02\xab\x01\x24\x81\x81\x02\xaa\x01\x22\x81\x87\x02"
  "\xa9\x01\x20\x81\x81\x02\xa8\x01\x1e\x81\x83\x02\xa7\x01\x1c\x81"
  "\x83\x02\xa6\x01\x1a\x81\x83\x02\xa5\x01\x18\x81\x83\x02\xa4\x01"
  "\x16\x81\x83\x02\xa3\x01\x14\x81\x83\x02\xa2\x01\x12\x81\x83\x02"
  "\xa1\x01\x10\x81\x81\x02\xa0\x01\x0e\x81\x81\x02\x9f\x01\x0c\x81"
  "\x81\x02\x9e\x01\x0a\x81\x81\x02\x9d\x01\x08\x81\x81\x02\x9c\x01"
  "\x06\x81\x81\x02\x9b\x01\x04\x82\x02\x2d\x46\x54\x02\x34\x58\x38"
  "\x31\x07\x30\x2d\x63\x6f\x64\x65\x55\x0d\x75\x70\x70\x65\x72\x2d"
  "\x61\x2d\x63\x6f\x64\x65\x56\x0d\x6c\x6f\x77\x65\x72\x2d\x61\x2d"
  "\x63\x6f\x64\x65\x57\x04\x02\x1d\x69\x6e\x69\x74\x69\x61\x6c\x69"
  "\x7a\x65\x2d\x63\x61\x73\x65\x2d\x63\x6f\x6e\x76\x65\x72\x73\x69"
  "\x6f\x6e\x73\x21\x58\x02\xb4\x01\x0a\x81\x81\x02\xb3\x01\x08\x81"
  "\x81\x02\xb2\x01\x06\x81\x81\x02\xb1\x01\x04\x82\x02\x09\x16\x59"
  "\x02\x35\xb5\x01\x04\x83\x04\x03\x5a\x02\x36\x02\x03\x07\x72\x61"
  "\x64\x69\x78\x3f\x5b\x04\x10\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74"
  "\x2d\x72\x61\x64\x69\x78\x5c\x03\xb7\x01\x06\x81\x85\x02\xb6\x01"
  "\x04\x84\x04\x05\x0e\x5d\x02\x37\x08\x06\x72\x61\x64\x69\x78\x05"
  "\x0c\x02\xb8\x01\x04\x84\x04\x03\x0c\x5e\x02\x38\x0b\x73\x74\x72"
  "\x69\x6e\x67\x2d\x72\x65\x66\x5f\x25\x30\x31\x32\x33\x34\x35\x36"
  "\x37\x38\x39\x61\x62\x63\x64\x65\x66\x67\x68\x69\x6a\x6b\x6c\x6d"
  "\x6e\x6f\x70\x71\x72\x73\x74\x75\x76\x77\x78\x79\x7a\x0b\x08\x0c"
  "\x64\x69\x67\x69\x74\x2d\x3e\x63\x68\x61\x72\x60\x05\x0f\x04\x10"
  "\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x72\x61\x64\x69\x78\x0f"
  "\x03\xbb\x01\x08\x81\x85\x02\xba\x01\x06\x84\x04\xb9\x01\x04\x81"
  "\x89\x02\x07\x14\x61\x02\x39\x06\x72\x61\x64\x69\x78\x0b\x08\x0c"
  "\x63\x68\x61\x72\x2d\x3e\x64\x69\x67\x69\x74\x55\x56\x57\x04\x04"
  "\x14\x05\x0c\x03\xc2\x01\x10\x81\x87\x02\xc1\x01\x0e\x81\x87\x02"
  "\xc0\x01\x0c\x81\x85\x02\xbf\x01\x0a\x81\x85\x02\xbe\x01\x08\x81"
  "\x85\x02\xbd\x01\x06\x81\x85\x02\xbc\x01\x04\x84\x04\x0f\x20\x0c"
  "\x02\x3a\x03\x55\x2b\x11\x0b\x6e\x61\x6d\x65\x2d\x3e\x63\x68\x61"
  "\x72\x62\x01\x2e\x5f\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e"
  "\x67\x74\x68\x5f\x0c\x6e\x61\x6d\x65\x64\x2d\x63\x6f\x64\x65\x73"
  "\x63\x0b\x6e\x61\x6d\x65\x64\x2d\x62\x69\x74\x73\x64\x03\x03\x0e"
  "\x63\x68\x61\x72\x2d\x67\x72\x61\x70\x68\x69\x63\x3f\x65\x06\x19"
  "\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x66\x69\x6e\x64\x2d\x6e"
  "\x65\x78\x74\x2d\x63\x68\x61\x72\x06\x07\x2d\x3e\x63\x6f\x64\x65"
  "\x66\x03\x13\x04\x19\x65\x72\x72\x6f\x72\x3a\x62\x61\x64\x2d\x72"
  "\x61\x6e\x67\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x06\x12\x73"
  "\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x3e\x6e\x75\x6d\x62\x65\x72"
  "\x08\x15\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x70\x72\x65\x66"
  "\x69\x78\x2d\x63\x69\x3f\x04\x0e\x09\xd3\x01\x24\x81\x8b\x02\xd2"
  "\x01\x22\x81\x8b\x02\xd1\x01\x20\x81\x8d\x02\xd0\x01\x1e\x81\x83"
  "\x02\xcf\x01\x1c\x81\x85\x02\xce\x01\x1a\x81\x8b\x02\xcd\x01\x18"
  "\x81\x8d\x02\xcc\x01\x16\xff\xff\x03\xcb\x01\x14\x81\x8b\x02\xca"
  "\x01\x12\x81\x8b\x02\xc9\x01\x10\x81\x93\x02\xc8\x01\x0e\x81\x95"
  "\x02\xc7\x01\x0c\x81\x8b\x02\xc6\x01\x0a\x81\x8b\x02\xc5\x01\x08"
  "\x81\x89\x02\xc4\x01\x06\x81\x83\x02\xc3\x01\x04\x83\x04\x23\x42"
  "\x67\x02\x3b\x01\x31\x5f\x11\x03\x55\x2b\x01\x5d\x08\x02\x5c\x63"
  "\x19\x63\x68\x61\x72\x2d\x73\x65\x74\x2f\x61\x74\x6f\x6d\x2d\x64"
  "\x65\x6c\x69\x6d\x69\x74\x65\x72\x73\x03\x03\x16\x03\x13\x04\x07"
  "\x2d\x3e\x6e\x61\x6d\x65\x04\x11\x63\x68\x61\x72\x2d\x73\x65\x74"
  "\x2d\x6d\x65\x6d\x62\x65\x72\x3f\x03\x07\x73\x74\x72\x69\x6e\x67"
  "\x03\x65\x04\x38\x03\x13\x62\x75\x63\x6b\x79\x2d\x62\x69\x74\x73"
  "\x2d\x3e\x70\x72\x65\x66\x69\x78\x65\x04\x0e\x73\x74\x72\x69\x6e"
  "\x67\x2d\x61\x70\x70\x65\x6e\x64\x68\x04\x0f\x6e\x75\x6d\x62\x65"
  "\x72\x2d\x3e\x73\x74\x72\x69\x6e\x67\x05\x10\x73\x74\x72\x69\x6e"
  "\x67\x2d\x70\x61\x64\x2d\x6c\x65\x66\x74\x0c\xe4\x01\x24\x81\x87"
  "\x02\xe3\x01\x22\x81\x83\x02\xe2\x01\x20\x81\x87\x02\xe1\x01\x1e"
  "\x81\x85\x02\xe0\x01\x1c\x81\x85\x02\xdf\x01\x1a\x81\x85\x02\xde"
  "\x01\x18\x81\x89\x02\xdd\x01\x16\x81\x89\x02\xdc\x01\x14\x81\x83"
  "\x02\xdb\x01\x12\x81\x89\x02\xda\x01\x10\x81\x85\x02\xd9\x01\x0e"
  "\x81\x85\x02\xd8\x01\x0c\x81\x87\x02\xd7\x01\x0a\x81\x87\x02\xd6"
  "\x01\x08\x81\x8b\x02\xd5\x01\x06\x81\x85\x02\xd4\x01\x04\x84\x04"
  "\x23\x4a\x69\x02\x3c\x02\x2d\x01\x04\x63\x64\x72\x6a\x04\x63\x61"
  "\x72\x6b\x64\x02\x05\x68\x02\xef\x01\x18\xfd\xff\x03\xee\x01\x16"
  "\xfd\xff\x03\xed\x01\x14\xfd\xff\x03\xec\x01\x12\xfd\xff\x03\xeb"
  "\x01\x10\xfd\xff\x03\xea\x01\x0e\xfd\xff\x03\xe9\x01\x0c\xfd\xff"
  "\x03\xe8\x01\x0a\xfd\xff\x03\xe7\x01\x08\xff\xff\x03\xe6\x01\x06"
  "\x81\x85\x02\xe5\x01\x04\x83\x04\x17\x24\x68\x02\x3d\x5f\x6a\x6b"
  "\x04\x13\x66\x69\x6e\x64\x2d\x6d\x61\x74\x63\x68\x69\x6e\x67\x2d"
  "\x69\x74\x65\x6d\x04\x0e\x74\x68\x65\x72\x65\x2d\x65\x78\x69\x73"
  "\x74\x73\x3f\x08\x0f\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x63"
  "\x69\x3d\x3f\x04\xfa\x01\x18\x81\x8d\x02\xf9\x01\x16\x81\x85\x02"
  "\xf8\x01\x14\x81\x89\x02\xf7\x01\x12\x81\x89\x02\xf6\x01\x10\x81"
  "\x89\x02\xf5\x01\x0e\x81\x89\x02\xf4\x01\x0c\x81\x89\x02\xf3\x01"
  "\x0a\x81\x85\x02\xf2\x01\x08\x81\x87\x02\xf1\x01\x06\x81\x89\x02"
  "\xf0\x01\x04\x86\x0a\x17\x25\x5f\x02\x3e\x6b\x6a\x04\x05\x61\x73"
  "\x73\x76\x02\xfd\x01\x08\x81\x83\x02\xfc\x01\x06\x81\x85\x02\xfb"
  "\x01\x04\x84\x06\x07\x0f\x6b\x3e\x6a\x6a\x09\x02\x4d\x05\x6d\x65"
  "\x74\x61\x02\x43\x08\x63\x6f\x6e\x74\x72\x6f\x6c\x05\x63\x74\x72"
  "\x6c\x02\x53\x06\x73\x75\x70\x65\x72\x09\x02\x48\x06\x68\x79\x70"
  "\x65\x72\x05\x6e\x75\x6c\x6c\x04\x6e\x75\x6c\x04\x73\x6f\x68\x04"
  "\x73\x74\x78\x04\x65\x74\x78\x04\x65\x6f\x74\x04\x65\x6e\x71\x04"
  "\x61\x63\x6b\x08\x04\x62\x65\x6c\x09\x0a\x62\x61\x63\x6b\x73\x70"
  "\x61\x63\x65\x03\x62\x73\x0a\x04\x74\x61\x62\x03\x68\x74\x0b\x08"
  "\x6e\x65\x77\x6c\x69\x6e\x65\x09\x6c\x69\x6e\x65\x66\x65\x65\x64"
  "\x04\x6c\x66\x64\x03\x6c\x66\x0c\x03\x76\x74\x0d\x05\x70\x61\x67"
  "\x65\x09\x66\x6f\x72\x6d\x66\x65\x65\x64\x03\x66\x66\x03\x6e\x70"
  "\x0e\x07\x72\x65\x74\x75\x72\x6e\x04\x72\x65\x74\x03\x63\x72\x0f"
  "\x03\x73\x6f\x10\x03\x73\x69\x11\x04\x64\x6c\x65\x12\x04\x64\x63"
  "\x31\x13\x04\x64\x63\x32\x14\x04\x64\x63\x33\x15\x04\x64\x63\x34"
  "\x16\x04\x6e\x61\x6b\x17\x04\x73\x79\x6e\x18\x04\x65\x74\x62\x19"
  "\x04\x63\x61\x6e\x1a\x03\x65\x6d\x1b\x04\x73\x75\x62\x05\x63\x61"
  "\x6c\x6c\x1c\x07\x65\x73\x63\x61\x70\x65\x04\x65\x73\x63\x08\x61"
  "\x6c\x74\x6d\x6f\x64\x65\x1d\x03\x66\x73\x1e\x03\x67\x73\x1f\x03"
  "\x72\x73\x20\x03\x75\x73\x09\x62\x61\x63\x6b\x6e\x65\x78\x74\x21"
  "\x06\x73\x70\x61\x63\x65\x04\x73\x70\x63\x03\x73\x70\x80\x01\x07"
  "\x64\x65\x6c\x65\x74\x65\x04\x64\x65\x6c\x07\x72\x75\x62\x6f\x75"
  "\x74\xa1\x01\x05\x6e\x62\x73\x70\x80\xfe\x03\x04\x62\x6f\x6d\x24"
  "\x6b\x04\x5f\x04\x68\x04\x69\x04\x67\x04\x0c\x04\x61\x06\x5e\x04"
  "\x5d\x04\x5a\x04\x59\x04\x54\x04\x4d\x04\x52\x04\x50\x04\x4c\x04"
  "\x4b\x04\x4a\x04\x49\x04\x48\x04\x47\x04\x45\x04\x44\x04\x42\x04"
  "\x41\x04\x3f\x04\x3e\x04\x3c\x04\x3b\x04\x39\x04\x37\x04\x36\x04"
  "\x34\x04\x31\x04\x2f\x04\x2d\x04\x2c\x04\x2b\x04\x2a\x04\x29\x04"
  "\x28\x04\x25\x04\x24\x04\x23\x04\x20\x04\x1f\x04\x1d\x04\x1b\x04"
  "\x19\x04\x17\x04\x15\x04\x12\x04\x10\x04\x0d\x04\x0b\x04\x09\x04"
  "\x04\x04\x08\x32\x30\x30\x30\x30\x30\x30\x11\x81\x80\x44\x04\x04"
  "\x04\x4d\x0f\x63\x68\x61\x72\x2d\x62\x69\x74\x3a\x68\x79\x70\x65"
  "\x72\x0f\x63\x68\x61\x72\x2d\x62\x69\x74\x3a\x73\x75\x70\x65\x72"
  "\x11\x63\x68\x61\x72\x2d\x62\x69\x74\x3a\x63\x6f\x6e\x74\x72\x6f"
  "\x6c\x0e\x63\x68\x61\x72\x2d\x62\x69\x74\x3a\x6d\x65\x74\x61\x64"
  "\x63\x66\x65\x0b\x63\x68\x61\x72\x2d\x3e\x6e\x61\x6d\x65\x62\x60"
  "\x5c\x0f\x5b\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70"
  "\x61\x63\x6b\x61\x67\x65\x21\x57\x56\x55\x58\x51\x53\x4f\x0f\x25"
  "\x63\x61\x73\x65\x2d\x6d\x61\x70\x2d\x63\x68\x61\x72\x46\x4e\x11"
  "\x63\x68\x61\x72\x2d\x63\x69\x2d\x3e\x69\x6e\x74\x65\x67\x65\x72"
  "\x0b\x63\x68\x61\x72\x2d\x63\x69\x3e\x3d\x3f\x0a\x63\x68\x61\x72"
  "\x2d\x63\x69\x3e\x3f\x0b\x63\x68\x61\x72\x2d\x63\x69\x3c\x3d\x3f"
  "\x0a\x63\x68\x61\x72\x2d\x63\x69\x3c\x3f\x0a\x63\x68\x61\x72\x2d"
  "\x63\x69\x3d\x3f\x09\x25\x63\x68\x61\x72\x3e\x3d\x3f\x43\x08\x25"
  "\x63\x68\x61\x72\x3e\x3f\x40\x09\x25\x63\x68\x61\x72\x3c\x3d\x3f"
  "\x3d\x08\x25\x63\x68\x61\x72\x3c\x3f\x3a\x38\x0d\x63\x68\x61\x72"
  "\x73\x2d\x3e\x61\x73\x63\x69\x69\x35\x32\x30\x33\x2e\x09\x69\x6c"
  "\x6c\x65\x67\x61\x6c\x3f\x0f\x6c\x65\x67\x61\x6c\x2d\x63\x6f\x64"
  "\x65\x2d\x31\x36\x3f\x0f\x6c\x65\x67\x61\x6c\x2d\x63\x6f\x64\x65"
  "\x2d\x33\x32\x3f\x27\x1f\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d"
  "\x75\x6e\x69\x63\x6f\x64\x65\x2d\x73\x63\x61\x6c\x61\x72\x2d\x76"
  "\x61\x6c\x75\x65\x26\x22\x17\x67\x75\x61\x72\x61\x6e\x74\x65\x65"
  "\x2d\x75\x6e\x69\x63\x6f\x64\x65\x2d\x63\x68\x61\x72\x21\x1e\x1c"
  "\x1a\x18\x16\x13\x11\x0e\x0a\x14\x0b\x25\x63\x68\x61\x72\x2d\x62"
  "\x69\x74\x73\x0b\x25\x63\x68\x61\x72\x2d\x63\x6f\x64\x65\x0b\x25"
  "\x6d\x61\x6b\x65\x2d\x63\x68\x61\x72\x13\x63\x68\x61\x72\x2d\x69"
  "\x6e\x74\x65\x67\x65\x72\x2d\x6c\x69\x6d\x69\x74\x10\x63\x68\x61"
  "\x72\x2d\x62\x69\x74\x73\x2d\x6c\x69\x6d\x69\x74\x10\x63\x68\x61"
  "\x72\x2d\x63\x6f\x64\x65\x2d\x6c\x69\x6d\x69\x74\x0e\x69\x6e\x74"
  "\x65\x67\x65\x72\x2d\x3e\x63\x68\x61\x72\x0e\x63\x68\x61\x72\x2d"
  "\x3e\x69\x6e\x74\x65\x67\x65\x72\x06\x63\x68\x61\x72\x3f\x4d\x05"
  "\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65"
  "\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02"
  "\x07\x11";

SCHEME_OBJECT *
char_so_data_01b38f83007e473b (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_char_so_data_01b38f83007e473b [0]))), (sizeof (prog_char_so_data_01b38f83007e473b)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("char.so", char_so_data_01b38f83007e473b)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("char.so", "a79cf5f2587e954f")
