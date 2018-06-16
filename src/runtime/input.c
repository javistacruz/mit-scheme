/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:40-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define ENVIRONMENT_LABEL_1_3 10
#define DEBUGGING_LABEL_1_2 9
#define EXECUTE_CACHE_1_6 7
#define FREE_REFERENCES_LABEL_1_0 6
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto input_port_char_readyP_1;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (input_port_char_readyP_4)
DEFLABEL (input_port_char_readyP_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define ENVIRONMENT_LABEL_2_3 12
#define DEBUGGING_LABEL_2_2 11
#define OBJECT_2_2 10
#define OBJECT_2_1 9
#define OBJECT_2_0 8
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto input_port__read_char_2;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (input_port__read_char_7)
DEFLABEL (input_port__read_char_2)
  INTERRUPT_CHECK (26, LABEL_2_4);
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
  (Wrd30.Obj) = (current_block [OBJECT_2_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 10
#define DEBUGGING_LABEL_3_2 9
#define EXECUTE_CACHE_3_6 7
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto input_port_read_char_1;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (input_port_read_char_4)
DEFLABEL (input_port_read_char_1)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

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
input_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto input_port_unread_char_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (input_port_unread_char_4)
DEFLABEL (input_port_unread_char_1)
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
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define ENVIRONMENT_LABEL_5_3 12
#define DEBUGGING_LABEL_5_2 11
#define OBJECT_5_2 10
#define OBJECT_5_1 9
#define OBJECT_5_0 8
#define FREE_REFERENCES_LABEL_5_0 8
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto input_port__peek_char_2;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (input_port__peek_char_7)
DEFLABEL (input_port__peek_char_2)
  INTERRUPT_CHECK (26, LABEL_5_4);
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
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_9)
  (Wrd30.Obj) = (current_block [OBJECT_5_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
input_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto input_port_peek_char_1;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (input_port_peek_char_4)
DEFLABEL (input_port_peek_char_1)
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
#define ENVIRONMENT_LABEL_7_3 13
#define DEBUGGING_LABEL_7_2 12
#define OBJECT_7_0 11
#define EXECUTE_CACHE_7_7 7
#define EXECUTE_CACHE_7_6 9
#define FREE_REFERENCES_LABEL_7_0 6
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto input_port_read_stringB_1;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (input_port_read_stringB_4)
DEFLABEL (input_port_read_stringB_1)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Rsp [3]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define ENVIRONMENT_LABEL_8_3 13
#define DEBUGGING_LABEL_8_2 12
#define OBJECT_8_0 11
#define EXECUTE_CACHE_8_7 9
#define FREE_REFERENCES_LABEL_8_0 8
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_8_4);
      goto input_port_read_substringB_2;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (input_port_read_substringB_6)
DEFLABEL (input_port_read_substringB_2)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_9;
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_9;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd22.Lng) < (Wrd24.Lng))
    goto label_8;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_8_0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_6);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (label_9)
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_4)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  goto label_8;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define TAG_9_6 1
#define LABEL_9_8 7
#define LABEL_9_10 9
#define LABEL_9_11 11
#define LABEL_9_12 13
#define LABEL_9_13 15
#define LABEL_9_14 17
#define LABEL_9_15 19
#define LABEL_9_16 21
#define LABEL_9_17 23
#define LABEL_9_18 25
#define LABEL_9_20 27
#define ENVIRONMENT_LABEL_9_3 48
#define DEBUGGING_LABEL_9_2 47
#define OBJECT_9_9 46
#define OBJECT_9_8 45
#define OBJECT_9_7 44
#define OBJECT_9_6 43
#define OBJECT_9_5 42
#define OBJECT_9_4 41
#define OBJECT_9_3 40
#define OBJECT_9_2 39
#define OBJECT_9_1 38
#define OBJECT_9_0 37
#define EXECUTE_CACHE_9_21 29
#define EXECUTE_CACHE_9_19 31
#define EXECUTE_CACHE_9_9 33
#define EXECUTE_CACHE_9_7 35
#define FREE_REFERENCES_LABEL_9_0 28
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd62;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_9_4);
      goto input_port_read_line_20;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto lambda_29;

    case 2:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_9_10);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_9_11);
      goto loop_16;

    case 5:
      current_block = (Rpc - LABEL_9_12);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_9_13);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_9_14);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_9_15);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_9_16);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_9_17);
      goto label_22;

    case 11:
      current_block = (Rpc - LABEL_9_18);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_9_20);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (input_port_read_line_28)
DEFLABEL (input_port_read_line_20)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_5])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  ((Wrd9.pObj) [2]) = (Wrd6.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_9_5);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_10);
  (Wrd9.Obj) = (current_block [OBJECT_9_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  goto loop_16;

DEFLABEL (loop_30)
DEFLABEL (loop_16)
  INTERRUPT_CHECK (26, LABEL_9_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_6]), 2);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9_13);
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == Rvl)
    goto label_37;
  if ((Wrd6.Obj) == (current_block [OBJECT_9_9]))
    goto label_31;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_9_20);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto loop_16;

DEFLABEL (label_31)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_36;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_35)
  (Rsp [2]) = (Wrd14.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_34;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_33)
  (Rsp [3]) = (Wrd23.Obj);

DEFLABEL (label_32)
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_19]));

DEFLABEL (label_34)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_7]), 1);

DEFLABEL (label_23)
  (Wrd23.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_8]), 1);

DEFLABEL (label_22)
  (Wrd14.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_44;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_43)
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if ((Wrd42.Lng) > 0)
    goto label_38;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_42;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd45.Obj) = ((Wrd47.pObj) [0]);

DEFLABEL (label_41)
  (Rsp [2]) = (Wrd45.Obj);
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_40;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd54.Obj) = ((Wrd56.pObj) [1]);

DEFLABEL (label_39)
  (Rsp [3]) = (Wrd54.Obj);
  goto label_32;

DEFLABEL (label_40)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_7]), 1);

DEFLABEL (label_26)
  (Wrd54.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_8]), 1);

DEFLABEL (label_25)
  (Wrd45.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_7]), 1);

DEFLABEL (label_24)
  (Wrd33.Obj) = Rvl;
  goto label_43;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define TAG_10_6 1
