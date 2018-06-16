/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:46-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define ENVIRONMENT_LABEL_1_3 12
#define DEBUGGING_LABEL_1_2 11
#define OBJECT_1_2 10
#define OBJECT_1_1 9
#define OBJECT_1_0 8
#define FREE_REFERENCES_LABEL_1_0 8
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto output_port__write_char_2;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_port__write_char_7)
DEFLABEL (output_port__write_char_2)
  INTERRUPT_CHECK (26, LABEL_1_4);
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
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd27.Lng))))
    goto label_9;
  (Wrd22.Obj) = ((Wrd25.pObj) [10]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_8)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_9)
  (Wrd30.Obj) = (current_block [OBJECT_1_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_1_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define ENVIRONMENT_LABEL_2_3 10
#define DEBUGGING_LABEL_2_2 9
#define EXECUTE_CACHE_2_6 7
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto output_port_write_char_1;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_port_write_char_4)
DEFLABEL (output_port_write_char_1)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 13
#define DEBUGGING_LABEL_3_2 12
#define OBJECT_3_0 11
#define EXECUTE_CACHE_3_7 7
#define EXECUTE_CACHE_3_6 9
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_3_4);
      goto output_port_write_string_1;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_port_write_string_4)
DEFLABEL (output_port_write_string_1)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_3_0]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Rsp [3]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define ENVIRONMENT_LABEL_4_3 10
#define DEBUGGING_LABEL_4_2 9
#define EXECUTE_CACHE_4_6 7
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto output_port_write_substring_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_port_write_substring_4)
DEFLABEL (output_port_write_substring_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define ENVIRONMENT_LABEL_5_3 10
#define DEBUGGING_LABEL_5_2 9
#define EXECUTE_CACHE_5_6 7
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto output_port_fresh_line_1;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_port_fresh_line_4)
DEFLABEL (output_port_fresh_line_1)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 10
#define DEBUGGING_LABEL_6_2 9
#define EXECUTE_CACHE_6_6 7
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto output_port_line_startP_1;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_port_line_startP_4)
DEFLABEL (output_port_line_startP_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define ENVIRONMENT_LABEL_7_3 10
#define DEBUGGING_LABEL_7_2 9
#define EXECUTE_CACHE_7_6 7
#define FREE_REFERENCES_LABEL_7_0 6
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto output_port_flush_output_1;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_port_flush_output_4)
DEFLABEL (output_port_flush_output_1)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define ENVIRONMENT_LABEL_8_3 12
#define DEBUGGING_LABEL_8_2 11
#define OBJECT_8_2 10
#define OBJECT_8_1 9
#define OBJECT_8_0 8
#define FREE_REFERENCES_LABEL_8_0 8
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto output_port__discretionary_flush_2;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_port__discretionary_flush_7)
DEFLABEL (output_port__discretionary_flush_2)
  INTERRUPT_CHECK (26, LABEL_8_4);
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
  (Wrd30.Obj) = (current_block [OBJECT_8_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_8_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define ENVIRONMENT_LABEL_9_3 10
#define DEBUGGING_LABEL_9_2 9
#define EXECUTE_CACHE_9_6 7
#define FREE_REFERENCES_LABEL_9_0 6
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto output_port_discretionary_flush_1;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_port_discretionary_flush_4)
DEFLABEL (output_port_discretionary_flush_1)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 9
#define DEBUGGING_LABEL_10_2 8
#define OBJECT_10_0 7
#define EXECUTE_CACHE_10_5 5
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto output_port_write_object_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_port_write_object_3)
DEFLABEL (output_port_write_object_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_6 5
#define LABEL_11_5 7
#define ENVIRONMENT_LABEL_11_3 14
#define DEBUGGING_LABEL_11_2 13
#define OBJECT_11_1 12
#define OBJECT_11_0 11
#define EXECUTE_CACHE_11_7 9
#define FREE_REFERENCES_LABEL_11_0 8
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_11_4);
      goto output_port_x_size_4;

    case 1:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_port_x_size_7)
DEFLABEL (output_port_x_size_4)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  (* (--Rsp)) = Rvl;
  (Wrd15.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_8)
  (Wrd5.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_12)
  (Rsp [0]) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = (Wrd5.Obj);
  goto label_9;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_11_1]);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define ENVIRONMENT_LABEL_12_3 11
#define DEBUGGING_LABEL_12_2 10
#define OBJECT_12_0 9
#define EXECUTE_CACHE_12_6 7
#define FREE_REFERENCES_LABEL_12_0 6
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto output_port_y_size_2;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_port_y_size_5)
DEFLABEL (output_port_y_size_2)
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
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_6)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define ENVIRONMENT_LABEL_13_3 11
#define DEBUGGING_LABEL_13_2 10
#define OBJECT_13_0 9
#define EXECUTE_CACHE_13_6 7
#define FREE_REFERENCES_LABEL_13_0 6
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto output_port_column_2;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_port_column_5)
DEFLABEL (output_port_column_2)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_6)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define ENVIRONMENT_LABEL_14_3 11
#define DEBUGGING_LABEL_14_2 10
#define OBJECT_14_0 9
#define EXECUTE_CACHE_14_6 7
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto output_port_bytes_written_2;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_port_bytes_written_5)
DEFLABEL (output_port_bytes_written_2)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_6)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define ENVIRONMENT_LABEL_15_3 12
#define DEBUGGING_LABEL_15_2 11
#define OBJECT_15_1 10
#define OBJECT_15_0 9
#define EXECUTE_CACHE_15_6 7
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto output_port_synchronize_output_2;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_port_synchronize_output_5)
DEFLABEL (output_port_synchronize_output_2)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_15_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_6 5
#define LABEL_16_7 7
#define LABEL_16_5 9
#define LABEL_16_8 11
#define LABEL_16_9 13
#define ENVIRONMENT_LABEL_16_3 21
#define DEBUGGING_LABEL_16_2 20
#define OBJECT_16_5 19
#define OBJECT_16_4 18
#define OBJECT_16_3 17
#define OBJECT_16_2 16
#define OBJECT_16_1 15
#define OBJECT_16_0 14
#define FREE_REFERENCES_LABEL_16_0 14
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_16_4);
      goto Z__write_char_7;

    case 1:
      current_block = (Rpc - LABEL_16_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_16_8);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_16_9);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__write_char_14)
DEFLABEL (Z__write_char_7)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_28;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_28;
  (Wrd10.Obj) = ((Wrd16.pObj) [2]);

DEFLABEL (label_27)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_26;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd32.Lng))))
    goto label_26;
  (Wrd27.Obj) = ((Wrd30.pObj) [10]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_25)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd10.Lng) > 0)
    goto label_16;
  (Wrd8.Obj) = ((SCHEME_OBJECT) 0);
  goto label_15;

DEFLABEL (label_16)
  (Wrd8.Obj) = (current_block [OBJECT_16_3]);

DEFLABEL (label_15)
DEFLABEL (label_23)
  Rsp = (& (Rsp [1]));
  if (! ((Wrd8.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_18;

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_16_4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_22;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_22;
  (Wrd14.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_21)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_20;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd36.Lng))))
    goto label_20;
  (Wrd30.Obj) = ((Wrd34.pObj) [15]);

DEFLABEL (label_19)
  (Rsp [0]) = (Wrd30.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_20)
  (Wrd39.Obj) = (current_block [OBJECT_16_5]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_12)
  (Wrd30.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_16_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_11)
  (Wrd14.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  Rsp = (& (Rsp [1]));
  goto label_17;

DEFLABEL (label_26)
  (Wrd35.Obj) = (current_block [OBJECT_16_2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd21.Obj) = (Rsp [4]);
  (Wrd22.Obj) = (current_block [OBJECT_16_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_9)
  (Wrd10.Obj) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define ENVIRONMENT_LABEL_17_3 13
#define DEBUGGING_LABEL_17_2 12
#define OBJECT_17_0 11
#define EXECUTE_CACHE_17_7 7
#define EXECUTE_CACHE_17_6 9
#define FREE_REFERENCES_LABEL_17_0 6
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto write_char_1;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_char_4)
DEFLABEL (write_char_1)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_8 7
#define LABEL_18_7 9
#define ENVIRONMENT_LABEL_18_3 21
#define DEBUGGING_LABEL_18_2 20
#define OBJECT_18_2 19
#define OBJECT_18_1 18
#define OBJECT_18_0 17
#define EXECUTE_CACHE_18_10 11
#define EXECUTE_CACHE_18_9 13
#define EXECUTE_CACHE_18_6 15
#define FREE_REFERENCES_LABEL_18_0 10
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_18_4);
      goto write_string_5;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_18_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_18_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_string_8)
DEFLABEL (write_string_5)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd16.uLng) == 26)
    goto label_9;
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_9)
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd18.Lng) > 0)
    goto label_11;
  (Wrd14.Obj) = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_11)
  (Wrd14.Obj) = (current_block [OBJECT_18_1]);

DEFLABEL (label_10)
DEFLABEL (label_14)
  Rsp = (& (Rsp [2]));
  if ((Wrd14.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;

DEFLABEL (label_12)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_18_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  Rsp = (& (Rsp [2]));
  goto label_13;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  goto label_12;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_8 7
#define LABEL_19_7 9
#define ENVIRONMENT_LABEL_19_3 21
#define DEBUGGING_LABEL_19_2 20
#define OBJECT_19_2 19
#define OBJECT_19_1 18
#define OBJECT_19_0 17
#define EXECUTE_CACHE_19_10 11
#define EXECUTE_CACHE_19_9 13
#define EXECUTE_CACHE_19_6 15
#define FREE_REFERENCES_LABEL_19_0 10
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_19_4);
      goto write_substring_5;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_19_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_19_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_substring_8)
DEFLABEL (write_substring_5)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd16.uLng) == 26)
    goto label_9;
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_9)
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd18.Lng) > 0)
    goto label_11;
  (Wrd14.Obj) = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_11)
  (Wrd14.Obj) = (current_block [OBJECT_19_1]);

DEFLABEL (label_10)
DEFLABEL (label_14)
  Rsp = (& (Rsp [2]));
  if ((Wrd14.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;

DEFLABEL (label_12)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_19_2]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_15)
  Rsp = (& (Rsp [2]));
  goto label_13;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_19_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  goto label_12;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_8 7
#define LABEL_20_9 9
#define LABEL_20_7 11
#define LABEL_20_10 13
#define LABEL_20_11 15
#define ENVIRONMENT_LABEL_20_3 28
#define DEBUGGING_LABEL_20_2 27
#define OBJECT_20_7 26
#define OBJECT_20_6 25
#define OBJECT_20_5 24
#define OBJECT_20_4 23
#define OBJECT_20_3 22
#define OBJECT_20_2 21
#define OBJECT_20_1 20
#define OBJECT_20_0 19
#define EXECUTE_CACHE_20_6 17
#define FREE_REFERENCES_LABEL_20_0 16
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_20_4);
      goto newline_9;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_20_8);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_20_9);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_20_10);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_20_11);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (newline_16)
DEFLABEL (newline_9)
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
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_20_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 62))
    goto label_30;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd19.Lng))))
    goto label_30;
  (Wrd11.Obj) = ((Wrd17.pObj) [2]);

DEFLABEL (label_29)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_28;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd33.Lng))))
    goto label_28;
  (Wrd28.Obj) = ((Wrd31.pObj) [10]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_27)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd10.Lng) > 0)
    goto label_18;
  (Wrd8.Obj) = ((SCHEME_OBJECT) 0);
  goto label_17;

DEFLABEL (label_18)
  (Wrd8.Obj) = (current_block [OBJECT_20_5]);

DEFLABEL (label_17)
DEFLABEL (label_25)
  Rsp = (& (Rsp [1]));
  if (! ((Wrd8.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_20;

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_20_6]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_24;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_24;
  (Wrd14.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_23)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_22;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd36.Lng))))
    goto label_22;
  (Wrd31.Obj) = ((Wrd34.pObj) [15]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_21)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_22)
  (Wrd39.Obj) = (current_block [OBJECT_20_7]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_3]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.Obj) = (current_block [OBJECT_20_2]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_3]), 2);

DEFLABEL (label_13)
  (Wrd14.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  Rsp = (& (Rsp [1]));
  goto label_19;

DEFLABEL (label_28)
  (Wrd36.Obj) = (current_block [OBJECT_20_4]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_3]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.Obj) = (current_block [OBJECT_20_2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_3]), 2);

DEFLABEL (label_11)
  (Wrd11.Obj) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_7 7
#define LABEL_21_9 9
#define LABEL_21_10 11
#define ENVIRONMENT_LABEL_21_3 24
#define DEBUGGING_LABEL_21_2 23
#define OBJECT_21_5 22
#define OBJECT_21_4 21
#define OBJECT_21_3 20
#define OBJECT_21_2 19
#define OBJECT_21_1 18
#define OBJECT_21_0 17
#define EXECUTE_CACHE_21_8 13
#define EXECUTE_CACHE_21_6 15
#define FREE_REFERENCES_LABEL_21_0 12
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_21_4);
      goto fresh_line_7;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_21_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_21_10);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fresh_line_12)
