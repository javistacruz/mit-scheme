/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:57-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define ENVIRONMENT_LABEL_1_3 13
#define DEBUGGING_LABEL_1_2 12
#define OBJECT_1_2 11
#define OBJECT_1_1 10
#define OBJECT_1_0 9
#define EXECUTE_CACHE_1_6 7
#define FREE_REFERENCES_LABEL_1_0 6
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_1_4);
      goto return_addressP_1;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (return_addressP_5)
DEFLABEL (return_addressP_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd11.Obj) = (current_block [OBJECT_1_0]);
  (Wrd14.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd14.Lng))))
    goto label_8;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd6.Obj) == (Wrd8.Obj))
    goto label_7;

DEFLABEL (label_6)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_1_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_3)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 8
#define DEBUGGING_LABEL_2_2 7
#define OBJECT_2_2 6
#define OBJECT_2_1 5
#define OBJECT_2_0 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd16;
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
      goto interpreter_return_addressP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_return_addressP_3)
DEFLABEL (interpreter_return_addressP_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 11L) < ((unsigned long) (Wrd16.Lng)))
    goto label_4;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_4)
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd8.Obj) == (Wrd10.Obj))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_2_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
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
udata_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto make_return_address_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_return_address_3)
DEFLABEL (make_return_address_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

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
udata_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto return_address_code_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (return_address_code_3)
DEFLABEL (return_address_code_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define ENVIRONMENT_LABEL_5_3 12
#define DEBUGGING_LABEL_5_2 11
#define OBJECT_5_1 10
#define OBJECT_5_0 9
#define EXECUTE_CACHE_5_6 7
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto return_address_name_1;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (return_address_name_4)
DEFLABEL (return_address_name_1)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 13
#define DEBUGGING_LABEL_6_2 12
#define OBJECT_6_0 11
#define EXECUTE_CACHE_6_7 7
#define EXECUTE_CACHE_6_6 9
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto microcode_error_2;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_error_5)
DEFLABEL (microcode_error_2)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define ENVIRONMENT_LABEL_7_3 13
#define DEBUGGING_LABEL_7_2 12
#define OBJECT_7_0 11
#define EXECUTE_CACHE_7_7 7
#define EXECUTE_CACHE_7_6 9
#define FREE_REFERENCES_LABEL_7_0 6
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto microcode_return_2;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_return_5)
DEFLABEL (microcode_return_2)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 13
#define DEBUGGING_LABEL_8_2 12
#define OBJECT_8_0 11
#define EXECUTE_CACHE_8_7 7
#define EXECUTE_CACHE_8_6 9
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto microcode_termination_2;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_termination_5)
DEFLABEL (microcode_termination_2)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define ENVIRONMENT_LABEL_9_3 13
#define DEBUGGING_LABEL_9_2 12
#define OBJECT_9_0 11
#define EXECUTE_CACHE_9_7 7
#define EXECUTE_CACHE_9_6 9
#define FREE_REFERENCES_LABEL_9_0 6
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto microcode_type_2;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (microcode_type_5)
DEFLABEL (microcode_type_2)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

INVOKE_INTERFACE_TARGET_1
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
udata_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd16;
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
      goto compiled_code_addressP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_code_addressP_3)
DEFLABEL (compiled_code_addressP_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 40L) < ((unsigned long) (Wrd16.Lng)))
    goto label_4;
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_4)
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd8.Obj) == (Wrd10.Obj))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_10_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
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
udata_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd16;
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
      goto stack_addressP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_addressP_3)
DEFLABEL (stack_addressP_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 59L) < ((unsigned long) (Wrd16.Lng)))
    goto label_4;
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_4)
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd8.Obj) == (Wrd10.Obj))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_11_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define ENVIRONMENT_LABEL_12_3 16
#define DEBUGGING_LABEL_12_2 15
#define OBJECT_12_3 14
#define OBJECT_12_2 13
#define OBJECT_12_1 12
#define OBJECT_12_0 11
#define EXECUTE_CACHE_12_7 9
#define FREE_REFERENCES_LABEL_12_0 8
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd15;
  INVOKE_INTERFACE_DECLS
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
      goto compiled_expressionP_2;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_expressionP_6)
DEFLABEL (compiled_expressionP_2)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd15.Obj) = (current_block [OBJECT_12_0]);
  (Wrd18.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 40L) < ((unsigned long) (Wrd18.Lng))))
    goto label_12;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd6.Obj) == (Wrd8.Obj))
    goto label_8;

DEFLABEL (label_7)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_6);
  if (Rvl == (current_block [OBJECT_12_2]))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_9;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_12_3]);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_4)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define ENVIRONMENT_LABEL_13_3 16
#define DEBUGGING_LABEL_13_2 15
#define OBJECT_13_3 14
#define OBJECT_13_2 13
#define OBJECT_13_1 12
#define OBJECT_13_0 11
#define EXECUTE_CACHE_13_7 9
#define FREE_REFERENCES_LABEL_13_0 8
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd15;
  INVOKE_INTERFACE_DECLS
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
      goto compiled_return_addressP_2;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_return_addressP_6)
DEFLABEL (compiled_return_addressP_2)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd15.Obj) = (current_block [OBJECT_13_0]);
  (Wrd18.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 40L) < ((unsigned long) (Wrd18.Lng))))
    goto label_12;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd6.Obj) == (Wrd8.Obj))
    goto label_8;

DEFLABEL (label_7)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_6);
  if (Rvl == (current_block [OBJECT_13_2]))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_9;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_13_3]);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_4)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  goto label_8;

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
udata_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stack_address_offset_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_address_offset_3)
DEFLABEL (stack_address_offset_0)
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
udata_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto compiled_code_address__block_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_code_address__block_3)
DEFLABEL (compiled_code_address__block_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

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
udata_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto compiled_code_address__offset_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_code_address__offset_3)
DEFLABEL (compiled_code_address__offset_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define ENVIRONMENT_LABEL_17_3 11
#define DEBUGGING_LABEL_17_2 10
#define OBJECT_17_3 9
#define OBJECT_17_2 8
#define OBJECT_17_1 7
#define OBJECT_17_0 6
#define FREE_REFERENCES_LABEL_17_0 6
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_17_4);
      goto discriminate_compiled_entry_6;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (discriminate_compiled_entry_9)
DEFLABEL (discriminate_compiled_entry_6)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  if ((Wrd7.Obj) == (current_block [OBJECT_17_1]))
    goto label_12;
  if ((Wrd7.Obj) == (current_block [OBJECT_17_2]))
    goto label_11;
  if (! ((Wrd7.Obj) == (current_block [OBJECT_17_3])))
    goto label_10;
  (Wrd15.Obj) = (Rsp [4]);
  (Rsp [5]) = (Wrd15.Obj);

DEFLABEL (label_10)
  Rsp = (& (Rsp [5]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_11)
  (Wrd17.Obj) = (Rsp [3]);
  (Rsp [5]) = (Wrd17.Obj);
  goto label_10;

DEFLABEL (label_12)
  (Wrd19.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd19.Obj);
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define ENVIRONMENT_LABEL_18_3 15
#define DEBUGGING_LABEL_18_2 14
#define OBJECT_18_7 13
#define OBJECT_18_6 12
#define OBJECT_18_5 11
#define OBJECT_18_4 10
#define OBJECT_18_3 9
#define OBJECT_18_2 8
#define OBJECT_18_1 7
#define OBJECT_18_0 6
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_18_4);
      goto compiled_entry_type_6;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_entry_type_9)
DEFLABEL (compiled_entry_type_6)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [0]);
  (Rsp [0]) = (Wrd6.Obj);
  if ((Wrd6.Obj) == (current_block [OBJECT_18_1]))
    goto label_14;
  if ((Wrd6.Obj) == (current_block [OBJECT_18_3]))
    goto label_13;
  if ((Wrd6.Obj) == (current_block [OBJECT_18_5]))
    goto label_11;
  Rvl = (current_block [OBJECT_18_7]);
  goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_18_6]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_18_4]);
  goto label_12;

DEFLABEL (label_14)
  Rvl = (current_block [OBJECT_18_2]);
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_6 7
#define ENVIRONMENT_LABEL_19_3 10
#define DEBUGGING_LABEL_19_2 9
#define OBJECT_19_0 8
#define FREE_REFERENCES_LABEL_19_0 8
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_19_4);
      goto compiled_continuation_next_continuation_offset_4;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_continuation_next_continuation_offset_8)