#define LABEL_10_8 7
#define LABEL_10_10 9
#define LABEL_10_11 11
#define LABEL_10_12 13
#define LABEL_10_13 15
#define LABEL_10_14 17
#define LABEL_10_15 19
#define LABEL_10_16 21
#define LABEL_10_18 23
#define LABEL_10_22 25
#define LABEL_10_24 27
#define LABEL_10_25 29
#define LABEL_10_20 31
#define ENVIRONMENT_LABEL_10_3 55
#define DEBUGGING_LABEL_10_2 54
#define OBJECT_10_8 53
#define OBJECT_10_7 52
#define OBJECT_10_6 51
#define OBJECT_10_5 50
#define OBJECT_10_4 49
#define OBJECT_10_3 48
#define OBJECT_10_2 47
#define OBJECT_10_1 46
#define OBJECT_10_0 45
#define EXECUTE_CACHE_10_23 33
#define EXECUTE_CACHE_10_21 35
#define EXECUTE_CACHE_10_19 37
#define EXECUTE_CACHE_10_17 39
#define EXECUTE_CACHE_10_9 41
#define EXECUTE_CACHE_10_7 43
#define FREE_REFERENCES_LABEL_10_0 32
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_10_4);
      goto input_port_read_string_21;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto lambda_30;

    case 2:
      current_block = (Rpc - LABEL_10_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_10_10);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_10_11);
      goto loop_17;

    case 5:
      current_block = (Rpc - LABEL_10_12);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_10_13);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_10_14);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_10_15);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_10_16);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_10_18);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_10_22);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_10_24);
      goto label_26;

    case 13:
      current_block = (Rpc - LABEL_10_25);
      goto label_27;

    case 14:
      current_block = (Rpc - LABEL_10_20);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (input_port_read_string_29)
DEFLABEL (input_port_read_string_21)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_5])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  ((Wrd11.pObj) [3]) = (Wrd5.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_10_5);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_10);
  (Wrd9.Obj) = (current_block [OBJECT_10_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  goto loop_17;

DEFLABEL (loop_31)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_10_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_6]), 2);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10_13);
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == Rvl)
    goto label_37;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_18]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_10_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_22]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_23]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_10_22);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_35;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_34)
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_33;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_32)
  (Rsp [3]) = (Wrd14.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_17]));

DEFLABEL (label_33)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_25]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_7]), 1);

DEFLABEL (label_27)
  (Wrd14.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_24]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_8]), 1);

DEFLABEL (label_26)
  (Wrd5.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_36)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_20]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_10_20);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto loop_17;

DEFLABEL (label_37)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_44;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_43)
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if ((Wrd23.Lng) > 0)
    goto label_38;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_42;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [0]);

DEFLABEL (label_41)
  (Rsp [2]) = (Wrd26.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_40;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_39)
  (Rsp [3]) = (Wrd35.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_17]));

DEFLABEL (label_40)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_16]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_7]), 1);

DEFLABEL (label_25)
  (Wrd35.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_15]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_8]), 1);

DEFLABEL (label_24)
  (Wrd26.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_14]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_7]), 1);

DEFLABEL (label_23)
  (Wrd14.Obj) = Rvl;
  goto label_43;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define TAG_11_6 1
#define LABEL_11_8 7
#define LABEL_11_10 9
#define LABEL_11_11 11
#define LABEL_11_12 13
#define LABEL_11_13 15
#define ENVIRONMENT_LABEL_11_3 31
#define DEBUGGING_LABEL_11_2 30
#define OBJECT_11_4 29
#define OBJECT_11_3 28
#define OBJECT_11_2 27
#define OBJECT_11_1 26
#define OBJECT_11_0 25
#define EXECUTE_CACHE_11_15 17
#define EXECUTE_CACHE_11_14 19
#define EXECUTE_CACHE_11_9 21
#define EXECUTE_CACHE_11_7 23
#define FREE_REFERENCES_LABEL_11_0 16
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_11_4);
      goto input_port_discard_chars_11;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto lambda_15;

    case 2:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_11_10);
      goto loop_7;

    case 4:
      current_block = (Rpc - LABEL_11_11);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_11_12);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_11_13);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (input_port_discard_chars_14)
DEFLABEL (input_port_discard_chars_11)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_5])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  ((Wrd11.pObj) [3]) = (Wrd5.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_11_5);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_8);
  (* (--Rsp)) = Rvl;
  goto loop_7;

DEFLABEL (loop_16)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_11_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_3]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11_12);
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd6.Obj) == Rvl))
    goto label_17;
  Rvl = (current_block [OBJECT_11_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [3]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_15]));

DEFLABEL (label_18)
  Rsp = (& (Rsp [1]));
  goto loop_7;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define ENVIRONMENT_LABEL_12_3 9
#define DEBUGGING_LABEL_12_2 8
#define OBJECT_12_1 7
#define OBJECT_12_0 6
#define FREE_REFERENCES_LABEL_12_0 6
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_12_4);
      goto make_accum_1;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_accum_4)
DEFLABEL (make_accum_1)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Wrd10.Obj) = (current_block [OBJECT_12_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_5 3
#define LABEL_13_6 5
#define LABEL_13_4 7
#define LABEL_13_7 9
#define LABEL_13_8 11
#define LABEL_13_9 13
#define LABEL_13_11 15
#define LABEL_13_12 17
#define LABEL_13_13 19
#define LABEL_13_14 21
#define LABEL_13_15 23
#define LABEL_13_16 25
#define LABEL_13_10 27
#define LABEL_13_17 29
#define LABEL_13_18 31
#define ENVIRONMENT_LABEL_13_3 44
#define DEBUGGING_LABEL_13_2 43
#define OBJECT_13_7 42
#define OBJECT_13_6 41
#define OBJECT_13_5 40
#define OBJECT_13_4 39
#define OBJECT_13_3 38
#define OBJECT_13_2 37
#define OBJECT_13_1 36
#define OBJECT_13_0 35
#define EXECUTE_CACHE_13_19 33
#define FREE_REFERENCES_LABEL_13_0 32
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd74;
  machine_word Wrd67;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd60;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd77;
  machine_word Wrd75;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd87;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd100;
  machine_word Wrd102;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd120;
  machine_word Wrd114;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_10;

    case 1:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_7;

    case 2:
      current_block = (Rpc - LABEL_13_4);
      goto accum_18;

    case 3:
      current_block = (Rpc - LABEL_13_7);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_13_8);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_13_9);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_13_11);
      goto label_28;

    case 7:
      current_block = (Rpc - LABEL_13_12);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_13_13);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_13_14);
      goto label_27;

    case 10:
      current_block = (Rpc - LABEL_13_15);
      goto label_25;

    case 11:
      current_block = (Rpc - LABEL_13_16);
      goto label_26;

    case 12:
      current_block = (Rpc - LABEL_13_10);
      goto continuation_6;

    case 13:
      current_block = (Rpc - LABEL_13_17);
      goto label_29;

    case 14:
      current_block = (Rpc - LABEL_13_18);
      goto label_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (accum_32)