DEFLABEL (fresh_line_7)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd10.Lng) > 0)
    goto label_14;
  (Wrd8.Obj) = ((SCHEME_OBJECT) 0);
  goto label_13;

DEFLABEL (label_14)
  (Wrd8.Obj) = (current_block [OBJECT_21_1]);

DEFLABEL (label_13)
DEFLABEL (label_21)
  Rsp = (& (Rsp [1]));
  if (! ((Wrd8.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_16;

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_21_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_20;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_20;
  (Wrd14.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_19)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_18;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd36.Lng))))
    goto label_18;
  (Wrd31.Obj) = ((Wrd34.pObj) [15]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_17)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_18)
  (Wrd39.Obj) = (current_block [OBJECT_21_5]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_4]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.Obj) = (current_block [OBJECT_21_3]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_4]), 2);

DEFLABEL (label_9)
  (Wrd14.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_7 7
#define LABEL_22_9 9
#define LABEL_22_10 11
#define ENVIRONMENT_LABEL_22_3 22
#define DEBUGGING_LABEL_22_2 21
#define OBJECT_22_3 20
#define OBJECT_22_2 19
#define OBJECT_22_1 18
#define OBJECT_22_0 17
#define EXECUTE_CACHE_22_8 13
#define EXECUTE_CACHE_22_6 15
#define FREE_REFERENCES_LABEL_22_0 12
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd21;
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
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto display_5;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_22_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_22_10);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (display_10)
DEFLABEL (display_5)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_7);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_14;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_14;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_13)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_12;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd27.Lng))))
    goto label_12;
  (Wrd21.Obj) = ((Wrd25.pObj) [15]);

DEFLABEL (label_11)
  (Rsp [2]) = (Wrd21.Obj);
  (Wrd34.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd34.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_12)
  (Wrd30.Obj) = (current_block [OBJECT_22_3]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_10]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 2);

DEFLABEL (label_8)
  (Wrd21.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_22_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 2);

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_7 7
#define LABEL_23_9 9
#define LABEL_23_10 11
#define ENVIRONMENT_LABEL_23_3 22
#define DEBUGGING_LABEL_23_2 21
#define OBJECT_23_3 20
#define OBJECT_23_2 19
#define OBJECT_23_1 18
#define OBJECT_23_0 17
#define EXECUTE_CACHE_23_8 13
#define EXECUTE_CACHE_23_6 15
#define FREE_REFERENCES_LABEL_23_0 12
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd21;
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
      goto write_5;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_23_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_23_10);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_10)
DEFLABEL (write_5)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_7);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_14;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_14;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_13)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_12;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd27.Lng))))
    goto label_12;
  (Wrd21.Obj) = ((Wrd25.pObj) [15]);

DEFLABEL (label_11)
  (Rsp [2]) = (Wrd21.Obj);
  (Wrd34.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd34.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_12)
  (Wrd30.Obj) = (current_block [OBJECT_23_3]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_10]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 2);

DEFLABEL (label_8)
  (Wrd21.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_23_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 2);

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_7 7
#define LABEL_24_10 9
#define LABEL_24_11 11
#define LABEL_24_9 13
#define LABEL_24_12 15
#define LABEL_24_13 17
#define ENVIRONMENT_LABEL_24_3 30
#define DEBUGGING_LABEL_24_2 29
#define OBJECT_24_5 28
#define OBJECT_24_4 27
#define OBJECT_24_3 26
#define OBJECT_24_2 25
#define OBJECT_24_1 24
#define OBJECT_24_0 23
#define EXECUTE_CACHE_24_8 19
#define EXECUTE_CACHE_24_6 21
#define FREE_REFERENCES_LABEL_24_0 18
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_24_4);
      goto write_line_8;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_24_10);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_24_11);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_24_9);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_24_12);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_24_13);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_line_15)
DEFLABEL (write_line_8)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_23;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_23;
  (Wrd10.Obj) = ((Wrd16.pObj) [2]);

DEFLABEL (label_22)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_21;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd32.Lng))))
    goto label_21;
  (Wrd27.Obj) = ((Wrd30.pObj) [10]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_20)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_9);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_19;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_18)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_17;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd27.Lng))))
    goto label_17;
  (Wrd21.Obj) = ((Wrd25.pObj) [15]);

DEFLABEL (label_16)
  (Rsp [2]) = (Wrd21.Obj);
  (Wrd34.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd34.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_17)
  (Wrd30.Obj) = (current_block [OBJECT_24_5]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_13]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 2);

DEFLABEL (label_13)
  (Wrd21.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_24_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 2);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd35.Obj) = (current_block [OBJECT_24_4]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_11]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.Obj) = (current_block [OBJECT_24_2]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 2);

DEFLABEL (label_10)
  (Wrd10.Obj) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define ENVIRONMENT_LABEL_25_3 13
#define DEBUGGING_LABEL_25_2 12
#define OBJECT_25_0 11
#define EXECUTE_CACHE_25_7 7
#define EXECUTE_CACHE_25_6 9
#define FREE_REFERENCES_LABEL_25_0 6
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_25_4);
      goto flush_output_1;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flush_output_4)
DEFLABEL (flush_output_1)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define TAG_26_6 1
#define LABEL_26_7 7
#define LABEL_26_10 9
#define LABEL_26_9 11
#define LABEL_26_12 13
#define LABEL_26_13 15
#define LABEL_26_14 17
#define ENVIRONMENT_LABEL_26_3 28
#define DEBUGGING_LABEL_26_2 27
#define OBJECT_26_3 26
#define OBJECT_26_2 25
#define OBJECT_26_1 24
#define OBJECT_26_0 23
#define EXECUTE_CACHE_26_11 19
#define EXECUTE_CACHE_26_8 21
#define FREE_REFERENCES_LABEL_26_0 18
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_26_4);
      goto wrap_custom_operation_0_9;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto lambda_16;

    case 2:
      current_block = (Rpc - LABEL_26_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_26_10);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_26_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_26_12);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_26_13);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_26_14);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wrap_custom_operation_0_15)
DEFLABEL (wrap_custom_operation_0_9)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x102, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_26_5);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 62))
    goto label_23;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd19.Lng))))
    goto label_23;
  (Wrd13.Obj) = ((Wrd17.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_22)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_26_9);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;
  Rvl = (current_block [OBJECT_26_2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_26_12);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_21;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_21;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_20)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_19;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd27.Lng))))
    goto label_19;
  (Wrd21.Obj) = ((Wrd25.pObj) [15]);

DEFLABEL (label_18)
  (Rsp [2]) = (Wrd21.Obj);
  (Wrd34.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd34.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_19)
  (Wrd30.Obj) = (current_block [OBJECT_26_3]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_14]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_13)
  (Wrd21.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_26_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_26_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_10]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_8 5
#define LABEL_27_6 7
#define ENVIRONMENT_LABEL_27_3 17
#define DEBUGGING_LABEL_27_2 16
#define OBJECT_27_0 15
#define EXECUTE_CACHE_27_9 9
#define EXECUTE_CACHE_27_7 11
#define EXECUTE_CACHE_27_5 13
#define FREE_REFERENCES_LABEL_27_0 8
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_27_4);
      goto optional_output_port_3;

    case 1:
      current_block = (Rpc - LABEL_27_8);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_27_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (optional_output_port_6)