DEFLABEL (compiled_continuation_next_continuation_offset_4)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd9.uLng) == 26))
    goto label_13;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd20.Lng) < 0)
    goto label_10;

DEFLABEL (label_11)
  Rvl = (Rsp [0]);
  goto label_9;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  goto label_10;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define ENVIRONMENT_LABEL_20_3 11
#define DEBUGGING_LABEL_20_2 10
#define OBJECT_20_3 9
#define OBJECT_20_2 8
#define OBJECT_20_1 7
#define OBJECT_20_0 6
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_20_4);
      goto compiled_continuation_return_to_interpreterP_5;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_continuation_return_to_interpreterP_8)
DEFLABEL (compiled_continuation_return_to_interpreterP_5)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (Rsp [0]) = Rvl;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);
  if ((Wrd6.Obj) == (current_block [OBJECT_20_1]))
    goto label_11;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd12.Obj) = ((Wrd8.pObj) [2]);
  if (! ((Wrd12.Obj) == (current_block [OBJECT_20_2])))
    goto label_10;
  Rvl = (current_block [OBJECT_20_3]);
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define ENVIRONMENT_LABEL_21_3 11
#define DEBUGGING_LABEL_21_2 10
#define OBJECT_21_3 9
#define OBJECT_21_2 8
#define OBJECT_21_1 7
#define OBJECT_21_0 6
#define FREE_REFERENCES_LABEL_21_0 6
#define NUMBER_OF_LINKER_SECTIONS_21_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_21_4);
      goto compiled_continuation_reflect_to_interfaceP_6;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_continuation_reflect_to_interfaceP_9)
DEFLABEL (compiled_continuation_reflect_to_interfaceP_6)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (Rsp [0]) = Rvl;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);
  if ((Wrd6.Obj) == (current_block [OBJECT_21_1]))
    goto label_12;

DEFLABEL (label_11)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd12.Obj) = ((Wrd8.pObj) [2]);
  if ((Wrd12.Obj) == (current_block [OBJECT_21_2]))
    goto label_11;
  Rvl = (current_block [OBJECT_21_3]);
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_5 3
#define LABEL_22_4 5
#define LABEL_22_6 7
#define LABEL_22_9 9
#define LABEL_22_8 11
#define LABEL_22_10 13
#define LABEL_22_11 15
#define ENVIRONMENT_LABEL_22_3 27
#define DEBUGGING_LABEL_22_2 26
#define OBJECT_22_4 25
#define OBJECT_22_3 24
#define OBJECT_22_2 23
#define OBJECT_22_1 22
#define OBJECT_22_0 21
#define EXECUTE_CACHE_22_12 17
#define EXECUTE_CACHE_22_7 19
#define FREE_REFERENCES_LABEL_22_0 16
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd35;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_22_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_22_4);
      goto stack_address__index_7;

    case 2:
      current_block = (Rpc - LABEL_22_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_22_9);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_22_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_22_10);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_22_11);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_address__index_13)
DEFLABEL (stack_address__index_7)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd18.Obj) = (current_block [OBJECT_22_0]);
  (Wrd21.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 59L) < ((unsigned long) (Wrd21.Lng))))
    goto label_21;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd18.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd6.Obj) == (Wrd8.Obj))
    goto label_19;

DEFLABEL (label_20)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_22_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_5);

DEFLABEL (label_19)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_22_8);
  (Wrd5.Obj) = Rvl;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_18;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_18;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd14.Lng) = ((Wrd16.Lng) - (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_18;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_17)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_16;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if ((Wrd35.Lng) < 0)
    goto label_15;

DEFLABEL (label_14)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_22_4]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_22_9);
  goto label_14;

DEFLABEL (label_16)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_11]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_15;

DEFLABEL (label_18)
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_21)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  goto label_19;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
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
udata_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd16;
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
      goto compiled_code_blockP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_code_blockP_3)
DEFLABEL (compiled_code_blockP_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (current_block [OBJECT_23_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 61L) < ((unsigned long) (Wrd16.Lng)))
    goto label_4;
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 2);

DEFLABEL (label_4)
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd8.Obj) == (Wrd10.Obj))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_23_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define ENVIRONMENT_LABEL_24_3 11
#define DEBUGGING_LABEL_24_2 10
#define OBJECT_24_0 9
#define EXECUTE_CACHE_24_6 7
#define FREE_REFERENCES_LABEL_24_0 6
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_24_4);
      goto compiled_code_block_read_file_1;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_code_block_read_file_4)
DEFLABEL (compiled_code_block_read_file_1)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
udata_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_25_4);
      goto compiled_code_block_manifest_closureP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_code_block_manifest_closureP_4)
DEFLABEL (compiled_code_block_manifest_closureP_1)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (current_block [OBJECT_25_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 13L) < ((unsigned long) (Wrd19.Lng)))
    goto label_5;
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_5)
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd11.Obj) == (Wrd13.Obj))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_25_1]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define ENVIRONMENT_LABEL_26_3 11
#define DEBUGGING_LABEL_26_2 10
#define FREE_REFERENCE_26_0 9
#define FREE_REFERENCES_LABEL_26_0 8
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
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
      goto compiled_code_block_index__offset_1;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_code_block_index__offset_6)
DEFLABEL (compiled_code_block_index__offset_1)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_12;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd13.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd11.Lng)))
    goto label_12;
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_11)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_10;
  Wrd16 = Wrd20;

DEFLABEL (label_9)
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 26)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_8)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_7;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (multiply_with_overflow ((Wrd29.Lng), (Wrd31.Lng), (& (Wrd27.Lng))))
    goto label_7;
  Rvl = (LONG_TO_FIXNUM (Wrd27.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_6])), (Wrd17.pObj));

DEFLABEL (label_4)
  (Wrd16.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_6 5
#define LABEL_27_5 7
#define ENVIRONMENT_LABEL_27_3 11
#define DEBUGGING_LABEL_27_2 10
#define FREE_REFERENCE_27_0 9
#define FREE_REFERENCES_LABEL_27_0 8
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_27_4);
      goto compiled_code_block_offset__index_1;

    case 1:
      current_block = (Rpc - LABEL_27_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_code_block_offset__index_5)
DEFLABEL (compiled_code_block_offset__index_1)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_9;
  Wrd8 = Wrd12;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_0)
  (Rsp [0]) = Rvl;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd8.uLng) == 26)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_7)
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd9.Lng) = ((Wrd11.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd9.Lng)))
    goto label_6;
  Rvl = (LONG_TO_FIXNUM (Wrd9.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_7 7
#define LABEL_28_6 9
#define ENVIRONMENT_LABEL_28_3 16
#define DEBUGGING_LABEL_28_2 15
#define OBJECT_28_2 14
#define OBJECT_28_1 13
#define OBJECT_28_0 12
#define FREE_REFERENCE_28_0 11
#define FREE_REFERENCES_LABEL_28_0 10
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd27;
  machine_word Wrd16;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_28_4);
      goto compiled_code_block_code_length_2;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_28_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_28_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_code_block_code_length_7)
DEFLABEL (compiled_code_block_code_length_2)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;
  Wrd5 = Wrd9;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_28_0]);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd22.Lng))))
    goto label_11;
  (Wrd16.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_28_6);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 26)
    goto label_9;

DEFLABEL (label_8)
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_9)
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_8;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (multiply_with_overflow ((Wrd13.Lng), (Wrd15.Lng), (& (Wrd11.Lng))))
    goto label_8;
  Rvl = (LONG_TO_FIXNUM (Wrd11.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define ENVIRONMENT_LABEL_29_3 10
#define DEBUGGING_LABEL_29_2 9
#define OBJECT_29_0 8
#define FREE_REFERENCE_29_0 7
#define FREE_REFERENCES_LABEL_29_0 6
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd11;
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
      goto compiled_code_block_code_start_0;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_code_block_code_start_4)
DEFLABEL (compiled_code_block_code_start_0)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_29_0]);
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd14.uLng) == 26)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_6)
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (multiply_with_overflow ((Wrd17.Lng), 2, (& (Wrd15.Lng))))
    goto label_5;
  Rvl = (LONG_TO_FIXNUM (Wrd15.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_7 7
#define ENVIRONMENT_LABEL_30_3 14
#define DEBUGGING_LABEL_30_2 13
#define EXECUTE_CACHE_30_8 9
#define EXECUTE_CACHE_30_6 11
#define FREE_REFERENCES_LABEL_30_0 8
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_30_4);
      goto compiled_code_block_code_end_2;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_30_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_code_block_code_end_5)