DEFLABEL (accum_18)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_57;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_56)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd18.uLng) == 30))
    goto label_55;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd16.uLng)));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_54)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_53;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_52)
  (Wrd32.Obj) = (* (Rsp++));
  if ((Wrd23.Obj) == (Wrd32.Obj))
    goto label_44;

DEFLABEL (label_43)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_42;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_41)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_40;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd42.Obj) = ((Wrd44.pObj) [0]);

DEFLABEL (label_39)
  (Wrd51.Obj) = (* (Rsp++));
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd87.uLng) == 30))
    goto label_38;
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd82.uLng) == 26))
    goto label_38;
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd85.Obj) = ((Wrd84.pObj) [1]);
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  if (! (((unsigned long) (Wrd83.Lng)) < ((unsigned long) (Wrd86.Lng))))
    goto label_38;
  (Wrd80.Obj) = (Rsp [0]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 2))
    goto label_38;
  (Wrd75.uLng) = (OBJECT_DATUM (Wrd51.Obj));
  (Wrd77.pChr) = (& ((Wrd84.pChr) [(Wrd75.Lng)]));
  ((Wrd77.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd80.Obj)));

DEFLABEL (label_37)
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 1))
    goto label_36;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd52.Obj) = ((Wrd54.pObj) [1]);

DEFLABEL (label_35)
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  (Wrd63.Lng) = ((Wrd62.Lng) + 1L);
  (Wrd61.Obj) = (LONG_TO_FIXNUM (Wrd63.Lng));
  (Wrd68.Obj) = (Rsp [1]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_34;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  ((Wrd67.pObj) [1]) = (Wrd61.Obj);

DEFLABEL (label_33)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_16]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_6]), 2);

DEFLABEL (label_26)
  goto label_33;

DEFLABEL (label_36)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 1);

DEFLABEL (label_25)
  (Wrd52.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd90.Obj) = (Rsp [0]);
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_14]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_5]), 3);

DEFLABEL (label_27)
  goto label_37;

DEFLABEL (label_40)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_24)
  (Wrd42.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd103.Obj) = (Rsp [3]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd104.uLng) == 1))
    goto label_51;
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd100.Obj) = ((Wrd102.pObj) [1]);

DEFLABEL (label_50)
  (Wrd109.Lng) = (FIXNUM_TO_LONG (Wrd100.Obj));
  (Wrd112.Lng) = (LEFT_SHIFT ((Wrd109.Lng), 1));
  (Wrd113.Obj) = (LONG_TO_FIXNUM (Wrd112.Lng));
  (* (--Rsp)) = (Wrd113.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_4]), 1);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_13_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd13.Obj) = (Rsp [6]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_49;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_48)
  (Wrd19.Obj) = (current_block [OBJECT_13_7]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [8]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_47;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_46)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_19]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Wrd114.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd114.Obj);
  (Wrd120.uLng) = (OBJECT_TYPE (Wrd114.Obj));
  if ((Wrd120.uLng) == 1)
    goto label_45;
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 2);

DEFLABEL (label_45)
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd114.Obj));
  (Wrd118.Obj) = (Rsp [1]);
  ((Wrd117.pObj) [0]) = (Wrd118.Obj);
  Rsp = (& (Rsp [3]));
  goto label_43;

DEFLABEL (label_47)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_18]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_17]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 1);

DEFLABEL (label_28)
  (Wrd100.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 1);

DEFLABEL (label_22)
  (Wrd23.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_56;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_13_6);
  goto label_43;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define ENVIRONMENT_LABEL_14_3 14
#define DEBUGGING_LABEL_14_2 13
#define OBJECT_14_1 12
#define OBJECT_14_0 11
#define EXECUTE_CACHE_14_7 9
#define FREE_REFERENCES_LABEL_14_0 8
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_14_4);
      goto accum__string_2;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (accum__string_7)
DEFLABEL (accum__string_2)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_11;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_10)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_9;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (label_9)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_5)
  (Wrd14.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_10;

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
input_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
  INVOKE_INTERFACE_DECLS
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
      goto accum_count_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (accum_count_3)
DEFLABEL (accum_count_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_4;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  Rvl = ((Wrd7.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 8
#define DEBUGGING_LABEL_16_2 7
#define OBJECT_16_2 6
#define OBJECT_16_1 5
#define OBJECT_16_0 4
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto make_eof_object_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_eof_object_3)
DEFLABEL (make_eof_object_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (current_block [OBJECT_16_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_16_1]);
  (Rsp [1]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 8
#define DEBUGGING_LABEL_17_2 7
#define OBJECT_17_2 6
#define OBJECT_17_1 5
#define OBJECT_17_0 4
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto eof_object_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (eof_object_3)
DEFLABEL (eof_object_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define ENVIRONMENT_LABEL_18_3 11
#define DEBUGGING_LABEL_18_2 10
#define OBJECT_18_3 9
#define OBJECT_18_2 8
#define OBJECT_18_1 7
#define OBJECT_18_0 6
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto eof_objectP_1;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (eof_objectP_4)
DEFLABEL (eof_objectP_1)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_18_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Wrd7.Obj) = (Rsp [0]);
  if ((Wrd7.Obj) == Rvl)
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_18_3]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define ENVIRONMENT_LABEL_19_3 11
#define DEBUGGING_LABEL_19_2 10
#define OBJECT_19_0 9
#define EXECUTE_CACHE_19_6 7
#define FREE_REFERENCES_LABEL_19_0 6
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto input_port_eofP_2;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (input_port_eofP_5)
DEFLABEL (input_port_eofP_2)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
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

#define LABEL_20_4 3
#define LABEL_20_5 5
#define ENVIRONMENT_LABEL_20_3 11
#define DEBUGGING_LABEL_20_2 10
#define OBJECT_20_0 9
#define EXECUTE_CACHE_20_6 7
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto input_port_line_2;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (input_port_line_5)
DEFLABEL (input_port_line_2)
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

#define LABEL_21_4 3
#define LABEL_21_7 5
#define LABEL_21_5 7
#define LABEL_21_8 9
#define LABEL_21_10 11
#define LABEL_21_13 13
#define LABEL_21_14 15
#define LABEL_21_15 17
#define LABEL_21_16 19
#define LABEL_21_17 21
#define ENVIRONMENT_LABEL_21_3 36
#define DEBUGGING_LABEL_21_2 35
#define OBJECT_21_3 34
#define OBJECT_21_2 33
#define OBJECT_21_1 32
#define OBJECT_21_0 31
#define EXECUTE_CACHE_21_12 23
#define EXECUTE_CACHE_21_11 25
#define EXECUTE_CACHE_21_9 27
#define EXECUTE_CACHE_21_6 29
#define FREE_REFERENCES_LABEL_21_0 22
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd27;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_21_4);
      goto char_readyP_15;

    case 1:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_21_8);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_21_10);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_21_13);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_21_14);
      goto loop_11;

    case 7:
      current_block = (Rpc - LABEL_21_15);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_21_16);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_21_17);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_readyP_21)