DEFLABEL (optional_output_port_3)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_27_0])))
    goto label_7;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_5]));

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_8)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_27_8);
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_6 5
#define LABEL_28_8 7
#define LABEL_28_5 9
#define LABEL_28_12 11
#define LABEL_28_10 13
#define LABEL_28_14 15
#define LABEL_28_16 17
#define LABEL_28_18 19
#define LABEL_28_19 21
#define LABEL_28_20 23
#define LABEL_28_21 25
#define LABEL_28_22 27
#define LABEL_28_23 29
#define LABEL_28_25 31
#define LABEL_28_37 33
#define LABEL_28_38 35
#define LABEL_28_39 37
#define LABEL_28_40 39
#define LABEL_28_41 41
#define LABEL_28_31 43
#define LABEL_28_32 45
#define LABEL_28_46 47
#define LABEL_28_47 49
#define LABEL_28_48 51
#define LABEL_28_29 53
#define LABEL_28_33 55
#define TAG_28_34 26
#define LABEL_28_49 57
#define LABEL_28_30 59
#define LABEL_28_35 61
#define LABEL_28_36 63
#define LABEL_28_51 65
#define LABEL_28_52 67
#define LABEL_28_53 69
#define LABEL_28_54 71
#define LABEL_28_55 73
#define LABEL_28_56 75
#define LABEL_28_58 77
#define LABEL_28_59 79
#define LABEL_28_27 81
#define LABEL_28_28 83
#define LABEL_28_64 85
#define LABEL_28_42 87
#define LABEL_28_44 89
#define LABEL_28_50 91
#define LABEL_28_68 93
#define LABEL_28_69 95
#define LABEL_28_70 97
#define LABEL_28_71 99
#define LABEL_28_72 101
#define LABEL_28_73 103
#define LABEL_28_74 105
#define LABEL_28_60 107
#define TAG_28_61 52
#define LABEL_28_63 109
#define LABEL_28_65 111
#define LABEL_28_66 113
#define TAG_28_67 55
#define LABEL_28_79 115
#define LABEL_28_80 117
#define LABEL_28_81 119
#define LABEL_28_82 121
#define LABEL_28_83 123
#define LABEL_28_84 125
#define LABEL_28_85 127
#define LABEL_28_86 129
#define LABEL_28_87 131
#define LABEL_28_88 133
#define LABEL_28_90 135
#define LABEL_28_92 137
#define LABEL_28_75 139
#define LABEL_28_76 141
#define LABEL_28_98 143
#define LABEL_28_99 145
#define LABEL_28_100 147
#define LABEL_28_101 149
#define LABEL_28_77 151
#define LABEL_28_78 153
#define LABEL_28_89 155
#define LABEL_28_106 157
#define LABEL_28_107 159
#define LABEL_28_94 161
#define LABEL_28_95 163
#define LABEL_28_111 165
#define LABEL_28_113 167
#define LABEL_28_97 169
#define LABEL_28_102 171
#define LABEL_28_91 173
#define LABEL_28_117 175
#define LABEL_28_118 177
#define LABEL_28_105 179
#define LABEL_28_108 181
#define LABEL_28_120 183
#define LABEL_28_109 185
#define LABEL_28_121 187
#define LABEL_28_112 189
#define LABEL_28_114 191
#define LABEL_28_115 193
#define LABEL_28_119 195
#define LABEL_28_122 197
#define LABEL_28_123 199
#define LABEL_28_124 201
#define LABEL_28_125 203
#define LABEL_28_126 205
#define LABEL_28_127 207
#define LABEL_28_128 209
#define LABEL_28_129 211
#define ENVIRONMENT_LABEL_28_3 269
#define DEBUGGING_LABEL_28_2 268
#define OBJECT_28_13 267
#define OBJECT_28_12 266
#define OBJECT_28_11 265
#define OBJECT_28_10 264
#define OBJECT_28_9 263
#define OBJECT_28_8 262
#define OBJECT_28_7 261
#define OBJECT_28_6 260
#define OBJECT_28_5 259
#define OBJECT_28_4 258
#define OBJECT_28_3 257
#define OBJECT_28_2 256
#define OBJECT_28_1 255
#define OBJECT_28_0 254
#define EXECUTE_CACHE_28_116 213
#define EXECUTE_CACHE_28_110 215
#define EXECUTE_CACHE_28_104 217
#define EXECUTE_CACHE_28_103 219
#define EXECUTE_CACHE_28_96 221
#define EXECUTE_CACHE_28_93 223
#define EXECUTE_CACHE_28_62 225
#define EXECUTE_CACHE_28_57 227
#define EXECUTE_CACHE_28_45 229
#define EXECUTE_CACHE_28_43 231
#define EXECUTE_CACHE_28_26 233
#define EXECUTE_CACHE_28_24 235
#define EXECUTE_CACHE_28_17 237
#define EXECUTE_CACHE_28_15 239
#define EXECUTE_CACHE_28_13 241
#define EXECUTE_CACHE_28_11 243
#define EXECUTE_CACHE_28_9 245
#define EXECUTE_CACHE_28_7 247
#define FREE_REFERENCE_28_3 250
#define FREE_REFERENCE_28_2 251
#define FREE_REFERENCE_28_1 252
#define FREE_REFERENCE_28_0 253
#define FREE_REFERENCES_LABEL_28_0 212
#define NUMBER_OF_LINKER_SECTIONS_28_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd74;
  machine_word Wrd61;
  machine_word Wrd17;
  machine_word Wrd80;
  machine_word Wrd84;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd76;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd65;
  machine_word Wrd91;
  machine_word Wrd89;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd28;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd6;
  machine_word Wrd42;
  machine_word Wrd73;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd64;
  machine_word Wrd60;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd79;
  machine_word Wrd77;
  machine_word Wrd75;
  machine_word Wrd5;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_28_4);
      goto write_strings_in_columns_142;

    case 1:
      current_block = (Rpc - LABEL_28_6);
      goto label_144;

    case 2:
      current_block = (Rpc - LABEL_28_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_28_12);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_28_10);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_28_14);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_28_16);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_28_18);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_28_19);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_28_20);
      goto label_145;

    case 11:
      current_block = (Rpc - LABEL_28_21);
      goto label_146;

    case 12:
      current_block = (Rpc - LABEL_28_22);
      goto label_147;

    case 13:
      current_block = (Rpc - LABEL_28_23);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_28_25);
      goto continuation_8;

    case 15:
      current_block = (Rpc - LABEL_28_37);
      goto label_148;

    case 16:
      current_block = (Rpc - LABEL_28_38);
      goto label_149;

    case 17:
      current_block = (Rpc - LABEL_28_39);
      goto label_150;

    case 18:
      current_block = (Rpc - LABEL_28_40);
      goto label_151;

    case 19:
      current_block = (Rpc - LABEL_28_41);
      goto label_152;

    case 20:
      current_block = (Rpc - LABEL_28_31);
      goto lambda_67;

    case 21:
      current_block = (Rpc - LABEL_28_32);
      goto lambda_61;

    case 22:
      current_block = (Rpc - LABEL_28_46);
      goto continuation_95;

    case 23:
      current_block = (Rpc - LABEL_28_47);
      goto continuation_102;

    case 24:
      current_block = (Rpc - LABEL_28_48);
      goto label_160;

    case 25:
      current_block = (Rpc - LABEL_28_29);
      goto lambda_70;

    case 26:
      current_block = (Rpc - LABEL_28_33);
      goto lambda_194;

    case 27:
      current_block = (Rpc - LABEL_28_49);
      goto continuation_104;

    case 28:
      current_block = (Rpc - LABEL_28_30);
      goto lambda_69;

    case 29:
      current_block = (Rpc - LABEL_28_35);
      goto lambda_31;

    case 30:
      current_block = (Rpc - LABEL_28_36);
      goto continuation_18;

    case 31:
      current_block = (Rpc - LABEL_28_51);
      goto loop_29;

    case 32:
      current_block = (Rpc - LABEL_28_52);
      goto label_153;

    case 33:
      current_block = (Rpc - LABEL_28_53);
      goto label_154;

    case 34:
      current_block = (Rpc - LABEL_28_54);
      goto label_155;

    case 35:
      current_block = (Rpc - LABEL_28_55);
      goto label_156;

    case 36:
      current_block = (Rpc - LABEL_28_56);
      goto label_157;

    case 37:
      current_block = (Rpc - LABEL_28_58);
      goto label_158;

    case 38:
      current_block = (Rpc - LABEL_28_59);
      goto label_159;

    case 39:
      current_block = (Rpc - LABEL_28_27);
      goto lambda_87;

    case 40:
      current_block = (Rpc - LABEL_28_28);
      goto lambda_82;

    case 41:
      current_block = (Rpc - LABEL_28_64);
      goto do_it_109;

    case 42:
      current_block = (Rpc - LABEL_28_42);
      goto continuation_62;

    case 43:
      current_block = (Rpc - LABEL_28_44);
      goto continuation_33;

    case 44:
      current_block = (Rpc - LABEL_28_50);
      goto continuation_96;

    case 45:
      current_block = (Rpc - LABEL_28_68);
      goto label_161;

    case 46:
      current_block = (Rpc - LABEL_28_69);
      goto label_162;

    case 47:
      current_block = (Rpc - LABEL_28_70);
      goto label_163;

    case 48:
      current_block = (Rpc - LABEL_28_71);
      goto per_row_134;

    case 49:
      current_block = (Rpc - LABEL_28_72);
      goto label_164;

    case 50:
      current_block = (Rpc - LABEL_28_73);
      goto loop_107;

    case 51:
      current_block = (Rpc - LABEL_28_74);
      goto label_165;

    case 52:
      current_block = (Rpc - LABEL_28_60);
      goto lambda_202;

    case 53:
      current_block = (Rpc - LABEL_28_63);
      goto continuation_71;

    case 54:
      current_block = (Rpc - LABEL_28_65);
      goto continuation_65;

    case 55:
      current_block = (Rpc - LABEL_28_66);
      goto lambda_205;

    case 56:
      current_block = (Rpc - LABEL_28_79);
      goto continuation_45;

    case 57:
      current_block = (Rpc - LABEL_28_80);
      goto do_loop_47;

    case 58:
      current_block = (Rpc - LABEL_28_81);
      goto label_166;

    case 59:
      current_block = (Rpc - LABEL_28_82);
      goto label_167;

    case 60:
      current_block = (Rpc - LABEL_28_83);
      goto label_171;

    case 61:
      current_block = (Rpc - LABEL_28_84);
      goto label_168;

    case 62:
      current_block = (Rpc - LABEL_28_85);
      goto label_169;

    case 63:
      current_block = (Rpc - LABEL_28_86);
      goto label_170;

    case 64:
      current_block = (Rpc - LABEL_28_87);
      goto per_col_132;

    case 65:
      current_block = (Rpc - LABEL_28_88);
      goto label_172;

    case 66:
      current_block = (Rpc - LABEL_28_90);
      goto do_loop_58;

    case 67:
      current_block = (Rpc - LABEL_28_92);
      goto label_176;

    case 68:
      current_block = (Rpc - LABEL_28_75);
      goto continuation_91;

    case 69:
      current_block = (Rpc - LABEL_28_76);
      goto continuation_83;

    case 70:
      current_block = (Rpc - LABEL_28_98);
      goto loop_80;

    case 71:
      current_block = (Rpc - LABEL_28_99);
      goto label_173;

    case 72:
      current_block = (Rpc - LABEL_28_100);
      goto label_174;

    case 73:
      current_block = (Rpc - LABEL_28_101);
      goto label_175;

    case 74:
      current_block = (Rpc - LABEL_28_77);
      goto continuation_66;

    case 75:
      current_block = (Rpc - LABEL_28_78);
      goto continuation_63;

    case 76:
      current_block = (Rpc - LABEL_28_89);
      goto continuation_115;

    case 77:
      current_block = (Rpc - LABEL_28_106);
      goto write_spaces_140;

    case 78:
      current_block = (Rpc - LABEL_28_107);
      goto label_177;

    case 79:
      current_block = (Rpc - LABEL_28_94);
      goto continuation_94;

    case 80:
      current_block = (Rpc - LABEL_28_95);
      goto lambda_93;

    case 81:
      current_block = (Rpc - LABEL_28_111);
      goto label_178;

    case 82:
      current_block = (Rpc - LABEL_28_113);
      goto label_179;

    case 83:
      current_block = (Rpc - LABEL_28_97);
      goto continuation_84;

    case 84:
      current_block = (Rpc - LABEL_28_102);
      goto continuation_78;

    case 85:
      current_block = (Rpc - LABEL_28_91);
      goto continuation_54;

    case 86:
      current_block = (Rpc - LABEL_28_117);
      goto label_181;

    case 87:
      current_block = (Rpc - LABEL_28_118);
      goto label_180;

    case 88:
      current_block = (Rpc - LABEL_28_105);
      goto continuation_116;

    case 89:
      current_block = (Rpc - LABEL_28_108);
      goto continuation_120;

    case 90:
      current_block = (Rpc - LABEL_28_120);
      goto label_182;

    case 91:
      current_block = (Rpc - LABEL_28_109);
      goto continuation_138;

    case 92:
      current_block = (Rpc - LABEL_28_121);
      goto label_183;

    case 93:
      current_block = (Rpc - LABEL_28_112);
      goto continuation_92;

    case 94:
      current_block = (Rpc - LABEL_28_114);
      goto continuation_85;

    case 95:
      current_block = (Rpc - LABEL_28_115);
      goto continuation_76;

    case 96:
      current_block = (Rpc - LABEL_28_119);
      goto continuation_122;

    case 97:
      current_block = (Rpc - LABEL_28_122);
      goto label_184;

    case 98:
      current_block = (Rpc - LABEL_28_123);
      goto label_191;

    case 99:
      current_block = (Rpc - LABEL_28_124);
      goto label_185;

    case 100:
      current_block = (Rpc - LABEL_28_125);
      goto label_186;

    case 101:
      current_block = (Rpc - LABEL_28_126);
      goto label_187;

    case 102:
      current_block = (Rpc - LABEL_28_127);
      goto label_188;

    case 103:
      current_block = (Rpc - LABEL_28_128);
      goto label_189;

    case 104:
      current_block = (Rpc - LABEL_28_129);
      goto label_190;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_strings_in_columns_193)
DEFLABEL (write_strings_in_columns_142)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_236;
  Wrd8 = Wrd12;

DEFLABEL (label_235)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_234;

DEFLABEL (label_233)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_28_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_232;

DEFLABEL (label_231)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_28_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_28_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_28_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_28_19);
  (Wrd10.Obj) = (Rsp [6]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_230;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_229)
  (Wrd21.Obj) = (Rsp [6]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 30))
    goto label_228;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (Wrd20.Obj) = (MAKE_OBJECT (26, (Wrd19.uLng)));
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_227)
  (Wrd32.Obj) = (Rsp [6]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 30))
    goto label_226;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (Wrd31.Obj) = (MAKE_OBJECT (26, (Wrd30.uLng)));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_225)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_23]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_24]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_28_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_26]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_28_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_214;
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_27]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_28]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_29]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_30]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd82.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd82.Obj);
  goto do_it_109;

DEFLABEL (label_214)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_31]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_33])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [10]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_35]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_36]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_28_3]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (Rsp [11]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_224;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [0]);

DEFLABEL (label_223)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd34.uLng) == 30))
    goto label_222;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [1]);
  (Wrd30.Obj) = (MAKE_OBJECT (26, (Wrd33.uLng)));

DEFLABEL (label_221)
  (Wrd45.Obj) = (Rsp [10]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_220;
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd47.uLng) == 26))
    goto label_220;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd48.Lng) = ((Wrd50.Lng) + (Wrd51.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd48.Lng)))
    goto label_220;
  (Wrd44.Obj) = (LONG_TO_FIXNUM (Wrd48.Lng));

DEFLABEL (label_219)
  (Wrd57.Obj) = (Rsp [8]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 26))
    goto label_218;
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd59.uLng) == 26))
    goto label_218;
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  (Wrd60.Lng) = ((Wrd62.Lng) + (Wrd63.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd60.Lng)))
    goto label_218;
  (Wrd64.Obj) = (LONG_TO_FIXNUM (Wrd60.Lng));
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_217)
  (Wrd68.Obj) = (Rsp [12]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_216;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [1]);
  (* (--Rsp)) = (Wrd67.Obj);

DEFLABEL (label_215)
  goto loop_29;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_28_36);
  (* (--Rsp)) = Rvl;
  goto do_it_109;

DEFLABEL (label_216)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_41]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_5]), 1);

DEFLABEL (label_152)
  (* (--Rsp)) = Rvl;
  goto label_215;

DEFLABEL (label_218)
  (Wrd52.Obj) = (Rsp [8]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_40]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_151)
  (* (--Rsp)) = Rvl;
  goto label_217;

DEFLABEL (label_220)
  (Wrd39.Obj) = (Rsp [10]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_39]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_150)
  (Wrd44.Obj) = Rvl;
  goto label_219;

DEFLABEL (label_222)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_38]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 1);

DEFLABEL (label_149)
  (Wrd30.Obj) = Rvl;
  goto label_221;

DEFLABEL (label_224)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_37]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_4]), 1);

DEFLABEL (label_148)
  (Wrd21.Obj) = Rvl;
  goto label_223;

DEFLABEL (label_226)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_22]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 1);

DEFLABEL (label_147)
  (* (--Rsp)) = Rvl;
  goto label_225;

DEFLABEL (label_228)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_21]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 1);

DEFLABEL (label_146)
  (* (--Rsp)) = Rvl;
  goto label_227;

DEFLABEL (label_230)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_20]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 1);

DEFLABEL (label_145)
  (* (--Rsp)) = Rvl;
  goto label_229;

DEFLABEL (label_232)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_28_12);
  goto label_231;

DEFLABEL (label_234)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_28_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_28_8);
  goto label_233;

DEFLABEL (label_236)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_6])), (Wrd9.pObj));

DEFLABEL (label_144)
  (Wrd8.Obj) = Rvl;
  goto label_235;

DEFLABEL (lambda_195)
DEFLABEL (lambda_67)
  INTERRUPT_CHECK (26, LABEL_28_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_43]));

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_28_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_67);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_66])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  (Wrd14.Obj) = (Rsp [7]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_62]));

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_28_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_43]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_28_77);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [6]) = (Wrd5.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_104]));

DEFLABEL (lambda_196)
DEFLABEL (lambda_61)
  INTERRUPT_CHECK (26, LABEL_28_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_45]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_28_44);
  (Rsp [0]) = Rvl;
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [14]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto do_loop_47;