DEFLABEL (compiled_code_block_code_end_2)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_7);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 26)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_7)
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_6;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd11.Lng) = ((Wrd13.Lng) + (Wrd15.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd11.Lng)))
    goto label_6;
  Rvl = (LONG_TO_FIXNUM (Wrd11.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_6 5
#define LABEL_31_5 7
#define ENVIRONMENT_LABEL_31_3 12
#define DEBUGGING_LABEL_31_2 11
#define OBJECT_31_2 10
#define OBJECT_31_1 9
#define OBJECT_31_0 8
#define FREE_REFERENCES_LABEL_31_0 8
#define NUMBER_OF_LINKER_SECTIONS_31_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_31_4);
      goto compiled_code_block_marked_start_2;

    case 1:
      current_block = (Rpc - LABEL_31_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_code_block_marked_start_6)
DEFLABEL (compiled_code_block_marked_start_2)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_31_0]);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_10;
  (Wrd10.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (Rsp [0]) = Rvl;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd8.uLng) == 26)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_8)
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd9.Lng) = ((Wrd11.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd9.Lng)))
    goto label_7;
  Rvl = (LONG_TO_FIXNUM (Wrd9.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_6]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_7 7
#define LABEL_32_9 9
#define LABEL_32_10 11
#define LABEL_32_12 13
#define LABEL_32_11 15
#define LABEL_32_13 17
#define LABEL_32_14 19
#define LABEL_32_15 21
#define LABEL_32_16 23
#define LABEL_32_18 25
#define LABEL_32_17 27
#define LABEL_32_19 29
#define LABEL_32_20 31
#define LABEL_32_21 33
#define ENVIRONMENT_LABEL_32_3 47
#define DEBUGGING_LABEL_32_2 46
#define OBJECT_32_6 45
#define OBJECT_32_5 44
#define OBJECT_32_4 43
#define OBJECT_32_3 42
#define OBJECT_32_2 41
#define OBJECT_32_1 40
#define OBJECT_32_0 39
#define EXECUTE_CACHE_32_8 35
#define EXECUTE_CACHE_32_6 37
#define FREE_REFERENCES_LABEL_32_0 34
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd63;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd36;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_32_4);
      goto compiled_code_block_constants_start_21;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_32_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_32_9);
      goto loop_18;

    case 4:
      current_block = (Rpc - LABEL_32_10);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_32_12);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_32_11);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_32_13);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_32_14);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_32_15);
      goto label_27;

    case 10:
      current_block = (Rpc - LABEL_32_16);
      goto label_26;

    case 11:
      current_block = (Rpc - LABEL_32_18);
      goto label_28;

    case 12:
      current_block = (Rpc - LABEL_32_17);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_32_19);
      goto continuation_12;

    case 14:
      current_block = (Rpc - LABEL_32_20);
      goto label_30;

    case 15:
      current_block = (Rpc - LABEL_32_21);
      goto label_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_code_block_constants_start_33)
DEFLABEL (compiled_code_block_constants_start_21)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_7);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = Rvl;
  goto loop_18;

DEFLABEL (loop_34)
DEFLABEL (loop_18)
  INTERRUPT_CHECK (26, LABEL_32_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_55;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_55;
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd40.Lng) < (Wrd42.Lng))
    goto label_36;

DEFLABEL (label_35)
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_11]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_54;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd30.Obj) = (Rsp [4]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) (Wrd29.Lng)) < ((unsigned long) (Wrd33.Lng))))
    goto label_54;
  (Wrd21.uLng) = (OBJECT_DATUM (Wrd26.Obj));
  (Wrd24.pObj) = (& ((Wrd31.pObj) [(Wrd21.Lng)]));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_53)
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_32_11);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_52;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd15.Obj) = (Rsp [4]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) (Wrd14.Lng)) < ((unsigned long) (Wrd18.Lng))))
    goto label_52;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd10.pObj) = (& ((Wrd16.pObj) [(Wrd7.Lng)]));
  (Wrd5.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_51)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  (Wrd26.Obj) = (MAKE_OBJECT (26, (Wrd25.uLng)));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd28.Obj) = ((SCHEME_OBJECT) 26);
  if (! ((Wrd28.uLng) == 26))
    goto label_50;
  if ((Wrd26.Obj) == (current_block [OBJECT_32_2]))
    goto label_47;

DEFLABEL (label_46)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_45;
  if (! ((Wrd31.Obj) == (current_block [OBJECT_32_3])))
    goto label_42;

DEFLABEL (label_41)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_17]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_32_5]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_11)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_12)
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_40;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd15.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_40;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_39)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_38;
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_38;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd25.Lng) = ((Wrd27.Lng) + (Wrd28.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd25.Lng)))
    goto label_38;
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));

DEFLABEL (label_37)
  (Rsp [1]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_18;

DEFLABEL (label_38)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_21]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_31)
  (Wrd21.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_30)
  (Wrd10.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_44;
  if ((Wrd35.Obj) == (current_block [OBJECT_32_4]))
    goto label_41;

DEFLABEL (label_43)
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd47.Obj) = (current_block [OBJECT_32_4]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_16]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_41;

DEFLABEL (label_45)
  (Wrd53.Obj) = (current_block [OBJECT_32_3]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_15]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  goto label_41;

DEFLABEL (label_47)
  (Wrd64.Obj) = (Rsp [2]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 26))
    goto label_49;
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  (Wrd66.Lng) = ((Wrd68.Lng) + 5L);
  if (! (LONG_TO_FIXNUM_P (Wrd66.Lng)))
    goto label_49;
  (Wrd63.Obj) = (LONG_TO_FIXNUM (Wrd66.Lng));

DEFLABEL (label_48)
  (Rsp [2]) = (Wrd63.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_18;

DEFLABEL (label_49)
  (Wrd58.Obj) = (Rsp [2]);
  (Wrd59.Obj) = (current_block [OBJECT_32_6]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_18]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_28)
  (Wrd63.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_50)
  (Wrd73.Obj) = (current_block [OBJECT_32_2]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_14]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  goto label_47;

DEFLABEL (label_52)
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 2);

DEFLABEL (label_25)
  (Wrd5.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd34.Obj) = (Rsp [4]);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_12]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_55)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  goto label_36;

INVOKE_INTERFACE_TARGET_0
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
udata_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_33_4);
      goto compiled_code_block_constants_end_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_code_block_constants_end_4)
DEFLABEL (compiled_code_block_constants_end_1)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd8.Obj));
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_33_0]);
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd14.Obj) = ((SCHEME_OBJECT) 26);
  if ((Wrd14.uLng) == 26)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_6)
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd15.Lng) = ((Wrd17.Lng) - 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_5;
  Rvl = (LONG_TO_FIXNUM (Wrd15.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_6 7
#define ENVIRONMENT_LABEL_34_3 16
#define DEBUGGING_LABEL_34_2 15
#define OBJECT_34_1 14
#define OBJECT_34_0 13
#define EXECUTE_CACHE_34_8 9
#define EXECUTE_CACHE_34_7 11
#define FREE_REFERENCES_LABEL_34_0 8
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_34_4);
      goto compiled_code_block_debugging_infoP_2;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_34_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_code_block_debugging_infoP_5)
DEFLABEL (compiled_code_block_debugging_infoP_2)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_34_1]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define ENVIRONMENT_LABEL_35_3 9
#define DEBUGGING_LABEL_35_2 8
#define OBJECT_35_1 7
#define OBJECT_35_0 6
#define FREE_REFERENCES_LABEL_35_0 6
#define NUMBER_OF_LINKER_SECTIONS_35_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
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
      goto compiled_code_block_debugging_info_2;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_code_block_debugging_info_6)
DEFLABEL (compiled_code_block_debugging_info_2)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd10.Obj));
  (Wrd6.Obj) = (MAKE_OBJECT (26, (Wrd11.uLng)));
  (Wrd18.Obj) = ((SCHEME_OBJECT) 26);
  if (! ((Wrd18.uLng) == 26))
    goto label_10;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd19.Lng) = ((Wrd20.Lng) - 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd19.Lng)))
    goto label_10;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));