DEFLABEL (char_readyP_15)
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
  (Wrd6.Obj) = (Rsp [1]);
  if ((Wrd6.Obj) == (current_block [OBJECT_21_1]))
    goto label_29;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_21_7);
  (Wrd13.Obj) = (Rsp [1]);

DEFLABEL (label_28)
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_27;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if ((Wrd27.Lng) > 0)
    goto label_24;

DEFLABEL (label_23)
  (Wrd21.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_9]));

DEFLABEL (label_24)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_21_10);
  (Wrd5.Obj) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_26;
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_26;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd15.Lng) + (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_26;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_25)
  goto loop_11;

DEFLABEL (label_26)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_27)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_24;

DEFLABEL (label_29)
  (Wrd13.Obj) = (current_block [OBJECT_21_2]);
  goto label_28;

DEFLABEL (loop_22)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_21_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_9]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_21_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  Rvl = (current_block [OBJECT_21_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_11]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_21_16);
  (Wrd5.Obj) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_33;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_33;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd17.Lng) < (Wrd19.Lng))
    goto label_32;

DEFLABEL (label_31)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_32)
  goto loop_11;

DEFLABEL (label_33)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  goto label_32;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_7 7
#define LABEL_22_8 9
#define LABEL_22_6 11
#define ENVIRONMENT_LABEL_22_3 16
#define DEBUGGING_LABEL_22_2 15
#define OBJECT_22_2 14
#define OBJECT_22_1 13
#define OBJECT_22_0 12
#define FREE_REFERENCES_LABEL_22_0 12
#define NUMBER_OF_LINKER_SECTIONS_22_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__read_char_7;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto loop_5;

    case 2:
      current_block = (Rpc - LABEL_22_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_22_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_22_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__read_char_12)
DEFLABEL (Z__read_char_7)
  INTERRUPT_CHECK (26, LABEL_22_4);
  goto loop_5;

DEFLABEL (loop_13)
DEFLABEL (loop_5)
  INTERRUPT_CHECK (26, LABEL_22_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_18;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_18;
  (Wrd9.Obj) = ((Wrd15.pObj) [2]);

DEFLABEL (label_17)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_16;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd31.Lng))))
    goto label_16;
  (Wrd26.Obj) = ((Wrd29.pObj) [6]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_15)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  goto loop_5;

DEFLABEL (label_16)
  (Wrd34.Obj) = (current_block [OBJECT_22_2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_22_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_9)
  (Wrd9.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define ENVIRONMENT_LABEL_23_3 13
#define DEBUGGING_LABEL_23_2 12
#define OBJECT_23_0 11
#define EXECUTE_CACHE_23_7 7
#define EXECUTE_CACHE_23_6 9
#define FREE_REFERENCES_LABEL_23_0 6
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto read_char_1;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_char_4)
DEFLABEL (read_char_1)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_7 7
#define ENVIRONMENT_LABEL_24_3 17
#define DEBUGGING_LABEL_24_2 16
#define OBJECT_24_0 15
#define EXECUTE_CACHE_24_9 9
#define EXECUTE_CACHE_24_8 11
#define EXECUTE_CACHE_24_6 13
#define FREE_REFERENCES_LABEL_24_0 8
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_24_4);
      goto unread_char_2;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unread_char_5)
DEFLABEL (unread_char_2)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_7);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_7 7
#define LABEL_25_8 9
#define LABEL_25_6 11
#define ENVIRONMENT_LABEL_25_3 16
#define DEBUGGING_LABEL_25_2 15
#define OBJECT_25_2 14
#define OBJECT_25_1 13
#define OBJECT_25_0 12
#define FREE_REFERENCES_LABEL_25_0 12
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_25_4);
      goto Z__peek_char_7;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto loop_5;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_25_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_25_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__peek_char_12)
DEFLABEL (Z__peek_char_7)
  INTERRUPT_CHECK (26, LABEL_25_4);
  goto loop_5;

DEFLABEL (loop_13)
DEFLABEL (loop_5)
  INTERRUPT_CHECK (26, LABEL_25_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_18;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_18;
  (Wrd9.Obj) = ((Wrd15.pObj) [2]);

DEFLABEL (label_17)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_16;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd31.Lng))))
    goto label_16;
  (Wrd26.Obj) = ((Wrd29.pObj) [8]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_15)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  goto loop_5;

DEFLABEL (label_16)
  (Wrd34.Obj) = (current_block [OBJECT_25_2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_8]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_25_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_9)
  (Wrd9.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define ENVIRONMENT_LABEL_26_3 13
#define DEBUGGING_LABEL_26_2 12
#define OBJECT_26_0 11
#define EXECUTE_CACHE_26_7 7
#define EXECUTE_CACHE_26_6 9
#define FREE_REFERENCES_LABEL_26_0 6
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_26_4);
      goto peek_char_1;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (peek_char_4)
DEFLABEL (peek_char_1)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_7 7
#define LABEL_27_9 9
#define ENVIRONMENT_LABEL_27_3 24
#define DEBUGGING_LABEL_27_2 23
#define OBJECT_27_3 22
#define OBJECT_27_2 21
#define OBJECT_27_1 20
#define OBJECT_27_0 19
#define EXECUTE_CACHE_27_11 11
#define EXECUTE_CACHE_27_10 13
#define EXECUTE_CACHE_27_8 15
#define EXECUTE_CACHE_27_6 17
#define FREE_REFERENCES_LABEL_27_0 10
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto read_char_no_hang_4;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_27_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_27_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_char_no_hang_7)
DEFLABEL (read_char_no_hang_4)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_27_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd7.Obj) = (current_block [OBJECT_27_1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27_2]);
  (Rsp [1]) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 2);

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_11]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define ENVIRONMENT_LABEL_28_3 13
#define DEBUGGING_LABEL_28_2 12
#define OBJECT_28_0 11
#define EXECUTE_CACHE_28_7 7
#define EXECUTE_CACHE_28_6 9
#define FREE_REFERENCES_LABEL_28_0 6
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      goto read_string_1;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_string_4)
DEFLABEL (read_string_1)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define ENVIRONMENT_LABEL_29_3 13
#define DEBUGGING_LABEL_29_2 12
#define OBJECT_29_0 11
#define EXECUTE_CACHE_29_7 7
#define EXECUTE_CACHE_29_6 9
#define FREE_REFERENCES_LABEL_29_0 6
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_29_4);
      goto read_1;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_4)