DEFLABEL (lambda_194)
  CLOSURE_HEADER (LABEL_28_33);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd12.uLng) == 26)
    goto label_238;

DEFLABEL (label_237)
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_238)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_237;
  if ((Wrd8.Obj) == (Wrd5.Obj))
    goto label_240;
  (Wrd10.Obj) = (current_block [OBJECT_28_8]);
  goto label_239;

DEFLABEL (label_240)
  (Wrd10.Obj) = (current_block [OBJECT_28_7]);

DEFLABEL (label_239)
DEFLABEL (label_252)
  Rsp = (& (Rsp [3]));
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_242;

DEFLABEL (label_241)
  (Wrd25.Obj) = (Rsp [1]);
  (Rsp [11]) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [0]);
  (Rsp [12]) = (Wrd26.Obj);
  Rsp = (& (Rsp [11]));
  goto per_row_134;

DEFLABEL (label_242)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_47]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_50]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_26]));

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_28_50);
  (Wrd5.Obj) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_251;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd12.Lng) = ((Wrd13.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_251;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_250)
  (Wrd20.Obj) = (Rsp [12]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_249;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_249;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  if (multiply_with_overflow ((Wrd25.Lng), (Wrd26.Lng), (& (Wrd23.Lng))))
    goto label_249;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));

DEFLABEL (label_248)
  (Wrd30.Obj) = (Rsp [13]);
  (Wrd31.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (Wrd38.Obj) = (Rsp [11]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_1]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_247;
  Wrd39 = Wrd43;

DEFLABEL (label_246)
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_9]), 2);

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_28_47);
  (Wrd29.Obj) = Rvl;
  (Wrd30.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd30.uLng) == 26))
    goto label_245;
  (Wrd31.Obj) = (Rsp [9]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_245;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if ((Wrd44.Lng) < (Wrd46.Lng))
    goto label_241;

DEFLABEL (label_244)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_49]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd43.Obj);
  goto pop_return;

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_28_49);
  (Wrd11.Obj) = Rvl;

DEFLABEL (label_243)
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_107;

DEFLABEL (label_245)
  (Wrd34.Obj) = (Rsp [9]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_48]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_160)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_244;
  goto label_241;

DEFLABEL (label_247)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_70])), (Wrd40.pObj));

DEFLABEL (label_163)
  (Wrd39.Obj) = Rvl;
  goto label_246;

DEFLABEL (label_249)
  (Wrd14.Obj) = (Rsp [12]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_69]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_162)
  (Wrd19.Obj) = Rvl;
  goto label_248;

DEFLABEL (label_251)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_68]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_161)
  (Wrd10.Obj) = Rvl;
  goto label_250;

DEFLABEL (lambda_199)
DEFLABEL (lambda_31)
  INTERRUPT_CHECK (26, LABEL_28_35);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 26)
    goto label_254;

DEFLABEL (label_253)
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_254)
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd10.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd8.Lng)))
    goto label_253;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));

DEFLABEL (label_255)
  Rsp = (& (Rsp [2]));
  goto label_243;

DEFLABEL (loop_200)
DEFLABEL (loop_29)
  INTERRUPT_CHECK (26, LABEL_28_51);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_256;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [16]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_57]));

DEFLABEL (label_256)
  if (! ((Wrd6.uLng) == 1))
    goto label_271;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_270)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd23.uLng) == 30))
    goto label_269;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (Wrd19.Obj) = (MAKE_OBJECT (26, (Wrd22.uLng)));

DEFLABEL (label_268)
  (Wrd34.Obj) = (Rsp [11]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_267;
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_267;
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd37.Lng) = ((Wrd39.Lng) + (Wrd40.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd37.Lng)))
    goto label_267;
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd37.Lng));

DEFLABEL (label_266)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 26))
    goto label_265;
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd48.uLng) == 26))
    goto label_265;
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd49.Lng) = ((Wrd51.Lng) + (Wrd52.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd49.Lng)))
    goto label_265;
  (Wrd53.Obj) = (LONG_TO_FIXNUM (Wrd49.Lng));
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_264)
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 26))
    goto label_263;
  (Wrd56.Obj) = (Rsp [10]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 26))
    goto label_263;
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  (Wrd91.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if ((Wrd89.Lng) < (Wrd91.Lng))
    goto label_258;

DEFLABEL (label_257)
  (Wrd64.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd64.Obj);
  (Wrd65.Obj) = (Rsp [17]);
  (Rsp [3]) = (Wrd65.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_57]));

DEFLABEL (label_258)
  (Wrd70.Obj) = (Rsp [1]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 1))
    goto label_262;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd67.Obj) = ((Wrd69.pObj) [1]);

DEFLABEL (label_261)
  (Rsp [1]) = (Wrd67.Obj);
  (Wrd76.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd76.Obj);
  (Wrd82.Obj) = (Rsp [3]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 26))
    goto label_260;
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd82.Obj));
  (Wrd84.Lng) = ((Wrd86.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd84.Lng)))
    goto label_260;
  (Wrd81.Obj) = (LONG_TO_FIXNUM (Wrd84.Lng));

DEFLABEL (label_259)
  (Rsp [3]) = (Wrd81.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_29;

DEFLABEL (label_260)
  (Wrd77.Obj) = (Rsp [3]);
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_59]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_159)
  (Wrd81.Obj) = Rvl;
  goto label_259;

DEFLABEL (label_262)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_58]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_5]), 1);

DEFLABEL (label_158)
  (Wrd67.Obj) = Rvl;
  goto label_261;

DEFLABEL (label_263)
  (Wrd58.Obj) = (Rsp [0]);
  (Wrd59.Obj) = (Rsp [10]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_56]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_157)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_257;
  goto label_258;

DEFLABEL (label_265)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_55]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_156)
  (* (--Rsp)) = Rvl;
  goto label_264;

DEFLABEL (label_267)
  (Wrd28.Obj) = (Rsp [11]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_54]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_155)
  (Wrd33.Obj) = Rvl;
  goto label_266;

DEFLABEL (label_269)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_53]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 1);

DEFLABEL (label_154)
  (Wrd19.Obj) = Rvl;
  goto label_268;

DEFLABEL (label_271)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_52]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_4]), 1);

DEFLABEL (label_153)
  (Wrd10.Obj) = Rvl;
  goto label_270;

DEFLABEL (lambda_201)
DEFLABEL (lambda_87)
  INTERRUPT_CHECK (26, LABEL_28_27);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_61);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_60])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [6]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [5]) = (Wrd6.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  (Rsp [6]) = (Wrd14.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_62]));

DEFLABEL (lambda_203)
DEFLABEL (lambda_82)
  INTERRUPT_CHECK (26, LABEL_28_28);
  (Wrd5.Obj) = (current_block [OBJECT_28_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_63]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [15]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_26]));

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_28_63);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [15]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_80;

DEFLABEL (lambda_197)
DEFLABEL (lambda_70)
  INTERRUPT_CHECK (26, LABEL_28_29);
  Rsp = (& (Rsp [2]));
  goto label_242;

DEFLABEL (lambda_198)
DEFLABEL (lambda_69)
  INTERRUPT_CHECK (26, LABEL_28_30);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 26)
    goto label_273;

DEFLABEL (label_272)
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_273)
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd16.Lng) = ((Wrd18.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd16.Lng)))
    goto label_272;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  goto label_255;

DEFLABEL (do_it_204)
DEFLABEL (do_it_109)
  INTERRUPT_CHECK (26, LABEL_28_64);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_107;

DEFLABEL (per_row_206)
DEFLABEL (per_row_134)
  INTERRUPT_CHECK (26, LABEL_28_71);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_276;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_275)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd14.uLng) == 1)
    goto label_274;
  Rvl = (current_block [OBJECT_28_11]);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_274)
  (Wrd17.Obj) = (current_block [OBJECT_28_10]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  goto per_col_132;

DEFLABEL (label_276)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_72]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_4]), 1);

DEFLABEL (label_164)
  (Wrd5.Obj) = Rvl;
  goto label_275;

DEFLABEL (loop_207)
DEFLABEL (loop_107)
  INTERRUPT_CHECK (26, LABEL_28_73);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_280;
  (Wrd7.Obj) = (Rsp [6]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_280;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd23.Lng) > (Wrd25.Lng)))
    goto label_278;

DEFLABEL (label_277)
  (Wrd20.Obj) = (Rsp [5]);
  (Rsp [10]) = (Wrd20.Obj);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_278)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_75]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd19.Obj);
  goto pop_return;

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_28_75);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_279)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_94]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_95]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_96]));

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_28_94);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto pop_return;

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_28_46);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_242;
  goto label_241;

DEFLABEL (label_280)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [6]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_74]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_165)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_278;
  goto label_277;

DEFLABEL (lambda_202)
  CLOSURE_HEADER (LABEL_28_60);

DEFLABEL (lambda_86)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_76]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_43]));

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_28_76);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_97]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_43]));

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_28_97);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_114]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_43]));

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_28_114);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_104]));

DEFLABEL (lambda_205)
  CLOSURE_HEADER (LABEL_28_66);

DEFLABEL (lambda_64)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_43]));

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_28_78);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_43]));

DEFLABEL (do_loop_208)
DEFLABEL (do_loop_47)
  INTERRUPT_CHECK (26, LABEL_28_80);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_282;
  (Wrd7.Obj) = (current_block [OBJECT_28_7]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_281;

DEFLABEL (label_282)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_281)
DEFLABEL (label_298)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_283;
  Rsp = (& (Rsp [3]));
  (Wrd11.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto do_loop_58;

DEFLABEL (label_283)
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_297;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_296)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_295;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [0]);

DEFLABEL (label_294)
  (Wrd30.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd70.Obj) = (Rsp [2]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 1))
    goto label_293;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  ((Wrd69.pObj) [0]) = (Wrd31.Obj);

DEFLABEL (label_292)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_291;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_290)
  (Rsp [1]) = (Wrd34.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_79]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd49.Obj) = (Rsp [3]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_289;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_288)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd55.uLng) == 1)
    goto label_286;
  (Wrd57.Obj) = (Rsp [4]);

DEFLABEL (label_285)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_284)
  (Rsp [2]) = (Wrd57.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_47;

DEFLABEL (label_286)
  (Wrd62.Obj) = (Rsp [3]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 1))
    goto label_287;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd57.Obj) = ((Wrd61.pObj) [1]);
  goto label_285;

DEFLABEL (label_287)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_86]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_5]), 1);

DEFLABEL (label_170)
  (Wrd57.Obj) = Rvl;
  goto label_285;

DEFLABEL (label_289)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_85]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_5]), 1);

DEFLABEL (label_169)
  (Wrd46.Obj) = Rvl;
  goto label_288;

DEFLABEL (label_291)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_84]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_5]), 1);

DEFLABEL (label_168)
  (Wrd34.Obj) = Rvl;
  goto label_290;

DEFLABEL (label_293)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_83]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_12]), 2);

DEFLABEL (label_171)
  goto label_292;

DEFLABEL (label_295)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_82]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_4]), 1);

DEFLABEL (label_167)
  (Wrd21.Obj) = Rvl;
  goto label_294;

DEFLABEL (label_297)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_81]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_4]), 1);

DEFLABEL (label_166)
  (* (--Rsp)) = Rvl;
  goto label_296;

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_28_79);
  (Wrd57.Obj) = Rvl;
  goto label_284;

DEFLABEL (per_col_209)
DEFLABEL (per_col_132)
  INTERRUPT_CHECK (26, LABEL_28_87);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_299;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_89]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [14]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_43]));

DEFLABEL (continuation_115)
  INTERRUPT_CHECK (27, LABEL_28_89);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_105]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_104]));

DEFLABEL (continuation_116)
  INTERRUPT_CHECK (27, LABEL_28_105);
  Rsp = (& (Rsp [4]));
  goto per_row_134;

DEFLABEL (label_299)
  if (! ((Wrd6.uLng) == 1))
    goto label_302;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_301)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 1)
    goto label_300;
  Rvl = (current_block [OBJECT_28_11]);
  Rsp = (& (Rsp [14]));
  goto pop_return;

DEFLABEL (label_300)
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  goto write_spaces_140;

DEFLABEL (label_302)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_88]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_4]), 1);

DEFLABEL (label_172)
  (* (--Rsp)) = Rvl;
  goto label_301;

DEFLABEL (loop_211)
DEFLABEL (loop_80)
  INTERRUPT_CHECK (26, LABEL_28_98);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_312;
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_312;
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd51.Lng) > (Wrd53.Lng))
    goto label_309;

DEFLABEL (label_308)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_307;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if ((Wrd29.Lng) > 0)
    goto label_304;

DEFLABEL (label_305)
  (Wrd22.Obj) = (Rsp [2]);
  goto label_303;

DEFLABEL (label_304)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));

DEFLABEL (label_303)
DEFLABEL (label_306)
  (Rsp [3]) = (Wrd22.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_93]));

DEFLABEL (label_307)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_100]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_174)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_305;
  goto label_304;

