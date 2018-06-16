/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:56-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define ENVIRONMENT_LABEL_1_3 13
#define DEBUGGING_LABEL_1_2 12
#define OBJECT_1_0 11
#define EXECUTE_CACHE_1_7 7
#define EXECUTE_CACHE_1_6 9
#define FREE_REFERENCES_LABEL_1_0 6
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto guarantee_syntactic_environment_1;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_syntactic_environment_4)
DEFLABEL (guarantee_syntactic_environment_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_1_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 11
#define DEBUGGING_LABEL_2_2 10
#define OBJECT_2_2 9
#define OBJECT_2_1 8
#define OBJECT_2_0 7
#define EXECUTE_CACHE_2_5 5
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto error_not_syntactic_environment_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_syntactic_environment_5)
DEFLABEL (error_not_syntactic_environment_2)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_2_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_2_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_2_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define ENVIRONMENT_LABEL_3_3 18
#define DEBUGGING_LABEL_3_2 17
#define EXECUTE_CACHE_3_10 9
#define EXECUTE_CACHE_3_9 11
#define EXECUTE_CACHE_3_8 13
#define EXECUTE_CACHE_3_6 15
#define FREE_REFERENCES_LABEL_3_0 8
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto Z___syntactic_environment_2;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___syntactic_environment_5)
DEFLABEL (Z___syntactic_environment_2)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (label_6)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_7)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_8 9
#define ENVIRONMENT_LABEL_4_3 18
#define DEBUGGING_LABEL_4_2 17
#define EXECUTE_CACHE_4_10 11
#define EXECUTE_CACHE_4_9 13
#define EXECUTE_CACHE_4_7 15
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_4_4);
      goto senv_type_3;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (senv_type_6)
DEFLABEL (senv_type_3)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_8);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define ENVIRONMENT_LABEL_5_3 13
#define DEBUGGING_LABEL_5_2 12
#define OBJECT_5_2 11
#define OBJECT_5_1 10
#define OBJECT_5_0 9
#define EXECUTE_CACHE_5_6 7
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto syntactic_environment_top_levelP_3;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (syntactic_environment_top_levelP_6)
DEFLABEL (syntactic_environment_top_levelP_3)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Rsp [0]) = Rvl;
  if (Rvl == (current_block [OBJECT_5_0]))
    goto label_8;
  if (Rvl == (current_block [OBJECT_5_1]))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_5_2]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define LABEL_6_8 9
#define ENVIRONMENT_LABEL_6_3 18
#define DEBUGGING_LABEL_6_2 17
#define EXECUTE_CACHE_6_10 11
#define EXECUTE_CACHE_6_9 13
#define EXECUTE_CACHE_6_7 15
#define FREE_REFERENCES_LABEL_6_0 10
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_6_4);
      goto syntactic_environment_lookup_3;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (syntactic_environment_lookup_6)
DEFLABEL (syntactic_environment_lookup_3)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_8);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_8 9
#define ENVIRONMENT_LABEL_7_3 18
#define DEBUGGING_LABEL_7_2 17
#define EXECUTE_CACHE_7_10 11
#define EXECUTE_CACHE_7_9 13
#define EXECUTE_CACHE_7_7 15
#define FREE_REFERENCES_LABEL_7_0 10
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_7_4);
      goto syntactic_environment_define_3;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (syntactic_environment_define_6)
DEFLABEL (syntactic_environment_define_3)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_8);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define LABEL_8_8 9
#define ENVIRONMENT_LABEL_8_3 18
#define DEBUGGING_LABEL_8_2 17
#define EXECUTE_CACHE_8_10 11
#define EXECUTE_CACHE_8_9 13
#define EXECUTE_CACHE_8_7 15
#define FREE_REFERENCES_LABEL_8_0 10
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_8_4);
      goto syntactic_environment_rename_3;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_8_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (syntactic_environment_rename_6)
DEFLABEL (syntactic_environment_rename_3)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_8);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define LABEL_9_8 9
#define ENVIRONMENT_LABEL_9_3 18
#define DEBUGGING_LABEL_9_2 17
#define EXECUTE_CACHE_9_10 11
#define EXECUTE_CACHE_9_9 13
#define EXECUTE_CACHE_9_7 15
#define FREE_REFERENCES_LABEL_9_0 10
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_9_4);
      goto syntactic_environment__environment_3;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (syntactic_environment__environment_6)
DEFLABEL (syntactic_environment__environment_3)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_8);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_7 7
#define LABEL_10_8 9
#define ENVIRONMENT_LABEL_10_3 18
#define DEBUGGING_LABEL_10_2 17
#define EXECUTE_CACHE_10_10 11
#define EXECUTE_CACHE_10_9 13
#define EXECUTE_CACHE_10_6 15
#define FREE_REFERENCES_LABEL_10_0 10
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_10_4);
      goto bind_variableB_4;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_10_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bind_variableB_7)
DEFLABEL (bind_variableB_4)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_7);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
syntax_environment_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  Rvl = (current_block [OBJECT_11_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 9
#define DEBUGGING_LABEL_12_2 8
#define OBJECT_12_0 7
#define EXECUTE_CACHE_12_5 5
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 9
#define DEBUGGING_LABEL_13_2 8
#define OBJECT_13_0 7
#define EXECUTE_CACHE_13_5 5
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 9
#define DEBUGGING_LABEL_14_2 8
#define OBJECT_14_0 7
#define EXECUTE_CACHE_14_5 5
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define ENVIRONMENT_LABEL_15_3 9
#define DEBUGGING_LABEL_15_2 8
#define OBJECT_15_0 7
#define EXECUTE_CACHE_15_5 5
#define FREE_REFERENCES_LABEL_15_0 4
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (current_block [OBJECT_15_0]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_7 7
#define ENVIRONMENT_LABEL_16_3 17
#define DEBUGGING_LABEL_16_2 16
#define OBJECT_16_0 15
#define EXECUTE_CACHE_16_8 9
#define EXECUTE_CACHE_16_6 11
#define FREE_REFERENCE_16_0 14
#define FREE_REFERENCES_LABEL_16_0 8
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_16_4);
      goto runtime_environment__syntactic_environment_1;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (runtime_environment__syntactic_environment_5)
DEFLABEL (runtime_environment__syntactic_environment_1)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_7;
  Wrd5 = Wrd9;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define ENVIRONMENT_LABEL_17_3 12
#define DEBUGGING_LABEL_17_2 11
#define OBJECT_17_1 10
#define OBJECT_17_0 9
#define EXECUTE_CACHE_17_6 7
#define FREE_REFERENCES_LABEL_17_0 6
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = (current_block [OBJECT_17_1]);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_17_0]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_5 3
#define LABEL_18_4 5
#define LABEL_18_6 7
#define LABEL_18_7 9
#define LABEL_18_9 11
#define ENVIRONMENT_LABEL_18_3 25
#define DEBUGGING_LABEL_18_2 24
#define OBJECT_18_4 23
#define OBJECT_18_3 22
#define OBJECT_18_2 21
#define OBJECT_18_1 20
#define OBJECT_18_0 19
#define EXECUTE_CACHE_18_11 13
#define EXECUTE_CACHE_18_10 15
#define EXECUTE_CACHE_18_8 17
#define FREE_REFERENCES_LABEL_18_0 12
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd41;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_18_4);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_18_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_18_9);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_10)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_18_0]);
  (Wrd36.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd36.Lng))))
    goto label_20;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd33.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_19;

DEFLABEL (label_18)
  (Wrd13.Obj) = (current_block [OBJECT_18_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_11;
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_11)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_13;
  (Wrd15.Obj) = (current_block [OBJECT_18_4]);
  goto label_12;

DEFLABEL (label_13)
  (Wrd15.Obj) = (current_block [OBJECT_18_3]);

DEFLABEL (label_12)
DEFLABEL (label_17)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd15.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_15;

DEFLABEL (label_14)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_18_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_18_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_11]));

DEFLABEL (label_16)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_19)
  Rsp = (& (Rsp [2]));
  goto label_15;

DEFLABEL (label_20)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_19;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 8
#define DEBUGGING_LABEL_19_2 7
#define EXECUTE_CACHE_19_5 5
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 8
#define DEBUGGING_LABEL_20_2 7
#define EXECUTE_CACHE_20_5 5
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_5]));

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
syntax_environment_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_9 7
#define LABEL_22_7 9
#define LABEL_22_11 11
#define LABEL_22_12 13
#define ENVIRONMENT_LABEL_22_3 36
#define DEBUGGING_LABEL_22_2 35
#define OBJECT_22_7 34
#define OBJECT_22_6 33
#define OBJECT_22_5 32
#define OBJECT_22_4 31
#define OBJECT_22_3 30
#define OBJECT_22_2 29
#define OBJECT_22_1 28
#define OBJECT_22_0 27
#define EXECUTE_CACHE_22_14 15
#define EXECUTE_CACHE_22_13 17
#define EXECUTE_CACHE_22_10 19
#define EXECUTE_CACHE_22_8 21
#define EXECUTE_CACHE_22_6 23
#define FREE_REFERENCE_22_0 26
#define FREE_REFERENCES_LABEL_22_0 14
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_22_4);
      goto make_top_level_syntactic_environment_8;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_22_9);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_22_11);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_22_12);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_top_level_syntactic_environment_12)
DEFLABEL (make_top_level_syntactic_environment_8)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_22_1]))
    goto label_19;
  if (Rvl == (current_block [OBJECT_22_2]))
    goto label_19;
  if (Rvl == (current_block [OBJECT_22_3]))
    goto label_14;
  (Wrd10.Obj) = (current_block [OBJECT_22_5]);
  goto label_13;

DEFLABEL (label_14)
  (Wrd10.Obj) = (current_block [OBJECT_22_4]);