DEFLABEL (read_1)
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
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_10 7
#define LABEL_30_7 9
#define TAG_30_8 3
#define LABEL_30_12 11
#define LABEL_30_13 13
#define LABEL_30_15 15
#define ENVIRONMENT_LABEL_30_3 34
#define DEBUGGING_LABEL_30_2 33
#define OBJECT_30_5 32
#define OBJECT_30_4 31
#define OBJECT_30_3 30
#define OBJECT_30_2 29
#define OBJECT_30_1 28
#define OBJECT_30_0 27
#define EXECUTE_CACHE_30_16 17
#define EXECUTE_CACHE_30_14 19
#define EXECUTE_CACHE_30_11 21
#define EXECUTE_CACHE_30_9 23
#define EXECUTE_CACHE_30_6 25
#define FREE_REFERENCES_LABEL_30_0 16
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd16;
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
      goto read_file_13;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_30_10);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_30_7);
      goto lambda_17;

    case 4:
      current_block = (Rpc - LABEL_30_12);
      goto loop_9;

    case 5:
      current_block = (Rpc - LABEL_30_13);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_30_15);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_file_16)
DEFLABEL (read_file_13)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_7])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_9]));

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_30_7);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  if (! ((Wrd10.Obj) == (current_block [OBJECT_30_1])))
    goto label_20;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_10);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_19)
  (Wrd16.Obj) = (current_block [OBJECT_30_2]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto loop_9;

DEFLABEL (label_20)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd10.Obj);
  goto label_19;

DEFLABEL (loop_18)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_30_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_30_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_5]), 2);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_30_15);
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == Rvl)
    goto label_21;
  (Wrd11.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_9;

DEFLABEL (label_21)
  (Wrd13.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd13.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_16]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define ENVIRONMENT_LABEL_31_3 13
#define DEBUGGING_LABEL_31_2 12
#define OBJECT_31_0 11
#define EXECUTE_CACHE_31_7 7
#define EXECUTE_CACHE_31_6 9
#define FREE_REFERENCES_LABEL_31_0 6
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_31_4);
      goto read_line_1;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_line_4)
DEFLABEL (read_line_1)
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
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define ENVIRONMENT_LABEL_32_3 13
#define DEBUGGING_LABEL_32_2 12
#define OBJECT_32_0 11
#define EXECUTE_CACHE_32_7 7
#define EXECUTE_CACHE_32_6 9
#define FREE_REFERENCES_LABEL_32_0 6
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_32_4);
      goto read_stringB_1;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_stringB_4)
DEFLABEL (read_stringB_1)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define ENVIRONMENT_LABEL_33_3 13
#define DEBUGGING_LABEL_33_2 12
#define OBJECT_33_0 11
#define EXECUTE_CACHE_33_7 7
#define EXECUTE_CACHE_33_6 9
#define FREE_REFERENCES_LABEL_33_0 6
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
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
      goto read_substringB_1;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_substringB_4)
DEFLABEL (read_substringB_1)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_8 5
#define LABEL_34_6 7
#define ENVIRONMENT_LABEL_34_3 17
#define DEBUGGING_LABEL_34_2 16
#define OBJECT_34_0 15
#define EXECUTE_CACHE_34_9 9
#define EXECUTE_CACHE_34_7 11
#define EXECUTE_CACHE_34_5 13
#define FREE_REFERENCES_LABEL_34_0 8
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
input_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_34_4);
      goto optional_input_port_3;

    case 1:
      current_block = (Rpc - LABEL_34_8);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_34_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (optional_input_port_6)
DEFLABEL (optional_input_port_3)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_34_0])))
    goto label_7;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_5]));

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_8)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_34_8);
  goto label_8;

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
input_so_e8ade5725d27c3d0 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	1,
	1,
	1,
	0,
	1,
	1,
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
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	1,
	1,
	0,
	1
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

static const struct liarc_code_S arr_decl_input_so_e8ade5725d27c3d0 [34] =
  {
    { "input_so_code_1", 2, input_so_code_1 },
    { "input_so_code_2", 3, input_so_code_2 },
    { "input_so_code_3", 2, input_so_code_3 },
    { "input_so_code_4", 2, input_so_code_4 },
    { "input_so_code_5", 3, input_so_code_5 },
    { "input_so_code_6", 2, input_so_code_6 },
    { "input_so_code_7", 2, input_so_code_7 },
    { "input_so_code_8", 3, input_so_code_8 },
    { "input_so_code_9", 13, input_so_code_9 },
    { "input_so_code_10", 15, input_so_code_10 },
    { "input_so_code_11", 7, input_so_code_11 },
    { "input_so_code_12", 2, input_so_code_12 },
    { "input_so_code_13", 15, input_so_code_13 },
    { "input_so_code_14", 3, input_so_code_14 },
    { "input_so_code_15", 1, input_so_code_15 },
    { "input_so_code_16", 1, input_so_code_16 },
    { "input_so_code_17", 1, input_so_code_17 },
    { "input_so_code_18", 2, input_so_code_18 },
    { "input_so_code_19", 2, input_so_code_19 },
    { "input_so_code_20", 2, input_so_code_20 },
    { "input_so_code_21", 10, input_so_code_21 },
    { "input_so_code_22", 5, input_so_code_22 },
    { "input_so_code_23", 2, input_so_code_23 },
    { "input_so_code_24", 3, input_so_code_24 },
    { "input_so_code_25", 5, input_so_code_25 },
    { "input_so_code_26", 2, input_so_code_26 },
    { "input_so_code_27", 4, input_so_code_27 },
    { "input_so_code_28", 2, input_so_code_28 },
    { "input_so_code_29", 2, input_so_code_29 },
    { "input_so_code_30", 7, input_so_code_30 },
    { "input_so_code_31", 2, input_so_code_31 },
    { "input_so_code_32", 2, input_so_code_32 },
    { "input_so_code_33", 2, input_so_code_33 },
    { "input_so_code_34", 3, input_so_code_34 }
  };