DEFLABEL (label_309)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 26))
    goto label_311;
  (Wrd38.Obj) = (Rsp [3]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_311;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd40.Lng) = ((Wrd42.Lng) - (Wrd44.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd40.Lng)))
    goto label_311;
  (Wrd35.Obj) = (LONG_TO_FIXNUM (Wrd40.Lng));

DEFLABEL (label_310)
  (Rsp [1]) = (Wrd35.Obj);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_102]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_103]));

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_28_102);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_115]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_116]));

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_28_115);
  (Rsp [0]) = Rvl;
  goto loop_80;

DEFLABEL (label_311)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_101]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_175)
  (Wrd35.Obj) = Rvl;
  goto label_310;

DEFLABEL (label_312)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_99]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_173)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_308;
  goto label_309;

DEFLABEL (do_loop_210)
DEFLABEL (do_loop_58)
  INTERRUPT_CHECK (26, LABEL_28_90);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 1)
    goto label_314;
  (Wrd13.Obj) = (current_block [OBJECT_28_7]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto label_313;

DEFLABEL (label_314)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_313)
DEFLABEL (label_322)
  (Wrd14.Obj) = (Rsp [0]);
  if ((Wrd14.Obj) == ((SCHEME_OBJECT) 0))
    goto label_315;
  Rsp = (& (Rsp [2]));
  (Wrd18.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd18.Obj);
  goto label_279;

DEFLABEL (label_315)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_91]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_321;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_320)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_93]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_28_91);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_319;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  ((Wrd17.pObj) [0]) = Rvl;

DEFLABEL (label_318)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_317;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_316)
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_58;

DEFLABEL (label_317)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_118]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_5]), 1);

DEFLABEL (label_180)
  (Wrd6.Obj) = Rvl;
  goto label_316;

DEFLABEL (label_319)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_117]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_12]), 2);

DEFLABEL (label_181)
  goto label_318;

DEFLABEL (label_321)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_92]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_4]), 1);

DEFLABEL (label_176)
  (* (--Rsp)) = Rvl;
  goto label_320;

DEFLABEL (write_spaces_212)
DEFLABEL (write_spaces_140)
  INTERRUPT_CHECK (26, LABEL_28_106);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_345;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd24.Lng) > 0)
    goto label_342;

DEFLABEL (label_341)
  Rsp = (& (Rsp [1]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_108]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_43]));

DEFLABEL (continuation_120)
  INTERRUPT_CHECK (27, LABEL_28_108);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_119]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_340;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_339)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_43]));

DEFLABEL (continuation_122)
  INTERRUPT_CHECK (27, LABEL_28_119);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_338;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_337)
  (Wrd75.Obj) = (Rsp [1]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 1))
    goto label_336;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  ((Wrd74.pObj) [0]) = (Wrd5.Obj);

DEFLABEL (label_335)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_334;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_333)
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd23.Obj) = (Rsp [12]);
  (Rsp [3]) = (Wrd23.Obj);
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_332;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [0]);

DEFLABEL (label_331)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd37.uLng) == 30))
    goto label_330;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [1]);
  (Wrd36.Obj) = (MAKE_OBJECT (26, (Wrd35.uLng)));
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_329)
  (Wrd45.Obj) = (Rsp [3]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_328;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd42.Obj) = ((Wrd44.pObj) [0]);

DEFLABEL (label_327)
  (Wrd51.Obj) = (* (Rsp++));
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd58.uLng) == 26))
    goto label_326;
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd59.uLng) == 26))
    goto label_326;
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd60.Lng) = ((Wrd61.Lng) - (Wrd62.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd60.Lng)))
    goto label_326;
  (Wrd57.Obj) = (LONG_TO_FIXNUM (Wrd60.Lng));

DEFLABEL (label_325)
  (Rsp [4]) = (Wrd57.Obj);
  (Wrd66.Obj) = (Rsp [2]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_324;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd63.Obj) = ((Wrd65.pObj) [1]);

DEFLABEL (label_323)
  (Rsp [2]) = (Wrd63.Obj);
  Rsp = (& (Rsp [1]));
  goto per_col_132;

DEFLABEL (label_324)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_129]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_5]), 1);

DEFLABEL (label_190)
  (Wrd63.Obj) = Rvl;
  goto label_323;

DEFLABEL (label_326)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_128]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_189)
  (Wrd57.Obj) = Rvl;
  goto label_325;

DEFLABEL (label_328)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_127]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_4]), 1);

DEFLABEL (label_188)
  (Wrd42.Obj) = Rvl;
  goto label_327;

DEFLABEL (label_330)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_126]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 1);

DEFLABEL (label_187)
  (* (--Rsp)) = Rvl;
  goto label_329;

DEFLABEL (label_332)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_125]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_4]), 1);

DEFLABEL (label_186)
  (Wrd24.Obj) = Rvl;
  goto label_331;

DEFLABEL (label_334)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_124]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_5]), 1);

DEFLABEL (label_185)
  (Wrd14.Obj) = Rvl;
  goto label_333;

DEFLABEL (label_336)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_123]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_12]), 2);

DEFLABEL (label_191)
  goto label_335;

DEFLABEL (label_338)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_122]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_5]), 1);

DEFLABEL (label_184)
  (Wrd5.Obj) = Rvl;
  goto label_337;

DEFLABEL (label_340)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_120]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_4]), 1);

DEFLABEL (label_182)
  (* (--Rsp)) = Rvl;
  goto label_339;

DEFLABEL (label_342)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_109]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_28_13]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_110]));

DEFLABEL (continuation_138)
  INTERRUPT_CHECK (27, LABEL_28_109);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_344;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_344;
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_343)
  (Rsp [0]) = (Wrd9.Obj);
  goto write_spaces_140;

DEFLABEL (label_344)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_121]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_183)
  (Wrd9.Obj) = Rvl;
  goto label_343;

DEFLABEL (label_345)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_107]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_177)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_341;
  goto label_342;

DEFLABEL (lambda_213)
DEFLABEL (lambda_93)
  INTERRUPT_CHECK (26, LABEL_28_95);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_349;
  Wrd5 = Wrd9;

DEFLABEL (label_348)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_112]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_3]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_347;
  Wrd15 = Wrd19;

DEFLABEL (label_346)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_96]));

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_28_112);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_9]), 2);

DEFLABEL (label_347)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_113])), (Wrd16.pObj));

DEFLABEL (label_179)
  (Wrd15.Obj) = Rvl;
  goto label_346;

DEFLABEL (label_349)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_111])), (Wrd6.pObj));

DEFLABEL (label_178)
  (Wrd5.Obj) = Rvl;
  goto label_348;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define TAG_29_6 1
#define LABEL_29_8 7
#define LABEL_29_9 9
#define LABEL_29_12 11
#define LABEL_29_11 13
#define ENVIRONMENT_LABEL_29_3 25
#define DEBUGGING_LABEL_29_2 24
#define OBJECT_29_0 23
#define EXECUTE_CACHE_29_13 15
#define EXECUTE_CACHE_29_10 17
#define EXECUTE_CACHE_29_7 19
#define FREE_REFERENCE_29_0 22
#define FREE_REFERENCES_LABEL_29_0 14
#define NUMBER_OF_LINKER_SECTIONS_29_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_29_4);
      goto call_with_truncated_output_port_5;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_29_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_29_9);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_29_12);
      goto label_7;

    case 5:
      current_block = (Rpc - LABEL_29_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_with_truncated_output_port_9)
DEFLABEL (call_with_truncated_output_port_5)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_5])));
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
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_29_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_9);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_12;
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_29_11);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_12])), (Wrd6.pObj));

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_0
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
output_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto tstate_port_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tstate_port_3)
DEFLABEL (tstate_port_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
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
output_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto tstate_limit_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tstate_limit_3)
DEFLABEL (tstate_limit_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
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
output_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto tstate_continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tstate_continuation_3)
DEFLABEL (tstate_continuation_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
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
output_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto tstate_count_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tstate_count_3)
DEFLABEL (tstate_count_0)
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
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
output_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_tstate_countB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_tstate_countB_3)
DEFLABEL (set_tstate_countB_0)
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_34_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_6 7
#define LABEL_35_7 9
#define ENVIRONMENT_LABEL_35_3 17
#define DEBUGGING_LABEL_35_2 16
#define OBJECT_35_3 15
#define OBJECT_35_2 14
#define OBJECT_35_1 13
#define OBJECT_35_0 12
#define FREE_REFERENCE_35_0 11
#define FREE_REFERENCES_LABEL_35_0 10
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_35_4);
      goto tstateP_4;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_35_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_35_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tstateP_10)
DEFLABEL (tstateP_4)
  INTERRUPT_CHECK (26, LABEL_35_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
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
  Rvl = (current_block [OBJECT_35_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_35_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_7 7
#define LABEL_36_8 9
#define LABEL_36_9 11
#define LABEL_36_10 13
#define LABEL_36_11 15
#define LABEL_36_12 17
#define LABEL_36_13 19
#define LABEL_36_14 21
#define ENVIRONMENT_LABEL_36_3 35
#define DEBUGGING_LABEL_36_2 34
#define OBJECT_36_6 33
#define OBJECT_36_5 32
#define OBJECT_36_4 31
#define OBJECT_36_3 30
#define OBJECT_36_2 29
#define OBJECT_36_1 28
#define OBJECT_36_0 27
#define EXECUTE_CACHE_36_15 23
#define EXECUTE_CACHE_36_6 25
#define FREE_REFERENCES_LABEL_36_0 22
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd88;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd120;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd83;
  machine_word Wrd84;
  machine_word Wrd86;
  machine_word Wrd87;
  machine_word Wrd85;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd64;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd46;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd44;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd39;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_36_4);
      goto trunc_out_write_char_10;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_36_7);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_36_8);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_36_9);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_36_10);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_36_11);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_36_12);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_36_13);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_36_14);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (trunc_out_write_char_21)
DEFLABEL (trunc_out_write_char_10)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 62))
    goto label_38;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_38;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_37)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_36;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd29.Lng))))
    goto label_36;
  (Wrd21.Obj) = ((Wrd27.pObj) [5]);

DEFLABEL (label_35)
  (Wrd37.Obj) = (* (Rsp++));
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_34;
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_34;
  (Wrd121.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd122.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if ((Wrd121.Lng) < (Wrd122.Lng))
    goto label_25;

DEFLABEL (label_24)
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_23;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd54.Lng))))
    goto label_23;
  (Wrd46.Obj) = ((Wrd52.pObj) [4]);

DEFLABEL (label_22)
  (Rsp [1]) = (Wrd46.Obj);
  (Wrd62.Obj) = (current_block [OBJECT_36_4]);
  (Rsp [2]) = (Wrd62.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_23)
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.Obj) = (current_block [OBJECT_36_3]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_10]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_15)
  (Wrd46.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd73.Obj) = (Rsp [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 62))
    goto label_33;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [0]);
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd72.Lng))))
    goto label_33;
  (Wrd64.Obj) = ((Wrd70.pObj) [5]);

DEFLABEL (label_32)
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd85.uLng) == 26))
    goto label_31;
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  (Wrd86.Lng) = ((Wrd87.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd86.Lng)))
    goto label_31;
  (Wrd84.Obj) = (LONG_TO_FIXNUM (Wrd86.Lng));

DEFLABEL (label_30)
  (Wrd113.Obj) = (Rsp [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd114.uLng) == 62))
    goto label_29;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd111.Obj) = ((Wrd110.pObj) [0]);
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd111.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd112.Lng))))
    goto label_29;
  ((Wrd110.pObj) [5]) = (Wrd84.Obj);

DEFLABEL (label_28)
  (Wrd97.Obj) = (Rsp [0]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd98.uLng) == 62))
    goto label_27;
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd95.Obj) = ((Wrd94.pObj) [0]);
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd95.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd96.Lng))))
    goto label_27;
  (Wrd88.Obj) = ((Wrd94.pObj) [2]);

DEFLABEL (label_26)
  (Rsp [1]) = (Wrd88.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_15]));

DEFLABEL (label_27)
  (Wrd99.Obj) = (Rsp [0]);
  (Wrd100.Obj) = (current_block [OBJECT_36_6]);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_14]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_18)
  (Wrd88.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd115.Obj) = (Rsp [0]);
  (Wrd116.Obj) = (current_block [OBJECT_36_2]);
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_13]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_5]), 3);

DEFLABEL (label_19)
  goto label_28;

DEFLABEL (label_31)
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_12]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_17)
  (Wrd84.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd75.Obj) = (Rsp [0]);
  (Wrd76.Obj) = (current_block [OBJECT_36_2]);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_11]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_16)
  (Wrd64.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_9]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_25;

DEFLABEL (label_36)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_36_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_13)
  (Wrd21.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_36_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_7 7
#define ENVIRONMENT_LABEL_37_3 16
#define DEBUGGING_LABEL_37_2 15
#define OBJECT_37_1 14
#define OBJECT_37_0 13
#define EXECUTE_CACHE_37_8 9
#define EXECUTE_CACHE_37_6 11
#define FREE_REFERENCES_LABEL_37_0 8
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_37_4);
      goto trunc_out_flush_output_2;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_37_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (trunc_out_flush_output_6)