DEFLABEL (label_13)
DEFLABEL (label_18)
  Rsp = (& (Rsp [1]));
  if (! ((Wrd10.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_17;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_22_6]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_22_9);

DEFLABEL (label_17)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_16;
  Wrd20 = Wrd24;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_12]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_22_7]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_22_12);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_14]));

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_11])), (Wrd21.pObj));

DEFLABEL (label_10)
  (Wrd20.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_19)
  Rsp = (& (Rsp [1]));
  goto label_17;

INVOKE_INTERFACE_TARGET_1
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
syntax_environment_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  Rvl = (current_block [OBJECT_23_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_6 7
#define LABEL_24_8 9
#define ENVIRONMENT_LABEL_24_3 21
#define DEBUGGING_LABEL_24_2 20
#define OBJECT_24_0 19
#define EXECUTE_CACHE_24_11 11
#define EXECUTE_CACHE_24_10 13
#define EXECUTE_CACHE_24_9 15
#define EXECUTE_CACHE_24_7 17
#define FREE_REFERENCES_LABEL_24_0 10
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
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
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_24_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_8);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_11]));

DEFLABEL (label_8)
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_9;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_7 7
#define ENVIRONMENT_LABEL_25_3 18
#define DEBUGGING_LABEL_25_2 17
#define OBJECT_25_1 16
#define OBJECT_25_0 15
#define EXECUTE_CACHE_25_9 9
#define EXECUTE_CACHE_25_8 11
#define EXECUTE_CACHE_25_6 13
#define FREE_REFERENCES_LABEL_25_0 8
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_25_4);
      goto lambda_6;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_9)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd24.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Rsp [4]) = (Wrd21.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd25.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_9]));

DEFLABEL (label_10)
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_11;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [1]) = (Wrd11.Obj);
  Rvl = (current_block [OBJECT_25_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define ENVIRONMENT_LABEL_26_3 8
#define DEBUGGING_LABEL_26_2 7
#define EXECUTE_CACHE_26_5 5
#define FREE_REFERENCES_LABEL_26_0 4
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_26_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define ENVIRONMENT_LABEL_27_3 12
#define DEBUGGING_LABEL_27_2 11
#define EXECUTE_CACHE_27_7 7
#define EXECUTE_CACHE_27_6 9
#define FREE_REFERENCES_LABEL_27_0 6
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_7 7
#define LABEL_28_8 9
#define LABEL_28_9 11
#define ENVIRONMENT_LABEL_28_3 26
#define DEBUGGING_LABEL_28_2 25
#define OBJECT_28_1 24
#define OBJECT_28_0 23
#define EXECUTE_CACHE_28_12 13
#define EXECUTE_CACHE_28_11 15
#define EXECUTE_CACHE_28_10 17
#define EXECUTE_CACHE_28_6 19
#define FREE_REFERENCE_28_0 22
#define FREE_REFERENCES_LABEL_28_0 12
#define NUMBER_OF_LINKER_SECTIONS_28_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_28_4);
      goto make_internal_syntactic_environment_3;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_28_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_28_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_28_9);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_internal_syntactic_environment_7)
DEFLABEL (make_internal_syntactic_environment_3)
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
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_28_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_28_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_28_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_11]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_7])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
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
syntax_environment_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_29_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_29_4);
  Rvl = (current_block [OBJECT_29_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_6 5
#define LABEL_30_5 7
#define LABEL_30_7 9
#define LABEL_30_11 11
#define LABEL_30_12 13
#define LABEL_30_9 15
#define LABEL_30_15 17
#define LABEL_30_16 19
#define ENVIRONMENT_LABEL_30_3 35
#define DEBUGGING_LABEL_30_2 34
#define OBJECT_30_0 33
#define EXECUTE_CACHE_30_18 21
#define EXECUTE_CACHE_30_17 23
#define EXECUTE_CACHE_30_14 25
#define EXECUTE_CACHE_30_13 27
#define EXECUTE_CACHE_30_10 29
#define EXECUTE_CACHE_30_8 31
#define FREE_REFERENCES_LABEL_30_0 20
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_30_4);
      goto lambda_13;

    case 1:
      current_block = (Rpc - LABEL_30_6);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_30_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_30_11);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_30_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_30_9);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_30_15);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_30_16);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_16)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_30_9);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_14]));

DEFLABEL (label_17)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_18;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_12]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_30_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_30_11);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_15]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_30_16);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_18]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_30_15);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_18)
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_19;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_5);
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_6 7
#define LABEL_31_8 9
#define LABEL_31_9 11
#define LABEL_31_13 13
#define LABEL_31_12 15
#define ENVIRONMENT_LABEL_31_3 36
#define DEBUGGING_LABEL_31_2 35
#define OBJECT_31_3 34
#define OBJECT_31_2 33
#define OBJECT_31_1 32
#define OBJECT_31_0 31
#define EXECUTE_CACHE_31_17 17
#define EXECUTE_CACHE_31_16 19
#define EXECUTE_CACHE_31_15 21
#define EXECUTE_CACHE_31_14 23
#define EXECUTE_CACHE_31_11 25
#define EXECUTE_CACHE_31_10 27
#define EXECUTE_CACHE_31_7 29
#define FREE_REFERENCES_LABEL_31_0 16
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_31_4);
      goto lambda_10;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_31_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_31_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_31_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_31_13);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_31_12);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_13)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_16;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_31_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_31_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_31_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31_3]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_16]));

DEFLABEL (label_14)
  (Wrd10.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_31_2]);
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_15]));

DEFLABEL (label_15)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_31_12);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Rsp [3]) = (Wrd11.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_17]));

DEFLABEL (label_16)
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_17;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [1]) = (Wrd11.Obj);
  Rvl = (current_block [OBJECT_31_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define ENVIRONMENT_LABEL_32_3 12
#define DEBUGGING_LABEL_32_2 11
#define EXECUTE_CACHE_32_7 7
#define EXECUTE_CACHE_32_6 9
#define FREE_REFERENCES_LABEL_32_0 6
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_32_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define ENVIRONMENT_LABEL_33_3 12
#define DEBUGGING_LABEL_33_2 11
#define EXECUTE_CACHE_33_7 7
#define EXECUTE_CACHE_33_6 9
#define FREE_REFERENCES_LABEL_33_0 6
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_33_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_7 7
#define LABEL_34_9 9
#define LABEL_34_10 11
#define LABEL_34_12 13
#define ENVIRONMENT_LABEL_34_3 28
#define DEBUGGING_LABEL_34_2 27
#define OBJECT_34_1 26
#define OBJECT_34_0 25
#define EXECUTE_CACHE_34_13 15
#define EXECUTE_CACHE_34_11 17
#define EXECUTE_CACHE_34_8 19
#define EXECUTE_CACHE_34_6 21
#define FREE_REFERENCE_34_0 24
#define FREE_REFERENCES_LABEL_34_0 14
#define NUMBER_OF_LINKER_SECTIONS_34_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_34_4);
      goto make_partial_syntactic_environment_6;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_34_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_34_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_34_10);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_34_12);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_partial_syntactic_environment_10)
DEFLABEL (make_partial_syntactic_environment_6)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_34_9);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_34_1])))
    goto label_12;

DEFLABEL (label_11)
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (Wrd8.Obj))
    goto label_11;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_34_10);
  (Rsp [2]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_14;
  Wrd7 = Wrd11;

DEFLABEL (label_13)
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_13]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_12])), (Wrd8.pObj));

DEFLABEL (label_8)
  (Wrd7.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
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
syntax_environment_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_35_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_35_4);
  Rvl = (current_block [OBJECT_35_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_6 7
#define LABEL_36_7 9
#define ENVIRONMENT_LABEL_36_3 22
#define DEBUGGING_LABEL_36_2 21
#define EXECUTE_CACHE_36_12 11
#define EXECUTE_CACHE_36_11 13
#define EXECUTE_CACHE_36_10 15
#define EXECUTE_CACHE_36_9 17
#define EXECUTE_CACHE_36_8 19
#define FREE_REFERENCES_LABEL_36_0 10
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_36_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_36_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_36_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_36_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_9]));

DEFLABEL (label_7)
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define ENVIRONMENT_LABEL_37_3 9
#define DEBUGGING_LABEL_37_2 8
#define OBJECT_37_0 7
#define EXECUTE_CACHE_37_5 5
#define FREE_REFERENCES_LABEL_37_0 4
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_37_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd5.Obj) = (current_block [OBJECT_37_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_6 7
#define LABEL_38_7 9
#define ENVIRONMENT_LABEL_38_3 22
#define DEBUGGING_LABEL_38_2 21
#define EXECUTE_CACHE_38_12 11
#define EXECUTE_CACHE_38_11 13
#define EXECUTE_CACHE_38_10 15
#define EXECUTE_CACHE_38_9 17
#define EXECUTE_CACHE_38_8 19
#define FREE_REFERENCES_LABEL_38_0 10
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_38_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_38_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_38_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_38_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_38_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_9]));