int
decl_input_so_e8ade5725d27c3d0 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_input_so_e8ade5725d27c3d0);
  return (0);
}

DECLARE_COMPILED_CODE ("input.so", 3, decl_input_so_e8ade5725d27c3d0, input_so_e8ade5725d27c3d0)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_input_so_data_e8ade5725d27c3d0 [3254] =
  "\x44\x3a\x9c\x07\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x82\x88\x85\xc2\xba\x81\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x83\x88\x28\x0d\xbc"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x84\x88\x28\x0d\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x85\x88\x02\xb2\x81\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x86\x88\x28\x0d\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x28\x0d\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0f\xc1\x1c\xc1\x1c\xc2\x1c\x02\x86\x80\xc1\x1c\x02\x0d\x1c"
  "\x28\x0d\x1c\x28\xb4\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b"
  "\x1b\x02\x86\x80\x1b\x02\x1b\x28\x1b\x28\xb4\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x02\x86"
  "\x1b\x28\x1b\x28\xb4\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x80\x1b\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\xc2"
  "\xc3\x1b\x1b\xc1\x1b\xc2\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x1b\x86\x02"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x86\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x02\x86\x22\x29\x22\x29\x21"
  "\x17\x2b\xbc\x1d\xb0\x02\x88\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x80\x1d\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x85\xb2\x81\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28"
  "\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x02\xb2\x81\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\xba\x1d\xb0\x02\x88\x0d\x1c\x28\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x86\x02"
  "\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x1c\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x02\x86\x08\x1d\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\xb8\x17\x1c\x88\x1b\xb0\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb2\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb4\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb6\x2a\xb5\x2a\xb3\x2a\xb1\x2a"
  "\x17\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d"
  "\x1b\x0d\x0d\x0d\x0d\x0d\x1b\x0d\x0d\x1b\x1b\x1b\x1b\x0d\x0d\x1b"
  "\x1b\x0d\x1b\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02"
  "\x54\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74"
  "\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f"
  "\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63"
  "\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x69\x6e\x70\x75\x74"
  "\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x03\x1b\x70\x6f\x72\x74"
  "\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x63\x68\x61\x72\x2d"
  "\x72\x65\x61\x64\x79\x3f\x02\x05\x06\x81\x83\x02\x04\x04\x83\x04"
  "\x05\x0b\x02\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x08"
  "\x08\x81\x83\x02\x07\x06\x81\x83\x02\x06\x04\x83\x04\x07\x0d\x02"
  "\x03\x19\x70\x6f\x72\x74\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e"
  "\x2f\x72\x65\x61\x64\x2d\x63\x68\x61\x72\x02\x0a\x06\x81\x83\x02"
  "\x09\x04\x83\x04\x05\x0b\x02\x03\x1b\x70\x6f\x72\x74\x2f\x6f\x70"
  "\x65\x72\x61\x74\x69\x6f\x6e\x2f\x75\x6e\x72\x65\x61\x64\x2d\x63"
  "\x68\x61\x72\x02\x0c\x06\x81\x85\x02\x0b\x04\x84\x06\x05\x0b\x02"
  "\x08\x0f\x08\x81\x83\x02\x0e\x06\x81\x83\x02\x0d\x04\x83\x04\x07"
  "\x0d\x02\x03\x19\x70\x6f\x72\x74\x2f\x6f\x70\x65\x72\x61\x74\x69"
  "\x6f\x6e\x2f\x70\x65\x65\x6b\x2d\x63\x68\x61\x72\x02\x11\x06\x81"
  "\x83\x02\x10\x04\x83\x04\x05\x0b\x09\x02\x08\x03\x0f\x78\x73\x74"
  "\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x06\x1b\x69\x6e\x70"
  "\x75\x74\x2d\x70\x6f\x72\x74\x2f\x72\x65\x61\x64\x2d\x73\x75\x62"
  "\x73\x74\x72\x69\x6e\x67\x21\x0a\x03\x13\x06\x81\x89\x02\x12\x04"
  "\x84\x06\x05\x0e\x0b\x02\x09\x03\x1e\x70\x6f\x72\x74\x2f\x6f\x70"
  "\x65\x72\x61\x74\x69\x6f\x6e\x2f\x72\x65\x61\x64\x2d\x73\x75\x62"
  "\x73\x74\x72\x69\x6e\x67\x02\x16\x08\x81\x89\x02\x15\x06\x81\x89"
  "\x02\x14\x04\x86\x0a\x07\x0e\x0c\x02\x0a\x01\x0b\x04\x63\x61\x72"
  "\x0d\x04\x63\x64\x72\x0e\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65"
  "\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70\x65"
  "\x0f\x09\x10\x73\x74\x72\x69\x6e\x67\x2d\x61\x6c\x6c\x6f\x63\x61"
  "\x74\x65\x10\x81\x01\x09\x62\x6c\x6f\x63\x6b\x69\x6e\x67\x11\x05"
  "\x1e\x70\x6f\x72\x74\x2f\x77\x69\x74\x68\x2d\x69\x6e\x70\x75\x74"
  "\x2d\x62\x6c\x6f\x63\x6b\x69\x6e\x67\x2d\x6d\x6f\x64\x65\x12\x03"
  "\x04\x0d\x73\x74\x72\x69\x6e\x67\x2d\x68\x65\x61\x64\x21\x13\x04"
  "\x06\x61\x63\x63\x75\x6d\x14\x05\x23\x1c\x81\x89\x02\x22\x1a\x81"
  "\x89\x02\x21\x18\x81\x89\x02\x20\x16\x81\x89\x02\x1f\x14\x81\x89"
  "\x02\x1e\x12\x81\x89\x02\x1d\x10\x81\x89\x02\x1c\x0e\x81\x87\x02"
  "\x1b\x0c\x81\x87\x02\x1a\x0a\x81\x85\x02\x19\x08\x81\x83\x02\x18"
  "\x06\x81\x83\x02\x17\x04\x83\x04\x1b\x31\x15\x02\x0b\x0d\x0e\x0f"
  "\x09\x10\x81\x01\x11\x05\x12\x03\x04\x13\x04\x11\x63\x68\x61\x72"
  "\x2d\x73\x65\x74\x2d\x6d\x65\x6d\x62\x65\x72\x3f\x16\x04\x14\x04"
  "\x17\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x75\x6e\x72\x65"
  "\x61\x64\x2d\x63\x68\x61\x72\x17\x07\x32\x20\x81\x89\x02\x31\x1e"
  "\x81\x89\x02\x30\x1c\x81\x89\x02\x2f\x1a\x81\x89\x02\x2e\x18\x81"
  "\x89\x02\x2d\x16\x81\x89\x02\x2c\x14\x81\x89\x02\x2b\x12\x81\x89"
  "\x02\x2a\x10\x81\x89\x02\x29\x0e\x81\x87\x02\x28\x0c\x81\x87\x02"
  "\x27\x0a\x81\x85\x02\x26\x08\x81\x83\x02\x25\x06\x81\x83\x02\x24"
  "\x04\x84\x06\x1f\x38\x18\x02\x0c\x02\x0f\x09\x11\x05\x12\x03\x04"
  "\x16\x04\x17\x05\x39\x10\x81\x87\x02\x38\x0e\x81\x87\x02\x37\x0c"
  "\x81\x85\x02\x36\x0a\x81\x85\x02\x35\x08\x81\x83\x02\x34\x06\x81"
  "\x83\x02\x33\x04\x84\x06\x0f\x20\x16\x02\x0d\x10\x3b\x06\x81\x83"
  "\x02\x3a\x04\x83\x04\x05\x0a\x12\x02\x0e\x09\x73\x65\x74\x2d\x63"
  "\x64\x72\x21\x0c\x73\x74\x72\x69\x6e\x67\x2d\x73\x65\x74\x21\x10"
  "\x0e\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x0d"
  "\x09\x73\x65\x74\x2d\x63\x61\x72\x21\x07\x10\x73\x75\x62\x73\x74"
  "\x72\x69\x6e\x67\x2d\x6d\x6f\x76\x65\x21\x02\x4a\x20\x81\x8d\x02"
  "\x49\x1e\x81\x89\x02\x48\x1c\x81\x87\x02\x47\x1a\x81\x85\x02\x46"
  "\x18\x81\x85\x02\x45\x16\x81\x85\x02\x44\x14\x81\x87\x02\x43\x12"
  "\x81\x85\x02\x42\x10\x81\x89\x02\x41\x0e\x81\x87\x02\x40\x0c\x81"
  "\x85\x02\x3f\x0a\x81\x85\x02\x3e\x08\x84\x06\x3d\x06\x81\x85\x02"
  "\x3c\x04\x81\x83\x02\x1f\x2d\x11\x02\x0f\x0e\x0d\x04\x13\x02\x4d"
  "\x08\x81\x85\x02\x4c\x06\x81\x83\x02\x4b\x04\x83\x04\x07\x0f\x13"
  "\x02\x10\x0e\x4e\x04\x83\x04\x03\x10\x02\x11\x0f\x09\x4f\x04\x83"
  "\x04\x03\x0e\x02\x12\x0f\x09\x50\x04\x82\x02\x03\x0d\x02\x13\x0f"
  "\x09\x52\x06\x81\x83\x02\x51\x04\x83\x04\x05\x0c\x02\x14\x05\x65"
  "\x6f\x66\x3f\x04\x0f\x70\x6f\x72\x74\x2f\x6f\x70\x65\x72\x61\x74"
  "\x69\x6f\x6e\x19\x02\x54\x06\x81\x83\x02\x53\x04\x83\x04\x05\x0c"
  "\x1a\x02\x15\x0b\x69\x6e\x70\x75\x74\x2d\x6c\x69\x6e\x65\x04\x19"
  "\x02\x56\x06\x81\x83\x02\x55\x04\x83\x04\x05\x0c\x19\x02\x16\x08"
  "\x0c\x63\x68\x61\x72\x2d\x72\x65\x61\x64\x79\x3f\x1b\x04\x14\x6f"
  "\x70\x74\x69\x6f\x6e\x61\x6c\x2d\x69\x6e\x70\x75\x74\x2d\x70\x6f"
  "\x72\x74\x1c\x03\x17\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f"
  "\x63\x68\x61\x72\x2d\x72\x65\x61\x64\x79\x3f\x1d\x02\x10\x72\x65"
  "\x61\x6c\x2d\x74\x69\x6d\x65\x2d\x63\x6c\x6f\x63\x6b\x04\x24\x67"
  "\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x65\x78\x61\x63\x74\x2d\x6e"
  "\x6f\x6e\x6e\x65\x67\x61\x74\x69\x76\x65\x2d\x69\x6e\x74\x65\x67"
  "\x65\x72\x05\x60\x16\x81\x87\x02\x5f\x14\x81\x87\x02\x5e\x12\x81"
  "\x87\x02\x5d\x10\x81\x87\x02\x5c\x0e\x81\x85\x02\x5b\x0c\x81\x85"
  "\x02\x5a\x0a\x81\x85\x02\x59\x08\x81\x85\x02\x58\x06\x81\x85\x02"
  "\x57\x04\x84\x02\x15\x25\x1e\x02\x17\x65\x0c\x81\x83\x02\x64\x0a"
  "\x81\x87\x02\x63\x08\x81\x87\x02\x62\x06\x81\x83\x02\x61\x04\x83"
  "\x04\x0b\x11\x1f\x02\x18\x0a\x72\x65\x61\x64\x2d\x63\x68\x61\x72"
  "\x20\x04\x1c\x03\x0b\x25\x72\x65\x61\x64\x2d\x63\x68\x61\x72\x21"
  "\x03\x67\x06\x81\x83\x02\x66\x04\x83\x02\x05\x0e\x22\x02\x19\x0c"
  "\x75\x6e\x72\x65\x61\x64\x2d\x63\x68\x61\x72\x23\x04\x0f\x67\x75"
  "\x61\x72\x61\x6e\x74\x65\x65\x2d\x63\x68\x61\x72\x04\x1c\x04\x17"
  "\x04\x6a\x08\x81\x87\x02\x69\x06\x81\x85\x02\x68\x04\x84\x04\x07"
  "\x12\x24\x02\x1a\x08\x6f\x0c\x81\x83\x02\x6e\x0a\x81\x87\x02\x6d"
  "\x08\x81\x87\x02\x6c\x06\x81\x83\x02\x6b\x04\x83\x04\x0b\x11\x02"
  "\x1b\x0a\x70\x65\x65\x6b\x2d\x63\x68\x61\x72\x25\x04\x1c\x03\x0b"
  "\x25\x70\x65\x65\x6b\x2d\x63\x68\x61\x72\x26\x03\x71\x06\x81\x83"
  "\x02\x70\x04\x83\x02\x05\x0e\x27\x02\x1c\x0f\x09\x12\x72\x65\x61"
  "\x64\x2d\x63\x68\x61\x72\x2d\x6e\x6f\x2d\x68\x61\x6e\x67\x28\x04"
  "\x1c\x03\x1d\x03\x10\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f"
  "\x65\x6f\x66\x3f\x29\x03\x15\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72"
  "\x74\x2f\x72\x65\x61\x64\x2d\x63\x68\x61\x72\x2a\x05\x75\x0a\x81"
  "\x83\x02\x74\x08\x81\x83\x02\x73\x06\x81\x83\x02\x72\x04\x83\x02"
  "\x09\x19\x2b\x02\x1d\x0c\x72\x65\x61\x64\x2d\x73\x74\x72\x69\x6e"
  "\x67\x2c\x04\x1c\x04\x17\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72\x74"
  "\x2f\x72\x65\x61\x64\x2d\x73\x74\x72\x69\x6e\x67\x2d\x03\x77\x06"
  "\x81\x87\x02\x76\x04\x84\x04\x05\x0e\x2e\x02\x1e\x05\x72\x65\x61"
  "\x64\x2f\x04\x1c\x04\x0d\x70\x61\x72\x73\x65\x2d\x6f\x62\x6a\x65"
  "\x63\x74\x03\x79\x06\x81\x85\x02\x78\x04\x84\x02\x05\x0e\x30\x02"
  "\x1f\x0f\x09\x08\x07\x6e\x65\x77\x65\x73\x74\x04\x19\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x76\x65"
  "\x72\x73\x69\x6f\x6e\x04\x15\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68"
  "\x2d\x69\x6e\x70\x75\x74\x2d\x66\x69\x6c\x65\x02\x19\x6e\x65\x61"
  "\x72\x65\x73\x74\x2d\x72\x65\x70\x6c\x2f\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x04\x2f\x03\x09\x72\x65\x76\x65\x72\x73\x65"
  "\x21\x06\x80\x01\x10\x81\x8b\x02\x7f\x0e\x81\x89\x02\x7e\x0c\x81"
  "\x89\x02\x7d\x0a\x81\x85\x02\x7c\x08\x81\x85\x02\x7b\x06\x81\x85"
  "\x02\x7a\x04\x84\x04\x0f\x23\x0f\x02\x20\x0a\x72\x65\x61\x64\x2d"
  "\x6c\x69\x6e\x65\x31\x04\x1c\x03\x15\x69\x6e\x70\x75\x74\x2d\x70"
  "\x6f\x72\x74\x2f\x72\x65\x61\x64\x2d\x6c\x69\x6e\x65\x32\x03\x82"
  "\x01\x06\x81\x83\x02\x81\x01\x04\x83\x02\x05\x0e\x33\x02\x21\x0d"
  "\x72\x65\x61\x64\x2d\x73\x74\x72\x69\x6e\x67\x21\x34\x04\x1c\x04"
  "\x18\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x72\x65\x61\x64"
  "\x2d\x73\x74\x72\x69\x6e\x67\x21\x35\x03\x84\x01\x06\x81\x87\x02"
  "\x83\x01\x04\x84\x04\x05\x0e\x36\x02\x22\x10\x72\x65\x61\x64\x2d"
  "\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x21\x37\x04\x1c\x06\x0a\x03"
  "\x86\x01\x06\x81\x89\x02\x85\x01\x04\x86\x08\x05\x0e\x38\x02\x23"
  "\x08\x02\x13\x63\x75\x72\x72\x65\x6e\x74\x2d\x69\x6e\x70\x75\x74"
  "\x2d\x70\x6f\x72\x74\x03\x0c\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72"
  "\x74\x3f\x04\x15\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x69\x6e"
  "\x70\x75\x74\x2d\x70\x6f\x72\x74\x04\x89\x01\x08\x81\x85\x02\x88"
  "\x01\x06\x81\x85\x02\x87\x01\x04\x84\x06\x07\x12\x23\x39\x39\x04"
  "\x38\x04\x36\x04\x33\x04\x0f\x04\x30\x04\x2e\x04\x2b\x04\x27\x04"
  "\x04\x24\x04\x22\x04\x1f\x04\x1e\x04\x19\x04\x1a\x04\x04\x0d\x04"
  "\x0e\x04\x10\x04\x13\x04\x11\x08\x12\x04\x16\x04\x18\x04\x15\x04"
  "\x0c\x04\x0b\x04\x09\x04\x04\x04\x04\x04\x04\x23\x1c\x37\x34\x31"
  "\x0a\x72\x65\x61\x64\x2d\x66\x69\x6c\x65\x2f\x2c\x28\x25\x26\x23"
  "\x20\x21\x1b\x10\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x6c"
  "\x69\x6e\x65\x29\x0c\x65\x6f\x66\x2d\x6f\x62\x6a\x65\x63\x74\x3f"
  "\x0b\x65\x6f\x66\x2d\x6f\x62\x6a\x65\x63\x74\x10\x6d\x61\x6b\x65"
  "\x2d\x65\x6f\x66\x2d\x6f\x62\x6a\x65\x63\x74\x0c\x61\x63\x63\x75"
  "\x6d\x2d\x63\x6f\x75\x6e\x74\x0e\x61\x63\x63\x75\x6d\x2d\x3e\x73"
  "\x74\x72\x69\x6e\x67\x14\x0b\x6d\x61\x6b\x65\x2d\x61\x63\x63\x75"
  "\x6d\x19\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x64\x69\x73"
  "\x63\x61\x72\x64\x2d\x63\x68\x61\x72\x73\x2d\x32\x0a\x35\x15\x69"
  "\x6e\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x70\x65\x65\x6b\x2d\x63"
  "\x68\x61\x72\x16\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x25"
  "\x70\x65\x65\x6b\x2d\x63\x68\x61\x72\x17\x2a\x16\x69\x6e\x70\x75"
  "\x74\x2d\x70\x6f\x72\x74\x2f\x25\x72\x65\x61\x64\x2d\x63\x68\x61"
  "\x72\x1d\x23\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74"
  "\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01"
  "\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
input_so_data_e8ade5725d27c3d0 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_input_so_data_e8ade5725d27c3d0 [0]))), (sizeof (prog_input_so_data_e8ade5725d27c3d0)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("input.so", input_so_data_e8ade5725d27c3d0)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("input.so", "56826d147ba1b0ab")