DEFLABEL (trunc_out_flush_output_2)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_8;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd12.Lng))))
    goto label_8;
  (Wrd6.Obj) = ((Wrd10.pObj) [2]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_8]));

DEFLABEL (label_8)
  (Wrd15.Obj) = (current_block [OBJECT_37_0]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 2);

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_7 7
#define ENVIRONMENT_LABEL_38_3 16
#define DEBUGGING_LABEL_38_2 15
#define OBJECT_38_1 14
#define OBJECT_38_0 13
#define EXECUTE_CACHE_38_8 9
#define EXECUTE_CACHE_38_6 11
#define FREE_REFERENCES_LABEL_38_0 8
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_38_4);
      goto trunc_out_discretionary_flush_output_2;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_38_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (trunc_out_discretionary_flush_output_6)
DEFLABEL (trunc_out_discretionary_flush_output_2)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_5);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_8;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd12.Lng))))
    goto label_8;
  (Wrd6.Obj) = ((Wrd10.pObj) [2]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_8]));

DEFLABEL (label_8)
  (Wrd15.Obj) = (current_block [OBJECT_38_0]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 2);

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_6 5
#define LABEL_39_7 7
#define LABEL_39_8 9
#define LABEL_39_5 11
#define LABEL_39_10 13
#define ENVIRONMENT_LABEL_39_3 29
#define DEBUGGING_LABEL_39_2 28
#define OBJECT_39_4 27
#define OBJECT_39_3 26
#define OBJECT_39_2 25
#define OBJECT_39_1 24
#define OBJECT_39_0 23
#define EXECUTE_CACHE_39_9 15
#define FREE_REFERENCE_39_2 18
#define FREE_REFERENCE_39_1 19
#define FREE_REFERENCE_39_0 20
#define FREE_ASSIGNMENT_39_0 22
#define FREE_REFERENCES_LABEL_39_0 14
#define NUMBER_OF_LINKER_SECTIONS_39_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
output_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd62;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd61;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd48;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_39_4);
      goto initialize_packageB_10;

    case 1:
      current_block = (Rpc - LABEL_39_6);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_39_7);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_39_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_39_10);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_17)
DEFLABEL (initialize_packageB_10)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_26;
  Wrd10 = Wrd14;

DEFLABEL (label_25)
  (Wrd19.Obj) = (current_block [OBJECT_39_0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd23.Obj) = (current_block [OBJECT_39_1]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_1]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_24;
  Wrd29 = Wrd33;

DEFLABEL (label_23)
  (Wrd38.Obj) = (current_block [OBJECT_39_0]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd42.Obj) = (current_block [OBJECT_39_2]);
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd43.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd49.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_2]));
  (Wrd52.Obj) = ((Wrd49.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 50)
    goto label_22;
  Wrd48 = Wrd52;

DEFLABEL (label_21)
  (Wrd57.Obj) = (current_block [OBJECT_39_0]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (Wrd61.Obj) = (current_block [OBJECT_39_3]);
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  (Wrd62.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd62.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  (* (--Rsp)) = (Wrd65.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_9]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_39_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_39_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_20;

DEFLABEL (label_19)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_18)
  Rvl = (current_block [OBJECT_39_4]);
  goto pop_return;

DEFLABEL (label_20)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_19;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_39_10])), (Wrd6.pObj), Rvl);

DEFLABEL (label_15)
  goto label_18;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_8])), (Wrd49.pObj));

DEFLABEL (label_14)
  (Wrd48.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_7])), (Wrd30.pObj));

DEFLABEL (label_13)
  (Wrd29.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_6])), (Wrd11.pObj));

DEFLABEL (label_12)
  (Wrd10.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_7 7
#define LABEL_9 9
#define LABEL_10 11
#define LABEL_11 13
#define LABEL_12 15
#define LABEL_17 17
#define LABEL_13 19
#define LABEL_15 21
#define LABEL_16 23
#define LABEL_19 25
#define LABEL_24 27
#define LABEL_20 29
#define TAG_21 13
#define LABEL_22 31
#define LABEL_23 33
#define LABEL_25 35
#define LABEL_26 37
#define LABEL_27 39
#define ENVIRONMENT_LABEL_3 72
#define DEBUGGING_LABEL_2 71
#define PURIFICATION_ROOT 70
#define OBJECT_17 69
#define OBJECT_16 68
#define OBJECT_15 67
#define OBJECT_14 66
#define OBJECT_13 65
#define OBJECT_12 64
#define OBJECT_11 63
#define OBJECT_10 62
#define OBJECT_9 61
#define OBJECT_8 60
#define OBJECT_7 59
#define OBJECT_6 58
#define OBJECT_5 57
#define OBJECT_4 56
#define OBJECT_3 55
#define OBJECT_2 54
#define OBJECT_1 53
#define OBJECT_0 52
#define EXECUTE_CACHE_8 41
#define FREE_REFERENCE_0 44
#define GLOBAL_EXECUTE_CACHE_18 46
#define GLOBAL_EXECUTE_CACHE_14 48
#define GLOBAL_EXECUTE_CACHE_5 50
#define FREE_REFERENCES_LABEL_0 40
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
output_so_5215bd495444d44c (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_9);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_12);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_17);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_13);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_15);
      goto continuation_16;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto continuation_12;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto continuation_17;

    case 12:
      current_block = (Rpc - LABEL_24);
      goto label_23;

    case 13:
      current_block = (Rpc - LABEL_20);
      goto make_tstate_25;

    case 14:
      current_block = (Rpc - LABEL_22);
      goto continuation_19;

    case 15:
      current_block = (Rpc - LABEL_23);
      goto continuation_18;

    case 16:
      current_block = (Rpc - LABEL_25);
      goto label_27;

    case 17:
      current_block = (Rpc - LABEL_26);
      goto label_28;

    case 18:
      current_block = (Rpc - LABEL_27);
      goto expression_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_21)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_26])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_28)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_27)
  {
    static const short sections [] =
      {
	0,
	3,
	1,
	1,
	1,
	1,
	0,
	0,
	0,
	0,
	0,
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
	1,
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
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 39)
      goto label_26;
    blocks = (current_block [OBJECT_17]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_25])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_26)
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
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_7]);
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
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_32;
  Wrd11 = Wrd15;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_18]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_30;
  Wrd11 = Wrd15;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_18]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_23);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd5.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_15]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24])), (Wrd12.pObj));

DEFLABEL (label_23)
  (Wrd11.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd12.pObj));

DEFLABEL (label_22)
  (Wrd11.Obj) = Rvl;
  goto label_31;

DEFLABEL (make_tstate_25)
  CLOSURE_HEADER (LABEL_20);