DEFLABEL (label_7)
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define ENVIRONMENT_LABEL_39_3 9
#define DEBUGGING_LABEL_39_2 8
#define OBJECT_39_0 7
#define EXECUTE_CACHE_39_5 5
#define FREE_REFERENCES_LABEL_39_0 4
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_environment_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_39_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd5.Obj) = (current_block [OBJECT_39_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_9 5
#define LABEL_5 7
#define LABEL_7 9
#define LABEL_13 11
#define LABEL_8 13
#define LABEL_11 15
#define LABEL_17 17
#define LABEL_12 19
#define LABEL_15 21
#define LABEL_21 23
#define LABEL_16 25
#define LABEL_19 27
#define LABEL_20 29
#define LABEL_22 31
#define LABEL_24 33
#define LABEL_28 35
#define LABEL_25 37
#define LABEL_26 39
#define LABEL_31 41
#define LABEL_27 43
#define LABEL_29 45
#define LABEL_34 47
#define LABEL_30 49
#define LABEL_32 51
#define LABEL_37 53
#define LABEL_33 55
#define LABEL_35 57
#define LABEL_40 59
#define LABEL_36 61
#define LABEL_38 63
#define LABEL_43 65
#define LABEL_39 67
#define LABEL_41 69
#define LABEL_46 71
#define LABEL_42 73
#define LABEL_44 75
#define LABEL_45 77
#define LABEL_47 79
#define LABEL_48 81
#define LABEL_53 83
#define LABEL_49 85
#define LABEL_51 87
#define LABEL_52 89
#define LABEL_55 91
#define LABEL_56 93
#define LABEL_57 95
#define LABEL_58 97
#define LABEL_59 99
#define LABEL_63 101
#define LABEL_60 103
#define LABEL_61 105
#define LABEL_66 107
#define LABEL_62 109
#define LABEL_64 111
#define LABEL_69 113
#define LABEL_65 115
#define LABEL_67 117
#define LABEL_72 119
#define LABEL_68 121
#define LABEL_70 123
#define LABEL_75 125
#define LABEL_71 127
#define LABEL_73 129
#define LABEL_74 131
#define LABEL_77 133
#define LABEL_78 135
#define LABEL_79 137
#define LABEL_80 139
#define LABEL_84 141
#define LABEL_81 143
#define LABEL_82 145
#define LABEL_87 147
#define LABEL_83 149
#define LABEL_85 151
#define LABEL_90 153
#define LABEL_86 155
#define LABEL_88 157
#define LABEL_93 159
#define LABEL_89 161
#define LABEL_91 163
#define LABEL_96 165
#define LABEL_92 167
#define LABEL_94 169
#define LABEL_99 171
#define LABEL_95 173
#define LABEL_97 175
#define LABEL_102 177
#define LABEL_98 179
#define LABEL_100 181
#define LABEL_105 183
#define LABEL_101 185
#define LABEL_103 187
#define LABEL_104 189
#define LABEL_106 191
#define LABEL_107 193
#define LABEL_108 195
#define LABEL_109 197
#define LABEL_113 199
#define LABEL_110 201
#define LABEL_111 203
#define LABEL_116 205
#define LABEL_112 207
#define LABEL_114 209
#define LABEL_119 211
#define LABEL_115 213
#define LABEL_117 215
#define LABEL_122 217
#define LABEL_118 219
#define LABEL_120 221
#define LABEL_125 223
#define LABEL_121 225
#define LABEL_123 227
#define LABEL_124 229
#define LABEL_126 231
#define LABEL_127 233
#define LABEL_128 235
#define LABEL_129 237
#define ENVIRONMENT_LABEL_3 364
#define DEBUGGING_LABEL_2 363
#define PURIFICATION_ROOT 362
#define OBJECT_98 361
#define OBJECT_97 360
#define OBJECT_96 359
#define OBJECT_95 358
#define OBJECT_94 357
#define OBJECT_93 356
#define OBJECT_92 355
#define OBJECT_91 354
#define OBJECT_90 353
#define OBJECT_89 352
#define OBJECT_88 351
#define OBJECT_87 350
#define OBJECT_86 349
#define OBJECT_85 348
#define OBJECT_84 347
#define OBJECT_83 346
#define OBJECT_82 345
#define OBJECT_81 344
#define OBJECT_80 343
#define OBJECT_79 342
#define OBJECT_78 341
#define OBJECT_77 340
#define OBJECT_76 339
#define OBJECT_75 338
#define OBJECT_74 337
#define OBJECT_73 336
#define OBJECT_72 335
#define OBJECT_71 334
#define OBJECT_70 333
#define OBJECT_69 332
#define OBJECT_68 331
#define OBJECT_67 330
#define OBJECT_66 329
#define OBJECT_65 328
#define OBJECT_64 327
#define OBJECT_63 326
#define OBJECT_62 325
#define OBJECT_61 324
#define OBJECT_60 323
#define OBJECT_59 322
#define OBJECT_58 321
#define OBJECT_57 320
#define OBJECT_56 319
#define OBJECT_55 318
#define OBJECT_54 317
#define OBJECT_53 316
#define OBJECT_52 315
#define OBJECT_51 314
#define OBJECT_50 313
#define OBJECT_49 312
#define OBJECT_48 311
#define OBJECT_47 310
#define OBJECT_46 309
#define OBJECT_45 308
#define OBJECT_44 307
#define OBJECT_43 306
#define OBJECT_42 305
#define OBJECT_41 304
#define OBJECT_40 303
#define OBJECT_39 302
#define OBJECT_38 301
#define OBJECT_37 300
#define OBJECT_36 299
#define OBJECT_35 298
#define OBJECT_34 297
#define OBJECT_33 296
#define OBJECT_32 295
#define OBJECT_31 294
#define OBJECT_30 293
#define OBJECT_29 292
#define OBJECT_28 291
#define OBJECT_27 290
#define OBJECT_26 289
#define OBJECT_25 288
#define OBJECT_24 287
#define OBJECT_23 286
#define OBJECT_22 285
#define OBJECT_21 284
#define OBJECT_20 283
#define OBJECT_19 282
#define OBJECT_18 281
#define OBJECT_17 280
#define OBJECT_16 279
#define OBJECT_15 278
#define OBJECT_14 277
#define OBJECT_13 276
#define OBJECT_12 275
#define OBJECT_11 274
#define OBJECT_10 273
#define OBJECT_9 272
#define OBJECT_8 271
#define OBJECT_7 270
#define OBJECT_6 269
#define OBJECT_5 268
#define OBJECT_4 267
#define OBJECT_3 266
#define OBJECT_2 265
#define OBJECT_1 264
#define OBJECT_0 263
#define EXECUTE_CACHE_76 239
#define EXECUTE_CACHE_54 241
#define EXECUTE_CACHE_50 243
#define EXECUTE_CACHE_18 245
#define EXECUTE_CACHE_14 247
#define EXECUTE_CACHE_10 249
#define EXECUTE_CACHE_6 251
#define FREE_REFERENCE_5 254
#define FREE_REFERENCE_4 255
#define FREE_REFERENCE_3 256
#define FREE_REFERENCE_2 257
#define FREE_REFERENCE_1 258
#define FREE_REFERENCE_0 259
#define GLOBAL_EXECUTE_CACHE_23 261
#define FREE_REFERENCES_LABEL_0 238
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
syntax_environment_so_73708a6db2d798cf (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_9);
      goto label_87;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_13);
      goto label_88;

    case 5:
      current_block = (Rpc - LABEL_8);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_17);
      goto label_89;

    case 8:
      current_block = (Rpc - LABEL_12);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_15);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_21);
      goto label_90;

    case 11:
      current_block = (Rpc - LABEL_16);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_19);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_20);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_22);
      goto continuation_10;

    case 15:
      current_block = (Rpc - LABEL_24);
      goto continuation_12;

    case 16:
      current_block = (Rpc - LABEL_28);
      goto label_91;

    case 17:
      current_block = (Rpc - LABEL_25);
      goto continuation_11;

    case 18:
      current_block = (Rpc - LABEL_26);
      goto continuation_14;

    case 19:
      current_block = (Rpc - LABEL_31);
      goto label_92;

    case 20:
      current_block = (Rpc - LABEL_27);
      goto continuation_13;

    case 21:
      current_block = (Rpc - LABEL_29);
      goto continuation_16;

    case 22:
      current_block = (Rpc - LABEL_34);
      goto label_93;

    case 23:
      current_block = (Rpc - LABEL_30);
      goto continuation_15;

    case 24:
      current_block = (Rpc - LABEL_32);
      goto continuation_18;

    case 25:
      current_block = (Rpc - LABEL_37);
      goto label_94;

    case 26:
      current_block = (Rpc - LABEL_33);
      goto continuation_17;

    case 27:
      current_block = (Rpc - LABEL_35);
      goto continuation_20;

    case 28:
      current_block = (Rpc - LABEL_40);
      goto label_95;

    case 29:
      current_block = (Rpc - LABEL_36);
      goto continuation_19;

    case 30:
      current_block = (Rpc - LABEL_38);
      goto continuation_22;

    case 31:
      current_block = (Rpc - LABEL_43);
      goto label_96;

    case 32:
      current_block = (Rpc - LABEL_39);
      goto continuation_21;

    case 33:
      current_block = (Rpc - LABEL_41);
      goto continuation_24;

    case 34:
      current_block = (Rpc - LABEL_46);
      goto label_97;

    case 35:
      current_block = (Rpc - LABEL_42);
      goto continuation_23;

    case 36:
      current_block = (Rpc - LABEL_44);
      goto continuation_26;

    case 37:
      current_block = (Rpc - LABEL_45);
      goto continuation_25;

    case 38:
      current_block = (Rpc - LABEL_47);
      goto continuation_27;

    case 39:
      current_block = (Rpc - LABEL_48);
      goto continuation_29;

    case 40:
      current_block = (Rpc - LABEL_53);
      goto label_98;

    case 41:
      current_block = (Rpc - LABEL_49);
      goto continuation_28;

    case 42:
      current_block = (Rpc - LABEL_51);
      goto continuation_31;

    case 43:
      current_block = (Rpc - LABEL_52);
      goto continuation_30;

    case 44:
      current_block = (Rpc - LABEL_55);
      goto continuation_32;

    case 45:
      current_block = (Rpc - LABEL_56);
      goto continuation_34;

    case 46:
      current_block = (Rpc - LABEL_57);
      goto continuation_33;

    case 47:
      current_block = (Rpc - LABEL_58);
      goto continuation_35;

    case 48:
      current_block = (Rpc - LABEL_59);
      goto continuation_37;

    case 49:
      current_block = (Rpc - LABEL_63);
      goto label_99;

    case 50:
      current_block = (Rpc - LABEL_60);
      goto continuation_36;

    case 51:
      current_block = (Rpc - LABEL_61);
      goto continuation_39;

    case 52:
      current_block = (Rpc - LABEL_66);
      goto label_100;

    case 53:
      current_block = (Rpc - LABEL_62);
      goto continuation_38;

    case 54:
      current_block = (Rpc - LABEL_64);
      goto continuation_41;

    case 55:
      current_block = (Rpc - LABEL_69);
      goto label_101;

    case 56:
      current_block = (Rpc - LABEL_65);
      goto continuation_40;

    case 57:
      current_block = (Rpc - LABEL_67);
      goto continuation_43;

    case 58:
      current_block = (Rpc - LABEL_72);
      goto label_102;

    case 59:
      current_block = (Rpc - LABEL_68);
      goto continuation_42;

    case 60:
      current_block = (Rpc - LABEL_70);
      goto continuation_45;

    case 61:
      current_block = (Rpc - LABEL_75);
      goto label_103;

    case 62:
      current_block = (Rpc - LABEL_71);
      goto continuation_44;

    case 63:
      current_block = (Rpc - LABEL_73);
      goto continuation_47;

    case 64:
      current_block = (Rpc - LABEL_74);
      goto continuation_46;

    case 65:
      current_block = (Rpc - LABEL_77);
      goto continuation_49;

    case 66:
      current_block = (Rpc - LABEL_78);
      goto continuation_48;

    case 67:
      current_block = (Rpc - LABEL_79);
      goto continuation_50;

    case 68:
      current_block = (Rpc - LABEL_80);
      goto continuation_52;

    case 69:
      current_block = (Rpc - LABEL_84);
      goto label_104;

    case 70:
      current_block = (Rpc - LABEL_81);
      goto continuation_51;

    case 71:
      current_block = (Rpc - LABEL_82);
      goto continuation_54;

    case 72:
      current_block = (Rpc - LABEL_87);
      goto label_105;

    case 73:
      current_block = (Rpc - LABEL_83);
      goto continuation_53;

    case 74:
      current_block = (Rpc - LABEL_85);
      goto continuation_56;

    case 75:
      current_block = (Rpc - LABEL_90);
      goto label_106;

    case 76:
      current_block = (Rpc - LABEL_86);
      goto continuation_55;

    case 77:
      current_block = (Rpc - LABEL_88);
      goto continuation_58;

    case 78:
      current_block = (Rpc - LABEL_93);
      goto label_107;

    case 79:
      current_block = (Rpc - LABEL_89);
      goto continuation_57;

    case 80:
      current_block = (Rpc - LABEL_91);
      goto continuation_60;

    case 81:
      current_block = (Rpc - LABEL_96);
      goto label_108;

    case 82:
      current_block = (Rpc - LABEL_92);
      goto continuation_59;

    case 83:
      current_block = (Rpc - LABEL_94);
      goto continuation_62;

    case 84:
      current_block = (Rpc - LABEL_99);
      goto label_109;

    case 85:
      current_block = (Rpc - LABEL_95);
      goto continuation_61;

    case 86:
      current_block = (Rpc - LABEL_97);
      goto continuation_64;

    case 87:
      current_block = (Rpc - LABEL_102);
      goto label_110;

    case 88:
      current_block = (Rpc - LABEL_98);
      goto continuation_63;

    case 89:
      current_block = (Rpc - LABEL_100);
      goto continuation_66;

    case 90:
      current_block = (Rpc - LABEL_105);
      goto label_111;

    case 91:
      current_block = (Rpc - LABEL_101);
      goto continuation_65;

    case 92:
      current_block = (Rpc - LABEL_103);
      goto continuation_68;

    case 93:
      current_block = (Rpc - LABEL_104);
      goto continuation_67;

    case 94:
      current_block = (Rpc - LABEL_106);
      goto continuation_70;

    case 95:
      current_block = (Rpc - LABEL_107);
      goto continuation_69;

    case 96:
      current_block = (Rpc - LABEL_108);
      goto continuation_71;

    case 97:
      current_block = (Rpc - LABEL_109);
      goto continuation_73;

    case 98:
      current_block = (Rpc - LABEL_113);
      goto label_112;

    case 99:
      current_block = (Rpc - LABEL_110);
      goto continuation_72;

    case 100:
      current_block = (Rpc - LABEL_111);
      goto continuation_75;

    case 101:
      current_block = (Rpc - LABEL_116);
      goto label_113;

    case 102:
      current_block = (Rpc - LABEL_112);
      goto continuation_74;

    case 103:
      current_block = (Rpc - LABEL_114);
      goto continuation_77;

    case 104:
      current_block = (Rpc - LABEL_119);
      goto label_114;

    case 105:
      current_block = (Rpc - LABEL_115);
      goto continuation_76;

    case 106:
      current_block = (Rpc - LABEL_117);
      goto continuation_79;

    case 107:
      current_block = (Rpc - LABEL_122);
      goto label_115;

    case 108:
      current_block = (Rpc - LABEL_118);
      goto continuation_78;

    case 109:
      current_block = (Rpc - LABEL_120);
      goto continuation_81;

    case 110:
      current_block = (Rpc - LABEL_125);
      goto label_116;

    case 111:
      current_block = (Rpc - LABEL_121);
      goto continuation_80;

    case 112:
      current_block = (Rpc - LABEL_123);
      goto continuation_83;

    case 113:
      current_block = (Rpc - LABEL_124);
      goto continuation_82;

    case 114:
      current_block = (Rpc - LABEL_126);
      goto continuation_84;

    case 115:
      current_block = (Rpc - LABEL_127);
      goto label_119;

    case 116:
      current_block = (Rpc - LABEL_128);
      goto label_120;

    case 117:
      current_block = (Rpc - LABEL_129);
      goto expression_86;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_86)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_128])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_120)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_119)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	1,
	0,
	2,
	1,
	1,
	1,
	1,
	0,
	2,
	1,
	1,
	1,
	1,
	0,
	2,
	0,
	1,
	1,
	1,
	1,
	2,
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
	1,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 39)
      goto label_118;
    blocks = (current_block [OBJECT_98]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_127])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_118)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_180;
  Wrd12 = Wrd16;