DEFLABEL (label_9)
  (Rsp [1]) = (Wrd17.Obj);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd31.uLng) == 26)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_8)
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) (Wrd33.Lng)) < ((unsigned long) (Wrd37.Lng))))
    goto label_7;
  (Wrd25.uLng) = (OBJECT_DATUM (Wrd17.Obj));
  (Wrd28.pObj) = (& ((Wrd35.pObj) [(Wrd25.Lng)]));
  Rvl = ((Wrd28.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd13.Obj) = (current_block [OBJECT_35_0]);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_4)
  (Wrd17.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define ENVIRONMENT_LABEL_36_3 9
#define DEBUGGING_LABEL_36_2 8
#define OBJECT_36_1 7
#define OBJECT_36_0 6
#define FREE_REFERENCES_LABEL_36_0 6
#define NUMBER_OF_LINKER_SECTIONS_36_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
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
      goto set_compiled_code_block_debugging_infoB_2;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_compiled_code_block_debugging_infoB_6)
DEFLABEL (set_compiled_code_block_debugging_infoB_2)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd10.Obj));
  (Wrd6.Obj) = (MAKE_OBJECT (26, (Wrd11.uLng)));
  (Wrd18.Obj) = ((SCHEME_OBJECT) 26);
  if (! ((Wrd18.uLng) == 26))
    goto label_8;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd19.Lng) = ((Wrd20.Lng) - 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd19.Lng)))
    goto label_8;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 3);

DEFLABEL (label_8)
  (Wrd13.Obj) = (current_block [OBJECT_36_0]);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_4)
  (Wrd17.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define ENVIRONMENT_LABEL_37_3 8
#define DEBUGGING_LABEL_37_2 7
#define OBJECT_37_0 6
#define FREE_REFERENCES_LABEL_37_0 6
#define NUMBER_OF_LINKER_SECTIONS_37_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
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
      goto compiled_code_block_environment_2;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_code_block_environment_6)
DEFLABEL (compiled_code_block_environment_2)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd10.Obj));
  (Wrd6.Obj) = (MAKE_OBJECT (26, (Wrd11.uLng)));
  (Wrd17.Obj) = ((SCHEME_OBJECT) 26);
  if (! ((Wrd17.uLng) == 26))
    goto label_10;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd18.Lng) = ((Wrd19.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_10;
  (Wrd16.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));

DEFLABEL (label_9)
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd28.uLng) == 26)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_0]), 2);

DEFLABEL (label_8)
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) (Wrd30.Lng)) < ((unsigned long) (Wrd34.Lng))))
    goto label_7;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd16.Obj));
  (Wrd25.pObj) = (& ((Wrd32.pObj) [(Wrd22.Lng)]));
  Rvl = ((Wrd25.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_4)
  (Wrd16.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
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
udata_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_38_4);
      goto environment_extensionP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_extensionP_3)
DEFLABEL (environment_extensionP_0)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 10)
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_4;

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_38_0]);

DEFLABEL (label_4)
DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
udata_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto environment_extension_parent_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_extension_parent_3)
DEFLABEL (environment_extension_parent_0)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_39_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [1]);
  Rsp = (& (Rsp [2]));
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
udata_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_environment_extension_parentB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_environment_extension_parentB_3)
DEFLABEL (set_environment_extension_parentB_0)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_40_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [1]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_40_1]);
  Rsp = (& (Rsp [3]));
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
udata_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto environment_extension_procedure_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_extension_procedure_3)
DEFLABEL (environment_extension_procedure_0)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_41_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
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
#define LABEL_42_7 5
#define LABEL_42_5 7
#define LABEL_42_6 9
#define LABEL_42_8 11
#define LABEL_42_10 13
#define LABEL_42_11 15
#define LABEL_42_17 17
#define LABEL_42_18 19
#define LABEL_42_12 21
#define LABEL_42_13 23
#define TAG_42_14 10
#define LABEL_42_20 25
#define LABEL_42_16 27
#define LABEL_42_21 29
#define ENVIRONMENT_LABEL_42_3 45
#define DEBUGGING_LABEL_42_2 44
#define OBJECT_42_6 43
#define OBJECT_42_5 42
#define OBJECT_42_4 41
#define OBJECT_42_3 40
#define OBJECT_42_2 39
#define OBJECT_42_1 38
#define OBJECT_42_0 37
#define EXECUTE_CACHE_42_19 31
#define EXECUTE_CACHE_42_15 33
#define EXECUTE_CACHE_42_9 35
#define FREE_REFERENCES_LABEL_42_0 30
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd25;
  machine_word Wrd9;
  machine_word Wrd27;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_42_4);
      goto environment_extension_aux_list_17;

    case 1:
      current_block = (Rpc - LABEL_42_7);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_42_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_42_8);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_42_10);
      goto filter_potentially_dangerous_15;

    case 6:
      current_block = (Rpc - LABEL_42_11);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_42_17);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_42_18);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_42_12);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_42_13);
      goto lambda_28;

    case 11:
      current_block = (Rpc - LABEL_42_20);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_42_16);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_42_21);
      goto label_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_extension_aux_list_26)
DEFLABEL (environment_extension_aux_list_17)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_32;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_32;
  (Wrd13.Obj) = ((Wrd17.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_31)
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_2]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_42_6);
  (Wrd5.Obj) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_30;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd12.Lng) = ((Wrd15.Lng) + 3L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_30;
  (Wrd16.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_29)
  (Wrd17.Obj) = (current_block [OBJECT_42_3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_9]));

DEFLABEL (label_30)
  (Wrd6.Obj) = (current_block [OBJECT_42_3]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_42_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_5);
  (Rsp [0]) = Rvl;
  goto filter_potentially_dangerous_15;

DEFLABEL (filter_potentially_dangerous_27)
DEFLABEL (filter_potentially_dangerous_15)
  INTERRUPT_CHECK (26, LABEL_42_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_33;
  Rvl = (current_block [OBJECT_42_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_13])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  ((Wrd16.pObj) [2]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_42_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_19]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_42_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_36;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_35)
  (Rsp [0]) = (Wrd7.Obj);

DEFLABEL (label_34)
  goto filter_potentially_dangerous_15;

DEFLABEL (label_36)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_18]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_5]), 1);

DEFLABEL (label_21)
  (Wrd7.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_16]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_38;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  goto label_34;

DEFLABEL (label_38)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_17]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_5]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_42_16);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_40;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_39)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_21]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_6]), 1);

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_39;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_42_13);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_43;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_42)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_41;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd22.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_41)
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_5]), 1);

DEFLABEL (label_43)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_20]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_6]), 1);

DEFLABEL (label_23)
  (Wrd5.Obj) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_0
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
udata_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd16;
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
      goto promiseP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (promiseP_3)
DEFLABEL (promiseP_0)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd5.Obj) = (current_block [OBJECT_43_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 19L) < ((unsigned long) (Wrd16.Lng)))
    goto label_4;
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_2]), 2);

DEFLABEL (label_4)
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd8.Obj) == (Wrd10.Obj))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_43_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define ENVIRONMENT_LABEL_44_3 13
#define DEBUGGING_LABEL_44_2 12
#define OBJECT_44_2 11
#define OBJECT_44_1 10
#define OBJECT_44_0 9
#define EXECUTE_CACHE_44_6 7
#define FREE_REFERENCES_LABEL_44_0 6
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_44_4);
      goto guarantee_promise_1;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_promise_5)
DEFLABEL (guarantee_promise_1)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd11.Obj) = (current_block [OBJECT_44_0]);
  (Wrd14.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd14.Lng))))
    goto label_8;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd6.Obj) == (Wrd8.Obj))
    goto label_7;

DEFLABEL (label_6)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_44_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_3)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define ENVIRONMENT_LABEL_45_3 11
#define DEBUGGING_LABEL_45_2 10
#define OBJECT_45_2 9
#define OBJECT_45_1 8
#define OBJECT_45_0 7
#define EXECUTE_CACHE_45_5 5
#define FREE_REFERENCES_LABEL_45_0 4
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_45_4);
      goto error_not_promise_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_promise_5)
DEFLABEL (error_not_promise_2)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_45_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_45_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_45_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define ENVIRONMENT_LABEL_46_3 6
#define DEBUGGING_LABEL_46_2 5
#define OBJECT_46_0 4
#define FREE_REFERENCES_LABEL_46_0 4
#define NUMBER_OF_LINKER_SECTIONS_46_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_46_4);
      goto promise_forcedP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (promise_forcedP_4)
DEFLABEL (promise_forcedP_1)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (current_block [OBJECT_46_0]);
  if ((Wrd9.Obj) == (Wrd5.Obj))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (Wrd9.Obj);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define ENVIRONMENT_LABEL_47_3 9