DEFLABEL (make_tstate_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd13.Obj) = (MAKE_OBJECT (0, 5));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd7.pObj) = (& (Rhp [-6]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_output_so_5215bd495444d44c [39] =
  {
    { "output_so_code_1", 3, output_so_code_1 },
    { "output_so_code_2", 2, output_so_code_2 },
    { "output_so_code_3", 2, output_so_code_3 },
    { "output_so_code_4", 2, output_so_code_4 },
    { "output_so_code_5", 2, output_so_code_5 },
    { "output_so_code_6", 2, output_so_code_6 },
    { "output_so_code_7", 2, output_so_code_7 },
    { "output_so_code_8", 3, output_so_code_8 },
    { "output_so_code_9", 2, output_so_code_9 },
    { "output_so_code_10", 1, output_so_code_10 },
    { "output_so_code_11", 3, output_so_code_11 },
    { "output_so_code_12", 2, output_so_code_12 },
    { "output_so_code_13", 2, output_so_code_13 },
    { "output_so_code_14", 2, output_so_code_14 },
    { "output_so_code_15", 2, output_so_code_15 },
    { "output_so_code_16", 6, output_so_code_16 },
    { "output_so_code_17", 2, output_so_code_17 },
    { "output_so_code_18", 4, output_so_code_18 },
    { "output_so_code_19", 4, output_so_code_19 },
    { "output_so_code_20", 7, output_so_code_20 },
    { "output_so_code_21", 5, output_so_code_21 },
    { "output_so_code_22", 5, output_so_code_22 },
    { "output_so_code_23", 5, output_so_code_23 },
    { "output_so_code_24", 8, output_so_code_24 },
    { "output_so_code_25", 2, output_so_code_25 },
    { "output_so_code_26", 8, output_so_code_26 },
    { "output_so_code_27", 3, output_so_code_27 },
    { "output_so_code_28", 105, output_so_code_28 },
    { "output_so_code_29", 6, output_so_code_29 },
    { "output_so_code_30", 1, output_so_code_30 },
    { "output_so_code_31", 1, output_so_code_31 },
    { "output_so_code_32", 1, output_so_code_32 },
    { "output_so_code_33", 1, output_so_code_33 },
    { "output_so_code_34", 1, output_so_code_34 },
    { "output_so_code_35", 4, output_so_code_35 },
    { "output_so_code_36", 10, output_so_code_36 },
    { "output_so_code_37", 3, output_so_code_37 },
    { "output_so_code_38", 3, output_so_code_38 },
    { "output_so_code_39", 6, output_so_code_39 }
  };

int
decl_output_so_5215bd495444d44c (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_output_so_5215bd495444d44c);
  return (0);
}

DECLARE_COMPILED_CODE ("output.so", 19, decl_output_so_5215bd495444d44c, output_so_5215bd495444d44c)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_output_so_data_5215bd495444d44c [4966] =
  "\xac\x02\x43\x95\x0a\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x02\xc2\xb9"
  "\x81\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0\x82\x88\x28"
  "\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x83\x88\x80\x28"
  "\x0d\x28\x0d\xbc\x23\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x84"
  "\x88\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x85\x88"
  "\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x86\x88\x28"
  "\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\xb1\x81"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x0d"
  "\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x0d\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\x0d\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x02\x1d\x07\x02\xb1\x81\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\x07\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x07\x0d"
  "\x1c\x28\x1b\x28\xb4\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x1d\x07\x02\xb1\x81\x0f\x0d"
  "\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\xb1\x81\x1d\x07\x0d"
  "\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\xb1\x81\x0d\x1c\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x02\xb1\x81\x0d\x1c\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x02\x02\xb1\x81\x0f\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x1d\xb1\x81\x28\x1b"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0f\xc2\x1d\x80\xc2\x06\x07\x08\xc1\xc1\x81\xc1\x0c"
  "\x0d\x1c\x0d\x0d\x0d\x1c\x0d\x24\x28\x0d\x28\x0d\x28\x1b\x28\x1b"
  "\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29"
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
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x0d\x1c\x24\x28\x0d\x28\x0d"
  "\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x81\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\xb1\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\xb1\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x84\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x1d\x84\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\xb1\x80\xc1\x0e\x1c\x24\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x1b\x07"
  "\x83\x84\xb1\x82\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x81\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x81\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x1b\x1b\x0d\x08\x1b\x25\x0d\xb9\x0d\xb8\x0d\x1c\x24\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x17\x1c\x88\x1b\x1b\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x9d\x0d\x1b\xb1\xb0\x1b\x0d\x9d\x1b\x0d\x0d\x0d\x0d\x0d"
  "\x9c\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9c\x0d\x1c\x0c\x0d"
  "\x0d\x0d\x0d\x08\x8b\x08\x0d\x1b\x1b\x9a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x9a\xc3\x0d\x0d\x0d\x1c\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x0d\x0d\x0d\x0d\x1b\x1b\x1b\x0d\x1b\x0d\x1b\xb4\x1b\x1b\x0d\x17"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb6\x2a\xb5\x2a"
  "\xb3\x2a\xb2\x2a\x17\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x24\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72"
  "\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73"
  "\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69"
  "\x6d\x65\x2f\x2e\x2f\x6f\x75\x74\x70\x75\x74\x2e\x69\x6e\x66\x15"
  "\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72"
  "\x6f\x6f\x74\x5d\x02\x0a\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72"
  "\x65\x66\x16\x08\x81\x85\x02\x15\x06\x81\x85\x02\x14\x04\x84\x06"
  "\x07\x0d\x02\x03\x1a\x70\x6f\x72\x74\x2f\x6f\x70\x65\x72\x61\x74"
  "\x69\x6f\x6e\x2f\x77\x72\x69\x74\x65\x2d\x63\x68\x61\x72\x02\x18"
  "\x06\x81\x85\x02\x17\x04\x84\x06\x05\x0b\x02\x03\x0f\x78\x73\x74"
  "\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x06\x1c\x6f\x75\x74"
  "\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x77\x72\x69\x74\x65\x2d\x73"
  "\x75\x62\x73\x74\x72\x69\x6e\x67\x03\x1a\x06\x81\x89\x02\x19\x04"
  "\x84\x06\x05\x0e\x02\x03\x1f\x70\x6f\x72\x74\x2f\x6f\x70\x65\x72"
  "\x61\x74\x69\x6f\x6e\x2f\x77\x72\x69\x74\x65\x2d\x73\x75\x62\x73"
  "\x74\x72\x69\x6e\x67\x02\x1c\x06\x81\x89\x02\x1b\x04\x86\x0a\x05"
  "\x0b\x02\x03\x1a\x70\x6f\x72\x74\x2f\x6f\x70\x65\x72\x61\x74\x69"
  "\x6f\x6e\x2f\x66\x72\x65\x73\x68\x2d\x6c\x69\x6e\x65\x02\x1e\x06"
  "\x81\x83\x02\x1d\x04\x83\x04\x05\x0b\x02\x03\x1b\x70\x6f\x72\x74"
  "\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x6c\x69\x6e\x65\x2d"
  "\x73\x74\x61\x72\x74\x3f\x02\x20\x06\x81\x83\x02\x1f\x04\x83\x04"
  "\x05\x0b\x09\x02\x08\x03\x1c\x70\x6f\x72\x74\x2f\x6f\x70\x65\x72"
  "\x61\x74\x69\x6f\x6e\x2f\x66\x6c\x75\x73\x68\x2d\x6f\x75\x74\x70"
  "\x75\x74\x02\x22\x06\x81\x83\x02\x21\x04\x83\x04\x05\x0b\x0a\x02"
  "\x09\x0f\x25\x08\x81\x83\x02\x24\x06\x81\x83\x02\x23\x04\x83\x04"
  "\x07\x0d\x0b\x02\x0a\x03\x2a\x70\x6f\x72\x74\x2f\x6f\x70\x65\x72"
  "\x61\x74\x69\x6f\x6e\x2f\x64\x69\x73\x63\x72\x65\x74\x69\x6f\x6e"
  "\x61\x72\x79\x2d\x66\x6c\x75\x73\x68\x2d\x6f\x75\x74\x70\x75\x74"
  "\x02\x27\x06\x81\x83\x02\x26\x04\x83\x04\x05\x0b\x0c\x02\x0b\x06"
  "\x19\x75\x6e\x70\x61\x72\x73\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2f"
  "\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x0d\x02\x28\x04\x85\x08\x03"
  "\x0a\x0e\x02\x0c\x51\x07\x78\x2d\x73\x69\x7a\x65\x04\x0f\x70\x6f"
  "\x72\x74\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x0f\x02\x2b\x08"
  "\x81\x83\x02\x2a\x06\x81\x85\x02\x29\x04\x83\x04\x07\x0f\x10\x02"
  "\x0d\x07\x79\x2d\x73\x69\x7a\x65\x04\x0f\x02\x2d\x06\x81\x83\x02"
  "\x2c\x04\x83\x04\x05\x0c\x11\x02\x0e\x0e\x6f\x75\x74\x70\x75\x74"
  "\x2d\x63\x6f\x6c\x75\x6d\x6e\x04\x0f\x02\x2f\x06\x81\x83\x02\x2e"
  "\x04\x83\x04\x05\x0c\x12\x02\x0f\x0e\x62\x79\x74\x65\x73\x2d\x77"
  "\x72\x69\x74\x74\x65\x6e\x04\x0f\x02\x31\x06\x81\x83\x02\x30\x04"
  "\x83\x04\x05\x0c\x13\x02\x10\x02\x13\x73\x79\x6e\x63\x68\x72\x6f"
  "\x6e\x69\x7a\x65\x2d\x6f\x75\x74\x70\x75\x74\x04\x0f\x02\x33\x06"
  "\x81\x83\x02\x32\x04\x83\x04\x05\x0d\x0f\x02\x11\x0f\x02\x0a\x39"
  "\x0e\x81\x85\x02\x38\x0c\x81\x85\x02\x37\x0a\x81\x85\x02\x36\x08"
  "\x81\x8b\x02\x35\x06\x81\x8b\x02\x34\x04\x84\x06\x0d\x16\x14\x02"
  "\x12\x0b\x77\x72\x69\x74\x65\x2d\x63\x68\x61\x72\x15\x04\x15\x6f"
  "\x70\x74\x69\x6f\x6e\x61\x6c\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70"
  "\x6f\x72\x74\x16\x04\x0c\x25\x77\x72\x69\x74\x65\x2d\x63\x68\x61"
  "\x72\x17\x03\x3b\x06\x81\x85\x02\x3a\x04\x84\x04\x05\x0e\x18\x02"
  "\x13\x02\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x19"
  "\x04\x16\x04\x19\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f"
  "\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x1a\x03\x20\x6f"
  "\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x64\x69\x73\x63\x72"
  "\x65\x74\x69\x6f\x6e\x61\x72\x79\x2d\x66\x6c\x75\x73\x68\x1b\x04"
  "\x3f\x0a\x81\x87\x02\x3e\x08\x81\x89\x02\x3d\x06\x81\x85\x02\x3c"
  "\x04\x84\x04\x09\x16\x1c\x02\x14\x02\x10\x77\x72\x69\x74\x65\x2d"
  "\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x1d\x04\x16\x06\x03\x1b\x04"
  "\x43\x0a\x81\x8b\x02\x42\x08\x81\x8d\x02\x41\x06\x81\x89\x02\x40"
  "\x04\x86\x08\x09\x16\x1e\x02\x15\x0f\x02\x0a\x01\x0b\x08\x6e\x65"
  "\x77\x6c\x69\x6e\x65\x1f\x04\x16\x02\x4a\x10\x81\x83\x02\x49\x0e"
  "\x81\x83\x02\x48\x0c\x81\x83\x02\x47\x0a\x81\x89\x02\x46\x08\x81"
  "\x89\x02\x45\x06\x81\x83\x02\x44\x04\x83\x02\x0f\x1d\x20\x02\x16"
  "\x0f\x02\x0b\x66\x72\x65\x73\x68\x2d\x6c\x69\x6e\x65\x21\x04\x16"
  "\x03\x17\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x66\x72"
  "\x65\x73\x68\x2d\x6c\x69\x6e\x65\x22\x03\x4f\x0c\x81\x83\x02\x4e"
  "\x0a\x81\x83\x02\x4d\x08\x81\x83\x02\x4c\x06\x81\x83\x02\x4b\x04"
  "\x83\x02\x0b\x19\x23\x02\x17\x0f\x08\x64\x69\x73\x70\x6c\x61\x79"
  "\x24\x04\x16\x06\x0d\x03\x54\x0c\x81\x89\x02\x53\x0a\x81\x89\x02"
  "\x52\x08\x81\x89\x02\x51\x06\x81\x87\x02\x50\x04\x85\x04\x0b\x17"
  "\x0d\x02\x18\x0f\x06\x77\x72\x69\x74\x65\x25\x04\x16\x05\x19\x6f"
  "\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x77\x72\x69\x74\x65"
  "\x2d\x6f\x62\x6a\x65\x63\x74\x26\x03\x59\x0c\x81\x89\x02\x58\x0a"
  "\x81\x89\x02\x57\x08\x81\x89\x02\x56\x06\x81\x87\x02\x55\x04\x85"
  "\x04\x0b\x17\x27\x02\x19\x0f\x0a\x01\x0b\x0b\x77\x72\x69\x74\x65"
  "\x2d\x6c\x69\x6e\x65\x28\x04\x16\x05\x26\x03\x61\x12\x81\x89\x02"
  "\x60\x10\x81\x89\x02\x5f\x0e\x81\x89\x02\x5e\x0c\x81\x8f\x02\x5d"
  "\x0a\x81\x8f\x02\x5c\x08\x81\x89\x02\x5b\x06\x81\x87\x02\x5a\x04"
  "\x85\x04\x11\x1f\x29\x02\x1a\x0d\x66\x6c\x75\x73\x68\x2d\x6f\x75"
  "\x74\x70\x75\x74\x2a\x04\x16\x03\x19\x6f\x75\x74\x70\x75\x74\x2d"
  "\x70\x6f\x72\x74\x2f\x66\x6c\x75\x73\x68\x2d\x6f\x75\x74\x70\x75"
  "\x74\x2b\x03\x63\x06\x81\x83\x02\x62\x04\x83\x02\x05\x0e\x2c\x02"
  "\x1b\x0f\x02\x04\x16\x04\x15\x70\x6f\x72\x74\x2d\x74\x79\x70\x65"
  "\x2f\x25\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x03\x6b\x12\x81\x89"
  "\x02\x6a\x10\x81\x89\x02\x69\x0e\x81\x89\x02\x68\x0c\x81\x87\x02"
  "\x67\x0a\x81\x8b\x02\x66\x08\x81\x85\x02\x65\x06\x81\x85\x02\x64"
  "\x04\x83\x04\x11\x1d\x2d\x02\x1c\x08\x02\x14\x63\x75\x72\x72\x65"
  "\x6e\x74\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x03\x0d"
  "\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x3f\x2e\x04\x16\x65"
  "\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x6f\x75\x74\x70\x75\x74\x2d"
  "\x70\x6f\x72\x74\x2f\x04\x6e\x08\x81\x85\x02\x6d\x06\x81\x85\x02"
  "\x6c\x04\x84\x06\x07\x12\x30\x02\x1d\x01\x21\x09\x73\x65\x74\x2d"
  "\x63\x61\x72\x21\x02\x06\x61\x70\x70\x6c\x79\x04\x63\x64\x72\x04"
  "\x63\x61\x72\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74"
  "\x68\x10\x6c\x69\x73\x74\x20\x6f\x66\x20\x73\x74\x72\x69\x6e\x67"
  "\x73\x19\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x73\x2d"
  "\x69\x6e\x2d\x63\x6f\x6c\x75\x6d\x6e\x73\x31\x08\x73\x74\x72\x69"
  "\x6e\x67\x3f\x02\x2b\x04\x6d\x61\x78\x32\x0e\x73\x74\x72\x69\x6e"
  "\x67\x2d\x6c\x65\x6e\x67\x74\x68\x05\x04\x0e\x6c\x69\x73\x74\x2d"
  "\x6f\x66\x2d\x74\x79\x70\x65\x3f\x05\x1a\x65\x72\x72\x6f\x72\x3a"
  "\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d"
  "\x65\x6e\x74\x03\x2e\x04\x2f\x04\x21\x67\x75\x61\x72\x61\x6e\x74"
  "\x65\x65\x2d\x65\x78\x61\x63\x74\x2d\x70\x6f\x73\x69\x74\x69\x76"
  "\x65\x2d\x69\x6e\x74\x65\x67\x65\x72\x04\x11\x67\x75\x61\x72\x61"
  "\x6e\x74\x65\x65\x2d\x73\x74\x72\x69\x6e\x67\x03\x13\x6f\x75\x74"
  "\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x78\x2d\x73\x69\x7a\x65\x2f"
  "\x03\x07\x6c\x65\x6e\x67\x74\x68\x04\x19\x04\x0a\x6d\x61\x6b\x65"
  "\x2d\x6c\x69\x73\x74\x04\x32\x04\x09\x66\x6f\x72\x2d\x65\x61\x63"
  "\x68\x03\x09\x72\x65\x76\x65\x72\x73\x65\x21\x04\x04\x6d\x61\x70"
  "\x04\x0a\x6c\x69\x73\x74\x2d\x68\x65\x61\x64\x03\x1f\x04\x15\x04"
  "\x0a\x6c\x69\x73\x74\x2d\x74\x61\x69\x6c\x13\xd7\x01\xd4\x01\x81"
  "\x9d\x02\xd6\x01\xd2\x01\x81\x9d\x02\xd5\x01\xd0\x01\x81\x9f\x02"
  "\xd4\x01\xce\x01\x81\x9d\x02\xd3\x01\xcc\x01\x81\x9d\x02\xd2\x01"
  "\xca\x01\x81\x9d\x02\xd1\x01\xc8\x01\x81\x9d\x02\xd0\x01\xc6\x01"
  "\x81\x9d\x02\xcf\x01\xc4\x01\x81\x9d\x02\xce\x01\xc2\x01\x81\x89"
  "\x02\xcd\x01\xc0\x01\x81\x85\x02\xcc\x01\xbe\x01\x81\x85\x02\xcb"
  "\x01\xbc\x01\x81\x9f\x02\xca\x01\xba\x01\x81\x9f\x02\xc9\x01\xb8"
  "\x01\x81\xa1\x02\xc8\x01\xb6\x01\x81\x9d\x02\xc7\x01\xb4\x01\x81"
  "\x9b\x02\xc6\x01\xb2\x01\x81\x87\x02\xc5\x01\xb0\x01\x81\x87\x02"
  "\xc4\x01\xae\x01\x81\x87\x02\xc3\x01\xac\x01\x81\x89\x02\xc2\x01"
  "\xaa\x01\x81\x85\x02\xc1\x01\xa8\x01\x81\x89\x02\xc0\x01\xa6\x01"
  "\x81\x83\x02\xbf\x01\xa4\x01\x83\x04\xbe\x01\xa2\x01\x81\xa7\x02"
  "\xbd\x01\xa0\x01\x81\x9f\x02\xbc\x01\x9e\x01\x81\x9f\x02\xbb\x01"
  "\x9c\x01\x81\x9b\x02\xba\x01\x9a\x01\x81\x85\x02\xb9\x01\x98\x01"
  "\x81\x8f\x02\xb8\x01\x96\x01\x81\x89\x02\xb7\x01\x94\x01\x81\x89"
  "\x02\xb6\x01\x92\x01\x81\x89\x02\xb5\x01\x90\x01\x81\x89\x02\xb4"
  "\x01\x8e\x01\x81\x85\x02\xb3\x01\x8c\x01\x81\xa5\x02\xb2\x01\x8a"
  "\x01\x81\x89\x02\xb1\x01\x88\x01\x81\x85\x02\xb0\x01\x86\x01\x81"
  "\x9b\x02\xaf\x01\x84\x01\x81\x9b\x02\xae\x01\x82\x01\x81\x8b\x02"
  "\xad\x01\x80\x01\x81\x8b\x02\xac\x01\x7e\x81\x89\x02\xab\x01\x7c"
  "\x81\x89\x02\xaa\x01\x7a\x81\x8b\x02\xa9\x01\x78\x81\x89\x02\xa8"
  "\x01\x76\x81\x87\x02\xa7\x01\x74\x81\x89\x02\xa6\x01\x72\x81\x85"
  "\x02\xa5\x01\x70\x81\x8f\x02\xa4\x01\x6e\x81\x85\x02\xa3\x01\x6c"
  "\x81\x85\x02\xa2\x01\x6a\x81\xa5\x02\xa1\x01\x68\x81\xa5\x02\xa0"
  "\x01\x66\x81\x93\x02\x9f\x01\x64\x81\x93\x02\x9e\x01\x62\x81\xad"
  "\x02\x9d\x01\x60\x81\xab\x02\x9c\x01\x5e\x81\xab\x02\x9b\x01\x5c"
  "\x81\xab\x02\x9a\x01\x5a\x81\x83\x02\x99\x01\x58\x81\x8f\x02\x98"
  "\x01\x56\x81\xa3\x02\x97\x01\x54\x81\x83\x02\x96\x01\x52\x81\x8f"
  "\x02\x95\x01\x50\x81\x89\x02\x94\x01\x4e\x81\x89\x02\x93\x01\x4c"
  "\x81\x89\x02\x92\x01\x4a\x81\x87\x02\x91\x01\x48\x81\x87\x02\x90"
  "\x01\x46\x81\x87\x02\x8f\x01\x44\x81\x87\x02\x8e\x01\x42\x81\x87"
  "\x02\x8d\x01\x40\x81\xa1\x02\x8c\x01\x3e\x83\x04\x8b\x01\x3c\x83"
  "\x04\x8a\x01\x3a\x81\xa9\x02\x89\x01\x38\x81\x85\x02\x88\x01\x36"
  "\x83\x04\x87\x01\x34\x81\xa9\x02\x86\x01\x32\x81\xa9\x02\x85\x01"
  "\x30\x81\xa9\x02\x84\x01\x2e\x81\x83\x02\x83\x01\x2c\x81\x8f\x02"
  "\x82\x01\x2a\x81\xa7\x02\x81\x01\x28\x81\xa5\x02\x80\x01\x26\x81"
  "\xa5\x02\x7f\x24\x81\xa5\x02\x7e\x22\x81\xa5\x02\x7d\x20\x81\x97"
  "\x02\x7c\x1e\x81\x95\x02\x7b\x1c\x81\x93\x02\x7a\x1a\x81\x91\x02"
  "\x79\x18\x81\x8f\x02\x78\x16\x81\x8f\x02\x77\x14\x81\x8f\x02\x76"
  "\x12\x81\x8f\x02\x75\x10\x81\x8f\x02\x74\x0e\x81\x8f\x02\x73\x0c"
  "\x81\x8f\x02\x72\x0a\x81\x8f\x02\x71\x08\x81\x8f\x02\x70\x06\x81"
  "\x91\x02\x6f\x04\x89\x10\xd3\x01\x8e\x02\x32\x02\x1e\x16\x74\x72"
  "\x75\x6e\x63\x61\x74\x65\x64\x2d\x6f\x75\x74\x70\x75\x74\x2d\x74"
  "\x79\x70\x65\x2e\x02\x03\x1f\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68"
  "\x2d\x63\x75\x72\x72\x65\x6e\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75"
  "\x61\x74\x69\x6f\x6e\x06\x0c\x6d\x61\x6b\x65\x2d\x74\x73\x74\x61"
  "\x74\x65\x33\x04\x0a\x6d\x61\x6b\x65\x2d\x70\x6f\x72\x74\x04\xdd"
  "\x01\x0e\x81\x87\x02\xdc\x01\x0c\x81\x89\x02\xdb\x01\x0a\x81\x87"
  "\x02\xda\x01\x08\x81\x85\x02\xd9\x01\x06\x81\x85\x02\xd8\x01\x04"
  "\x85\x08\x0d\x1a\x34\x02\x1f\xde\x01\x04\x83\x04\x03\x35\x02\x20"
  "\xdf\x01\x04\x83\x04\x03\x36\x02\x21\xe0\x01\x04\x83\x04\x03\x37"
  "\x02\x22\xe1\x01\x04\x83\x04\x03\x38\x02\x23\x0d\x25\x72\x65\x63"
  "\x6f\x72\x64\x2d\x73\x65\x74\x21\x39\x02\xe2\x01\x04\x84\x06\x03"
  "\x3a\x02\x24\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65\x6e\x67"
  "\x74\x68\x07\x2e\x74\x61\x67\x2e\x31\x3b\x02\xe6\x01\x0a\x81\x85"
  "\x02\xe5\x01\x08\x81\x83\x02\xe4\x01\x06\x81\x83\x02\xe3\x01\x04"
  "\x83\x04\x09\x12\x3c\x02\x25\x39\x03\x0b\x70\x6f\x72\x74\x2f\x73"
  "\x74\x61\x74\x65\x39\x04\x17\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f"
  "\x72\x74\x2f\x77\x72\x69\x74\x65\x2d\x63\x68\x61\x72\x3d\x03\xf0"
  "\x01\x16\x81\x87\x02\xef\x01\x14\x81\x87\x02\xee\x01\x12\x81\x87"
  "\x02\xed\x01\x10\x81\x87\x02\xec\x01\x0e\x81\x87\x02\xeb\x01\x0c"
  "\x81\x87\x02\xea\x01\x0a\x81\x89\x02\xe9\x01\x08\x81\x87\x02\xe8"
  "\x01\x06\x81\x85\x02\xe7\x01\x04\x84\x06\x15\x24\x3e\x02\x26\x03"
  "\x39\x03\x2b\x03\xf3\x01\x08\x81\x83\x02\xf2\x01\x06\x81\x83\x02"
  "\xf1\x01\x04\x83\x04\x07\x11\x3f\x02\x27\x03\x39\x03\x1b\x03\xf6"
  "\x01\x08\x81\x83\x02\xf5\x01\x06\x81\x83\x02\xf4\x01\x04\x83\x04"
  "\x07\x11\x39\x02\x28\x02\x15\x2a\x1b\x64\x69\x73\x63\x72\x65\x74"
  "\x69\x6f\x6e\x61\x72\x79\x2d\x66\x6c\x75\x73\x68\x2d\x6f\x75\x74"
  "\x70\x75\x74\x2e\x02\x25\x74\x72\x75\x6e\x63\x2d\x6f\x75\x74\x2f"
  "\x64\x69\x73\x63\x72\x65\x74\x69\x6f\x6e\x61\x72\x79\x2d\x66\x6c"
  "\x75\x73\x68\x2d\x6f\x75\x74\x70\x75\x74\x17\x74\x72\x75\x6e\x63"
  "\x2d\x6f\x75\x74\x2f\x66\x6c\x75\x73\x68\x2d\x6f\x75\x74\x70\x75"
  "\x74\x15\x74\x72\x75\x6e\x63\x2d\x6f\x75\x74\x2f\x77\x72\x69\x74"
  "\x65\x2d\x63\x68\x61\x72\x40\x04\x04\x0f\x6d\x61\x6b\x65\x2d\x70"
  "\x6f\x72\x74\x2d\x74\x79\x70\x65\x02\xfc\x01\x0e\x81\x81\x02\xfb"
  "\x01\x0c\x81\x81\x02\xfa\x01\x0a\x81\x87\x02\xf9\x01\x08\x81\x87"
  "\x02\xf8\x01\x06\x81\x85\x02\xf7\x01\x04\x82\x02\x0d\x1e\x41\x28"
  "\x42\x42\x3b\x41\x04\x39\x04\x3f\x04\x3e\x04\x3c\x04\x14\x69\x6e"
  "\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65"
  "\x21\x2e\x40\x08\x74\x73\x74\x61\x74\x65\x3f\x33\x12\x73\x65\x74"
  "\x2d\x74\x73\x74\x61\x74\x65\x2d\x63\x6f\x75\x6e\x74\x21\x0d\x74"
  "\x73\x74\x61\x74\x65\x2d\x63\x6f\x75\x6e\x74\x14\x74\x73\x74\x61"
  "\x74\x65\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x0d"
  "\x74\x73\x74\x61\x74\x65\x2d\x6c\x69\x6d\x69\x74\x0c\x74\x73\x74"
  "\x61\x74\x65\x2d\x70\x6f\x72\x74\x3a\x04\x38\x04\x37\x04\x36\x04"
  "\x35\x04\x0b\x72\x74\x64\x3a\x74\x73\x74\x61\x74\x65\x42\x07\x74"
  "\x73\x74\x61\x74\x65\x05\x70\x6f\x72\x74\x06\x6c\x69\x6d\x69\x74"
  "\x0d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x06\x63\x6f"
  "\x75\x6e\x74\x20\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x74\x72"
  "\x75\x6e\x63\x61\x74\x65\x64\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70"
  "\x6f\x72\x74\x31\x16\x34\x04\x32\x04\x30\x04\x11\x6c\x6f\x63\x61"
  "\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x06\x63\x6c\x65"
  "\x61\x72\x05\x62\x65\x65\x70\x18\x77\x72\x61\x70\x2d\x63\x75\x73"
  "\x74\x6f\x6d\x2d\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2d\x30\x41"
  "\x2a\x28\x25\x24\x21\x1f\x1d\x19\x15\x17\x1f\x6f\x75\x74\x70\x75"
  "\x74\x2d\x70\x6f\x72\x74\x2f\x73\x79\x6e\x63\x68\x72\x6f\x6e\x69"
  "\x7a\x65\x2d\x6f\x75\x74\x70\x75\x74\x1a\x6f\x75\x74\x70\x75\x74"
  "\x2d\x70\x6f\x72\x74\x2f\x62\x79\x74\x65\x73\x2d\x77\x72\x69\x74"
  "\x74\x65\x6e\x13\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f"
  "\x63\x6f\x6c\x75\x6d\x6e\x13\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f"
  "\x72\x74\x2f\x79\x2d\x73\x69\x7a\x65\x2f\x26\x1b\x21\x6f\x75\x74"
  "\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x25\x64\x69\x73\x63\x72\x65"
  "\x74\x69\x6f\x6e\x61\x72\x79\x2d\x66\x6c\x75\x73\x68\x2b\x18\x6f"
  "\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x6c\x69\x6e\x65\x2d"
  "\x73\x74\x61\x72\x74\x3f\x22\x1a\x3d\x18\x6f\x75\x74\x70\x75\x74"
  "\x2d\x70\x6f\x72\x74\x2f\x25\x77\x72\x69\x74\x65\x2d\x63\x68\x61"
  "\x72\x1b\x2d\x04\x2c\x04\x29\x04\x27\x04\x0d\x04\x23\x04\x20\x04"
  "\x1e\x04\x1c\x04\x18\x04\x14\x04\x0f\x04\x13\x04\x12\x04\x11\x04"
  "\x10\x04\x0e\x04\x0c\x04\x0b\x04\x0a\x04\x09\x04\x04\x04\x04\x04"
  "\x04\x1b\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69"
  "\x70\x6c\x65\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64"
  "\x2d\x74\x79\x70\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79"
  "\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x04"
  "\x42\x02\x03\x41\x02\x13\x28\x80\x80\x04\x12\x26\x81\x81\x02\x11"
  "\x24\x81\x81\x02\x10\x22\x81\x85\x02\x0f\x20\x81\x83\x02\x0e\x1e"
  "\x81\x8b\x02\x0d\x1c\x81\x87\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81"
  "\x85\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x85\x02\x08\x12\x81\x87"
  "\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x85\x02"
  "\x04\x0a\x81\x83\x02\x03\x08\x81\x85\x02\x02\x06\x81\x83\x02\x01"
  "\x04\x81\x83\x02\x27\x49";

SCHEME_OBJECT *
output_so_data_5215bd495444d44c (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_output_so_data_5215bd495444d44c [0]))), (sizeof (prog_output_so_data_5215bd495444d44c)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_27]));
}

DECLARE_COMPILED_DATA_NS ("output.so", output_so_data_5215bd495444d44c)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("output.so", "4c07590223c83a3d")