DEFLABEL (label_179)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_178;
  Wrd11 = Wrd15;

DEFLABEL (label_177)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_176;
  Wrd12 = Wrd16;

DEFLABEL (label_175)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_174;
  Wrd12 = Wrd16;

DEFLABEL (label_173)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_23]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_172;
  Wrd12 = Wrd16;

DEFLABEL (label_171)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_27);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_170;
  Wrd11 = Wrd15;

DEFLABEL (label_169)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_30);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_168;
  Wrd12 = Wrd16;

DEFLABEL (label_167)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_33);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_166;
  Wrd12 = Wrd16;

DEFLABEL (label_165)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_36);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_164;
  Wrd12 = Wrd16;

DEFLABEL (label_163)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_39);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_162;
  Wrd12 = Wrd16;

DEFLABEL (label_161)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_42);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_160;
  Wrd12 = Wrd16;

DEFLABEL (label_159)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_45);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_23]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_49);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_158;
  Wrd12 = Wrd16;

DEFLABEL (label_157)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_52);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_57);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_60);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_156;
  Wrd12 = Wrd16;

DEFLABEL (label_155)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_62);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_154;
  Wrd11 = Wrd15;

DEFLABEL (label_153)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_65);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_152;
  Wrd12 = Wrd16;

DEFLABEL (label_151)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_68);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_150;
  Wrd12 = Wrd16;

DEFLABEL (label_149)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_71);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_148;
  Wrd12 = Wrd16;

DEFLABEL (label_147)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_74);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_73);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_78);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_77);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_79);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_81);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_80);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_146;
  Wrd12 = Wrd16;

DEFLABEL (label_145)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_83);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_82);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_144;
  Wrd11 = Wrd15;

DEFLABEL (label_143)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_86);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_85);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_142;
  Wrd12 = Wrd16;

DEFLABEL (label_141)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_89);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_88);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_140;
  Wrd12 = Wrd16;

DEFLABEL (label_139)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_92);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_91);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_138;
  Wrd12 = Wrd16;

DEFLABEL (label_137)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_95);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_94);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_136;
  Wrd12 = Wrd16;

DEFLABEL (label_135)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_98);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_97);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_134;
  Wrd12 = Wrd16;

DEFLABEL (label_133)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76]));

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_101);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_100);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_132;
  Wrd12 = Wrd16;

DEFLABEL (label_131)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_104);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_103);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_107);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_106);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_108);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_83]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_110);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_83]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_109);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_130;
  Wrd12 = Wrd16;

DEFLABEL (label_129)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_112);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_111);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_128;
  Wrd11 = Wrd15;

DEFLABEL (label_127)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_115);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_114);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_126;
  Wrd12 = Wrd16;

DEFLABEL (label_125)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_118);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_117);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_120]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_124;
  Wrd12 = Wrd16;

DEFLABEL (label_123)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_121);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_120);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_122;
  Wrd12 = Wrd16;

DEFLABEL (label_121)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_124);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_123);
  (Wrd5.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_92]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_93]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_94]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_95]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_96]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_126);
  (Rsp [2]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (label_122)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_125])), (Wrd13.pObj));

DEFLABEL (label_116)
  (Wrd12.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_122])), (Wrd13.pObj));

DEFLABEL (label_115)
  (Wrd12.Obj) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_119])), (Wrd13.pObj));

DEFLABEL (label_114)
  (Wrd12.Obj) = Rvl;
  goto label_125;

DEFLABEL (label_128)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_116])), (Wrd12.pObj));

DEFLABEL (label_113)
  (Wrd11.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_113])), (Wrd13.pObj));

DEFLABEL (label_112)
  (Wrd12.Obj) = Rvl;
  goto label_129;

DEFLABEL (label_132)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_105])), (Wrd13.pObj));

DEFLABEL (label_111)
  (Wrd12.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_134)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_102])), (Wrd13.pObj));

DEFLABEL (label_110)
  (Wrd12.Obj) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_99])), (Wrd13.pObj));

DEFLABEL (label_109)
  (Wrd12.Obj) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_96])), (Wrd13.pObj));