#define DEBUGGING_LABEL_47_2 8
#define OBJECT_47_0 7
#define EXECUTE_CACHE_47_5 5
#define FREE_REFERENCES_LABEL_47_0 4
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_47_4);
      goto promise_non_expressionP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (promise_non_expressionP_4)
DEFLABEL (promise_non_expressionP_1)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd5.Obj) = (current_block [OBJECT_47_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_5 3
#define LABEL_48_4 5
#define ENVIRONMENT_LABEL_48_3 12
#define DEBUGGING_LABEL_48_2 11
#define OBJECT_48_1 10
#define OBJECT_48_0 9
#define EXECUTE_CACHE_48_6 7
#define FREE_REFERENCES_LABEL_48_0 6
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_48_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_48_4);
      goto promise_value_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (promise_value_6)
DEFLABEL (promise_value_3)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_48_0])))
    goto label_8;

DEFLABEL (label_7)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  Rvl = ((Wrd16.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_48_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_48_5);
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_5 3
#define LABEL_49_4 5
#define LABEL_49_9 7
#define LABEL_49_7 9
#define ENVIRONMENT_LABEL_49_3 20
#define DEBUGGING_LABEL_49_2 19
#define OBJECT_49_3 18
#define OBJECT_49_2 17
#define OBJECT_49_1 16
#define OBJECT_49_0 15
#define EXECUTE_CACHE_49_8 11
#define EXECUTE_CACHE_49_6 13
#define FREE_REFERENCES_LABEL_49_0 10
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_49_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_49_4);
      goto promise_expression_6;

    case 2:
      current_block = (Rpc - LABEL_49_9);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_49_7);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (promise_expression_9)
DEFLABEL (promise_expression_6)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_49_0]))
    goto label_13;

DEFLABEL (label_12)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_49_2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_49_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  Rvl = ((Wrd14.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_49_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_49_9);
  goto label_10;

DEFLABEL (label_13)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_49_1]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_49_5);
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_5 3
#define LABEL_50_4 5
#define LABEL_50_9 7
#define LABEL_50_7 9
#define ENVIRONMENT_LABEL_50_3 20
#define DEBUGGING_LABEL_50_2 19
#define OBJECT_50_3 18
#define OBJECT_50_2 17
#define OBJECT_50_1 16
#define OBJECT_50_0 15
#define EXECUTE_CACHE_50_8 11
#define EXECUTE_CACHE_50_6 13
#define FREE_REFERENCES_LABEL_50_0 10
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_50_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_50_4);
      goto promise_environment_6;

    case 2:
      current_block = (Rpc - LABEL_50_9);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_50_7);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (promise_environment_9)
DEFLABEL (promise_environment_6)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_50_0]))
    goto label_13;

DEFLABEL (label_12)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_50_2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_50_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  Rvl = ((Wrd14.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_50_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_6]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_50_9);
  goto label_10;

DEFLABEL (label_13)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_50_1]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_50_5);
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define LABEL_51_7 7
#define LABEL_51_8 9
#define LABEL_51_9 11
#define ENVIRONMENT_LABEL_51_3 22
#define DEBUGGING_LABEL_51_2 21
#define OBJECT_51_5 20
#define OBJECT_51_4 19
#define OBJECT_51_3 18
#define OBJECT_51_2 17
#define OBJECT_51_1 16
#define OBJECT_51_0 15
#define EXECUTE_CACHE_51_6 13
#define FREE_REFERENCES_LABEL_51_0 12
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
udata_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_51_4);
      goto force_10;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_51_7);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_51_8);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_51_9);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (force_13)
DEFLABEL (force_10)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_51_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  if (! ((Wrd7.Obj) == (current_block [OBJECT_51_1])))
    goto label_14;
  Rvl = ((Wrd6.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  if ((Wrd7.Obj) == (current_block [OBJECT_51_2]))
    goto label_15;
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_3]), 1);

DEFLABEL (label_15)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_51_7);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_4]), 2);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_51_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_51_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_5]), 2);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_51_9);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

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
udata_so_d1e6d9f2bc5a3684 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	1,
	1,
	0,
	1,
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
	1,
	0,
	1,
	0,
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
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1,
	1,
	0,
	0,
	1,
	1,
	1,
	1,
	1,
	0,
	0,
	0,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 51)
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

static const struct liarc_code_S arr_decl_udata_so_d1e6d9f2bc5a3684 [51] =
  {
    { "udata_so_code_1", 2, udata_so_code_1 },
    { "udata_so_code_2", 1, udata_so_code_2 },
    { "udata_so_code_3", 1, udata_so_code_3 },
    { "udata_so_code_4", 1, udata_so_code_4 },
    { "udata_so_code_5", 2, udata_so_code_5 },
    { "udata_so_code_6", 2, udata_so_code_6 },
    { "udata_so_code_7", 2, udata_so_code_7 },
    { "udata_so_code_8", 2, udata_so_code_8 },
    { "udata_so_code_9", 2, udata_so_code_9 },
    { "udata_so_code_10", 1, udata_so_code_10 },
    { "udata_so_code_11", 1, udata_so_code_11 },
    { "udata_so_code_12", 3, udata_so_code_12 },
    { "udata_so_code_13", 3, udata_so_code_13 },
    { "udata_so_code_14", 1, udata_so_code_14 },
    { "udata_so_code_15", 1, udata_so_code_15 },
    { "udata_so_code_16", 1, udata_so_code_16 },
    { "udata_so_code_17", 2, udata_so_code_17 },
    { "udata_so_code_18", 2, udata_so_code_18 },
    { "udata_so_code_19", 3, udata_so_code_19 },
    { "udata_so_code_20", 2, udata_so_code_20 },
    { "udata_so_code_21", 2, udata_so_code_21 },
    { "udata_so_code_22", 7, udata_so_code_22 },
    { "udata_so_code_23", 1, udata_so_code_23 },
    { "udata_so_code_24", 2, udata_so_code_24 },
    { "udata_so_code_25", 1, udata_so_code_25 },
    { "udata_so_code_26", 3, udata_so_code_26 },
    { "udata_so_code_27", 3, udata_so_code_27 },
    { "udata_so_code_28", 4, udata_so_code_28 },
    { "udata_so_code_29", 2, udata_so_code_29 },
    { "udata_so_code_30", 3, udata_so_code_30 },
    { "udata_so_code_31", 3, udata_so_code_31 },
    { "udata_so_code_32", 16, udata_so_code_32 },
    { "udata_so_code_33", 1, udata_so_code_33 },
    { "udata_so_code_34", 3, udata_so_code_34 },
    { "udata_so_code_35", 2, udata_so_code_35 },
    { "udata_so_code_36", 2, udata_so_code_36 },
    { "udata_so_code_37", 2, udata_so_code_37 },
    { "udata_so_code_38", 1, udata_so_code_38 },
    { "udata_so_code_39", 1, udata_so_code_39 },
    { "udata_so_code_40", 1, udata_so_code_40 },
    { "udata_so_code_41", 1, udata_so_code_41 },
    { "udata_so_code_42", 14, udata_so_code_42 },
    { "udata_so_code_43", 1, udata_so_code_43 },
    { "udata_so_code_44", 2, udata_so_code_44 },
    { "udata_so_code_45", 1, udata_so_code_45 },
    { "udata_so_code_46", 1, udata_so_code_46 },
    { "udata_so_code_47", 1, udata_so_code_47 },
    { "udata_so_code_48", 2, udata_so_code_48 },
    { "udata_so_code_49", 4, udata_so_code_49 },
    { "udata_so_code_50", 4, udata_so_code_50 },
    { "udata_so_code_51", 5, udata_so_code_51 }
  };

int
decl_udata_so_d1e6d9f2bc5a3684 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_udata_so_d1e6d9f2bc5a3684);
  return (0);
}