DEFLABEL (label_108)
  (Wrd12.Obj) = Rvl;
  goto label_137;

DEFLABEL (label_140)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_93])), (Wrd13.pObj));

DEFLABEL (label_107)
  (Wrd12.Obj) = Rvl;
  goto label_139;

DEFLABEL (label_142)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_90])), (Wrd13.pObj));

DEFLABEL (label_106)
  (Wrd12.Obj) = Rvl;
  goto label_141;

DEFLABEL (label_144)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_87])), (Wrd12.pObj));

DEFLABEL (label_105)
  (Wrd11.Obj) = Rvl;
  goto label_143;

DEFLABEL (label_146)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_84])), (Wrd13.pObj));

DEFLABEL (label_104)
  (Wrd12.Obj) = Rvl;
  goto label_145;

DEFLABEL (label_148)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75])), (Wrd13.pObj));

DEFLABEL (label_103)
  (Wrd12.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_150)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_72])), (Wrd13.pObj));

DEFLABEL (label_102)
  (Wrd12.Obj) = Rvl;
  goto label_149;

DEFLABEL (label_152)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_69])), (Wrd13.pObj));

DEFLABEL (label_101)
  (Wrd12.Obj) = Rvl;
  goto label_151;

DEFLABEL (label_154)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66])), (Wrd12.pObj));

DEFLABEL (label_100)
  (Wrd11.Obj) = Rvl;
  goto label_153;

DEFLABEL (label_156)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63])), (Wrd13.pObj));

DEFLABEL (label_99)
  (Wrd12.Obj) = Rvl;
  goto label_155;

DEFLABEL (label_158)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53])), (Wrd13.pObj));

DEFLABEL (label_98)
  (Wrd12.Obj) = Rvl;
  goto label_157;

DEFLABEL (label_160)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46])), (Wrd13.pObj));

DEFLABEL (label_97)
  (Wrd12.Obj) = Rvl;
  goto label_159;

DEFLABEL (label_162)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_43])), (Wrd13.pObj));

DEFLABEL (label_96)
  (Wrd12.Obj) = Rvl;
  goto label_161;

DEFLABEL (label_164)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40])), (Wrd13.pObj));

DEFLABEL (label_95)
  (Wrd12.Obj) = Rvl;
  goto label_163;

DEFLABEL (label_166)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37])), (Wrd13.pObj));

DEFLABEL (label_94)
  (Wrd12.Obj) = Rvl;
  goto label_165;

DEFLABEL (label_168)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34])), (Wrd13.pObj));

DEFLABEL (label_93)
  (Wrd12.Obj) = Rvl;
  goto label_167;

DEFLABEL (label_170)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31])), (Wrd12.pObj));

DEFLABEL (label_92)
  (Wrd11.Obj) = Rvl;
  goto label_169;

DEFLABEL (label_172)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28])), (Wrd13.pObj));

DEFLABEL (label_91)
  (Wrd12.Obj) = Rvl;
  goto label_171;

DEFLABEL (label_174)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21])), (Wrd13.pObj));

DEFLABEL (label_90)
  (Wrd12.Obj) = Rvl;
  goto label_173;

DEFLABEL (label_176)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd13.pObj));

DEFLABEL (label_89)
  (Wrd12.Obj) = Rvl;
  goto label_175;

DEFLABEL (label_178)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13])), (Wrd12.pObj));

DEFLABEL (label_88)
  (Wrd11.Obj) = Rvl;
  goto label_177;

DEFLABEL (label_180)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd13.pObj));

DEFLABEL (label_87)
  (Wrd12.Obj) = Rvl;
  goto label_179;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_syntax_environment_so_73708a6db2d798cf [39] =
  {
    { "syntax_environment_so_code_1", 2, syntax_environment_so_code_1 },
    { "syntax_environment_so_code_2", 1, syntax_environment_so_code_2 },
    { "syntax_environment_so_code_3", 3, syntax_environment_so_code_3 },
    { "syntax_environment_so_code_4", 4, syntax_environment_so_code_4 },
    { "syntax_environment_so_code_5", 2, syntax_environment_so_code_5 },
    { "syntax_environment_so_code_6", 4, syntax_environment_so_code_6 },
    { "syntax_environment_so_code_7", 4, syntax_environment_so_code_7 },
    { "syntax_environment_so_code_8", 4, syntax_environment_so_code_8 },
    { "syntax_environment_so_code_9", 4, syntax_environment_so_code_9 },
    { "syntax_environment_so_code_10", 4, syntax_environment_so_code_10 },
    { "syntax_environment_so_code_11", 1, syntax_environment_so_code_11 },
    { "syntax_environment_so_code_12", 1, syntax_environment_so_code_12 },
    { "syntax_environment_so_code_13", 1, syntax_environment_so_code_13 },
    { "syntax_environment_so_code_14", 1, syntax_environment_so_code_14 },
    { "syntax_environment_so_code_15", 1, syntax_environment_so_code_15 },
    { "syntax_environment_so_code_16", 3, syntax_environment_so_code_16 },
    { "syntax_environment_so_code_17", 2, syntax_environment_so_code_17 },
    { "syntax_environment_so_code_18", 5, syntax_environment_so_code_18 },
    { "syntax_environment_so_code_19", 1, syntax_environment_so_code_19 },
    { "syntax_environment_so_code_20", 1, syntax_environment_so_code_20 },
    { "syntax_environment_so_code_21", 1, syntax_environment_so_code_21 },
    { "syntax_environment_so_code_22", 6, syntax_environment_so_code_22 },
    { "syntax_environment_so_code_23", 1, syntax_environment_so_code_23 },
    { "syntax_environment_so_code_24", 4, syntax_environment_so_code_24 },
    { "syntax_environment_so_code_25", 3, syntax_environment_so_code_25 },
    { "syntax_environment_so_code_26", 1, syntax_environment_so_code_26 },
    { "syntax_environment_so_code_27", 2, syntax_environment_so_code_27 },
    { "syntax_environment_so_code_28", 5, syntax_environment_so_code_28 },
    { "syntax_environment_so_code_29", 1, syntax_environment_so_code_29 },
    { "syntax_environment_so_code_30", 9, syntax_environment_so_code_30 },
    { "syntax_environment_so_code_31", 7, syntax_environment_so_code_31 },
    { "syntax_environment_so_code_32", 2, syntax_environment_so_code_32 },
    { "syntax_environment_so_code_33", 2, syntax_environment_so_code_33 },
    { "syntax_environment_so_code_34", 6, syntax_environment_so_code_34 },
    { "syntax_environment_so_code_35", 1, syntax_environment_so_code_35 },
    { "syntax_environment_so_code_36", 4, syntax_environment_so_code_36 },
    { "syntax_environment_so_code_37", 1, syntax_environment_so_code_37 },
    { "syntax_environment_so_code_38", 4, syntax_environment_so_code_38 },
    { "syntax_environment_so_code_39", 1, syntax_environment_so_code_39 }
  };

int
decl_syntax_environment_so_73708a6db2d798cf (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_syntax_environment_so_73708a6db2d798cf);
  return (0);
}

DECLARE_COMPILED_CODE ("syntax-environment.so", 118, decl_syntax_environment_so_73708a6db2d798cf, syntax_environment_so_73708a6db2d798cf)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_syntax_environment_so_data_73708a6db2d798cf [5523] =
  "\xed\x02\x50\xa6\x0a\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x1d\x28\x0d"
  "\xb9\x28\x0d\xba\x23\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x82"
  "\x88\x06\x1d\x0c\x28\x0d\x23\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x83"
  "\x88\x28\x0d\x28\xb1\x28\x0d\xbd\x28\xb2\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\xbe\x1d\xb0\x84\x88\x28\x0d\xbf\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x85\x88\x07\x0d\x1c\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x28\xb7\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\xb7\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\xb7\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\xb7\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x0d"
  "\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x23"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x23\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x23\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x1c\x24\x28\x0d\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06"
  "\x07\x85\xc2\x02\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x23"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0"
  "\x02\x88\x08\x0c\x06\x07\x1b\x1b\x1b\x0d\x1c\x0d\x1c\x24\x28\x0d"
  "\x1c\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x1d\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x1b\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x08\x0d\x1c\x0d\x1c\x24\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x1b\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x1b\x1d\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x0d\x1c\x0d\x1c\x24\x28\x0d\x28"
  "\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28"
  "\x1b\x23\x22\x29\x21\x17\x2b\x1c\x17\xb8\x88\xb0\x1b\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x1b\x0d\x1c\x1b\x0d\x1c\x0d\x0d"
  "\x1c\x1b\x0d\x1c\x1b\x1b\x1b\x08\x8a\x1b\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x0d\x1c\x1b\x1b\x0d\x1c\x1b"
  "\x1b\x0d\x1b\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x1b\x08\x8b\x1b\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x1b\x1b\x0d"
  "\x1b\x1b\x0d\x1c\x1b\x1b\x08\x89\x1b\x1b\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x0d\xb5\x1b\x2a\x0d\x1c\x1d\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x0d\x1b\x1b\x1b\x1b\x0d\x1b\x0d"
  "\x9f\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb6"
  "\x2a\x9f\x1b\x0d\x1c\x1b\x0d\x1c\x1b\x0d\x1c\x1b\x0d\x1c\x0d\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x1b\x1b\x1b\x1b\x1b\x08\x8c\x1b\xb2\x1b\x99"
  "\xb4\x2a\xb3\x2a\x99\xb7\x0d\x1c\xb1\x0d\x1c\x1b\xc3\x0d\x1c\x1b"
  "\x1b\x08\x89\x28\x0d\x26\x1b\x1b\x1b\x1b\x1b\x1b\x24\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29"
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
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x61\x2f\x55\x73\x65"
  "\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61"
  "\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74"
  "\x69\x6d\x65\x2f\x2e\x2f\x73\x79\x6e\x74\x61\x78\x2d\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2e\x69\x6e\x66\x15\x23\x5b\x70"
  "\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74"
  "\x5d\x02\x02\x03\x17\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x3f\x04\x20\x65\x72\x72"
  "\x6f\x72\x3a\x6e\x6f\x74\x2d\x73\x79\x6e\x74\x61\x63\x74\x69\x63"
  "\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x03\x78\x06\x81"
  "\x85\x02\x77\x04\x84\x04\x05\x0e\x02\x08\x16\x73\x79\x6e\x74\x61"
  "\x63\x74\x69\x63\x20\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79"
  "\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x02\x79\x04\x84\x04"
  "\x03\x0c\x02\x03\x0d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x3f\x03\x03\x2b\x72\x75\x6e\x74\x69\x6d\x65\x2d\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x3e\x73\x79\x6e\x74\x61\x63\x74"
  "\x69\x63\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x04\x05"
  "\x7c\x08\x81\x85\x02\x7b\x06\x81\x85\x02\x7a\x04\x84\x04\x07\x13"
  "\x02\x03\x09\x73\x65\x6e\x76\x2d\x6f\x70\x73\x03\x0b\x73\x65\x6e"
  "\x76\x2d\x73\x74\x61\x74\x65\x09\x03\x0e\x73\x65\x6e\x76\x2d\x6f"
  "\x70\x73\x3a\x74\x79\x70\x65\x0a\x04\x80\x01\x0a\x81\x85\x02\x7f"
  "\x08\x81\x85\x02\x7e\x06\x81\x83\x02\x7d\x04\x83\x04\x09\x13\x0b"
  "\x02\x12\x72\x75\x6e\x74\x69\x6d\x65\x2d\x74\x6f\x70\x2d\x6c\x65"
  "\x76\x65\x6c\x0c\x0a\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x0d\x03"
  "\x0a\x73\x65\x6e\x76\x2d\x74\x79\x70\x65\x0e\x02\x82\x01\x06\x81"
  "\x83\x02\x81\x01\x04\x83\x04\x05\x0e\x0f\x02\x03\x03\x09\x03\x10"
  "\x73\x65\x6e\x76\x2d\x6f\x70\x73\x3a\x6c\x6f\x6f\x6b\x75\x70\x10"
  "\x04\x86\x01\x0a\x81\x87\x02\x85\x01\x08\x81\x87\x02\x84\x01\x06"
  "\x81\x85\x02\x83\x01\x04\x84\x06\x09\x13\x11\x02\x08\x03\x03\x09"
  "\x03\x10\x73\x65\x6e\x76\x2d\x6f\x70\x73\x3a\x64\x65\x66\x69\x6e"
  "\x65\x12\x04\x8a\x01\x0a\x81\x89\x02\x89\x01\x08\x81\x89\x02\x88"
  "\x01\x06\x81\x87\x02\x87\x01\x04\x85\x08\x09\x13\x13\x02\x09\x03"
  "\x03\x09\x03\x10\x73\x65\x6e\x76\x2d\x6f\x70\x73\x3a\x72\x65\x6e"
  "\x61\x6d\x65\x14\x04\x8e\x01\x0a\x81\x87\x02\x8d\x01\x08\x81\x87"
  "\x02\x8c\x01\x06\x81\x85\x02\x8b\x01\x04\x84\x06\x09\x13\x15\x02"
  "\x0a\x03\x03\x09\x03\x17\x73\x65\x6e\x76\x2d\x6f\x70\x73\x3a\x2d"
  "\x3e\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x16\x04\x92\x01"
  "\x0a\x81\x85\x02\x91\x01\x08\x81\x85\x02\x90\x01\x06\x81\x83\x02"
  "\x8f\x01\x04\x83\x04\x09\x13\x17\x02\x0b\x04\x1d\x73\x79\x6e\x74"
  "\x61\x63\x74\x69\x63\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x2f\x72\x65\x6e\x61\x6d\x65\x18\x03\x13\x6d\x61\x6b\x65\x2d"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x69\x74\x65\x6d\x05\x1d\x73"
  "\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x2f\x64\x65\x66\x69\x6e\x65\x19\x04\x96\x01\x0a"
  "\x81\x89\x02\x95\x01\x08\x81\x87\x02\x94\x01\x06\x81\x85\x02\x93"
  "\x01\x04\x84\x06\x09\x13\x1a\x02\x0c\x05\x6e\x75\x6c\x6c\x1b\x97"
  "\x01\x04\x83\x04\x03\x1c\x02\x0d\x31\x43\x61\x6e\x27\x74\x20\x6c"
  "\x6f\x6f\x6b\x75\x70\x20\x6e\x61\x6d\x65\x20\x69\x6e\x20\x6e\x75"
  "\x6c\x6c\x20\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x20\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x3a\x04\x06\x65\x72\x72\x6f\x72"
  "\x1d\x02\x98\x01\x04\x84\x06\x03\x0a\x1e\x02\x0e\x2f\x43\x61\x6e"
  "\x27\x74\x20\x62\x69\x6e\x64\x20\x6e\x61\x6d\x65\x20\x69\x6e\x20"
  "\x6e\x75\x6c\x6c\x20\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x20\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x3a\x05\x1d\x02\x99\x01"
  "\x04\x85\x08\x03\x0a\x1f\x02\x0f\x31\x43\x61\x6e\x27\x74\x20\x72"
  "\x65\x6e\x61\x6d\x65\x20\x6e\x61\x6d\x65\x20\x69\x6e\x20\x6e\x75"
  "\x6c\x6c\x20\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x20\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x3a\x04\x1d\x02\x9a\x01\x04\x84"
  "\x06\x03\x0a\x20\x02\x10\x2e\x43\x61\x6e\x27\x74\x20\x65\x76\x61"
  "\x6c\x75\x61\x74\x65\x20\x69\x6e\x20\x6e\x75\x6c\x6c\x20\x73\x79"
  "\x6e\x74\x61\x63\x74\x69\x63\x20\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x2e\x03\x1d\x02\x9b\x01\x04\x83\x04\x03\x0a\x21\x02"
  "\x11\x23\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x3e\x73"
  "\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x11\x72\x75\x6e\x74\x69\x6d\x65\x2d\x73\x65\x6e"
  "\x76\x2d\x6f\x70\x73\x22\x02\x04\x16\x67\x75\x61\x72\x61\x6e\x74"
  "\x65\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x04\x0a"
  "\x6d\x61\x6b\x65\x2d\x73\x65\x6e\x76\x23\x03\x9e\x01\x08\x81\x83"
  "\x02\x9d\x01\x06\x81\x83\x02\x9c\x01\x04\x83\x04\x07\x12\x24\x02"
  "\x12\x0c\x08\x72\x75\x6e\x74\x69\x6d\x65\x03\x19\x69\x6e\x74\x65"
  "\x72\x70\x72\x65\x74\x65\x72\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x3f\x02\xa0\x01\x06\x81\x83\x02\x9f\x01\x04\x83\x04"
  "\x05\x0d\x25\x02\x13\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70"
  "\x65\x3f\x1e\x04\x19\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x2d\x6c\x6f\x6f\x6b\x75\x70\x2d\x6d\x61\x63\x72\x6f\x03\x0b\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x04\x29\x6e\x6f\x6e\x2d\x68"
  "\x79\x67\x69\x65\x6e\x69\x63\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72"
  "\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65\x78\x70\x61\x6e"
  "\x64\x65\x72\x04\xa5\x01\x0c\x81\x87\x02\xa4\x01\x0a\x81\x85\x02"
  "\xa3\x01\x08\x81\x83\x02\xa2\x01\x06\x84\x06\xa1\x01\x04\x81\x85"
  "\x02\x0b\x1a\x26\x02\x14\x05\x19\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x2d\x64\x65\x66\x69\x6e\x65\x2d\x6d\x61\x63\x72\x6f"
  "\x02\xa6\x01\x04\x85\x08\x03\x27\x02\x15\x03\x1c\x72\x65\x6e\x61"
  "\x6d\x65\x2d\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x2d\x69\x64\x65"
  "\x6e\x74\x69\x66\x69\x65\x72\x28\x02\xa7\x01\x04\x84\x06\x03\x29"
  "\x02\x16\xa8\x01\x04\x83\x04\x03\x2a\x02\x17\x20\x74\x6f\x70\x2d"
  "\x6c\x65\x76\x65\x6c\x20\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x20"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x1b\x0c\x0d\x25\x6d"
  "\x61\x6b\x65\x2d\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x2d\x73\x79"
  "\x6e\x74\x61\x63\x74\x69\x63\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x1b\x0c\x74\x6c\x2d\x73\x65\x6e\x76\x2d\x6f\x70\x73"
  "\x0c\x02\x04\x20\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x73\x79"
  "\x6e\x74\x61\x63\x74\x69\x63\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x2b\x03\x0e\x05\x19\x65\x72\x72\x6f\x72\x3a\x62\x61"
  "\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74"
  "\x04\x0e\x6d\x61\x6b\x65\x2d\x74\x6c\x2d\x73\x74\x61\x74\x65\x2c"
  "\x04\x23\x06\xae\x01\x0e\x81\x85\x02\xad\x01\x0c\x81\x83\x02\xac"
  "\x01\x0a\x81\x83\x02\xab\x01\x08\x81\x83\x02\xaa\x01\x06\x81\x83"
  "\x02\xa9\x01\x04\x83\x04\x0d\x25\x2d\x02\x18\x0d\xaf\x01\x04\x83"
  "\x04\x03\x0d\x02\x19\x04\x63\x64\x72\x2e\x03\x0f\x74\x6c\x2d\x73"
  "\x74\x61\x74\x65\x2d\x62\x6f\x75\x6e\x64\x2f\x03\x10\x74\x6c\x2d"
  "\x73\x74\x61\x74\x65\x2d\x70\x61\x72\x65\x6e\x74\x30\x04\x05\x61"
  "\x73\x73\x71\x31\x04\x1d\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x2d"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2f\x6c\x6f\x6f\x6b"
  "\x75\x70\x32\x05\xb3\x01\x0a\x81\x87\x02\xb2\x01\x08\x81\x87\x02"
  "\xb1\x01\x06\x81\x85\x02\xb0\x01\x04\x84\x06\x09\x16\x33\x02\x1a"
  "\x09\x73\x65\x74\x2d\x63\x64\x72\x21\x34\x02\x03\x2f\x04\x31\x04"
  "\x14\x73\x65\x74\x2d\x74\x6c\x2d\x73\x74\x61\x74\x65\x2d\x62\x6f"
  "\x75\x6e\x64\x21\x35\x04\xb6\x01\x08\x81\x89\x02\xb5\x01\x06\x81"
  "\x87\x02\xb4\x01\x04\x85\x08\x07\x13\x36\x02\x1b\x03\x28\x02\xb7"
  "\x01\x04\x84\x06\x03\x28\x02\x1c\x03\x30\x03\x23\x73\x79\x6e\x74"
  "\x61\x63\x74\x69\x63\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x2d\x3e\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x37\x03"
  "\xb9\x01\x06\x81\x83\x02\xb8\x01\x04\x83\x04\x05\x0d\x38\x02\x1d"
  "\x24\x6d\x61\x6b\x65\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x73"
  "\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x39\x12\x69\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x73"
  "\x65\x6e\x76\x2d\x6f\x70\x73\x3a\x02\x04\x2b\x02\x0f\x6d\x61\x6b"
  "\x65\x2d\x72\x65\x6e\x61\x6d\x65\x2d\x69\x64\x04\x23\x06\x14\x6d"
  "\x61\x6b\x65\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x73\x74\x61"
  "\x74\x65\x3b\x05\xbe\x01\x0c\x81\x87\x02\xbd\x01\x0a\x81\x85\x02"
  "\xbc\x01\x08\x81\x83\x02\xbb\x01\x06\x81\x83\x02\xba\x01\x04\x83"
  "\x04\x0b\x1b\x3c\x02\x1e\x09\x69\x6e\x74\x65\x72\x6e\x61\x6c\xbf"
  "\x01\x04\x83\x04\x03\x3d\x02\x1f\x2e\x03\x15\x69\x6e\x74\x65\x72"
  "\x6e\x61\x6c\x2d\x73\x74\x61\x74\x65\x2d\x62\x6f\x75\x6e\x64\x2e"
  "\x03\x14\x69\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x73\x74\x61\x74\x65"
  "\x2d\x66\x72\x65\x65\x3e\x03\x16\x69\x6e\x74\x65\x72\x6e\x61\x6c"
  "\x2d\x73\x74\x61\x74\x65\x2d\x70\x61\x72\x65\x6e\x74\x3f\x04\x31"
  "\x04\x32\x04\x19\x73\x65\x74\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c"
  "\x2d\x73\x74\x61\x74\x65\x2d\x66\x72\x65\x65\x21\x40\x07\xc8\x01"
  "\x14\x81\x89\x02\xc7\x01\x12\x81\x87\x02\xc6\x01\x10\x81\x85\x02"
  "\xc5\x01\x0e\x81\x8b\x02\xc4\x01\x0c\x81\x87\x02\xc3\x01\x0a\x81"
  "\x89\x02\xc2\x01\x08\x81\x85\x02\xc1\x01\x06\x81\x87\x02\xc0\x01"
  "\x04\x84\x06\x13\x24\x41\x02\x20\x26\x50\x72\x65\x6d\x61\x74\x75"
  "\x72\x65\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x74\x6f\x20"
  "\x72\x65\x73\x65\x72\x76\x65\x64\x20\x6e\x61\x6d\x65\x3a\x21\x43"
  "\x61\x6e\x27\x74\x20\x64\x65\x66\x69\x6e\x65\x20\x6e\x61\x6d\x65"
  "\x3b\x20\x61\x6c\x72\x65\x61\x64\x79\x20\x66\x72\x65\x65\x3a\x34"
  "\x02\x03\x2e\x03\x3e\x04\x31\x03\x14\x72\x65\x73\x65\x72\x76\x65"
  "\x64\x2d\x6e\x61\x6d\x65\x2d\x69\x74\x65\x6d\x3f\x04\x1d\x04\x0d"
  "\x73\x79\x6e\x74\x61\x78\x2d\x65\x72\x72\x6f\x72\x04\x1a\x73\x65"
  "\x74\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x73\x74\x61\x74\x65"
  "\x2d\x62\x6f\x75\x6e\x64\x21\x34\x08\xcf\x01\x10\x81\x89\x02\xce"
  "\x01\x0e\x81\x89\x02\xcd\x01\x0c\x81\x8b\x02\xcc\x01\x0a\x81\x89"
  "\x02\xcb\x01\x08\x81\x89\x02\xca\x01\x06\x81\x87\x02\xc9\x01\x04"
  "\x85\x08\x0f\x25\x31\x02\x21\x03\x1c\x69\x6e\x74\x65\x72\x6e\x61"
  "\x6c\x2d\x73\x74\x61\x74\x65\x2d\x72\x65\x6e\x61\x6d\x65\x2d\x73"
  "\x74\x61\x74\x65\x42\x04\x12\x72\x65\x6e\x61\x6d\x65\x2d\x69\x64"
  "\x65\x6e\x74\x69\x66\x69\x65\x72\x03\xd1\x01\x06\x81\x85\x02\xd0"
  "\x01\x04\x84\x06\x05\x0d\x43\x02\x22\x03\x3f\x03\x37\x03\xd3\x01"
  "\x06\x81\x83\x02\xd2\x01\x04\x83\x04\x05\x0d\x44\x02\x23\x23\x6d"
  "\x61\x6b\x65\x2d\x70\x61\x72\x74\x69\x61\x6c\x2d\x73\x79\x6e\x74"
  "\x61\x63\x74\x69\x63\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x45\x11\x70\x61\x72\x74\x69\x61\x6c\x2d\x73\x65\x6e\x76\x2d"
  "\x6f\x70\x73\x46\x02\x04\x21\x67\x75\x61\x72\x61\x6e\x74\x65\x65"
  "\x2d\x6c\x69\x73\x74\x2d\x6f\x66\x2d\x75\x6e\x69\x71\x75\x65\x2d"
  "\x73\x79\x6d\x62\x6f\x6c\x73\x04\x2b\x05\x14\x25\x6d\x61\x6b\x65"
  "\x2d\x70\x61\x72\x74\x69\x61\x6c\x2d\x73\x74\x61\x74\x65\x47\x04"
  "\x23\x05\xd9\x01\x0e\x81\x87\x02\xd8\x01\x0c\x81\x87\x02\xd7\x01"
  "\x0a\x81\x87\x02\xd6\x01\x08\x81\x87\x02\xd5\x01\x06\x81\x87\x02"
  "\xd4\x01\x04\x85\x08\x0d\x1d\x48\x02\x24\x08\x70\x61\x72\x74\x69"
  "\x61\x6c\xda\x01\x04\x83\x04\x03\x49\x02\x25\x03\x14\x70\x61\x72"
  "\x74\x69\x61\x6c\x2d\x73\x74\x61\x74\x65\x2d\x6e\x61\x6d\x65\x73"
  "\x4a\x04\x32\x03\x18\x70\x61\x72\x74\x69\x61\x6c\x2d\x73\x74\x61"
  "\x74\x65\x2d\x65\x6c\x73\x65\x2d\x73\x65\x6e\x76\x4b\x03\x19\x70"
  "\x61\x72\x74\x69\x61\x6c\x2d\x73\x74\x61\x74\x65\x2d\x6e\x61\x6d"
  "\x65\x73\x2d\x73\x65\x6e\x76\x4c\x04\x05\x6d\x65\x6d\x71\x4d\x06"
  "\xde\x01\x0a\x81\x89\x02\xdd\x01\x08\x81\x87\x02\xdc\x01\x06\x81"
  "\x85\x02\xdb\x01\x04\x84\x06\x09\x17\x4e\x02\x26\x32\x43\x61\x6e"
  "\x27\x74\x20\x62\x69\x6e\x64\x20\x6e\x61\x6d\x65\x20\x69\x6e\x20"
  "\x70\x61\x72\x74\x69\x61\x6c\x20\x73\x79\x6e\x74\x61\x63\x74\x69"
  "\x63\x20\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x3a\x06\x1d"
  "\x02\xdf\x01\x04\x85\x08\x03\x0a\x4f\x02\x27\x03\x4a\x04\x18\x03"
  "\x4b\x03\x4c\x04\x4d\x06\xe3\x01\x0a\x81\x89\x02\xe2\x01\x08\x81"
  "\x87\x02\xe1\x01\x06\x81\x85\x02\xe0\x01\x04\x84\x06\x09\x17\x4d"
  "\x02\x28\x31\x43\x61\x6e\x27\x74\x20\x65\x76\x61\x6c\x75\x61\x74"
  "\x65\x20\x69\x6e\x20\x70\x61\x72\x74\x69\x61\x6c\x20\x73\x79\x6e"
  "\x74\x61\x63\x74\x69\x63\x20\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65"
  "\x6e\x74\x3a\x04\x1d\x02\xe4\x01\x04\x83\x04\x03\x0a\x1d\x28\x4b"
  "\x49\x04\x4e\x04\x4f\x04\x4d\x04\x1d\x04\x46\x4c\x0a\x65\x6c\x73"
  "\x65\x2d\x73\x65\x6e\x76\x4f\x4a\x0b\x6e\x61\x6d\x65\x73\x2d\x73"
  "\x65\x6e\x76\x4e\x0f\x70\x61\x72\x74\x69\x61\x6c\x2d\x73\x74\x61"
  "\x74\x65\x3f\x06\x6e\x61\x6d\x65\x73\x4d\x47\x10\x3c\x70\x61\x72"
  "\x74\x69\x61\x6c\x2d\x73\x74\x61\x74\x65\x3e\x4c\x4d\x4e\x4f\x3a"
  "\x45\x48\x04\x42\x3d\x04\x41\x04\x31\x04\x43\x04\x44\x04\x40\x0d"
  "\x72\x65\x6e\x61\x6d\x65\x2d\x73\x74\x61\x74\x65\x4f\x3e\x34\x05"
  "\x66\x72\x65\x65\x4e\x2e\x3f\x10\x69\x6e\x74\x65\x72\x6e\x61\x6c"
  "\x2d\x73\x74\x61\x74\x65\x3f\x3b\x11\x3c\x69\x6e\x74\x65\x72\x6e"
  "\x61\x6c\x2d\x73\x74\x61\x74\x65\x3e\x4d\x07\x70\x61\x72\x65\x6e"
  "\x74\x4b\x06\x62\x6f\x75\x6e\x64\x4a\x4e\x4f\x0c\x39\x3c\x04\x35"
  "\x0d\x04\x33\x04\x36\x04\x28\x04\x38\x04\x2f\x30\x4a\x0a\x74\x6c"
  "\x2d\x73\x74\x61\x74\x65\x3f\x4b\x2c\x0b\x3c\x74\x6c\x2d\x73\x74"
  "\x61\x74\x65\x3e\x4f\x4b\x4a\x22\x1b\x2d\x04\x25\x04\x26\x06\x27"
  "\x04\x29\x04\x2a\x04\x1b\x6e\x75\x6c\x6c\x2d\x73\x79\x6e\x74\x61"
  "\x63\x74\x69\x63\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x24\x04\x0e\x6e\x75\x6c\x6c\x2d\x73\x65\x6e\x76\x2d\x6f\x70\x73"
  "\x4e\x02\x1c\x04\x1e\x04\x1f\x04\x20\x04\x21\x04\x16\x0f\x62\x69"
  "\x6e\x64\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x21\x37\x18\x19\x32"
  "\x21\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x65\x6e\x76\x69\x72"
  "\x6f\x6e\x6d\x65\x6e\x74\x2f\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c"
  "\x3f\x0e\x18\x2d\x3e\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x1a\x04\x17\x04\x15\x04"
  "\x13\x04\x11\x04\x0f\x04\x0b\x04\x04\x14\x0e\x2d\x3e\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x4b\x12\x07\x72\x65\x6e\x61\x6d"
  "\x65\x4a\x10\x07\x64\x65\x66\x69\x6e\x65\x49\x0a\x07\x6c\x6f\x6f"
  "\x6b\x75\x70\x48\x0a\x73\x65\x6e\x76\x2d\x6f\x70\x73\x3f\x05\x74"
  "\x79\x70\x65\x47\x0e\x6d\x61\x6b\x65\x2d\x73\x65\x6e\x76\x2d\x6f"
  "\x70\x73\x46\x0b\x3c\x73\x65\x6e\x76\x2d\x6f\x70\x73\x3e\x45\x47"
  "\x48\x49\x4a\x4b\x09\x2b\x04\x04\x06\x73\x74\x61\x74\x65\x4b\x04"
  "\x6f\x70\x73\x4a\x23\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69"
  "\x67\x6e\x6d\x65\x6e\x74\x18\x3c\x73\x79\x6e\x74\x61\x63\x74\x69"
  "\x63\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x3e\x49\x4a"
  "\x4b\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70"
  "\x6c\x65\x02\x49\x45\x4e\x4f\x4d\x4c\x07\x04\x11\x6d\x61\x6b\x65"
  "\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x04\x13\x72\x65"
  "\x63\x6f\x72\x64\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72"
  "\x03\x11\x72\x65\x63\x6f\x72\x64\x2d\x70\x72\x65\x64\x69\x63\x61"
  "\x74\x65\x04\x10\x72\x65\x63\x6f\x72\x64\x2d\x61\x63\x63\x65\x73"
  "\x73\x6f\x72\x07\x46\x04\x23\x04\x10\x72\x65\x63\x6f\x72\x64\x2d"
  "\x6d\x6f\x64\x69\x66\x69\x65\x72\x08\x76\xee\x01\x80\x80\x04\x75"
  "\xec\x01\x81\x81\x02\x74\xea\x01\x81\x81\x02\x73\xe8\x01\x81\x87"
  "\x02\x72\xe6\x01\x81\x85\x02\x71\xe4\x01\x81\x83\x02\x70\xe2\x01"
  "\x81\x85\x02\x6f\xe0\x01\x81\x89\x02\x6e\xde\x01\x81\x83\x02\x6d"
  "\xdc\x01\x81\x85\x02\x6c\xda\x01\x81\x89\x02\x6b\xd8\x01\x81\x83"
  "\x02\x6a\xd6\x01\x81\x85\x02\x69\xd4\x01\x81\x89\x02\x68\xd2\x01"
  "\x81\x83\x02\x67\xd0\x01\x81\x85\x02\x66\xce\x01\x81\x87\x02\x65"
  "\xcc\x01\x81\x83\x02\x64\xca\x01\x81\x85\x02\x63\xc8\x01\x81\x89"
  "\x02\x62\xc6\x01\x81\x83\x02\x61\xc4\x01\x81\x83\x02\x60\xc2\x01"
  "\x81\x85\x02\x5f\xc0\x01\x81\x83\x02\x5e\xbe\x01\x81\x85\x02\x5d"
  "\xbc\x01\x81\x83\x02\x5c\xba\x01\x81\x85\x02\x5b\xb8\x01\x81\x89"
  "\x02\x5a\xb6\x01\x81\x83\x02\x59\xb4\x01\x81\x85\x02\x58\xb2\x01"
  "\x81\x89\x02\x57\xb0\x01\x81\x83\x02\x56\xae\x01\x81\x85\x02\x55"
  "\xac\x01\x81\x89\x02\x54\xaa\x01\x81\x83\x02\x53\xa8\x01\x81\x85"
  "\x02\x52\xa6\x01\x81\x89\x02\x51\xa4\x01\x81\x83\x02\x50\xa2\x01"
  "\x81\x85\x02\x4f\xa0\x01\x81\x89\x02\x4e\x9e\x01\x81\x83\x02\x4d"
  "\x9c\x01\x81\x85\x02\x4c\x9a\x01\x81\x89\x02\x4b\x98\x01\x81\x83"
  "\x02\x4a\x96\x01\x81\x85\x02\x49\x94\x01\x81\x87\x02\x48\x92\x01"
  "\x81\x83\x02\x47\x90\x01\x81\x85\x02\x46\x8e\x01\x81\x89\x02\x45"
  "\x8c\x01\x81\x83\x02\x44\x8a\x01\x81\x83\x02\x43\x88\x01\x81\x85"
  "\x02\x42\x86\x01\x81\x83\x02\x41\x84\x01\x81\x85\x02\x40\x82\x01"
  "\x81\x83\x02\x3f\x80\x01\x81\x85\x02\x3e\x7e\x81\x89\x02\x3d\x7c"
  "\x81\x83\x02\x3c\x7a\x81\x85\x02\x3b\x78\x81\x89\x02\x3a\x76\x81"
  "\x83\x02\x39\x74\x81\x85\x02\x38\x72\x81\x89\x02\x37\x70\x81\x83"
  "\x02\x36\x6e\x81\x85\x02\x35\x6c\x81\x87\x02\x34\x6a\x81\x83\x02"
  "\x33\x68\x81\x85\x02\x32\x66\x81\x89\x02\x31\x64\x81\x83\x02\x30"
  "\x62\x81\x83\x02\x2f\x60\x81\x85\x02\x2e\x5e\x81\x83\x02\x2d\x5c"
  "\x81\x83\x02\x2c\x5a\x81\x85\x02\x2b\x58\x81\x83\x02\x2a\x56\x81"
  "\x85\x02\x29\x54\x81\x89\x02\x28\x52\x81\x83\x02\x27\x50\x81\x83"
  "\x02\x26\x4e\x81\x85\x02\x25\x4c\x81\x83\x02\x24\x4a\x81\x85\x02"
  "\x23\x48\x81\x89\x02\x22\x46\x81\x83\x02\x21\x44\x81\x85\x02\x20"
  "\x42\x81\x89\x02\x1f\x40\x81\x83\x02\x1e\x3e\x81\x85\x02\x1d\x3c"
  "\x81\x89\x02\x1c\x3a\x81\x83\x02\x1b\x38\x81\x85\x02\x1a\x36\x81"
  "\x89\x02\x19\x34\x81\x83\x02\x18\x32\x81\x85\x02\x17\x30\x81\x89"
  "\x02\x16\x2e\x81\x83\x02\x15\x2c\x81\x85\x02\x14\x2a\x81\x87\x02"
  "\x13\x28\x81\x83\x02\x12\x26\x81\x85\x02\x11\x24\x81\x89\x02\x10"
  "\x22\x81\x83\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x85\x02\x0d\x1c"
  "\x81\x83\x02\x0c\x1a\x81\x85\x02\x0b\x18\x81\x89\x02\x0a\x16\x81"
  "\x83\x02\x09\x14\x81\x85\x02\x08\x12\x81\x89\x02\x07\x10\x81\x83"
  "\x02\x06\x0e\x81\x85\x02\x05\x0c\x81\x87\x02\x04\x0a\x81\x83\x02"
  "\x03\x08\x81\x85\x02\x02\x06\x81\x89\x02\x01\x04\x81\x83\x02\xed"
  "\x01\xed\x02";

SCHEME_OBJECT *
syntax_environment_so_data_73708a6db2d798cf (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_syntax_environment_so_data_73708a6db2d798cf [0]))), (sizeof (prog_syntax_environment_so_data_73708a6db2d798cf)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_129]));
}

DECLARE_COMPILED_DATA_NS ("syntax-environment.so", syntax_environment_so_data_73708a6db2d798cf)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("syntax-environment.so", "f6840f71b72c7e45")