DECLARE_COMPILED_CODE ("udata.so", 3, decl_udata_so_d1e6d9f2bc5a3684, udata_so_d1e6d9f2bc5a3684)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_udata_so_data_d1e6d9f2bc5a3684 [4632] =
  "\x5a\x40\xca\x08\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x07\xc2\xb9\x02"
  "\x28\x0d\xba\x23\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x82\x88"
  "\xb1\x07\x02\x22\x29\x21\x9f\x2b\xbc\x1d\xb0\x83\x88\xc2\x02\x22"
  "\x29\x21\x9e\x2b\xbd\x1d\xb0\x84\x88\xc2\xbe\x02\x22\x29\x21\x9e"
  "\x2b\xbf\x1d\xb0\x85\x88\xb6\x02\x28\x0d\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\xbe\x1d\xb0\x86\x88\x0c\x28\x0d\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x0d\x28\x1b\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x0d\x28"
  "\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28"
  "\x0d\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb1\x07\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb1\x07\x02"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\x0d\x1c\xb1\x02\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\x0d\x1c\xb1\x02\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\xc1\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1"
  "\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x82\x81\x80\xc1\x1c\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1b\x82\x1b\x81"
  "\x0d\x80\x1b\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x80"
  "\x82\x1b\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x80"
  "\x82\x1b\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b"
  "\x0c\xb1\x02\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x07"
  "\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x0d\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x07\x02\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\xc2\x1c\x80\x1b\x24"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x82\x1b\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1b\x80\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x85\x02\x02\x02\x02\x1b\x1b\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x06\x0d\x08\x89\x28\x0d\x1c\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x82\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3\x82\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x22\x29\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\xc2\x1c\x80\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\xc3\x1d\x80\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc1\xc1\x08\x83\x1b\x1b\x82"
  "\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x07\x02\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1d\xb1\x02\x28\x0d\xb9\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x0d"
  "\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x02\x88\x80\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x07\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x80\x0c\x07\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x80\x0c\x07\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\xc2\xc1\x80\x07\x0d\x1c\x28"
  "\x0d\xb8\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\xb6\x2a\xb7\x2a\xb5\x2a\xb4\x2a\xb3\x2a\x17\x1b\x0d\x0d"
  "\x0d\x0d\x0d\xb1\xb0\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x0d\x1b"
  "\x0d\x1b\x0d\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x1b\x0d\x0d\x0d\x0d\x1b"
  "\x0d\x0d\x0d\x0d\xb2\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x54\x2f"
  "\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61"
  "\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65"
  "\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72"
  "\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x75\x64\x61\x74\x61\x2e\x69"
  "\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f"
  "\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0d\x6f\x62\x6a\x65\x63\x74\x2d"
  "\x74\x79\x70\x65\x3f\x0c\x03\x19\x63\x6f\x6d\x70\x69\x6c\x65\x64"
  "\x2d\x72\x65\x74\x75\x72\x6e\x2d\x61\x64\x64\x72\x65\x73\x73\x3f"
  "\x02\x05\x06\x81\x83\x02\x04\x04\x83\x04\x05\x0e\x02\x0c\x06\x04"
  "\x83\x04\x03\x02\x1c\x6d\x61\x70\x2d\x63\x6f\x64\x65\x2d\x74\x6f"
  "\x2d\x6d\x61\x63\x68\x69\x6e\x65\x2d\x61\x64\x64\x72\x65\x73\x73"
  "\x0c\x07\x04\x83\x04\x03\x02\x1c\x6d\x61\x70\x2d\x6d\x61\x63\x68"
  "\x69\x6e\x65\x2d\x61\x64\x64\x72\x65\x73\x73\x2d\x74\x6f\x2d\x63"
  "\x6f\x64\x65\x0c\x08\x04\x83\x04\x03\x02\x0c\x03\x1c\x6d\x69\x63"
  "\x72\x6f\x63\x6f\x64\x65\x2d\x72\x65\x74\x75\x72\x6e\x2f\x63\x6f"
  "\x64\x65\x2d\x3e\x6e\x61\x6d\x65\x02\x0a\x06\x81\x83\x02\x09\x04"
  "\x83\x04\x05\x0d\x02\x1e\x4d\x49\x43\x52\x4f\x43\x4f\x44\x45\x2d"
  "\x45\x52\x52\x4f\x52\x3a\x20\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x6e"
  "\x61\x6d\x65\x03\x1b\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x65"
  "\x72\x72\x6f\x72\x2f\x6e\x61\x6d\x65\x2d\x3e\x63\x6f\x64\x65\x04"
  "\x06\x65\x72\x72\x6f\x72\x09\x03\x0c\x06\x81\x83\x02\x0b\x04\x83"
  "\x04\x05\x0e\x0a\x02\x08\x1f\x4d\x49\x43\x52\x4f\x43\x4f\x44\x45"
  "\x2d\x52\x45\x54\x55\x52\x4e\x3a\x20\x55\x6e\x6b\x6e\x6f\x77\x6e"
  "\x20\x6e\x61\x6d\x65\x03\x1c\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65"
  "\x2d\x72\x65\x74\x75\x72\x6e\x2f\x6e\x61\x6d\x65\x2d\x3e\x63\x6f"
  "\x64\x65\x04\x09\x03\x0e\x06\x81\x83\x02\x0d\x04\x83\x04\x05\x0e"
  "\x0b\x02\x09\x24\x4d\x49\x43\x52\x4f\x43\x4f\x44\x45\x2d\x54\x45"
  "\x52\x4d\x49\x4e\x41\x54\x49\x4f\x4e\x3a\x20\x55\x6e\x6b\x6e\x6f"
  "\x77\x6e\x20\x6e\x61\x6d\x65\x03\x21\x6d\x69\x63\x72\x6f\x63\x6f"
  "\x64\x65\x2d\x74\x65\x72\x6d\x69\x6e\x61\x74\x69\x6f\x6e\x2f\x6e"
  "\x61\x6d\x65\x2d\x3e\x63\x6f\x64\x65\x04\x09\x03\x10\x06\x81\x83"
  "\x02\x0f\x04\x83\x04\x05\x0e\x0c\x02\x0a\x1d\x4d\x49\x43\x52\x4f"
  "\x43\x4f\x44\x45\x2d\x54\x59\x50\x45\x3a\x20\x55\x6e\x6b\x6e\x6f"
  "\x77\x6e\x20\x6e\x61\x6d\x65\x03\x1a\x6d\x69\x63\x72\x6f\x63\x6f"
  "\x64\x65\x2d\x74\x79\x70\x65\x2f\x6e\x61\x6d\x65\x2d\x3e\x63\x6f"
  "\x64\x65\x04\x09\x03\x12\x06\x81\x83\x02\x11\x04\x83\x04\x05\x0e"
  "\x0d\x02\x0b\x29\x13\x04\x83\x04\x03\x0e\x02\x0c\x3c\x14\x04\x83"
  "\x04\x03\x0f\x02\x0d\x14\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x10\x29\x03\x14\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x64\x2d\x65\x6e\x74\x72\x79\x2d\x74\x79\x70\x65"
  "\x11\x02\x17\x08\x81\x83\x02\x16\x06\x81\x83\x02\x15\x04\x83\x04"
  "\x07\x11\x12\x02\x0e\x18\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x72"
  "\x65\x74\x75\x72\x6e\x2d\x61\x64\x64\x72\x65\x73\x73\x13\x29\x03"
  "\x11\x02\x1a\x08\x81\x83\x02\x19\x06\x81\x83\x02\x18\x04\x83\x04"
  "\x07\x11\x14\x02\x0f\x15\x73\x74\x61\x63\x6b\x2d\x61\x64\x64\x72"
  "\x65\x73\x73\x2d\x6f\x66\x66\x73\x65\x74\x15\x1b\x04\x83\x04\x03"
  "\x16\x02\x10\x1d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64"
  "\x65\x2d\x61\x64\x64\x72\x65\x73\x73\x2d\x3e\x62\x6c\x6f\x63\x6b"
  "\x17\x1c\x04\x83\x04\x03\x18\x02\x11\x1e\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x64\x2d\x63\x6f\x64\x65\x2d\x61\x64\x64\x72\x65\x73\x73\x2d"
  "\x3e\x6f\x66\x66\x73\x65\x74\x1d\x04\x83\x04\x03\x19\x02\x12\x14"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65\x6e\x74\x72\x79\x2d\x6b"
  "\x69\x6e\x64\x1a\x1f\x06\x81\x8b\x02\x1e\x04\x87\x0c\x05\x0c\x1b"
  "\x02\x13\x0f\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65\x6e\x74\x72"
  "\x79\x10\x13\x13\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x1a\x21\x06\x81\x83\x02\x20\x04\x83\x04"
  "\x05\x10\x13\x02\x14\x1a\x24\x08\x81\x83\x02\x23\x06\x81\x83\x02"
  "\x22\x04\x83\x04\x07\x0b\x10\x02\x15\x1a\x26\x06\x81\x83\x02\x25"
  "\x04\x83\x04\x05\x0c\x1c\x02\x16\x1a\x28\x06\x81\x83\x02\x27\x04"
  "\x83\x04\x05\x0c\x1a\x02\x17\x1b\x53\x74\x61\x63\x6b\x20\x61\x64"
  "\x64\x72\x65\x73\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x72\x61\x6e"
  "\x67\x65\x15\x14\x4e\x6f\x74\x20\x61\x20\x73\x74\x61\x63\x6b\x20"
  "\x61\x64\x64\x72\x65\x73\x73\x3c\x04\x09\x05\x09\x03\x2f\x10\x81"
  "\x87\x02\x2e\x0e\x81\x85\x02\x2d\x0c\x81\x85\x02\x2c\x0a\x81\x87"
  "\x02\x2b\x08\x81\x85\x02\x2a\x06\x84\x06\x29\x04\x81\x85\x02\x0f"
  "\x1c\x15\x02\x18\x3e\x30\x04\x83\x04\x03\x1d\x02\x19\x17\x03\x08"
  "\x66\x61\x73\x6c\x6f\x61\x64\x02\x32\x06\x81\x83\x02\x31\x04\x83"
  "\x04\x05\x0c\x17\x02\x1a\x0e\x33\x04\x83\x04\x03\x1e\x02\x1b\x25"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x62\x6c"
  "\x6f\x63\x6b\x2f\x62\x79\x74\x65\x73\x2d\x70\x65\x72\x2d\x6f\x62"
  "\x6a\x65\x63\x74\x1f\x02\x36\x08\x81\x85\x02\x35\x06\x81\x83\x02"
  "\x34\x04\x83\x04\x07\x0c\x20\x02\x1c\x1f\x02\x39\x08\x81\x83\x02"
  "\x38\x06\x81\x85\x02\x37\x04\x83\x04\x07\x0c\x21\x02\x1d\x0d\x6f"
  "\x62\x6a\x65\x63\x74\x2d\x64\x61\x74\x75\x6d\x22\x12\x73\x79\x73"
  "\x74\x65\x6d\x2d\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x23\x1f"
  "\x02\x3d\x0a\x81\x85\x02\x3c\x08\x81\x87\x02\x3b\x06\x81\x83\x02"
  "\x3a\x04\x83\x04\x09\x11\x24\x02\x1e\x1f\x02\x3f\x06\x81\x83\x02"
  "\x3e\x04\x83\x04\x05\x0b\x25\x02\x1f\x03\x1f\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x2f\x63"
  "\x6f\x64\x65\x2d\x73\x74\x61\x72\x74\x26\x03\x20\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x2f"
  "\x63\x6f\x64\x65\x2d\x6c\x65\x6e\x67\x74\x68\x27\x03\x42\x08\x81"
  "\x85\x02\x41\x06\x81\x83\x02\x40\x04\x83\x04\x07\x0f\x28\x02\x20"
  "\x22\x23\x45\x08\x81\x83\x02\x44\x06\x81\x85\x02\x43\x04\x83\x04"
  "\x07\x0d\x29\x02\x21\x81\x80\x04\x1b\x3a\x0e\x22\x23\x03\x22\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f"
  "\x63\x6b\x2f\x63\x6f\x6e\x73\x74\x61\x6e\x74\x73\x2d\x65\x6e\x64"
  "\x2a\x03\x21\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65"
  "\x2d\x62\x6c\x6f\x63\x6b\x2f\x6d\x61\x72\x6b\x65\x64\x2d\x73\x74"
  "\x61\x72\x74\x2b\x03\x55\x22\x81\x8b\x02\x54\x20\x81\x8b\x02\x53"
  "\x1e\x81\x8d\x02\x52\x1c\x81\x8d\x02\x51\x1a\x81\x8d\x02\x50\x18"
  "\x81\x8d\x02\x4f\x16\x81\x8d\x02\x4e\x14\x81\x8d\x02\x4d\x12\x81"
  "\x8b\x02\x4c\x10\x81\x89\x02\x4b\x0e\x81\x8b\x02\x4a\x0c\x81\x89"
  "\x02\x49\x0a\x81\x89\x02\x48\x08\x81\x85\x02\x47\x06\x81\x83\x02"
  "\x46\x04\x83\x04\x21\x30\x2c\x02\x22\x56\x04\x83\x04\x03\x2d\x02"
  "\x23\x0f\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f"
  "\x03\x23\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d"
  "\x62\x6c\x6f\x63\x6b\x2f\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d"
  "\x69\x6e\x66\x6f\x2e\x04\x05\x6d\x65\x6d\x71\x03\x59\x08\x81\x87"
  "\x02\x58\x06\x81\x83\x02\x57\x04\x83\x04\x07\x11\x2f\x02\x24\x23"
  "\x5b\x06\x81\x85\x02\x5a\x04\x83\x04\x05\x0a\x30\x02\x25\x13\x73"
  "\x79\x73\x74\x65\x6d\x2d\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74"
  "\x21\x5d\x06\x81\x87\x02\x5c\x04\x84\x06\x05\x0a\x31\x02\x26\x23"
  "\x5f\x06\x81\x85\x02\x5e\x04\x83\x04\x05\x23\x02\x27\x60\x04\x83"
  "\x04\x03\x32\x02\x28\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66"
  "\x33\x61\x04\x83\x04\x03\x34\x02\x29\x0c\x76\x65\x63\x74\x6f\x72"
  "\x2d\x73\x65\x74\x21\x02\x62\x04\x84\x06\x03\x35\x02\x2a\x33\x63"
  "\x04\x83\x04\x03\x36\x02\x2b\x04\x63\x61\x72\x04\x63\x64\x72\x22"
  "\x33\x05\x10\x73\x75\x62\x76\x65\x63\x74\x6f\x72\x2d\x3e\x6c\x69"
  "\x73\x74\x03\x13\x6d\x61\x70\x2d\x72\x65\x66\x65\x72\x65\x6e\x63"
  "\x65\x2d\x74\x72\x61\x70\x03\x18\x75\x6e\x62\x6f\x75\x6e\x64\x2d"
  "\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x3f\x04"
  "\x71\x1e\x81\x85\x02\x70\x1c\x81\x83\x02\x6f\x1a\x81\x83\x02\x6e"
  "\x18\x81\x83\x02\x6d\x16\x81\x85\x02\x6c\x14\x81\x83\x02\x6b\x12"
  "\x81\x85\x02\x6a\x10\x81\x83\x02\x69\x0e\x81\x83\x02\x68\x0c\x81"
  "\x81\x02\x67\x0a\x81\x81\x02\x66\x08\x81\x83\x02\x65\x06\x81\x83"
  "\x02\x64\x04\x83\x04\x1d\x2e\x33\x02\x2c\x14\x72\x04\x83\x04\x03"
  "\x22\x02\x2d\x02\x14\x04\x12\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74"
  "\x2d\x70\x72\x6f\x6d\x69\x73\x65\x02\x74\x06\x81\x85\x02\x73\x04"
  "\x84\x04\x05\x0e\x37\x02\x2e\x08\x08\x70\x72\x6f\x6d\x69\x73\x65"
  "\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79"
  "\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x02\x75\x04\x84\x04"
  "\x03\x0c\x38\x02\x2f\x76\x04\x83\x04\x03\x39\x02\x30\x04\x05\x65"
  "\x71\x76\x3f\x3a\x02\x77\x04\x83\x04\x03\x0a\x3b\x02\x31\x17\x50"
  "\x72\x6f\x6d\x69\x73\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x66"
  "\x6f\x72\x63\x65\x64\x04\x09\x02\x79\x06\x83\x04\x78\x04\x81\x83"
  "\x02\x05\x0d\x3c\x02\x32\x1a\x50\x72\x6f\x6d\x69\x73\x65\x20\x68"
  "\x61\x73\x20\x6e\x6f\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x17\x50\x72\x6f\x6d\x69\x73\x65\x20\x61\x6c\x72\x65\x61\x64\x79"
  "\x20\x66\x6f\x72\x63\x65\x64\x04\x09\x04\x3a\x03\x7d\x0a\x81\x83"
  "\x02\x7c\x08\x81\x83\x02\x7b\x06\x83\x04\x7a\x04\x81\x83\x02\x09"
  "\x15\x3d\x02\x33\x1b\x50\x72\x6f\x6d\x69\x73\x65\x20\x68\x61\x73"
  "\x20\x6e\x6f\x20\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x17"
  "\x50\x72\x6f\x6d\x69\x73\x65\x20\x61\x6c\x72\x65\x61\x64\x79\x20"
  "\x66\x6f\x72\x63\x65\x64\x04\x09\x04\x3a\x03\x81\x01\x0a\x81\x83"
  "\x02\x80\x01\x08\x81\x83\x02\x7f\x06\x83\x04\x7e\x04\x81\x83\x02"
  "\x09\x15\x3a\x02\x34\x15\x73\x79\x73\x74\x65\x6d\x2d\x70\x61\x69"
  "\x72\x2d\x73\x65\x74\x2d\x63\x61\x72\x21\x15\x73\x79\x73\x74\x65"
  "\x6d\x2d\x70\x61\x69\x72\x2d\x73\x65\x74\x2d\x63\x64\x72\x21\x06"
  "\x66\x6f\x72\x63\x65\x06\x66\x6f\x72\x63\x65\x09\x04\x12\x67\x75"
  "\x61\x72\x61\x6e\x74\x65\x65\x2d\x70\x72\x6f\x6d\x69\x73\x65\x02"
  "\x86\x01\x0c\x81\x85\x02\x85\x01\x0a\x81\x85\x02\x84\x01\x08\x81"
  "\x85\x02\x83\x01\x06\x81\x83\x02\x82\x01\x04\x83\x04\x0b\x17\x3e"
  "\x34\x3f\x3f\x3e\x04\x3a\x06\x3d\x06\x3c\x06\x3b\x04\x39\x04\x38"
  "\x04\x37\x04\x22\x04\x33\x04\x36\x04\x35\x04\x34\x04\x32\x04\x23"
  "\x04\x31\x04\x30\x04\x2f\x04\x2d\x04\x2c\x04\x29\x04\x28\x04\x25"
  "\x04\x24\x04\x21\x04\x20\x04\x1e\x04\x17\x04\x1d\x04\x15\x06\x1a"
  "\x04\x1c\x04\x10\x04\x13\x04\x1b\x04\x19\x04\x18\x04\x16\x04\x14"
  "\x04\x12\x04\x0f\x04\x0e\x04\x0d\x04\x0c\x04\x0b\x04\x0a\x04\x04"
  "\x04\x04\x04\x04\x35\x09\x14\x70\x72\x6f\x6d\x69\x73\x65\x2d\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x13\x70\x72\x6f\x6d\x69"
  "\x73\x65\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x0e\x70\x72"
  "\x6f\x6d\x69\x73\x65\x2d\x76\x61\x6c\x75\x65\x18\x70\x72\x6f\x6d"
  "\x69\x73\x65\x2d\x6e\x6f\x6e\x2d\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x3f\x10\x70\x72\x6f\x6d\x69\x73\x65\x2d\x66\x6f\x72\x63"
  "\x65\x64\x3f\x09\x70\x72\x6f\x6d\x69\x73\x65\x3f\x1f\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x65\x78\x74\x65\x6e\x73\x69"
  "\x6f\x6e\x2d\x61\x75\x78\x2d\x6c\x69\x73\x74\x20\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x65\x78\x74\x65\x6e\x73\x69\x6f"
  "\x6e\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x22\x73\x65\x74\x2d"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x65\x78\x74\x65"
  "\x6e\x73\x69\x6f\x6e\x2d\x70\x61\x72\x65\x6e\x74\x21\x1d\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x65\x78\x74\x65\x6e\x73"
  "\x69\x6f\x6e\x2d\x70\x61\x72\x65\x6e\x74\x17\x65\x6e\x76\x69\x72"
  "\x6f\x6e\x6d\x65\x6e\x74\x2d\x65\x78\x74\x65\x6e\x73\x69\x6f\x6e"
  "\x3f\x20\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d"
  "\x62\x6c\x6f\x63\x6b\x2f\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x28\x73\x65\x74\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63"
  "\x6f\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x2f\x64\x65\x62\x75\x67\x67"
  "\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x21\x2e\x24\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x2f\x64"
  "\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x3f\x2a\x24"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x62\x6c"
  "\x6f\x63\x6b\x2f\x63\x6f\x6e\x73\x74\x61\x6e\x74\x73\x2d\x73\x74"
  "\x61\x72\x74\x2b\x1d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f"
  "\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x2f\x63\x6f\x64\x65\x2d\x65\x6e"
  "\x64\x26\x27\x22\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64"
  "\x65\x2d\x62\x6c\x6f\x63\x6b\x2f\x6f\x66\x66\x73\x65\x74\x2d\x3e"
  "\x69\x6e\x64\x65\x78\x22\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63"
  "\x6f\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x2f\x69\x6e\x64\x65\x78\x2d"
  "\x3e\x6f\x66\x66\x73\x65\x74\x26\x63\x6f\x6d\x70\x69\x6c\x65\x64"
  "\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x2f\x6d\x61\x6e\x69"
  "\x66\x65\x73\x74\x2d\x63\x6c\x6f\x73\x75\x72\x65\x3f\x1e\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f\x63"
  "\x6b\x2f\x72\x65\x61\x64\x2d\x66\x69\x6c\x65\x15\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x3f"
  "\x1f\x15\x73\x74\x61\x63\x6b\x2d\x61\x64\x64\x72\x65\x73\x73\x2d"
  "\x3e\x69\x6e\x64\x65\x78\x2c\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x72\x65\x66"
  "\x6c\x65\x63\x74\x2d\x74\x6f\x2d\x69\x6e\x74\x65\x72\x66\x61\x63"
  "\x65\x3f\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x6e\x74"
  "\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x72\x65\x74\x75\x72\x6e\x2d"
  "\x74\x6f\x2d\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x3f\x2f"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x6e\x74\x69\x6e\x75"
  "\x61\x74\x69\x6f\x6e\x2f\x6e\x65\x78\x74\x2d\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x6f\x66\x66\x73\x65\x74\x11\x1c"
  "\x64\x69\x73\x63\x72\x69\x6d\x69\x6e\x61\x74\x65\x2d\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x64\x2d\x65\x6e\x74\x72\x79\x1e\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x61\x64\x64\x72\x65\x73"
  "\x73\x2d\x3e\x6f\x66\x66\x73\x65\x74\x1d\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x64\x2d\x63\x6f\x64\x65\x2d\x61\x64\x64\x72\x65\x73\x73\x2d"
  "\x3e\x62\x6c\x6f\x63\x6b\x15\x73\x74\x61\x63\x6b\x2d\x61\x64\x64"
  "\x72\x65\x73\x73\x2d\x6f\x66\x66\x73\x65\x74\x15\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x64\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3f"
  "\x0f\x73\x74\x61\x63\x6b\x2d\x61\x64\x64\x72\x65\x73\x73\x3f\x17"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x61\x64"
  "\x64\x72\x65\x73\x73\x3f\x0f\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65"
  "\x2d\x74\x79\x70\x65\x16\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d"
  "\x74\x65\x72\x6d\x69\x6e\x61\x74\x69\x6f\x6e\x11\x6d\x69\x63\x72"
  "\x6f\x63\x6f\x64\x65\x2d\x72\x65\x74\x75\x72\x6e\x10\x6d\x69\x63"
  "\x72\x6f\x63\x6f\x64\x65\x2d\x65\x72\x72\x6f\x72\x14\x72\x65\x74"
  "\x75\x72\x6e\x2d\x61\x64\x64\x72\x65\x73\x73\x2f\x6e\x61\x6d\x65"
  "\x14\x72\x65\x74\x75\x72\x6e\x2d\x61\x64\x64\x72\x65\x73\x73\x2f"
  "\x63\x6f\x64\x65\x14\x6d\x61\x6b\x65\x2d\x72\x65\x74\x75\x72\x6e"
  "\x2d\x61\x64\x64\x72\x65\x73\x73\x1c\x69\x6e\x74\x65\x72\x70\x72"
  "\x65\x74\x65\x72\x2d\x72\x65\x74\x75\x72\x6e\x2d\x61\x64\x64\x72"
  "\x65\x73\x73\x3f\x10\x72\x65\x74\x75\x72\x6e\x2d\x61\x64\x64\x72"
  "\x65\x73\x73\x3f\x35\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75"
  "\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81"
  "\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
udata_so_data_d1e6d9f2bc5a3684 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_udata_so_data_d1e6d9f2bc5a3684 [0]))), (sizeof (prog_udata_so_data_d1e6d9f2bc5a3684)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("udata.so", udata_so_data_d1e6d9f2bc5a3684)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("udata.so", "13d601d783a2aa22")
